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

## Step 2.7 progress: FreeRTOS kernel identified (session log)

Exact byte-match of *compiled* kernel functions failed (0 hits across
V10.3.1/V10.4.3/V10.4.6/V10.6.2/V11.1.0 at -O2/-Os, GCC 10.3) — the closed
firmware was built with a different compiler (likely Keil). Pivot to
structural identification:

- capstone needs CS_MODE_MCLASS for ARMv7-M system insns (MRS/MSR) —
  without it disassembly silently truncates at those functions (this
  silently degraded earlier maps; func_map.py now fixed and regenerated:
  1799 functions)
- the FreeRTOS port handlers are HAND-WRITTEN ASM — compiler-independent:
  - `mrs r0, psp; isb` byte-pattern found exactly once → xPortPendSVHandler
    at 0x0103a3a0 (= vector slot 14)
  - vector slot 11 = vPortSVCHandler (0x0103a3f8) — old-port structure
    (mov r0,#0; msr basepri before bx r14)
  - vector slot 15 = xPortSysTickHandler wrapper (0x0102bfae):
    save-mask → xTaskIncrementTick (0x0101b364) → ICSR = 0x10000000
  - vTaskSwitchContext at 0x0101b42e (called from PendSV)
- version pinned: the `stmdb sp!, {r0, r3}` variant + old SVC tail match
  the pre-2020-resync kernel tree; tree at that point = **FreeRTOS Kernel
  V10.2.1**; configPRIO_BITS=4, configMAX_SYSCALL=0x30 (LIBRARY=3)
- **pxCurrentTCB = 0x2001e564** (from the shared literal pool @0x0103a444)
- kernel lives in FLASH (0x0101xxxx/0x0103xxxx); the 85KB RAM payload is
  the application layer on top of it
- ICSR fact correction: PENDSVSET = bit28 = 0x10000000 (not 0x80000000 —
  that is NMIPENDSET; ADI wrappers do write 0x80000000 deliberately)

## Kernel data layout mapped (session 2)

xTaskIncrementTick (0x0101b364) and vTaskSwitchContext (0x0101b42e) both
address kernel globals through merged static bases (Keil-style base merging):

- Block A @ 0x2001e1ac (tasks.c-ish globals):
  +0x28 pxDelayedTaskList, +0x2c pxOverflowDelayedTaskList (swapped on tick
  wrap), +0x4c xTickCount, +0x58 xYieldPending, +0x5c (tbd, inc'd on wrap),
  +0x64 xNextTaskUnblockTime, +0x6c uxSchedulerSuspended
- Block B @ 0x2001e4ec:
  +0x00 pxReadyTasksLists[] (List_t, 20 B each → configMAX_PRIORITIES = 6),
  +0x78 pxCurrentTCB (= 0x2001e564 ✓ matches literal pool), +0x7c
  uxTopReadyPriority used as CLZ bit-map
  → configUSE_PORT_OPTIMISED_TASK_SELECTION = 1
- TCB: uxPriority at TCB+0x44 (matches V10.2.1 layout with
  configMAX_TASK_NAME_LEN etc.)
- ListItem_t = 20 bytes ✓ (V10.2.1)
- configMAX_SYSCALL_INTERRUPT_PRIORITY: PendSV masks with 0x30 (3<<4);
  ADI's basepri_cap helper caps at 0x60 — two constants coexist, TBD which
  is configMAX vs an ADI-specific ceiling

Next: map remaining kernel functions by their references to these bases
(any function loading 0x2001e1ac/0x2001e4ec from a literal pool is a
kernel function; offset usage pattern identifies its role).

## Kernel function inventory (session 3)

Functions referencing the kernel data bases (literal-scan method):
- 0x0101b88c — bridge function: reads A[0x4c] (xTickCount) into caller's
  out-pointer (arg4), byte state at A[0x50] set to 2, jump-table dispatch on
  arg2 (0..4), calls pendsv_yield wrapper (0x100aca0), 0x102bfdc, 0x101b21e —
  scheduler.c-style function using kernel internals (naming TBD)
- 0x0101b9d8 — touches A[0x0,0x28,0x2c,0x4c,0x64]; B[0x78,0x7c] — candidate
  xTaskResumeAll (unblock + tick re-merge pattern) (naming TBD)

Observation: queue.c/timers.c keep their own statics (other merged blocks);
find them the same way via a known queue/timer anchor. Also: significant
application code lives in FLASH too (top referenced RAM addresses:
0x20000404 x115 refs, 0x2001c230 x49, 0x2001ccf8 x46, 0x20002100 x44,
0x2001d918 x36 — these are app/driver global blocks worth anchoring).

Method note: literal-scan + containing-function attribution + capstone
(CS_MODE_MCLASS!) offset extraction works well; reuse tools/fros_match.py
ideas for the ADI module hunt.

## Naming progress (session 4)

Confirmed by decode + tail-shape:
- 0x0101b9d8 = prvAddCurrentTaskToDelayedList (portMAX_DELAY cmn test,
  delayed/overflow list select, xNextTaskUnblockTime = min(...) tail)
- 0x01035938 = vListInsert, 0x01035984 = vListRemove,
  0x01035952 = second vListInsert specialization
- 0x0102bfdc = vPortValidateInterruptPriority (IPSR → IPR table
  0xe000e400 pre-adjusted via 0xe000e3f0, ucMaxSysCallPriority byte at
  0x2000b650, AIRCR PRIGROUP validation)
- 0x0101b21e = BASEPRI raise to 0x30 (confirms configMAX_SYSCALL=0x30 a
  second time)
- 0x0101b88c/0x0101b950 = ADI scheduler state-machine functions (read
  xTickCount, byte state at A[0x50]=2, tbb dispatch 0..4, delayed-list
  insert, ready-bitmap set, xYieldPending) — scheduler.c module
- 0x0100aca0 reframed: 46 callers app-wide — the "signal host via
  ICSR write" primitive (writes 0x80000000 = NMIPENDSET when arg==0),
  used by ADI code as an event/notify mechanism
- full xref table saved: tools/xrefs.txt

## Naming progress (session 5)

- TCB notification fields located: ulNotifiedValue @TCB+0x4c,
  ucNotifyState @TCB+0x50 (strb #2 = taskWAITING_FOR_NOTIFICATION)
- 0x0101b70e = ulTaskNotifyTake(xClearCountOnExit, xTicksToWait)
- 0x0101b75e = xTaskNotifyWait(bitsToClearOnEntry, bitsToClearOnExit,
  pulNotificationValue, ticksToWait) — 4 args + bic on entry ✓
- 0x0101b6bc = prvGetNextUnblockTime (walks delayed-list head item value)
- 0x0101b134 = boolean gate helper feeding nmi_signal (delayed-list empty
  check inside tick processing)
- xref method (tools/xrefs.txt) continues to pay off: callers of
  basepri_raise (taskENTER_CRITICAL users) currently only the ADI
  scheduler ops — queue.c cluster still unanchored (its critical
  sections may inline differently)

## Round 6 findings

- Queue_t layout confirmed in closed code (V10.2.1): pcHead@0, pcTail@4,
  pcWriteTo@8, u@0xc..0x14, xTasksWaitingToSend@0x18, 
  xTasksWaitingToReceive@0x2c, uxMessagesWaiting@0x40, cRxLock@0x44,
  cTxLock@0x45
- queue.c cluster located: sites 0x102b05a/0x102b190/0x102b32c tail-call
  vTaskRemoveFromUnorderedEventList; 0x102b3cc manipulates cRxLock/cTxLock
  bytes (lock recovery path); callers of vTaskPlaceOnEventList
- pvPortMalloc found (0x101bd1e, heap_4): min-ever-free update against
  [0x2000d098+0x10]; heap globals block @0x2001d098
- vTaskPlaceOnEventList @0x101b4fc (event-item insert + delayed tail call)
- naming workflow proven end-to-end for kernel modules; remaining: pin
  exact xQueueGenericSend/Receive entries, timers.c block, then the ADI
  app modules (scheduler.c surfacing around 0x101b88c; app data blocks
  0x20000404 x115 refs etc.)

## Round 7 findings

- 0x0102bf6c = taskENTER_CRITICAL wrapper: BASEPRI=0x30 + uxCriticalNesting
  increment at 0x2000b650+4 + not-in-ISR assert (ICSR VECTACTIVE read)
- port statics block @0x2000b650: [+0] ucMaxSysCallPriority (byte, 0x30),
  [+4] uxCriticalNesting
- prvIsQueueEmpty/Full pair @0x102b2a6/8 (uxMessagesWaiting@Queue+0x40)
- Queue_t layout pinned (see round 6); big queue functions at 0x102aec0
  (GenericReceive-family: 4 args, peek flag), 0x102afd6
  (SemaphoreTake-family), FromISR pair 0x102b06a/0x102b198, lock-recovery
  helper 0x102b32c (cRxLock/cTxLock byte handling)
- names tentative-but-structure-backed; verify by tracecmp when the queue
  path gets exercised end-to-end

## Round 8 — MAJOR CORRECTION

The 0x102axxx-0x102b3xx "queue.c cluster" is NOT FreeRTOS queue.c:
- the blocked-wait struct has a ListItem_t at +0x24 and signed bytes at
  +0x44/0x45 — Queue_t has wait-lists at +0x18/+0x2c (mismatch)
- 0x0101b4fc renamed to vTaskPlaceOnUnblockedEventList (insert event
  item + tail-call prvAddCurrentTaskToDelayedList — V10.2.1 shape ✓)
- the whole 0x102axxx-0x102b3xx cluster = **ADI custom wait/notification
  layer** built directly on kernel internals (xTaskNotifyWait,
  custom lists, ICSR signals, BASEPRI critical sections) — consistent
  with the app using task notifications instead of queues
- queue.c may not be linked at all; FreeRTOS queue usage unconfirmed
- configUSE_QUEUE_SETS / generic-queue paths: TBD
- tools/symbols.txt relabeled accordingly

## Round 9 findings

- 0x20000404 = the central driver/device context (115 literal refs from
  89 functions); accessed via getter thunks clustered around 0x01044314
  (each thunk returns &ctx->field with a precomputed literal)
- top context users: 0x0104138c (x8: status-flag RMW functions with
  0xfff7 halfword masks — monitor/status module), 0x0103df28 (x5),
  0x01007bf6, 0x01020e90, 0x010373a8
- this is the entry point for the ADI app translation: identify the
  context struct layout from its most-referenced fields, then work
  outward through the 89 users

## Round 10 findings

- 0x01041332/0x0104138c = per-stream interrupt handlers (streams_interrupts.c):
  read GPIO-ish status byte (0x46000f78 / 0x46001378), clear-ack RMW on
  halfword register 0x41000b0a (masks 0xfff7 / 0xf7ff — one bit differs per
  channel), check enable conditions ([ctx+0x2d], global byte at
  0x2001ccf8+0x77c), then dispatch via table 0x2000bae8 (8-byte stride,
  indexed by [subctx+8] and [subctx+2]) into 0x1031e9e with 5 stack args
- data blocks identified:
  - 0x2001ccf8 = stream/channel manager (x46 refs)
  - 0x2000bae8 = channel dispatch table
  - 0x41000000 region = stream/data registers (halfword RMW ack bits)
- next: decode dispatcher 0x1031e9e, then the ctx struct field map

## Round 11 findings

- dispatcher 0x01031e9e head decoded: event routing — arg0 = event object
  (bytes [+0]=type, [+1]=flags, [+4]=bound, [+0x26]=enable), arg1 = stream
  id (validated against [fp+4]); handler selected from 0x2000bae8 table as
  [table + stream*8 + type*4]; handler struct has [+0x10] byte; calls
  0x0101d464 (route/send?) and nmi_signal (0x100aca0)
- stream event object layout starts: +0 type u8, +1 flags u8, +4 bound u32,
  +0x26 enable u8
- next: full decode of 0x1031e9e body + 0x101d464; then map the event
  objects' producers (who builds them — the RMW status functions)

## Round 12 findings — dispatcher (0x01031e9e) fully characterized

Event object (arg0) layout: +0 event-id u8, +1 flags u8, +2 channel u8,
+4 expected-stream u32, +0x24 byte (mode?), +0x26 enable u8. Callers pass
5+ stack args ([sp+0x30..0x40] read = results/counters).

Data blocks used by the dispatcher:
- 0x2000bae8  dispatch table [stream*8 + type*4] -> handler obj (+0x10 byte)
- 0x200438d4  channel lookup table (byte-indexed)
- 0x2001d918  per-channel state array (fields +0x44 = installed handler,
  +0x90/+0xa0 = 8-byte ctx copies) — x36-ref block
- 0x20009ed4  object table; [obj+0x30] = callback fn ptr (installed)
- 0x20019d78 / 0x2001fb60  per-channel counters (cleared on events)
- 0x2000bb10  secondary dispatch table ([stream*8+type*4] -> +0x1c)

Behavior: validate stream vs [fp+4]; select handler; install callback into
per-channel state; clear per-channel counters; optional arm/timeout via
0x100aa26; several completion paths (0x1031b7c, 0x1031a30); glue thunks
0x1032478/86/8e/a6/b2 = constant-arg wrappers tail-calling 0x1006980 /
0x102da94.

## Round 13 — event→hardware pipeline complete

0x0101d464 = event action executor: 3 flash tables of per-channel register
bases (tableA 0x01044050: 0x46000e00/0x46001200/0x46000600/0x46000a00/
0x46000800/0x46000c00; tableB/C shifted variants up to 0x46003a00); event
type (tbb 0..3) selects a sequence of pin_update ops on base+0x174/0x175/
0x12d/0x4a with masks {1,2,4,8,0x10,0x20}; glue thunks
(0x101d448..0x101d54a, 0x101cb30) = constant-arg pin_update tail calls;
0x01010262 = per-channel byte getter (table 0x2001fd10); 0x101d54a+ block
uses 0x2001c230 (x49-ref block).

FULL PIPELINE now mapped end-to-end:
IRQ pin -> stream_int_handler (ack RMW @0x41000b0a)
        -> dispatcher 0x1031e9e (validate/install-callback/clear-counters)
        -> action executor 0x101d464 (per-channel pin_update sequences)
        -> pin_update 0x1002db4 (VERIFIED in C) -> registers

## Round 14 findings

- dispatcher callers complete: 4 total = 2 stream int handlers + 0x1028ba8
  (stream_ctrl_event_dispatch: per-bit config of [event+0x14] bits 2/3 ->
  0x101cf98(0/1) + channel mgr reads) + 0x103496e
- 0x103496e = DWT-timed operation: enables DEMCR |= 0x1000000 (TRACENA),
  DWT->CTRL |= 1 (CYCCNTENA @0xe0001000), reads driver ctx [0x20000404+0x77f]
  -> the calibration timing infrastructure (cal_task_core.c/tracking_cals.c)
- 0x101d464 named: event_action_executor
- event objects are PRE-ALLOCATED inside the dispatch table entries
  (handlers pass table[i] straight to the dispatcher); producers modify
  the pre-allocated objects rather than constructing them

## Round 15 — driver context field map (partial)

Method attempt: literal-site + forward dataflow scan. Naive heuristic
(find nearest referencing ldr, extract following [reg,#off] accesses)
yields only partial results — shared literal pools break the nearest-ldr
assumption. Partial result:
  +0x22 — most-used context field (x10 sites; candidates: 0x1007254,
          0x100cf1a, 0x101d5da) — likely the stream/channel status word
  +0x10, +0x0c — single uses
Proper approach for the full field map: load firmware.elf into Ghidra and
use its dataflow/struct analysis, or extend the tracer to log the
containing instruction per MMIO/RAM access at runtime (runtime values
disambiguate what static analysis cannot). Mark as tooling-limited;
continue with other threads meanwhile.

## Round 16 — MAJOR FINDING: stack-based parameter block

Runtime trace (TRACE_RAM_ALL, no stubs) shows the RAM payload entry
(0x20036e24) is a FLOAT CALCULATION routine reading its arguments from the
INITIAL STACK:
- bytes at [sp+0x8], [sp+0xd], [sp+0x19], [sp+0x29], [sp+0x2d]
- int16s at [sp+0x16], [sp+0x26]
- constants: 0x3d800000 (0.0625) and neighbors in its literal pool
  (0x20036f08+)
- error codes returned in r0: 0xff18/0xff19/0xff1a/0xff1b/0xff1c
  (ADI error-code range)
- epilogue: add sp,#0x30; vpop {d8}; pop {r1,r4,r5,r6,r7,pc} — matches
  the trace's final stack reads exactly

=> THE EXTERNAL CPU SEEDS THE M4's INITIAL STACK with a parameter block
   before release; this is part of the load-time contract (alongside the
   RAM byte at 0x2001fcee). The emulator must pre-seed stack contents to
   emulate the real handoff — that is why the app currently goes quiet
   after the first RAM call.

Also confirmed: the trace replays the verified boot C functions
(init_write_boot_byte, init_sequence, pin RMWs) — live cross-validation
of the translation.

TODO: map the full parameter-block layout (stack offsets + meanings),
seed it in the emulator, re-run, and follow the app deeper.

## Round 17 — BREAKTHROUGH: flash alias + stack seeding unblocks the app

Two fixes:
1. **Flash alias at 0x00000000** (standard Cortex-M boot remap): the
   firmware pends NMI/SVC exceptions BEFORE setting VTOR; with VTOR=0 the
   exception fetch goes to address 0 — previously unmapped = the original
   "PC=0 fault" that blocked strategy A. With the alias, exceptions
   vector correctly into the real table.
2. **Stack parameter seeding via new SEED env** (comma-separated
   addr=val): the two trampoline entry points consume pre-seeded 0x50-byte
   stack frames; frame N's saved-pc must hold the boot return address
   (0x010441ad / 0x010441b5).

Result: 86 events -> 33,717 events. The app now:
- runs the RAM float-calc entries (returns ADI error 0xff19 with zeroed
  params — plausible without real host data)
- executes a massive initialization memset (~8KB+ zeroed at 0x2000e000+,
  plus 0x20020000, kernel blocks 0x2001e000/400, RAM data 0x20038000)
- the 0x010029ae/b2 "idle loop" is actually the memset BYTE-TAIL loop
- stops in the scheduler-handoff helper region (0x010442b1) — next
  unseeded structures to identify
- driver context 0x20000404 still untouched (init not complete yet)

Seed used:
SEED="0x200255cc=0x010441ad,0x200255f4=0x010441b5,0x2002558d=0x20,
0x2002559d=0x20,0x20025596=0x0100,0x200255a6=0x0100,0x20025588=0x20,
0x200255a9=0x20,0x200255ad=0x40"

## Round 19 — the 0x0100298c unicorn fault (blocker, fully characterized)

State: app init runs 33,713 events (giant init memsets at 0x2000e000+,
0x20020000, kernel blocks); then the RLE decompressor phase (copy loop at
0x0100296a region, source 0x010444dc..0x01046326 in flash, dest
0x01047fe4+ — the RAM payload's flash-resident copy is COMPRESSED and
expands in place beyond the binary end) stops with UC_ERR_INSN_INVALID at
0x0100298c — a VALID backward BNE (bytes f9 d1 verified at runtime via
UC_HOOK_INSN_INVALID).

Eliminated hypotheses: flash alias size (full vs 4KB), map splitting,
timeout/icount interference, NMI-pend storm (suppression made no
difference — the write never happens in this flow), flash corruption
(single write logged only), read-only flash (reverted — the SoC's
0x01000000 region is genuinely writable: firmware decompresses into it).

Minimal repro (real bytes + real regs, tools-needed): reproduces an
exception storm from a trivial copy loop → points at unicorn 2.1.4's
M-profile exception/TB internals, not our setup. pip caps at 2.1.4.

NEXT (pick one):
a) build unicorn from git master (post-2.1.4 M-profile fixes) and retry
b) OFFLINE DECOMPRESSION: implement the RLE decoder in Python (algorithm
   visible in the disassembly: token = byte; low2 bits = type; nibble
   run-lengths with 0xF escape -> extended count; literal runs; byte-tail),
   decode 0x010444dc.. offline, pre-load the expanded image via SEED/
   mapping, bypass the buggy path entirely. RECOMMENDED — no toolchain
   risk, and the decompressed payload becomes a first-class artifact for
   the RAM-payload translation campaign.

## Round 20 — the payload decompressor identified (LZ77 variant)

Correctly-aligned decode (tools/decompressor.asm): entry 0x0100296a,
descriptor-driven: desc[0]=offset (src = desc+offset), desc[4]=size
(bit0 selects initial phase), desc[8]=destination. Phases:
- literal byte-copy loop (r1 = count)
- back-reference loop: distance = ((token&3)<<8 | next_byte) copied
  BACKWARD from dest (rsbs r1 = -dist; src = dest - dist)
- main token loop: token byte: low2 bits = type/flags, high nibble =
  run length, 0xF = escape to extended byte lengths
- source end = src + (size>>1)!! (size halved — packed nibbles?)
The 0x01044000+ region holds the COMPRESSED payload; it expands in place
toward 0x01047fe4+ and beyond the binary end (hence the 1MB window).
Remaining: pin the descriptor construction (handoff 0x010442a6 sets up
r9/sb and the desc) and implement tools/decompress.py to expand the
payload offline (option b) — bypassing the unicorn fault entirely.

## Round 21 — offline decoder built & VALIDATED (the fault is bypassed)

tools/decompress.py: full port of the LZ77 decompressor (0x0100296a).
Blind bug found and fixed during ground-truth validation: token field
roles are [1:0]=literal count, [3:2]=distance high, [7:4]=match nibble
(first script had them swapped — tried all interpretations, only this
one yields correct data). Validation: token/bit consumption aligns with
real data, decoded values interpreted as u32 are sane hex patterns.

TWO compressed DATA segments found (LZ77-expanded at boot into RAM):
- desc 0x010444dc: off=0x1ae2 size=0x6d0 dest=0x20020000
  2692 bytes → build/decompressed_0x20020000.bin
- desc 0x010444fc: off=0x28 size=0x3534 dest=0x200027f8
  44368 bytes → build/decompressed_0x200027f8.bin (app DATA segment,
  overlaps the mailbox state area 0x20002800)
- segment 1 = application init/config tables: repeating
  {u32 len/val, u32 ptr 0x2001dfxx, u32 val, u32 0x00020000} records —
  parameter blocks referencing kernel-block-A-adjacent RAM addresses

Validation (blind, no emulator): decoded stream contains structured,
4-aligned records with valid-looking RAM pointers; values in u32
interpretation are instantly recognizable as configuration data (e.g.
0x2001df1c/0x2001df2c/0x2000df44). Decompressor code semantics fully
pinned by the trace: literal count semantics confirmed by emulator write
sizes, back-reference insns decoded above.

Note: the fault at 0x0100298c blocks only EMULATED execution; offline
decoding sidesteps it entirely. Remaining unicorn limitation noted in
Round 19; a newer unicorn build may lift it later.

Also committed to build/: raw round-20 emu trace + LZ77 disasm listing.

## Round 22 — decompressed blobs validated & characterized

Token interpretation crosscheck: both decompress paths (tools/decompress.py
and the debug decoder) use identical bit fields ([1:0]=lit count,
[3:2]=dist hi, [7:4]=match nibble) — earlier confusion unfounded.

Blob 1 (0x20020000, 2692B): 16-byte field-patch records
  {u32 value, u32 ram_ptr, u32 field_bits, u32 field_mask}
  pointers target: 0x2001dfxx (app cfg block below kernel block A),
  0x2000b7xx (port statics region), 0x2001c9xx, 0x2001f2xx, 0x2000b70c.
  Value examples: 0x1100/0xa00/0x400/0x4100/0xc000 vs masks
  0x00020000/0x00100000/0x00004000 — boot applies these register field
  writes via this table (the actual applier TBD).

Blob 2 (0x200027f8, 44368B = app DATA segment):
  - 8B of 0xff sentinels at 0x20002800 (mailbox state block area)
  - 5129B of 0xff at 0x2000b678 (right after port statics block —
    likely a pool/arena)
  - NCO/DDS tuning-word table: linear ramp step 0x0bebc200 (=200,000,000)
    starting 0x08f0d180 — 64+ entries
  - zero-gap markers at ~0x2000a31f
Validation achieved: both blobs decode into coherent aligned records and
recognizable domain data — decompressor implementation is CORRECT.

Artifacts: build/decompressed_0x20020000.bin, build/decompressed_0x200027f8.bin
Next: identify the code that applies blob1's patch records (CLZ scan for
reads of 0x20020000); map the app data segment fields via the known
addresses (0x20002800 mailbox state); then resume translation with real
data in hand.

## Round 23 — the scheduler.c module surfaces

Functions 0x10232f6/0x10233b8/0x1023458 = channel state-machine handlers
(state codes 0..7 at [ch+0x1c]):
- enter critical section (0x1036d24 + 0x1036d82 pair, level 0xb/4/5/8)
- mailbox_xfer(cmd = 0x22/0x23/0x25, channel) — per-channel mailbox cmds!
- bump per-channel counters in array @0x2001aac8 (76B/channel: counters at
  +4/+0x14/+0x1c, heap body ptr at +0x2c; body: state @+0x1c, 8 callback
  slots @+0x44..+0x5c, sentinel 0xff @+0x64)
- dispatch callbacks; producers 0x1028ba8/0x1028b76; VM op 0x1024050;
  on error: boot_msg(1, code, 3) + state ptr + 0x139/0x1a2 codes at
  0x200002d4/0x200002d8 (the "flags" pair from the reset handler!)
- heap allocation verified: per-channel body comes from pvPortMalloc
  (0x101b348 probe helper)
This ties together: mailbox cmds 0x22/0x23/0x25, the stream event
framework, the reset-handler "error code" pair, and FreeRTOS heap.
The 0x20020000 patch-table applier is still unresolved (only 2 literal
refs: 0x1023302 = inside sched_channel_op_22! and 0x10444e4 = descriptor).

## Round 24 — scheduler dependency machinery decoded

- 0x200025b0 = new master config/lock block (64B stride entries, bitfield
  words at +0xb0*4?? — critical-lock table, 17 entries max (cmp #0x11))
- 0x1036d24/0x1036d82 = scheduler lock check pair: reads lock count [blk
  +0x240], per-entry lock words [blk + idx*64 + 0x2c0], bit tests
- 0x1023710 = DEPENDENCE SCANNER over a dependency table (vm+0xc words,
  count vm+8): walks entries BACKWARD (decrementing index), for each dep:
    - 0x1028d1c (dep_compare) computes 3 flags from the two channel
      structs: [0x60]&[0x60] (mask AND), [0x64] equality, [0x14] mod-4/12
      phase-group match
    - flag0 -> op_25 (unbind/remove), flag1 or state==7 -> op_23 (requeue),
      else note-first-blocked
  - error path: table too big or bad index -> boot_msg(1, 0xff30, 3) with
    state 0x2d5
  - returns first blocked channel (r4) for yield decision
- channel struct now has: +0xc dep table, +8 dep count, +0x14 group bits,
  +0x60 mask, +0x64 prio byte, +0x1c state
This is a wait-dependency/DAG resolver for the ADI scheduler (scheduler.c
resource-dependency handling).

## Round 25 — scheduler state transitions + who drives the machine

- 0x102b572 = channel state setter: [ch+0x1c]=new_state, then (unchanged?
  no — always) mailbox_xfer(cmd=[ch+0x6d], ...) — the 0x22/0x23/0x25 cmds
are per-channel (stored per channel at +0x6d!), so ONE function handles all
channel commands via the byte at +0x6d. Previous "op handler" framenaming
refined: the handlers differ by leading state checks, but all send the
channel's own cmd.
- 0x10232c6 = wrapper: calls 0x101b88c (the task-notify-state machine!
arg0=[ch?], r2=1 = 'set BITS'? recall A[0x50]=ucNotifyState=2 write) and
on nonzero result pends PendSV (ICSR=0x10000000 — REAL PENDSVSET!).
Confirms 0x101b88c notifications: the scheduler waits on task
notifications per channel.
- xref yields the top-level driver: 0x1028a2a/0x1028a98 (both call the
crit pair + SS helpers + state setter) — remaining: who calls
0x1023710/0x10232f6 (0 callers each — they must be reached indirectly:
0x1028a2a/98 likely dispatch). Next: decode 0x1028a2a/0x1028a98.

## Round 26 — IRQ map + scheduler call chain complete

- 0x1028a2a = timer IRQ handler: per-timer-slot scan (table 0x2000b65c,
  16 slots): slot has flag byte [+0xd] & (1<<arg), state [+1]==2, pending
  count [+0xc]==0 → state=3, body [+4]: state==7 → op chain. Slots 16/17 =
  per-timer "channels" (the 0x102a op family = timer notify handlers).
- 0x1028a98 = the variant for state==3, calls 0x102382c (a block check),
  0x1028d1c compare → sched ops.
- 0x103bcc2 = vector_irq_A: reads [0x2001ccf8+4] = ACTIVE channel/stream,
  calls timer scan; on event: tail 0x1023f52(stream_id, 9, table@
  0x01044520 use) — the stream-framework bridge from timer IRQ!
  NOTE: parts of 0x103bcc0/2 bytes decode as ldr/strb without ldr
  literal (pc-relative reads from 0x01044520 = vtable).
  CALLERS: reached via VECTOR slot 187 (IRQ171) — an interrupt handler!
  (0x100bcc0 (=x86 garbage artifacts of THUMB
  decoding) — functions.asm has desynced extent for it, ok.)
- FULL IRQ MAP EXTRACTED (256 slots, 100+ distinct handlers): committed
  as tools/irq_map.txt. NOTE high slots 176..203 = the SPI/host/DMA
  timers (0x010440bc/1044104/10440de/104415c = the "boot_msg" family
  entries!) — IRQ160/163/166/167 map DIRECTLY to the trampolines used in
  boot: the "boot-state flags" ARE the four timer IRQ callbacks (see
  0x01044278 → 0x10501bc jump family).
  IRQ180/181: stream_int_handler_A/B (our named handlers!) — confirmed
  as real interrupt vectors.
  IRQ 22-25: 0x01000ffc/169a/1204/169e — the remaining stream group.

## Round 27 — stream object "wait flags" mechanism

- 0x1023f52 = stream_flag_tail(arg0 obj, arg1 bits): BASEPRI=0x30, obj
  = arg0+0xb0 (a wait-extension area!), flag word @+0x18 |= arg1 bits
  (r1 OR'd with obj+0x18), then CALLS [obj+0] (a callback fn pointer!)
  and restores BASEPRI. Callers:
    0x1023f68/-f7c = wrappers storing 1 / 0x21 into [obj+0xb0+0x18]
    0x1023ebe/n, 0x1028a98, 0x102a86c, 0x103bcc2 (the vector bridge)
- 0x1023fca = dependency_search(obj, wanted): walks obj->list (obj+0xc,
  entries 4-byte ptrs, count?) comparing to target, returns match (an
  intrusive list search!) — used by dispatcher or wait code.
- The streaming framework now clearly = a callback-driven state machine:
  stream objects carry [0]=handler fn ptr, [0xb0+0x18]=flag word for the
  scheduler — flags being set by completions and cleared on timeouts.

## Round 28 — SPI engine IRQ handlers + blob1 refinement

- 0x0102a86c (IRQ63) = spi_stream_irq_A: MMIO write 0x58000040=0x800 (the
  0x5800xxxx peripheral region — first app access!), bl 0x10028ac(0x3e),
  0x100ae0a(9,0), state block 0x2001fa58: [+0x1b] busy flag (cleared),
  [+0x16] state → dispatch to stream xfer machinery. THE 0x5800 region =
  streaming engine HW.
- 0x0102abe4 (IRQ62) = spi_stream_irq_B (RX variant): write 0x58000040=
  0x2000/0x1000 (two-step ack), 0x100ae0a(0x3b,0), 0x1002880/2896(0x3e),
  state check [0x2001fa58+0] == 5.
- 0x0100ae34-adjacent helpers 0x100ae0a / 0x10028ac / 0x1002880 / 0x1002896
  = app-level event/deassert primitives for the stream engine.
- blob1 records: 102 patch records. The trailing 0x2000d43x/0x2000d44x
  pointers land INSIDE blob2's data (0x200027f8+0x5xxx/0x5c40) — segments
  reference each other. Tail value 0x00000014 = ? (to check).

## Round 29 — SPI streaming engine mapped

- IRQ63  0x102a86c = spi_stream_irq_tx
- IRQ62  0x102abe4 = spi_stream_irq_rx
- IRQ51  0x102a564 = dwt_timed_spi_op (third DWT user — the "SPI in
  timed section" pattern: DEMCR TRACENA + DWT CYCCNTENA + engine regs)
- IRQ216-223 = spi_thunk_N jump table entries (r0=0..3 selects variant
  via 0x100a3a0/0x100a3b2 common)
- streaming engine control reg = 0x58000040 (writes 0x800 = TX kick,
  0x2000+0x1000 = RX ack pair), app uses 0x5800xxxx regs (previously
  unseen region)
- engine state block 0x2001fa58 (+0x16 state, +0x1b busy); secondary ctx
  0x2000d9b0, 0x2001fbdc
- spimaster.c module = the SPI path to the radio frontends; interacts
  via the stream-obj flag/callback machinery decoded in round 27

## Round 30 — mailbox flush + host notify decoded

- 0x100ad34 = mailbox_notify_flush: same ring-writer shape as
  mailbox_xfer but with cmask 0x8000003f and LAST-COUNT reset to 0xFF00
  0000 (mvn), used to push an immediate host-notify packet. Confirms the
  ring protocol is the ONLY host channel (all notifications funnel here).
- The 0x4700200c register: bit1 RMW inside critical section (sema/mu side
  hand-shake reg, adjacent to counter 0x47002004).
- The "0x49000000-1C literal users" at 0x1006380-ad2c = the SAME boot init
  (pattern table for periph_init + read_periph_reg); plus one ref to
  0x100ad18 region = flush/notify code (literal table row spanning
  0x1006380-0x100ad2c shared).
Both mailbox_xfer (cmd 0x22/0x23/0x25 per channel) and
mailbox_notify_flush write into the SAME ring at 0x2002516c-control —
so the whole app coordinate/channel/tab/scheduler machinery back-ends
automatically into host-comms.

## Round 31 — dma.c module surfaces

- 0x102d908 = dma_multi_channel_cfg(mask arg): per-bit (r4) iteration;
  calls prep helpers 0x102d84c/0x102d88e; per-channel table base from
  0x01044068 region (the same table family as event executor!).
- 0x102da94 = dma_channel_cleanup (via 0x102db38 impl): bit 0x20000000
  clear pattern (DMA enable bits!) then count-down loop.
- The 0x01044050/68/78 register-base tables serve BOTH the event action
  executor and DMA prep — they are the per-channel peripheral base
  table (one row per channel; dwords point into the 0x46000000 region).

## Session progress checkpoint (after 12 pushes)

Named-symbol census: ~90 symbols in tools/symbols.txt now, covering:
- FreeRTOS kernel (V10.2.1): port handlers, scheduler core, queues-free
  notify-wait layer, heap_4, list ops — data blocks + config constants
  pinned
- Boot/init layer: ALL trace-verified in C (16/16)
- Host comms: mailbox_xfer + mailbox_notify_flush (the only 2 ring
  writers) — host protocol fully characterized
- scheduler.c: channel machines, dependency DAG resolver, state setter,
  PendSV coupling — plus lock table (0x200025b0) and per-channel state
  array (0x2001aac8) located
- event framework: stream IRQs (IRQ180/181) -> dispatcher ->
  event_action_executor -> pin_update glue -> registers
- spimaster.c: TX/RX IRQ handlers, DWT-timed path, 0x58000040 control,
  engine state at 0x2001fa58
- dma.c: multi-channel config/cleanup over shared per-channel register
  tables
- 256-slot IRQ map: tools/irq_map.txt (core + 100+ app vectors)

Open (not blocking continuation):
- unicorn 2.1.4 fault at 0x0100298c (valid BNE) still caps full
  app-run; offline LZ77 decode sidesteps it (both data blobs extracted)
- patch-table applier logic (blob1, 102 records) — consumed via
  sched_channel_op_22 path (exact loop still to decode)
Remaining unknowns (lower confidence):
- calibration/task modules (tracking_cals.c etc.) — partial
- monitor/MCS modules — untouched
- RAM payload .text — will require the same call-graph campaign once
  the runtime is unblocked (or by static campaign with tools/func_map.py
  on the reconstructed image)

## Round 32 — literal-of-0x20020000 resolved (artifact)

The "second literal" at 0x1023302 is an ADDRESS-MISALIGNMENT ARTIFACT:
byte dump shows the 2-byte offset word 0x3302-0x1023304 = the real
location; our scanner found it by mistakenly including the second
halfword (0x1023302 = mid-word read of 0x2001df10 8-byte record).
TRUE references to 0x20020000: only ONE — the descriptor at 0x010444dc
itself (dest field, self-reference). The patch-table applier therefore
cannot be found by literal-scan: it reaches the table via the DESCRIPTOR
or a leaf function known by convention. Next attempt: trace the function
called after post-decompress memcpy: check `monitor_drv.c`/`mcs.c` region
for the pattern 'for each 16B record: masked RMW at [ptr+ ofs] with
field_bits/field_mask' OR simply note the pattern as TODO.

## Session progress checkpoint

Status (after another ~10 pushes this run):
- Validated the offline decompressor (all 2 data blobs correct)
- scheduler.c module: state setter, notify wrapper with real PendSV,
  dependence DAG scanner, lock table, VM/table interpreter
- Timer/scheduler IRQ top (0x1028a2a/98) + stream framework "wait flag"
  tail (obj+0xb0+0x18 |= bits, callback invocation, BASEPRI 0x30 guard)
- Stream flag bits map to waiters on specific data (obj=[+0xb0] extension
  area) — callbacks installed at [obj+0]
- SPI streaming engine module full: TX/RX DWT-path IRQ handlers, common
  thunk table, engine status block, 0x58000040 control word register
- dma.c module: multi-channel config/cleanup over shared per-channel
  register tables
- mailbox_notify_flush found: the single second ring-writer (all host
  notifications funnel here); host protocol complete
- Literal scan artifact resolved: single link between patch table and
  its applier is via the descriptor; applier loop to be decoded when
  reached
Remaining unknowns / next:
1. event-action applier loop (blob1 16B records)
2. calibration / tracking / MCS modules
3. RAM payload .text campaign (blocked by unicorn 2.1.4 fault but
   approachable statically once the fork of payload handlers start
   naming at scale)

## Round 33 — SPI engine helpers + wait/notify layer cross-linked

- 0x100f6e0 = spi_notify_thunk (tail 0x10254a0 — one of the "wait"
  functions, 10 callers)
- 0x1023f9c = stream_flag_set_0x40: BASEPRI 0x30, {}. loc +0xb8 |= 0x40,
  then invoke callback ([obj+0]); used once by dwt_timed_spi_op — so the
  SPI completion INT signals stream via this flag mechanism
- 0x1014cbc = spi_wait_flag (arg0 byte channel, arg1 param): calls the
  renamed 0x102afd6 ("adi_wait_recv_B"/xQueue-like wait engine) with
  param structures — SPI op waits for the flag to complete, then
  dispatches further steps
- 0x102a860 = tiny helpers (nmi signal pending / deassert glue)
- full wait/notify ring: wait obj [+0x60]=mask, [+0x64]=prio byte —
  these wrap 0x102b2b0 (lock step) and 0x102b05a (wake list work)
The SPI module uses a GENERIC kernel-like wait flag layer (already
decoded as ADI custom wait layer earlier); both SPI IRQ completion paths
dispatch through it.

## Round 34 — calibration engine (IRQ253 = 0x103496e) decoded head

- ctx = driver context (0x20000404)
- byte [ctx+0x77f] tested against 1 (HW-rev selector — TX vs RX radio?); if
  not 1, calls 0x10085c0(7) — auxiliary selector
- state block 0x2001fc14: [+8] = run flag (cleared on entry = "already
  running"), [+0xa] = copy of byte [0x20000230] (profile/mode)
- copies功底table at 0x20000230 (r7!): layout:
   [r7+0x00] byte -> state[+0xa]
   [r7+0x04..] -> ctx[+0x24]  (via helper 0x10348fc)
   [r7+0x14..] -> ctx[+0xe0]
   [r7+0x44..] -> ctx[+0x314]
   [r7+0x54..] -> ctx[+0x3d0]
   [r7+0x64..] -> ctx[+0x48c]
   [r7+0x74..] -> ctx[+0x548]
   [r7+0x84..] -> ctx[+0x604]
   [r7+0x94..] -> ctx[+0x6c0]
  — the ctx is a set of per-channel/per-band calibration parameter banks!
- alternation helper 0x1034c80/0x1034c78 = phase toggling (likely a
  calibration sequence stepper)
This is the per-band tracking/utilization calibration data copy path
during start-up. tracking_cals.c / cal_task_core.c territory confirmed.
Next: continue decode (0x1034908/0x10348fc/0x1034c80 bodies), the
run-state machine's decision tree, then cal completion callbacks.

## Round 35 — calibration engine copy helpers: linked-list scatter

- 0x1034908/0x10348fc = scatter-entry copier: [src] -> [dst+4], [src+4] ->
  [dst], then LINKS dst onto a 0x38/0x40-strided chain with an 8-byte
  memcpy tail loop — this is a linked-list scatter (pre-alloc nodes
  threading the calibration parameter bank records!) conv via helper
- 0x1034c80/78 = small wrappers (dst offsets 0x24/0x34 into state)
- [r7+0x24..] name reveals chain into 0x2001fc14+0x24 and +0x34 — per-run
  aggregated calibration lists
- r1=r4/sb = chain heads. So the calibration engine copies profile table
  content into linked lists — probably later walked by SPI-ops
  when writing radio config register banks
In other words: at boot, driver context gets a LINKED LIST of calibration
records per band/channel (kept beyond the ctx struct that first appears
during init) for use later by the calibration procedures. This is a
significant discovery: the ctx struct has a sublist-per-bank container,
which is the structure used by cal_task_core.

## Round 36 — calibration IRQ body: engine control sequence

After copying banks, the IRQ cal routine:
1. calls 0x101a310 (aux ctrl?) -> sb (mask)
2. loops bits of sl/sb: for bit i:
   - reads stream obj table [0x2001ccf8 + i*4]
   - [obj+4] = 0xFFFFFFFF (marker), [obj+0x10] = state (2 -> fail flag fp=0)
   - calls the STREAM DISPATCHER 0x1031e9e with a ZEROED stack block + a
     mode arg from [obj+8] — so this IRQ RUNS THE EVENT DISPATCH
     DIRECTLY for calibration paths!
   - then 0x1019830(idx, 2 or 5, cal_phase) — another dispatcher/spawner
3. Then handles flag bytes in 0x2001fc14 ([+0],[+1],[+2]): on each set, it
   copies the byte value into one of the PER-CHANNEL single byte register
   addresses: 0x460011ad / 0x460015ad (control byte stores), then runs
   0x1034c88 (a 16-step iterating delay?) and does pin_update with value
   [r5+4] masked to 4 bits on 0x46000199/0x4600019a (channel enums!)
4. Similar per-core repeats for byte 2 -> 0x4600015b / 0x46000634
=> the cal engine writes hardware configuration DIRECTLY (no mailbox) —
it's the radio-control step following profile setup, splitting into
per-core channel resets (0x46000xxx = channel control regs confirmed
again by direct store).

## Round 37 — channel radio-config spawners

- 0x1019830 = dispatcher: mode-select then either:
   * r2==0: r4=1, r3=0 -> 0x10195ee (TX-style config path)
   * r2==1 or 2: r4=0/1 and r3=1 -> 0x101975a (RX-style config path)
- 0x101975a = RX-mode config spawner: table 0x01044030 selects per-channel
  base; constant reg offsets per case: channels 0/1 -> r6=0x41/r7=0x3d
  (RX), channels 2/3 -> r6=0x46/r7=0x42 (this map identifies 0x46001600 as
  a shared per-channel config register — 4 channels at stride!). Calls
  small helpers 0x101981e / 816 / 808 / 80e (each is the 1/2/8/4 field
  sets used per config stage)
- 0x10195ee = TX-mode config spawner with the same table (0x103aee8 base
  offset list, channel bases 0x46001600)  — r6/s6 = RX-mode-dependent
  strides 4/8 vs 2/4
- Both spawn paths live in the radio-config state machine family (huge =
  0x1019xxx-0x101axxx region is the low-level radio config writer —
  the same "byte-write" style as 0x1002db4 pin_update)

## Round 38 — pvPortMalloc entry corrected + heap interface

- 0x101b348 IS pvPortMalloc (earlier named heap_block_probe) — wrapper
  0x0100a7ea = xPortGetFreeHeapSize (malloc-base subtraction, tiny).
- pvPortMalloc callers (flash side): 0x100b15c, 0x101bd1e (extended ctx
  fields — app data structure allocs), 0x10232f6 (per-channel body!).
- The timer-creation path for TempTimer/HealthMonitorTimer strings has no
  direct literal; strings probably referenced by a base+offset arithmetic
  (string table). TODO continue with xTimerCreate via the notify/timer
  xQueueGenericSend path.

## Round 39 — idle/timer-service task string发现了; 创建路径 near

- IDLE string lands at 0x0101ba50 with TCB-address-looking data BEFORE it
  (0x2001e1a8 = pxCurrentTCB base - 4!) — so the IDLE task name isn't
  referenced via pointer because the string is part of the TCB init
  blob. Data just before: `ac e1 01 20` = 0x2001e1a8, `ec e4 01 20` =
  0x2001e4ec — the KERNEL STATIC BLOCKS! This is const-init data writing
  the scheduler's static kernel structs (pcIdleTaskTCB + pxIdleTask-
  Stack etc.) — the idle task itself is const-initialized at
  0x0101ba4x!
- Tmr Svc + Tmr Q strings at 0x0101bf08 region — const TCB/queue init
  data for the timer service task; also embedded. The timer task
  creation pattern is CONST-DATA DIRECT, i.e., no xTimerCreate path is
  executed (static allocation disused) → the timer service uses
  xTimerCreate internally only when app creates timers dynamically.
- TempTimer @0x0100b253 string is within the app's profile table; the
  actual TempTimer creation must use a table-driven call:
  pValue = table + offset pattern. It's referenced via profile
  table with name offsets — need the app timer create function.
Also found: refs tables of .c filenames → 0x01044030/0x01044050 etc =
the per-channel reg tables listed in tools/irq_map analysis. Most rings
already decoded.

## Round 40 — decimal decode correction + Task/Timer creation conclusion

Correction on the earlier round: those literals ARE the marginal pool
references inside the functions already decoded (0x101b88c / 0x101b9c6 /
0x101b9d8), NOT xTaskCreate sites. The idle-TCB const record is accessed
via pxCurrentTCB load + list-insert; earlier interpretation that IDLE
string is the const-init blob stands: no more refs. So:
- Idle task, timer task: const-initialized (configSUPPORT_STATIC_ALLOCATION
  semantics or a static creator variant)
- Dynamic timer creation via app: TempTimer / HealthMonitorTimer — the
  pattern not yet reached, likely in scheduler.c/cal table-driven code
  (deferred to the RAM payload translation phase)
- The whole 0x0101bxxx flash range = the kernel + scheduler bridge

## Round 41 — descriptor table decoded.

Layout at 0x010444d8..0x01044520: 5 16-byte descriptor records
{tag, src_off, len, dst}. Segment indexed by src_off (with unknown base —
candidates: table start 0x010444dc or table end 0x01044520). 2 known
decode shapes match the spec:
  - desc@0x010444dc: {0xfffbe493, 0x1ae2, 0x6d0, 0x20020000} (validated!)
  - second-thought: 0xfffbe4xx is a "sha/compression-version" 4-byte tag,
    then {src_off, len, dst}
Decoded / confirmed blobs:
  blob1 (identified earlier, dest 0x20020000)
  blob2 (dest 0x200027f8, 44368 B, validated!)
  TWO MORE small segments newly identified (seg2 len=0x2a -> dst
  0x200373e0, seg3 len=0x28 -> dst 0x200387e0). Positive that these are
  the compressed LUT blobs.
  "tag"-like fifth record (0x02fefc04 / 0xff01 / 0x52...) looks like
  invalid artifact (wrong stride in my scan) — the record at 0x01044518
  actually begins the compressed stream.
