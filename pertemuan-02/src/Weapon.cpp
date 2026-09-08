#include "Weapon.h"

#include <algorithm>
#include <iostream>

void Weapon::load(int amount) {
    rounds = std::clamp(rounds + amount, 0, Capacity);
}

void Weapon::setSafeMode(bool safe) {
    safeMode = safe;
}

bool Weapon::canFire() const {
    return rounds > 0 && !safeMode;
}

void Weapon::print() const {
    std::cout << "Weapon " << serial
              << " | rounds=" << rounds
              << " | " << (canFire() ? "FIRE READY" : "SAFE/HOLD") << '\n';
}
