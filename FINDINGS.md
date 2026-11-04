# navassa-open Findings

Analysis of the closed-source ADRV9001 (Navassa) evaluation firmware binary extracted
from Analog Devices' no-OS public header.

Merged from two independent analysis sessions (original `emulate.c`-based analysis and
the `pokusaj2` re-analysis). Unverifiable peripheral guesses from both sessions have
been removed; only observed facts are kept.

## 1. System Context

- **Core:** ARM Cortex-M4 (ARMv7E-M), single core, Thumb-2 only.
- **Delivery:** The firmware is **not self-booting**. An external CPU loads it over
  SPI **at every power reset**, then releases the M4 core.
- **Evidence:** Compiled strings `cstartup_m.c` and `warmboot.c` (typical MCUXpresso
  SDK startup files); Cortex-M system instructions (`mrs`/`msr` PRIMASK, `mrs`/`msr`
  BASEPRI, `cpsid i`, `ubfx`, `pkhbt`, `itt`/`ite`, `ldmia.w`/`stmdb`, `b.w`); the
  vector table follows the Cortex-M layout (SP at offset 0, reset at offset 4, each
  entry 4 bytes).
- **RTOS evidence (strong):** FreeRTOS-style patterns — `portYIELD()` write of
  0x80000000 (PENDSVSET) to ICSR (0xE000ED04); BASEPRI interrupt masking; SHCSR
  fault enables (0xF00000 → 0xE000ED88); FPU lazy stacking (`vpush {d8}` in
  tasks → ARM_CM4F port). Embedded strings: source file names (ctrl_task.c,
  scheduler.c, cal_task_core.c, monitor_rssi.c, monitor_drv.c, gpt.c, dma.c,
  fh.c, mcs.c, streams_interrupts.c, lb_pll_nco_mgr.c, tracking_cals.c,
  spimaster.c, main.c, warmboot.c, cstartup_m.c) and RTOS object names
  (TempTimer, HealthMonitorTimer, IDLE — the FreeRTOS idle task default name).
  The kernel itself is open source — see PLAN.md for the byte-match strategy.
- **Semihosting:** `bkpt #0xAB` sequences at 0x010442d0/0x010442e4 (debug
  console support compiled in).
- **Unicorn mode:** `UC_ARCH_ARM | UC_MODE_THUMB | UC_MODE_MCLASS` with the CPU model
  explicitly set to `UC_CPU_ARM_CORTEX_M4`.

## 2. Binary Layout

The `Navassa_EvaluationFw.h` header from no-OS contains a single flat `unsigned char`
array (310,272 bytes). The binary has two logical regions fused into one contiguous
blob:

| Offset  | Address    | Size   | Contents |
|---------|------------|--------|----------|
| 0x00000 | 0x01000000 | ~226KB | Boot code (flash). Vector table + reset handler + init code + literal pools. |
| 0x36e24 | 0x20036e24 | ~85KB  | Runtime firmware (RAM). Self-relocating payload that executes from RAM. |

### Vector table (at 0x01000000)

- SP = 0x20025580
- Reset = 0x01044191 (entry: 0x01044190, Thumb bit set)
- Most exception vectors point to a default handler (`0x0100ac4d` = infinite loop)

## 3. Boot Flow

