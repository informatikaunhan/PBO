#include "generic_structures.hpp"
#include "soldier.hpp"
#include "specialization.hpp"
#include "stl_tools.hpp"
#include <deque>
#include <iostream>
#include <list>
#include <set>
#include <string>
#include <vector>

int main() {
    std::vector<Soldier> roster{{"S03","EAGLE",81},{"S01","ALPHA",92},{"S02","BRAVO",74},{"S04","DELTA",88}};
    sort_by_score_desc(roster);
    auto by_id = index_by_id(roster);
    const auto ready = ready_count(roster);

    std::set<std::string> callsigns;
    for (const auto& s : roster) callsigns.insert(s.callsign);

    Queue<Soldier, 8> evaluation;
    for (const auto& s : roster) evaluation.push(s);

    std::cout << "Top soldier: " << roster.front().id << " score=" << roster.front().score << '\n';
    std::cout << "Ready: " << ready << '/' << roster.size() << '\n';
    std::cout << "All ready? " << Display<bool>::show(ready == roster.size()) << '\n';
    std::cout << "Lookup S02: " << by_id.at("S02").callsign << '\n';
    std::cout << "Unique callsigns: " << callsigns.size() << '\n';
    std::cout << "TypeKind<int*>: " << TypeKind<int*>::name << '\n';
    std::cout << "Evaluation queue size: " << evaluation.size() << '\n';
    return 0;
}
