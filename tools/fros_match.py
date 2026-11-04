#!/usr/bin/env python3
"""Byte-match FreeRTOS kernel functions against the closed Navassa binary.

For each candidate build (kernel version x optimization level):
  1. compile the kernel sources for Cortex-M4F (softfp, matching the
     closed firmware's ABI)
  2. link flat at 0x01000000, objcopy to binary, read nm symbols
  3. for every function symbol, search the closed firmware binary for an
     exact byte match (and report where it matched)
Usage: tools/fros_match.py [--bin closed.bin] [--frk /tmp/frk] [--tags T1,T2]
"""
import os
import re
import subprocess
import sys
import tempfile

BIN = "build/Navassa_EvaluationFw.bin"
FRK = "/tmp/frk"
TAGS = ["V10.3.1-kernel-only", "V10.4.3", "V10.4.6", "V10.6.2", "V11.1.0"]
OPTS = ["-O2", "-Os"]
CFG = "/tmp/frkcfg"
BUILD_BASE = 0x01000000

closed = open(BIN, "rb").read()

SOURCES = ["tasks.c", "queue.c", "list.c", "timers.c", "event_groups.c",
           "stream_buffer.c", "croutine.c"]
PORT = "portable/GCC/ARM_CM4F/port.c"
HEAPS = ["portable/MemMang/heap_1.c", "portable/MemMang/heap_2.c",
         "portable/MemMang/heap_3.c", "portable/MemMang/heap_4.c",
         "portable/MemMang/heap_5.c"]

GCC = ["arm-none-eabi-gcc", "-mthumb", "-mcpu=cortex-m4",
       "-mfpu=fpv4-sp-d16", "-mfloat-abi=softfp",
       "-I", FRK + "/include", "-I", PORT.rsplit("/", 1)[0] if "/" in PORT else ".",
       "-I", CFG, "-ffunction-sections", "-c"]

LD = "/tmp/frkcfg/flat.ld"

LD_TEMPLATE = """
ENTRY(Reset_Handler)
SECTIONS
{
    . = 0x01000000;
    .text : { *(.text*) *(.rodata*) }
    .data : { *(.data*) }
    .bss  : { *(.bss*) *(COMMON) }
}
"""

def build_tag(tag, opt):
    subprocess.run(["git", "-C", FRK, "checkout", "-q", tag], check=True)
    workdir = tempfile.mkdtemp(prefix="frkbuild_")
    objs = []
    portdir = os.path.join(FRK, "portable/GCC/ARM_CM4F")
    inc = ["-I", os.path.join(FRK, "include"), "-I", portdir, "-I", CFG]
    srcs = [os.path.join(FRK, s) for s in SOURCES if os.path.exists(os.path.join(FRK, s))]
    srcs.append(os.path.join(FRK, PORT))
    # single heap: choice doesn't affect other objects' codegen
    p = os.path.join(FRK, "portable/MemMang/heap_4.c")
    if os.path.exists(p):
        srcs.append(p)
    for src in srcs:
        out = os.path.join(workdir, os.path.basename(src) + ".o")
        r = subprocess.run(GCC + inc + [opt, src, "-o", out],
                           capture_output=True, text=True)
        if r.returncode != 0:
            print(f"  [!] compile failed {os.path.basename(src)}: {r.stderr.splitlines()[:2]}")
            return None
        objs.append(out)
    with open(LD, "w") as f:
        f.write(LD_TEMPLATE)
    elf = os.path.join(workdir, "flat.elf")
    r = subprocess.run(["arm-none-eabi-gcc", "-mthumb", "-nostdlib",
                        "-T", LD,
                        "-o", elf] + objs + ["-lc", "-lgcc", "-lnosys"],
                       capture_output=True, text=True)
    if r.returncode != 0:
        print(f"  [!] link failed: {r.stderr.splitlines()[:3]}")
        return None
    binf = os.path.join(workdir, "flat.bin")
    subprocess.run(["arm-none-eabi-objcopy", "-O", "binary", elf, binf], check=True)
    image = open(binf, "rb").read()
    nm = subprocess.run(["arm-none-eabi-nm", "--size-sort", "-S", elf],
                        capture_output=True, text=True).stdout
    funcs = []
    for line in nm.splitlines():
        parts = line.split()
        if len(parts) == 4 and parts[2] in ("t", "T"):
            addr = int(parts[0], 16)
            size = int(parts[1], 16)
            if size >= 24:
                funcs.append((addr, size, parts[3]))
    return image, funcs

def match_func(image, addr, size, name):
    off = addr - BUILD_BASE
    if off < 0 or off + size > len(image):
        return None
    pat = image[off:off + size]
    # find all occurrences in the closed binary
    hits = []
    start = 0
    while True:
        i = closed.find(pat, start)
        if i < 0:
            break
        hits.append(i)
        start = i + 1
    return hits

print(f"closed binary: {len(closed)} bytes\n")
total_funcs = 0
total_hits = 0
matched_funcs = {}
for tag in TAGS:
    for opt in OPTS:
        res = build_tag(tag, opt)
        if res is None:
            print(f"{tag} {opt}: build failed")
            continue
        image, funcs = res
        n_hit = 0
        for addr, size, name in funcs:
            hits = match_func(image, addr, size, name)
            total_funcs += 1
            if hits:
                n_hit += 1
                total_hits += 1
                matched_funcs.setdefault((tag, opt), []).append(
                    (name, size, [hex(h) for h in hits[:3]]))
        print(f"{tag} {opt}: {n_hit}/{len(funcs)} functions byte-matched")

# dump the best tag/opt combo
best = max(matched_funcs.items(), key=lambda kv: len(kv[1]), default=None)
if best:
    (tag, opt), funcs = best
    print(f"\n=== best: {tag} {opt} — {len(funcs)} matched functions ===")
    for name, size, hits in sorted(funcs, key=lambda x: -x[1]):
        print(f"  {name:40s} {size:5d} B  @ {', '.join(hits)}")
