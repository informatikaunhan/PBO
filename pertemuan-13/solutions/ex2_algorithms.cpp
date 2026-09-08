#include "../include/soldier.hpp"
#include <algorithm>
#include <cassert>
#include <vector>

int main() {
    std::vector<Soldier> roster{{"A","A",70},{"B","B",90},{"C","C",82}};
    std::sort(roster.begin(), roster.end(), [](const Soldier& a,const Soldier& b){return a.score>b.score;});
    assert(roster.front().id == "B");
    auto it=std::find_if(roster.begin(), roster.end(), [](const Soldier& s){return s.id=="C";});
    assert(it != roster.end() && it->score==82);
    auto n=std::count_if(roster.begin(),roster.end(),[](const Soldier& s){return s.score>=80;});
    assert(n==2);
}
