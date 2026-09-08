#include "Soldier.h"

#include <iostream>

int Soldier::activeRosterLimit = 100;

Soldier& Soldier::rename(const std::string& callSign) {
    this->callSign = callSign;
    return *this;
}

Soldier& Soldier::setReady(bool ready) {
    this->ready = ready;
    return *this;
}

void Soldier::print() const {
    std::cout << "Soldier " << callSign
              << " | service=" << serviceNumber
              << " | " << (ready ? "READY" : "NOT READY") << '\n';
}

void Soldier::setActiveRosterLimit(int limit) {
    if (limit > 0) {
        activeRosterLimit = limit;
    }
}
