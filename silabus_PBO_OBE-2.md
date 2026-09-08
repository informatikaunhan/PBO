# RENCANA PEMBELAJARAN SEMESTER (RPS)
# BERBASIS OUTCOME-BASED EDUCATION (OBE)

---

## IDENTITAS MATA KULIAH

| Komponen | Keterangan |
|----------|------------|
| **Nama Mata Kuliah** | Pemrograman Berorientasi Obyek (Object-Oriented Programming) |
| **Kode Mata Kuliah** | PBO301 |
| **Bobot SKS** | 3 SKS (2 SKS Teori + 1 SKS Praktikum) |
| **Semester** | 3 (Tiga) |
| **Prasyarat** | Dasar-Dasar Pemrograman (DDP101), Struktur Data dan Algoritma (SDA201) |
| **Program Studi** | Teknik Informatika / Ilmu Komputer |
| **Dosen Pengampu** | Anindito, S.Kom., S.S., S.H., M.TI., CHFI. |
| **Tahun Akademik** | [Tahun Akademik] |
| **Bahasa Utama** | C++ (standar C++17) |
| **IDE Utama** | Code::Blocks (dengan compiler MinGW GCC) — konsisten dengan DDP/SDA |
| **Total Pertemuan** | 16 pertemuan (14 pertemuan materi + UTS di P8 + UAS di P16) |

---

## BEBAN BELAJAR

| Komponen | Perhitungan | Total per Minggu |
|----------|-------------|------------------|
| **Teori (2 SKS)** | 2 × 50 menit | 100 menit |
| **Praktikum (1 SKS)** | 1 × 3 × 50 menit | 150 menit |
| **Tatap Muka Total** | | **250 menit/minggu** |
| **Belajar Mandiri** | 2 × (2 × 60 menit) + 1 × (3 × 60 menit) | 420 menit/minggu |

---

## DESKRIPSI MATA KULIAH

Mata kuliah Pemrograman Berorientasi Obyek (PBO) merupakan mata kuliah wajib yang memperdalam paradigma pemrograman berorientasi obyek menggunakan bahasa C++. Mata kuliah ini melanjutkan pengetahuan dari Dasar-Dasar Pemrograman (yang telah memperkenalkan konsep dasar class) dan Struktur Data dan Algoritma (yang telah membangun pemahaman struktur data fundamental serta penggunaan pointer dan dynamic memory), kemudian memperdalamnya dengan penguasaan menyeluruh atas sifat-sifat fundamental pemrograman berorientasi obyek.

Fokus utama mata kuliah ini adalah pada **empat pilar OOP**: **Encapsulation** (pembungkusan data), **Inheritance** (pewarisan), **Polymorphism** (banyak bentuk), dan **Abstraction** (abstraksi), serta **relasi antar obyek** (association, aggregation, composition). Mahasiswa akan mempelajari sifat-sifat OOP tersebut secara mendalam dengan fitur-fitur khas C++ seperti virtual functions, multiple inheritance, operator overloading, templates, dan exception handling lanjut.

Selain aspek pemrograman, mata kuliah ini juga memperkenalkan **notasi UML (Unified Modeling Language) yang terkait langsung dengan sifat-sifat OOP** — yaitu Class Diagram, Object Diagram, Sequence Diagram, dan Use Case Diagram — sebagai alat untuk memodelkan dan mengkomunikasikan desain berorientasi obyek. Notasi UML diintegrasikan ke dalam materi setiap pertemuan yang relevan, bukan diajarkan sebagai topik terpisah, sehingga mahasiswa langsung memahami hubungan antara notasi visual dan implementasi kode.

Materi yang secara pengalaman pengajaran tergolong paling sulit dikuasai mahasiswa — yaitu **Abstraction** (abstract class, pure virtual function, interface) dan **Templates** (generic programming) — dialokasikan masing-masing **dua pertemuan** agar mahasiswa memiliki waktu yang memadai untuk memahami konsep sekaligus mempraktikkannya.

Penguasaan sifat-sifat OOP dan pemodelannya menjadi fondasi esensial untuk mata kuliah lanjutan pada semester-semester berikutnya, yaitu **Rekayasa Perangkat Lunak (Semester 4)** yang membutuhkan pemahaman mendalam tentang desain OOP dan UML, **Pemrograman GUI dan Aplikasi Desktop (Semester 4)** yang berbasis paradigma event-driven OOP (Qt menggunakan C++), **Basis Data (Semester 3)** untuk konsep entity modeling, serta **Pemrograman Web Berbasis Framework (Semester 6)** yang sangat bergantung pada arsitektur OOP.

---

## PRASYARAT PENGETAHUAN (DARI MATA KULIAH DDP & SDA)

Berdasarkan silabus DDP101 dan SDA201, mahasiswa diasumsikan telah menguasai:

### Dari Dasar-Dasar Pemrograman (DDP101)
1. **Pemrograman Dasar C++**: Tipe data, variabel, operator, I/O, percabangan, perulangan
2. **Fungsi dan Rekursi**: Parameter passing (by value/reference/pointer), return value, scope
3. **Array dan Pointer**: Array 1D dan multidimensi, pointer arithmetic, dynamic memory (`new`/`delete`)
4. **Struct dan Pengenalan Class**: Konsep dasar class, object, encapsulation
5. **Exception Handling Dasar**: Try-catch, throw
6. **File Handling**: Operasi baca/tulis file dengan fstream

### Dari Struktur Data dan Algoritma (SDA201)
7. **Pointer Lanjut**: Memory management, alokasi dan dealokasi dinamis
8. **Struktur Data Linear**: Linked list, stack, queue (implementasi dengan class)
9. **Struktur Data Non-Linear**: Tree, BST, heap, hash table
10. **Analisis Algoritma**: Notasi Big-O, trade-off pemilihan struktur data
11. **ADT (Abstract Data Type)**: Konsep pemisahan interface dan implementasi

### Pengembangan dari Prasyarat
PBO tidak mengulang konsep di atas, melainkan **memperdalam dan memformalkan** prinsip-prinsip yang sudah disinggung. Misalnya, ADT dari SDA akan diformalkan menjadi konsep abstraction dengan abstract class dan pure virtual function; implementasi linked list dari SDA akan diimplementasikan ulang menggunakan class template generic; konsep class dari DDP akan diperluas dengan seluruh sifat OOP.

---

## REFERENSI

### Referensi Utama
1. Deitel, P.J. & Deitel, H.M. (2017). *C++ How to Program* (10th Ed.). Pearson. ISBN: 978-0134448237 *(lanjutan dari DDP)*
2. Stroustrup, B. (2013). *The C++ Programming Language* (4th Ed.). Addison-Wesley Professional. ISBN: 978-0321563842
3. Lippman, S.B., Lajoie, J., & Moo, B.E. (2012). *C++ Primer* (5th Ed.). Addison-Wesley. ISBN: 978-0321714114

### Referensi UML
4. Fowler, M. (2003). *UML Distilled: A Brief Guide to the Standard Object Modeling Language* (3rd Ed.). Addison-Wesley. ISBN: 978-0321193681
5. Booch, G., Rumbaugh, J., & Jacobson, I. (2005). *The Unified Modeling Language User Guide* (2nd Ed.). Addison-Wesley. ISBN: 978-0321267979

### Referensi C++ Best Practices
6. Meyers, S. (2005). *Effective C++: 55 Specific Ways to Improve Your Programs and Designs* (3rd Ed.). Addison-Wesley. ISBN: 978-0321334879
7. Josuttis, N.M. (2012). *The C++ Standard Library: A Tutorial and Reference* (2nd Ed.). Addison-Wesley. ISBN: 978-0321623218
8. Vandevoorde, D., Josuttis, N.M., & Gregor, D. (2017). *C++ Templates: The Complete Guide* (2nd Ed.). Addison-Wesley. ISBN: 978-0321714121

### Sumber Online
9. C++ Reference: https://en.cppreference.com/
10. ISO C++ Core Guidelines: https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines
11. LearnCpp: https://www.learncpp.com/
12. PlantUML: https://plantuml.com/
13. UML Diagrams (visual guide): https://www.uml-diagrams.org/

---

## CAPAIAN PEMBELAJARAN LULUSAN (CPL) YANG DIBEBANKAN

