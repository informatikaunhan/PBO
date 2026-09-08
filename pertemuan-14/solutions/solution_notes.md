# Solution Notes

- Hierarchy sebaiknya mengikuti recovery policy, bukan sekadar nama error.
- `throw;` mempertahankan exception aktif.
- Strong guarantee paling mudah dicapai dengan candidate state lalu commit.
- `noexcept` harus merefleksikan implementation yang benar, bukan keinginan agar function lebih cepat.
