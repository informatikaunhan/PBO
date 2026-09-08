#include "templates.hpp"
#include "soldier.hpp"
#include <cassert>
#include <string>
int main(){
    assert(maxValue(3,7)==7);
    assert(maxValue(2.5,1.5)==2.5);
    assert(maxValue(std::string{"A"},std::string{"B"})=="B");
    Pair<std::string,int> p{"S-01",90}; assert(p.first()=="S-01" && p.second()==90);
    FixedArray<int,3> a; a.at(1)=42; assert(a.at(1)==42 && a.size()==3);
    bool threw=false; try{(void)a.at(3);}catch(const std::out_of_range&){threw=true;} assert(threw);
    Stack<int,2> st; st.push(1); st.push(2); assert(st.pop()==2 && st.pop()==1 && st.empty());
    Stack<Soldier,4> soldiers; soldiers.push({"S-01",88}); assert(soldiers.top().readiness==88);
}
