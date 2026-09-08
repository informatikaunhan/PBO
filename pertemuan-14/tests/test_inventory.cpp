#include "inventory.hpp"
#include <cassert>
#include <iostream>
#include <map>

int main() {
    Inventory inv;
    inv.add("MEDKIT", 5);
    assert(inv.stock("MEDKIT") == 5);

    auto before = inv.snapshot();
    bool caught = false;
    try { inv.issue("MEDKIT", 99); }
    catch (const StockDepletedException&) { caught = true; }
    assert(caught);
    assert(inv.snapshot() == before);

    caught = false;
    try { (void)inv.stock("UNKNOWN"); }
    catch (const ItemNotFoundException&) { caught = true; }
    assert(caught);

    std::map<std::string,int> bad{{"MEDKIT", -1}};
    before = inv.snapshot();
    caught = false;
    try { inv.replaceSnapshot(bad); }
    catch (const std::invalid_argument&) { caught = true; }
    assert(caught);
    assert(inv.snapshot() == before); // strong guarantee

    inv.replaceSnapshot({{"BATTERY", 20}, {"MEDKIT", 7}});
    assert(inv.stock("BATTERY") == 20);
    assert(inv.stock("MEDKIT") == 7);
    std::cout << "all tests passed\n";
    return 0;
}
