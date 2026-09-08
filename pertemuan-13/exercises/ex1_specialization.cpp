#include <cassert>
#include <string>
#include "../include/specialization.hpp"

int main() {
    assert(Display<bool>::show(true) == "READY");
    assert(std::string(TypeKind<int*>::name) == "pointer");
    // TODO: tambah test untuk primary template dan pointer lain.
}
