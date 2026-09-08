# Static vs Dynamic Polymorphism

- **Static polymorphism**: target dipilih compile-time; contoh P7: function overloading.
- **Dynamic polymorphism**: target dipilih runtime melalui virtual function dan base pointer/reference.
- `override` adalah alat verifikasi kontrak, bukan sekadar dokumentasi.
- Base polimorfik yang dapat dihapus lewat base pointer memerlukan destructor virtual.
- Jangan pass object polimorfik by-value bila ingin mempertahankan dynamic type.
