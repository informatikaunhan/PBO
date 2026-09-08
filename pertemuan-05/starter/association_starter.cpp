#include <iostream>
class MapService { public: int routeCode(int x, int y) const { return x+y; } };
class Commander { public: int planRoute(const MapService& maps) const { return maps.routeCode(2,3); } };
int main(){ MapService m; Commander c; std::cout << c.planRoute(m) << '\n'; }
