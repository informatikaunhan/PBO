#include <iostream>
#include <string>
class Unit { public: virtual std::string role() const { return "Unit"; } virtual ~Unit() = default; };
class Infantry final : public Unit { public: std::string role() const override { return "Infantry"; } };
int main(){ Infantry i; const Unit& u=i; std::cout << u.role() << '\n'; }
