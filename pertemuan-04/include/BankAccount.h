#pragma once
#include <cstddef>
#include <string>

class BankAccount {
public:
    BankAccount(std::string owner, std::string accountNumber, double initialBalance = 0.0);

    const std::string& owner() const noexcept;
    const std::string& accountNumber() const noexcept;
    double balance() const noexcept;
    std::size_t readCount() const noexcept;

    bool deposit(double amount) noexcept;
    bool withdraw(double amount) noexcept;

    friend double auditBalance(const BankAccount& account) noexcept;

private:
    std::string owner_;
    std::string accountNumber_;
    double balance_{0.0};
    mutable std::size_t readCount_{0};
};
