#include <iostream>
void report(int) { std::cout << "int overload\n"; }
void report(double) { std::cout << "double overload\n"; }
int main(){ report(3); report(3.5); }
