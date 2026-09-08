#pragma once
#include "Squad.h"
#include <cstddef>
#include <string>
#include <utility>
#include <vector>

class Platoon {
public:
    explicit Platoon(std::string name) : name_(std::move(name)) {}
    bool addSquad(Squad squad) {
        if (squads_.size() >= 4) return false;
        squads_.push_back(std::move(squad));
        return true;
    }
    const std::string& name() const noexcept { return name_; }
    std::size_t squadCount() const noexcept { return squads_.size(); }
    const std::vector<Squad>& squads() const noexcept { return squads_; }
private:
    std::string name_;
    std::vector<Squad> squads_; // owning composition
};
