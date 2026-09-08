#ifndef PBO301_VEHICLE_H
#define PBO301_VEHICLE_H

#include <string>

class Vehicle {
public:
    std::string code{"V-000"};
    double fuelPercent{0.0};
    bool operational{false};

    static constexpr double MinDeployFuel = 25.0;

    void refuel(double amount);
    bool canDeploy() const;
    void print() const;
};

#endif // PBO301_VEHICLE_H
