/*
 * navassa-open emulator — Unicorn-based Cortex-M4 firmware emulator.
 *
 * Modes:
 *   emulator <firmware.bin> <base_addr> [timeout_ms]
 *       Boot run: starts from the vector table, pre-loads the RAM payload
 *       (binary offset 0x36e24 -> 0x20036e24) and executes it.
 *       STUB_RAM=1: stubs the RAM entry point with `BX LR` (0x4770) and
 *       pre-seeds the boot byte at 0x2001fcee with 9.
 *
 *   emulator --compare <a.bin> <b.bin> <base_addr> [timeout_ms]
 *       Differential mode: runs both binaries with identical setup and
 *       diffs their side-effect traces (MMIO + contract RAM accesses).
 *       Exit code 0 = traces match, 1 = mismatch, 2 = error.
 *
 *   emulator --call <func_hex> <firmware.bin> <base_addr> [opts...]
 *       Harness mode: calls a single function at <func_hex> with chosen
 *       arguments and stops when it returns. Options:
 *           r0=0x.. r1=0x.. r2=0x.. r3=0x..   argument registers
 *           sp=0x..                            initial SP (default 0x20025580)
 *           seed=0xADDR=0xVAL                  write a 32-bit word before the call
 *           timeout=MS                         run timeout
 *
 * Environment:
 *   TRACE=1        console per-instruction PC trace + MMIO write logging
 *   TRACE_OUT=path write the side-effect trace to a file
 *   STUB_RAM=1     strategy B (see above), applies to boot runs
 *
 * Side-effect trace granularity (the "observable contract"):
 *   - all reads/writes in the MMIO window 0x40000000..0x5FFFFFFF
 *   - all reads/writes in the Cortex-M system space 0xe000e000..0xe000efff
 *   - reads/writes to the known contract RAM ranges (see contract_ram[])
 * Internal RAM scratch traffic is deliberately NOT traced — a correct C
 * reimplementation may use different scratch layout.
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

/* Harness: LR is pointed here; emulation stops when the call returns. */
#define HARNESS_RET         0x10000000

/* Side-effect trace ranges: MMIO window and Cortex-M system space. */
#define TRACE_MMIO_LO       0x40000000
#define TRACE_MMIO_HI       0x60000000
#define TRACE_SCB_LO        0xe000e000
#define TRACE_SCB_HI        0xe000f000

/* Contract RAM: part of the external interface — traced. */
static const struct { uint32_t lo, hi; } contract_ram[] = {
	{ 0x2001fcec, 0x2001fd00 },	/* boot state (0x2001fced / 0x2001fcee) */
	{ 0x200020d0, 0x200020e0 },	/* sub_100ae54 control block */
	{ 0x2002f440, 0x2002f460 },	/* words compared by sub_104423c */
	{ 0x20025160, 0x20025180 },	/* buffer pointer used by sub_100ae54 */
};
#define N_CONTRACT (sizeof(contract_ram) / sizeof(contract_ram[0]))

static int trace_enabled = 0;	/* TRACE=1 console verbosity */

/* ------------------------------------------------------------------ */
/* Side-effect trace                                                   */
/* ------------------------------------------------------------------ */

typedef struct {
	char kind;		/* 'R' or 'W' */
	uint8_t size;
	uint32_t addr;
	uint32_t value;
	uint32_t pc;
} ev_t;

static ev_t *ev_buf;
static size_t ev_len, ev_cap;

static void ev_push(char kind, uint32_t addr, int size, uint32_t value, uint32_t pc)
{
	if (ev_len == ev_cap) {
		ev_cap = ev_cap ? ev_cap * 2 : 4096;
		ev_buf = realloc(ev_buf, ev_cap * sizeof(ev_t));
		if (!ev_buf) {
			fprintf(stderr, "[!] out of memory for trace\n");
			exit(2);
		}
	}
	ev_buf[ev_len].kind = kind;
	ev_buf[ev_len].size = (uint8_t)size;
	ev_buf[ev_len].addr = addr;
	ev_buf[ev_len].value = value;
	ev_buf[ev_len].pc = pc;
	ev_len++;
}

static int in_trace_range(uint32_t addr)
{
	if (addr >= TRACE_MMIO_LO && addr < TRACE_MMIO_HI)
		return 1;
	if (addr >= TRACE_SCB_LO && addr < TRACE_SCB_HI)
		return 1;
	for (size_t i = 0; i < N_CONTRACT; i++)
		if (addr >= contract_ram[i].lo && addr < contract_ram[i].hi)
			return 1;
	return 0;
}

