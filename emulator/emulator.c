/*
 * navassa-open emulator — Unicorn-based Cortex-M4 firmware emulator.
 *
 * Merged from two analysis iterations:
 *  - Strategy A (default): loads the full binary at the firmware base, pre-loads
 *    the RAM payload (binary offset 0x36e24 -> 0x20036e24) and executes the real
 *    RAM firmware after the boot code jumps to it.
 *  - Strategy B (STUB_RAM=1): stubs the RAM entry point with `BX LR` (0x4770)
 *    and pre-seeds 0x49000014 with 0x90 so the `== 9` boot-mode branch is taken.
 *
 * Usage:   emulator <firmware.bin> <base_addr_hex> [timeout_ms]
 * Env:     STUB_RAM=1   strategy B (stub RAM callback + boot-mode preseed)
 *          TRACE=1      per-instruction PC trace + MMIO write logging
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <inttypes.h>
#include <unicorn/unicorn.h>

#define DEFAULT_TIMEOUT_MS  10000

#define RAM_BASE            0x20000000
#define RAM_SIZE            0x200000
#define MMIO_BASE           0x40000000
#define MMIO_SIZE           0x20000000
#define SCB_BASE            0xe0000000
#define SCB_SIZE            0x00100000
#define RAM_FW_BASE         0x20036e24
#define RAM_FW_OFFSET       0x36e24
#define PAGE_SIZE           0x1000

/* Strategy B constants. The reset handler reads the boot byte at
 * 0x2001fcee (r4 = 0x2001fced) and compares it to 9. */
#define BOOT_BYTE_ADDR      0x2001fcee
#define BOOT_BYTE_VAL       9
#define BX_LR               0x4770

static int trace_enabled = 0;

static size_t align_page(size_t size)
{
	return (size + PAGE_SIZE - 1) & ~(PAGE_SIZE - 1);
}

static void hook_code(uc_engine *uc, uint64_t address, uint32_t size, void *user_data)
{
	printf("PC = 0x%08" PRIx64 "\n", address);
}

static bool hook_mem_write(uc_engine *uc, uc_mem_type type, uint64_t address,
			   int size, int64_t value, void *user_data)
{
	printf("  WRITE 0x%08" PRIx64 " = 0x%0*" PRIx64 " (%d bytes)\n",
	       address, size * 2, value, size);
	return true;
}

static void hook_mem_invalid(uc_engine *uc, uc_mem_type type, uint64_t address,
			     int size, int64_t value, void *user_data)
{
	uint64_t pc;
	uc_reg_read(uc, UC_ARM_REG_PC, &pc);
	fprintf(stderr,
		"[!] %s at 0x%08" PRIx64 " size=%d val=0x%" PRIx64 " PC=0x%08" PRIx64 "\n",
		type == UC_MEM_READ_UNMAPPED  ? "RD_UNM" :
		type == UC_MEM_WRITE_UNMAPPED ? "WR_UNM" :
		type == UC_MEM_FETCH_UNMAPPED ? "FETCH"  : "OTHER",
		address, size, value, pc & 0xFFFFFFFF);
	uc_emu_stop(uc);
}

static void dump_regs(uc_engine *uc)
{
	uint32_t v;
	uc_reg_read(uc, UC_ARM_REG_PC, &v); printf("    PC=0x%08x ", v);
	uc_reg_read(uc, UC_ARM_REG_SP, &v); printf("SP=0x%08x\n", v);
	uc_reg_read(uc, UC_ARM_REG_R0, &v); printf("    R0=0x%08x ", v);
	uc_reg_read(uc, UC_ARM_REG_R4, &v); printf("R4=0x%08x\n", v);
	uc_reg_read(uc, UC_ARM_REG_LR, &v); printf("    LR=0x%08x\n", v);
}

