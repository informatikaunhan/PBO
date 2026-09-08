#include "templates.hpp"
#include "soldier.hpp"
#include <iostream>
#include <string>
int main() {
    std::cout << "max readiness=" << maxValue(72,90) << '\n';
    Pair<std::string,int> record{"S-01",90};
    std::cout << record.first() << " -> " << record.second() << '\n';
    FixedArray<Pair<std::string,int>,4> roster;
    roster.at(0)=record;
    Stack<Soldier,4> queue;
    queue.push(Soldier{"S-01",90});
    queue.push(Soldier{"S-02",82});
    std::cout << "queue=" << queue.size() << " last=" << queue.top().id << '\n';
    auto last=queue.pop();
    std::cout << "popped=" << last.id << '\n';
}
