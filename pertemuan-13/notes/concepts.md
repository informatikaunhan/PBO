# Concepts - Templates Bagian 2

## Specialization
Primary template = aturan umum. Full specialization = implementasi untuk kombinasi tipe tertentu. Partial specialization = implementasi untuk keluarga bentuk parameter pada class template. Function template biasanya menggunakan overload bila perilakunya perlu dibedakan.

## STL Architecture
Container menyimpan data. Iterator mengabstraksi traversal. Algorithm bekerja pada iterator range. Functor/lambda memasok predicate atau policy.

## Container heuristic
Mulai dengan `std::vector`. Pertimbangkan `std::deque` untuk push/pop dua ujung, `std::list` saat node stability dan insert/erase melalui iterator benar-benar penting, `std::map` untuk ordered key->value, dan `std::set` untuk ordered unique keys.

## Iterator invalidation
Operasi container dapat membuat iterator/reference lama tidak valid. Baca kontrak operasi yang digunakan. Jangan dereference `end()`.

## Generic data structure
Menjadikan Stack/Queue/LinkedList template tidak menghapus invariant. Test harus mencakup empty/full, urutan elemen, dan beberapa tipe.

## Concepts C++20
Concepts dapat membatasi parameter template dengan requirement yang lebih terbaca. PBO301 tetap memakai C++17; Concepts hanya pengenalan.
