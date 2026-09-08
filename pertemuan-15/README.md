# PBO301 - Pertemuan 15
## Interaksi Obyek - Sequence Diagram, Use Case, dan Studi Kasus Terintegrasi

<p align="center"><img src="../assets/logo_unhan.png" width="130" alt="Logo Universitas Pertahanan Republik Indonesia"></p>

## 1. Sub-CPMK dan Capaian Belajar
**Sub-CPMK-4.3, Sub-CPMK-4.4, Sub-CPMK-7.1** - Mahasiswa mampu membuat sequence diagram, use case diagram, dan mengintegrasikan seluruh sifat OOP dalam satu aplikasi C++.

Capaian: actor/system boundary/include/extend/generalization; lifeline/message/activation/alt/opt/loop; traceability use case -> class -> sequence -> code; integrasi encapsulation, inheritance, polymorphism, abstraction, template, operator overloading, composition, dan exception handling.

## 2. Rencana Belajar Mandiri 420 Menit
# BLOK A - 80 menit - Use Case dan Functional Requirement
Baca `notes/concepts.md`. Lengkapi `uml/use_case_inventory.puml`, lalu audit apakah setiap use case menyatakan goal aktor, bukan tombol/UI.

# BLOK B - 80 menit - Sequence Diagram dan Object Collaboration
Pelajari lifeline, activation, synchronous message, return, alt/opt/loop. Lengkapi `uml/sequence_issue_item.puml` dan `uml/sequence_report.puml`.

# BLOK C - 80 menit - Traceability UML ke C++
Cocokkan setiap message utama dengan method di `include/`. Kerjakan `exercises/ex1_traceability.cpp` dan isi `notes/traceability.md`.

# BLOK D - 80 menit - Integrasi Seluruh Sifat OOP
Audit `WeaponRecord`, `Catalog<T>`, `InventoryService`, `ReportPolicy`, `AuditLog`, dan exception hierarchy. Kerjakan `exercises/ex2_integrated_oop.cpp`.

# BLOK E - Integrasi / Challenge - 100 menit
Bangun **Traceable Weapon Inventory System** pada `exercises/ex3_inventory_challenge.cpp`: register, issue, return, polymorphic report, audit, failure path, dan bukti diagram-kode konsisten.

## 3. Perintah Build dan Run
```bash
make
./build/pbo301_p15
make test

cmake -S . -B build-cmake
cmake --build build-cmake
ctest --test-dir build-cmake --output-on-failure
```
Baseline: `-std=c++17 -Wall -Wextra -pedantic`.

PlantUML opsional lokal:
```bash
java -jar plantuml.jar uml/*.puml
```

## 4. Self-check
1. Apa beda tujuan use case dan sequence diagram?
2. Kapan `<<include>>` dipakai?
3. Kapan `<<extend>>` dipakai?
4. Apa hubungan lifeline dengan object/class?
5. Mengapa message sequence perlu cocok dengan operasi class?
6. Kapan memakai `alt`, `opt`, dan `loop`?
7. Bagaimana empat pilar OOP muncul pada mini-application?
8. Apa bukti bahwa UML dan code konsisten?

## 5. Jawaban dan Pembahasan
Lihat `solutions/` dan `notes/concepts.md` setelah mengerjakan starter/exercises sendiri.

## 6. Reflection
Isi `reflection.md` dengan minimal satu perubahan desain yang Anda lakukan setelah sequence diagram menunjukkan responsibility yang kurang tepat.

## 7. Definition of Done
- `make test` lulus dan tidak ada warning.
- CTest lulus.
- Use case diagram memuat actor, boundary, include, extend, dan generalization.
- Sequence Issue memakai `alt`; Sequence Report memakai `loop`.
- Traceability matrix lengkap.
- Minimal dua implementasi `ReportPolicy` terbukti bekerja.
- Failure path `ItemNotFound` / `ItemUnavailable` teruji.
- Reflection dan AI declaration terisi.

## 8. Referensi
- RPS/Silabus PBO301 - Pertemuan 15, Sub-CPMK-4.3, 4.4, 7.1.
- Fowler, *UML Distilled* - Use Case dan Sequence Diagram.
- Booch, Rumbaugh, Jacobson - UML interaction modeling.
- PlantUML documentation - use case dan sequence syntax.
- cppreference - C++17 language/library reference.
