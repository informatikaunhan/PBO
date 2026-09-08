#include "inventory.hpp"
#include <iostream>

int main() {
    Inventory inv;
    inv.add("MEDKIT", 5);
    inv.add("BATTERY", 12);
    try {
        inv.issue("MEDKIT", 2);
        std::cout << "MEDKIT=" << inv.stock("MEDKIT") << '\n';
        inv.issue("MEDKIT", 99);
    } catch (const StockDepletedException& e) {
        std::cout << "stock error: " << e.what() << '\n';
    } catch (const InventoryException& e) {
        std::cout << "inventory error: " << e.what() << '\n';
    }
    return 0;
}