Verified line-by-line against the disassembly:
```txt
0x01044190  reset handler
├── r2 ← 0x50000048, r1 ← 0xABABFEFE, r4 ← 0x2001fced   (literal pool)
├── str r1, [r2]                       write 0xABABFEFE to 0x50000048
├── r0 ← 0x2001fcee
├── bl 0x010060cc                      called with r0 = RAM pointer
├── ldrb r0, [r4,#1]                   read RAM byte at 0x2001fcee
├── cmp r0, #9
│   └── == 9:  strb #3, [r4,#0]        boot state = 3
├── bl 0x0100600c                      init_sequence: periph_init_a..f(0)
│   (clears the configured bitfields of 0x49000014 and 0x49000018)
├── bl 0x01044180  ──→ 0x20036e24      ** indirect jump into RAM firmware **
├── bl 0x01002a40                      pin_init (0x4600029c/9d bytes, see below)
├── ldrb r0, [r4,#0]                   read boot state
│   └── != 0 → 0x010441ca (main-loop entry)
├── bl 0x01044188  ──→ 0x20036e32      second indirect jump into RAM
├── bl 0x0104423c                      check_ram_words_equal:
│   compares [0x200250f8] with [0x200250f4] (in that order);
│   └── equal → 0x010441ca
├── movs r0,#2; bl 0x010060b2; b.n .   failure path: periph_init_e(2), halt
└── 0x010441ca  main-loop entry
    ├── strb #2, [r4,#0]               boot state = 2
    ├── bl 0x01002878                  set_vtor_flash: SCB->VTOR = 0x01000000
    ├── SCB->SHCSR = 0x70000           (MemManage/Bus/Usage fault enables)
    ├── bl 0x01044254                  fpu_faults_enable: CPACR |= 0xF00000
    │                                  (FPU enable), DSB/ISB, FPSCR = FZ
    ├── host flag = *(0x460003fb) & 1  → stored to 0x2001fd22
    ├── flag != 0: *(0x200002d4) = 0x0104422c (code/data blob ptr),
    │             *(0x200002d8) = 0x99, bl 0x01002a78 boot_msg(1, 0xEA02, 3)
    │             (0x1002a78 stores LR to hook slot 0x20000228, calls
    │              mailbox_xfer, dispatches periph_init_b/c/a)
    └── b.w 0x01044278                 handoff into the RTOS application
        (this path also zeroes 20 bytes at 0x2001fcec — memset inlined)
```

The reset handler adapts its behavior based on the boot state byte at
`0x2001fcee` (checked against 9) and other RAM state — consistent with the
external CPU pre-seeding RAM before releasing the M4 core at every power reset.
(The RAM payload itself is part of the binary at offset `0x36e24`.)

### Key helper functions (flash)

| Address    | Purpose |
|------------|---------|
| 0x01002938 | `prio_yield_hook(prio)` — x = (prio << 4) & 0xFF; if x != 0: no-op; if x == 0: ICSR = 0x80000000 (PendSV yield) and BASEPRI = 0. All observed call sites pass 6 (no-op). |
| 0x01002964 | `basepri_set(r0)` — BASEPRI = r0. |
| 0x01005fcc | wrapper: prio_yield_hook(6). |
| 0x01005fd2 | wrapper: basepri_set. |
| 0x010060fe | `stash_ptr(r0)` — r4 = r0, then prio_yield_hook(6) (no-op). |
| 0x010060de | `read_periph_reg()` — returns *0x49000014. |
| 0x0100616e | Init function (bitfield via `pkhbt`). |
| 0x01006164 | Init function. |
| 0x0100617e | Init function. |
| 0x0100609a | Init function (2-bit field). |
| 0x010060b2 | Init function (4-bit field: reg = (reg & ~0xF0) \| ((id << 4) & 0xF0)). |
| 0x010060e4 | Init function (4-bit field, different alignment). |
| 0x0100aca0 | `pendsv_yield(r0)` — if r0 == 0: ICSR = 0x80000000 (PENDSVSET). Else no-op. |
| 0x01002a40 | Peripheral/pin init — calls 0x01002db4. |
| 0x01044180 | `ldr.w pc, [pc]` — trampoline, loads target from literal pool. |
| 0x01044188 | Same pattern, different literal. |

### Init call pattern

Each periph_init helper (a–f) follows the same shape:

1. Stash the id/pointer in r4, call `prio_yield_hook(6)` (no-op unless the
   shifted field is 0)
2. Read the register (0x49000014 via `read_periph_reg`, or 0x49000018 direct)
3. Modify the assigned bitfield
4. Write back
5. Shared epilogue (0x0100618e): pop {r4, lr} → `basepri_set(id)` —
   BASEPRI = id (system register write, no bus transaction)

Field map (all verified trace-identical in the open reimplementation):

| Helper | Register | Field |
|--------|----------|-------|
| a (0x0100616e) | 0x49000018 | low halfword = id |
| b (0x01006164) | 0x49000014 | high halfword = id << 16 |
| c (0x0100617e) | 0x49000018 | high halfword = id << 16 |
| d (0x0100609a) | 0x49000014 | bits [1:0] = id |
| e (0x010060b2) | 0x49000014 | bits [7:4] = id << 4 |
| f (0x010060e4) | 0x49000014 | bits [3:2] = id << 2 |

