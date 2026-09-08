#include "BankAccount.h"
#include <iomanip>
#include <iostream>

static void printAccount(const BankAccount& account) {
    std::cout << account.owner() << " [" << account.accountNumber() << "] balance="
              << std::fixed << std::setprecision(2) << account.balance() << '\n';
}

int main() {
    BankAccount account("Unit Alpha", "BA-04", 1000.0);
    account.deposit(250.0);
    account.withdraw(100.0);
    printAccount(account);
    std::cout << "audit=" << auditBalance(account) << '\n';
    return 0;
}
