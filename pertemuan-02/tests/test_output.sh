#!/usr/bin/env sh
set -eu
OUT="$(./build/pbo301_p2)"
printf '%s\n' "$OUT"
printf '%s' "$OUT" | grep -F "Soldier EAGLE-1 | service=771 | READY" >/dev/null
printf '%s' "$OUT" | grep -F "Vehicle APC-21 | fuel=60.0% | DEPLOYABLE" >/dev/null
printf '%s' "$OUT" | grep -F "Weapon WPN-07 | rounds=20 | FIRE READY" >/dev/null
printf '%s' "$OUT" | grep -F "RosterLimit=120 | MaxTeam=12" >/dev/null
echo "PASS: output matches expected behavior"
