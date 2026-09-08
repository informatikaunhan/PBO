#pragma once
#include <string>

class Shape {
public:
    virtual std::string name() const { return "Shape"; }
    virtual double area() const { return 0.0; }
    virtual double perimeter() const { return 0.0; }
    virtual ~Shape() = default;
};

class Circle final : public Shape {
public:
    explicit Circle(double radius);
    std::string name() const override;
    double area() const override;
    double perimeter() const override;
    double radius() const noexcept { return radius_; }
private:
    double radius_;
};

class Rectangle final : public Shape {
public:
    Rectangle(double width, double height);
    std::string name() const override;
    double area() const override;
    double perimeter() const override;
private:
    double width_;
    double height_;
};

class Triangle final : public Shape {
public:
    Triangle(double a, double b, double c);
    std::string name() const override;
    double area() const override;
    double perimeter() const override;
private:
    double a_, b_, c_;
};
