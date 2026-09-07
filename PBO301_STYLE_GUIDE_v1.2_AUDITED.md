# PBO301 - Template Baku Bahan Pembelajaran v1.2 (Audited)

**Mata kuliah:** Pemrograman Berorientasi Obyek  
**Kode:** PBO301  
**Institusi:** Universitas Pertahanan Republik Indonesia  
**Status:** single source of truth untuk gaya/packaging setelah audit final P01-P15.

## 1. Hierarki sumber

1. **Silabus aktif `silabus_PBO_OBE-2.md`** menentukan judul, materi, Sub-CPMK, asesmen, dan nomor pertemuan.
2. **Style Guide v1.2** menentukan visual, layout, struktur file, packaging, dan QA.
3. Jika audit lama atau paket lama bertentangan dengan silabus aktif, **silabus aktif menang**.

## 2. Identitas dan penamaan

- Nama mata kuliah: **Pemrograman Berorientasi Obyek**.
- Kode: **PBO301**.
- Judul internal: `Pertemuan N - <Judul>`.
- Gunakan ASCII hyphen `-` pada nama file/judul internal dan `|` untuk metadata.
- Credential dosen: **Anindito, S.Kom., S.S., S.H., M.TI., CHFI.**

Nama file final:

```text
PBO301_PertemuanNN_Bahan_Ajar.pdf
PBO301_PertemuanNN_Bahan_Ajar.docx
PBO301_PertemuanNN_Belajar_Mandiri_GitHub.md
PBO301_PertemuanNN_GitHub_Module.zip
PBO301_PertemuanNN_Slide.pptx
PBO301_PertemuanNN_Praktikum.pdf
PBO301_PertemuanNN_Praktikum.docx
PBO301_PertemuanNN_Paket_Lengkap.zip
```

## 3. Identitas institusi

Cover:

```text
Program Studi Informatika
Fakultas Teknik dan Teknologi Pertahanan
Universitas Pertahanan Republik Indonesia
```

Header dokumen:

```text
PRODI INFORMATIKA | UNIVERSITAS PERTAHANAN RI
PBO301 - Pemrograman Berorientasi Obyek | Pertemuan N
```

- Header: dark navy, teks putih.
- Footer: `PBO301 | Pertemuan N | Prodi Informatika Unhan RI | Hal. <n>`.
- Logo: hanya PNG transparan master; aspect ratio tidak boleh diubah.

## 4. Visual system

| Peran | Hex |
|---|---|
| Navy utama | `#173B63` |
| Navy gelap | `#0E2F50` |
| Merah/marun | `#C82035` |
| Emas | `#D2A534` |
| Teks utama | `#1F2B38` |
| Teks sekunder | `#5B6672` |
| Latar | `#FFFFFF` |

- Font utama: **Noto Sans**.
- Font kode: **Noto Sans Mono**.

## 5. Dokumen cetak

- A4, 210 x 297 mm.
- Margin 18 mm semua sisi.
- Body 9.5 pt Noto Sans.
- Title 23 pt bold navy.
- H1 16 pt navy.
- H2 13 pt marun.
- H3 11.5 pt navy.
- Code 8.5-9 pt Noto Sans Mono.
- Bahan ajar target 14-20 halaman.
- Praktikum target 8-10 halaman.

Cover bahan ajar:

```text
PEMROGRAMAN BERORIENTASI OBYEK
Pertemuan N - <Judul>
BAHAN AJAR UNTUK CETAK
<Sub-CPMK> | C++17 | teori 100 menit
Topik: <kata kunci>
```

Cover praktikum:

```text
PEMROGRAMAN BERORIENTASI OBYEK
Pertemuan N - <Judul>
BAHAN PRAKTIKUM
<Sub-CPMK> | C++17 | 150 menit
Fokus: <fokus>
Target build: -std=c++17 -Wall -Wextra -pedantic
```

## 6. Struktur bahan ajar

1. Capaian Pembelajaran dan Peta Materi
2. Aktivasi/Prasyarat
3. Konsep Inti A
4. Konsep Inti B
5. Konsep Inti C
6. Worked Example
7. Studi Kasus
8. Kesalahan Umum / Anti-pattern
9. Checklist Desain/Debugging
10. Latihan Formatif
11. Jawaban/Pembahasan
12. Ringkasan
13. Referensi
14. Jembatan ke Pertemuan Berikutnya

Gunakan 4-6 ilustrasi konseptual bila topik visual. Caption `Gambar N. <deskripsi>`.

## 7. Struktur praktikum

