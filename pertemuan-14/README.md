<p align="center"><img src="../assets/logo_unhan.png" width="130" alt="Logo Universitas Pertahanan Republik Indonesia"></p>

# PBO301 - Pertemuan 14
## Exception Handling Lanjut dan Exception Safety

## 1. Sub-CPMK dan Capaian Belajar
**Sub-CPMK-6.1:** Mampu merancang exception hierarchy dan menerapkan exception safety.  
**Sub-CPMK-4.1:** Mampu membuat class diagram lengkap dengan relasi generalization.

Setelah menyelesaikan modul ini, mahasiswa mampu merancang exception hierarchy, menerapkan RAII dan exception safety guarantees, menggunakan `noexcept` secara jujur, menguji state setelah failure, dan memodelkan hierarchy exception pada UML.

## 2. Rencana Belajar Mandiri 420 Menit

# BLOK A - Exception Hierarchy dan Catch Policy - 80 menit
1. Baca `notes/references.md` bagian exception hierarchy (20 menit).
2. Pelajari `include/exceptions.hpp` dan gambar `uml/exception_hierarchy.puml` (20 menit).
3. Kerjakan Exercise A pada `exercises/exercises.md` (25 menit).
4. Self-check A (15 menit).

# BLOK B - Stack Unwinding dan RAII - 80 menit
1. Jalankan baseline program dan amati destructor trace (20 menit).
2. Implementasikan RAII guard pada starter (30 menit).
3. Tambahkan dua failure scenario deterministik (20 menit).
4. Catat temuan pada `reflection.md` (10 menit).

# BLOK C - Exception Safety Guarantees - 80 menit
1. Bandingkan basic vs strong vs no-throw guarantee (20 menit).
2. Pelajari `replaceSnapshot()` pada `src/inventory.cpp` (20 menit).
3. Kerjakan Exercise C: candidate + swap (25 menit).
4. Tambahkan regression test state-before == state-after saat gagal (15 menit).

# BLOK D - noexcept, Boundaries, dan UML - 80 menit
1. Audit `noexcept` pada API (20 menit).
2. Kerjakan Exercise D tentang rethrow dan error translation (20 menit).
3. Lengkapi UML exception hierarchy dengan std::runtime_error (20 menit).
4. Review anti-pattern dan self-check (20 menit).

# BLOK E - Integrasi / Challenge Reliable Inventory - 100 menit
Bangun versi lengkap `Inventory` yang menyediakan `add`, `stock`, `issue`, dan `replaceSnapshot`. Tambahkan `AccessDeniedException`, strong guarantee, test success/failure, dan satu boundary yang menerjemahkan exception domain menjadi message aplikasi. Dokumentasikan guarantee tiap operasi di `notes/design_contract.md`.

**Total: 80 + 80 + 80 + 80 + 100 = 420 menit.**

## 3. Perintah Build dan Run
### Make
```bash
make clean
make
make test
./p14_demo
```

### CMake
```bash
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
./build/p14_demo
```

## 4. Self-check
1. Mengapa catch subtype harus ditulis sebelum catch base class?
2. Apa yang terjadi pada object lokal saat stack unwinding?
3. Bedakan basic, strong, dan no-throw guarantee.
4. Mengapa destructor sebaiknya tidak melempar?
5. Apa beda `throw;` dan `throw e;`?
6. Kapan `noexcept` menjadi berbahaya?

## 5. Jawaban dan Pembahasan
1. Base handler dapat menangkap seluruh subtype sehingga handler spesifik tidak pernah tercapai.
2. Destructor object yang sudah selesai dikonstruksi dipanggil ketika scope ditinggalkan.
3. Basic: valid/no leak; strong: gagal = state observable tidak berubah; no-throw: tidak membiarkan exception keluar.
4. Exception kedua saat unwinding dapat menyebabkan `std::terminate()`.
5. `throw;` meneruskan exception aktif; `throw e;` melempar expression baru.
6. Saat body dapat melempar dan tidak menangkapnya, kontrak noexcept menyebabkan terminate.

## 6. Reflection
Isi `reflection.md` setelah challenge. Fokus pada invariant, commit point, cleanup, dan recovery policy.

## 7. Definition of Done
- Build C++17 dengan `-Wall -Wextra -pedantic`.
- `make test` atau CTest lulus.
- Exception hierarchy memiliki minimal tiga subtype domain.
- Strong guarantee dibuktikan oleh test state-before/state-after.
- Tidak ada raw owning pointer.
- UML tersedia di `uml/exception_hierarchy.puml`.
- `reflection.md` dan `AI_DECLARATION.md` terisi.

## 8. Referensi
- C++ exceptions: https://en.cppreference.com/w/cpp/language/exceptions
- std::exception: https://en.cppreference.com/w/cpp/error/exception
- noexcept: https://en.cppreference.com/w/cpp/language/noexcept_spec
- C++ Core Guidelines: https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines
- PlantUML Class Diagram: https://plantuml.com/class-diagram
