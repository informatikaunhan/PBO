#include "../include/Vector3D.hpp"
#include <cassert>
int main() {
    Vector3D a{1,2,3}, b{4,5,6};
    assert(a+b == Vector3D(5,7,9));
    assert(b-a == Vector3D(3,3,3));
    assert(a*2.0 == 2.0*a);
    Vector3D c=a; c[1]=9; assert(c[1]==9);
    assert(a!=b);
}