static uint32_t reg_pc(uc_engine *uc)
{
	uint32_t pc;
	uc_reg_read(uc, UC_ARM_REG_PC, &pc);
	return pc;
}

static bool hook_mem_read(uc_engine *uc, uc_mem_type type, uint64_t address,
			  int size, int64_t value, void *user_data)
{
	(void)type; (void)value; (void)user_data;
	uint32_t addr = (uint32_t)address;
	if (in_trace_range(addr))
		ev_push('R', addr, size, (uint32_t)value, reg_pc(uc));
	return true;
}

static bool hook_mem_write(uc_engine *uc, uc_mem_type type, uint64_t address,
			   int size, int64_t value, void *user_data)
{
	(void)type; (void)user_data;
	uint32_t addr = (uint32_t)address;
	if (trace_enabled)
		printf("  WRITE 0x%08x = 0x%0*x (%d bytes)\n",
		       addr, size * 2, (uint32_t)value, size);
	if (in_trace_range(addr))
		ev_push('W', addr, size, (uint32_t)value, reg_pc(uc));
	return true;
}

static void hook_code(uc_engine *uc, uint64_t address, uint32_t size, void *user_data)
{
	(void)uc; (void)size; (void)user_data;
	printf("PC = 0x%08" PRIx64 "\n", address);
}

static void hook_mem_invalid(uc_engine *uc, uc_mem_type type, uint64_t address,
			     int size, int64_t value, void *user_data)
{
	(void)user_data;
	fprintf(stderr,
		"[!] %s at 0x%08" PRIx64 " size=%d val=0x%" PRIx64 " PC=0x%08x\n",
		type == UC_MEM_READ_UNMAPPED  ? "RD_UNM" :
		type == UC_MEM_WRITE_UNMAPPED ? "WR_UNM" :
		type == UC_MEM_FETCH_UNMAPPED ? "FETCH"  : "OTHER",
		address, size, value, reg_pc(uc));
	uc_emu_stop(uc);
}

/* ------------------------------------------------------------------ */
/* Trace output / diff                                                 */
/* ------------------------------------------------------------------ */

static void save_trace(const char *path, const ev_t *evs, size_t n)
{
	FILE *f = fopen(path, "w");
	if (!f) {
		perror(path);
		return;
	}
	for (size_t i = 0; i < n; i++)
		fprintf(f, "%c %u 0x%08x 0x%08x 0x%08x\n",
			evs[i].kind, evs[i].size, evs[i].addr,
			evs[i].value, evs[i].pc);
	fclose(f);
}

static void print_trace_summary(const char *label, size_t n)
{
	size_t r = 0, w = 0;
	for (size_t i = 0; i < n; i++)
		(ev_buf[i].kind == 'R') ? r++ : w++;
	printf("[%s] trace: %zu events (%zu reads, %zu writes)\n",
	       label, n, r, w);
}

static void diff_traces(const ev_t *a, size_t na, const char *la,
			const ev_t *b, size_t nb, const char *lb)
{
	printf("[*] diff: %s has %zu events, %s has %zu events\n", la, na, lb, nb);

	size_t n = na < nb ? na : nb;
	size_t shown = 0;
	for (size_t i = 0; i < n; i++) {
		if (a[i].kind == b[i].kind && a[i].size == b[i].size &&
		    a[i].addr == b[i].addr && a[i].value == b[i].value) {
			/* PC may legitimately differ between rebuilds */
			continue;
		}
		printf("[-] first divergence at event %zu:\n", i);
		printf("    %s: %c %u 0x%08x = 0x%08x (PC=0x%08x)\n",
		       la, a[i].kind, a[i].size, a[i].addr, a[i].value, a[i].pc);
		printf("    %s: %c %u 0x%08x = 0x%08x (PC=0x%08x)\n",
		       lb, b[i].kind, b[i].size, b[i].addr, b[i].value, b[i].pc);
		if (++shown >= 10) {
			printf("[-] ... (further divergences suppressed)\n");
			break;
		}
	}
	if (na != nb) {
		printf("[-] trace length mismatch: %s=%zu %s=%zu\n", la, na, lb, nb);
		for (size_t i = n; i < (na < nb ? na : nb) + 5 && i < (na < nb ? nb : na); i++) {
			const ev_t *e = na < nb ? &b[i] : &a[i];
			printf("    extra in %s: %c %u 0x%08x = 0x%08x (PC=0x%08x)\n",
			       na < nb ? lb : la, e->kind, e->size, e->addr, e->value, e->pc);
		}
	}
	if (shown == 0 && na == nb)
		printf("[+] TRACES MATCH\n");
}

