# vtable/vptr sebagai Model Konseptual

Banyak compiler mengimplementasikan virtual dispatch dengan virtual table (vtable) dan pointer tersembunyi (vptr). Ini berguna sebagai model mental, tetapi **layout-nya bukan contract portable C++**. Jangan membuat program yang bergantung pada posisi vptr atau bentuk tabel tertentu.
