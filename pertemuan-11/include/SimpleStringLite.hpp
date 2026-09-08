#pragma once
#include <cstddef>
#include <iosfwd>
#include <memory>

class SimpleStringLite {
public:
    SimpleStringLite();
    explicit SimpleStringLite(const char* text);
    SimpleStringLite(const SimpleStringLite& other);
    SimpleStringLite& operator=(SimpleStringLite other);
    void swap(SimpleStringLite& other) noexcept;

    std::size_t size() const noexcept { return size_; }
    char& operator[](std::size_t i);
    const char& operator[](std::size_t i) const;

    friend bool operator==(const SimpleStringLite& a, const SimpleStringLite& b) noexcept;
    friend bool operator!=(const SimpleStringLite& a, const SimpleStringLite& b) noexcept { return !(a==b); }
    friend std::ostream& operator<<(std::ostream& os, const SimpleStringLite& s);
private:
    std::size_t size_ = 0;
    std::unique_ptr<char[]> data_;
};
