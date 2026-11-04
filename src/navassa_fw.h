/*
 * navassa_fw.h — shared prototypes for the open firmware reconstruction.
 */
#ifndef NAVASSA_FW_H
#define NAVASSA_FW_H

#include <stdint.h>
#include "navassa_mmio.h"

/* navassa_helpers.c — closed addresses in comments */
void set_priority(uint32_t prio);            /* 0x01002938 */
void restore_priority(uint32_t prio);        /* 0x01002964 */
void get_periph_ptr(void *ptr);              /* 0x010060fe (+0x01005fcc) */
uint32_t read_periph_reg(void);              /* 0x010060de */
void init_write_boot_byte(volatile uint8_t *dst); /* 0x010060cc */
void periph_init_a(uint32_t id);             /* 0x0100616e */
void periph_init_b(uint32_t id);             /* 0x01006164 */
void periph_init_c(uint32_t id);             /* 0x0100617e */
void periph_init_d(uint32_t id);             /* 0x0100609a */
void periph_init_e(uint32_t id);             /* 0x010060b2 */
void periph_init_f(uint32_t id);             /* 0x010060e4 */

/* navassa_init.c */
void init_sequence(void);                    /* 0x0100600c */
void pin_update(volatile uint8_t *reg, uint32_t mask, uint32_t value); /* 0x01002db4 */
void pin_init(void);                         /* 0x01002a40 */
int  check_ram_words_equal(void);            /* 0x0104423c */
void set_vtor_flash(void);                   /* 0x01002878 */
void fpu_faults_enable(void);                /* 0x01044254 */

#endif /* NAVASSA_FW_H */
