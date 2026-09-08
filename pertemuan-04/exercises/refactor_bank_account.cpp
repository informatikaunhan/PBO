#include <string>

// TODO:
// 1. ubah menjadi class dengan private state
// 2. tambahkan constructor
// 3. tambahkan owner()/balance() const
// 4. tambahkan deposit()/withdraw() yang menjaga invariant
struct BankAccountExercise {
    std::string owner;
    double balance;
};
