#include "Shape.h"
#include <iostream>
void inspect(const Shape& s) {
    if (dynamic_cast<const Circle*>(&s)) std::cout << "CIRCLE\n";
    else std::cout << "OTHER\n";
}
int main(){ Circle c{2}; Rectangle r{2,3}; inspect(c); inspect(r); }
