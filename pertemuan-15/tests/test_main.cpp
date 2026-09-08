#include "inventory_service.hpp"
#include <cassert>
#include <iostream>
#include <string>

static void test_register_issue_return() {
    InventoryService s;
    s.registerItem({"A", "Alpha"});
    assert(s.size() == 1);
    assert(s.availableCount() == 1);
    s.issueItem("A", "Unit-1");
    assert(!s.get("A").available());
    assert(s.get("A").holder() == "Unit-1");
    s.returnItem("A");
    assert(s.get("A").available());
    assert(s.get("A").holder().empty());
}

static void test_failure_paths() {
    InventoryService s;
    s.registerItem({"A", "Alpha"});
    bool duplicate = false;
    try { s.registerItem({"A", "Again"}); } catch (const DuplicateItem&) { duplicate = true; }
    assert(duplicate);
    bool missing = false;
    try { s.issueItem("X", "Unit"); } catch (const ItemNotFound&) { missing = true; }
    assert(missing);
    s.issueItem("A", "Unit");
    bool unavailable = false;
    try { s.issueItem("A", "Other"); } catch (const ItemUnavailable&) { unavailable = true; }
    assert(unavailable);
}

static void test_polymorphic_reports_and_audit() {
    InventoryService s;
    s.registerItem({"A", "Alpha"});
    s.registerItem({"B", "Bravo"});
    s.issueItem("B", "Unit");
    CompactReport c; ReadinessReport r;
    const std::string compact = s.generateReport(c);
    const std::string ready = s.generateReport(r);
    assert(compact.find("A:Available") != std::string::npos);
    assert(ready.find("NOT-READY B") != std::string::npos);
    assert(s.audit().entries().size() == 3);
}

int main() {
    test_register_issue_return();
    test_failure_paths();
    test_polymorphic_reports_and_audit();
    std::cout << "All P15 tests passed.\n";
    return 0;
}
