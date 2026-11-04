#!/bin/bash
# tracecmp.sh — per-function differential verification (PLAN.md Step 3 workflow).
#
# Runs one function address in the CLOSED firmware and the matching symbol in
# the OPEN build through the Unicorn harness with identical arguments/seeds,
# then diffs the side-effect traces (MMIO + contract RAM), ignoring PC values
# (register allocation legitimately differs between the two compilers).
#
# Usage: tools/tracecmp.sh <closed_addr_hex> <open_symbol> [harness args...]
#   e.g.: tools/tracecmp.sh 10060b2 periph_init_e r0=3 seed=0x49000014=0xAA
#
# Exit 0 = match, 1 = mismatch, 2 = setup error.
set -u
cd "$(dirname "$0")/.."

CLOSED_ADDR=$1; SYM=$2; shift 2

if [ ! -x build/emulator ] || [ ! -f build/Navassa_EvaluationFw.bin ] || [ ! -f build/navassa_open.bin ]; then
	echo "error: build artifacts missing (run make)" >&2
	exit 2
fi

OPEN_ADDR=$(arm-none-eabi-nm build/navassa_open.elf | awk -v s="$SYM" '$3==s{gsub(/^0*/,"",$1); print $1}')
if [ -z "$OPEN_ADDR" ]; then
	echo "error: symbol '$SYM' not found in build/navassa_open.elf" >&2
	exit 2
fi

TMP_C=$(mktemp); TMP_O=$(mktemp)
TRACE_OUT=$TMP_C ./build/emulator --call "$CLOSED_ADDR" build/Navassa_EvaluationFw.bin 01000000 "$@" >/dev/null 2>&1
TRACE_OUT=$TMP_O ./build/emulator --call "$OPEN_ADDR" build/navassa_open.bin 01000000 "$@" >/dev/null 2>&1

if diff <(cut -d' ' -f1-4 "$TMP_C") <(cut -d' ' -f1-4 "$TMP_O") > /tmp/tracecmp.diff; then
	echo "[+] $SYM (closed 0x$CLOSED_ADDR / open 0x$OPEN_ADDR) TRACES MATCH ($(wc -l < "$TMP_C") events)"
	rc=0
else
	echo "[-] $SYM (closed 0x$CLOSED_ADDR / open 0x$OPEN_ADDR) MISMATCH:"
	cat /tmp/tracecmp.diff
	rc=1
fi
rm -f "$TMP_C" "$TMP_O" /tmp/tracecmp.diff
exit $rc
