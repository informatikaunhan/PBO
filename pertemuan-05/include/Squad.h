#pragma once
#include "Soldier.h"
#include <cstddef>
#include <string>
#include <utility>
#include <vector>

class Squad {
public:
    explicit Squad(std::string name) : name_(std::move(name)) {}
    void add(Soldier& soldier) { members_.push_back(&soldier); }
    const std::string& name() const noexcept { return name_; }
    std::size_t strength() const noexcept { return members_.size(); }
private:
    std::string name_;
    std::vector<Soldier*> members_; // non-owning aggregation
};
