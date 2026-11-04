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
├── bl 0x0100600c                      init function (NVIC priority inits ×8)
│   ├── bl 0x0100616e                  periph_init_a(id)
│   ├── bl 0x01006164                  periph_init_b(id)
│   ├── bl 0x0100617e                  periph_init_c(id)
│   ├── bl 0x0100609a                  periph_init_d(id)
│   ├── bl 0x010060b2                  periph_init_e(id)
│   └── bl 0x010060e4                  periph_init_f(id)
├── bl 0x01044180  ──→ 0x20036e24      ** indirect jump into RAM firmware **
├── bl 0x01002a40                      peripheral/pin init (calls 0x01002db4)
├── ldrb r0, [r4,#0]                   read boot state
│   └── != 0 → 0x010441ca (main loop)
├── bl 0x01044188  ──→ 0x20036e32      second indirect jump into RAM
├── bl 0x0104423c                      compares [0x2002f450] with [0x2002f454]
│   └── equal → 0x010441ca
├── movs r0,#2; bl 0x010060b2; b.n .   failure path: infinite loop
└── 0x010441ca  main-loop entry
    ├── strb #2, [r4,#0]               boot state = 2
    ├── bl 0x01002878                  writes a constant to a RAM word
    └── further init follows (writes 0x70000 to a peripheral,
        NVIC enable via 0x01044254, ...)
```

The reset handler adapts its behavior based on the boot state byte at
`0x2001fcee` (checked against 9) and other RAM state — consistent with the
external CPU pre-seeding RAM before releasing the M4 core at every power reset.
(The RAM payload itself is part of the binary at offset `0x36e24`.)

### Key helper functions (flash)

| Address    | Purpose |
|------------|---------|
| 0x01002938 | `set_priority(r0)` — CMSIS NVIC priority masking. Saves PRIMASK, disables interrupts, sets BASEPRI, restores PRIMASK. |
| 0x01002964 | `restore_priority(r0)` — writes r0 to BASEPRI, returns. |
| 0x01005fcc | `set_priority(6)` — wrapper: calls set_priority with arg 6. |
| 0x01005fd2 | `restore_priority` wrapper. |
| 0x010060fe | `get_periph_ptr(r0)` — sets r4 = r0, returns, used as common prologue. |
| 0x010060de | `read_periph_reg(r1)` — loads r1 from literal pool, reads [r1] into r2, returns r2. |
| 0x0100616e | Init function (selects a field via `pkhbt`). |
| 0x01006164 | Init function. |
| 0x0100617e | Init function. |
| 0x0100609a | Init function (2-bit field). |
| 0x010060b2 | Init function (4-bit field). |
| 0x010060e4 | Init function (4-bit field, different alignment). |
| 0x0100aca0 | SysTick/NVIC enable — writes 0x80000000 to a control register. |
| 0x01002a40 | Peripheral/pin init — calls 0x01002db4. |
| 0x01044180 | `ldr.w pc, [pc]` — trampoline, loads target from literal pool. |
| 0x01044188 | Same pattern, different literal. |

### Per-init pattern (repeated 8 times in boot)

Each of the 8 init steps follows the same pattern:

1. Store return context on stack (`0x20025570`/`0x20025574` pair)
2. Call `set_priority(6)` → `set_priority` → NVIC/SysTick enable
3. Read peripheral register via `read_periph_reg()`
4. Modify bitfield
5. Write back to peripheral
6. Call `restore_priority` → restore BASEPRI
7. Restore return context, continue

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
  - stores it into a RAM control block at **0x200020d1** (`[r7+4]`),
  - loads a buffer pointer from **0x2002516c** and writes to it —
    **the pointer is NULL in unseeded RAM**, so emulation stops with a
    null-pointer write at PC=0x0100ae7a (SP=0x20025538, R4=0xffffffc8,
    LR=0x0100ae51).

This counter-read + buffer-write pattern suggests a mailbox/ring-buffer protocol
with the host; the buffer pointer at 0x2002516c is part of the state the external
CPU (or an earlier boot stage) normally initializes.

### To emulate further

1. Map the Cortex-M system exception vectors in RAM so faults don't jump to 0x00000000.
2. Implement SysTick so it doesn't fault on first tick.
3. Initialize the RAM structures the firmware expects, e.g. the buffer pointer at
   0x2002516c and the control block at 0x200020d1.
4. Identify and model the peripheral at 0x47002004 (read by sub_100ae34).
5. Trace which peripheral addresses are read vs written to infer their roles.
6. Determine what RAM state the external CPU must pre-seed (the boot byte at
   0x2001fcee, buffer pointers, etc.) for each boot path.

## 7. Open Firmware (navassa-open)

### Current state

- `src/navassa_open_startup.s` — minimal Cortex-M startup: vector table + `main()`
- `src/navassa_open.c` — `void main(void) { while(1) {} }`
- `emulator/emulator.c` — Unicorn emulator (merged: both strategies below)
- `Makefile` — `make emulate-closed` runs the closed firmware; `make emulate-open`
  runs the open replacement

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
