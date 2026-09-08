<p align="center"><img src="../assets/logo_unhan.png" width="130" alt="Logo Universitas Pertahanan Republik Indonesia"></p>

**UNIVERSITAS PERTAHANAN REPUBLIK INDONESIA**  
**PROGRAM STUDI INFORMATIKA - FAKULTAS TEKNIK DAN TEKNOLOGI PERTAHANAN**

# PBO301 - Pertemuan 1
## Pengantar OOP, C++ Modern, dan Pengenalan UML

## 1. Sub-CPMK dan Capaian Belajar

**Sub-CPMK-1.1** - Mampu menjelaskan perbedaan paradigma prosedural, OOP, dan generik.  
**Sub-CPMK-1.2** - Mampu menjelaskan tujuan dan struktur UML sebagai bahasa pemodelan sistem OOP.

Setelah menyelesaikan modul ini, Anda dapat:

1. membandingkan paradigma prosedural, OOP, dan generic programming;
2. menjelaskan motivasi OOP: modularity, reusability, dan maintainability;
3. menjelaskan posisi C++17 dalam evolusi C++ modern;
4. membangun program dengan `-std=c++17 -Wall -Wextra -pedantic`;
5. menjelaskan kegunaan Class, Object, Sequence, dan Use Case Diagram;
6. menerjemahkan requirement sederhana menjadi class diagram dan skeleton C++.

> Baseline mata kuliah: **C++17**. Code::Blocks + MinGW GCC adalah baseline IDE/toolchain RPS, tetapi GCC/Clang lain boleh digunakan bila flags dan hasil build setara.

## 2. Rencana Belajar Mandiri 420 Menit

# BLOK A - Paradigma dan Mental Model OOP - 60 menit

### A1. Recall prasyarat - 15 menit
Tanpa membuka catatan, tulis definisi singkat untuk: function, struct, class, object, pointer, ADT.

### A2. Bandingkan paradigma - 25 menit
Buka `notes/paradigm_comparison.md` dan isi tabel perbandingan. Fokus pada *unit organisasi*, *cara memandang masalah*, dan *trade-off*.

### A3. Self-check - 20 menit
Kerjakan pertanyaan A pada bagian Self-check. Jangan lihat pembahasan sebelum selesai.

# BLOK B - C++ Modern dan Toolchain - 90 menit

### B1. C++98 -> C++17 - 25 menit
Baca ringkasan di `notes/cpp_evolution.md`. Identifikasi fitur modern yang sudah pernah Anda pakai tanpa menyadari standar asalnya.

### B2. Verifikasi compiler - 20 menit

```bash
g++ --version
g++ -std=c++17 -Wall -Wextra -pedantic -g starter/hello_cpp17.cpp -o hello_cpp17
./hello_cpp17
```

### B3. Warning lab - 25 menit
Build `exercises/warning_lab.cpp`. Catat warning, cari akar masalah, lalu perbaiki tanpa menonaktifkan warning.

### B4. Catatan toolchain - 20 menit
Jelaskan dengan kalimat Anda sendiri peran editor/IDE, compiler, linker, executable, dan debugger.

# BLOK C - UML untuk OOP - 90 menit

### C1. Empat diagram - 30 menit
Baca `notes/uml_overview.md`. Cocokkan pertanyaan desain dengan diagram yang paling tepat.

### C2. PlantUML - 30 menit
Render `uml/equipment.puml`. Pastikan diagram menampilkan class `Equipment` dengan tiga atribut dan satu method.

### C3. Reverse check - 30 menit
Bandingkan `uml/equipment.puml`, `include/Equipment.h`, dan `src/Equipment.cpp`. Tandai setiap perbedaan nama, tipe, atau method.

# BLOK D - Prosedural ke OOP - 90 menit

### D1. Baseline prosedural - 20 menit
Build dan jalankan `starter/procedural_equipment.cpp`.

### D2. Refactor - 40 menit
Kerjakan `exercises/procedural_to_oop.cpp`. Pindahkan state dan operasi yang jelas saling terkait ke class `Equipment`.

