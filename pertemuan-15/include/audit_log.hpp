#pragma once
#include <string>
#include <utility>
#include <vector>

class AuditLog {
    std::vector<std::string> entries_;
public:
    void log(std::string event) { entries_.push_back(std::move(event)); }
    const std::vector<std::string>& entries() const noexcept { return entries_; }
};
