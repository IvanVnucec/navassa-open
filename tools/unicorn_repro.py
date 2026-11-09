#!/usr/bin/env python3
"""Minimal reproduction of the unicorn 2.1.4 (QEMU-based) fault:

When a UC_HOOK_MEM_READ (or UC_HOOK_MEM_READ_AFTER) hook is registered over
a memory region that ALSO holds executing code, the CPU eventually reports
UC_ERR_INSN_INVALID for a perfectly valid Thumb BNE after ~700 instructions
with data reads from that region.

- fault trigger: READ hooks over the FLASH region
- write hooks (even unbounded covering flash) do NOT trigger it
- RAM-only or MMIO-only read hooks do NOT trigger it

Cause (suspected): the data-read-hook path re-enters the CPU TB machinery
per data op; with code-fetches inside the same TB, the translator cache
collides with the hook session — an upstream QEMU/unicorn interaction bug.

Workaround: register read hooks per-memory-range, excluding the flash
region (implemented in tools/emu/emulator.c).
"""
from unicorn import *
from unicorn.arm_const import *
import sys

code = open(sys.argv[1] if len(sys.argv) > 1 else
            "build/Navassa_EvaluationFw.bin","rb").read()

def run(hook):
    uc = Uc(UC_ARCH_ARM, UC_MODE_THUMB | UC_MODE_MCLASS)
    uc.ctl_set_cpu_model(UC_CPU_ARM_CORTEX_M4)
    uc.mem_map(0x00000000, 0x1000, UC_PROT_ALL)
    uc.mem_map(0x01000000, 0x100000, UC_PROT_ALL)
    uc.mem_write(0x01000000, code)
    uc.mem_map(0x20000000, 0x200000, UC_PROT_ALL)
    uc.mem_map(0x40000000, 0x20000000, UC_PROT_READ | UC_PROT_WRITE)
    if hook:
        uc.hook_add(UC_HOOK_MEM_READ, lambda u,a,addr,s,v,ud: None,
                    begin=hook[0], end=hook[1])
    uc.reg_write(UC_ARM_REG_SP, 0x20025608)
    uc.reg_write(UC_ARM_REG_R0, 0x010444dc)
    uc.reg_write(UC_ARM_REG_R9, 0)
    try:
        uc.emu_start(0x0100296a | 1, 0x010029e2, 0, 4000000)
        return "OK"
    except UcError as e:
        return f"{e} @0x%08x" % uc.reg_read(UC_ARM_REG_PC)

print("flash read hook:  ", run((0x01000000, 0x01100000)))   # FAULT
print("RAM read hook:    ", run((0x20000000, 0x20200000)))   # OK
print("no read hook:     ", run(None))                      # OK
