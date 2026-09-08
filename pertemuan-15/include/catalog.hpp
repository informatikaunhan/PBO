#pragma once
#include "exceptions.hpp"
#include <algorithm>
#include <cstddef>
#include <string>
#include <utility>
#include <vector>

template <class T>
class Catalog {
    std::vector<T> items_;
public:
    void add(T item) {
        if (findById(item.id()) != nullptr) throw DuplicateItem(item.id());
        items_.push_back(std::move(item));
    }
    T* findById(const std::string& id) {
        auto it = std::find_if(items_.begin(), items_.end(), [&](const T& x){ return x.id() == id; });
        return it == items_.end() ? nullptr : &*it;
    }
    const T* findById(const std::string& id) const {
        auto it = std::find_if(items_.cbegin(), items_.cend(), [&](const T& x){ return x.id() == id; });
        return it == items_.cend() ? nullptr : &*it;
    }
    template <class Pred>
    std::size_t countIf(Pred pred) const {
        return static_cast<std::size_t>(std::count_if(items_.cbegin(), items_.cend(), pred));
    }
    std::size_t size() const noexcept { return items_.size(); }
    const std::vector<T>& items() const noexcept { return items_; }
};
