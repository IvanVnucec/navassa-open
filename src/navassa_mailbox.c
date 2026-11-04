/*
 * navassa_mailbox.c — C reconstruction of the host-communication ring
 * buffer layer (closed addresses annotated; see tools/functions.asm).
 *
 * Model (from disassembly):
 *   - The SPI/host engine exposes a counter pair at 0x47002004 (+8).
 *   - A 64-bit state at 0x20002800/04, rotated right by (cmd & 0xFF),
 *     decides proceed (bit0 of result) and carries the BASEPRI value to
 *     restore on completion.
 *   - 0x2000d120: flag byte (write gate), 0x2000d124: last counter
 *     snapshot (unaligned word).
 *   - 0x2002516c: ring control block: [0]=write ptr, [6]=fill count
 *     (uint16), [0xc]=ring base; ring spans base..base+0x7FFC, limit
 *     count 0x2000 words; each packet = header + payload word (count +2).
 *   - HEADER: bits [5:0]=cmd&0x3F, [6]=payload bit31, [14:7]=counter
 *     delta (last-new, saturating packing), [31]=1.
 *   - 0x100ad8c: cap BASEPRI at 0x60 (configMAX_SYSCALL = 6 << 4 —
 *     FreeRTOS CM4 port constant), returned old value unused here.
 *
 * Verified against the closed binary with tools/tracecmp.sh.
 */
#include "navassa_fw.h"
#include "navassa_mmio.h"

#define NAVASSA_MBOX_STATE_LO	(*((volatile uint32_t *)0x20002800UL))
#define NAVASSA_MBOX_STATE_HI	(*((volatile uint32_t *)0x20002804UL))
#define NAVASSA_SPI_CNT		(*((volatile uint32_t *)0x47002004UL))
#define NAVASSA_MBOX_FLAG	(*((volatile uint8_t  *)0x2000d120UL))
#define NAVASSA_MBOX_HOOK_SLOT	(*((volatile uint32_t *)0x20000228UL))
/* unaligned words: access with inline ldr/str like the closed code */
#define NAVASSA_MBOX_LASTCNT	0x2000d124UL
#define NAVASSA_RING_WRITEPTR	(*((volatile uint32_t *)0x2002516cUL))
#define NAVASSA_RING_COUNT	(*((volatile uint16_t *)0x20025172UL))
#define NAVASSA_RING_BASE	(*((volatile uint32_t *)0x20025178UL))

#define RING_LIMIT		0x2000UL
#define RING_SPAN		0x7ffcUL
#define BASEPRI_MAX_SYSCALL	0x60UL

static inline uint32_t rd32_u(uint32_t addr)
{
	uint32_t v;
	__asm volatile ("ldr %0, [%1]" : "=r" (v) : "r" (addr));
	return v;
}

static inline void wr32_u(uint32_t addr, uint32_t v)
{
	__asm volatile ("str %0, [%1]" : : "r" (v), "r" (addr) : "memory");
}

static inline uint32_t get_basepri(void)
{
	uint32_t v;
	__asm volatile ("mrs %0, basepri" : "=r" (v));
	return v;
}

static inline void set_basepri(uint32_t v)
{
	__asm volatile ("msr basepri, %0" : : "r" (v) : "memory");
}

/* ---- 0x0101bb08: 64-bit rotate right (pure, no memory effects).
 * Byte-exact replica of the closed sequence, including the LSR-by->=32
 * wrapping behavior. */
static uint32_t mbox_rotate(uint32_t lo, uint32_t hi, uint32_t n)
{
	n &= 0xFFu;
	if (n >= 32u) {
		uint32_t s = n - 32u;
		return (s < 32u) ? (hi >> s) : 0u;
	}
	uint32_t r1 = (hi >> n) | (hi << ((32u - n) & 31u));	/* rors r1, r2 */
	uint32_t r0 = lo >> n;					/* lsrs r0, r2 */
	r0 ^= r1;						/* eors r0, r1 */
	r1 = (r1 << n) >> n;					/* lsls/lsrs r1, r2 */
	r0 ^= r1;						/* eors r0, r1 */
	return r0;
}

