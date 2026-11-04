/*
 * navassa_helpers.c — C reconstruction of the closed firmware's flash
 * helper functions (see tools/functions.asm for the reference disasm).
 *
 * Each function names the closed-firmware address it replaces and is
 * verified against it with the differential tracer:
 *   ./build/emulator --call <addr> <bin> <base> ... TRACE_OUT=...
 *
 * Discovery note: the closed "set_priority" (0x01002938) is NOT an NVIC
 * priority setter. It computes x = (prio << 4) & 0xFF; if x != 0 it does
 * nothing (the BASEPRI write is skipped because x >= 1 always holds);
 * if x == 0 it sets ICSR = PENDSVSET (context switch) and clears BASEPRI.
 * All observed call sites pass 6, making it an effective no-op — likely
 * a scheduler hook compiled into this build.
 */
#include "navassa_mmio.h"

/* ---- 0x01002938 set_priority(prio) ---- */
void set_priority(uint32_t prio)
{
	uint32_t x = (prio << 4) & 0xFF;
	uint32_t r0 = x;

	if (x != 0)
		r0 = 1;

	if (r0 == 0) {
		/* 0x0100aca0 body: ICSR = 0x80000000 (PENDSVSET), and r0
		 * comes back as 0x80000000, which drives the BASEPRI=0
		 * write below (0 < 0x80000000). */
		NAVASSA_SCB_ICSR = 0x80000000;
		r0 = 0x80000000;
	}

	uint32_t primask;
	__asm volatile ("mrs %0, primask" : "=r" (primask));
	__asm volatile ("cpsid i" ::: "memory");

	uint32_t basepri;
	__asm volatile ("mrs %0, basepri" : "=r" (basepri));

	if (r0 != 0 && x < r0)
		__asm volatile ("msr basepri, %0" : : "r" (x) : "memory");

	__asm volatile ("msr primask, %0" : : "r" (primask));
}

/* ---- 0x01002964 restore_priority(prio): BASEPRI = prio ----
 * Uses MSR (system register write, no bus transaction) — a memory write
 * to 0xE000ED14 would produce an extra MMIO trace event the closed
 * firmware does not emit. */
void restore_priority(uint32_t prio)
{
	__asm volatile ("msr basepri, %0" : : "r" (prio) : "memory");
}

/* ---- 0x01005fcc / 0x010060fe: stash pointer in r4, then set_priority(6).
 * Observed effective behavior: set_priority(6) is a no-op, so this only
 * saves the pointer. Kept as a function pair for 1:1 trace equivalence. */
void get_periph_ptr(void *ptr)
{
	(void)ptr;	/* r4 = ptr — register carry, no memory effect */
	set_priority(6);
}

/* ---- 0x010060de read_periph_reg(): return *0x49000014 ---- */
uint32_t read_periph_reg(void)
{
	return NAVASSA_REG_0x49000014;
}

/* ---- 0x010060cc init_write_boot_byte(uint8_t *dst):
 *      *dst = (read_periph_reg() >> 4) & 0xF
 * The boot byte at 0x2001fcee is compared against 9 by the reset handler.
 * Epilogue (0x0100618e): pop.w {r4, lr}; b 0x1005fd2 -> BASEPRI = r0,
 * where r0 is still the original dst pointer. */
void init_write_boot_byte(volatile uint8_t *dst)
{
	get_periph_ptr((void *)dst);
	*dst = (uint8_t)((read_periph_reg() >> 4) & 0xF);
	restore_priority((uint32_t)(uintptr_t)dst);
}

/* ---- 0x010060b2 periph_init_e(id):
 *      reg = (reg & ~0xF0) | ((id << 4) & 0xF0)
 * Epilogue sets BASEPRI = id (r0 unchanged through the call chain). */
void periph_init_e(uint32_t id)
{
	get_periph_ptr((void *)(uintptr_t)id);
	uint32_t v = read_periph_reg();
	v = (v & ~0xF0UL) | ((id << 4) & 0xF0UL);
	NAVASSA_REG_0x49000014 = v;
	restore_priority(id);
}

/* ---- 0x0100616e periph_init_a(id): 0x49000018 low halfword = id
 * (pkhbt r2, r4, r2: bottom half from id, top half from reg) */
void periph_init_a(uint32_t id)
{
	get_periph_ptr((void *)(uintptr_t)id);
	uint32_t v = NAVASSA_REG_0x49000018;
	v = (v & 0xFFFF0000UL) | (id & 0xFFFFUL);
	NAVASSA_REG_0x49000018 = v;
	restore_priority(id);
}

/* ---- 0x01006164 periph_init_b(id): 0x49000014 high halfword = id << 16
 * (shares the 0x01006186..0x0100618c tail with periph_init_c) */
void periph_init_b(uint32_t id)
{
	get_periph_ptr((void *)(uintptr_t)id);
	uint32_t v = read_periph_reg();
	v = (v & 0xFFFFUL) | (id << 16);
	NAVASSA_REG_0x49000014 = v;
	restore_priority(id);
}

/* ---- 0x0100617e periph_init_c(id): 0x49000018 high halfword = id << 16
 * (pkhbt r2, r2, r4, lsl #16) */
void periph_init_c(uint32_t id)
{
	get_periph_ptr((void *)(uintptr_t)id);
	uint32_t v = NAVASSA_REG_0x49000018;
	v = (v & 0xFFFFUL) | (id << 16);
	NAVASSA_REG_0x49000018 = v;
	restore_priority(id);
}

/* ---- 0x0100609a periph_init_d(id): 0x49000014 bits [1:0] = id */
void periph_init_d(uint32_t id)
{
	get_periph_ptr((void *)(uintptr_t)id);
	uint32_t v = read_periph_reg();
	v = (v & ~3UL) | (id & 3UL);
	NAVASSA_REG_0x49000014 = v;
	restore_priority(id);
}

/* ---- 0x010060e4 periph_init_f(id): 0x49000014 bits [3:2] = id */
void periph_init_f(uint32_t id)
{
	get_periph_ptr((void *)(uintptr_t)id);
	uint32_t v = read_periph_reg();
	v = (v & ~0xCUL) | ((id << 2) & 0xCUL);
	NAVASSA_REG_0x49000014 = v;
	restore_priority(id);
}
