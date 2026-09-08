#pragma once
#include <array>
#include <cstddef>
#include <optional>

template <typename T, std::size_t N>
class Stack {
    std::array<std::optional<T>, N> data_{};
    std::size_t size_ = 0;
public:
    // TODO: push, pop, top, empty, size
};
