#pragma once
#include <string>

class MilitaryAsset {
public:
    explicit MilitaryAsset(std::string id);
    virtual ~MilitaryAsset() = default;

    const std::string& id() const noexcept;
    virtual void deploy() = 0;
    virtual int readinessLevel() const = 0;

private:
    std::string id_;
};

class DroneAsset final : public MilitaryAsset {
public:
    DroneAsset(std::string id, int batteryPercent);
    void deploy() override;
    int readinessLevel() const override;
private:
    int batteryPercent_;
};

class VehicleAsset final : public MilitaryAsset {
public:
    VehicleAsset(std::string id, int fuelPercent);
    void deploy() override;
    int readinessLevel() const override;
private:
    int fuelPercent_;
};
