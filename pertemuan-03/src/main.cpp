#include "SimpleString.h"

#include <iostream>

int main() {
    SimpleString alpha("ALPHA");
    SimpleString copy = alpha;
    SimpleString assigned("TEMP");
    assigned = alpha;
    alpha = alpha; // self-assignment harus aman

    std::cout << "source=" << alpha << " size=" << alpha.size() << '\n';
    std::cout << "copy=" << copy << " independent="
              << std::boolalpha << (alpha.dataAddress() != copy.dataAddress()) << '\n';
    std::cout << "assigned=" << assigned << " independent="
              << std::boolalpha << (alpha.dataAddress() != assigned.dataAddress()) << '\n';
    return 0;
}
