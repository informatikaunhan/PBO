<p align="center"><img src="../assets/logo_unhan.png" width="130" alt="Logo Universitas Pertahanan Republik Indonesia"></p>

**UNIVERSITAS PERTAHANAN REPUBLIK INDONESIA**  
**PROGRAM STUDI INFORMATIKA - FAKULTAS TEKNIK DAN TEKNOLOGI PERTAHANAN**

# PBO301 - Pertemuan 2
## Class, Object, dan Class Diagram

## 1. Sub-CPMK dan Capaian Belajar

**Sub-CPMK-2.1** - Mampu mendefinisikan class beserta atribut dan method dalam C++.  
**Sub-CPMK-4.1** - Mampu membuat class diagram lengkap dengan atribut, method, visibility, dan relasi; minggu ini fokus pada class tunggal.

Setelah menyelesaikan modul ini, Anda dapat:
1. membedakan class dan object secara formal;
2. memisahkan declaration `.h` dan definition `.cpp` dengan include guard;
3. menggunakan `this`, static member, inline function, dan `constexpr` pada kasus sederhana;
4. membedakan `struct` dan `class` di C++;
5. membaca dan menulis UML Class Diagram class tunggal;
6. melakukan forward engineering dan reverse engineering dengan consistency check.

Baseline build:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic
```

## 2. Rencana Belajar Mandiri 420 Menit

# BLOK A - Class, Object, dan Anatomi Type - 75 menit

### A1. Recall - 15 menit
Tanpa membuka catatan, tulis definisi singkat: class, object, data member, member function, scope.

### A2. Baca konsep inti - 25 menit
Baca `notes/class_object.md`. Bandingkan state dua object dari class yang sama.

### A3. Starter - 20 menit
Build `starter/soldier_single_file.cpp`. Buat object kedua dengan state berbeda.

### A4. Self-check A - 15 menit
Jawab: data apa yang hidup per object dan data apa yang seharusnya berada pada level class?

# BLOK B - Header, Source, dan Build Multi-File - 90 menit

### B1. Header contract - 20 menit
Baca `notes/header_source.md`.

### B2. Split exercise - 35 menit
Kerjakan `exercises/soldier_split_todo.md` tanpa membuka `include/` dan `src/` solusi terlebih dahulu.

### B3. Build diagnosis - 20 menit
Sengaja ubah satu signature declaration/definition, amati error, lalu pulihkan.

### B4. Catatan - 15 menit
Tulis perbedaan compile error dan link error pada `reflection.md`.

# BLOK C - `this`, Static, Inline, dan `constexpr` - 75 menit

### C1. `this` - 20 menit
Ubah `rename` dan `setReady` agar memakai `this` dan mengembalikan `*this`.

### C2. Static - 25 menit
Tambahkan `activeRosterLimit` dan `setActiveRosterLimit`.

### C3. Compile-time constant - 15 menit
Tambahkan `static constexpr int MaxTeamSize = 12`.

### C4. Self-check C - 15 menit
Jelaskan mengapa static member function tidak memiliki `this`.

# BLOK D - UML Class Diagram dan Mapping - 90 menit

### D1. Notasi - 25 menit
Baca `notes/uml_mapping.md`.

### D2. Forward engineering - 30 menit
Bandingkan `uml/soldier.puml` dengan `include/Soldier.h`. Tandai mismatch bila ada.

### D3. Reverse engineering - 35 menit
Buat file baru `uml/vehicle.puml` dari `starter/vehicle_to_reverse.h`, lalu bandingkan dengan `uml/vehicle_solution.puml`.

# BLOK E - Integrasi / Challenge - 90 menit

### E1. Requirement `Weapon` - 15 menit
Baca `uml/weapon_requirement.puml`.

### E2. Implementasi - 35 menit
Kerjakan `exercises/weapon_forward_todo.cpp` atau buat header/source versi Anda.

### E3. Integrasi - 20 menit
Jalankan `make` dan `make test` pada solusi lengkap. Jelaskan peran tiga class tanpa menambahkan relasi yang belum diminta.

### E4. Reflection + AI declaration - 20 menit
Isi `reflection.md` dan `AI_DECLARATION.md`.

## 3. Perintah Build dan Run

### Make

```bash
make clean
make
./build/pbo301_p2
make test
```

### CMake

```bash
cmake -S . -B build-cmake
cmake --build build-cmake
ctest --test-dir build-cmake --output-on-failure
```

### Manual

```bash
g++ -std=c++17 -Wall -Wextra -pedantic \
  src/main.cpp src/Soldier.cpp src/Vehicle.cpp src/Weapon.cpp \
  -Iinclude -o pbo301_p2
./pbo301_p2
```

## 4. Self-check

1. Apa perbedaan class dan object?
2. Apa fungsi include guard?
3. Apa arti `Soldier::print`?
4. Apa yang ditunjuk oleh `this`?
5. Mengapa static member function tidak memiliki `this`?
6. Apa beda data member biasa dan static data member?
7. Apa perbedaan default access `struct` dan `class`?
8. Bagaimana static member ditampilkan di UML?
9. Apa tujuan forward engineering?
10. Mengapa reverse engineering sebaiknya dimulai dari header?

## 5. Jawaban dan Pembahasan

1. Class adalah definisi type; object adalah instance konkret.
2. Mencegah multiple inclusion pada satu translation unit.
3. Definition/declaration member function `print` pada scope class `Soldier`.
4. Object saat ini yang menerima pemanggilan non-static member function.
5. Karena static function terkait class, bukan instance tertentu.
6. Data member biasa ada per object; static member satu storage pada level class.
7. `struct` default public, `class` default private.
8. Digarisbawahi pada UML; PlantUML dapat memakai `{static}`.
9. Menjaga pemetaan model/diagram menjadi declaration dan implementation.
10. Header paling dekat dengan contract type; detail algoritma lokal tidak perlu masuk class diagram.

## 6. Reflection

Isi `reflection.md` dengan pengalaman konkret dari build dan mapping Anda.

## 7. Definition of Done

- [ ] `make` berhasil tanpa warning.
- [ ] `make test` lulus.
- [ ] Header/source memiliki include guard dan signature konsisten.
- [ ] `this`, static member, dan `constexpr` dipahami dan dapat dijelaskan.
- [ ] `soldier.puml` sinkron dengan header.
- [ ] `vehicle.puml` berhasil dibuat melalui reverse engineering.
- [ ] `Weapon` berhasil diimplementasikan dari diagram.
- [ ] `reflection.md` dan `AI_DECLARATION.md` terisi.

## 8. Referensi

- Deitel & Deitel, *C++ How to Program*, Ch. 9.
- Bjarne Stroustrup, *The C++ Programming Language*, Ch. 16.
- Lippman, Lajoie, Moo, *C++ Primer*, Ch. 7.
- Martin Fowler, *UML Distilled*, Ch. 3.
- C++ Classes: https://en.cppreference.com/w/cpp/language/classes
- PlantUML Class Diagram: https://plantuml.com/class-diagram