/* ------------------------------------------------------------------ */
/* Emulator setup / run                                                */
/* ------------------------------------------------------------------ */

static size_t align_page(size_t size)
{
	return (size + PAGE_SIZE - 1) & ~(PAGE_SIZE - 1);
}

/* Build a Unicorn instance with the firmware and all mappings applied.
 * Returns NULL on failure. */
static uc_engine *setup_uc(const uint8_t *code, long fsize, uint64_t firmware_base,
			   int stub_ram)
{
	uc_engine *uc;
	uc_err err = uc_open(UC_ARCH_ARM, UC_MODE_THUMB | UC_MODE_MCLASS, &uc);
	if (err) {
		printf("Failed to open unicorn: %s\n", uc_strerror(err));
		return NULL;
	}

	/* Pin the CPU model explicitly. Must use the enum value; a string does
	 * not work. Required for native Cortex-M instruction support
	 * (MRS/MSR PRIMASK/BASEPRI, CPSID/CPSIE, DSB/ISB). */
	err = uc_ctl(uc, UC_CTL_WRITE(UC_CTL_CPU_MODEL, 1), UC_CPU_ARM_CORTEX_M4);
	if (err)
		printf("[-] could not set Cortex-M4 model: %s\n", uc_strerror(err));
	else if (trace_enabled)
		printf("[*] Cortex-M4 CPU model enabled\n");

	/* Memory map: flash, RAM, MMIO window, Cortex-M system control,
	 * plus the harness return page. */
	uc_mem_map(uc, firmware_base, align_page(fsize), UC_PROT_ALL);
	uc_mem_map(uc, RAM_BASE, RAM_SIZE, UC_PROT_ALL);
	uc_mem_map(uc, MMIO_BASE, MMIO_SIZE, UC_PROT_READ | UC_PROT_WRITE);
	uc_mem_map(uc, SCB_BASE, SCB_SIZE, UC_PROT_READ | UC_PROT_WRITE);
	uc_mem_map(uc, HARNESS_RET, PAGE_SIZE, UC_PROT_ALL);
	uc_mem_write(uc, firmware_base, code, fsize);

	/* Pre-load the RAM payload from the binary tail. */
	long ram_fw_size = fsize - RAM_FW_OFFSET;
	if (ram_fw_size > 0)
		uc_mem_write(uc, RAM_FW_BASE, code + RAM_FW_OFFSET, ram_fw_size);

	/* Strategy B: stub the RAM entry point and pre-seed the boot byte. */
	if (stub_ram) {
		uint16_t bx_lr = BX_LR;
		uc_mem_write(uc, RAM_FW_BASE, &bx_lr, sizeof(bx_lr));
		uint8_t boot_byte = BOOT_BYTE_VAL;
		uc_mem_write(uc, BOOT_BYTE_ADDR, &boot_byte, sizeof(boot_byte));
		printf("[*] STUB_RAM: RAM entry stubbed with BX LR, "
		       "boot byte at 0x%08x pre-seeded with %d\n",
		       BOOT_BYTE_ADDR, BOOT_BYTE_VAL);
	}

	uc_hook hh_code, hh_write, hh_read, hh_invalid;
	uc_hook_add(uc, &hh_invalid, UC_HOOK_MEM_UNMAPPED | UC_HOOK_MEM_PROT,
		    hook_mem_invalid, NULL, 1, 0);
	uc_hook_add(uc, &hh_read, UC_HOOK_MEM_READ_AFTER, hook_mem_read, NULL, 1, 0);
	uc_hook_add(uc, &hh_write, UC_HOOK_MEM_WRITE, hook_mem_write, NULL, 1, 0);
	if (trace_enabled)
		uc_hook_add(uc, &hh_code, UC_HOOK_CODE, hook_code, NULL, 1, 0);

	return uc;
}

static void dump_regs(uc_engine *uc)
{
	uint32_t v;
	uc_reg_read(uc, UC_ARM_REG_PC, &v); printf("    PC=0x%08x ", v);
	uc_reg_read(uc, UC_ARM_REG_SP, &v); printf("SP=0x%08x\n", v);
	uc_reg_read(uc, UC_ARM_REG_R0, &v); printf("    R0=0x%08x ", v);
	uc_reg_read(uc, UC_ARM_REG_R1, &v); printf("R1=0x%08x\n", v);
	uc_reg_read(uc, UC_ARM_REG_R2, &v); printf("    R2=0x%08x ", v);
	uc_reg_read(uc, UC_ARM_REG_R3, &v); printf("R3=0x%08x\n", v);
	uc_reg_read(uc, UC_ARM_REG_R4, &v); printf("    R4=0x%08x ", v);
	uc_reg_read(uc, UC_ARM_REG_LR, &v); printf("LR=0x%08x\n", v);
}