1. Tujuan Praktikum
2. Durasi, Tools, Definition of Done
3. Persiapan Repository
4. Checkpoint 1
5. Checkpoint 2
6. Checkpoint 3
7. Checkpoint 4
8. Challenge/Integrasi
9. Verification Checklist
10. Git Checkpoint
11. Troubleshooting
12. Rubrik
13. Refleksi
14. Deklarasi Penggunaan AI

## 8. GitHub module

ZIP harus memiliki tepat satu root:

```text
PBO301_PertemuanNN_GitHub/
```

Minimum:

```text
README.md
AI_DECLARATION.md
reflection.md
.gitignore
Makefile
CMakeLists.txt
include/
src/
starter/
exercises/
solutions/
```

README baku:

```text
# PBO301 - Pertemuan N
## <Judul>
## 1. Sub-CPMK dan Capaian Belajar
## 2. Rencana Belajar Mandiri 420 Menit
# BLOK A - ...
# BLOK B - ...
# BLOK C - ...
# BLOK D - ...
# BLOK E - Integrasi / Challenge ...
## 3. Perintah Build dan Run
## 4. Self-check
## 5. Jawaban dan Pembahasan
## 6. Reflection
## 7. Definition of Done
## 8. Referensi
```

## 9. Slide

- 16:9.
- Target 40-44 slide; rentang wajar 36-46; minimum 30.
- Tidak ada teks <18 pt.
- Judul 27-32 pt.
- Body 20-24 pt.
- Code 18-20 pt, maksimal 10-12 baris/slide.
- Logo transparan pada semua slide.
- 5-8 visual konseptual bila relevan.

Cover:

```text
UNIVERSITAS PERTAHANAN REPUBLIK INDONESIA
PEMROGRAMAN BERORIENTASI OBYEK
PERTEMUAN N
<JUDUL TOPIK>
<Sub-CPMK> | C++17 | Prodi Informatika
Anindito, S.Kom., S.S., S.H., M.TI., CHFI.
Program Studi Informatika - Fakultas Teknik dan Teknologi Pertahanan
Universitas Pertahanan Republik Indonesia
```

Body slide:
- top band dark navy, cukup tinggi untuk menutup seluruh legacy header/logo;
- header `PBO301 - PERTEMUAN N` putih dan bold;
- thin gold separator;
- footer putih `PRODI INFORMATIKA | UNIVERSITAS PERTAHANAN RI` + nomor slide;
- wajib ada capaian, peta materi, activation, checkpoint, worked example/live code, common mistakes, studi kasus, mini challenge, recap, exit ticket.

## 10. Kalender akademik aktif

**Penting:** v1.2 menghapus aturan renumbering pasca-UTS dari v1.1. Silabus aktif sudah memasukkan UTS/UAS langsung ke nomor pertemuan.

```text
P1  Pengantar OOP, C++ Modern, dan Pengenalan UML
P2  Class, Object, dan Class Diagram
P3  Constructor, Destructor, dan Copy Semantics
P4  Encapsulation, Access Control, dan Visibility di UML
P5  Relasi Antar Obyek - Association, Aggregation, Composition + Object Diagram
P6  Inheritance dan UML Generalization
P7  Polymorphism dan Virtual Functions
P8  UTS
P9  Abstraction Bagian 1 - Abstract Class dan Pure Virtual Function
P10 Abstraction Bagian 2 - Interface, Realization, dan Desain Polimorfik
P11 Operator Overloading
P12 Templates Bagian 1 - Function Template dan Class Template
P13 Templates Bagian 2 - Specialization, STL, dan Generic Container
P14 Exception Handling Lanjut dan Exception Safety
P15 Interaksi Obyek - Sequence Diagram, Use Case, dan Studi Kasus Terintegrasi
P16 UAS
```

Tidak perlu menambahkan catatan “topik RPS X dilaksanakan sebagai Y” pada paket baru selama silabus aktif ini masih berlaku.

## 11. Build baseline

```text
C++17
-std=c++17 -Wall -Wextra -pedantic
```

C++20 hanya pengayaan/opsional kecuali silabus mengharuskan.

## 12. QA Gate final

Sebelum publikasi:

- Judul dan Sub-CPMK sesuai silabus aktif.
- Credential lengkap.
- A4 + 18 mm.
- Logo transparan.
- Header memiliki kontras putih-on-navy.
- Tidak ada halaman kosong akibat manual page break.
- PDF/DOCX diekspor dan diperiksa.
- Slide 16:9, >=30, semua font >=18 pt, tidak ada header/logo ganda, bounding box aman.
- GitHub ZIP single-root dan file/folder minimum lengkap.
- `make`, `make test`, CMake build, dan CTest lulus.
- Tidak ada `build/`, QA image, atau intermediate artifact di ZIP final.
