/*
 * navassa_init.c — C reconstruction of the closed firmware's boot/init
 * layer (see tools/functions.asm for reference disassembly).
 *
 * Verified against the closed binary with tools/tracecmp.sh.
 */
#include "navassa_fw.h"

/* ---- 0x0100600c (was mislabeled "init_nvic_priorities"): calls the six
 * periph_init helpers with id = 0, i.e. it CLEARS the configured bitfields
 * of registers 0x49000014 and 0x49000018. Note the pop.w {r1, lr} trick —
 * the last call is a tail call reusing r0 = 0. */
void init_sequence(void)
{
	periph_init_a(0);
	periph_init_b(0);
	periph_init_c(0);
	periph_init_d(0);
	periph_init_e(0);
	periph_init_f(0);
}

/* ---- 0x01002db4 pin_update(ptr, mask, value):
 *      PRIMASK-guarded byte read-modify-write: *ptr = (*ptr & ~mask) | (mask & value) */
void pin_update(volatile uint8_t *reg, uint32_t mask, uint32_t value)
{
	uint32_t primask;
	__asm volatile ("mrs %0, primask" : "=r" (primask));
	__asm volatile ("cpsid i" ::: "memory");

	uint32_t v = *reg;
	v &= ~mask;
	v |= (mask & value);
	*reg = (uint8_t)v;

	__asm volatile ("msr primask, %0" : : "r" (primask));
}

/* ---- 0x01002a40 periph_pin_init():
 * configures a handful of bytes in the 0x46000000 region:
 *   byte 0x4600029c: bit0 = 1, bit1 = 0
 *   byte 0x4600029d: bits [4:0] = 0x1F
 *   bytes 0x4600029e..a1 = 0x0F, 0x1F, 0xFF, 0xF1                  */
void pin_init(void)
{
	volatile uint8_t *p1 = (volatile uint8_t *)0x4600029cUL;
	volatile uint8_t *p2 = (volatile uint8_t *)0x4600029dUL;

	pin_update(p1, 1, 1);
	pin_update(p1, 2, 0);
	pin_update(p2, 0x1F, 0x1F);
	p2[1] = 0x0F;
	p2[2] = 0x1F;
	p2[3] = 0xFF;
	p2[4] = 0xF1;
}

/* ---- 0x0104423c check_ram_words_equal(): returns 1 iff the two contract
 * words at 0x200250f4 / 0x200250f8 are equal (host-set consistency check).
 * Read order matters for trace equivalence: the closed code loads [ptr+4]
 * (0x200250f8) FIRST, then [ptr] (0x200250f4). */
int check_ram_words_equal(void)
{
	uint32_t b = NAVASSA_CHK_B;
	uint32_t a = NAVASSA_CHK_A;
	return a == b;
}

/* ---- 0x01002878 (was mislabeled "mainloop_store_const"): sets the vector
 * table base back to flash: SCB->VTOR = 0x01000000. */
void set_vtor_flash(void)
{
	NAVASSA_SCB_VTOR = 0x01000000UL;
}

/* ---- 0x01044254 (was mislabeled "nvic_enable_helper"): classic Cortex-M4F
 * startup tail: CPACR |= 0xF00000 (enable CP10/CP11 = FPU), DSB+ISB barrier,
 * then FPSCR = 0x02000000 (FZ, flush-to-zero). */
void fpu_faults_enable(void)
{
	NAVASSA_SCB_CPACR |= 0xF00000UL;
	__asm volatile ("dsb sy" ::: "memory");
	__asm volatile ("isb sy" ::: "memory");
	__asm volatile ("vmsr fpscr, %0" : : "r" (0x2000000UL) : "memory");
}
