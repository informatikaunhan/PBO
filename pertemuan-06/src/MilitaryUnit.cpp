#include "MilitaryUnit.h"
#include <algorithm>
#include <iostream>
#include <utility>

MilitaryUnit::MilitaryUnit(std::string id, int readiness)
    : id_(std::move(id)), readiness_(std::clamp(readiness, 0, 100)) {}
const std::string& MilitaryUnit::id() const noexcept { return id_; }
int MilitaryUnit::readiness() const noexcept { return readiness_; }
void MilitaryUnit::deploy() const { std::cout << id_ << ": deploy\n"; }
void MilitaryUnit::deploy(int minutes) const { std::cout << id_ << ": deploy in " << minutes << " minutes\n"; }
void MilitaryUnit::setReadiness(int value) noexcept { readiness_ = std::clamp(value, 0, 100); }

GroundUnit::GroundUnit(std::string id, int readiness, int mobility)
    : MilitaryUnit(std::move(id), readiness), mobility_(mobility) {}
int GroundUnit::mobility() const noexcept { return mobility_; }

InfantryUnit::InfantryUnit(std::string id, int readiness, int mobility, int soldiers)
    : GroundUnit(std::move(id), readiness, mobility), soldiers_(soldiers) {}
int InfantryUnit::soldiers() const noexcept { return soldiers_; }
void InfantryUnit::deploy(const std::string& zone) const {
    MilitaryUnit::deploy();
    std::cout << id() << ": infantry zone " << zone << "\n";
}

TankUnit::TankUnit(std::string id, int readiness, int mobility, int tanks)
    : GroundUnit(std::move(id), readiness, mobility), tanks_(tanks) {}
int TankUnit::tanks() const noexcept { return tanks_; }
