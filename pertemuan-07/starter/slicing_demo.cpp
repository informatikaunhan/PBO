#include <iostream>
#include <string>
struct Base { virtual std::string who() const { return "Base"; } virtual ~Base() = default; };
struct Derived : Base { std::string who() const override { return "Derived"; } };
int main(){ Derived d; Base copy=d; const Base& ref=d; std::cout<<copy.who()<<"\n"<<ref.who()<<"\n"; }
