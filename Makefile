BUILD_DIR = build

NVSS_BASE_ADDR  = 0x01000000

NVSS_OPEN_STARTUP = src/navassa_open_startup.s
NVSS_OPEN_C       = src/navassa_open.c
NVSS_OPEN_LD      = src/navassa_open.ld
NVSS_OPEN_ELF     = $(BUILD_DIR)/navassa_open.elf
NVSS_OPEN_BIN     = $(BUILD_DIR)/navassa_open.bin
NVSS_OPEN_ASM     = $(BUILD_DIR)/navassa_open.asm

NVSS_CLOSED_URL  = https://raw.githubusercontent.com/analogdevicesinc/no-OS/refs/heads/main/projects/adrv9001/src/firmware/Navassa_EvaluationFw.h
NVSS_CLOSED_H    = $(BUILD_DIR)/Navassa_EvaluationFw.h
NVSS_CLOSED_BIN  = $(BUILD_DIR)/Navassa_EvaluationFw.bin
NVSS_CLOSED_ASM  = $(BUILD_DIR)/Navassa_EvaluationFw.asm
NVSS_CLOSED_ELF  = $(BUILD_DIR)/Navassa_EvaluationFw.elf

EMULATOR_C   = emulator/emulator.c
EMULATOR_BIN = $(BUILD_DIR)/emulator
TIMEOUT_MS ?= 10000

.PHONY: all emulate emulate-open emulate-closed disassembly-closed clean

all: $(BUILD_DIR)/ $(NVSS_OPEN_BIN) $(NVSS_OPEN_ASM) $(NVSS_OPEN_ELF)

$(BUILD_DIR)/:
	mkdir -p $@

$(NVSS_OPEN_ELF): $(NVSS_OPEN_STARTUP) $(NVSS_OPEN_C) src/navassa_helpers.c src/navassa_init.c src/navassa_mailbox.c src/navassa_mmio.h $(NVSS_OPEN_LD) | $(BUILD_DIR)/
	arm-none-eabi-gcc -mthumb -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=softfp -O2 -ffreestanding -nostartfiles -nostdlib \
		-T $(NVSS_OPEN_LD) -o $@ $(NVSS_OPEN_STARTUP) $(NVSS_OPEN_C) src/navassa_helpers.c src/navassa_init.c src/navassa_mailbox.c

$(NVSS_OPEN_BIN): $(NVSS_OPEN_ELF)
	arm-none-eabi-objcopy -O binary $< $@

$(NVSS_OPEN_ASM): $(NVSS_OPEN_BIN)
	arm-none-eabi-objdump -D -b binary -m arm -M force-thumb \
		--adjust-vma=$(NVSS_BASE_ADDR) $< > $@

$(NVSS_CLOSED_H):
	wget -qO $@ $(NVSS_CLOSED_URL)

$(NVSS_CLOSED_BIN): $(NVSS_CLOSED_H) | $(BUILD_DIR)/
	grep -oE '0x[0-9a-fA-F]{2},' $< | sed 's/0x//' | tr -d '\n' | xxd -r -p > $@

$(NVSS_CLOSED_ASM): $(NVSS_CLOSED_BIN)
	arm-none-eabi-objdump -D -b binary -m arm -M force-thumb \
		--adjust-vma=$(NVSS_BASE_ADDR) $< > $@

$(NVSS_CLOSED_ELF): $(NVSS_CLOSED_BIN)
	arm-none-eabi-objcopy -I binary -O elf32-littlearm -B arm \
		--rename-section .data=.text,alloc,load,readonly,code \
		--adjust-vma=$(NVSS_BASE_ADDR) $< $@

disassembly-closed: $(BUILD_DIR)/ $(NVSS_CLOSED_BIN) $(NVSS_CLOSED_ASM) $(NVSS_CLOSED_ELF)

$(EMULATOR_BIN): $(EMULATOR_C) | $(BUILD_DIR)/
	gcc -o $@ $< -lunicorn -lpthread

emulate-open: $(EMULATOR_BIN) $(NVSS_OPEN_BIN)
	./$(EMULATOR_BIN) $(NVSS_OPEN_BIN) $(NVSS_BASE_ADDR) $(TIMEOUT_MS)

emulate-closed: $(EMULATOR_BIN) $(NVSS_CLOSED_BIN)
	./$(EMULATOR_BIN) $(NVSS_CLOSED_BIN) $(NVSS_BASE_ADDR) $(TIMEOUT_MS)

emulate: emulate-open

# Step 0 smoke test: differential tracer self-comparison (must MATCH)
smoke-compare: $(EMULATOR_BIN) $(NVSS_CLOSED_BIN)
	./$(EMULATOR_BIN) --compare $(NVSS_CLOSED_BIN) $(NVSS_CLOSED_BIN) $(NVSS_BASE_ADDR) $(TIMEOUT_MS)

clean:
	rm -rf $(BUILD_DIR)/
