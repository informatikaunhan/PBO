# PBO301 - Pertemuan 7
## Polymorphism dan Virtual Functions

![Logo Universitas Pertahanan Republik Indonesia](PBO301_Pertemuan07_GitHub/assets/logo_unhan.png)

**UNIVERSITAS PERTAHANAN REPUBLIK INDONESIA**  
**PROGRAM STUDI INFORMATIKA - FAKULTAS TEKNIK DAN TEKNOLOGI PERTAHANAN**

## 1. Sub-CPMK dan Capaian Belajar

**Sub-CPMK-2.5** - Mampu menerapkan polymorphism melalui virtual functions dan dynamic binding.

Setelah menyelesaikan modul ini, Anda dapat membedakan static/dynamic polymorphism, memakai `virtual`/`override`/`final`, menjelaskan vtable/vptr secara konseptual, membuat destructor base virtual, menghindari object slicing, memakai `dynamic_cast` secara aman, dan memproses koleksi object melalui base pointer/reference.

## 2. Rencana Belajar Mandiri 420 Menit

# BLOK A - Mental Model Polymorphism - 70 menit
1. Baca `notes/polymorphism_comparison.md` (20 menit).
2. Jalankan `starter/overload_demo.cpp`; jelaskan mengapa keputusan overload terjadi compile-time (20 menit).
3. Kerjakan `exercises/virtual_dispatch.cpp`; bandingkan call langsung dan melalui `const Unit&` (30 menit).

# BLOK B - Virtual Dispatch dan vtable - 80 menit
1. Baca `notes/vtable_concept.md` (20 menit).
2. Gambar sendiri alur: base pointer -> vptr -> vtable -> override (20 menit).
3. Eksperimen signature mismatch dengan `override` (20 menit).
4. Tulis ringkasan beda overriding, overloading, hiding (20 menit).

# BLOK C - Lifetime dan Slicing - 80 menit
1. Jalankan `starter/slicing_demo.cpp` (20 menit).
2. Ubah function by-value menjadi by-reference dan catat perubahan output (20 menit).
3. Buat trace destructor virtual yang deterministik (25 menit).
4. Jawab: mengapa base class polimorfik butuh destructor virtual? (15 menit).

# BLOK D - dynamic_cast dan Koleksi Polimorfik - 80 menit
1. Kerjakan `exercises/dynamic_cast_lab.cpp` (25 menit).
2. Build `src/main.cpp` dan telusuri dispatch `Shape` (25 menit).
3. Buat UML pada `uml/shape_polymorphism.puml` dan cocokkan dengan source (30 menit).

# BLOK E - Integrasi / Challenge - 110 menit
1. Kerjakan `exercises/shape_registry.cpp` tanpa switch tipe (45 menit).
2. Tambahkan satu subtype baru tanpa mengubah loop client (25 menit).
3. Jalankan `make test` dan CTest (20 menit).
4. Isi `reflection.md` dan `AI_DECLARATION.md` (20 menit).

Total: **420 menit**.

## 3. Perintah Build dan Run

```bash
make clean
make
./build/pbo301_p7
make test
```

CMake:

```bash
cmake -S . -B build-cmake
cmake --build build-cmake
ctest --test-dir build-cmake --output-on-failure
```

## 4. Self-check

1. Apa beda static type dan dynamic type?
2. Apa beda overloading dan overriding?
3. Mengapa `override` membantu reliability?
4. Apa fungsi virtual destructor?
5. Apa itu object slicing?
6. Kapan `dynamic_cast<Derived*>(p)` menghasilkan `nullptr`?
7. Mengapa vtable tidak boleh dianggap layout portable standar C++?
8. Mengapa `std::vector<Base>` tidak cocok untuk object polimorfik derived?

## 5. Jawaban dan Pembahasan

1. Static type berasal dari deklarasi handle; dynamic type adalah object aktual.
2. Overloading dipilih dari signature saat compile-time; overriding mengganti virtual method base untuk dispatch runtime.
3. Compiler memeriksa signature dan menolak pseudo-override yang tidak cocok.
4. Menjamin destruction chain derived -> base saat delete melalui base pointer.
5. Copy by-value derived ke base yang membuang bagian derived dan dynamic identity.
6. Ketika dynamic type object bukan `Derived` atau turunannya.
7. Standar C++ menentukan semantics, bukan layout ABI vtable/vptr.
8. Elemen disimpan by-value sehingga derived object akan slice; gunakan handle/pointer/reference dengan lifetime/ownership jelas.

## 6. Reflection

Isi `reflection.md` dengan bukti dari eksperimen Anda sendiri.

## 7. Definition of Done

- [ ] Build C++17 bersih dengan `-Wall -Wextra -pedantic`.
- [ ] `make test` lulus.
- [ ] CTest lulus.
- [ ] Seluruh override memakai `override`.
- [ ] Base polimorfik memiliki destructor virtual.
- [ ] Tidak ada object slicing pada solusi final.
- [ ] `dynamic_cast` hanya dipakai pada checkpoint yang memang memerlukan runtime type check.
- [ ] UML sinkron dengan source.
- [ ] Reflection dan AI declaration selesai.

## 8. Referensi

- Deitel & Deitel, *C++ How to Program*, bab polymorphism/virtual functions sesuai RPS.
- Stroustrup, class hierarchy dan virtual functions.
- Lippman et al., *C++ Primer*, OOP chapter.
- Meyers, *Effective C++*, Item 7.
- cppreference: Virtual functions dan `dynamic_cast`.
- Compiler Explorer (Godbolt) untuk pengamatan generated code secara opsional.

> Kalender aktual: Pertemuan 8 adalah UTS. Setelah UTS, Pertemuan 9 melanjutkan Abstraction Bagian 1 - Abstract Class dan Pure Virtual Function.
