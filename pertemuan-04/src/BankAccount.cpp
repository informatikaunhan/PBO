#include "BankAccount.h"
#include <utility>

BankAccount::BankAccount(std::string owner, std::string accountNumber, double initialBalance)
    : owner_(std::move(owner)), accountNumber_(std::move(accountNumber)),
      balance_(initialBalance >= 0.0 ? initialBalance : 0.0) {}

const std::string& BankAccount::owner() const noexcept { return owner_; }
const std::string& BankAccount::accountNumber() const noexcept { return accountNumber_; }
double BankAccount::balance() const noexcept { ++readCount_; return balance_; }
std::size_t BankAccount::readCount() const noexcept { return readCount_; }

bool BankAccount::deposit(double amount) noexcept {
    if (amount <= 0.0) return false;
    balance_ += amount;
    return true;
}

bool BankAccount::withdraw(double amount) noexcept {
    if (amount <= 0.0 || amount > balance_) return false;
    balance_ -= amount;
    return true;
}

double auditBalance(const BankAccount& account) noexcept { return account.balance_; }
