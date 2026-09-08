#include <iostream>
#include <string>

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
    EquipmentData item{1, "Field Radio", true};
    displayEquipment(item);
}
