# Ghidra headless post-script: import our symbol anchors, ensure our
# discovered function entries exist, then decompile every function.
# Usage: analyzeHeadless ... -postScript ghidra_run.py <out_dir> [repo_root]
# @category navassa-open
import os
from ghidra.program.model.symbol import SourceType
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

def get_args():
    args = getScriptArgs()
    out_dir = args[0] if len(args) >= 1 else "/tmp/decomp"
    repo = args[1] if len(args) >= 2 else os.path.dirname(out_dir)
    return out_dir, repo

OUT_DIR, REPO = get_args()
if not os.path.isdir(OUT_DIR):
    os.makedirs(OUT_DIR)

monitor = ConsoleTaskMonitor()
program = currentProgram
af = program.getAddressFactory().getDefaultAddressSpace()

def mkaddr(v):
    return af.getAddress(v)

# --- 1. import hand-maintained names (tools/symbols.txt) -------------------
sym_path = os.path.join(REPO, "tools", "symbols.txt")
if os.path.isfile(sym_path):
    n_named = 0
    for line in open(sym_path):
        line = line.strip()
        if not line or line.startswith("#"):
            continue
        parts = line.split(None, 1)
        if len(parts) != 2:
            continue
        addr = int(parts[0], 16)
        name = parts[1].strip()
        a = mkaddr(addr)
        try:
            createLabel(a, name, True)
            f = getFunctionAt(a)
            if f is None:
                f = createFunction(a, name)
            elif f.getName().startswith("FUN_") or f.getName().startswith("sub_"):
                f.setName(name, SourceType.USER_DEFINED)
            n_named += 1
        except:
            pass
    print("imported %d named symbols" % n_named)

# --- 2. create functions at our discovered entries (tools/function_map.txt)
fm_path = os.path.join(REPO, "tools", "function_map.txt")
n_created = 0
if os.path.isfile(fm_path):
    for line in open(fm_path):
        line = line.strip()
        if not line or line.startswith("#"):
            continue
        addr = int(line.split()[0][2:], 16)
        a = mkaddr(addr)
        if getFunctionAt(a) is None:
            disassemble(a)
            f = createFunction(a, None)
            if f is not None:
                n_created += 1
    print("created %d additional functions" % n_created)

print("total functions now: %d" % program.getFunctionManager().getFunctionCount())

# --- 3. decompile everything ------------------------------------------------
ifc = DecompInterface()
ifc.openProgram(program)
n_ok = n_fail = 0
funcs = list(program.getFunctionManager().getFunctions(True))
for f in funcs:
    if monitor.isCancelled():
        break
    name = f.getName()
    addr = f.getEntryPoint().getOffset()
    safe = "".join(c if c.isalnum() else "_" for c in name)
    path = os.path.join(OUT_DIR, "%08x_%s.c" % (addr, safe))
    res = ifc.decompileFunction(f, 60, monitor)
    if res.decompileCompleted():
        open(path, "w").write(res.getDecompiledFunction().getC())
        n_ok += 1
    else:
        open(path, "w").write("// decompile failed: %s\n" % res.getErrorMessage())
        n_fail += 1
print("decompiled %d ok, %d failed -> %s" % (n_ok, n_fail, OUT_DIR))
