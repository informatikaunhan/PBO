#include <iostream>
#include <string>
#include <utility>
#include <vector>

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
    std::vector<Equipment> items;
    items.emplace_back(1, "Field Radio", true);
    items.emplace_back(2, "Power Unit", false);
    items.emplace_back(3, "Navigation Kit", true);
    for (const auto& item : items) item.display();
}
