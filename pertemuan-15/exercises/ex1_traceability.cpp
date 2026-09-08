#include "inventory_service.hpp"
// TODO: For each call below, map caller -> receiver -> method into notes/traceability.md.
int main() {
    InventoryService s;
    s.registerItem({"X", "Example"});
    s.issueItem("X", "Unit-A");
    return s.get("X").available() ? 1 : 0;
}
