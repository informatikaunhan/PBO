#include <iostream>
#include <string>
#include <utility>

class Trace {
public:
    explicit Trace(std::string name) : name_(std::move(name)) {
        std::cout << "construct " << name_ << '\n';
    }
    ~Trace() { std::cout << "destroy " << name_ << '\n'; }
private:
    std::string name_;
};

void scenario() {
    Trace alpha("alpha");
    {
        Trace bravo("bravo");
        Trace charlie("charlie");
    }
    Trace delta("delta");
}

int main() {
    // TODO: tulis prediksi urutan pada reflection.md sebelum menjalankan.
    scenario();
}