| Kode | Capaian Pembelajaran Lulusan |
|------|------------------------------|
| **CPL-1** | Mampu menerapkan pemikiran logis, kritis, sistematis, dan inovatif dalam pengembangan ilmu pengetahuan dan teknologi di bidang informatika |
| **CPL-2** | Mampu menganalisis dan merancang solusi permasalahan komputasi menggunakan prinsip-prinsip ilmu komputer dan matematika |
| **CPL-3** | Mampu mengimplementasikan solusi komputasi dalam bentuk program komputer yang efisien dan dapat diandalkan |
| **CPL-4** | Mampu mengevaluasi dan mengoptimalkan kinerja sistem komputasi |
| **CPL-5** | Mampu bekerja dalam tim dan berkomunikasi efektif dalam pengembangan perangkat lunak |

---

## CAPAIAN PEMBELAJARAN MATA KULIAH (CPMK)

| Kode | Capaian Pembelajaran Mata Kuliah | CPL Terkait |
|------|----------------------------------|-------------|
| **CPMK-1** | Mampu menjelaskan paradigma pemrograman berorientasi obyek dan membedakannya dengan paradigma prosedural | CPL-1 |
| **CPMK-2** | Mampu merancang dan mengimplementasikan class beserta empat pilar OOP (encapsulation, inheritance, polymorphism, abstraction) menggunakan C++ | CPL-2, CPL-3 |
| **CPMK-3** | Mampu menerapkan relasi antar obyek (association, aggregation, composition) dalam desain sistem berorientasi obyek | CPL-2, CPL-3 |
| **CPMK-4** | Mampu memodelkan sistem berorientasi obyek menggunakan notasi UML yang relevan (class diagram, object diagram, sequence diagram, use case diagram) | CPL-1, CPL-2 |
| **CPMK-5** | Mampu menerapkan generic programming melalui function template dan class template untuk menghasilkan kode yang reusable | CPL-3, CPL-4 |
| **CPMK-6** | Mampu menerapkan exception handling lanjut untuk menghasilkan kode yang reliable dan safe | CPL-3, CPL-4 |
| **CPMK-7** | Mampu mengembangkan aplikasi berorientasi obyek skala menengah dengan menerapkan seluruh sifat OOP secara terintegrasi | CPL-3, CPL-5 |

---

## SUB-CAPAIAN PEMBELAJARAN MATA KULIAH (Sub-CPMK)

| Kode | Sub-Capaian Pembelajaran Mata Kuliah | CPMK | Pertemuan |
|------|--------------------------------------|------|:---------:|
| **Sub-CPMK-1.1** | Mampu menjelaskan perbedaan paradigma prosedural, OOP, dan generik | CPMK-1 | P1 |
| **Sub-CPMK-1.2** | Mampu menjelaskan tujuan dan struktur UML sebagai bahasa pemodelan sistem OOP | CPMK-1, CPMK-4 | P1 |
| **Sub-CPMK-2.1** | Mampu mendefinisikan class beserta atribut dan method dalam C++ | CPMK-2 | P2 |
| **Sub-CPMK-2.2** | Mampu mengimplementasikan constructor, destructor, dan copy semantics (rule of three) | CPMK-2 | P3 |
| **Sub-CPMK-2.3** | Mampu menerapkan encapsulation menggunakan access specifier dan const correctness | CPMK-2 | P4 |
| **Sub-CPMK-2.4** | Mampu mengimplementasikan inheritance (single, multilevel, multiple, virtual inheritance) | CPMK-2 | P6 |
| **Sub-CPMK-2.5** | Mampu menerapkan polymorphism melalui virtual functions dan dynamic binding | CPMK-2 | P7 |
| **Sub-CPMK-2.6** | Mampu merancang abstract class dengan pure virtual function | CPMK-2 | P9 |
| **Sub-CPMK-2.7** | Mampu merancang interface dan menerapkan desain polimorfik berbasis abstraksi | CPMK-2 | P10 |
| **Sub-CPMK-2.8** | Mampu melakukan operator overloading dengan benar dan idiomatik | CPMK-2 | P11 |
| **Sub-CPMK-3.1** | Mampu membedakan dan mengimplementasikan association, aggregation, dan composition | CPMK-3 | P5 |
| **Sub-CPMK-4.1** | Mampu membuat class diagram lengkap dengan atribut, method, visibility, dan relasi | CPMK-4 | P2, P4, P5, P6, P9, P10 |
| **Sub-CPMK-4.2** | Mampu membuat object diagram sebagai instance dari class diagram | CPMK-4 | P5 |
| **Sub-CPMK-4.3** | Mampu membuat sequence diagram untuk memodelkan interaksi antar obyek | CPMK-4 | P15 |
| **Sub-CPMK-4.4** | Mampu membuat use case diagram untuk memodelkan fungsionalitas sistem | CPMK-4 | P15 |
| **Sub-CPMK-5.1** | Mampu mengimplementasikan function template dan class template dasar | CPMK-5 | P12 |
| **Sub-CPMK-5.2** | Mampu menerapkan template specialization dan memanfaatkan STL untuk generic programming | CPMK-5 | P13 |
| **Sub-CPMK-6.1** | Mampu merancang exception hierarchy dan menerapkan exception safety | CPMK-6 | P14 |
| **Sub-CPMK-7.1** | Mampu mengembangkan aplikasi berorientasi obyek yang mengintegrasikan seluruh sifat OOP | CPMK-7 | P15 |

---

## PETA ALOKASI PERTEMUAN

| Pertemuan | Topik | Kategori | Keterangan |
|:---------:|-------|----------|------------|
| P1 | Pengantar OOP, C++ Modern, Pengenalan UML | Fondasi | |
| P2 | Class, Object, dan Class Diagram | Fondasi | |
| P3 | Constructor, Destructor, dan Copy Semantics | Fondasi | |
| P4 | **Encapsulation** dan Access Control | **Pilar OOP 1** | |
| P5 | Relasi Antar Obyek dan Object Diagram | Relasi | |
| P6 | **Inheritance** dan UML Generalization | **Pilar OOP 2** | |
| P7 | **Polymorphism** dan Virtual Functions | **Pilar OOP 3** | |
| **P8** | **UJIAN TENGAH SEMESTER** | **Evaluasi** | |
| P9 | **Abstraction** Bagian 1 — Abstract Class | **Pilar OOP 4** | *2 pertemuan (materi sulit)* |
| P10 | **Abstraction** Bagian 2 — Interface dan Desain Polimorfik | **Pilar OOP 4** | *2 pertemuan (materi sulit)* |
| P11 | Operator Overloading | Pendukung OOP | |
| P12 | Templates Bagian 1 — Function dan Class Template | Generic Programming | *2 pertemuan (materi sulit)* |
| P13 | Templates Bagian 2 — Specialization dan STL | Generic Programming | *2 pertemuan (materi sulit)* |
| P14 | Exception Handling Lanjut | Pendukung OOP | |
| P15 | Sequence Diagram, Use Case, dan Studi Kasus Terintegrasi | Integrasi | |
| **P16** | **UJIAN AKHIR SEMESTER** | **Evaluasi** | |

---

## RENCANA PEMBELAJARAN SEMESTER

---

### PERTEMUAN 1: Pengantar OOP, C++ Modern, dan Pengenalan UML

