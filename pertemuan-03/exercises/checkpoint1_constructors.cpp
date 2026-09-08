#include <iostream>
#include <string>
#include <utility>

class MissionCode {
public:
    // TODO 1: delegating constructor -> "UNASSIGNED"
    MissionCode();
    // TODO 2: tambahkan explicit dan initializer list
    MissionCode(std::string value);
    const std::string& value() const { return value_; }
private:
    std::string value_;
};

// TODO: tulis definition constructor di sini.

int main() {
    MissionCode a;
    MissionCode b("M-17");
    std::cout << a.value() << '\n' << b.value() << '\n';
}
