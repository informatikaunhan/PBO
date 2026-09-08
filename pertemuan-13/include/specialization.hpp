#pragma once
#include <sstream>
#include <string>
#include <type_traits>

// Primary template
template <typename T>
struct Display {
    static std::string show(const T& value) {
        std::ostringstream out;
        out << value;
        return out.str();
    }
};

// Full specialization
template <>
struct Display<bool> {
    static std::string show(bool value) {
        return value ? "READY" : "NOT READY";
    }
};

template <typename T>
struct TypeKind {
    static constexpr const char* name = "value";
};

// Partial specialization for all pointer types
template <typename T>
struct TypeKind<T*> {
    static constexpr const char* name = "pointer";
};
