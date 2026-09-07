# PBO301 - Pertemuan 13
## Templates Bagian 2 - Specialization, STL, dan Generic Container

![Logo Universitas Pertahanan Republik Indonesia](PBO301_Pertemuan13_GitHub/assets/logo_unhan.png)

**UNIVERSITAS PERTAHANAN REPUBLIK INDONESIA**  
**PROGRAM STUDI INFORMATIKA - FAKULTAS TEKNIK DAN TEKNOLOGI PERTAHANAN**

## 1. Sub-CPMK dan Capaian Belajar
**Sub-CPMK-5.2** - Mampu menerapkan template specialization, menggunakan STL container/algorithm, dan mengimplementasikan struktur data generic.

Capaian: full specialization, partial specialization, vector/list/deque/map/set, iterator, sort/find/for_each/count_if, functor/lambda, serta generic Stack/Queue/LinkedList.

## 2. Rencana Belajar Mandiri 420 Menit
# BLOK A - 80 menit - Template Specialization
Baca `notes/concepts.md`, lengkapi full specialization `Display<bool>` dan partial specialization `TypeKind<T*>`, lalu kerjakan `exercises/ex1_specialization.cpp`.

# BLOK B - 80 menit - STL Container
Eksperimen dengan `vector`, `deque`, `list`, `map`, dan `set`. Dokumentasikan operasi dominan dan trade-off setiap container.

# BLOK C - 80 menit - Iterator, Algorithm, dan Predicate
Gunakan `sort`, `find_if`, `for_each`, `count_if`, functor, dan lambda pada data `Soldier`. Kerjakan `exercises/ex2_algorithms.cpp`.

# BLOK D - 80 menit - Generic Data Structures
Lengkapi `Stack<T,N>`, `Queue<T,N>`, dan `LinkedList<T>`. Uji `int`, `std::string`, dan `Soldier`.

# BLOK E - Integrasi / Challenge - 100 menit
Bangun **Mission Readiness Registry**: vector roster, map lookup, set callsign, algorithm readiness, specialization status, dan generic queue. Kerjakan `exercises/ex3_mission_registry.cpp`.

## 3. Perintah Build dan Run
```bash
make
./build/pbo301_p13
make test

cmake -S . -B build-cmake
cmake --build build-cmake
ctest --test-dir build-cmake --output-on-failure
```
Build baseline: `-std=c++17 -Wall -Wextra -pedantic`.

## 4. Self-check
1. Apa beda full specialization dan partial specialization?
2. Mengapa partial specialization tidak berlaku langsung pada function template?
3. Kapan `vector` lebih tepat daripada `list`?
4. Apa peran iterator pada STL?
5. Mengapa `std::sort` tidak bisa langsung dipakai pada `std::list`?
6. Kapan functor lebih jelas daripada lambda?
7. Apa invariant utama Stack dan Queue circular buffer?
8. Kapan sebaiknya memakai STL daripada menulis container sendiri?

## 5. Jawaban dan Pembahasan
Lihat `solutions/` dan `notes/concepts.md` setelah mengerjakan starter/exercises sendiri.

## 6. Reflection
Isi `reflection.md` dengan bukti build/test, keputusan pemilihan container, dan minimal satu pesan error template/STL yang berhasil Anda pahami.

## 7. Definition of Done
- `make test` lulus.
- `ctest` lulus.
- Tidak ada warning.
- Full dan partial specialization terbukti melalui test.
- Minimal tiga STL container dan tiga algorithm digunakan secara tepat.
- Stack/Queue/LinkedList generic diuji dengan lebih dari satu tipe.
- Reflection dan AI declaration terisi.

## 8. Referensi
- Deitel, *C++ How to Program* - Templates dan STL.
- Stroustrup, *The C++ Programming Language* - Generic Programming.
- Lippman et al., *C++ Primer* - Generic Algorithms.
- Vandevoorde et al., *C++ Templates* - specialization.
- cppreference: template specialization, containers, iterators, algorithms, lambda.
