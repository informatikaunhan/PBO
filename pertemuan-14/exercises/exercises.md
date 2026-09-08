# Exercises

## A - Hierarchy
Tambahkan `ExpiredItemException` dan tentukan apakah ia subtype `InventoryException` atau `std::logic_error`. Jelaskan alasan.

## B - Rethrow
Buat inner handler yang audit lalu `throw;`, dan outer handler yang tetap menerima dynamic type yang benar.

## C - Strong Guarantee
Tambahkan method `applyAdjustments(map<string,int>)` yang atomic: bila satu adjustment invalid, tidak ada stock yang berubah.

## D - noexcept
Audit lima function. Untuk setiap function, tulis YA/TIDAK dan alasan contract.
