#include "Shape.h"
#include <cmath>
#include <stdexcept>

namespace { constexpr double kPi = 3.14159265358979323846; }

Circle::Circle(double radius) : radius_(radius) {
    if (radius <= 0.0) throw std::invalid_argument("radius must be positive");
}
std::string Circle::name() const { return "Circle"; }
double Circle::area() const { return kPi * radius_ * radius_; }
double Circle::perimeter() const { return 2.0 * kPi * radius_; }

Rectangle::Rectangle(double width, double height) : width_(width), height_(height) {
    if (width <= 0.0 || height <= 0.0) throw std::invalid_argument("dimensions must be positive");
}
std::string Rectangle::name() const { return "Rectangle"; }
double Rectangle::area() const { return width_ * height_; }
double Rectangle::perimeter() const { return 2.0 * (width_ + height_); }

Triangle::Triangle(double a, double b, double c) : a_(a), b_(b), c_(c) {
    if (a <= 0.0 || b <= 0.0 || c <= 0.0 || a + b <= c || a + c <= b || b + c <= a)
        throw std::invalid_argument("invalid triangle");
}
std::string Triangle::name() const { return "Triangle"; }
double Triangle::perimeter() const { return a_ + b_ + c_; }
double Triangle::area() const {
    const double s = perimeter() / 2.0;
    return std::sqrt(s * (s-a_) * (s-b_) * (s-c_));
}
