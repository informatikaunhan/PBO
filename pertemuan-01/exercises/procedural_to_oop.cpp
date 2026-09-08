#include <iostream>
#include <string>

// TODO:
// 1. Refactor data + display menjadi class Equipment.
// 2. Pertahankan output.
// 3. Build dengan -std=c++17 -Wall -Wextra -pedantic.

struct EquipmentData {
    int id;
    std::string name;
    bool ready;
};

void displayEquipment(const EquipmentData& e) {
    std::cout << e.id << " | " << e.name << " | "
              << (e.ready ? "READY" : "CHECK") << '\n';
}

int main() {
    EquipmentData radio{1, "Field Radio", true};
    displayEquipment(radio);
}
