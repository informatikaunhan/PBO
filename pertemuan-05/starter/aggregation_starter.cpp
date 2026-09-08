#include <iostream>
#include <vector>
struct Soldier { int id; };
class Squad { std::vector<Soldier*> members_; public: void add(Soldier& s){members_.push_back(&s);} std::size_t strength()const{return members_.size();} };
int main(){ Soldier a{1},b{2}; { Squad s; s.add(a); s.add(b); std::cout<<s.strength()<<'\n'; } std::cout<<a.id<<'\n'; }
