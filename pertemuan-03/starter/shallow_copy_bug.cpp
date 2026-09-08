// WARNING: contoh ini sengaja memiliki ownership bug untuk code review/debugger.
// Jangan masukkan ke build/test normal. Bila dijalankan, gunakan AddressSanitizer.
#include <algorithm>
#include <cstddef>

class BadBuffer {
public:
    explicit BadBuffer(std::size_t n) : size_(n), data_(new int[n]{}) {}
    ~BadBuffer() { delete[] data_; }
    // Copy constructor/assignment tidak ditulis -> pointer disalin dangkal.
private:
    std::size_t size_;
    int* data_;
};

int main() {
    BadBuffer a(4);
    BadBuffer b = a; // b.data_ dan a.data_ akan sama -> double deletion saat scope berakhir.
    (void)b;
}
