#include "SimpleStringLite.hpp"
#include <algorithm>
#include <cstring>
#include <ostream>
#include <stdexcept>
#include <utility>

SimpleStringLite::SimpleStringLite() : data_(std::make_unique<char[]>(1)) { data_[0]='\0'; }
SimpleStringLite::SimpleStringLite(const char* text) {
    if (!text) text="";
    size_ = std::strlen(text);
    data_ = std::make_unique<char[]>(size_+1);
    std::copy(text, text+size_+1, data_.get());
}
SimpleStringLite::SimpleStringLite(const SimpleStringLite& other) : size_(other.size_), data_(std::make_unique<char[]>(other.size_+1)) {
    std::copy(other.data_.get(), other.data_.get()+other.size_+1, data_.get());
}
SimpleStringLite& SimpleStringLite::operator=(SimpleStringLite other) { swap(other); return *this; }
void SimpleStringLite::swap(SimpleStringLite& other) noexcept { std::swap(size_,other.size_); data_.swap(other.data_); }
char& SimpleStringLite::operator[](std::size_t i) { if(i>=size_) throw std::out_of_range("SimpleStringLite index"); return data_[i]; }
const char& SimpleStringLite::operator[](std::size_t i) const { if(i>=size_) throw std::out_of_range("SimpleStringLite index"); return data_[i]; }
bool operator==(const SimpleStringLite& a, const SimpleStringLite& b) noexcept {
    return a.size_==b.size_ && std::equal(a.data_.get(),a.data_.get()+a.size_,b.data_.get());
}
std::ostream& operator<<(std::ostream& os, const SimpleStringLite& s) { return os << s.data_.get(); }
