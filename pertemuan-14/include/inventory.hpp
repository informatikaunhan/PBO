#pragma once
#include "exceptions.hpp"
#include <map>
#include <string>

class Inventory {
public:
    void add(const std::string& code, int qty);
    int stock(const std::string& code) const;
    void issue(const std::string& code, int qty);
    void replaceSnapshot(std::map<std::string,int> next);
    const std::map<std::string,int>& snapshot() const noexcept { return stock_; }
    void swap(Inventory& other) noexcept { stock_.swap(other.stock_); }
private:
    static void validateSnapshot(const std::map<std::string,int>& next);
    std::map<std::string,int> stock_;
};
