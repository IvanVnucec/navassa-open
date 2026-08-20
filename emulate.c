#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <unicorn/unicorn.h>

#define DEFAULT_TIMEOUT_MS  10000

#define RAM_BASE            0x20000000
#define RAM_SIZE            0x100000
#define PAGE_SIZE           0x1000

static size_t align_page(size_t size)
{
    return (size + PAGE_SIZE - 1) & ~(PAGE_SIZE - 1);
}

static void hook_code(uc_engine *uc, uint64_t address, uint32_t size, void *user_data)
{
    printf("PC = 0x%08lx\n", address);
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
    uc_err err = uc_open(UC_ARCH_ARM, UC_MODE_THUMB, &uc);
    if (err) {
        printf("Failed to open unicorn: %s\n", uc_strerror(err));
        return 1;
    }

    uint64_t firmware_base = strtoul(argv[2], NULL, 16);
    size_t fw_map_size = align_page(fsize);
    uc_mem_map(uc, firmware_base, fw_map_size, UC_PROT_ALL);
    uc_mem_map(uc, RAM_BASE, RAM_SIZE, UC_PROT_ALL);
    uc_mem_write(uc, firmware_base, code, fsize);

    uc_hook hh_code;
    uc_hook_add(uc, &hh_code, UC_HOOK_CODE, hook_code, NULL, 1, 0);

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