/* ---- 0x0100ad8c: BASEPRI = 0x60 iff (0 < arg < 0x60); else unchanged.
 * Old BASEPRI returned in r1 by the closed code; unused by our callers
 * (the counter read overwrites r1 immediately). */
static void basepri_cap(uint32_t arg)
{
	if (arg != 0 && arg < BASEPRI_MAX_SYSCALL)
		set_basepri(BASEPRI_MAX_SYSCALL);
}

/* ---- 0x0100ae34 mailbox_xfer(cmd, payload) ---- */
uint32_t mailbox_xfer(uint32_t cmd, uint32_t payload)
{
	uint32_t lo = NAVASSA_MBOX_STATE_LO;
	uint32_t hi = NAVASSA_MBOX_STATE_HI;
	uint32_t r0 = mbox_rotate(lo, hi, cmd);

	if (r0 & 1) {						/* bpl early exit */
		basepri_cap(r0);				/* bl 0x0100ad8c */

		uint32_t cnt = NAVASSA_SPI_CNT;
		uint32_t last = rd32_u(NAVASSA_MBOX_LASTCNT);
		wr32_u(NAVASSA_MBOX_LASTCNT, cnt);

		uint32_t hdr = (cmd & 0x3FUL) | ((payload >> 25) & 0x40UL);
		hdr |= (last - cnt) << 7;
		hdr |= 0x80000000UL;

		/* order matters for trace equivalence: flag byte first, then
		 * write ptr + count; the ring base is read only on the write
		 * path, after the header store */
		if (NAVASSA_MBOX_FLAG != 0) {			/* cbz flag skip */
			uint32_t wp = NAVASSA_RING_WRITEPTR;	/* r3 */
			uint32_t count = NAVASSA_RING_COUNT;	/* r6 */

			*(volatile uint32_t *)wp = hdr;		/* header */

			uint32_t base = NAVASSA_RING_BASE;	/* r2[0xc] */
			uint32_t limit = base + RING_SPAN;
			uint32_t next = (wp >= limit) ? base : wp + 4;
			if (count < RING_LIMIT)
				count++;
			*(volatile uint32_t *)next = payload & ~0x80000000UL;

			wp = (next >= limit) ? base : next + 4;
			if (count < RING_LIMIT)
				count++;

			NAVASSA_RING_COUNT = (uint16_t)count;	/* strh r6,[r2,#6] */
			NAVASSA_RING_WRITEPTR = wp;		/* str r3,[r2] */
		} else {
			uint32_t wp = NAVASSA_RING_WRITEPTR;
			uint32_t count = NAVASSA_RING_COUNT;
			NAVASSA_RING_COUNT = (uint16_t)count;	/* stale rewrite */
			NAVASSA_RING_WRITEPTR = wp;
		}

		set_basepri(r0);				/* tail b 0x0100ad9e */
	}
	return r0;
}

/* ---- 0x01002a78 boot_msg(a, b, c) ----
 * Dispatches a periph_init_* call for b through the mailbox, pulses a
 * write-sensitive strobe byte (0x460000d0) from a 4-byte table, and
 * yields via ICSR when c == 3. Stores its own return address into the
 * hook slot 0x20000228 first. */
void boot_msg(uint32_t a, uint32_t b, uint32_t c)
{
	uint32_t lr;
	__asm volatile ("mov %0, lr" : "=r" (lr));
	NAVASSA_MBOX_HOOK_SLOT = lr;

	mailbox_xfer(8, b);

	uint32_t sel = a;
	if (sel == 0) {
		periph_init_b(b);
	} else if (sel == 2) {
		periph_init_c(b);
	} else {
		periph_init_a(b);
		sel = 1;
	}

	if (c >= 2) {
		/* table @0x01002afc: bytes 08 08 04 00 */
		static const uint8_t pulse_table[4] = { 0x08, 0x08, 0x04, 0x00 };
		volatile uint8_t *strobe = (volatile uint8_t *)0x460000d0UL;
		uint8_t x = pulse_table[sel];
		uint8_t saved = *strobe;
		*strobe = saved | x;		/* set — write-sensitive reg */
		*strobe = saved & (uint8_t)~x;	/* clear */
	}

	if (c == 3)
		NAVASSA_SCB_ICSR = 0x80000000UL;	/* PendSV yield */
}
