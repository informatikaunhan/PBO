#include <iostream>
#include <string>
#include <utility>

class MissionCode {
public:
    MissionCode() : MissionCode("UNASSIGNED") {}
    explicit MissionCode(std::string value) : value_(std::move(value)) {}
    const std::string& value() const { return value_; }
private:
    std::string value_;
};

int main() {
    MissionCode a;
    MissionCode b("M-17");
    std::cout << a.value() << '\n' << b.value() << '\n';
}
