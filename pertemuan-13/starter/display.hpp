#pragma once
#include <sstream>
#include <string>

template <typename T>
struct Display {
    static std::string show(const T& value) {
        std::ostringstream out; out << value; return out.str();
    }
};

// TODO: full specialization Display<bool>