| Komponen | Uraian |
|----------|--------|
| **Sub-CPMK** | Sub-CPMK-1.1, Sub-CPMK-1.2 |
| **Indikator Pencapaian** | (1) Mahasiswa mampu menjelaskan paradigma OOP dan membedakannya dengan paradigma prosedural; (2) Mahasiswa mampu menjelaskan evolusi C++ dan fitur OOP modern; (3) Mahasiswa mampu menjelaskan tujuan UML dan jenis diagram yang relevan untuk OOP; (4) Mahasiswa mampu menyiapkan toolchain C++ dan tool UML |
| **Materi Pembelajaran** | Review paradigma pemrograman (prosedural vs OOP vs generik); Motivasi OOP: modularity, reusability, maintainability; Sejarah dan evolusi C++ (C++98, C++11, C++14, C++17); Review konsep class dan object dari DDP; Setup toolchain (Code::Blocks dengan MinGW GCC, compiler flag `-std=c++17`, `-Wall`, `-Wextra`); Pengantar UML: tujuan, sejarah, dan struktur; Jenis diagram UML yang relevan untuk OOP: **Class Diagram, Object Diagram, Sequence Diagram, Use Case Diagram**; Pengenalan tool UML (PlantUML, draw.io); Alur kerja: dari deskripsi masalah → class diagram → kode C++ |
| **Bentuk & Waktu Pembelajaran** | Teori: 2×50 menit (100 menit); Praktikum: 3×50 menit (150 menit) |
| **Metode Pembelajaran** | Ceramah interaktif, demonstrasi komparatif prosedural vs OOP, hands-on setup |
| **Pengalaman Belajar** | Mahasiswa mengkonfigurasi Code::Blocks untuk C++17, menginstal PlantUML, menulis program OOP sederhana pertama, dan membuat class diagram sederhana untuk program tersebut |
| **Penilaian** | Tugas praktikum |
| **Estimasi Waktu Belajar Mandiri** | 420 menit |
| **Referensi** | Deitel Ch.9; Stroustrup Ch.1-2; Lippman Ch.1; Fowler Ch.1-2 |
| **Sumber Praktikum** | C++ Reference: https://en.cppreference.com/; PlantUML: https://plantuml.com/; UML Diagrams: https://www.uml-diagrams.org/ |

---

### PERTEMUAN 2: Class, Object, dan Class Diagram

| Komponen | Uraian |
|----------|--------|
| **Sub-CPMK** | Sub-CPMK-2.1, Sub-CPMK-4.1 |
| **Indikator Pencapaian** | (1) Mahasiswa mampu mendefinisikan class dengan benar dalam C++; (2) Mahasiswa mampu membuat class diagram lengkap untuk class tunggal; (3) Mahasiswa mampu memetakan class diagram ke kode C++ dan sebaliknya |
| **Materi Pembelajaran** | Definisi class dan instansiasi object; Pemisahan declaration (`.h`) dan definition (`.cpp`), include guard; Anatomi class: attribute (data member) dan method (member function); `this` pointer; Static members (data dan function); Inline function dan `constexpr`; Struct vs class di C++; **UML Class Diagram — notasi dasar**: kompartemen class (nama, atribut, method), format atribut (`nama: tipe`), format method (`nama(parameter): tipeKembali`), notasi static (garis bawah); Forward engineering (diagram → kode) dan reverse engineering (kode → diagram) untuk class tunggal |
| **Bentuk & Waktu Pembelajaran** | Teori: 2×50 menit (100 menit); Praktikum: 3×50 menit (150 menit) |
| **Metode Pembelajaran** | Ceramah interaktif, live coding, latihan pemodelan |
| **Pengalaman Belajar** | Mahasiswa membuat class diagram dan implementasi class `Soldier`, `Vehicle`, dan `Weapon` — memastikan konsistensi penuh antara diagram dan kode |
| **Penilaian** | Kuis, Tugas praktikum |
| **Estimasi Waktu Belajar Mandiri** | 420 menit |
| **Referensi** | Deitel Ch.9; Stroustrup Ch.16; Lippman Ch.7; Fowler Ch.3 |
| **Sumber Praktikum** | C++ Classes: https://en.cppreference.com/w/cpp/language/classes; PlantUML Class Diagram: https://plantuml.com/class-diagram |

---

### PERTEMUAN 3: Constructor, Destructor, dan Copy Semantics

| Komponen | Uraian |
|----------|--------|
| **Sub-CPMK** | Sub-CPMK-2.2 |
| **Indikator Pencapaian** | (1) Mahasiswa mampu mengimplementasikan berbagai jenis constructor dan destructor; (2) Mahasiswa mampu menerapkan copy constructor dan copy assignment operator; (3) Mahasiswa mampu menerapkan rule of three |
| **Materi Pembelajaran** | Default constructor, parameterized constructor, copy constructor; Destructor: kapan dipanggil, urutan destruksi; Initializer list dan keuntungannya dibanding assignment di body; Delegating constructor; Explicit constructor untuk mencegah konversi implisit tak diinginkan; `default` dan `delete` keyword; Copy assignment operator (`operator=`): self-assignment check, return `*this`; **Shallow copy vs deep copy**: mengapa jadi masalah pada class yang mengelola resource, dan bagaimana solusinya; **Rule of Three**: jika class butuh destructor kustom, hampir pasti butuh copy constructor dan copy assignment kustom juga; Object lifecycle dan urutan pemanggilan constructor/destructor |
| **Bentuk & Waktu Pembelajaran** | Teori: 2×50 menit (100 menit); Praktikum: 3×50 menit (150 menit) |
| **Metode Pembelajaran** | Ceramah interaktif, live coding, demonstrasi memory bug dengan debugger |
| **Pengalaman Belajar** | Mahasiswa mengimplementasikan class `SimpleString` dari nol dengan seluruh member berkaitan copy semantics; menganalisis konsekuensi shallow copy (double-free) melalui debugger |
| **Penilaian** | Tugas praktikum |
| **Estimasi Waktu Belajar Mandiri** | 420 menit |
| **Referensi** | Deitel Ch.10; Stroustrup Ch.16-17; Lippman Ch.13; Meyers (Effective C++) Item 5-6, 12 |
| **Sumber Praktikum** | Rule of Three: https://en.cppreference.com/w/cpp/language/rule_of_three; Constructors: https://en.cppreference.com/w/cpp/language/constructor |

---

### PERTEMUAN 4: Encapsulation, Access Control, dan Visibility di UML

| Komponen | Uraian |
|----------|--------|
| **Sub-CPMK** | Sub-CPMK-2.3, Sub-CPMK-4.1 |
| **Indikator Pencapaian** | (1) Mahasiswa mampu menerapkan konsep encapsulation; (2) Mahasiswa mampu menggunakan access specifier dengan tepat; (3) Mahasiswa mampu menerapkan const correctness; (4) Mahasiswa mampu menyatakan visibility di class diagram UML |
| **Materi Pembelajaran** | **Encapsulation — pilar pertama OOP**; Konsep information hiding dan mengapa penting; Access specifier: `public`, `protected`, `private`; Getter dan setter methods, serta kapan sebaiknya tidak dibuat; Validasi data melalui setter; **Const correctness**: `const` member function, `const` parameter, `const` object, `const` return value; Mutable keyword; `friend` function dan `friend` class — kapan boleh dipakai dan risikonya terhadap encapsulation; **UML Visibility Notation**: `+` public, `-` private, `#` protected, `~` package; Notasi `{readOnly}`; Hubungan encapsulation dengan konsep ADT dari SDA |
| **Bentuk & Waktu Pembelajaran** | Teori: 2×50 menit (100 menit); Praktikum: 3×50 menit (150 menit) |
| **Metode Pembelajaran** | Ceramah interaktif, code review, problem-based learning |
| **Pengalaman Belajar** | Mahasiswa merefactor class `BankAccount` yang tidak ter-encapsulate menjadi versi dengan enkapsulasi penuh, validasi di setter, dan const correctness; sekaligus memperbarui class diagram dengan notasi visibility yang benar |
| **Penilaian** | Kuis, Tugas praktikum |
| **Estimasi Waktu Belajar Mandiri** | 420 menit |
| **Referensi** | Deitel Ch.9; Stroustrup Ch.16; Lippman Ch.7; Meyers (Effective C++) Item 3, 22; Fowler Ch.3 |
| **Sumber Praktikum** | Const Correctness: https://isocpp.org/wiki/faq/const-correctness; UML Visibility: https://www.uml-diagrams.org/class-diagrams-overview.html |

---

### PERTEMUAN 5: Relasi Antar Obyek — Association, Aggregation, Composition + Object Diagram

