#include "Shape.h"
#include <iostream>
void inspect(const Shape& s) {
    // TODO: gunakan dynamic_cast<const Circle*>(&s), cetak CIRCLE bila sukses dan OTHER bila gagal.
    (void)s;
}
int main(){ Circle c{2}; Rectangle r{2,3}; inspect(c); inspect(r); }
