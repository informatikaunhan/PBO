#include <algorithm>
#include <cassert>
#include <cstddef>

class IntBuffer {
public:
    explicit IntBuffer(std::size_t size)
        : size_(size), data_(size == 0 ? nullptr : new int[size]{}) {}

    ~IntBuffer() { delete[] data_; }

    IntBuffer(const IntBuffer& other)
        : size_(other.size_), data_(other.size_ == 0 ? nullptr : new int[other.size_]) {
        if (data_ != nullptr) std::copy(other.data_, other.data_ + size_, data_);
    }

    IntBuffer& operator=(const IntBuffer& other) {
        if (this == &other) return *this;
        int* next = other.size_ == 0 ? nullptr : new int[other.size_];
        if (next != nullptr) std::copy(other.data_, other.data_ + other.size_, next);
        delete[] data_;
        data_ = next;
        size_ = other.size_;
        return *this;
    }

    std::size_t size() const { return size_; }
    const void* address() const { return data_; }
private:
    std::size_t size_{0};
    int* data_{nullptr};
};

int main() {
    IntBuffer a(5);
    IntBuffer b(a);
    assert(a.size() == b.size());
    assert(a.address() != b.address());
    IntBuffer c(2);
    c = a;
    assert(c.size() == 5);
    assert(c.address() != a.address());
    c = c;
    assert(c.size() == 5);
    IntBuffer empty(0);
    IntBuffer emptyCopy(empty);
    assert(emptyCopy.size() == 0);
}
