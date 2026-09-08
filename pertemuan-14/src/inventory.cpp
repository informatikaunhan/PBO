#include "inventory.hpp"
#include <stdexcept>

void Inventory::add(const std::string& code, int qty) {
    if (code.empty()) throw std::invalid_argument("empty item code");
    if (qty < 0) throw std::invalid_argument("negative quantity");
    stock_[code] += qty;
}

int Inventory::stock(const std::string& code) const {
    auto it = stock_.find(code);
    if (it == stock_.end()) throw ItemNotFoundException("item not found: " + code);
    return it->second;
}

void Inventory::issue(const std::string& code, int qty) {
    if (qty <= 0) throw std::invalid_argument("qty must be positive");
    auto it = stock_.find(code);
    if (it == stock_.end()) throw ItemNotFoundException("item not found: " + code);
    if (it->second < qty) throw StockDepletedException("insufficient stock: " + code);
    it->second -= qty;
}

void Inventory::validateSnapshot(const std::map<std::string,int>& next) {
    for (const auto& [code, qty] : next) {
        if (code.empty()) throw std::invalid_argument("empty item code");
        if (qty < 0) throw std::invalid_argument("negative quantity");
    }
}

void Inventory::replaceSnapshot(std::map<std::string,int> next) {
    validateSnapshot(next); // all throwing work first
    stock_.swap(next);      // no-throw commit for default allocator
}
