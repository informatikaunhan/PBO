# PBO301 - Pertemuan 5
## Relasi Antar Obyek - Association, Aggregation, Composition + Object Diagram

![Logo Universitas Pertahanan Republik Indonesia](PBO301_Pertemuan05_GitHub/assets/logo_unhan.png)

**UNIVERSITAS PERTAHANAN REPUBLIK INDONESIA**  
**PROGRAM STUDI INFORMATIKA - FAKULTAS TEKNIK DAN TEKNOLOGI PERTAHANAN**

## 1. Sub-CPMK dan Capaian Belajar

**Sub-CPMK-3.1, Sub-CPMK-4.1, Sub-CPMK-4.2**

Setelah modul ini, Anda dapat membedakan association, aggregation, dan composition berdasarkan ownership/lifetime; menerapkannya pada C++17; memilih multiplicity/navigability; serta membuat Class Diagram dan Object Diagram yang konsisten dengan implementasi.

## 2. Rencana Belajar Mandiri 420 Menit

# BLOK A - Relationship Semantics - 75 menit
- 20 menit: baca `notes/relationship_matrix.md`.
- 25 menit: klasifikasikan 8 skenario pada `exercises/classify_relationships.md`.
- 30 menit: jalankan starter association dan tulis alasan ownership pada `reflection.md`.

# BLOK B - Aggregation dan Composition - 95 menit
- 25 menit: build `starter/aggregation_starter.cpp`.
- 35 menit: lengkapi `exercises/organization_exercise.cpp`.
- 20 menit: uji lifetime independen Soldier.
- 15 menit: jelaskan mengapa `Platoon` menyimpan `Squad` by value.

# BLOK C - Multiplicity, Navigability, UML - 90 menit
- 20 menit: baca `notes/multiplicity.md`.
- 25 menit: lengkapi `uml/organization_class.puml`.
- 25 menit: lengkapi `uml/organization_objects.puml`.
- 20 menit: reverse-check diagram terhadap header.

# BLOK D - Verification dan Refactor - 70 menit
- 20 menit: tambahkan test max 4 squad.
- 20 menit: audit seluruh pointer dan tulis owner/non-owner.
- 15 menit: ubah satu association menjadi bidirectional lalu jelaskan biaya sync.
- 15 menit: kembalikan ke desain minimal jika bidirectional tidak dibutuhkan.

# BLOK E - Integrasi / Challenge - 90 menit
- 20 menit: baca requirement Mission Organization Snapshot.
- 40 menit: implementasikan challenge di `exercises/mission_snapshot.cpp`.
- 15 menit: jalankan `make test` dan CTest.
- 15 menit: isi reflection dan AI declaration.

## 3. Perintah Build dan Run

```bash
make clean
make
./build/pbo301_p5
make test

cmake -S . -B build-cmake
cmake --build build-cmake
ctest --test-dir build-cmake --output-on-failure
```

## 4. Self-check
1. Apa pembeda utama aggregation dan composition?
2. Mengapa association tidak selalu disimpan sebagai member?
3. Apa arti hollow diamond?
4. Apa arti filled diamond?
5. Bagaimana `1..4` seharusnya memengaruhi code?
6. Mengapa `vector<T*>` tidak otomatis berarti aggregation?
7. Apa risiko association bidirectional?
8. Apa perbedaan Class Diagram dan Object Diagram?
9. Kapan object snapshot membantu debugging?
10. Siapa owner `Soldier` pada contoh repository ini?

## 5. Jawaban dan Pembahasan
1. Part aggregation hidup independen; part composition terikat lifetime whole.
2. Dependency dapat hanya diperlukan selama satu method call.
3. Aggregation/weak whole-part pada sisi whole.
4. Composition/strong ownership pada sisi whole.
5. Add/remove harus menjaga jumlah dalam range yang diizinkan.
6. Pointer hanya representation; ownership adalah contract.
7. Coupling dan konsistensi dua arah.
8. Class Diagram = aturan/type; Object Diagram = snapshot instance konkret.
9. Untuk memeriksa link, multiplicity, dan state konkret pada satu waktu.
10. `main`/registry; `Squad` hanya non-owning.

## 6. Reflection
Isi `reflection.md` dengan bukti yang merujuk code/test Anda.

## 7. Definition of Done
- [ ] Build C++17 tanpa warning.
- [ ] `make test` dan CTest lulus.
- [ ] Association non-owning dijelaskan.
- [ ] Aggregation Soldier tidak melakukan delete.
- [ ] Composition Platoon -> Squad by value.
- [ ] Max 4 squad teruji.
- [ ] Class Diagram dan Object Diagram konsisten.
- [ ] Reflection dan AI declaration diisi.

## 8. Referensi
- Deitel & Deitel, *C++ How to Program*, Ch. 9-10.
- Fowler, *UML Distilled*, Ch. 3, 6.
- Booch et al., *The UML User Guide*, Ch. 5-6.
- UML relationships: https://www.uml-diagrams.org/class-diagrams-overview.html
- PlantUML Object Diagram: https://plantuml.com/object-diagram
