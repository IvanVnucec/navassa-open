/*
 * navassa_open.c — open reimplementation of the closed ADRV9001 (Navassa)
 * evaluation firmware boot flow.
 *
 * main() replaces the closed reset handler at 0x01044190 (see FINDINGS.md
 * §3 and tools/functions.asm). Verified incrementally against the closed
 * binary with tools/tracecmp.sh; the RAM-firmware trampoline calls are
 * stubbed until Step 2.7 (RAM payload reconstruction).
 */
#include "navassa_fw.h"

/* from navassa_helpers.c */
void set_priority(uint32_t prio);
void restore_priority(uint32_t prio);
void get_periph_ptr(void *ptr);
uint32_t read_periph_reg(void);
void init_write_boot_byte(volatile uint8_t *dst);
void periph_init_a(uint32_t id);
void periph_init_b(uint32_t id);
void periph_init_c(uint32_t id);
void periph_init_d(uint32_t id);
void periph_init_e(uint32_t id);
void periph_init_f(uint32_t id);

/* from navassa_init.c */
void init_sequence(void);
void pin_update(volatile uint8_t *reg, uint32_t mask, uint32_t value);
void pin_init(void);
int  check_ram_words_equal(void);
void set_vtor_flash(void);
void fpu_faults_enable(void);

/* ---- closed 0x01044180/0x01044188 trampolines → RAM payload entries
 * 0x20036e24 / 0x20036e32. The RAM payload (the FreeRTOS application) is
 * reconstructed in Step 2.7 — stubbed for now. */
static void ram_entry_a(void) { /* TODO Step 2.7 */ }
static void ram_entry_b(void) { /* TODO Step 2.7 */ }

/* ---- closed 0x01002a78 boot_msg(a, b, c) — real implementation lives in
 * navassa_mailbox.c (verified); declared in navassa_fw.h. */

/* ---- closed 0x01044278: scheduler handoff into the RTOS application
 * (FreeRTOS kernel start). TODO Step 2.7. */
static void scheduler_handoff(void)
{
	for (;;) { /* TODO Step 2.7 */ }
}

void main(void)
{
	/* 0x01044190: magic write to 0x50000048 (purpose unidentified) */
	NAVASSA_REG_0x50000048 = 0xABABFEFEUL;

	/* 0x0104419a: boot byte at 0x2001fcee = (0x49000014 >> 4) & 0xF;
	 * if it reads 9, mark boot state = 3 */
	init_write_boot_byte(&NAVASSA_BOOT_STATE[1]);
	if (NAVASSA_BOOT_STATE[1] == 9)
		NAVASSA_BOOT_STATE[0] = 3;

	/* 0x010441a8: clear the configured bitfields of 0x49000014/18 */
	init_sequence();

	/* 0x010441ac: first trampoline into the RAM payload */
	ram_entry_a();

	/* 0x010441b0: pin/mux init in the 0x46000000 region */
	pin_init();

	/* 0x010441b4: if boot state != 0, go straight to main-loop entry */
	if (NAVASSA_BOOT_STATE[0] == 0) {
		/* 0x010441b8: second trampoline into the RAM payload */
		ram_entry_b();

		/* 0x010441bc: host consistency check; failure -> error path */
		if (!check_ram_words_equal()) {
			/* 0x010441c2..0x010441c8: periph_init_e(2), halt */
			periph_init_e(2);
			for (;;)
				;
		}
	}

	/* ---- 0x010441ca main-loop entry ---- */
	NAVASSA_BOOT_STATE[0] = 2;
	set_vtor_flash();		/* 0x010441ce: VTOR = 0x01000000 */

	/* 0x010441d2: SCB->SHCSR = 0x70000 (MemManage/Bus/Usage fault enables) */
	NAVASSA_SCB_SHCSR = 0x70000UL;
	/* 0x010441da: CPACR |= 0xF00000 (FPU), DSB/ISB, FPSCR = FZ */
	fpu_faults_enable();

	/* 0x010441de: host flag = byte 0x460003fb bit 0 -> stored at 0x2001fd22 */
	{
		volatile uint8_t *host_flag_reg = (volatile uint8_t *)0x460003fbUL;
		volatile uint8_t *host_flag_ram = (volatile uint8_t *)0x2001fd22UL;
		uint8_t flag = *host_flag_reg & 1;
		*host_flag_ram = flag;

		if (flag != 0) {
			/* 0x010441ee: register data blob + marker, then
			 * boot_msg(1, 0xEA02, 3) */
			*(volatile uint32_t *)0x200002d4UL = 0x0104422cUL;
			*(volatile uint32_t *)0x200002d8UL = 0x99;
			boot_msg(1, 0xEA02, 3);
		}
	}

	/* 0x01044206: tail jump into the RTOS application */
	scheduler_handoff();
}
