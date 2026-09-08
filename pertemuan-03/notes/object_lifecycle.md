# Object Lifecycle

Urutan mental yang dipakai pada Pertemuan 3:

1. storage tersedia;
2. data member dibangun mengikuti urutan declaration;
3. constructor body dijalankan;
4. object digunakan;
5. copy construction atau copy assignment mungkin terjadi;
6. destructor body dijalankan saat lifetime berakhir;
7. data member dihancurkan dalam urutan terbalik;
8. storage dilepas sesuai storage duration.

`T b = a;` saat `b` belum ada adalah copy construction. `b = a;` saat `b` sudah hidup adalah copy assignment.
