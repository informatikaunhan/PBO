#include "../include/SoldierRecord.h"
#include "../include/WeaponInventory.h"
#include <iostream>
#include <string>
#include <vector>

std::string exportText(const ISerializable& item) { return item.serialize(); }

int main() {
    SoldierRecord soldier("SR-101", "Alya", 88);
    WeaponInventory inventory({"Rifle", "Radio", "Medkit"});

    std::vector<const ISerializable*> exports{&soldier, &inventory};
    for (const auto* item : exports) {
        if (item != nullptr) std::cout << exportText(*item) << '\n';
    }
    std::cout << soldier.logLine() << '\n';
    return 0;
}
