#include <iostream>
#include <string>

struct BankAccountBroken {
    std::string owner;
    double balance;
};

int main() {
    BankAccountBroken a{"Unit Alpha", 1000.0};
    a.balance = -5000.0; // TODO: jelaskan mengapa compiler mengizinkan tetapi domain menolak
    std::cout << a.owner << " balance=" << a.balance << '\n';
}
