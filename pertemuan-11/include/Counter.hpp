#pragma once
class Counter {
public:
    explicit Counter(int value = 0) : value_(value) {}
    int value() const noexcept { return value_; }
    Counter& operator++() noexcept { ++value_; return *this; }
    Counter operator++(int) noexcept { Counter old=*this; ++(*this); return old; }
private:
    int value_;
};

class ReadinessAtLeast {
public:
    explicit ReadinessAtLeast(int min) : min_(min) {}
    bool operator()(int value) const noexcept { return value >= min_; }
private:
    int min_;
};
