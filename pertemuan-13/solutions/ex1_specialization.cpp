#include <cassert>
#include <string>
#include "../include/specialization.hpp"

int main() {
    assert(Display<bool>::show(true) == "READY");
    assert(Display<bool>::show(false) == "NOT READY");
    assert(Display<int>::show(42) == "42");
    assert(std::string(TypeKind<int*>::name) == "pointer");
    assert(std::string(TypeKind<double>::name) == "value");
}
