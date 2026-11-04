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
   0x47002004, control block at 0x200020d1, buffer pointer at 0x2002516c.
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
- `0x200020d1` — control block used by `sub_100ae54`
- `0x2002f450` / `0x2002f454` — compared for equality by `sub_104423c`
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

## Status

- [x] Step 0 — differential tracer + harness mode
- [ ] Step 1 — function map
- [ ] Step 2.1 — startup/vector table *(done: `src/navassa_open_startup.s`)*
- [ ] Step 2.2 — leaf helpers
- [ ] Step 2.3 — reset handler → `main()`
- [ ] Step 2.4 — init sequence
- [ ] Step 2.5 — main loop / scheduler
- [ ] Step 2.6 — host communication
- [ ] Step 2.7 — RAM payload
- [ ] Step 4 — linker-script RAM contract placement
- [ ] Side-quest — compiler fingerprinting