| Komponen | Uraian |
|----------|--------|
| **Sub-CPMK** | Sub-CPMK-3.1, Sub-CPMK-4.1, Sub-CPMK-4.2 |
| **Indikator Pencapaian** | (1) Mahasiswa mampu membedakan association, aggregation, dan composition; (2) Mahasiswa mampu mengimplementasikan ketiga relasi dalam C++; (3) Mahasiswa mampu menggambarkan relasi di class diagram dan membuat object diagram |
| **Materi Pembelajaran** | Relasi antar obyek dan lifetime dependency; **Association** (uses-a): obyek berkomunikasi tanpa ownership, implementasi via pointer, reference, atau parameter method; **Aggregation** (has-a, weak ownership): part dapat hidup tanpa whole, implementasi via pointer ke obyek yang dikelola pihak lain; **Composition** (has-a, strong ownership): part mati bersama whole, implementasi via object member langsung; Multiplicity (1..1, 0..1, 1..\*, 0..\*, m..n); Bidirectional vs unidirectional association; **UML Notation**: garis polos (association), belah ketupat kosong (aggregation), belah ketupat terisi (composition), arah navigasi, role name, multiplicity; **UML Object Diagram**: instance dari class diagram, notasi `namaObyek:NamaClass` (bergaris bawah), nilai konkret pada atribut, kegunaan untuk memvisualisasikan snapshot sistem pada satu waktu; Contoh: `Platoon` composes `Squad`, `Squad` aggregates `Soldier` |
| **Bentuk & Waktu Pembelajaran** | Teori: 2×50 menit (100 menit); Praktikum: 3×50 menit (150 menit) |
| **Metode Pembelajaran** | Ceramah interaktif, studi kasus, latihan pemodelan |
| **Pengalaman Belajar** | Mahasiswa memodelkan struktur organisasi militer (Battalion → Company → Platoon → Squad → Soldier) dengan memilih relasi yang tepat untuk setiap tingkat, membuat class diagram dan object diagram, lalu mengimplementasikannya di C++ |
| **Penilaian** | Tugas praktikum |
| **Estimasi Waktu Belajar Mandiri** | 420 menit |
| **Referensi** | Deitel Ch.9-10; Fowler Ch.3, 6; Booch et al. Ch.5-6 |
| **Sumber Praktikum** | UML Class Relationships: https://www.uml-diagrams.org/class-diagrams-overview.html; PlantUML Object Diagram: https://plantuml.com/object-diagram |

---

### PERTEMUAN 6: Inheritance dan UML Generalization

| Komponen | Uraian |
|----------|--------|
| **Sub-CPMK** | Sub-CPMK-2.4, Sub-CPMK-4.1 |
| **Indikator Pencapaian** | (1) Mahasiswa mampu mengimplementasikan single dan multilevel inheritance; (2) Mahasiswa mampu menerapkan multiple inheritance dan menyelesaikan diamond problem; (3) Mahasiswa mampu memilih antara inheritance dan composition; (4) Mahasiswa mampu menggambarkan hierarki class dengan notasi generalization |
| **Materi Pembelajaran** | **Inheritance — pilar kedua OOP**; Konsep is-a relationship; Single inheritance, multilevel inheritance, multiple inheritance; Access specifier pada inheritance (`public`, `protected`, `private` inheritance) dan implikasinya terhadap akses di derived class; Constructor dan destructor pada hierarki class (urutan pemanggilan: base dulu saat konstruksi, derived dulu saat destruksi); Memanggil base class method (`Base::method()`); Name hiding pada derived class dan `using` declaration; **Diamond problem** dan **virtual inheritance** sebagai solusinya; **Composition vs inheritance**: kapan memilih yang mana (prinsip "prefer composition over inheritance"); **UML Generalization Notation**: panah segitiga kosong solid dari subclass ke superclass; Multiple inheritance di UML; Contoh: hierarki `Unit` → `GroundUnit` → `InfantryUnit`/`TankUnit` |
| **Bentuk & Waktu Pembelajaran** | Teori: 2×50 menit (100 menit); Praktikum: 3×50 menit (150 menit) |
| **Metode Pembelajaran** | Ceramah interaktif, studi kasus, live coding |
| **Pengalaman Belajar** | Mahasiswa membuat class diagram dan implementasi hierarki `MilitaryUnit` bertingkat; menyelesaikan kasus diamond problem dengan virtual inheritance pada `AmphibiousVehicle` (mewarisi `LandVehicle` dan `WaterVehicle`, keduanya mewarisi `Vehicle`) |
| **Penilaian** | Kuis, Tugas praktikum |
| **Estimasi Waktu Belajar Mandiri** | 420 menit |
| **Referensi** | Deitel Ch.11; Stroustrup Ch.20-21; Lippman Ch.15; Fowler Ch.5 |
| **Sumber Praktikum** | C++ Inheritance: https://en.cppreference.com/w/cpp/language/derived_class; Virtual Inheritance: https://isocpp.org/wiki/faq/multiple-inheritance |

---

### PERTEMUAN 7: Polymorphism dan Virtual Functions

| Komponen | Uraian |
|----------|--------|
| **Sub-CPMK** | Sub-CPMK-2.5 |
| **Indikator Pencapaian** | (1) Mahasiswa mampu membedakan static dan dynamic polymorphism; (2) Mahasiswa mampu mengimplementasikan virtual functions; (3) Mahasiswa mampu menjelaskan mekanisme vtable; (4) Mahasiswa mampu menghindari object slicing |
| **Materi Pembelajaran** | **Polymorphism — pilar ketiga OOP**; Static polymorphism (compile-time): function overloading; Dynamic polymorphism (runtime): virtual functions; Deklarasi dan pemanggilan virtual function; **Method overriding vs overloading vs hiding** — perbedaan yang sering tertukar; Mekanisme **vtable** dan **vptr** sebagai konsep di balik virtual function; **Virtual destructor**: mengapa wajib pada base class polimorfik (demonstrasi memory leak jika tidak virtual); **Object slicing**: penyebab dan cara menghindari (gunakan pointer atau reference, bukan by-value); `override` dan `final` keyword; `dynamic_cast` untuk downcasting yang aman; Pointer dan reference ke base class sebagai handle polimorfik; Koleksi polimorfik (array/vector of base pointer); Contoh: hierarki `Shape` dengan `area()`; Review persiapan UTS |
| **Bentuk & Waktu Pembelajaran** | Teori: 2×50 menit (100 menit); Praktikum: 3×50 menit (150 menit) |
| **Metode Pembelajaran** | Ceramah interaktif, demonstrasi vtable dengan Compiler Explorer, hands-on coding |
| **Pengalaman Belajar** | Mahasiswa mengimplementasikan hierarki `Shape` (Circle, Rectangle, Triangle) dengan virtual `area()` dan `perimeter()`, memproses koleksi shape secara polimorfik melalui pointer base class, dan mendemonstrasikan efek object slicing |
| **Penilaian** | Tugas praktikum |
| **Estimasi Waktu Belajar Mandiri** | 420 menit |
| **Referensi** | Deitel Ch.12; Stroustrup Ch.20; Lippman Ch.15; Meyers (Effective C++) Item 7 |
| **Sumber Praktikum** | Virtual Functions: https://en.cppreference.com/w/cpp/language/virtual; Compiler Explorer: https://godbolt.org/ |

---

### PERTEMUAN 8: UJIAN TENGAH SEMESTER (UTS)

**Cakupan:** Pertemuan 1-7
- Pengantar OOP dan UML dasar
- Class, Object, dan Class Diagram
- Constructor, Destructor, Copy Semantics, Rule of Three
- **Encapsulation** dan Access Control
- Relasi Antar Obyek (Association, Aggregation, Composition) dan Object Diagram
- **Inheritance** dan UML Generalization
- **Polymorphism** dan Virtual Functions

**Bentuk Ujian:**
- Teori (40%): Konsep OOP, pemodelan UML, analisis kasus, koreksi kode
- Praktikum (60%): Implementasi C++ dari class diagram yang diberikan, dan pembuatan class diagram dari kode yang diberikan

**Durasi:** 100 menit teori, 150 menit praktikum

---

### PERTEMUAN 9: Abstraction Bagian 1 — Abstract Class dan Pure Virtual Function

