# PBO301 - Pertemuan 10
## Abstraction Bagian 2 - Interface, Realization, dan Desain Polimorfik

![Logo Universitas Pertahanan Republik Indonesia](PBO301_Pertemuan10_GitHub/assets/logo_unhan.png)

**UNIVERSITAS PERTAHANAN REPUBLIK INDONESIA**  
**PROGRAM STUDI INFORMATIKA - FAKULTAS TEKNIK DAN TEKNOLOGI PERTAHANAN**

## 1. Sub-CPMK dan Capaian Belajar

**Sub-CPMK-2.7** - Mampu merancang interface dan menerapkan desain polimorfik berbasis abstraksi.  
**Sub-CPMK-4.1** - Mampu membuat class diagram lengkap dengan atribut, method, visibility, dan relasi.

Setelah modul ini Anda dapat:

1. mendefinisikan interface C++ menggunakan pure virtual functions dan virtual destructor;
2. membedakan interface dengan abstract class yang membawa state/partial implementation;
3. merealisasikan beberapa interface pada satu concrete class;
4. membuat client yang bergantung pada interface, bukan concrete implementation;
5. menghubungkan konsep ADT dengan contract interface;
6. menggambar UML interface dan realization secara benar.

Baseline: **C++17**, `-std=c++17 -Wall -Wextra -pedantic`.

## 2. Rencana Belajar Mandiri 420 Menit

# BLOK A - Dari Abstract Class ke Interface - 70 menit

### A1. Recall P9 - 20 menit
Tulis ulang arti pure virtual, abstract class, virtual destructor, dan polymorphic reference.

### A2. Interface rules - 30 menit
Baca `notes/interface_notes.md`. Bandingkan abstract class stateful dengan interface yang tidak membawa state domain.

### A3. Self-check A - 20 menit
Jawab Self-check nomor 1-3 sebelum melihat pembahasan.

# BLOK B - Multiple Interface - 90 menit

### B1. Implement SoldierRecord - 45 menit
Pelajari `include/Interfaces.h` dan `include/SoldierRecord.h`, lalu jalankan program utama.

### B2. Capability view - 20 menit
Buat reference `const IPersistable&`, `const ISerializable&`, dan `const ILoggable&` ke object SoldierRecord yang sama.

### B3. Exercise - 25 menit
Lengkapi `exercises/mission_report.cpp` tanpa menambah superclass domain baru.

# BLOK C - Programming to an Interface - 80 menit

### C1. Client functions - 30 menit
Analisis `backup()` dan `exportText()`. Tandai dependency yang sudah tidak concrete-coupled.

### C2. WeaponInventory - 25 menit
Bandingkan implementation SoldierRecord dan WeaponInventory yang memenuhi contract sama dengan state berbeda.

### C3. Substitution tests - 25 menit
Jalankan `make test`; tambah satu fake ISerializable untuk menguji client tanpa file I/O.

# BLOK D - UML Interface dan Realization - 80 menit

### D1. Render diagram - 25 menit
Render `uml/interface_realization.puml`.

### D2. Generalization vs realization - 25 menit
Tulis satu paragraf perbedaan semantik dan visual kedua relation.

### D3. Lollipop notation - 30 menit
Buat versi kedua diagram menggunakan interface/lollipop notation sesuai kemampuan PlantUML yang tersedia.

# BLOK E - Integrasi / Challenge - 100 menit

### E1. Mission Archive Pipeline - 55 menit
Lengkapi `exercises/mission_archive.cpp`: export object heterogen melalui ISerializable dan backup melalui IPersistable.

### E2. Test & audit - 25 menit
Pastikan tidak ada `dynamic_cast`/type-switch pada behavior utama dan semua test lulus.

### E3. Reflection + AI declaration - 20 menit
Isi `reflection.md` dan `AI_DECLARATION.md`.

## 3. Perintah Build dan Run

```bash
make
./build/pbo301_p10
make test
```

CMake:

```bash
cmake -S . -B build-cmake
cmake --build build-cmake
ctest --test-dir build-cmake --output-on-failure
```

## 4. Self-check

1. Bagaimana C++ memodelkan interface tanpa keyword `interface`?
2. Apa perbedaan interface dan abstract class biasa pada pola pertemuan ini?
3. Mengapa interface perlu virtual destructor?
4. Mengapa multiple inheritance dari interface tipis relatif aman?
5. Apa arti programming to an interface?
6. Bagaimana interface berhubungan dengan ADT?
7. Apa notasi UML untuk realization?
8. Apa beda realization dan generalization?
9. Mengapa fat interface meningkatkan coupling?
10. Kapan client sebaiknya menerima `const ISerializable&`?

## 5. Jawaban dan Pembahasan

1. Abstract base class berisi pure virtual functions dan virtual destructor.
2. Interface tidak membawa state domain dan seluruh operasi capability dibuat pure virtual; abstract class biasa dapat membawa state/partial implementation.
3. Agar destruction melalui pointer interface aman.
4. Tidak ada state base yang terduplikasi dan capability dapat orthogonal.
5. Client menyatakan dependency terhadap contract terkecil yang dibutuhkan, bukan concrete type.
6. Keduanya memisahkan operasi dari representasi; interface adalah mekanisme OOP untuk mengekspresikan contract tersebut.
7. Garis putus-putus dengan hollow triangle menuju interface.
8. Generalization solid dan berarti subtype/supertype; realization dashed dan berarti memenuhi contract interface.
9. Client dipaksa bergantung pada operasi yang tidak dibutuhkan.
10. Saat client hanya perlu serialization dan implementation dapat bervariasi.

## 6. Reflection

Isi `reflection.md` dengan contoh dependency yang berhasil Anda putus dari concrete class.

## 7. Definition of Done

- [ ] `make` berhasil tanpa warning.
- [ ] `make test` lulus.
- [ ] Interface terdeteksi abstract.
- [ ] SoldierRecord merealisasikan tiga interface.
- [ ] WeaponInventory merealisasikan capability yang relevan saja.
- [ ] Client utama tidak menggunakan type switch/dynamic_cast.
- [ ] UML realization benar dan sinkron dengan kode.
- [ ] Reflection dan AI declaration terisi.

## 8. Referensi

- Deitel & Deitel, *C++ How to Program*, Ch. 12.
- Stroustrup, *The C++ Programming Language*, Ch. 21.
- Lippman, Lajoie, Moo, *C++ Primer*, Ch. 15.
- Fowler, *UML Distilled*, Ch. 3 dan 5.
- PlantUML Class Diagram documentation.
- UML Diagrams - Interface and Realization.
- Silabus PBO301 - Pertemuan 10.
