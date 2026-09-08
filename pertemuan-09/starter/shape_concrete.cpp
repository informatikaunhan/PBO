#include <iostream>
class Shape {
public:
    virtual ~Shape() = default;
    virtual double area() const { return 0.0; } // refactor ini
};
int main() { Shape s; std::cout << s.area() << "\n"; }