| Komponen | Uraian |
|----------|--------|
| **Sub-CPMK** | Sub-CPMK-2.6, Sub-CPMK-4.1 |
| **Indikator Pencapaian** | (1) Mahasiswa mampu menjelaskan konsep abstraksi dan tingkatannya; (2) Mahasiswa mampu mendeklarasikan pure virtual function; (3) Mahasiswa mampu merancang abstract class sebagai base class polimorfik; (4) Mahasiswa mampu menggambarkan abstract class di UML |
| **Materi Pembelajaran** | **Abstraction — pilar keempat OOP**; Konsep abstraksi: memisahkan "apa yang dilakukan" dari "bagaimana dilakukan"; Tingkatan abstraksi dan mengapa penting untuk mengelola kompleksitas; **Pure virtual function** (`= 0`): deklarasi tanpa implementasi wajib; **Abstract class**: class yang memiliki minimal satu pure virtual function, tidak dapat di-instansiasi, hanya dapat dijadikan base class; Perbedaan abstract class dengan concrete class; Abstract class boleh memiliki data member dan method konkret (partial implementation); Pure virtual function dengan implementasi default (kasus khusus); Virtual destructor pada abstract class; Derived class wajib mengimplementasikan seluruh pure virtual function agar menjadi konkret; **UML Notation untuk Abstraction**: nama class abstrak dicetak **miring** atau diberi stereotipe `<<abstract>>`, method abstrak dicetak miring atau ditandai `{abstract}`; Contoh: abstract class `Shape`, `Employee`, `MilitaryAsset` |
| **Bentuk & Waktu Pembelajaran** | Teori: 2×50 menit (100 menit); Praktikum: 3×50 menit (150 menit) |
| **Metode Pembelajaran** | Ceramah interaktif, live coding, latihan terbimbing |
| **Pengalaman Belajar** | Mahasiswa merefactor hierarki `Shape` dari P7 menjadi abstract class dengan pure virtual `area()` dan `perimeter()`; membuat abstract class `MilitaryAsset` dengan method konkret (`getId()`) dan pure virtual (`deploy()`, `getReadinessLevel()`), lalu mengimplementasikannya pada beberapa derived class |
| **Penilaian** | Kuis, Tugas praktikum |
| **Estimasi Waktu Belajar Mandiri** | 420 menit |
| **Referensi** | Deitel Ch.12; Stroustrup Ch.20; Lippman Ch.15 |
| **Sumber Praktikum** | Abstract Classes: https://en.cppreference.com/w/cpp/language/abstract_class |

---

### PERTEMUAN 10: Abstraction Bagian 2 — Interface, Realization, dan Desain Polimorfik

| Komponen | Uraian |
|----------|--------|
| **Sub-CPMK** | Sub-CPMK-2.7, Sub-CPMK-4.1 |
| **Indikator Pencapaian** | (1) Mahasiswa mampu mendefinisikan interface dalam C++; (2) Mahasiswa mampu menerapkan multiple interface pada satu class; (3) Mahasiswa mampu merancang sistem yang extensible berbasis abstraksi; (4) Mahasiswa mampu menggambarkan interface dan relasi realization di UML |
| **Materi Pembelajaran** | **Interface dalam C++**: abstract class yang seluruh method-nya pure virtual, tanpa data member, dengan virtual destructor; Perbedaan interface dengan abstract class biasa; Konvensi penamaan (`IPersistable`, `ILoggable`); **Multiple interface** pada satu class (multiple inheritance dari interface — kasus di mana multiple inheritance justru aman dan direkomendasikan); Interface sebagai **contract** antara penyedia dan pengguna; Programming to an interface, not an implementation; Desain sistem yang extensible: menambah implementasi baru tanpa mengubah kode pengguna; Hubungan **ADT dari SDA dengan interface**: formalisasi ADT menjadi interface C++; **UML Interface Notation**: stereotipe `<<interface>>` atau notasi lollipop (bola-dan-soket); **Relasi Realization**: garis putus-putus dengan panah segitiga kosong dari class implementer ke interface; Perbedaan visual dan semantik antara **generalization** (inheritance) dan **realization** (implementasi interface) |
| **Bentuk & Waktu Pembelajaran** | Teori: 2×50 menit (100 menit); Praktikum: 3×50 menit (150 menit) |
| **Metode Pembelajaran** | Ceramah interaktif, studi kasus desain sistem, diskusi kelompok |
| **Pengalaman Belajar** | Mahasiswa merancang interface `IPersistable`, `ISerializable`, dan `ILoggable`, kemudian mengimplementasikan class `SoldierRecord` dan `WeaponInventory` yang merealisasikan beberapa interface sekaligus; membuat class diagram lengkap dengan notasi realization yang membedakannya dari generalization |
| **Penilaian** | Tugas praktikum |
| **Estimasi Waktu Belajar Mandiri** | 420 menit |
| **Referensi** | Deitel Ch.12; Stroustrup Ch.21; Lippman Ch.15; Fowler Ch.3, 5 |
| **Sumber Praktikum** | UML Interfaces: https://www.uml-diagrams.org/class-diagrams-overview.html#interface; PlantUML: https://plantuml.com/class-diagram |

---

### PERTEMUAN 11: Operator Overloading

| Komponen | Uraian |
|----------|--------|
| **Sub-CPMK** | Sub-CPMK-2.8 |
| **Indikator Pencapaian** | (1) Mahasiswa mampu melakukan operator overloading untuk berbagai jenis operator; (2) Mahasiswa mampu memilih antara member dan non-member operator; (3) Mahasiswa mampu menerapkan operator overloading secara idiomatik dan konsisten |
| **Materi Pembelajaran** | Motivasi operator overloading: sintaks intuitif untuk user-defined type; Aturan dan batasan operator overloading di C++ (operator yang tidak dapat di-overload, tidak dapat membuat operator baru, tidak dapat mengubah precedence); **Member vs non-member operator overload**: kapan memilih yang mana; Overload operator arithmetic (`+`, `-`, `*`, `/`); Overload operator comparison (`==`, `!=`, `<`, `>`, `<=`, `>=`); Overload operator stream (`<<`, `>>`) — harus non-member, umumnya `friend`; Overload operator assignment (`=`) — koneksi dengan copy semantics di P3; Overload subscript (`[]`) — versi const dan non-const; Overload increment/decrement (`++`, `--`) — perbedaan prefix dan postfix; Overload function call operator (`()`) — functor; **Best practice**: konsistensi semantik (jika `==` di-overload, `!=` harus konsisten), jangan mengubah makna operator secara mengejutkan; Contoh lengkap: class `Vector3D`, class `Complex` |
| **Bentuk & Waktu Pembelajaran** | Teori: 2×50 menit (100 menit); Praktikum: 3×50 menit (150 menit) |
| **Metode Pembelajaran** | Ceramah interaktif, live coding, latihan terbimbing |
| **Pengalaman Belajar** | Mahasiswa membuat class `Vector3D` dengan seluruh operator matematika (penjumlahan, pengurangan, perkalian skalar, dot product, magnitude, perbandingan, stream output); menerapkan operator overloading pada class `SimpleString` dari P3 |
| **Penilaian** | Tugas praktikum |
| **Estimasi Waktu Belajar Mandiri** | 420 menit |
| **Referensi** | Deitel Ch.10; Stroustrup Ch.18; Lippman Ch.14; Meyers (Effective C++) Item 24 |
| **Sumber Praktikum** | Operator Overloading: https://en.cppreference.com/w/cpp/language/operators |

---

### PERTEMUAN 12: Templates Bagian 1 — Function Template dan Class Template

| Komponen | Uraian |
|----------|--------|
| **Sub-CPMK** | Sub-CPMK-5.1 |
| **Indikator Pencapaian** | (1) Mahasiswa mampu mengimplementasikan function template; (2) Mahasiswa mampu mengimplementasikan class template; (3) Mahasiswa mampu menjelaskan proses template instantiation |
| **Materi Pembelajaran** | Motivasi: dari code duplication (overloading berulang untuk tipe berbeda) ke generic code; **Function template**: sintaks deklarasi (`template <typename T>`), template argument deduction, explicit template argument, overloading function template; **Class template**: sintaks deklarasi, instantiation dengan tipe berbeda, member function di luar class body; **Template parameter**: type parameter (`typename T`), non-type parameter (`int N` — misalnya ukuran array tetap), default template argument; **Proses template instantiation**: template adalah "cetakan", kode nyata dihasilkan saat kompilasi berdasarkan tipe yang digunakan; **Mengapa template harus di header file**: implikasi model kompilasi C++; Pesan error template yang panjang dan cara membacanya; Contoh: `max<T>()`, `swap<T>()`, class template `Pair<T1, T2>`, `Array<T, N>` |
| **Bentuk & Waktu Pembelajaran** | Teori: 2×50 menit (100 menit); Praktikum: 3×50 menit (150 menit) |
| **Metode Pembelajaran** | Ceramah interaktif, live coding, latihan terbimbing bertahap |
| **Pengalaman Belajar** | Mahasiswa mengubah beberapa fungsi overloaded menjadi satu function template; mengimplementasikan class template `Pair<T1,T2>` dan `Stack<T>`; menguji template pada `int`, `double`, `std::string`, dan class kustom (`Soldier`) |
| **Penilaian** | Kuis, Tugas praktikum |
| **Estimasi Waktu Belajar Mandiri** | 420 menit |
| **Referensi** | Deitel Ch.18; Stroustrup Ch.23; Lippman Ch.16; Vandevoorde et al. Ch.1-2 |
| **Sumber Praktikum** | C++ Templates: https://en.cppreference.com/w/cpp/language/templates |

