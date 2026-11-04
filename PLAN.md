# navassa-open — Reverse Engineering & Reimplementation Plan

Roadmap for converting the closed-source ADRV9001 (Navassa) evaluation firmware
into an open C reimplementation, verified against the Unicorn emulator.

## Core principle: differential testing, not eyeballing

Never compare "the asm vs my C" by reading. Instead:

1. Run the **closed firmware** in the emulator, log all side effects
   (MMIO reads/writes + order, and writes to the contract RAM addresses).
2. Run **your C version** the same way.
3. **Diff the traces.** Identical traces = correct translation; the first
   divergent MMIO access tells you exactly which function is wrong.

Instruction-by-instruction comparison won't work — your compiler will allocate
registers and order code differently. MMIO/RAM side-effect traces are the right
granularity, because those are the observable contract of the firmware (with the
SoC peripherals and with the external host CPU).

## Step-by-step plan

### Step 0 — Build the differential tracer (emulator extension)

- A `UC_HOOK_MEM_*` hook that records `(addr, size, value, pc)` tuples into a log.
- A mode that runs two binaries and diffs the logs.
- A **harness mode**: start at an arbitrary function address with chosen register
  arguments — this lets us unit-test one function at a time instead of running
  the whole boot.

### Step 1 — Function map

The binary has no symbols. Scan the disassembly for function boundaries
(`push {..., lr}` … `pop {..., pc}` / `bx lr`), list them, and keep a symbol file
(`addr → name`) that gets updated as each function is identified.
~116K lines of disassembly shrinks to a manageable function list this way.

### Step 2 — Bottom-up reconstruction, in dependency order

1. Startup/vector table — already done (`src/navassa_open_startup.s`)
2. Small leaf helpers: `set_priority` (0x01002938), `restore_priority`
   (0x01002964), the six periph-init helpers (0x0100616e, 0x01006164, …) —
   each is a few instructions, trivially verifiable in the harness
3. Reset handler logic → becomes `main()` (boot byte check, init sequence,
   trampoline dispatch)
4. The init sequence + the post-0x10441ca init
5. Main loop / scheduler (0x1002878 and what it drives)
6. **Host communication** — `sub_100ae54` already shows the shape: counter from
   0x47002004, control block at 0x2000d120, buffer pointer at 0x2002516c.
   The most important part to get right, since it is the contract with the
   host CPU
7. The ~85 KB RAM payload last — the bulk of the logic, but most of it is
   unreachable until the earlier layers work

### Step 3 — Per-function workflow

