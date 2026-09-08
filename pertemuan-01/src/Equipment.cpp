#include "Equipment.h"
#include <iostream>
#include <utility>

Equipment::Equipment(int id, std::string name, bool ready)
    : id_{id}, name_{std::move(name)}, ready_{ready} {}

void Equipment::display() const {
    std::cout << id_ << " | " << name_ << " | "
              << (ready_ ? "READY" : "CHECK") << '\n';
}
