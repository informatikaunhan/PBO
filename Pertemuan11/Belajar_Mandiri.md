# PBO301 - Pertemuan 11
## Operator Overloading

![Logo Universitas Pertahanan Republik Indonesia](PBO301_Pertemuan11_GitHub/assets/logo_unhan.png)

**UNIVERSITAS PERTAHANAN REPUBLIK INDONESIA**  
**PROGRAM STUDI INFORMATIKA - FAKULTAS TEKNIK DAN TEKNOLOGI PERTAHANAN**

## 1. Sub-CPMK dan Capaian Belajar

**Sub-CPMK-2.8:** mampu melakukan operator overloading dengan benar dan idiomatik.

Setelah modul ini Anda mampu:
1. memilih member vs non-member operator;
2. mengimplementasikan arithmetic, comparison, stream, assignment, subscript, increment/decrement, dan function-call operator;
3. menjaga const correctness, chaining, dan konsistensi semantik;
4. menguji operator sebagai kontrak value type, bukan sekadar syntax sugar.

Baseline: **C++17**, `-std=c++17 -Wall -Wextra -pedantic`.

## 2. Rencana Belajar Mandiri 420 Menit

# BLOK A - Aturan dan Member vs Non-member - 70 menit

### A1. Recall - 20 menit
Review function overloading, copy assignment P3, const reference, friend, dan value semantics.

### A2. Rule matrix - 30 menit
Baca `notes/operator_matrix.md`; klasifikasikan `=`, `[]`, `()`, `<<`, `+`, `==` sebagai member/non-member beserta alasan.

### A3. Self-check A - 20 menit
Jawab Self-check 1-3 sebelum membuka pembahasan.

# BLOK B - Arithmetic dan Comparison Vector3D - 90 menit

### B1. Arithmetic - 45 menit
Pelajari `include/Vector3D.hpp` dan `src/Vector3D.cpp`. Telusuri pola `+=` -> `+` serta simetri scalar multiplication.

### B2. Equality - 20 menit
Analisis kontrak `==` dan `!=`; jelaskan mengapa `almostEqual()` tetap named function.

### B3. Exercise - 25 menit
Lengkapi `exercises/vector_ops_exercise.cpp` tanpa mengubah operand pada operator `+`.

# BLOK C - Stream dan Subscript - 80 menit

### C1. Stream - 30 menit
Uji `operator<<` memakai `std::ostringstream`; buktikan return `std::ostream&` mendukung chaining.

### C2. Subscript - 30 menit
Tambahkan test const/non-const access dan exception untuk index di luar 0..2.

### C3. Review - 20 menit
Buat tabel: operator, mutating?, return type, const?, member/non-member.

# BLOK D - Prefix/Postfix, Functor, SimpleStringLite - 80 menit

### D1. Counter - 25 menit
Bandingkan `++x` dan `x++`; catat kapan copy terjadi.

### D2. Functor - 20 menit
Gunakan `ReadinessAtLeast` sebagai predicate stateful.

### D3. SimpleStringLite - 35 menit
Audit `==`, `[]`, `<<`, dan copy assignment. Pastikan equality membandingkan content dan tidak ada shallow-copy regression.

# BLOK E - Integrasi / Challenge - 100 menit

### E1. Mission Vector Toolkit - 55 menit
Lengkapi `exercises/mission_vector.cpp`: akumulasi displacement, scaling, stream output, indexing, dan predicate threshold.

### E2. Test & audit - 25 menit
Jalankan Make + CMake/CTest. Tambah minimal 5 test edge case.

### E3. Reflection + AI declaration - 20 menit
Isi `reflection.md` dan `AI_DECLARATION.md`.

## 3. Perintah Build dan Run

```bash
make
./build/pbo301_p11
make test
```

CMake:

```bash
cmake -S . -B build-cmake
cmake --build build-cmake
ctest --test-dir build-cmake --output-on-failure
```

## 4. Self-check

1. Apa tiga hal yang tidak dapat diubah oleh operator overloading?
2. Kapan operator sebaiknya member dan kapan non-member?
3. Mengapa `2.0 * v` memerlukan perhatian khusus?
4. Mengapa `operator<<` mengembalikan `std::ostream&`?
5. Mengapa `operator[]` idealnya punya versi const dan non-const?
6. Apa perbedaan signature prefix dan postfix `++`?
7. Mengapa postfix biasanya lebih mahal?
8. Apa fungsi `operator()` pada functor?
9. Mengapa `operator==` pada string value type tidak boleh membandingkan alamat buffer?
10. Kapan named function lebih baik daripada operator overload?

## 5. Jawaban dan Pembahasan

1. Precedence, associativity, dan jumlah operand/arity.
2. Member untuk operator yang wajib member atau memutasi lhs; non-member untuk simetri dan stream.
3. Jika `*` hanya member Vector3D, operand kiri harus Vector3D; scalar-left memerlukan non-member overload.
4. Agar chaining stream tetap bekerja.
5. Object mutable dapat memberi `T&`; const object hanya boleh memberi `const T&`.
6. Prefix `operator++()`; postfix `operator++(int)` dengan dummy int.
7. Postfix perlu menyimpan dan mengembalikan old value.
8. Membuat object dapat dipanggil seperti function sambil membawa state.
9. Alamat buffer adalah detail implementation, bukan nilai logis string.
10. Saat makna operator akan ambigu/mengejutkan; contoh `dot()` lebih jelas daripada memaksa operator tertentu.

## 6. Reflection

Isi `reflection.md` dengan satu operator yang menurut Anda layak di-overload dan satu yang sebaiknya tetap named function pada domain pilihan Anda.

## 7. Definition of Done

- [ ] `make` berhasil tanpa warning.
- [ ] `make test` lulus.
- [ ] CMake build + CTest lulus.
- [ ] Vector3D mendukung arithmetic, equality, stream, dan subscript.
- [ ] Scalar multiplication simetris.
- [ ] Counter prefix/postfix benar.
- [ ] Functor stateful bekerja.
- [ ] SimpleStringLite tidak mengalami shallow-copy regression.
- [ ] Reflection dan AI declaration terisi.

## 8. Referensi

- Deitel & Deitel, *C++ How to Program*, Ch. 10.
- Stroustrup, *The C++ Programming Language*, Ch. 18.
- Lippman, Lajoie, Moo, *C++ Primer*, Ch. 14.
- Meyers, *Effective C++*, Item 24.
- C++ Reference - Operator overloading.
- Silabus PBO301 - Pertemuan 11.
