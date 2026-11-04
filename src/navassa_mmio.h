/*
 * navassa_mmio.h — MMIO map and RAM contract addresses of the ADRV9001
 * (Navassa) evaluation firmware.
 *
 * Only addresses with OBSERVED accesses are listed (see FINDINGS.md §5).
 * Peripheral identities are unknown; add findings as they are confirmed.
 */
#ifndef NAVASSA_MMIO_H
#define NAVASSA_MMIO_H

#include <stdint.h>

/* ---- MMIO window (purposes unidentified) ---- */
#define NAVASSA_REG_0x49000014	(*((volatile uint32_t *)0x49000014UL))
#define NAVASSA_REG_0x49000018	(*((volatile uint32_t *)0x49000018UL))
#define NAVASSA_REG_0x50000048	(*((volatile uint32_t *)0x50000048UL))

/* Cortex-M system space (system registers, not bus-accessible) */
#define NAVASSA_SCB_ICSR	(*((volatile uint32_t *)0xE000ED04UL))	/* ICSR: write 0x80000000 = PENDSVSET */
#define NAVASSA_SCB_VTOR	(*((volatile uint32_t *)0xE000ED08UL))
#define NAVASSA_SCB_SHCSR	(*((volatile uint32_t *)0xE000ED24UL))
#define NAVASSA_SCB_CPACR	(*((volatile uint32_t *)0xE000ED88UL))

/* ---- Contract RAM: part of the external interface (host CPU) ---- */
/* boot state struct base; byte [1] (0x2001fcee) is checked against 9 */
#define NAVASSA_BOOT_STATE	((volatile uint8_t *)0x2001fcedUL)
/* control block used by mailbox_xfer (sub_100ae34): [0]=flag byte,
 * [4]=last counter value */
#define NAVASSA_MBOX_CTRL	((volatile uint32_t *)0x200020d0UL)
/* words compared for equality by check_ram_words_equal (sub_104423c) */
#define NAVASSA_CHK_A		(*(volatile uint32_t *)0x200250f4UL)
#define NAVASSA_CHK_B		(*(volatile uint32_t *)0x200250f8UL)
/* buffer pointer read by mailbox_xfer — must be set up by the host or an
 * earlier boot stage, NULL causes a fault */
#define NAVASSA_MBOX_BUFPTR	(*(volatile uint32_t *)0x2002516cUL)

#endif /* NAVASSA_MMIO_H */
