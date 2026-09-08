#include "Vector3D.hpp"
#include <cmath>
#include <ostream>
#include <stdexcept>

Vector3D& Vector3D::operator+=(const Vector3D& rhs) noexcept {
    for (std::size_t i = 0; i < data_.size(); ++i) data_[i] += rhs.data_[i];
    return *this;
}
Vector3D& Vector3D::operator-=(const Vector3D& rhs) noexcept {
    for (std::size_t i = 0; i < data_.size(); ++i) data_[i] -= rhs.data_[i];
    return *this;
}
Vector3D& Vector3D::operator*=(double scalar) noexcept {
    for (double& value : data_) value *= scalar;
    return *this;
}
double& Vector3D::operator[](std::size_t i) {
    if (i >= data_.size()) throw std::out_of_range("Vector3D index");
    return data_[i];
}
const double& Vector3D::operator[](std::size_t i) const {
    if (i >= data_.size()) throw std::out_of_range("Vector3D index");
    return data_[i];
}
double Vector3D::dot(const Vector3D& rhs) const noexcept {
    return data_[0]*rhs.data_[0] + data_[1]*rhs.data_[1] + data_[2]*rhs.data_[2];
}
double Vector3D::magnitude() const noexcept { return std::sqrt(dot(*this)); }
bool Vector3D::almostEqual(const Vector3D& rhs, double epsilon) const noexcept {
    return std::fabs(data_[0]-rhs.data_[0]) <= epsilon &&
           std::fabs(data_[1]-rhs.data_[1]) <= epsilon &&
           std::fabs(data_[2]-rhs.data_[2]) <= epsilon;
}
Vector3D operator+(Vector3D lhs, const Vector3D& rhs) noexcept { lhs += rhs; return lhs; }
Vector3D operator-(Vector3D lhs, const Vector3D& rhs) noexcept { lhs -= rhs; return lhs; }
Vector3D operator*(Vector3D v, double scalar) noexcept { v *= scalar; return v; }
Vector3D operator*(double scalar, Vector3D v) noexcept { v *= scalar; return v; }
bool operator==(const Vector3D& a, const Vector3D& b) noexcept { return a.data_ == b.data_; }
bool operator!=(const Vector3D& a, const Vector3D& b) noexcept { return !(a == b); }
std::ostream& operator<<(std::ostream& os, const Vector3D& v) {
    return os << '(' << v.data_[0] << ", " << v.data_[1] << ", " << v.data_[2] << ')';
}
