#include "inventory_service.hpp"
#include <cassert>
int main() {
    InventoryService s;
    s.registerItem({"X", "Example"}); // UI -> InventoryService::registerItem
    s.issueItem("X", "Unit-A");      // UI -> InventoryService::issueItem
    assert(!s.get("X").available());  // Service exposes read-only result through get
    return 0;
}
