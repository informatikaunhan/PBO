#include "Vector3D.hpp"
#include "Counter.hpp"
#include "SimpleStringLite.hpp"
#include <cassert>
#include <sstream>
#include <stdexcept>

int main() {
    Vector3D a{1,2,3}, b{4,5,6};
    Vector3D c = a + b;
    assert(c == Vector3D(5,7,9));
    assert(a == Vector3D(1,2,3));
    assert((2.0 * a) == (a * 2.0));
    assert(a.dot(b) == 32.0);

    c[0] = 10.0;
    const Vector3D cv = c;
    assert(cv[0] == 10.0);
    bool threw=false;
    try { (void)cv[3]; } catch(const std::out_of_range&) { threw=true; }
    assert(threw);

    std::ostringstream out;
    out << a << " " << b;
    assert(out.str() == "(1, 2, 3) (4, 5, 6)");

    Counter counter{7};
    Counter old = counter++;
    assert(old.value()==7 && counter.value()==8);
    Counter& now = ++counter;
    assert(now.value()==9 && &now==&counter);

    ReadinessAtLeast ready{80};
    assert(ready(80)); assert(!ready(79));

    SimpleStringLite s1{"abc"};
    SimpleStringLite s2=s1;
    assert(s1==s2);
    s2[0]='x';
    assert(s1!=s2);
    SimpleStringLite s3{"tmp"};
    s3=s1;
    assert(s3==s1);
    return 0;
}
