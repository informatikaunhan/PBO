#include <iostream>
#include <string>
#include <utility>

class MissionCode {
public:
    // TODO: default constructor harus delegate ke parameterized constructor.
    MissionCode() = default;

    // TODO: beri explicit dan gunakan initializer list.
    MissionCode(std::string value) { value_ = std::move(value); }

    const std::string& value() const { return value_; }
private:
    std::string value_{"UNASSIGNED"};
};

int main() {
    MissionCode a;
    MissionCode b("M-17");
    std::cout << a.value() << '\n' << b.value() << '\n';
}
