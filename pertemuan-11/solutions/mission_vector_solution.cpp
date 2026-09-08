#include "../include/Vector3D.hpp"
#include "../include/Counter.hpp"
#include <iostream>
int main() {
    Vector3D d1{2,0,1}, d2{0,3,-1}, d3{1,1,0};
    Vector3D total = 0.5 * (d1+d2+d3);
    total[2]=0.0;
    ReadinessAtLeast ready{80};
    std::cout << total << " ready=" << std::boolalpha << ready(86) << '\n';
}
