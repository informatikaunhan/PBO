#include "../include/SoldierRecord.h"
#include "../include/WeaponInventory.h"
#include <cassert>
#include <fstream>
#include <string>
#include <type_traits>

int main() {
    static_assert(std::is_abstract_v<IPersistable>);
    static_assert(std::is_abstract_v<ISerializable>);
    static_assert(std::is_abstract_v<ILoggable>);
    static_assert(!std::is_abstract_v<SoldierRecord>);
    static_assert(!std::is_abstract_v<WeaponInventory>);

    SoldierRecord s("SR-101", "Alya", 88);
    assert(s.serialize() == "SR-101|Alya|88");
    assert(s.logLine().find("SR-101") != std::string::npos);

    const std::string file = "p10_test_record.txt";
    assert(s.save(file));
    std::ifstream in(file);
    std::string content;
    std::getline(in, content);
    assert(content == s.serialize());

    WeaponInventory w({"Rifle", "Radio"});
    assert(w.serialize() == "Rifle,Radio");
    return 0;
}
