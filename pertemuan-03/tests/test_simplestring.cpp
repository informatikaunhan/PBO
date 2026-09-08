#include "SimpleString.h"

#include <cassert>
#include <cstring>

int main() {
    SimpleString empty;
    assert(empty.empty());
    assert(empty.size() == 0);
    assert(std::strcmp(empty.c_str(), "") == 0);

    SimpleString a("ALPHA");
    SimpleString b(a);
    assert(std::strcmp(a.c_str(), b.c_str()) == 0);
    assert(a.dataAddress() != b.dataAddress());

    SimpleString c("CHARLIE");
    c = a;
    assert(std::strcmp(c.c_str(), "ALPHA") == 0);
    assert(c.dataAddress() != a.dataAddress());

    const void* before = a.dataAddress();
    a = a;
    assert(std::strcmp(a.c_str(), "ALPHA") == 0);
    assert(a.dataAddress() == before);

    SimpleString nullInput(nullptr);
    assert(nullInput.empty());
    return 0;
}
