#include <type_traits>
class Shape {
public:
    virtual ~Shape() = default;
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};
class Rectangle final : public Shape {
public:
    Rectangle(double w, double h) : w_(w), h_(h) {}
    double area() const override { return w_ * h_; }
    double perimeter() const override { return 2.0 * (w_ + h_); }
private: double w_, h_;
};
static_assert(std::is_abstract_v<Shape>);
static_assert(!std::is_abstract_v<Rectangle>);
int main() { Rectangle r{3,4}; return r.area() == 12 ? 0 : 1; }
