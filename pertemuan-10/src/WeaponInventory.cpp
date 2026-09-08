#include "../include/WeaponInventory.h"
#include <fstream>
#include <sstream>
#include <utility>

WeaponInventory::WeaponInventory(std::vector<std::string> items) : items_(std::move(items)) {}

std::string WeaponInventory::serialize() const {
    std::ostringstream out;
    for (std::size_t i = 0; i < items_.size(); ++i) {
        if (i != 0) out << ',';
        out << items_[i];
    }
    return out.str();
}

bool WeaponInventory::save(const std::string& path) const {
    std::ofstream out(path);
    if (!out) return false;
    out << serialize();
    return static_cast<bool>(out);
}
