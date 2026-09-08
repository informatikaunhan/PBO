#include <algorithm>
#include <cstddef>

class IntBuffer {
public:
    explicit IntBuffer(std::size_t size)
        : size_(size), data_(size == 0 ? nullptr : new int[size]{}) {}

    // TODO: destructor
    // TODO: copy constructor (deep copy)
    // TODO: copy assignment (self-assignment safe)

    std::size_t size() const { return size_; }
    const void* address() const { return data_; }
private:
    std::size_t size_{0};
    int* data_{nullptr};
};

int main() {
    IntBuffer a(5);
    // TODO: tambahkan copy construction, assignment, self-assignment, dan assertions.
    return static_cast<int>(a.size() == 5 ? 0 : 1);
}
