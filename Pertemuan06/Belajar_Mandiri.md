# PBO301 - Pertemuan 6
## Inheritance dan UML Generalization

![Logo Universitas Pertahanan Republik Indonesia](PBO301_Pertemuan06_GitHub/assets/logo_unhan.png)

**UNIVERSITAS PERTAHANAN REPUBLIK INDONESIA**  
**PROGRAM STUDI INFORMATIKA - FAKULTAS TEKNIK DAN TEKNOLOGI PERTAHANAN**

## 1. Sub-CPMK dan Capaian Belajar
**Sub-CPMK-2.4** - Mampu mengimplementasikan inheritance (single, multilevel, multiple, virtual inheritance).  
**Sub-CPMK-4.1** - Mampu membuat class diagram lengkap dengan atribut, method, visibility, dan relasi.

Setelah modul ini Anda dapat mengimplementasikan public inheritance, multilevel hierarchy, access inheritance, constructor/destructor order, name hiding, multiple inheritance, diamond problem, virtual inheritance, memilih composition vs inheritance, serta memodelkan generalization di UML.

## 2. Rencana Belajar Mandiri 420 Menit

# BLOK A - is-a, Single, dan Multilevel Inheritance - 75 menit
1. Baca `notes/inheritance_vs_composition.md` (15 menit).
2. Pelajari `include/MilitaryUnit.h` dan buat peta base/derived (20 menit).
3. Kerjakan `starter/military_unit_starter.cpp` (30 menit).
4. Self-check A (10 menit).

# BLOK B - Access, Constructor Order, dan Name Hiding - 75 menit
1. Trace constructor/destructor tiga level (20 menit).
2. Kerjakan `exercises/access_hiding_lab.cpp` (35 menit).
3. Buat catatan public/protected/private inheritance (10 menit).
4. Self-check B (10 menit).

# BLOK C - Multiple Inheritance dan Diamond Problem - 90 menit
1. Buat diamond tanpa virtual inheritance (25 menit).
2. Catat compiler diagnostic ambiguity (15 menit).
3. Terapkan virtual inheritance (25 menit).
4. Bandingkan address Vehicle melalui dua jalur parent (15 menit).
5. Self-check C (10 menit).

# BLOK D - UML Generalization dan Design Choice - 80 menit
1. Render `uml/military_hierarchy.puml` (20 menit).
2. Render `uml/amphibious_diamond.puml` (20 menit).
3. Audit arah panah generalization dan bedakan dari composition (20 menit).
4. Tulis dua decision record inheritance-vs-composition di `reflection.md` (20 menit).

# BLOK E - Integrasi / Challenge - 100 menit
1. Build seluruh project dengan Make (15 menit).
2. Tambahkan `CommandUnit` yang mewarisi `MilitaryUnit` dan memiliki `CommunicationModule` via composition (35 menit).
3. Update UML (20 menit).
4. Tambahkan minimal dua assert baru (15 menit).
5. Jalankan Make test + CTest (10 menit).
6. Isi AI declaration (5 menit).

Total: **420 menit**.

## 3. Perintah Build dan Run
```bash
make clean
make
./build/pbo301_p6
make test

cmake -S . -B build-cmake
cmake --build build-cmake
ctest --test-dir build-cmake --output-on-failure
```

## 4. Self-check
1. Apa makna is-a pada public inheritance?
2. Urutan constructor dan destructor pada tiga level?
3. Apa beda protected member dan protected inheritance?
4. Mengapa method derived dapat menyembunyikan overload base?
5. Apa risiko multiple inheritance?
6. Apa diamond problem?
7. Apa efek `virtual public Vehicle`?
8. Siapa menginisialisasi virtual base?
9. Kapan composition lebih tepat?
10. Ke mana arah hollow triangle pada UML generalization?

## 5. Jawaban dan Pembahasan
1. Derived merupakan subtype base dan dapat digunakan pada konteks base secara semantik.
2. Constructor base-ke-derived; destructor derived-ke-base.
3. Protected member adalah visibility; protected inheritance mengubah akses member base pada derived interface.
4. Name lookup berhenti pada nama di scope derived; gunakan `using Base::f` bila ingin overload base ikut terlihat.
5. Ambiguity, coupling, layout dan constructor complexity.
6. Dua jalur inheritance menuju base yang sama sehingga base subobject terduplikasi.
7. Intermediate classes berbagi satu virtual base subobject.
8. Most-derived class.
9. Saat hubungan adalah has-a/uses-a, bukan is-a, atau capability perlu mudah diganti.
10. Menuju superclass/base yang lebih umum.

## 6. Reflection
Isi `reflection.md` dengan contoh spesifik dari kode Anda.

## 7. Definition of Done
- [ ] Build C++17 tanpa warning.
- [ ] `make test` lulus.
- [ ] CMake + CTest lulus.
- [ ] MilitaryUnit hierarchy bekerja.
- [ ] Diamond demo memakai virtual inheritance dan satu Vehicle base terverifikasi.
- [ ] UML generalization konsisten dengan kode.
- [ ] Minimal satu keputusan composition-vs-inheritance dijelaskan.
- [ ] Reflection dan AI declaration selesai.

## 8. Referensi
- Deitel, *C++ How to Program*, Ch. 11.
- Stroustrup, *The C++ Programming Language*, Ch. 20-21.
- Lippman, Lajoie, Moo, *C++ Primer*, Ch. 15.
- Fowler, *UML Distilled*, Ch. 5.
- cppreference: derived classes and virtual base classes.
