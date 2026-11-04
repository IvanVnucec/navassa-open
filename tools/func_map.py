#!/usr/bin/env python3
"""Step 1: build a function map + clean per-function disassembly.

Uses capstone with recursive traversal (NOT linear disassembly, which
desyncs on Thumb-2 data/literal pools — the reason the objdump dump has
garbage lines mid-function):

  seeds:   vector table targets (slot 1..N, contiguous odd code pointers)
  from each entry, follow instructions linearly; queue:
    - bl targets                       (direct calls)
    - b/b.w/cbz/cbnz targets           (branches)
    - targets of `ldr pc, [pc, ...]`   (trampolines — resolves the RAM
                                        payload entry points too)
    - literal words with bit0 set that point into a code space, referenced
      by ldr rX, [pc, #imm]            (function tables, indirect calls)
  stop a run at: bx lr, pop {..., pc}, unconditional branch taken,
  invalid/undefined instruction.

Code spaces:
  flash: 0x01000000 .. 0x01000000+len(bin)   (binary offset 0)
  RAM:   0x20036e24 .. 0x20036e24+85KB       (binary offset 0x36e24)

Outputs:
  tools/function_map.txt   entry addr | how discovered | size | first insn | name
  tools/functions.asm      clean per-function disassembly (reading artifact)
"""
import re
import sys
from collections import defaultdict
from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB, CS_MODE_MCLASS

BIN = sys.argv[1] if len(sys.argv) > 1 else "build/Navassa_EvaluationFw.bin"
OUT_MAP = sys.argv[2] if len(sys.argv) > 2 else "tools/function_map.txt"
OUT_ASM = sys.argv[3] if len(sys.argv) > 3 else "tools/functions.asm"

FW_BASE = 0x01000000
RAM_BASE = 0x20036e24
RAM_OFF = 0x36e24
MAX_INSN_TOTAL = 2_000_000	# safety bound

code = open(BIN, "rb").read()
FW_END = FW_BASE + len(code)          # whole binary is mapped at 0x01000000
RAM_END = RAM_BASE + (len(code) - RAM_OFF)   # RAM payload = tail of the binary

md = Cs(CS_ARCH_ARM, CS_MODE_THUMB | CS_MODE_MCLASS)
md.detail = False

def read8(addr):
    if FW_BASE <= addr < FW_END:
        return code[addr - FW_BASE]
    if RAM_BASE <= addr < RAM_END:
        return code[RAM_OFF + (addr - RAM_BASE)]
    return None

def read_word(addr):
    b = [read8(addr + i) for i in range(4)]
    if any(x is None for x in b):
        return None
    return b[0] | (b[1] << 8) | (b[2] << 16) | (b[3] << 24)

def in_code(addr):
    return (FW_BASE <= addr < FW_END) or (RAM_BASE <= addr < RAM_END)

def disasm_at(addr, n=1):
    """Disassemble n instructions starting exactly at addr."""
    buf = bytes(read8(addr + i) or 0 for i in range(n * 4 + 4))
    return list(md.disasm(buf, addr))

# ---- seeds: vector table ---------------------------------------------------
seeds = set()
slot = 1
while True:
    w = read_word(FW_BASE + slot * 4)
    if w is None or not (w & 1) or not in_code(w & ~1):
        break
    seeds.add(w & ~1)
    slot += 1
vec_slots = {}					# target -> first slot
for s in range(1, slot):
    t = read_word(FW_BASE + s * 4) & ~1
    vec_slots.setdefault(t, s)

# ---- recursive traversal ----------------------------------------------------
def parse_target(ops):
    """First operand as integer if it is an immediate address, else None."""
    tok = ops.split()[0].lstrip("#")
    try:
        return int(tok, 0)
    except ValueError:
        return None

bl_to = defaultdict(int)        # target -> # of BL sites
bl_from = defaultdict(set)
lit_to = defaultdict(set)       # target -> literal addresses
extent = {}                     # entry -> max end addr seen from its run
visited_runs = set()
func_entries = set(seeds)       # only BL/LIT/VEC targets are function entries;
                                # plain branch targets are internal labels