---

### PERTEMUAN 13: Templates Bagian 2 — Specialization, STL, dan Generic Container

| Komponen | Uraian |
|----------|--------|
| **Sub-CPMK** | Sub-CPMK-5.2 |
| **Indikator Pencapaian** | (1) Mahasiswa mampu menerapkan template specialization; (2) Mahasiswa mampu menggunakan STL container dan algorithm; (3) Mahasiswa mampu mengimplementasikan ulang struktur data dari SDA sebagai class template generic |
| **Materi Pembelajaran** | **Template specialization**: full specialization (implementasi khusus untuk tipe tertentu), partial specialization (untuk sebagian parameter template); Kapan specialization dibutuhkan (misalnya `Array<bool>`, penanganan `const char*`); **STL sebagai contoh nyata generic programming**: arsitektur STL (container, iterator, algorithm, function object); Sequence container (`vector`, `list`, `deque`), associative container (`map`, `set`); Iterator sebagai jembatan antara container dan algorithm; Algorithm umum (`sort`, `find`, `for_each`, `count_if`); Function object (functor) dan lambda expression sebagai predicate; **Hubungan template dengan struktur data dari SDA**: implementasi ulang Stack, Queue, dan LinkedList dari SDA sebagai class template generic yang bekerja untuk semua tipe; Perbandingan implementasi manual vs STL; Kapan menggunakan STL dan kapan menulis container sendiri; Pengenalan singkat Concepts (C++20) |
| **Bentuk & Waktu Pembelajaran** | Teori: 2×50 menit (100 menit); Praktikum: 3×50 menit (150 menit) |
| **Metode Pembelajaran** | Ceramah interaktif, live coding, latihan refactoring |
| **Pengalaman Belajar** | Mahasiswa mengimplementasikan ulang `LinkedList` dari SDA sebagai class template generic; membuat template specialization untuk kasus khusus; menyelesaikan serangkaian soal menggunakan STL container dan algorithm; membandingkan solusi manual dengan solusi STL |
| **Penilaian** | Tugas praktikum |
| **Estimasi Waktu Belajar Mandiri** | 420 menit |
| **Referensi** | Deitel Ch.15, 18; Stroustrup Ch.24, 31-33; Lippman Ch.9-11, 16; Josuttis Ch.6-7 |
| **Sumber Praktikum** | STL Containers: https://en.cppreference.com/w/cpp/container; STL Algorithms: https://en.cppreference.com/w/cpp/algorithm |

---

### PERTEMUAN 14: Exception Handling Lanjut dan Exception Safety

| Komponen | Uraian |
|----------|--------|
| **Sub-CPMK** | Sub-CPMK-6.1, Sub-CPMK-4.1 |
| **Indikator Pencapaian** | (1) Mahasiswa mampu merancang custom exception hierarchy; (2) Mahasiswa mampu menerapkan exception safety pada class; (3) Mahasiswa mampu menggambarkan hierarchy exception di class diagram |
| **Materi Pembelajaran** | Review exception handling dari DDP; **Exception hierarchy standar**: `std::exception` sebagai akar, dan turunannya (`std::runtime_error`, `std::logic_error`, `std::out_of_range`, `std::invalid_argument`, `std::bad_alloc`); **Custom exception class**: mewarisi `std::exception` atau turunannya, override `what()` — penerapan langsung inheritance dan polymorphism; Throw by value, catch by reference (dan mengapa demikian); Catch by base class untuk menangani seluruh hierarchy; Urutan catch block (dari spesifik ke umum); Re-throwing (`throw;`); **Exception safety guarantees**: no-throw guarantee, strong guarantee, basic guarantee — apa artinya dan bagaimana mencapainya; Copy-and-swap idiom untuk strong exception safety; `noexcept` specifier sebagai kontrak tidak melempar; Kebocoran resource saat exception dan pentingnya membebaskan resource di destructor; Best practice dan anti-pattern (exception untuk control flow normal); **UML**: memodelkan exception hierarchy sebagai class diagram dengan generalization dari `std::exception` |
| **Bentuk & Waktu Pembelajaran** | Teori: 2×50 menit (100 menit); Praktikum: 3×50 menit (150 menit) |
| **Metode Pembelajaran** | Ceramah interaktif, demonstrasi kasus exception unsafe, latihan |
| **Pengalaman Belajar** | Mahasiswa merancang exception hierarchy untuk aplikasi inventaris (`InventoryException` → `ItemNotFoundException`, `StockDepletedException`, `AccessDeniedException`), membuat class diagram-nya, dan mengimplementasikan class dengan strong exception safety guarantee |
| **Penilaian** | Kuis, Tugas praktikum |
| **Estimasi Waktu Belajar Mandiri** | 420 menit |
| **Referensi** | Deitel Ch.17; Stroustrup Ch.13; Lippman Ch.18; Meyers (Effective C++) Item 29 |
| **Sumber Praktikum** | C++ Exceptions: https://en.cppreference.com/w/cpp/error/exception; Exception Safety: https://en.cppreference.com/w/cpp/language/exceptions |

---

### PERTEMUAN 15: Interaksi Obyek — Sequence Diagram, Use Case, dan Studi Kasus Terintegrasi

| Komponen | Uraian |
|----------|--------|
| **Sub-CPMK** | Sub-CPMK-4.3, Sub-CPMK-4.4, Sub-CPMK-7.1 |
| **Indikator Pencapaian** | (1) Mahasiswa mampu membuat use case diagram untuk memodelkan fungsionalitas sistem; (2) Mahasiswa mampu membuat sequence diagram untuk memodelkan interaksi antar obyek; (3) Mahasiswa mampu mengintegrasikan seluruh sifat OOP dalam satu studi kasus |
| **Materi Pembelajaran** | **UML Use Case Diagram**: aktor (actor), use case, system boundary, relasi (association, `<<include>>`, `<<extend>>`, generalization aktor); Tujuan use case diagram: menangkap functional requirement dari perspektif pengguna; **UML Sequence Diagram**: lifeline, activation bar, synchronous message, return message, self-message, create dan destroy message, combined fragment (`alt`, `opt`, `loop`); Tujuan sequence diagram: memodelkan bagaimana obyek berkolaborasi untuk memenuhi sebuah use case; **Alur kerja lengkap**: use case (apa yang sistem lakukan) → class diagram (struktur statis) → sequence diagram (perilaku dinamis) → implementasi C++; **Studi Kasus Terintegrasi**: pengembangan aplikasi sistem manajemen inventaris senjata dari analisis hingga implementasi, menerapkan seluruh sifat OOP (encapsulation, inheritance, polymorphism, abstraction), relasi antar obyek, class template untuk container, operator overloading, dan exception handling; Review menyeluruh dan persiapan UAS |
| **Bentuk & Waktu Pembelajaran** | Teori: 2×50 menit (100 menit); Praktikum: 3×50 menit (150 menit) |
| **Metode Pembelajaran** | Ceramah interaktif, workshop pemodelan, integrasi studi kasus |
| **Pengalaman Belajar** | Mahasiswa membuat use case diagram dan sequence diagram untuk sistem manajemen inventaris senjata, kemudian mengimplementasikan sistem tersebut dalam C++ dengan menerapkan seluruh sifat OOP yang telah dipelajari sepanjang semester |
| **Penilaian** | Tugas praktikum terintegrasi |
| **Estimasi Waktu Belajar Mandiri** | 420 menit |
| **Referensi** | Fowler Ch.4, 9; Booch et al. Ch.16-18; Deitel (studi kasus terintegrasi) |
| **Sumber Praktikum** | PlantUML Sequence: https://plantuml.com/sequence-diagram; PlantUML Use Case: https://plantuml.com/use-case-diagram; UML Use Case: https://www.uml-diagrams.org/use-case-diagrams.html |

