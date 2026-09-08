#ifndef PBO301_SIMPLESTRING_H
#define PBO301_SIMPLESTRING_H

#include <cstddef>
#include <iosfwd>

class SimpleString {
public:
    SimpleString();
    explicit SimpleString(const char* text);
    SimpleString(const SimpleString& other);
    SimpleString& operator=(const SimpleString& other);
    ~SimpleString();

    const char* c_str() const noexcept;
    std::size_t size() const noexcept;
    bool empty() const noexcept;
    const void* dataAddress() const noexcept; // observability untuk lab

private:
    std::size_t size_{0};
    char* data_{nullptr};
};

std::ostream& operator<<(std::ostream& out, const SimpleString& value);

#endif