/* ------------------------------------------------------------------ */
/* Modes                                                               */
/* ------------------------------------------------------------------ */

static uint8_t *read_file(const char *path, long *out_size)
{
	FILE *f = fopen(path, "rb");
	if (!f) {
		perror(path);
		return NULL;
	}
	fseek(f, 0, SEEK_END);
	long fsize = ftell(f);
	fseek(f, 0, SEEK_SET);
	uint8_t *buf = malloc(fsize);
	if (!buf || fread(buf, 1, fsize, f) != (size_t)fsize) {
		perror("read");
		fclose(f);
		return NULL;
	}
	fclose(f);
	*out_size = fsize;
	return buf;
}

static int do_boot_run(const char *bin, uint64_t firmware_base, uint64_t timeout_ms,
		       const char *label)
{
	int rc = 0;
	long fsize;
	uint8_t *code = read_file(bin, &fsize);
	if (!code)
		return 2;

	uc_engine *uc = setup_uc(code, fsize, firmware_base, getenv("STUB_RAM") != NULL);
	if (!uc)
		return 2;

	uint32_t sp, reset_vec;
	memcpy(&sp, code + 0, 4);
	memcpy(&reset_vec, code + 4, 4);

	uc_reg_write(uc, UC_ARM_REG_SP, &sp);
	uc_reg_write(uc, UC_ARM_REG_PC, &reset_vec);

	printf("[%s] boot run: SP=0x%08x PC=0x%08x\n", label, sp, reset_vec);
	uc_err err = uc_emu_start(uc, reset_vec | 1, 0, timeout_ms * 1000, 0);
	if (err) {
		printf("[%s] emulation stopped: %s\n", label, uc_strerror(err));
		dump_regs(uc);
		rc = 1;
	} else {
		printf("[%s] emulation finished (timeout=%" PRIu64 " ms)\n",
		       label, timeout_ms);
	}

	print_trace_summary(label, ev_len);

	const char *out = getenv("TRACE_OUT");
	if (out) {
		save_trace(out, ev_buf, ev_len);
		printf("[%s] trace saved to %s\n", label, out);
	}

	uc_close(uc);
	free(code);
	return rc;
}

static int do_compare(const char *bin_a, const char *bin_b, uint64_t firmware_base,
		      uint64_t timeout_ms)
{
	int rc;

	rc = do_boot_run(bin_a, firmware_base, timeout_ms, "A");
	if (rc == 2)
		return 2;
	size_t na = ev_len;
	ev_t *ta = malloc(na * sizeof(ev_t) + 1);
	memcpy(ta, ev_buf, na * sizeof(ev_t));

	ev_len = 0;			/* reset trace */

	rc = do_boot_run(bin_b, firmware_base, timeout_ms, "B");
	if (rc == 2)
		return 2;
	size_t nb = ev_len;

	diff_traces(ta, na, "A", ev_buf, nb, "B");

	const char *out = getenv("TRACE_OUT");
	if (out) {
		char path[512];
		snprintf(path, sizeof(path), "%s.a", out);
		save_trace(path, ta, na);
		snprintf(path, sizeof(path), "%s.b", out);
		save_trace(path, ev_buf, nb);
		printf("[*] traces saved to %s.a / %s.b\n", out, out);
	}

	free(ta);
	return 0;
}

