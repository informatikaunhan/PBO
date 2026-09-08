#include "MilitaryAsset.h"
#include <iostream>
#include <utility>

MilitaryAsset::MilitaryAsset(std::string id) : id_(std::move(id)) {}
const std::string& MilitaryAsset::id() const noexcept { return id_; }

DroneAsset::DroneAsset(std::string id, int batteryPercent)
    : MilitaryAsset(std::move(id)), batteryPercent_(batteryPercent) {}
void DroneAsset::deploy() { std::cout << "Drone " << id() << " deployed\n"; }
int DroneAsset::readinessLevel() const { return batteryPercent_; }

VehicleAsset::VehicleAsset(std::string id, int fuelPercent)
    : MilitaryAsset(std::move(id)), fuelPercent_(fuelPercent) {}
void VehicleAsset::deploy() { std::cout << "Vehicle " << id() << " deployed\n"; }
int VehicleAsset::readinessLevel() const { return fuelPercent_; }