`init_write_boot_byte` (0x010060cc) is special: it writes the extracted
nibble to a RAM byte pointer instead of back to the register.

## 4. RAM Firmware

The runtime firmware at `0x20036e24` is the tail of the binary (offset `0x36e24`
onwards). It executes from RAM.

### Jump mechanism

- `0x01044180: ldr.w pc, [pc]` followed by literal `0x20036e25`.
- `0x01044188: ldr.w pc, [pc]` followed by literal `0x20036e33`.

These are two separate entry points into the RAM firmware (main entry at 0x36e24,
secondary at 0x36e32 — 14 bytes apart).

## 5. MMIO Address Space (observed accesses only)

Only what the disassembly/emulation actually shows. Purposes are **unknown** —
earlier guesses (GPIO / GPT timer / watchdog / SEMA4) have been dropped.

| Address    | Access | Notes |
|------------|--------|-------|
| 0x50000048 | write  | Receives magic value `0xABABFEFE` in the reset handler. |
| 0x49000014 | write  | Written `0x00000000` during the init sequence. No reads identified. |
| 0x49000018 | write  | Written `0x00000000` during init sequence. |
| 0x4600xxxx | read/write | Multiple byte-offset accesses (e.g. 0x102, 0x2d3, 0x331, 0x3fb, 0x43f, 0x4e0, 0x590, 0x5a8). |
| 0x47002004 | read   | Read by `sub_100ae34` (see §6). |
| 0xe000e000 | —      | NVIC (System Control Block, Cortex-M). |
| 0xe000e010 | —      | SysTick (Cortex-M). |

The firmware touches addresses across `0x40000000`–`0x5FFFFFFF`; the exact peripheral
map of this SoC is still unidentified.

### Required memory mappings for emulation

| Region        | Base       | Size   | Permissions |
|---------------|------------|--------|-------------|
| Flash (boot)  | 0x01000000 | binary size | R+X |
| RAM           | 0x20000000 | 2MB (0x200000) | R+W+X |
| MMIO          | 0x40000000 | 512MB (0x20000000) | R+W |
| NVIC/SCB      | 0xe0000000 | 1MB    | R+W |

## 6. Emulation Status

Two strategies were used; both stop at the same underlying gap — RAM state and
peripherals that are set up by the external CPU are not modeled:

### Strategy A — execute RAM firmware directly (`STUB_RAM` unset)

- Boot code runs from flash (init sequence, NVIC setup).
- RAM payload pre-loaded at 0x20036e24; jump via literal-pool trampoline works.
- **Faults with an unhandled CPU exception, PC=0x00000000**, with LR=0x010441b1 —
  i.e. the fault occurs during the RAM firmware call made from the first
  trampoline (R0=0x0000ff19 at the stop).

### Strategy B — stub the RAM entry point (`STUB_RAM=1`)

- CPU model pinned to Cortex-M4 via `uc_ctl` (required; a string does not work —
  must use the `UC_CPU_ARM_CORTEX_M4` enum value).
- RAM entry point stubbed with `BX LR` (0x4770); boot byte at `0x2001fcee`
  pre-seeded with 9.
- Boot proceeds through the full init path into the main-loop entry, which calls
  into the real RAM firmware (return address 0x20036fa7) and **faults at
  PC=0x00000000** — the same gap as strategy A.
- With the boot byte left at 0 (unseeded RAM), the alternate path gets as far as
  `sub_100ae34`, which:
  - reads a word from **0x47002004** (a peripheral register, likely a counter),
  - stores it into a RAM control block at **0x2000d120** (`[r7+4]`),
  - loads a buffer pointer from **0x2002516c** and writes to it —
    **the pointer is NULL in unseeded RAM**, so emulation stops with a
    null-pointer write at PC=0x0100ae7a (SP=0x20025538, R4=0xffffffc8,
    LR=0x0100ae51).

This counter-read + buffer-write pattern is now fully decoded and verified
as the **host mailbox** (see src/navassa_mailbox.c):

- 64-bit state at 0x20002800/04: rotated right by (cmd & 0xFF); bit0 of
  the result gates the transfer, the result value is written to BASEPRI
  on completion