static int do_harness(const char *func_str, const char *bin, uint64_t firmware_base,
		      char **opts, int nopts)
{
	uint32_t func = (uint32_t)strtoul(func_str, NULL, 16);
	uint32_t args[4] = { 0, 0, 0, 0 };
	uint32_t sp = 0x20025580;
	uint64_t timeout_ms = DEFAULT_TIMEOUT_MS;

	/* Seeds collected first (they may target the same ranges repeatedly). */
	uint32_t seed_addr[64], seed_val[64];
	int n_seeds = 0;

	for (int i = 0; i < nopts; i++) {
		char *o = opts[i];
		if (!strncmp(o, "r0=", 3)) args[0] = strtoul(o + 3, NULL, 16);
		else if (!strncmp(o, "r1=", 3)) args[1] = strtoul(o + 3, NULL, 16);
		else if (!strncmp(o, "r2=", 3)) args[2] = strtoul(o + 3, NULL, 16);
		else if (!strncmp(o, "r3=", 3)) args[3] = strtoul(o + 3, NULL, 16);
		else if (!strncmp(o, "sp=", 3)) sp = strtoul(o + 3, NULL, 16);
		else if (!strncmp(o, "timeout=", 8)) timeout_ms = strtoul(o + 8, NULL, 0);
		else if (!strncmp(o, "seed=", 5) && n_seeds < 64) {
			char *eq = strchr(o + 5, '=');
			if (!eq) {
				fprintf(stderr, "bad seed (want seed=0xADDR=0xVAL): %s\n", o);
				return 2;
			}
			*eq = 0;
			seed_addr[n_seeds] = strtoul(o + 5, NULL, 0);
			seed_val[n_seeds] = strtoul(eq + 1, NULL, 0);
			n_seeds++;
		} else {
			fprintf(stderr, "unknown option: %s\n", o);
			return 2;
		}
	}

	long fsize;
	uint8_t *code = read_file(bin, &fsize);
	if (!code)
		return 2;

	uc_engine *uc = setup_uc(code, fsize, firmware_base, getenv("STUB_RAM") != NULL);
	if (!uc)
		return 2;

	for (int i = 0; i < n_seeds; i++) {
		uc_mem_write(uc, seed_addr[i], &seed_val[i], 4);
		printf("[*] seed 0x%08x = 0x%08x\n", seed_addr[i], seed_val[i]);
	}

	uc_reg_write(uc, UC_ARM_REG_SP, &sp);
	uc_reg_write(uc, UC_ARM_REG_R0, &args[0]);
	uc_reg_write(uc, UC_ARM_REG_R1, &args[1]);
	uc_reg_write(uc, UC_ARM_REG_R2, &args[2]);
	uc_reg_write(uc, UC_ARM_REG_R3, &args[3]);
	uint32_t lr = HARNESS_RET | 1;
	uc_reg_write(uc, UC_ARM_REG_LR, &lr);

	printf("[*] harness call: func=0x%08x r0-r3={0x%08x,0x%08x,0x%08x,0x%08x} SP=0x%08x\n",
	       func, args[0], args[1], args[2], args[3], sp);

	uc_err err = uc_emu_start(uc, func | 1, HARNESS_RET, timeout_ms * 1000, 0);
	if (err) {
		printf("[-] harness stopped: %s\n", uc_strerror(err));
		dump_regs(uc);
	} else {
		printf("[+] function returned\n");
	}

	uint32_t v;
	uc_reg_read(uc, UC_ARM_REG_R0, &v);
	printf("[*] return value R0=0x%08x\n", v);

	print_trace_summary("harness", ev_len);

	const char *out = getenv("TRACE_OUT");
	if (out) {
		save_trace(out, ev_buf, ev_len);
		printf("[*] trace saved to %s\n", out);
	}

	uc_close(uc);
	free(code);
	return 0;
}

static void usage(const char *prog)
{
	fprintf(stderr,
		"Usage:\n"
		"  %s <firmware.bin> <base_addr> [timeout_ms]\n"
		"  %s --compare <a.bin> <b.bin> <base_addr> [timeout_ms]\n"
		"  %s --call <func_hex> <firmware.bin> <base_addr> "
		"[r0=..] [r1=..] [r2=..] [r3=..] [sp=..] [seed=0xA=0xV] [timeout=MS]\n"
		"Env: TRACE=1 TRACE_OUT=path STUB_RAM=1\n",
		prog, prog, prog);
}

int main(int argc, char **argv)
{
	if (argc < 3) {
		usage(argv[0]);
		return 2;
	}

	trace_enabled = getenv("TRACE") != NULL;

	if (!strcmp(argv[1], "--compare")) {
		if (argc < 5) {
			usage(argv[0]);
			return 2;
		}
		uint64_t base = strtoul(argv[4], NULL, 16);
		uint64_t t = argc >= 6 ? strtoul(argv[5], NULL, 10) : DEFAULT_TIMEOUT_MS;
		return do_compare(argv[2], argv[3], base, t);
	}

	if (!strcmp(argv[1], "--call")) {
		if (argc < 5) {
			usage(argv[0]);
			return 2;
		}
		uint64_t base = strtoul(argv[4], NULL, 16);
		return do_harness(argv[2], argv[3], base, argv + 5, argc - 5);
	}

	uint64_t base = strtoul(argv[2], NULL, 16);
	uint64_t t = argc >= 4 ? strtoul(argv[3], NULL, 10) : DEFAULT_TIMEOUT_MS;
	return do_boot_run(argv[1], base, t, "boot");
}
