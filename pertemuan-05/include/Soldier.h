#pragma once
#include <string>
#include <utility>

class Soldier {
public:
    Soldier(std::string id, std::string status)
        : id_(std::move(id)), status_(std::move(status)) {}
    const std::string& id() const noexcept { return id_; }
    const std::string& status() const noexcept { return status_; }
private:
    std::string id_;
    std::string status_;
};
