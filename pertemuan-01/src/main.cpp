#include "Equipment.h"
#include <vector>

int main() {
    std::vector<Equipment> items;
    items.emplace_back(1, "Field Radio", true);
    items.emplace_back(2, "Power Unit", false);
    items.emplace_back(3, "Navigation Kit", true);

    for (const auto& item : items) {
        item.display();
    }
    return 0;
}
