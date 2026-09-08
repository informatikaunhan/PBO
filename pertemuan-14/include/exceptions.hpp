#pragma once
#include <stdexcept>
#include <string>

class InventoryException : public std::runtime_error {
public: using std::runtime_error::runtime_error;
};
class ItemNotFoundException final : public InventoryException {
public: using InventoryException::InventoryException;
};
class StockDepletedException final : public InventoryException {
public: using InventoryException::InventoryException;
};
class AccessDeniedException final : public InventoryException {
public: using InventoryException::InventoryException;
};
