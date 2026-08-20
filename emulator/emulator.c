#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
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

static size_t align_page(size_t size)
{
    return (size + PAGE_SIZE - 1) & ~(PAGE_SIZE - 1);
}

static void hook_code(uc_engine *uc, uint64_t address, uint32_t size, void *user_data)
{
    printf("PC = 0x%08lx\n", address);
}

static bool hook_mem_write(uc_engine *uc, uc_mem_type type, uint64_t address, int size, int64_t value, void *user_data)
{
    printf("  WRITE 0x%08lx = 0x%0*lx (%d bytes)\n", address, size * 2, value, size);
    return true;
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

    FILE *f = fopen(argv[1], "rb");
    if (!f) {
        perror("fopen");
        return 1;
    }

    fseek(f, 0, SEEK_END);
    long fsize = ftell(f);
    fseek(f, 0, SEEK_SET);

    uint8_t *code = malloc(fsize);
    if (fread(code, 1, fsize, f) != fsize) {
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

    uint64_t firmware_base = strtoul(argv[2], NULL, 16);
    size_t fw_map_size = align_page(fsize);
    uc_mem_map(uc, firmware_base, fw_map_size, UC_PROT_ALL);
    uc_mem_map(uc, RAM_BASE, RAM_SIZE, UC_PROT_ALL);
    uc_mem_map(uc, MMIO_BASE, MMIO_SIZE, UC_PROT_READ | UC_PROT_WRITE);
    uc_mem_map(uc, SCB_BASE, SCB_SIZE, UC_PROT_READ | UC_PROT_WRITE);
    uc_mem_write(uc, firmware_base, code, fsize);

    long ram_fw_size = fsize - RAM_FW_OFFSET;
    if (ram_fw_size > 0) {
        uc_mem_write(uc, RAM_FW_BASE, code + RAM_FW_OFFSET, ram_fw_size);
        printf("Pre-loaded %ld bytes at 0x%08x (flash offset 0x%x)\n", ram_fw_size, (uint32_t)RAM_FW_BASE, RAM_FW_OFFSET);
    }

    uc_hook hh_code, hh_write;
    uc_hook_add(uc, &hh_code, UC_HOOK_CODE, hook_code, NULL, 1, 0);
    uc_hook_add(uc, &hh_write, UC_HOOK_MEM_WRITE, hook_mem_write, NULL, 1, 0);

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
        uint32_t pc;
        uc_reg_read(uc, UC_ARM_REG_PC, &pc);
        printf("PC = 0x%08x\n", pc);
    } else {
        printf("\nEmulation finished (timeout=%lu ms)\n", timeout_ms);
    }

    uc_close(uc);
    free(code);
    return 0;
}