### D3. Analisis trade-off - 30 menit
Tuliskan dua keuntungan dan satu biaya/refactor overhead pada `reflection.md`.

# BLOK E - Integrasi / Challenge - 90 menit

### E1. Requirement - 15 menit
Sebuah unit latihan ingin menyimpan tiga record peralatan dan menampilkan status kesiapan.

### E2. Model - 20 menit
Lengkapi `uml/readiness_register.puml`.

### E3. Implementasi - 35 menit
Lengkapi `exercises/readiness_challenge.cpp` atau gunakan struktur `include/` + `src/` sebagai referensi.

### E4. Verifikasi - 10 menit
Build dengan warning flags dan jalankan test script.

```bash
make clean
make
make test
```

### E5. Reflection dan AI declaration - 10 menit
Isi `reflection.md` dan `AI_DECLARATION.md`.

## 3. Perintah Build dan Run

### Make

```bash
make
./build/pbo301_p1
make test
```

### CMake

```bash
cmake -S . -B build-cmake
cmake --build build-cmake
ctest --test-dir build-cmake --output-on-failure
```

### Build manual

```bash
g++ -std=c++17 -Wall -Wextra -pedantic \
    src/main.cpp src/Equipment.cpp -Iinclude -o pbo301_p1
./pbo301_p1
```

## 4. Self-check

1. Apa perbedaan fokus utama paradigma prosedural dan OOP?
2. Mengapa generic programming bukan sinonim OOP?
3. Apa beda class dan object?
4. Mengapa program yang berhasil compile masih perlu diperiksa warning?
5. Apa fungsi `-std=c++17`?
6. Diagram UML mana yang memperlihatkan struktur attribute dan method?
7. Diagram mana yang memperlihatkan urutan pesan dari waktu ke waktu?
8. Diagram mana yang memperlihatkan instance konkret pada satu waktu?
9. Diagram mana yang berfokus pada tujuan aktor terhadap sistem?
10. Mengapa file `.puml` baik disimpan di Git bersama source code?

## 5. Jawaban dan Pembahasan

1. Prosedural berfokus pada urutan langkah/fungsi; OOP berfokus pada object, state, dan responsibility.
2. Generic programming membuat algoritma/type bekerja lintas tipe melalui parameterisasi; ia dapat digunakan bersama OOP.
3. Class adalah definisi type/blueprint; object adalah instance konkret dari class.
4. Warning dapat menandai bug potensial, konversi mencurigakan, atau intent yang tidak jelas walaupun sintaks valid.
5. Meminta compiler menggunakan aturan bahasa C++17.
6. Class Diagram.
7. Sequence Diagram.
8. Object Diagram.
9. Use Case Diagram.
10. Karena model dapat di-version, di-review, di-diff, dan dijaga sinkron dengan implementasi.

## 6. Reflection

Isi `reflection.md`. Refleksi harus spesifik terhadap pekerjaan Anda, bukan ringkasan teori generik.

## 7. Definition of Done

- [ ] Compiler C++17 terverifikasi.
- [ ] `make` atau CMake build berhasil.
- [ ] Build utama tidak menghasilkan warning.
- [ ] `uml/equipment.puml` dapat dirender.
- [ ] Challenge menghasilkan tiga record dengan state berbeda.
- [ ] Self-check dikerjakan sebelum melihat jawaban.
- [ ] `reflection.md` terisi.
- [ ] `AI_DECLARATION.md` terisi.
- [ ] Repository tidak berisi binary/build artifact yang tidak perlu.

## 8. Referensi

- Deitel, P. J. & Deitel, H. M. *C++ How to Program*, Ch. 9.
- Stroustrup, B. *The C++ Programming Language*, Ch. 1-2.
- Lippman, S. B., Lajoie, J., & Moo, B. E. *C++ Primer*, Ch. 1.
- Fowler, M. *UML Distilled*, Ch. 1-2.
- C++ Reference: https://en.cppreference.com/
- C++ Core Guidelines: https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines
- PlantUML: https://plantuml.com/
- UML Diagrams: https://www.uml-diagrams.org/
