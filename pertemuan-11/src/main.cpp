#include "Vector3D.hpp"
#include "Counter.hpp"
#include "SimpleStringLite.hpp"
#include <iostream>

int main() {
    Vector3D a{1,2,3}, b{4,5,6};
    Vector3D c = 2.0 * (a + b);
    c[2] = 0.0;
    std::cout << "c=" << c << " magnitude=" << c.magnitude() << '\n';

    Counter counter{7};
    std::cout << "post=" << counter++.value() << " now=" << counter.value() << '\n';
    std::cout << "pre=" << (++counter).value() << '\n';

    ReadinessAtLeast ready{80};
    std::cout << std::boolalpha << "ready(88)=" << ready(88) << '\n';

    SimpleStringLite s{"mission"};
    std::cout << s << '\n';
}
