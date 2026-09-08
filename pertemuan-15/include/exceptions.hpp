#pragma once
#include <stdexcept>
#include <string>

class InventoryError : public std::runtime_error {
public:
    using std::runtime_error::runtime_error;
};
class DuplicateItem final : public InventoryError {
public:
    explicit DuplicateItem(const std::string& id) : InventoryError("duplicate item: " + id) {}
};
class ItemNotFound final : public InventoryError {
public:
    explicit ItemNotFound(const std::string& id) : InventoryError("item not found: " + id) {}
};
class ItemUnavailable final : public InventoryError {
public:
    explicit ItemUnavailable(const std::string& id) : InventoryError("item unavailable: " + id) {}
};
