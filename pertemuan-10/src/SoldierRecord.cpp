#include "../include/SoldierRecord.h"
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <utility>

SoldierRecord::SoldierRecord(std::string serviceNumber, std::string name, int readiness)
    : serviceNumber_(std::move(serviceNumber)), name_(std::move(name)), readiness_(readiness) {
    if (readiness_ < 0 || readiness_ > 100) throw std::invalid_argument("readiness must be 0..100");
}

std::string SoldierRecord::serialize() const {
    std::ostringstream out;
    out << serviceNumber_ << '|' << name_ << '|' << readiness_;
    return out.str();
}

bool SoldierRecord::save(const std::string& path) const {
    std::ofstream out(path);
    if (!out) return false;
    out << serialize();
    return static_cast<bool>(out);
}

std::string SoldierRecord::logLine() const {
    return "soldier=" + serviceNumber_ + ";readiness=" + std::to_string(readiness_);
}
