#pragma once
#include <array>
#include <cstddef>
#include <iosfwd>

class Vector3D {
public:
    Vector3D() = default;
    Vector3D(double x, double y, double z) : data_{x, y, z} {}

    double x() const noexcept { return data_[0]; }
    double y() const noexcept { return data_[1]; }
    double z() const noexcept { return data_[2]; }

    Vector3D& operator+=(const Vector3D& rhs) noexcept;
    Vector3D& operator-=(const Vector3D& rhs) noexcept;
    Vector3D& operator*=(double scalar) noexcept;

    double& operator[](std::size_t i);
    const double& operator[](std::size_t i) const;

    double dot(const Vector3D& rhs) const noexcept;
    double magnitude() const noexcept;
    bool almostEqual(const Vector3D& rhs, double epsilon = 1e-9) const noexcept;

    friend Vector3D operator+(Vector3D lhs, const Vector3D& rhs) noexcept;
    friend Vector3D operator-(Vector3D lhs, const Vector3D& rhs) noexcept;
    friend Vector3D operator*(Vector3D v, double scalar) noexcept;
    friend Vector3D operator*(double scalar, Vector3D v) noexcept;
    friend bool operator==(const Vector3D& a, const Vector3D& b) noexcept;
    friend bool operator!=(const Vector3D& a, const Vector3D& b) noexcept;
    friend std::ostream& operator<<(std::ostream& os, const Vector3D& v);

private:
    std::array<double, 3> data_{};
};
