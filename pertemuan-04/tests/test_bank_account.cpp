#include "BankAccount.h"
#include <cassert>
#include <cmath>

static bool eq(double a, double b) { return std::fabs(a-b) < 1e-9; }

int main() {
    BankAccount a("Tester", "T-1", 100.0);
    assert(eq(a.balance(), 100.0));
    assert(!a.deposit(0.0));
    assert(!a.deposit(-5.0));
    assert(a.deposit(25.0));
    assert(eq(a.balance(), 125.0));
    assert(!a.withdraw(200.0));
    assert(eq(a.balance(), 125.0));
    assert(a.withdraw(20.0));
    assert(eq(a.balance(), 105.0));
    const BankAccount& ca = a;
    assert(ca.owner() == "Tester");
    assert(eq(auditBalance(ca), 105.0));
    return 0;
}
