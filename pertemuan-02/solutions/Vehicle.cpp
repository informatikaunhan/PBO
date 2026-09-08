#include "Vehicle.h"

#include <algorithm>
#include <iomanip>
#include <iostream>

void Vehicle::refuel(double amount) {
    fuelPercent = std::clamp(fuelPercent + amount, 0.0, 100.0);
}

bool Vehicle::canDeploy() const {
    return operational && fuelPercent >= MinDeployFuel;
}

void Vehicle::print() const {
    std::cout << "Vehicle " << code
              << " | fuel=" << std::fixed << std::setprecision(1) << fuelPercent
              << "% | " << (canDeploy() ? "DEPLOYABLE" : "HOLD") << '\n';
}
