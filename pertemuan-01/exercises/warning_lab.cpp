#include <iostream>

int main() {
    int status = 1;
    int unusedValue = 42; // TODO: perbaiki warning tanpa suppress sembarangan
    if (status = 0) {     // TODO: ini sengaja salah; pahami warning-nya
        std::cout << "not ready\n";
    }
    return 0;
}
