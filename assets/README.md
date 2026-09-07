# Aset bersama PBO301

Aset visual utama disimpan di root repositori agar dapat digunakan oleh seluruh pertemuan.

- `logo_unhan.png` — logo Universitas Pertahanan Republik Indonesia, berasal dari gambar resmi yang diberikan dosen. Versi transparan ini dioptimalkan untuk tampilan README GitHub.

Untuk Markdown baru di `PertemuanNN/Belajar_Mandiri.md`, gunakan:

```markdown
![Logo Universitas Pertahanan Republik Indonesia](../assets/logo_unhan.png)
```

Dari README root, gunakan `assets/logo_unhan.png`.

## Kompatibilitas modul lama

Modul yang sudah terbit memiliki beberapa referensi lama berbentuk `PertemuanNN/PBO301_PertemuanNN_GitHub/assets/logo_unhan.png`. Referensi tersebut dipertahankan sebagai alias Git yang semuanya menunjuk ke blob gambar yang sama. Karena Git menyimpan objek berdasarkan hash, tidak ada salinan isi gambar tambahan dalam object store. Seluruh materi baru harus memakai path kanonis di root agar tidak menambah alias lagi.