int main(int argc, char **argv)
{
	if (argc < 3) {
		fprintf(stderr, "Usage: %s <firmware.bin> <base_addr> [timeout_ms]\n", argv[0]);
		return 1;
	}

	uint64_t timeout_ms = DEFAULT_TIMEOUT_MS;
	if (argc >= 4)
		timeout_ms = strtoul(argv[3], NULL, 10);

	trace_enabled = getenv("TRACE") != NULL;
	int stub_ram = getenv("STUB_RAM") != NULL;

	FILE *f = fopen(argv[1], "rb");
	if (!f) {
		perror("fopen");
		return 1;
	}

	fseek(f, 0, SEEK_END);
	long fsize = ftell(f);
	fseek(f, 0, SEEK_SET);

	uint8_t *code = malloc(fsize);
	if (fread(code, 1, fsize, f) != (size_t)fsize) {
		perror("fread");
		return 1;
	}
	fclose(f);

	uc_engine *uc;
	uc_err err = uc_open(UC_ARCH_ARM, UC_MODE_THUMB | UC_MODE_MCLASS, &uc);
	if (err) {
		printf("Failed to open unicorn: %s\n", uc_strerror(err));
		return 1;
	}

	/* Pin the CPU model explicitly. Must use the enum value; a string does
	 * not work. This is required for native Cortex-M instruction support
	 * (MRS/MSR PRIMASK/BASEPRI, CPSID/CPSIE, DSB/ISB). */
	err = uc_ctl(uc, UC_CTL_WRITE(UC_CTL_CPU_MODEL, 1), UC_CPU_ARM_CORTEX_M4);
	if (err)
		printf("[-] could not set Cortex-M4 model: %s\n", uc_strerror(err));
	else
		printf("[*] Cortex-M4 CPU model enabled\n");

	/* Memory map: flash, RAM, MMIO window, Cortex-M system control. */
	uint64_t firmware_base = strtoul(argv[2], NULL, 16);
	size_t fw_map_size = align_page(fsize);
	uc_mem_map(uc, firmware_base, fw_map_size, UC_PROT_ALL);
	uc_mem_map(uc, RAM_BASE, RAM_SIZE, UC_PROT_ALL);
	uc_mem_map(uc, MMIO_BASE, MMIO_SIZE, UC_PROT_READ | UC_PROT_WRITE);
	uc_mem_map(uc, SCB_BASE, SCB_SIZE, UC_PROT_READ | UC_PROT_WRITE);
	uc_mem_write(uc, firmware_base, code, fsize);

	/* Strategy A: pre-load the RAM payload from the binary tail. */
	long ram_fw_size = fsize - RAM_FW_OFFSET;
	if (ram_fw_size > 0) {
		uc_mem_write(uc, RAM_FW_BASE, code + RAM_FW_OFFSET, ram_fw_size);
		printf("Pre-loaded %ld bytes at 0x%08" PRIx64 " (flash offset 0x%x)\n",
		       ram_fw_size, (uint64_t)RAM_FW_BASE, RAM_FW_OFFSET);
	}

	/* Strategy B: stub the RAM entry point and pre-seed the boot byte
	 * at 0x2001fcee with 9 (checked by the reset handler at 0x0104419e). */
	if (stub_ram) {
		uint16_t bx_lr = BX_LR;
		uc_mem_write(uc, RAM_FW_BASE, &bx_lr, sizeof(bx_lr));
		uint8_t boot_byte = BOOT_BYTE_VAL;
		uc_mem_write(uc, BOOT_BYTE_ADDR, &boot_byte, sizeof(boot_byte));
		printf("[*] STUB_RAM: RAM entry stubbed with BX LR, "
		       "boot byte at 0x%08x pre-seeded with %d\n",
		       BOOT_BYTE_ADDR, BOOT_BYTE_VAL);
	}

	uc_hook hh_code, hh_write, hh_invalid;
	uc_hook_add(uc, &hh_invalid, UC_HOOK_MEM_UNMAPPED | UC_HOOK_MEM_PROT,
		    hook_mem_invalid, NULL, 1, 0);
	if (trace_enabled) {
		uc_hook_add(uc, &hh_code, UC_HOOK_CODE, hook_code, NULL, 1, 0);
		uc_hook_add(uc, &hh_write, UC_HOOK_MEM_WRITE, hook_mem_write, NULL, 1, 0);
	}

	/* Start from the vector table: SP at offset 0, reset at offset 4. */
	uint32_t sp, reset_vec;
	memcpy(&sp, code + 0, 4);
	memcpy(&reset_vec, code + 4, 4);
	uint32_t pc_start = reset_vec & ~1;

	uc_reg_write(uc, UC_ARM_REG_SP, &sp);
	uc_reg_write(uc, UC_ARM_REG_PC, &reset_vec);

	printf("Starting emulation:\n");
	printf("  SP = 0x%08x\n", sp);
	printf("  PC = 0x%08x\n", pc_start);
	printf("----------------------------------------\n");

	err = uc_emu_start(uc, reset_vec | 1, 0, timeout_ms * 1000, 0);
	if (err) {
		printf("\nEmulation stopped: %s\n", uc_strerror(err));
		dump_regs(uc);
	} else {
		printf("\nEmulation finished (timeout=%" PRIu64 " ms)\n", timeout_ms);
	}

	uc_close(uc);
	free(code);
	return 0;
}
