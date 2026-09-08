#include <iostream>
#include <string>

class Soldier {
public:
    std::string callSign{"UNASSIGNED"};
    int serviceNumber{0};
    bool ready{false};

    void print() const {
        std::cout << callSign << " | " << serviceNumber
                  << " | " << (ready ? "READY" : "NOT READY") << '\n';
    }
};

int main() {
    Soldier alpha;
    alpha.callSign = "EAGLE-1";
    alpha.serviceNumber = 771;
    alpha.ready = true;
    alpha.print();
}
