#pragma once
#include "Interfaces.h"
#include <string>
#include <vector>

class WeaponInventory final : public IPersistable,
                              public ISerializable {
public:
    explicit WeaponInventory(std::vector<std::string> items);
    bool save(const std::string& path) const override;
    std::string serialize() const override;
private:
    std::vector<std::string> items_;
};
