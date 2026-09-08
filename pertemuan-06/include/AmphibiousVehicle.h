#pragma once
#include <string>

class Vehicle {
public:
    explicit Vehicle(std::string callsign);
    const std::string& callsign() const noexcept;
private:
    std::string callsign_;
};
class LandVehicle : virtual public Vehicle {
public:
    LandVehicle();
    bool landCapable() const noexcept { return true; }
};
class WaterVehicle : virtual public Vehicle {
public:
    WaterVehicle();
    bool waterCapable() const noexcept { return true; }
};
class AmphibiousVehicle : public LandVehicle, public WaterVehicle {
public:
    explicit AmphibiousVehicle(std::string callsign);
};
