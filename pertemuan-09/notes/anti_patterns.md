# Anti-patterns

- Dummy base implementation yang menyembunyikan kewajiban override.
- Type switch/dynamic_cast untuk behavior yang seharusnya virtual.
- Object slicing karena pass/collection by value.
- Polymorphic base tanpa virtual destructor.
- God base class yang menampung state semua subtype.
