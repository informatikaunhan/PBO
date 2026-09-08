#!/usr/bin/env bash
set -euo pipefail
out="$(./build/pbo301_p7)"
echo "$out"
grep -q "Circle area=12.566 perimeter=12.566" <<<"$out"
grep -q "Rectangle area=12.000 perimeter=14.000" <<<"$out"
grep -q "Triangle area=6.000 perimeter=12.000" <<<"$out"
grep -q "Total area=30.566" <<<"$out"
echo "All P7 tests passed."
