#pragma once
#include <string>

class MilitaryUnit {
public:
    MilitaryUnit(std::string id, int readiness);
    const std::string& id() const noexcept;
    int readiness() const noexcept;
    void deploy() const;
    void deploy(int minutes) const;
protected:
    void setReadiness(int value) noexcept;
private:
    std::string id_;
    int readiness_;
};

class GroundUnit : public MilitaryUnit {
public:
    GroundUnit(std::string id, int readiness, int mobility);
    int mobility() const noexcept;
private:
    int mobility_;
};

class InfantryUnit : public GroundUnit {
public:
    using MilitaryUnit::deploy;
    InfantryUnit(std::string id, int readiness, int mobility, int soldiers);
    int soldiers() const noexcept;
    void deploy(const std::string& zone) const;
private:
    int soldiers_;
};

class TankUnit : public GroundUnit {
public:
    TankUnit(std::string id, int readiness, int mobility, int tanks);
    int tanks() const noexcept;
private:
    int tanks_;
};
