# navassa-open — Reverse Engineering & Reimplementation Plan

Roadmap for converting the closed-source ADRV9001 (Navassa) evaluation firmware
into an open C reimplementation, verified against the Unicorn emulator.
Full historical detail of the completed groundwork lives in git history and
PLAN.md.bak-style commits; only current state and next steps are retained here.

## Completed foundation

- **Emulator** (`emulator/emulator.c`): Unicorn-based Cortex-M4, differential
  tracer (`--compare`, `--call` harness, TRACE/TRACE_OUT/SEED modes), flash
  alias at 0x0, writable flash window, NMIPENDSET suppression model
- **Function map** (`tools/func_map.py`): capstone recursive traversal; 1799
  functions, `tools/function_map.txt` + clean disasm `tools/functions.asm`
- **Symbols**: ~106 named functions/modules/data addresses
  (`tools/symbols.txt`), xref table `tools/xrefs.txt`, IRQ map `tools/irq_map.txt`
- **Boot layer**: 16/16 functions translated to C and trace-verified
  (src/navassa_helpers.c, src/navassa_init.c, src/navassa_open.c)
- **Kernel identified**: FreeRTOS V10.2.1 ARM_CM4F; port handlers
  byte-matched from hand-written asm; kernel data blocks + config constants
  + pxCurrentTCB (0x2001e564) pinned; kernel lives in flash and is
  substitutable from public source
- **Host comms**: mailbox_xfer (0x100ae34) + mailbox_notify_flush (0x100ad34)
  fully decoded — ring buffer protocol with SPI counter
- **LZ77 decompressor**: offline decoder built & validated
  (tools/decompress.py); compressed data segments extracted to
  build/decompressed_*.bin (patch table + 44KB app data + payload lists)
- **App modules structurally decoded**: scheduler.c (channel state machines,
  dependency DAG, notify/PendSV wrapper), streams_interrupts.c (IRQ
  handlers + dispatcher), event dispatcher + action executor, SPI engine
  (DWT-timed ops, TX/RX IRQs), DMA, calibration engine (IRQ253: profile
  scatter + radio config spawners)
- **Known emulator limitation**: unicorn 2.1.4 fault at 0x0100298c (valid
  BNE) blocks full emulated app-run; offline decode sidesteps it

## Ghidra pipeline (NEW)

Ghidra 11.3.2 headless import + analysis + post-script
(tools/ghidra_run.py) — see session summary.
