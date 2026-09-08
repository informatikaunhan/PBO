#include "templates.hpp"
#include "soldier.hpp"
int main(){ Stack<Soldier,4> s; s.push({"S",90}); return s.top().readiness==90?0:1; }
