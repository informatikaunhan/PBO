# PBO301 - Audit Final Konsistensi Gaya dan Packaging P01-P15

**Cakupan:** Pertemuan 1-7 dan 9-15. Pertemuan 8 adalah UTS sehingga tidak mempunyai paket materi reguler.  
**Sumber akademik:** `silabus_PBO_OBE-2.md` versi aktif.  
**Baseline gaya:** `PBO301_STYLE_GUIDE_v1.1.md`, lalu diperbarui menjadi v1.2 pada audit ini.  
**Status akhir:** **LULUS QA setelah normalisasi.**

## 1. Keputusan audit

Seluruh paket telah dinormalisasi menjadi satu seri visual dan teknis. Isi akademik dipertahankan sesuai silabus aktif; perubahan dilakukan pada konsistensi identitas, layout, packaging, wording yang stale, dan QA build.

Catatan penting: audit lama memuat pemetaan kalender pasca-UTS yang sudah tidak cocok dengan silabus aktif terbaru. Silabus aktif sudah menetapkan langsung P8 = UTS, P9 = Abstraction Bagian 1, ... P15 = Interaksi Obyek, dan P16 = UAS. Karena itu **tidak digunakan lagi mekanisme menggeser topik RPS satu nomor setelah UTS**.

## 2. Perbaikan lintas seri

1. **Identitas institusi** diseragamkan: logo PNG transparan, nama prodi/fakultas/universitas, serta credential `Anindito, S.Kom., S.S., S.H., M.TI., CHFI.`.
2. **Sistem visual** diseragamkan ke navy `#173B63` / dark navy `#0E2F50`, marun `#C82035`, emas `#D2A534`, Noto Sans, dan Noto Sans Mono.
3. **Dokumen cetak** seluruhnya A4, margin 18 mm, header navy dengan teks putih, footer ringkas, dan terminologi cover `BAHAN AJAR UNTUK CETAK` / `BAHAN PRAKTIKUM`.
4. **Slide** diseragamkan ke 16:9, cover tunggal yang sama, header `PBO301 - PERTEMUAN N`, footer institusi + nomor slide, logo transparan, dan minimum font 18 pt. Overlay final juga menutup header/logo legacy yang sebelumnya masih dapat muncul ganda.
5. **GitHub module** memakai tepat satu root `PBO301_PertemuanNN_GitHub/`, heading README delapan bagian, serta file/folder minimum yang sama.
6. **Build baseline** diseragamkan ke C++17 dengan `-std=c++17 -Wall -Wextra -pedantic`.
7. **P7**: preview pasca-UTS yang stale diperbaiki. Setelah UTS, P9 adalah **Abstraction Bagian 1**, bukan Templates.
8. **P2**: blank page pada bahan ajar dihilangkan dan target `make test` dibuat portable dengan memanggil test shell melalui `bash`.
9. Artefak build/QA/intermediate dikeluarkan dari ZIP GitHub dan paket final.

## 3. Hasil QA per pertemuan

| Pertemuan | Bahan Ajar (hlm) | Praktikum (hlm) | Slide / font min | Struktur | GitHub | Build/Test |
|---:|---:|---:|---:|---|---|---|
| 1 | 17 | 10 | 42 / 18 pt | PASS | PASS | PASS |
| 2 | 18 | 10 | 42 / 18 pt | PASS | PASS | PASS |
| 3 | 18 | 10 | 42 / 18 pt | PASS | PASS | PASS |
| 4 | 19 | 10 | 43 / 18 pt | PASS | PASS | PASS |
| 5 | 18 | 9 | 42 / 18 pt | PASS | PASS | PASS |
| 6 | 18 | 9 | 42 / 18 pt | PASS | PASS | PASS |
| 7 | 18 | 9 | 42 / 18 pt | PASS | PASS | PASS |
| 9 | 16 | 8 | 42 / 18 pt | PASS | PASS | PASS |
| 10 | 17 | 9 | 42 / 18 pt | PASS | PASS | PASS |
| 11 | 17 | 8 | 43 / 18 pt | PASS | PASS | PASS |
| 12 | 17 | 9 | 42 / 18 pt | PASS | PASS | PASS |
| 13 | 18 | 9 | 42 / 18 pt | PASS | PASS | PASS |
| 14 | 19 | 9 | 42 / 18 pt | PASS | PASS | PASS |
| 15 | 18 | 9 | 43 / 18 pt | PASS | PASS | PASS |

Semua bahan ajar berada pada target 14-20 halaman; semua praktikum berada pada target 8-10 halaman; seluruh deck berada pada rentang 42-43 slide dan minimum font 18 pt.

## 4. QA teknis yang dijalankan

- DOCX: A4, margin, author, judul, dan Sub-CPMK diperiksa programatik; PDF hasil ekspor diperiksa page count dan halaman kosong.
- PDF: seluruh PDF final diekspor ulang dari DOCX setelah normalisasi header/footer.
- Slide: rasio, jumlah slide, ukuran font, bounding box, cover metadata, dan body header/footer diperiksa; deck kritis/legacy dan deck dengan judul panjang dirender ulang untuk visual QA.
- GitHub: single-root, file minimum, mandatory folders, dan ketiadaan build/QA junk diperiksa dari isi ZIP.
- Kode: untuk **setiap P01-P07 dan P09-P15**, `make`, `make test`, CMake configure/build, dan CTest dijalankan dan lulus.

## 5. Source of truth setelah audit

Gunakan `PBO301_STYLE_GUIDE_v1.2_AUDITED.md` untuk semua revisi/generasi berikutnya. Silabus akademik tetap `silabus_PBO_OBE-2.md`; style guide tidak boleh mengubah urutan materi atau Sub-CPMK.

## 6. Status kalender

- P1-P7: materi reguler sesuai nomor silabus.
- P8: UTS.
- P9-P15: materi reguler sesuai nomor silabus aktif, **tanpa renumbering tambahan**.
- P16: UAS.