---

### PERTEMUAN 16: UJIAN AKHIR SEMESTER (UAS)

**Cakupan:** Pertemuan 1-15 (penekanan pada Pertemuan 9-15)
- **Abstraction**: Abstract Class, Pure Virtual Function, Interface, Realization
- Operator Overloading
- Templates: Function Template, Class Template, Specialization, STL
- Exception Handling Lanjut dan Exception Safety
- UML: Sequence Diagram, Use Case Diagram
- Integrasi seluruh sifat OOP

**Bentuk Ujian:**
- Teori (40%): Konsep OOP lanjut, pemodelan UML komprehensif, analisis dan koreksi desain
- Praktikum (60%): Studi kasus terintegrasi — dari use case diagram atau class diagram yang diberikan menjadi implementasi C++ yang menerapkan keempat pilar OOP, relasi antar obyek, dan exception handling

**Durasi:** 100 menit teori, 150 menit praktikum

---

## KOMPONEN PENILAIAN

| Komponen | Bobot | Keterangan |
|----------|:-----:|------------|
| Tugas Praktikum | 30% | Tugas praktikum di setiap pertemuan materi (14 pertemuan) |
| Kuis | 10% | Kuis di pertemuan 2, 4, 6, 9, 12, 14 |
| Ujian Tengah Semester (UTS) | 25% | Teori + Praktikum (Pertemuan 1-7) |
| Ujian Akhir Semester (UAS) | 30% | Teori + Praktikum (Pertemuan 1-15, penekanan 9-15) |
| Partisipasi & Kehadiran | 5% | Keaktifan dan kehadiran |
| **Total** | **100%** | |

### Kriteria Penilaian

| Nilai | Rentang | Keterangan |
|:-----:|:-------:|------------|
| A | 85 - 100 | Sangat Baik |
| A- | 80 - 84 | Hampir Sangat Baik |
| B+ | 75 - 79 | Lebih dari Baik |
| B | 70 - 74 | Baik |
| B- | 65 - 69 | Hampir Baik |
| C+ | 60 - 64 | Lebih dari Cukup |
| C | 55 - 59 | Cukup |
| D | 40 - 54 | Kurang |
| E | 0 - 39 | Sangat Kurang |

### Rubrik Penilaian Praktikum

| Aspek | Bobot | Kriteria |
|-------|:-----:|----------|
| Correctness | 30% | Program berjalan benar sesuai spesifikasi |
| Penerapan Sifat OOP | 30% | Encapsulation, inheritance, polymorphism, abstraction diterapkan tepat |
| Konsistensi UML dengan Kode | 20% | Diagram UML konsisten dengan implementasi kode |
| Code Quality | 10% | C++ best practices, const correctness, readability, komentar |
| Penyajian | 10% | Kerapian, kejelasan, dan kelengkapan jawaban |

### Rubrik Penilaian Studi Kasus Terintegrasi (P15 & UAS Praktikum)

| Aspek | Bobot | Kriteria |
|-------|:-----:|----------|
| Use Case Diagram | 10% | Kelengkapan dan ketepatan aktor, use case, dan relasinya |
| Class Diagram | 20% | Notasi lengkap: atribut, method, visibility, relasi, multiplicity |
| Sequence Diagram | 15% | Interaksi obyek untuk skenario utama tergambar benar |
| Encapsulation & Access Control | 10% | Enkapsulasi tepat, const correctness |
| Inheritance & Polymorphism | 15% | Hierarki dan virtual function digunakan tepat |
| Abstraction (Abstract Class/Interface) | 15% | Pemisahan interface dan implementasi yang benar |
| Exception Handling | 10% | Exception hierarchy dan penanganan error yang tepat |
| Dokumentasi | 5% | README dan komentar kode |

---

## ATURAN PERKULIAHAN

1. **Kehadiran**: Minimal 80% dari total pertemuan untuk dapat mengikuti UAS
2. **Keterlambatan Tugas**: Pengurangan 10% per hari keterlambatan, maksimal 3 hari
3. **Plagiarisme**: Pelanggaran akan dikenai sanksi sesuai peraturan akademik (nilai 0 untuk komponen terkait). Penggunaan AI tools (ChatGPT, Copilot, Claude) harus dideklarasikan
4. **Praktikum**: Wajib hadir dan menyelesaikan tugas praktikum setiap pertemuan
5. **Ujian Susulan**: Hanya diberikan dengan alasan yang sah dan bukti pendukung
6. **IDE**: Mahasiswa wajib menggunakan Code::Blocks (konsisten dengan DDP/SDA) sebagai IDE utama, dengan compiler MinGW GCC yang mendukung C++17
7. **UML Tool**: PlantUML sebagai tool default; alternatif: draw.io, StarUML
8. **Version Control**: Seluruh tugas wajib di-commit ke Git repository

---

## KETERHUBUNGAN DENGAN MATA KULIAH LAIN

### Mata Kuliah Prasyarat
- **Dasar-Dasar Pemrograman (DDP101, Semester 1)**: Memperkenalkan konsep dasar class, object, encapsulation dalam C++
- **Struktur Data dan Algoritma (SDA201, Semester 2)**: Memperkenalkan ADT dan struktur data yang akan diimplementasikan ulang dengan paradigma OOP yang matang dan class template di mata kuliah ini

### Hubungan Sinergi dengan SDA
| Konsep di SDA (Implementasi C++) | Pengembangan di PBO |
|----------------------------------|---------------------|
| ADT dengan struct + functions | Abstract class dengan pure virtual function (P9) |
| Konsep pemisahan interface dan implementasi | Interface C++ dan relasi realization (P10) |
| Linked list/Stack/Queue untuk tipe tertentu | Class template generic untuk semua tipe (P12-P13) |
| Implementasi struktur data manual | Perbandingan dengan STL container (P13) |
| Penanganan kondisi error sederhana | Exception hierarchy dan exception safety (P14) |

### Mata Kuliah Lanjutan yang Didukung

| Semester | Mata Kuliah | Kontribusi PBO |
|----------|-------------|----------------|
| 3 | Basis Data | Entity modeling menggunakan class diagram |
| 4 | Rekayasa Perangkat Lunak | UML lanjutan, prinsip desain OOP, design patterns |
| 4 | Pemrograman GUI dan Aplikasi Desktop | Event-driven OOP, Qt framework (berbasis C++) |
| 4 | Kecerdasan Artifisial | OOP untuk algoritma AI (agent-based) |
| 4 | Mikrokontroler dan Mikroprosesor | OOP untuk embedded (Arduino C++) |
| 5 | Pemrograman Web Dasar | Konsep OOP dalam server-side programming |
| 6 | Pemrograman Web Berbasis Framework | Arsitektur OOP framework (MVC) |
| 6 | Manajemen Proyek Perangkat Lunak | Pemahaman desain berorientasi obyek |

### Kontribusi ke Bidang Pertahanan
Mata kuliah ini memberikan fondasi desain perangkat lunak berorientasi obyek untuk:
- Pengembangan sistem informasi militer dengan model class yang jelas dan terdokumentasi
- Arsitektur sistem C4ISR (Command, Control, Communications, Computers, Intelligence, Surveillance, Reconnaissance) yang membutuhkan performa tinggi
- Sistem simulasi dan training berbasis obyek (game engine umumnya berbasis C++ OOP)
- Sistem embedded untuk perangkat pertahanan (kendali senjata, drone, radar)
- Pengembangan tools forensik digital dengan model class yang extensible

---

## DAFTAR PUSTAKA LENGKAP

