# PBO301 - Pertemuan 12
## Templates Bagian 1 - Function Template dan Class Template

![Logo Universitas Pertahanan Republik Indonesia](PBO301_Pertemuan12_GitHub/assets/logo_unhan.png)

**UNIVERSITAS PERTAHANAN REPUBLIK INDONESIA**  
**PROGRAM STUDI INFORMATIKA - FAKULTAS TEKNIK DAN TEKNOLOGI PERTAHANAN**

## 1. Sub-CPMK dan Capaian Belajar
**Sub-CPMK-5.1** - Mampu mengimplementasikan function template dan class template dasar.

Capaian: function template, argument deduction, explicit template argument, class template, type/non-type/default parameter, instantiation, dan model header-only.

## 2. Rencana Belajar Mandiri 420 Menit
# BLOK A - 80 menit - Function Template
Baca `notes/concepts.md`, refactor overload ke `maxValue<T>`, lalu kerjakan `exercises/ex1_function_template.cpp`.

# BLOK B - 80 menit - Class Template
Bangun `Pair<T1,T2>` dan uji beberapa kombinasi tipe.

# BLOK C - 80 menit - Non-type Parameter
Pelajari `FixedArray<T,N>` dan bedakan parameter tipe dengan nilai compile-time.

# BLOK D - 80 menit - Stack dan Template Instantiation
Implementasikan `Stack<T,Capacity>`; uji pada `int`, `std::string`, dan `Soldier`.

# BLOK E - Integrasi / Challenge - 100 menit
Bangun **Mission Readiness Toolkit** pada `src/main.cpp`, tambah test, dan jelaskan header visibility pada reflection.

## 3. Perintah Build dan Run
```bash
make
./build/pbo301_p12
make test

cmake -S . -B build-cmake
cmake --build build-cmake
ctest --test-dir build-cmake --output-on-failure
```
Build baseline: `-std=c++17 -Wall -Wextra -pedantic`.

## 4. Self-check
1. Apa beda `template<typename T>` dengan overload biasa?
2. Mengapa `maxValue(3,4.5)` bermasalah?
3. Apa yang dimaksud template instantiation?
4. Mengapa definition template biasanya berada di header?
5. Apa beda `T` dan `std::size_t N` sebagai template parameter?

## 5. Jawaban dan Pembahasan
Lihat `solutions/` dan `notes/concepts.md` setelah mengerjakan starter/exercises sendiri.

## 6. Reflection
Isi `reflection.md` dengan bukti build/test dan jawaban desain.

## 7. Definition of Done
- `make test` lulus.
- `ctest` lulus.
- Tidak ada warning.
- Minimal tiga class-template instantiation dan tiga function-template calls.
- Reflection dan AI declaration terisi.

## 8. Referensi
- Deitel, *C++ How to Program*, Ch.18.
- Stroustrup, *The C++ Programming Language*, Ch.23.
- Lippman et al., *C++ Primer*, Ch.16.
- Vandevoorde et al., *C++ Templates*, Ch.1-2.
- cppreference: C++ templates.
