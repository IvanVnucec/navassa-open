#!/usr/bin/env python3
"""Offline decompressor for the Navassa firmware payload (LZ77 variant).

Algorithm reverse-engineered from 0x0100296a (tools/decompressor.asm):

  desc:  [0]=offset (source = desc + offset)
         [4]=size   (source end = src + size/2; bit0 = odd flag -> dest += r9)
         [8]=destination

  token byte: bits[1:0]=lit_flags, bits[3:2]=dist_hi, bits[7:4]=len_nibble

  - lit_flags == 0: literal run, count = next_byte + 3
  - lit_flags 1..3: that many inline literal bytes
  - copy the literals
  - len_nibble == 0: no match, next token
  - len_nibble == 0xF: extended, length = next_byte + 0xF
  - else length = len_nibble
  - length += 2
  - distance = next_byte | (dist_hi << 8); if dist_hi == 3: distance =
    next_byte | (next_next_byte << 8)
  - copy `length` bytes from dest[-distance] onward (back-reference)

Entry convention: the copy loop is entered at the `subs` (0x0100298a), so a
run of count N performs N-1 copies through the loop... but the first byte
of a literal run is copied via the loop head path. We reproduce the exact
loop semantics below and VALIDATE against the emulator trace.

Usage: python3 tools/decompress.py [--desc 0x010444dc] [--out file]
"""
import struct
import sys

BIN = "build/Navassa_EvaluationFw.bin"
FW_BASE = 0x01000000

def decompress_segment(code, desc_addr, r9=0):
    base = desc_addr - FW_BASE
    off, size, dest = struct.unpack("<III", code[base:base + 12])
    src_pos = desc_addr + off - FW_BASE
    src_end = src_pos + (size >> 1)
    odd = size & 1
    out = bytearray()
    dest_base = dest + (r9 if odd else 0)

    while src_pos < src_end:
        token = code[src_pos]; src_pos += 1
        lit_flags = token & 3
        dist_hi = (token >> 2) & 3
        nib = token >> 4

        # literal part: loop entered at `subs r1,#1` -> N-1 loop iterations,
        # each copying one byte; i.e. copies = count - 1, with count as set.
        if lit_flags == 0:
            count = code[src_pos] + 3; src_pos += 1
        else:
            count = lit_flags
        n_copy = count - 1
        out += code[src_pos:src_pos + n_copy]; src_pos += n_copy

        if nib == 0:
            continue
        if nib == 0xF:
            length = code[src_pos] + 0xF; src_pos += 1
        else:
            length = nib
        length += 2

        dlo = code[src_pos]; src_pos += 1
        if dist_hi == 3:
            dhi = code[src_pos]; src_pos += 1
        else:
            dhi = dist_hi
        dist = dlo | (dhi << 8)

        # back-reference copy: length bytes from dest[-dist]
        start = len(out) - dist
        for k in range(length):
            out.append(out[start + k])

    return dest_base, bytes(out)

def main():
    code = open(BIN, "rb").read()
    desc = int(sys.argv[1], 16) if len(sys.argv) > 1 else 0x010444dc
    dest, out = decompress_segment(code, desc)
    print(f"desc 0x{desc:08x}: dest=0x{dest:08x} size={len(out)} bytes")
    outpath = sys.argv[2] if len(sys.argv) > 2 else None
    if outpath:
        open(outpath, "wb").write(out)
        print(f"written to {outpath}")
    print("first 32 bytes:", out[:32].hex(" "))

if __name__ == "__main__":
    main()
