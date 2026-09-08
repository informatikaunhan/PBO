#!/usr/bin/env bash
set -euo pipefail
out="$(./build/pbo301_p5)"
echo "$out"
grep -q "Alpha Platoon | squads=2" <<<"$out"
grep -q "Red Squad | strength=2" <<<"$out"
grep -q "Blue Squad | strength=1" <<<"$out"
grep -q "RouteCode=14" <<<"$out"
echo "PASS"
