#pragma once
#include <array>
#include <cstddef>
#include <memory>
#include <optional>
#include <stdexcept>
#include <utility>
#include <vector>

template <typename T, std::size_t Capacity>
class Stack {
    static_assert(Capacity > 0, "Capacity must be positive");
    std::array<std::optional<T>, Capacity> data_{};
    std::size_t size_ = 0;
public:
    bool push(T value) {
        if (size_ == Capacity) return false;
        data_[size_++] = std::move(value);
        return true;
    }
    std::optional<T> pop() {
        if (size_ == 0) return std::nullopt;
        auto out = std::move(data_[--size_]);
        data_[size_].reset();
        return out;
    }
    const T& top() const {
        if (size_ == 0) throw std::out_of_range("empty stack");
        return *data_[size_-1];
    }
    bool empty() const noexcept { return size_ == 0; }
    std::size_t size() const noexcept { return size_; }
    static constexpr std::size_t capacity() noexcept { return Capacity; }
};

template <typename T, std::size_t Capacity>
class Queue {
    static_assert(Capacity > 0, "Capacity must be positive");
    std::array<std::optional<T>, Capacity> data_{};
    std::size_t head_ = 0, tail_ = 0, size_ = 0;
public:
    bool push(T value) {
        if (size_ == Capacity) return false;
        data_[tail_] = std::move(value);
        tail_ = (tail_ + 1) % Capacity;
        ++size_;
        return true;
    }
    std::optional<T> pop() {
        if (size_ == 0) return std::nullopt;
        auto out = std::move(data_[head_]);
        data_[head_].reset();
        head_ = (head_ + 1) % Capacity;
        --size_;
        return out;
    }
    const T& front() const {
        if (size_ == 0) throw std::out_of_range("empty queue");
        return *data_[head_];
    }
    bool empty() const noexcept { return size_ == 0; }
    std::size_t size() const noexcept { return size_; }
};

template <typename T>
class LinkedList {
    struct Node {
        T value;
        std::unique_ptr<Node> next;
        explicit Node(T v) : value(std::move(v)) {}
    };
    std::unique_ptr<Node> head_;
    std::size_t size_ = 0;
public:
    void push_front(T value) {
        auto n = std::make_unique<Node>(std::move(value));
        n->next = std::move(head_);
        head_ = std::move(n);
        ++size_;
    }
    bool pop_front() {
        if (!head_) return false;
        head_ = std::move(head_->next);
        --size_;
        return true;
    }
    bool empty() const noexcept { return !head_; }
    std::size_t size() const noexcept { return size_; }
    std::vector<T> to_vector() const {
        std::vector<T> out;
        out.reserve(size_);
        for (Node* p = head_.get(); p; p = p->next.get()) out.push_back(p->value);
        return out;
    }
};
