#include <string>
#include <utility>

class BankAccountSolution {
public:
    BankAccountSolution(std::string owner, double initial)
        : owner_(std::move(owner)), balance_(initial >= 0.0 ? initial : 0.0) {}
    const std::string& owner() const noexcept { return owner_; }
    double balance() const noexcept { return balance_; }
    bool deposit(double a) noexcept { if (a <= 0) return false; balance_ += a; return true; }
    bool withdraw(double a) noexcept { if (a <= 0 || a > balance_) return false; balance_ -= a; return true; }
private:
    std::string owner_;
    double balance_;
};
