#pragma once
#include "weapon_record.hpp"
#include <string>

class ReportPolicy {
public:
    virtual ~ReportPolicy() = default;
    virtual std::string format(const WeaponRecord& record) const = 0;
};

class CompactReport final : public ReportPolicy {
public:
    std::string format(const WeaponRecord& r) const override {
        return r.id() + ":" + r.statusText();
    }
};

class ReadinessReport final : public ReportPolicy {
public:
    std::string format(const WeaponRecord& r) const override {
        return std::string(r.available() ? "READY " : "NOT-READY ") + r.id() + " " + r.name();
    }
};
