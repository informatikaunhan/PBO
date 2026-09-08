#pragma once
#include <array>
#include <cstddef>
#include <stdexcept>
#include <utility>

template <typename T>
const T& maxValue(const T& a, const T& b) {
    return a < b ? b : a;
}

template <typename T>
void genericSwap(T& a, T& b) {
    T tmp = std::move(a);
    a = std::move(b);
    b = std::move(tmp);
}

template <typename A, typename B>
class Pair {
public:
    Pair() = default;
    Pair(A first, B second) : first_{std::move(first)}, second_{std::move(second)} {}
    const A& first() const noexcept { return first_; }
    const B& second() const noexcept { return second_; }
    A& first() noexcept { return first_; }
    B& second() noexcept { return second_; }
private:
    A first_{};
    B second_{};
};

template <typename T, std::size_t N>
class FixedArray {
public:
    constexpr std::size_t size() const noexcept { return N; }
    T& at(std::size_t i) {
        if (i >= N) throw std::out_of_range("FixedArray index");
        return data_[i];
    }
    const T& at(std::size_t i) const {
        if (i >= N) throw std::out_of_range("FixedArray index");
        return data_[i];
    }
    T& operator[](std::size_t i) noexcept { return data_[i]; }
    const T& operator[](std::size_t i) const noexcept { return data_[i]; }
private:
    std::array<T,N> data_{};
};

template <typename T, std::size_t Capacity = 8>
class Stack {
public:
    void push(const T& value) {
        if (size_ == Capacity) throw std::overflow_error("Stack full");
        data_[size_++] = value;
    }
    T pop() {
        if (empty()) throw std::underflow_error("Stack empty");
        return data_[--size_];
    }
    const T& top() const {
        if (empty()) throw std::underflow_error("Stack empty");
        return data_[size_-1];
    }
    bool empty() const noexcept { return size_ == 0; }
    std::size_t size() const noexcept { return size_; }
    static constexpr std::size_t capacity() noexcept { return Capacity; }
private:
    std::array<T,Capacity> data_{};
    std::size_t size_{};
};