work = list(sorted(seeds))
total = 0
MAX_RUN = 100000
while work and total < MAX_INSN_TOTAL:
    start = work.pop()
    if start in visited_runs:
        continue
    visited_runs.add(start)
    addr = start
    maxend = start
    run_len = 0
    while total < MAX_INSN_TOTAL and run_len < MAX_RUN:
        try:
            ins = disasm_at(addr, 1)
        except Exception:
            break
        if not ins:
            break
        i = ins[0]
        total += 1
        run_len += 1
        end = addr + i.size
        maxend = max(maxend, end)
        m, ops = i.mnemonic, i.op_str

        if m in ("bl", "blx", "bl.w"):
            t = parse_target(ops)
            if t is not None and in_code(t):
                bl_to[t] += 1
                bl_from[t].add(addr)
                work.append(t)
                func_entries.add(t)
        elif m in ("b", "b.w", "b.n"):
            t = parse_target(ops)
            if t is not None and in_code(t):
                work.append(t)
            break                       # unconditional branch: flow ends
        elif m.startswith("cb"):        # cbz / cbnz
            t = parse_target(ops.split(",")[-1].strip())
            if t is not None and in_code(t):
                work.append(t)
        elif m.startswith("b") and m not in ("bic", "bics", "bic.w"):
            # conditional branches: beq, bne, bcs.w, ...
            t = parse_target(ops)
            if t is not None and in_code(t):
                work.append(t)
        elif m in ("tbb", "tbh", "tbb.w", "tbh.w"):
            break                       # switch table: cannot follow statically
        elif m.startswith("ldr") and ops.split()[0] == "pc":
            # ldr pc, [...] / ldr.w pc, [...] — trampoline/indirect jump
            mm = re.search(r"\[pc(?:, #(0x[0-9a-fA-F]+|\d+))?\]", ops)
            if mm:
                lit = ((addr + 4) & ~3) + (int(mm.group(1), 0) if mm.group(1) else 0)
                w = read_word(lit)
                if w is not None and (w & 1) and in_code(w & ~1):
                    lit_to[w & ~1].add(lit)
                    work.append(w & ~1)
                    func_entries.add(w & ~1)
            break                       # jump: flow ends
        elif m.startswith("ldr") and "pc" in ops:
            # ldr rX, [pc, #imm] — literal load; follow pointer if code
            mm = re.search(r"\[pc(?:, #(0x[0-9a-fA-F]+|\d+))?\]", ops)
            if mm:
                lit = ((addr + 4) & ~3) + (int(mm.group(1), 0) if mm.group(1) else 0)
                w = read_word(lit)
                if w is not None and (w & 1) and in_code(w & ~1):
                    lit_to[w & ~1].add(lit)
                    work.append(w & ~1)
                    func_entries.add(w & ~1)
        elif m in ("bx", "pop", "bxns") and ("pc" in ops or "lr" in ops):
            break                       # return: flow ends
        addr = end
    extent[start] = maxend

# ---- symbols ----------------------------------------------------------------
symbols = {}
try:
    for line in open("tools/symbols.txt"):
        line = line.strip()
        if not line or line.startswith("#"):
            continue
        a, n = line.split(None, 1)
        symbols[int(a, 16)] = n.strip()
except FileNotFoundError:
    pass

entries = sorted(func_entries)

# ---- function_map.txt ---------------------------------------------------------
with open(OUT_MAP, "w") as out:
    out.write(f"# function map generated from {BIN} (capstone recursive traversal)\n")
    out.write(f"# {len(entries)} discovered entry points, {len(bl_to)} BL targets, "
              f"{slot - 1} vector slots\n")
    out.write("# addr       size   how              first insn                       name\n")
    for e in entries:
        how = []
        if bl_to.get(e):
            how.append(f"BL x{bl_to[e]}")
        if e in lit_to:
            how.append(f"LIT x{len(lit_to[e])}")
        if e in vec_slots:
            how.append(f"VEC[{vec_slots[e]}]")
        first = disasm_at(e, 1)
        fi = f"{first[0].mnemonic} {first[0].op_str}" if first else "?"
        size = extent.get(e, 0) - e
        out.write(f"0x{e:08x}  {size:6d}  {','.join(how):18s} {fi:32s} {symbols.get(e, '')}\n")

# ---- functions.asm: clean per-function disassembly -----------------------------
with open(OUT_ASM, "w") as out:
    out.write(f"; clean per-function disassembly of {BIN}\n")
    out.write(f"; generated by tools/func_map.py (capstone, recursive traversal)\n")
    for e in entries:
        end = extent.get(e, e)
        # extend to the next entry so tail-sharing code stays readable
        nxt = [x for x in entries if x > e]
        stop = min(nxt[0], end) if nxt else end
        if stop <= e:
            stop = end
        # include runs that started below e but extend past it
        name = symbols.get(e, f"sub_{e:08x}")
        out.write(f"\n; ==== {name} @ 0x{e:08x} (size ~{stop - e}) ====\n")
        addr = e
        while addr < stop:
            ins = disasm_at(addr, 1)
            if not ins:
                out.write(f"0x{addr:08x}:  ??\n")
                addr += 2
                continue
            i = ins[0]
            out.write(f"0x{i.address:08x}:  {i.mnemonic:<8s} {i.op_str}\n")
            addr += i.size

n_named = sum(1 for e in entries if e in symbols)
print(f"wrote {OUT_MAP}: {len(entries)} functions, {len(bl_to)} BL targets, "
      f"{slot - 1} vector slots — {n_named} named")
print(f"wrote {OUT_ASM}")
