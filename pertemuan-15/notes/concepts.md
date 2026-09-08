# Concepts - Pertemuan 15

## Use case
- Actor = peran eksternal.
- Use case = goal bernilai bagi actor.
- `<<include>>` = bagian wajib/reusable.
- `<<extend>>` = tambahan opsional/bersyarat.
- System boundary = scope sistem.

## Sequence
- Waktu bergerak dari atas ke bawah.
- Message utama sebaiknya memetakan operasi public pada receiver.
- `alt` = cabang eksklusif, `opt` = optional block, `loop` = iterasi.

## Traceability
Gunakan rantai: requirement/use case -> class/method -> sequence -> file kode/test.
