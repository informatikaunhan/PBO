#include "generic_structures.hpp"
#include "soldier.hpp"
#include "specialization.hpp"
#include "stl_tools.hpp"
#include <cassert>
#include <string>
#include <vector>

int main() {
    assert(Display<bool>::show(true) == "READY");
    assert(std::string(TypeKind<int*>::name) == "pointer");
    assert(std::string(TypeKind<int>::name) == "value");

    Stack<int, 2> st;
    assert(st.empty());
    assert(st.push(10)); assert(st.push(20)); assert(!st.push(30));
    assert(st.top() == 20);
    assert(st.pop().value() == 20); assert(st.pop().value() == 10); assert(!st.pop().has_value());

    Queue<std::string, 3> q;
    assert(q.push("A")); assert(q.push("B"));
    assert(q.front() == "A"); assert(q.pop().value() == "A");
    assert(q.push("C")); assert(q.push("D")); assert(!q.push("E"));
    assert(q.pop().value() == "B"); assert(q.pop().value() == "C"); assert(q.pop().value() == "D");

    LinkedList<int> list;
    list.push_front(1); list.push_front(2); list.push_front(3);
    auto v=list.to_vector(); assert((v == std::vector<int>{3,2,1}));
    assert(list.pop_front()); assert(list.size()==2);

    std::vector<Soldier> roster{{"S03","E",81},{"S01","A",92},{"S02","B",74}};
    sort_by_score_desc(roster); assert(roster.front().id == "S01");
    assert(ready_count(roster) == 2);
    auto idx=index_by_id(roster); assert(idx.at("S02").score == 74);
    return 0;
}