- hardware counter read from 0x47002004; previous value kept at
  0x2000d124 (unaligned word); their delta is packed into header bits
  [14:7]
- flag byte at 0x2000d120 gates the actual packet write
- ring buffer control block at 0x2002516c: [0]=write ptr, [6]=fill count
  (u16), [0xc]=ring base; span 0x7FFC bytes, limit 0x2000 words;
  packet = header word + payload word (count +2)
- BASEPRI capped at 0x60 during the transfer (FreeRTOS
  configMAX_SYSCALL_INTERRUPT_PRIORITY = 6 << 4, configPRIO_BITS = 4)

### To emulate further

1. Map the Cortex-M system exception vectors in RAM so faults don't jump to 0x00000000.
2. Implement SysTick so it doesn't fault on first tick.
3. Initialize the RAM structures the firmware expects, e.g. the buffer pointer at
   0x2002516c and the control block at 0x2000d120.
4. Identify and model the peripheral at 0x47002004 (read by sub_100ae34).
5. Trace which peripheral addresses are read vs written to infer their roles.
6. Determine what RAM state the external CPU must pre-seed (the boot byte at
   0x2001fcee, buffer pointers, etc.) for each boot path.

## 7. Open Firmware (navassa-open)

### Current state

- `src/navassa_open_startup.s` — minimal Cortex-M startup: vector table + `main()`
- `src/navassa_open.c` — `main()` = full reconstruction of the closed reset
  handler (0x01044190), with the RAM-payload trampolines, `boot_msg`
  (0x01002a78) and the scheduler handoff (0x01044278) stubbed (Step 2.4/2.7)
- `src/navassa_helpers.c` — the 9 flash leaf helpers, all trace-verified
- `src/navassa_init.c` — init layer (init_sequence, pin_update, pin_init,
  check_ram_words_equal, set_vtor_flash, fpu_faults_enable), all trace-verified
- `src/navassa_mmio.h` / `src/navassa_fw.h` — MMIO/contract registry + prototypes
- `emulator/emulator.c` — Unicorn emulator with differential tracer,
  `--compare`, `--call` harness, `STUB_RAM`/`TRACE`/`TRACE_OUT` modes
- `tools/tracecmp.sh` — per-function verification workflow
- `tools/func_map.py` + `tools/function_map.txt` + `tools/functions.asm`

### Boot equivalence status

With `STUB_RAM=1` (both RAM trampoline entries stubbed with BX LR), the open
firmware's boot trace matches the closed firmware for **all 35 pre-handoff
events** (values included). The closed trace has 5 extra events after the
0x01044278 handoff: an inlined memset zeroing 20 bytes at 0x2001fcec —
Step 2.7 scope.

### Emulator features (merged)

- Cortex-M4 CPU model set explicitly via `uc_ctl(UC_CTL_CPU_MODEL)` (enum value)
- Flash + RAM + MMIO + SCB mappings
- RAM payload auto-pre-load at 0x20036e24 from binary offset 0x36e24
- `STUB_RAM=1` environment switch → strategy B (BX LR stub at 0x20036e24 and
  boot byte at 0x2001fcee pre-seeded with 9)
- `TRACE=1` environment switch → per-instruction PC trace + MMIO write logging
- Unmapped-memory hook with PC-annotated diagnostics and register dump on exit

### Next implementation steps

1. Add SysTick handler that returns without faulting
2. Match the closed firmware's init sequence function-by-function
   (`set_priority()`, peripheral bitfield inits, the 0x50000048 magic write)
3. Identify the external-CPU communication mechanism (SPI-based; loading happens
   at every power reset)
4. Implement the main loop behavior (wait for commands from the external CPU)

## 8. References

- **Firmware source:** `Navassa_EvaluationFw.h` from
  https://github.com/analogdevicesinc/no-OS/tree/main/projects/adrv9001/src/firmware
- **ADRV9001 datasheet:** Analog Devices ADRV9001 (Navassa), dual-channel
  integrated transceiver
- **Cortex-M4 TRM:** ARM DDI 0439
- **Unicorn engine:** https://www.unicorn-engine.org/ (v2.1.4 used)