### Referensi Utama
1. Deitel, P.J. & Deitel, H.M. (2017). *C++ How to Program* (10th Ed.). Pearson. ISBN: 978-0134448237
2. Stroustrup, B. (2013). *The C++ Programming Language* (4th Ed.). Addison-Wesley Professional. ISBN: 978-0321563842
3. Lippman, S.B., Lajoie, J., & Moo, B.E. (2012). *C++ Primer* (5th Ed.). Addison-Wesley. ISBN: 978-0321714114

### Referensi UML
4. Fowler, M. (2003). *UML Distilled: A Brief Guide to the Standard Object Modeling Language* (3rd Ed.). Addison-Wesley. ISBN: 978-0321193681
5. Booch, G., Rumbaugh, J., & Jacobson, I. (2005). *The Unified Modeling Language User Guide* (2nd Ed.). Addison-Wesley. ISBN: 978-0321267979

### Referensi C++ Best Practices
6. Meyers, S. (2005). *Effective C++: 55 Specific Ways to Improve Your Programs and Designs* (3rd Ed.). Addison-Wesley. ISBN: 978-0321334879
7. Josuttis, N.M. (2012). *The C++ Standard Library: A Tutorial and Reference* (2nd Ed.). Addison-Wesley. ISBN: 978-0321623218
8. Vandevoorde, D., Josuttis, N.M., & Gregor, D. (2017). *C++ Templates: The Complete Guide* (2nd Ed.). Addison-Wesley. ISBN: 978-0321714121

### Sumber Online
9. C++ Reference: https://en.cppreference.com/
10. ISO C++ Core Guidelines: https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines
11. LearnCpp: https://www.learncpp.com/
12. PlantUML: https://plantuml.com/
13. UML Diagrams: https://www.uml-diagrams.org/
14. Compiler Explorer: https://godbolt.org/

---

## MEDIA DAN SUMBER BELAJAR

### Perangkat Keras
- PC/Laptop (minimum 8GB RAM, 256GB storage)
- Koneksi internet untuk mengakses resources online dan version control

### Perangkat Lunak

| Kategori | Tools | Sumber |
|----------|-------|--------|
| IDE Utama | Code::Blocks (dengan MinGW GCC) | https://www.codeblocks.org/ |
| Compiler | MinGW-w64 GCC (mendukung C++17) | https://www.mingw-w64.org/ |
| IDE Alternatif | Visual Studio Code, CLion, Visual Studio | https://code.visualstudio.com/ |
| UML Tool Utama | PlantUML | https://plantuml.com/ |
| UML Tool Alternatif | draw.io, StarUML, Visual Paradigm | https://app.diagrams.net/ |
| Version Control | Git + GitHub | https://git-scm.com/ |
| Online C++ Playground | Compiler Explorer | https://godbolt.org/ |

### Sumber Belajar Online

| Sumber | Deskripsi | URL |
|--------|-----------|-----|
| C++ Reference | Referensi lengkap bahasa C++ | https://en.cppreference.com/ |
| ISO C++ | Situs resmi standar C++ | https://isocpp.org/ |
| C++ Core Guidelines | Pedoman best practice modern C++ | https://isocpp.github.io/CppCoreGuidelines/ |
| LearnCpp | Tutorial C++ terstruktur | https://www.learncpp.com/ |
| UML Diagrams | Referensi lengkap notasi UML | https://www.uml-diagrams.org/ |
| GitHub | Repository kolaborasi kode | https://github.com/ |

---

## CATATAN PENTING

1. **Fokus Utama**: Mata kuliah ini berfokus pada **sifat-sifat OOP fundamental** (encapsulation, inheritance, polymorphism, abstraction) dan **relasi antar obyek** (association, aggregation, composition). Topik lanjutan seperti design patterns, prinsip SOLID, arsitektur perangkat lunak, dan unit testing berada di luar cakupan mata kuliah ini dan akan dipelajari pada mata kuliah **Rekayasa Perangkat Lunak (Semester 4)**.

2. **Alokasi Pertemuan Ganda untuk Materi Sulit**: Berdasarkan pengalaman pengajaran, dua topik yang paling sulit dikuasai mahasiswa mendapat alokasi dua pertemuan:
   - **Abstraction (P9-P10)**: Konsep abstract class dan interface bersifat abstrak dan memerlukan pergeseran cara berpikir dari "bagaimana mengimplementasikan" ke "apa kontraknya". Pemisahan menjadi dua pertemuan memungkinkan mahasiswa memahami abstract class terlebih dahulu (P9), lalu naik ke interface dan desain polimorfik (P10).
   - **Templates (P12-P13)**: Generic programming memiliki sintaks yang rumit, pesan error yang panjang, dan model kompilasi yang berbeda dari kode biasa. Pemisahan memungkinkan mahasiswa menguasai sintaks dasar template (P12) sebelum masuk ke specialization dan pemanfaatan STL (P13).

3. **Konsistensi Bahasa**: Mata kuliah ini menggunakan C++ untuk konsistensi penuh dengan DDP (semester 1) dan SDA (semester 2). Mahasiswa dapat langsung membangun di atas fondasi yang sudah ada tanpa perlu transisi bahasa.

4. **Standar C++**: Materi mengacu pada standar **C++17** sebagai baseline. Fitur C++20 hanya disinggung secara singkat sebagai pengenalan. Mahasiswa wajib menggunakan kompiler yang mendukung minimal C++17.

5. **UML sebagai Alat, Bukan Tujuan**: UML diajarkan sebagai alat komunikasi desain. Hanya diagram yang berkaitan langsung dengan OOP yang dibahas: **Class Diagram** (paling utama, muncul di P2, P4, P5, P6, P9, P10, P14), **Object Diagram** (P5), **Sequence Diagram** (P15), dan **Use Case Diagram** (P15). Diagram Activity, State, Component, dan Deployment tidak dibahas.

6. **Pendalaman dari SDA**: Struktur data linked list/stack/queue dari SDA akan diimplementasikan ulang sebagai class template generic di PBO (P12-P13). Mahasiswa diharapkan membawa kode dari SDA sebagai bahan refactoring.

7. **Plagiarisme Kode**: Tugas pemrograman harus dikerjakan secara mandiri. Penggunaan AI coding assistant (GitHub Copilot, ChatGPT, Claude) diperbolehkan untuk eksplorasi dan debugging, namun **harus dideklarasikan** dalam komentar kode dan laporan. Kode final tetap harus dipahami sepenuhnya oleh mahasiswa (akan diuji melalui sesi tanya-jawab).

8. **Version Control**: Seluruh kode wajib di-commit ke Git repository (GitHub/GitLab).

9. **Code Style**: Kode disarankan mengikuti panduan ISO C++ Core Guidelines.

10. **Konsistensi UML–Kode**: Salah satu kriteria penilaian yang penting adalah **konsistensi antara diagram UML dan kode implementasi**. Setiap tugas praktikum yang melibatkan pemodelan wajib menyertakan diagram UML yang konsisten dengan kode.

---

## KONTRAK PERKULIAHAN

Mahasiswa yang mengikuti mata kuliah ini dianggap telah menyetujui:
1. Mengikuti minimal 80% pertemuan untuk dapat mengikuti UAS
2. Mengumpulkan tugas dan laporan praktikum sesuai tenggat waktu
3. Menggunakan Code::Blocks dengan compiler yang mendukung C++17 sebagai environment utama
4. Menggunakan PlantUML sebagai tool UML utama
5. Mengerjakan tugas secara mandiri dan mendeklarasikan penggunaan AI tools
6. Menyiapkan laptop dengan IDE yang telah terinstal sebelum praktikum
7. Menggunakan Git untuk version control seluruh pekerjaan
8. Mengikuti ISO C++ Core Guidelines dalam seluruh penulisan kode
9. Menjaga konsistensi antara diagram UML dan kode implementasi

---

*Dokumen ini disusun berdasarkan prinsip Outcome-Based Education (OBE) dan dapat direvisi sesuai kebutuhan pembelajaran.*

**Disusun oleh:**  
Anindito, S.Kom., S.S., S.H., M.TI., CHFI.

**Disetujui oleh:**  
Ketua Program Studi

**Tanggal:** [Tanggal Pengesahan]

---

## License

This repository is licensed under the **Creative Commons Attribution 4.0 International (CC BY 4.0)**.

Commercial use is permitted, provided attribution is given to the author.

© 2026 Anindito
