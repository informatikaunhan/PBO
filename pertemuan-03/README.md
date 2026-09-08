<p align="center"><img src="../assets/logo_unhan.png" width="130" alt="Logo Universitas Pertahanan Republik Indonesia"></p>

**UNIVERSITAS PERTAHANAN REPUBLIK INDONESIA**  
**PROGRAM STUDI INFORMATIKA - FAKULTAS TEKNIK DAN TEKNOLOGI PERTAHANAN**

# PBO301 - Pertemuan 3
## Constructor, Destructor, dan Copy Semantics

## 1. Sub-CPMK dan Capaian Belajar

**Sub-CPMK-2.2** - Mampu mengimplementasikan constructor, destructor, dan copy semantics (Rule of Three).

Setelah modul ini, Anda dapat:

1. mengimplementasikan default, parameterized, delegating, explicit, dan copy constructor;
2. menjelaskan initializer list, `= default`, dan `= delete`;
3. memprediksi kapan destructor dipanggil dan urutan destruction;
4. membedakan copy construction dari copy assignment;
5. menjelaskan shallow vs deep copy pada owning resource;
6. mengimplementasikan Rule of Three pada class `SimpleString`/`IntBuffer`.

Baseline build: **C++17**, `-std=c++17 -Wall -Wextra -pedantic`.

## 2. Rencana Belajar Mandiri 420 Menit

# BLOK A - Object Lifecycle dan Constructor - 80 menit

### A1. Activation - 15 menit
Tanpa compiler, prediksi kapan constructor/destructor dipanggil pada tiga nested scopes. Simpan prediksi di `reflection.md`.

### A2. Constructor families - 30 menit
Baca `notes/object_lifecycle.md`, lalu kerjakan `exercises/checkpoint1_constructors.cpp`. Fokus pada initializer list, delegating constructor, dan `explicit`.

### A3. Lifecycle trace - 35 menit
Jalankan `exercises/checkpoint2_lifecycle.cpp`. Bandingkan output dengan prediksi dan jelaskan perbedaannya.

# BLOK B - Copy Semantics - 90 menit

### B1. Copy construction vs assignment - 25 menit
Buat tabel dua kolom untuk `T b = a;` dan `b = a;`: kapan object target mulai hidup, special member yang dipanggil, dan resource lama yang perlu ditangani.

### B2. Deep-copy constructor - 35 menit
Pelajari `include/SimpleString.h` dan `src/SimpleString.cpp`. Tambahkan test sendiri yang membuktikan value equality tetapi address inequality.

### B3. Copy assignment - 30 menit
Trace `operator=` baris demi baris. Jelaskan fungsi self-assignment check dan alasan allocation dilakukan sebelum `delete[] data_`.

# BLOK C - Shallow Copy dan Rule of Three - 80 menit

### C1. Code review tanpa menjalankan - 25 menit
Baca `starter/shallow_copy_bug.cpp`. Tandai ownership bug dan prediksi titik double deletion. Jangan menjalankan sebelum memahami risikonya.

### C2. Rule of Three - 25 menit
Baca `notes/rule_of_three.md` dan `notes/shallow_vs_deep.md`. Buat satu diagram ownership untuk `SimpleString a` dan `SimpleString b(a)`.

### C3. Self-check - 30 menit
Kerjakan pertanyaan pada Bagian 4 sebelum membuka jawaban.

# BLOK D - Challenge IntBuffer - 90 menit

### D1. Implementasi - 55 menit
Lengkapi `exercises/int_buffer_challenge.cpp` dengan destructor, deep-copy constructor, dan copy assignment.

### D2. Test - 20 menit
Uji size 0, size 5, copy construction, assignment, dan self-assignment. Bandingkan dengan `solutions/` setelah selesai.

### D3. Sanitizer optional - 15 menit
Bila toolchain mendukung:

```bash
make asan
./build/pbo301_p3_asan
```

# BLOK E - Integrasi, Reflection, dan Verification - 80 menit

### E1. Build & test - 25 menit

```bash
make clean
make
make test
```

### E2. CMake - 20 menit

```bash
cmake -S . -B build-cmake
cmake --build build-cmake
ctest --test-dir build-cmake --output-on-failure
```

### E3. Reflection - 20 menit
Isi `reflection.md` dengan evidence dari program Anda, bukan definisi teori generik.

### E4. AI declaration + Git - 15 menit
Isi `AI_DECLARATION.md`, lalu commit perubahan dengan pesan yang menjelaskan checkpoint.

## 3. Perintah Build dan Run

### Make

```bash
make
./build/pbo301_p3
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
g++ -std=c++17 -Wall -Wextra -pedantic   src/main.cpp src/SimpleString.cpp -Iinclude -o pbo301_p3
./pbo301_p3
```

## 4. Self-check

1. Apa beda default constructor dan parameterized constructor?
2. Mengapa initializer list bukan sekadar gaya penulisan?
3. Apa manfaat delegating constructor?
4. Apa yang dicegah oleh `explicit`?
5. Apa beda `T b = a;` dan `b = a;`?
6. Mengapa copy constructor lazimnya menerima `const T&`?
7. Mengapa shallow copy berbahaya untuk owning pointer?
8. Apa tiga special member pada Rule of Three?
9. Mengapa `operator=` memerlukan perhatian pada self-assignment?
10. Kapan lebih tepat menggunakan `= delete` daripada deep copy?

## 5. Jawaban dan Pembahasan

1. Default dapat dipanggil tanpa argument; parameterized membangun object dari argument yang diberikan.
2. Member sudah dibangun sebelum constructor body; initializer list menentukan construction langsung dan wajib untuk reference/const member.
3. Mengurangi duplikasi initialization dengan menjadikan satu constructor sumber logic utama.
4. Konversi implisit melalui constructor satu argument yang tidak dimaksudkan.
5. Yang pertama copy construction object baru; yang kedua copy assignment pada object yang sudah hidup.
6. Menghindari copy parameter dan mengizinkan source const tanpa modifikasi.
7. Dua object dapat memiliki alamat resource sama dan keduanya mencoba melepasnya.
8. Destructor, copy constructor, copy assignment operator.
9. Source dan target dapat object yang sama; implementasi naif dapat menghapus resource sebelum menyalinnya.
10. Saat copy tidak memiliki makna domain yang benar atau resource harus single-owner.

## 6. Reflection

Isi `reflection.md`. Gunakan bukti address, output lifecycle, test, atau sanitizer bila tersedia.

## 7. Definition of Done

- [ ] Build C++17 tanpa warning pada target utama.
- [ ] `make test` lulus.
- [ ] CMake + CTest lulus.
- [ ] Copy `SimpleString` memiliki isi sama tetapi alamat resource berbeda.
- [ ] Self-assignment aman.
- [ ] `IntBuffer` challenge selesai sebelum melihat solution.
- [ ] Reflection dan AI declaration terisi.
- [ ] Minimal lima commit bermakna.

## 8. Referensi

- Deitel & Deitel, *C++ How to Program*, Chapter 10.
- Bjarne Stroustrup, *The C++ Programming Language*, Chapters 16-17.
- Lippman, Lajoie, Moo, *C++ Primer*, Chapter 13.
- Scott Meyers, *Effective C++*, Items 5-6 dan 12.
- C++ Rule of Three/Five/Zero: https://en.cppreference.com/w/cpp/language/rule_of_three
- Constructors: https://en.cppreference.com/w/cpp/language/constructor
