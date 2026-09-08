#!/usr/bin/env bash
set -euo pipefail
EXPECTED=$'1 | Field Radio | READY\n2 | Power Unit | CHECK\n3 | Navigation Kit | READY'
ACTUAL="$(./build/pbo301_p1)"
if [[ "$ACTUAL" != "$EXPECTED" ]]; then
  echo "Output mismatch"
  echo "Expected:"; printf '%s\n' "$EXPECTED"
  echo "Actual:"; printf '%s\n' "$ACTUAL"
  exit 1
fi
echo "PASS: output matches"
