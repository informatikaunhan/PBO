#include "SimpleString.h"

#include <algorithm>
#include <cstring>
#include <ostream>

namespace {
const char* normalize(const char* text) noexcept {
    return text == nullptr ? "" : text;
}
}

SimpleString::SimpleString() : SimpleString("") {}

SimpleString::SimpleString(const char* text) {
    const char* safe = normalize(text);
    size_ = std::strlen(safe);
    data_ = new char[size_ + 1];
    std::copy(safe, safe + size_ + 1, data_);
}

SimpleString::SimpleString(const SimpleString& other)
    : size_(other.size_), data_(new char[other.size_ + 1]) {
    std::copy(other.data_, other.data_ + other.size_ + 1, data_);
}

SimpleString& SimpleString::operator=(const SimpleString& other) {
    if (this == &other) {
        return *this;
    }

    char* next = new char[other.size_ + 1];
    std::copy(other.data_, other.data_ + other.size_ + 1, next);

    delete[] data_;
    data_ = next;
    size_ = other.size_;
    return *this;
}

SimpleString::~SimpleString() {
    delete[] data_;
}

const char* SimpleString::c_str() const noexcept { return data_; }
std::size_t SimpleString::size() const noexcept { return size_; }
bool SimpleString::empty() const noexcept { return size_ == 0; }
const void* SimpleString::dataAddress() const noexcept { return static_cast<const void*>(data_); }

std::ostream& operator<<(std::ostream& out, const SimpleString& value) {
    return out << value.c_str();
}
