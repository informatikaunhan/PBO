# Pemrograman Berorientasi Obyek (PBO301)

**Program Studi Informatika · Fakultas Teknik dan Teknologi Pertahanan · Universitas Pertahanan Republik Indonesia**

Repositori bahan belajar mandiri mata kuliah Pemrograman Berorientasi Obyek. Materi menggunakan **C++17**. Setiap pertemuan reguler menyediakan penjelasan, source code contoh/starter, latihan, pengujian, UML, dan/atau challenge sesuai topik.

<p align="center"><img src="assets/logo_unhan.png" width="150" alt="Logo Universitas Pertahanan Republik Indonesia"></p>

## Mulai belajar

Buka README pada folder pertemuan, baca capaian pembelajaran, kemudian kerjakan file yang dirujuk secara berurutan. Semua path seperti `notes/...`, `starter/...`, `examples/...`, `exercises/...`, `uml/...`, `include/...`, `src/...`, dan `tests/...` adalah **path nyata di folder pertemuan yang sama**.

| Pertemuan | Topik | Materi |
|---:|---|---|
| 1 | Pengantar OOP, C++ Modern, dan Pengenalan UML | [Buka materi](pertemuan-01/README.md) |
| 2 | Class, Object, dan Class Diagram | [Buka materi](pertemuan-02/README.md) |
| 3 | Constructor, Destructor, dan Copy Semantics | [Buka materi](pertemuan-03/README.md) |
| 4 | Encapsulation, Access Control, dan Visibility di UML | [Buka materi](pertemuan-04/README.md) |
| 5 | Relasi Antar Obyek: Association, Aggregation, Composition + Object Diagram | [Buka materi](pertemuan-05/README.md) |
| 6 | Inheritance dan UML Generalization | [Buka materi](pertemuan-06/README.md) |
| 7 | Polymorphism dan Virtual Functions | [Buka materi](pertemuan-07/README.md) |
| 8 | UTS | [Buka materi](pertemuan-08/README.md) |
| 9 | Abstraction Bagian 1: Abstract Class dan Pure Virtual Function | [Buka materi](pertemuan-09/README.md) |
| 10 | Abstraction Bagian 2: Interface, Realization, dan Desain Polimorfik | [Buka materi](pertemuan-10/README.md) |
| 11 | Operator Overloading | [Buka materi](pertemuan-11/README.md) |
| 12 | Templates Bagian 1: Function Template dan Class Template | [Buka materi](pertemuan-12/README.md) |
| 13 | Templates Bagian 2: Specialization, STL, dan Generic Container | [Buka materi](pertemuan-13/README.md) |
| 14 | Exception Handling Lanjut dan Exception Safety | [Buka materi](pertemuan-14/README.md) |
| 15 | Interaksi Obyek: Sequence Diagram, Use Case, dan Studi Kasus Terintegrasi | [Buka materi](pertemuan-15/README.md) |
| 16 | UAS | [Buka materi](pertemuan-16/README.md) |

## Menjalankan contoh dan latihan

Gunakan compiler C++17. Contoh kompilasi file tunggal:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic pertemuan-06/starter/military_unit_starter.cpp -o latihan
./latihan
```

Untuk pertemuan yang menyediakan `Makefile` atau `CMakeLists.txt`, ikuti instruksi pada README pertemuan tersebut.

## Struktur repositori

```text
PBO/
├── README.md
├── .gitignore
├── LICENSE_NOTICE.md
├── assets/
│   └── logo_unhan.png
├── pertemuan-01/
│   ├── README.md
│   ├── starter/
│   ├── exercises/
│   ├── include/
│   ├── src/
│   ├── tests/
│   ├── uml/
│   ├── notes/
│   └── ...
├── pertemuan-02/
├── ...
└── pertemuan-16/
```

Repositori ini khusus untuk bahan belajar mandiri dan source pendukung. Dokumen PDF, DOCX, PPTX, dan paket ZIP tidak dimasukkan. Logo institusi disimpan **satu kali** pada `assets/logo_unhan.png` dan dipakai bersama oleh semua folder pertemuan.

## Dokumen acuan

- [`SILABUS_RINGKAS.md`](SILABUS_RINGKAS.md)
- [`silabus_PBO_OBE-2.md`](silabus_PBO_OBE-2.md)
- [`PBO301_STYLE_GUIDE_v1.2_AUDITED.md`](PBO301_STYLE_GUIDE_v1.2_AUDITED.md)
- [`PBO301_AUDIT_FINAL_P01-P15.md`](PBO301_AUDIT_FINAL_P01-P15.md)

## Penggunaan dan atribusi

Perhatikan [`LICENSE_NOTICE.md`](LICENSE_NOTICE.md) dan `LICENSE_NOTE.txt` pada masing-masing pertemuan apabila tersedia.

**Dosen pengampu:** Anindito, S.Kom., S.S., S.H., M.TI., CHFI.  
**Tahun akademik:** 2026/2027
