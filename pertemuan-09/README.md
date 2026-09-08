<p align="center"><img src="../assets/logo_unhan.png" width="130" alt="Logo Universitas Pertahanan Republik Indonesia"></p>

**UNIVERSITAS PERTAHANAN REPUBLIK INDONESIA**  
**PROGRAM STUDI INFORMATIKA - FAKULTAS TEKNIK DAN TEKNOLOGI PERTAHANAN**

# PBO301 - Pertemuan 9
## Abstraction Bagian 1 - Abstract Class dan Pure Virtual Function

## 1. Sub-CPMK dan Capaian Belajar

**Sub-CPMK-2.6** - Mampu merancang abstract class dengan pure virtual function.  
**Sub-CPMK-4.1** - Mampu membuat class diagram lengkap dengan atribut, method, visibility, dan relasi.

Setelah modul ini Anda dapat:

1. menjelaskan abstraction sebagai pemisahan kontrak dari detail implementasi;
2. mendeklarasikan pure virtual function dengan `= 0`;
3. merancang abstract base class dengan partial implementation;
4. memastikan derived class menjadi concrete melalui `override` lengkap;
5. menggunakan virtual destructor pada polymorphic abstract base;
6. memodelkan abstract class dan abstract operation pada UML.

Baseline build: **C++17** dengan `-std=c++17 -Wall -Wextra -pedantic`.

## 2. Rencana Belajar Mandiri 420 Menit

# BLOK A - Mental Model Abstraction - 70 menit

### A1. Recall P6-P7 - 20 menit
Tulis ulang konsep inheritance, virtual function, overriding, dynamic binding, dan virtual destructor tanpa melihat catatan.

### A2. Apa vs bagaimana - 25 menit
Baca `notes/abstraction_notes.md`. Temukan tiga contoh API yang menyembunyikan detail implementasi.

### A3. Self-check A - 25 menit
Jawab nomor 1-3 pada Self-check sebelum melihat pembahasan.

# BLOK B - Pure Virtual dan Abstract Class - 90 menit

### B1. Refactor Shape - 35 menit
Build `starter/shape_concrete.cpp`, lalu ubah desainnya berdasarkan `exercises/shape_abstract.cpp`.

### B2. Type-trait verification - 20 menit
Gunakan `std::is_abstract_v<Shape>` dan `std::is_abstract_v<Circle>`.

### B3. Partial implementation - 35 menit
Pelajari `include/MilitaryAsset.h` dan dua concrete derived class. Tandai member yang umum dan member yang spesifik subtype.

# BLOK C - Polymorphic Contract dan Lifecycle - 80 menit

### C1. Polymorphic client - 30 menit
Jalankan program utama. Pastikan client hanya memakai `MilitaryAsset&` atau `MilitaryAsset*`.

### C2. Virtual destructor review - 25 menit
Tambahkan lifecycle log pada scope lokal dan jelaskan urutan destruction.

### C3. Anti-pattern review - 25 menit
Buka `notes/anti_patterns.md` dan jelaskan mengapa dummy implementation, object slicing, dan type-switch melemahkan abstraction.

# BLOK D - UML Abstract Class - 80 menit

### D1. Render diagram - 25 menit
Render `uml/military_asset.puml` dengan PlantUML.

### D2. Reverse check - 25 menit
Bandingkan UML dengan header C++. Catat mismatch visibility, nama, tipe, dan operasi abstract.

### D3. Design exercise - 30 menit
Buat abstract class `Sensor` dengan concrete `TemperatureSensor` dan `PressureSensor`.

# BLOK E - Integrasi / Challenge - 100 menit

### E1. Mission Asset Registry - 55 menit
Lengkapi `exercises/mission_registry.cpp`: deploy hanya asset dengan readiness >= 70 tanpa `switch` atau `dynamic_cast`.

### E2. Test - 25 menit
Jalankan `make test` dan tambahkan minimal satu test case baru.

### E3. Reflection + AI declaration - 20 menit
Isi `reflection.md` dan `AI_DECLARATION.md`.

## 3. Perintah Build dan Run

```bash
make
./build/pbo301_p9
make test
```

CMake:

```bash
cmake -S . -B build-cmake
cmake --build build-cmake
ctest --test-dir build-cmake --output-on-failure
```

## 4. Self-check

1. Apa perbedaan abstraction dan encapsulation?
2. Apa arti `= 0` pada virtual function?
3. Kapan class menjadi abstract?
4. Mengapa abstract class tetap boleh memiliki constructor?
5. Mengapa polymorphic base perlu virtual destructor?
6. Apa syarat derived class menjadi concrete?
7. Apa kegunaan `override`?
8. Bagaimana abstract class ditandai pada UML?
9. Mengapa implementasi dummy di base berisiko?
10. Kapan client sebaiknya menerima `Base&` alih-alih concrete type?

## 5. Jawaban dan Pembahasan

1. Abstraction memilih contract; encapsulation mengatur boundary akses dan invariant.
2. Menandai function sebagai pure virtual.
3. Bila memiliki atau mewarisi minimal satu pure virtual yang belum memiliki final concrete overrider.
4. Constructor menginisialisasi base subobject milik object derived.
5. Agar destruction melalui base pointer menjalankan destructor derived dengan benar.
6. Semua pure virtual yang diwarisi harus diimplementasikan.
7. Meminta compiler memverifikasi bahwa function benar-benar override.
8. Nama class/method italic atau stereotype/marker abstract.
9. Derived bisa lupa override dan program masih berjalan dengan semantics salah.
10. Saat client hanya membutuhkan contract umum dan implementasi dapat bervariasi runtime.

## 6. Reflection

Isi `reflection.md` dengan pengalaman spesifik dari refactor dan challenge.

## 7. Definition of Done

- [ ] `make` berhasil tanpa warning.
- [ ] `make test` lulus.
- [ ] `Shape` dan `MilitaryAsset` terdeteksi abstract.
- [ ] Concrete classes mengimplementasikan seluruh pure virtual.
- [ ] Client tidak memakai type-switch untuk behavior utama.
- [ ] UML abstract class dapat dirender dan sinkron dengan kode.
- [ ] Reflection dan AI declaration terisi.

## 8. Referensi

- Deitel, *C++ How to Program*, Ch. 12.
- Stroustrup, *The C++ Programming Language*, Ch. 20.
- Lippman et al., *C++ Primer*, Ch. 15.
- cppreference: abstract class dan virtual function.
- Silabus/RPS PBO301 - Pertemuan 9.
