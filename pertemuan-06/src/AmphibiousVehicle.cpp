#include "AmphibiousVehicle.h"
#include <utility>
Vehicle::Vehicle(std::string callsign) : callsign_(std::move(callsign)) {}
const std::string& Vehicle::callsign() const noexcept { return callsign_; }
LandVehicle::LandVehicle() : Vehicle("virtual-base-placeholder") {}
WaterVehicle::WaterVehicle() : Vehicle("virtual-base-placeholder") {}
AmphibiousVehicle::AmphibiousVehicle(std::string callsign)
    : Vehicle(std::move(callsign)), LandVehicle(), WaterVehicle() {}
