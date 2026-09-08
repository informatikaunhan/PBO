#include "inventory_service.hpp"
#include <cassert>
int main() {
    InventoryService s;
    s.registerItem({"A", "Alpha"}); s.registerItem({"B", "Bravo"}); s.registerItem({"C", "Charlie"});
    s.issueItem("B", "Unit-9");
    bool failed=false; try { s.issueItem("B", "Other"); } catch(const ItemUnavailable&) { failed=true; }
    assert(failed);
    s.returnItem("B");
    CompactReport c; ReadinessReport r;
    assert(s.generateReport(c).find("B:Available") != std::string::npos);
    assert(s.generateReport(r).find("READY B") != std::string::npos);
    return 0;
}
