#include "Shape.h"
#include <iomanip>
#include <iostream>
#include <vector>

int main() {
    Circle circle{2.0};
    Rectangle rect{3.0, 4.0};
    Triangle tri{3.0, 4.0, 5.0};
    std::vector<const Shape*> shapes{&circle, &rect, &tri}; // non-owning; objects live in this scope

    std::cout << std::fixed << std::setprecision(3);
    double total = 0.0;
    for (const Shape* s : shapes) {
        std::cout << s->name() << " area=" << s->area()
                  << " perimeter=" << s->perimeter() << '\n';
        total += s->area();
    }
    std::cout << "Total area=" << total << '\n';
    return 0;
}
