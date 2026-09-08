#pragma once
#include "exceptions.hpp"
#include <ostream>
#include <stdexcept>
#include <string>
#include <utility>

enum class ItemStatus { Available, Issued, Maintenance };

class WeaponRecord {
    std::string id_;
    std::string name_;
    ItemStatus status_{ItemStatus::Available};
    std::string holder_;
public:
    WeaponRecord(std::string id, std::string name)
        : id_(std::move(id)), name_(std::move(name)) {
        if (id_.empty() || name_.empty()) throw std::invalid_argument("id/name must not be empty");
    }
    const std::string& id() const noexcept { return id_; }
    const std::string& name() const noexcept { return name_; }
    ItemStatus status() const noexcept { return status_; }
    const std::string& holder() const noexcept { return holder_; }
    bool available() const noexcept { return status_ == ItemStatus::Available; }

    void issueTo(const std::string& unit) {
        if (!available()) throw ItemUnavailable(id_);
        if (unit.empty()) throw std::invalid_argument("unit must not be empty");
        holder_ = unit;
        status_ = ItemStatus::Issued;
    }
    void returnToStore() {
        if (status_ != ItemStatus::Issued) throw InventoryError("item is not issued: " + id_);
        holder_.clear();
        status_ = ItemStatus::Available;
    }
    std::string statusText() const {
        switch (status_) {
            case ItemStatus::Available: return "Available";
            case ItemStatus::Issued: return "Issued";
            case ItemStatus::Maintenance: return "Maintenance";
        }
        return "Unknown";
    }
    friend std::ostream& operator<<(std::ostream& os, const WeaponRecord& r) {
        os << r.id_ << " | " << r.name_ << " | " << r.statusText();
        if (!r.holder_.empty()) os << " | holder=" << r.holder_;
        return os;
    }
};
