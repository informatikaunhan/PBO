<p align="center"><img src="../assets/logo_unhan.png" width="130" alt="Logo Universitas Pertahanan Republik Indonesia"></p>

**UNIVERSITAS PERTAHANAN REPUBLIK INDONESIA**  
**PROGRAM STUDI INFORMATIKA - FAKULTAS TEKNIK DAN TEKNOLOGI PERTAHANAN**

# PBO301 - Pertemuan 4
## Encapsulation, Access Control, dan Visibility di UML

## 1. Sub-CPMK dan Capaian Belajar

**Sub-CPMK-2.3** - Mampu menerapkan encapsulation menggunakan access specifier dan const correctness.  
**Sub-CPMK-4.1** - Mampu membuat class diagram lengkap dengan atribut, method, visibility, dan relasi.

Setelah modul ini, Anda dapat melindungi invariant class, memilih `public`/`protected`/`private`, menerapkan const correctness, mengevaluasi penggunaan `friend`, dan menjaga UML visibility sinkron dengan C++.

## 2. Rencana Belajar Mandiri 420 Menit

# BLOK A - Encapsulation dan Information Hiding - 75 menit
1. Baca `notes/encapsulation.md` - 25 menit.
2. Jalankan `starter/broken_bank_account.cpp` dan identifikasi minimal 3 boundary leak - 20 menit.
3. Tulis invariant yang seharusnya dijaga class - 15 menit.
4. Jawab self-check 1-3 tanpa melihat pembahasan - 15 menit.

# BLOK B - Access Control dan API Design - 85 menit
1. Pelajari `notes/access_control.md` - 25 menit.
2. Kerjakan `exercises/refactor_bank_account.cpp` - 35 menit.
3. Bandingkan dengan `solutions/refactor_bank_account.cpp` - 10 menit.
4. Tulis dua alasan mengapa setter universal bukan tujuan encapsulation - 15 menit.

# BLOK C - Const Correctness - 90 menit
1. Baca `notes/const_correctness.md` - 25 menit.
2. Kerjakan `exercises/const_audit.cpp` - 30 menit.
3. Buat satu `const BankAccount` dan verifikasi operasi mana yang compile - 15 menit.
4. Audit parameter `const T&`, return `const T&`, dan logical constness - 20 menit.

# BLOK D - UML Visibility dan Friend - 80 menit
1. Pelajari `uml/bank_account.puml` - 20 menit.
2. Sinkronkan diagram dengan `include/BankAccount.h` - 20 menit.
3. Baca `notes/friend_and_mutable.md` - 20 menit.
4. Tulis keputusan: kapan friend dapat diterima dan kapan harus ditolak - 20 menit.

# BLOK E - Integrasi / Challenge - 90 menit
1. Kerjakan `exercises/mission_budget_challenge.cpp` - 45 menit.
2. Tambahkan minimal 5 test invariant - 20 menit.
3. Jalankan build + test - 10 menit.
4. Isi `reflection.md` dan `AI_DECLARATION.md` - 15 menit.

## 3. Perintah Build dan Run

```bash
make clean
make
make test
./build/pbo301_p4
```

atau:

```bash
cmake -S . -B build-cmake
cmake --build build-cmake
ctest --test-dir build-cmake --output-on-failure
```

## 4. Self-check
1. Apa perbedaan encapsulation dan information hiding?
2. Mengapa `balance` sebaiknya private?
3. Kapan `protected` dapat diakses?
4. Apa arti `double balance() const`?
5. Mengapa parameter read-only object besar sering memakai `const T&`?
6. Kapan `mutable` masuk akal?
7. Apa risiko `friend class`?
8. Apa arti `+`, `-`, `#`, dan `~` di UML?
9. Mengapa setter universal dapat menghasilkan anemic model?
10. Bagaimana membuktikan invariant dengan test?

## 5. Jawaban dan Pembahasan
1. Encapsulation membungkus state+behavior; information hiding menyembunyikan detail implementasi.
2. Agar perubahan saldo hanya terjadi melalui operasi tervalidasi.
3. Dari class itu sendiri dan derived class.
4. Method tidak memodifikasi logical state object.
5. Menghindari copy sekaligus melarang mutation melalui reference.
6. Untuk cache/counter yang tidak mengubah logical state.
7. Coupling besar dan boundary private melemah.
8. Public, private, protected, package visibility.
9. Client tetap bebas mengatur state field demi field tanpa semantik domain.
10. Uji operasi valid/invalid dan assert invariant tetap benar.

## 6. Reflection
Isi `reflection.md` dengan keputusan desain spesifik terhadap pekerjaan Anda.

## 7. Definition of Done
- [ ] `make` sukses dengan C++17 dan warning flags.
- [ ] `make test` lulus.
- [ ] Tidak ada public mutable state pada class final.
- [ ] Getter read-only ditandai `const`.
- [ ] Mutation method menjaga invariant.
- [ ] UML + / - / # konsisten dengan header.
- [ ] `friend` dipakai hanya bila ada justification.
- [ ] Reflection dan AI declaration terisi.

## 8. Referensi
- Deitel & Deitel, *C++ How to Program*, Ch. 9.
- Bjarne Stroustrup, *The C++ Programming Language*, Ch. 16.
- Lippman, Lajoie, Moo, *C++ Primer*, Ch. 7.
- Scott Meyers, *Effective C++*, Item 3 dan 22.
- Martin Fowler, *UML Distilled*, Ch. 3.
