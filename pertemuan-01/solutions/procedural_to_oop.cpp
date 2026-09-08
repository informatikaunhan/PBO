#include <iostream>
#include <string>
#include <utility>

class Equipment {
public:
    Equipment(int id, std::string name, bool ready)
        : id_{id}, name_{std::move(name)}, ready_{ready} {}

    void display() const {
        std::cout << id_ << " | " << name_ << " | "
                  << (ready_ ? "READY" : "CHECK") << '\n';
    }
private:
    int id_;
    std::string name_;
    bool ready_;
};

int main() {
    Equipment radio{1, "Field Radio", true};
    radio.display();
}