1. Read the asm, write pseudocode, then idiomatic C
   (don't transliterate instruction-by-instruction — translate semantics)
2. Compile, load both versions in the harness with identical pre-seeded RAM
3. Compare side-effect traces; iterate until they match
4. Commit, move to the next function

### Step 4 — Preserve the RAM contract

Certain RAM addresses are part of the external interface:

- `0x2001fced` — boot state byte (`0x2001fcee` is checked against 9)
- `0x2000d120` — control block used by `sub_100ae54`
- `0x200250f4` / `0x200250f8` — compared for equality by `sub_104423c`
- `0x2002516c` — buffer pointer (NULL if unseeded → fault)

The C rebuild won't land data at the same addresses automatically — place these
structs at fixed addresses via the linker script (sections at absolute
addresses), or the host CPU handshake will break.

### Step 5 — Data first, code second

Where the firmware uses lookup tables/constants, copy the table bytes into
`const` arrays — don't re-derive them. Cheap and exact.

## Practical tips

- **Optional accelerator:** load `firmware.elf` into Ghidra — its decompiler
  gives readable pseudo-C per function that can be cleaned up; verification
  still happens in the emulator. Reading 116K lines of raw objdump is the slow
  path; Ghidra makes Step 2 maybe 3–5× faster.
- Keep all discovered MMIO addresses in one header (`src/navassa_mmio.h`) with
  comments on what's known/unknown — it becomes the peripheral map document.
- Unverifiable pieces (peripheral behavior inside the SoC) aren't translation
  targets — they're **modeling targets**: stub them in the emulator so the C
  code runs against the same stubs.

## Optional side-quest: compiler fingerprinting

Identifying the compiler/flags is worth a bounded effort, not for bit-exact
recompilation (impossible without the original source), but because:

- Knowing the toolchain (armcc/Keil, armclang, GCC, IAR) makes asm idioms easier
  to read and pseudocode extraction faster.
- `cstartup_m.c` / `warmboot.c` are **public MCUXpresso SDK files** — rebuilding
  them with a candidate toolchain and byte-matching against the binary
  (a) confirms compiler + flags and (b) lets those functions be *skipped*
  entirely, taken from public source.
- Small source-stable functions (NVIC helpers, `memcpy`, bitfield utilities)
  often compile byte-identically when the toolchain matches — hash functions
  from a test build and grep the closed binary for exact matches to get
  "free translations".

First probe: `strings` on the binary for toolchain strings, plus idiom matching
in `build/Navassa_EvaluationFw.asm`.

## FreeRTOS strategy (user-reported, confirmed by evidence)

The firmware is (very likely) built on **FreeRTOS**. Evidence:

- `portYIELD()` idiom: write of 0x80000000 (PENDSVSET) to ICSR 0xE000ED04
  (our `prio_yield_hook`/`pendsv_yield` helpers do exactly this on the
  x == 0 path)
- BASEPRI interrupt masking (ARM_CM4/CM4F port style)
- SHCSR fault enables (0xF00000 → 0xE000ED88) — port startup code
- FPU context: `vpush {d8}` prologues → tasks use the FPU → **CM4F port**
- Strings: `TempTimer`, `HealthMonitorTimer` (software-timer names),
  `IDLE` (default idle task name), plus ADI module file names
  (ctrl_task.c, scheduler.c, cal_task_core.c, monitor_rssi.c,
  monitor_drv.c, gpt.c, dma.c, fh.c, mcs.c, streams_interrupts.c,
  lb_pll_nco_mgr.c, tracking_cals.c, spimaster.c, warmboot.c)

This changes the reconstruction strategy in our favor:

1. **Kernel = free translations.** FreeRTOS is open source. Identify the
   kernel version (queue/TCB/list structures, port constants), rebuild it
   for CM4F with the same toolchain and byte-match functions against the
   binary — matched functions are taken from source, not translated.
2. **Translation targets = the ADI modules** named in the strings
   (scheduler, cal tasks, monitors, SPI master, streams interrupts...).
   These implement the radio control logic and are the real work.
3. RTOS structure explains the boot flow: the trampolines into the RAM
   payload are the RTOS/app entry; the "main loop" at 0x10441ca is the
   pre-scheduler boot path (`mainloop_store_const` writes a flag, then
   more init runs).
4. The `bkpt #0xAB` semihosting sequences (0x010442d0/0x010442e4) are
   debug console support — stub or keep.

## Status

- [x] Step 0 — differential tracer + harness mode
- [x] Step 1 — function map (tools/func_map.py: 1774 functions, 1649 BL targets, 255 vector slots; tools/functions.asm = clean per-function disassembly; tools/symbols.txt = name registry)
- [ ] Step 2.1 — startup/vector table *(done: `src/navassa_open_startup.s`)*
- [x] Step 2.2 — leaf helpers (set_priority, restore_priority, get_periph_ptr,
      read_periph_reg, init_write_boot_byte, periph_init_a..f — all 9 verified
      against the closed firmware with tools/tracecmp.sh)
- [x] Step 2.3 — reset handler → `main()` (src/navassa_open.c; boot trace matches closed for all 35 pre-handoff events with STUB_RAM=1)
- [x] Step 2.4 — init sequence (init_sequence, pin_init, fpu_faults_enable
      verified; boot_msg 0x01002a78 fully reconstructed + verified: LR hook
      slot 0x20000228, mailbox_xfer(8,b), periph_init dispatch on a, strobe
      pulse table @0x01002afc → byte 0x460000d0, ICSR yield when c==3)
- [x] Step 2.5 — main loop / scheduler (set_vtor_flash verified; the
      0x01044278 handoff = FreeRTOS startup — flash-side chain traced:
      0x1044278 → 0x1044298 → 0x10442a6/88 → memset(0x2001fcec, 20) →
      idle poll loop at 0x010029ae; kernel comes from public source)
- [x] Step 2.6 — host communication (mailbox_xfer 0x0100ae34 fully decoded
      + verified on all 3 paths; model in FINDINGS.md §6 and
      src/navassa_mailbox.c: 64-bit state @0x20002800/04 rotated by cmd
      gates proceed + encodes restore-BASEPRI; counter @0x47002004;
      flag @0x2000d120; last-counter @0x2000d124; ring at *0x2002516c:
      [0]=write ptr, [6]=fill u16, [0xc]=base, span 0x7FFC, limit 0x2000
      words, 2 words/packet: header + payload; header = cmd&0x3F |
      payload.bit31<<6 | delta<<7 | 0x80000000)
- [~] Step 2.7 — RAM payload (85KB): groundwork done — 18 entry points
      discovered via flow traversal; entry @0x20036e24 confirmed executable.
      Full translation is a dedicated campaign: byte-match the FreeRTOS
      kernel (CM4F, configMAX_SYSCALL=0x60) against public source first,
      then translate the ADI application modules (scheduler.c,
      cal_task_core.c, monitor_rssi.c, monitor_drv.c, streams_interrupts.c,
      spimaster.c, lb_pll_nco_mgr.c, tracking_cals.c, fh.c, mcs.c, dma.c,
      gpt.c). Verification machinery applies unchanged; contract RAM
      structs must be linker-placed at fixed addresses.
- [ ] Step 4 — linker-script RAM contract placement
- [ ] Side-quest — compiler fingerprinting
