#include "inventory_service.hpp"
#include <iostream>

int main() {
    InventoryService service;
    try {
        service.registerItem({"INV-001", "Training Asset Alpha"});
        service.registerItem({"INV-002", "Training Asset Bravo"});
        service.registerItem({"INV-003", "Training Asset Charlie"});
        service.issueItem("INV-002", "Unit-7");

        CompactReport compact;
        ReadinessReport readiness;
        std::cout << "== Compact ==\n" << service.generateReport(compact);
        std::cout << "== Readiness ==\n" << service.generateReport(readiness);
        std::cout << "Available: " << service.availableCount() << "/" << service.size() << "\n";
    } catch (const InventoryError& e) {
        std::cerr << "Inventory error: " << e.what() << '\n';
        return 1;
    }
    return 0;
}
