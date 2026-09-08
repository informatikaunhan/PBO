#include "inventory_service.hpp"
#include <cassert>
int main() {
    InventoryService s;
    s.registerItem({"A", "Alpha"}); s.registerItem({"B", "Bravo"});
    s.issueItem("B", "Unit-1");
    CompactReport c; ReadinessReport r;
    assert(!s.generateReport(c).empty()); assert(!s.generateReport(r).empty());
    return 0;
}
