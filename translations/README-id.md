# Coding Interview University

Versi asli: [Bahasa Inggris](../README.md)

<div align="center">
	<hr />
    <p>
        <a href="https://github.com/sponsors/jwasham"><strong>Become a sponsor</strong> and support Coding Interview University!</a>
    </p>
    <hr />
</div>

## Ringkasan apa ini?

Ini adalah rencana studi multi-bulan saya untuk beralih dari pengembang web (otodidak, tanpa gelar Ilmu Komputer) menjadi insinyur perangkat lunak untuk perusahaan besar.

![Menulis kode di papan tulis - dikutip dari serial TV Silicon Valley oleh HBO](https://d3j2pkmjtin6ou.cloudfront.net/coding-at-the-whiteboard-silicon-valley.png)

Ini dimaksudkan untuk **teknisi perangkat lunak baru** atau mereka yang beralih dari pengembangan perangkat lunak/web ke rekayasa perangkat lunak (yang memerlukan pengetahuan ilmu komputer).
Jika Anda memiliki pengalaman bertahun-tahun dan mengklaim pengalaman rekayasa perangkat lunak bertahun-tahun, nantikan wawancara yang lebih sulit.

Jika Anda memiliki pengalaman pengembangan perangkat lunak/web selama bertahun-tahun, perhatikan bahwa perusahaan perangkat lunak besar seperti Google, Amazon, Facebook, dan Microsoft memandang rekayasa perangkat lunak berbeda dari pengembangan perangkat lunak/web, dan mereka memerlukan pengetahuan ilmu komputer.

Jika Anda ingin menjadi insinyur keandalan atau insinyur operasi, pelajari lebih lanjut dari daftar opsional (jaringan, keamanan).

---

## Daftar Isi

- [Apa ini?](#ringkasan-apa-ini)
- [Mengapa menggunakan ini?](#mengapa-menggunakan-ini)
- [Bagaimana cara menggunakannya](#bagaimana-cara-menggunakannya)
- [Jangan merasa anda kurang pintar](#jangan-merasa-anda-kurang-pintar)
- [Tentang Sumber Video](#tentang-sumber-video)
- [Proses Interview dan Preparasi Wawancara Secara Umum](#proses-interview-dan-preparasi-wawancara-secara-umum)
- [Pilih Satu Bahasa Pemrograman untuk Wawancara](#pilih-satu-bahasa-pemrograman-untuk-wawancara)
- [Daftar Buku](#daftar-buku)
- [Sebelum Anda Mulai](#sebelum-anda-mulai)
- [Apa yang Tidak Akan Dibahas](#apa-yang-tidak-akan-dibahas)
- [Ilmu Prasyarat](#ilmu-prasyarat)
- [Rencana Harian](#rencana-harian)
- [Kompleksitas Algoritma / Big-O / Analisis Asimptotik](#kompleksitas-algoritma--big-o--analisis-asimptotik)
- [Struktur Data](#struktur-data)
    - [Arrays](#arrays)
    - [Linked Lists](#linked-lists)
    - [Stack](#stack)
    - [Queue](#queue)
    - [Hash table](#hash-table)
- [Lebih Banyak Pengetahuan](#lebih-banyak-pengetahuan)
    - [Pencarian Biner](#pencarian-biner)
    - [Operasi Bitwise](#operasi-bitwise)
- [Trees](#trees)
    - [Trees - Catatan & Latar Belakang](#trees---catatan--latar-belakang)
    - [Binary search trees: BSTs](#binary-search-trees-bsts)
    - [Heap / Prioritas Antrian / Biner Heap](#heap-/-prioritas-antrian-/-biner-heap)
- [Penyortiran](#penyortiran)
    - selection
    - insertion
    - heapsort
    - quicksort
    - merge sort
- [Graphs](#graphs)
    - directed
    - undirected
    - adjacency matrix
    - adjacency list
    - traversals: BFS, DFS
- [Bahkan Lebih Banyak Pengetahuan](#bahkan-lebih-banyak-pengetahuan)
    - [Pengulangan (Recursion)](#pengulangan-(recursion))
    - [Pemrograman Dinamis](#pemrograman-dinamis)
    - [Pemrograman Berorientasi Objek](#pemrograman-berorientasi-objek)
    - [Pola desain (Design patterns)](#pola-desain-(design-patterns))
    - [Kombinatorik (n pilih k) & Probabilitas](#kombinatorik-(n-pilih-k)-&-probabilitas)
    - [Algoritma NP, NP-Complete dan Approximation](#algoritma-np,-np-complete-dan-approximation)
    - [Cache](#cache)
    - [Proses dan Thread](#proses-dan-thread)
    - [Testing](#testing)
    - [Penjadwalan](#penjadwalan)
    - [Pencarian & manipulasi string](#pencarian-&-manipulasi-string)
    - [Tries](#tries)
    - [Angka Floating Point](#angka-floating-point)
    - [Unicode](#unicode)
    - [Endianness](#endianness)
    - [Jaringan](#jaringan)
- [Perancangan Sistem, Skalabilitas, Penganganan Data](#Perancangan-Sistem,-Skalabilitas,-Penganganan-Data) (jika anda memiliki pengalaman 4 tahun lebih)
- [Ulasan Akhir](#ulasan-akhir)
- [Latihan Pertanyaan Pemrograman](#latihan-pertanyaan-pemrograman)
- [Latihan / tantangan coding](#latihan--tantangan-coding)
- [Menjelang Proses Interview](#menjelang-proses-interview)
- [Resume Anda](#resume-anda)
- [Pikirkan saat wawancara datang](#pikirkan-saat-wawancara-datang)
- [Bertanyalah Pada Pewawancara](#bertanyalah-pada-pewawancara)
- [Saat Anda Berhasil Mendapatkan Pekerjaannya](#saat-anda-berhasil-mendapatkan-pekerjaannya)

---------------- Semua dibawah ini bersifat opsional ----------------

- [Buku Tambahan](#buku-tambahan)
- [Pembelajaran Tambahan](#pembelajaran-tambahan)
    - [Kompilator](#kompilator)
    - [Emacs and vi(m)](#emacs-and-vim)
    - [Unix command line tools](#unix-command-line-tools)
    - [Teori Informasi](#teori-informasi-video)
    - [Pariti & Kode Hamming](#pariti--kode-hamming)
    - [Entropi](#entropi)
    - [Kriptografi](#kriptografi)
    - [Kompresi](#kompresi)
    - [Jaringan](#jaringan) (bersiaplah mendapatkan pertanyaan jaringan apabila anda ingin menjadi system engineer)
    - [Keamanan komputer](#keamanan-komputer)
    - [Pengumpulan sampah (Garbage collection)](#pengumpulan-sampah)
    - [Pemrograman Paralel](#pemrograman-paralel)
    - [Pengiriman Pesan, Serialisasi, dan Sistem Queueing](#pengiriman-pesan-serialisasi-dan-sistem-queueing)
    - [A*](#a)
    - [Transformasi Fourier Cepat](#transformasi-fourier-cepat)
    - [Bloom Filter](#bloom-filter)
    - [HyperLogLog](#hyperloglog)
    - [Locality-Sensitive Hashing](#locality-sensitive-hashing)
    - [van Emde Boas Trees](#van-emde-boas-trees)
    - [Augmented Data Structures](#augmented-data-structures)
    - [Tries](#tries)
    - [N-ary (K-ary, M-ary) trees](#n-ary-k-ary-m-ary-trees)
    - [Balanced search trees](#balanced-search-trees)
        - AVL trees
        - Splay trees
        - Red/black trees
        - 2-3 search trees
        - 2-3-4 Trees (aka 2-4 trees)
        - N-ary (K-ary, M-ary) trees
        - B-Trees
    - [k-D Trees](#k-d-trees)
    - [Skip lists](#skip-lists)
    - [Aliran Jaringan](#aliran-jaringan)
    - [Disjoint Sets & Union Find](#disjoint-sets--union-find)
    - [Matematika untuk Pemrosesan Cepat](#matematika-untuk-pemrosesan-cepat)
    - [Treap](#treap)
    - [Pemrograman Linear](#pemrograman-linear-video)
    - [Geometri, Convex hull](#geometri-convex-hull-video)
    - [Matematika Diskrit](#matematika-diskrit)
    - [Pembelajaran Mesin](#pembelajaran-mesin-machine-learning)
- [Detail Tambahan tentang Beberapa Subjek](#detail-tambahan-tentang-beberapa-subjek)
- [Seri Video](#seri-video)
- [Kursus Ilmu Komputer](#kursus-ilmu-komputer)
- [Implementasi Algoritma](#implementasi-algoritma)
- [Dokumen](#dokumen)

---

## Mengapa menggunakan ini?

Saya mengikuti rencana ini untuk mempersiapkan saya dalam menghadapi wawancara kerja Google. Sejak 1997, saya telah menciptakan berbagai situs, servis, dan mendirikan startup. Saya memiliki gelar ekonomi, bukan gelar ilmu komputer. Saya telah meraih kesuksesan dalam karir saya, tapi saya ingin bekerja di Google. Saya ingin masuk ke sistem yang lebih besar dan mempunyai pemahaman mendalam tentang sistem komputer, efesiensi algoritma, performa struktur data, bahasa tingkat rendah, dan bagaimana semuanya bekerja. Jika anda tidak mengetahui satu pun, Google tidak akan mempekerjakan anda.

Itu rencana yang panjang. Mungkin butuh waktu berbulan-bulan. Jika Anda sudah terbiasa dengan hal ini, Anda akan membutuhkan lebih sedikit waktu.

## Bagaimana cara menggunakannya?

Apapun dibawah ini adalah garis besar, dan anda harus menguasai materi dari atas ke bawah secara runut.

Saya menggunakan markdown spesial dari Github, termasuk daftar tugas untuk mengecek perkembangan.

**Buat branch baru sehingga anda bisa mencentang seperti ini, bubuhi tanda x dalam tanda kurung: [x]**


    Fork sebuah branch dan ikuti perintah berikut

`git checkout -b progress`

`git remote add jwasham https://github.com/jwasham/coding-interview-university`

`git fetch --all`

    Tandai semua kotak dengan tanda X setalah anda menyelesaikannya

`git add . `

`git commit -m "Tandai x" `

`git rebase jwasham/main `

`git push --force `

[Lebih jauh tentang markdown Github](https://guides.github.com/features/mastering-markdown/#GitHub-flavored-markdown)

## Jangan merasa anda kurang pintar
- Para engineers/programmer di google adalah orang-orang pintar, tapi banyak dari mereka berpikir bahwa mereka tidak cukup pintar, walaupun mereka bekerja di Google.
- [Mitos dari programmer yang jenius](https://www.youtube.com/watch?v=0SARbwvhupQ)
- [Hal yang berbahaya untuk pergi sendirian: Bertarung dengan monster yang tidak kelihatan di dunia teknologi](https://www.youtube.com/watch?v=1i8ylq4j_EY)

## Tentang Sumber Video

Beberapa video hanya tersedia dengan mendaftar di kelas Coursera atau EdX. Ini disebut MOOC.
Terkadang kelas tidak dalam sesi jadi Anda harus menunggu beberapa bulan, jadi Anda tidak memiliki akses.

    Saya menghargai bantuan Anda untuk menambahkan sumber publik yang gratis dan selalu tersedia, seperti video YouTube untuk menyertai video kursus online.
    Saya suka menggunakan kuliah universitas.

## Proses Interview dan Preparasi Wawancara Secara Umum

- [ ] [ABC: Selalu Menjadi Coding](https://medium.com/always-be-coding/abc-always-be-coding-d5f8051afce2#.4heg8zvm4)
- [ ] [Papan tulis (Whiteboarding)](https://medium.com/@dpup/whiteboarding-4df873dbba2e#.hf6jn45g1)
- [ ] [Memperlihatkan Perekrutan Teknologi](https://www.youtube.com/watch?v=N233T0epWTs)
- [ ] Cara Mendapatkan Pekerjaan di Big 4:
    - [ ] [Cara Mendapatkan Pekerjaan di Big 4 - Amazon, Facebook, Google & Microsoft (video)](https://www.youtube.com/watch?v=YJZCUhxNCv8)
- [ ] Memecahkan Set Wawancara Coding 1:
    - [ ] [Gayle L McDowell - Memecahkan The Coding Interview (video)](https://www.youtube.com/watch?v=rEJzOhC5ZtQ)
    - [ ] [Memecahkan Wawancara Coding dengan Penulis Gayle Laakmann McDowell (video)](https://www.youtube.com/watch?v=aClxtDcdpsQ)
- [ ] Memecahkan Wawancara Coding Facebook:
    - [ ] [Pendekatan](https://www.youtube.com/watch?v=wCl9kvQGHPI)
    - [ ] [Panduan Masalah](https://www.youtube.com/watch?v=4UWDyJq8jZg)
- [ ] Kursus Persiapan:
    - [ ] [Wawancara Insinyur Perangkat Lunak Unleashed (kursus berbayar)](https://www.udemy.com/software-engineer-interview-unleashed):
        - Pelajari cara mempersiapkan diri Anda untuk wawancara insinyur perangkat lunak dari mantan pewawancara Google.
    - [ ] [Python untuk Struktur Data, Algoritma, dan Wawancara (kursus berbayar)](https://www.udemy.com/python-for-data-structures-algorithms-and-interviews/):
        - Kursus persiapan wawancara sentris Python yang mencakup struktur data, algoritma, wawancara tiruan, dan banyak lagi.
    - [ ] [Pengantar Struktur Data dan Algoritma menggunakan Python (kursus gratis Udacity)](https://www.udacity.com/course/data-structures-and-algorithms-in-python--ud513):
        - Kursus algoritme dan struktur data sentris Python gratis.
    - [ ] [Struktur Data dan Algoritma Nanodegree! (Nanodegree berbayar Udacity)](https://www.udacity.com/course/data-structures-and-algorithms-nanodegree--nd256):
        - Dapatkan praktik langsung dengan lebih dari 100 struktur data dan latihan algoritme serta panduan dari mentor yang berdedikasi untuk membantu mempersiapkan Anda untuk wawancara dan skenario di tempat kerja.
    - [ ] [Grokking Interview Perilaku (Kursus gratis edukatif)](https://www.educative.io/courses/grokking-the-behavioral-interview):
        - Sering kali, bukan kompetensi teknis Anda yang menahan Anda untuk mendapatkan pekerjaan impian Anda, melainkan bagaimana Anda melakukan wawancara perilaku.

## Pilih Satu Bahasa Pemrograman untuk Wawancara

Anda dapat menggunakan bahasa yang Anda sukai untuk melakukan bagian pengkodean dalam wawancara, tetapi untuk perusahaan besar, ini adalah pilihan yang tepat:

- C++
- Java
- Python

Anda juga bisa menggunakan ini, tapi bacalah dulu. Mungkin ada peringatan:

- JavaScript
- Ruby

Berikut adalah artikel yang saya tulis tentang memilih bahasa untuk wawancara: [Pilih Satu Bahasa untuk Wawancara Coding](https://startupnextdoor.com/important-pick-one-language-for-the-coding-interview/).

Anda harus sangat nyaman dalam bahasa tersebut dan berpengetahuan luas.

Baca lebih lanjut tentang pilihan:
- http://www.byte-by-byte.com/choose-the-right-language-for-your-coding-interview/
- http://blog.codingforinterviews.com/best-programming-language-jobs/

[Lihat sumber bahasa di sini](../programming-language-resources.md)

Anda akan melihat beberapa pembelajaran C, C++, dan Python yang disertakan di bawah ini, karena saya sedang belajar. Ada beberapa buku yang terlibat, lihat bagian bawah.

## Daftar Buku

Ini adalah daftar pendek yang saya gunakan. Ini disingkat untuk menghemat waktu Anda.

### Persiapan Interview

- [ ] [Programming Interviews Exposed: Secrets to Landing Your Next Job, 4th Edition](https://www.wiley.com/en-us/Programming+Interviews+Exposed%3A+Coding+Your+Way+Through+the+Interview%2C+4th+Edition-p-9781119418481)
    - jawaban di C++ and Java
    - direkomendasikan di Google candidate coaching
    - ini adalah pemanasan yang baik untuk Cracking the Coding Interview
    - tidak terlalu sulit, kebanyakan masalah mungkin lebih mudah daripada apa yang akan anda lihat dalam sebuah wawancara (dari apa yang saya baca)
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - jawaban in Java

### Jika anda memiliki banyak waktu:

- [ ] [Elements of Programming Interviews (versi C++)](https://www.amazon.com/Elements-Programming-Interviews-Insiders-Guide/dp/1479274836)
- [ ] [Elements of Programming Interviews in Python](https://www.amazon.com/Elements-Programming-Interviews-Python-Insiders/dp/1537713949/)
- [ ] Elements of Programming Interviews (Java version)
    - [book](https://www.amazon.com/Elements-Programming-Interviews-Java-Insiders/dp/1517435803/)
    - [Companion Project - Method Stub and Test Cases for Every Problem in the Book](https://github.com/gardncl/elements-of-programming-interviews)

### Bahasa Spesifik

**Anda harus memilih sebuah bahasa pemgrograman untuk wawancara (lihat diatas).**

Berikut adalah rekomendasi bahasa dari saya. Saya tidak memiliki sumber daya untuk semua bahasa. Saya menyambut penambahan.

Jika meskipun anda membaca salah satu dari ini, anda harus memiliki semua pengetahuan struktur data dan algoritma, anda harus mulai melakukan pemecahan masalah koding.
**Anda dapat melewati semua video ceramah di proyek ini**, kecuali jika anda ingin sebuah review.

[Sumber daya khusus bahasa tambahan di sini.](../programming-language-resources.md)

### C++

Saya belum membaca keduanya. tapi mereka dinilai sangat bagus dan ditulis oleh Sedgewick. Dia mengagumkan.

- [ ] [Algorithms in C++, Parts 1-4: Fundamentals, Data Structure, Sorting, Searching](https://www.amazon.com/Algorithms-Parts-1-4-Fundamentals-Structure/dp/0201350882/)
- [ ] [Algorithms in C++ Part 5: Graph Algorithms](https://www.amazon.com/Algorithms-Part-Graph-3rd-Pt-5/dp/0201361183/)
- [ ] [Open Data Structures in C++](https://opendatastructures.org/ods-cpp.pdf)
    - Kumpulan Struktur dan Algoritma Data yang kaya dan terperinci
    - Bagus untuk pemula

Jika anda memiliki rekomendasi yang lebih baik untuk C++, tolong beritahu saya. Mencari sumber daya yang komprehensif.

### Java

- [ ] [Algoritma (Sedgewick dan Wayne)](https://www.amazon.com/Algorithms-4th-Robert-Sedgewick/dp/032157351X/)
    - video dengan konten buku (dan Sedgewick!) di coursera:
        - [Algoritma I](https://www.coursera.org/learn/algorithms-part1)
        - [Algoritma II](https://www.coursera.org/learn/algorithms-part2)

Atau:

- [ ] [Struktur Data dan Algoritma di Java](https://www.amazon.com/Data-Structures-Algorithms-Michael-Goodrich/dp/1118771338/)
    - oleh Goodrich, Tamassia, Goldwasser
    - digunakan sebagai teks opsional untuk kursus pengenalan CS di UC Berkeley
    - lihat laporan buku saya pada versi Python dibawah. Buku ini mencakup topik-topik yang sama.

### Python

- [ ] [Struktur Data dan Algoritma dengan Python](https://www.amazon.com/Structures-Algorithms-Python-Michael-Goodrich/dp/1118290275/)
    - oleh Goodrich, Tamassia, Goldwasser
    - Saya mencintai buku ini. Mencakup segala hal dan lainnya.
    - kode Pythonic
    - laporan buku saya: https://googleyasheck.com/book-report-data-structures-and-algorithms-in-python/
- [ ] [Struktur Data Terbuka di Python](https://opendatastructures.org/ods-python.pdf)

## Sebelum Anda Mulai

Daftar ini tumbuh selama berbulan-bulan, dan ya, menjadi sulit untuk diatur.

Berikut adalah beberapa kesalahan yang saya buat sehingga anda akan memiliki pengalaman yang lebih baik.

### 1. Anda Tidak Akan Mengingat Semuanya

Saya menonton video berjam-jam dan mengambil catatan yang berlebihan, dan beberapa bulan kemudian disana ada banyak yang tidak saya ingat. Saya menghabiskan 3 hari melalui catatan saya dan membuat flashcards sehingga saya bisa meninjaunya dengan lebih cepat.

Tolong baca sehingga anda tidak akan membuat kesalahan seperti saya:

[Menguasai Pengetahuan Ilmu Komputer](https://googleyasheck.com/retaining-computer-science-knowledge/)

Sebuah kursus yang direkomendasikan kepada saya (belum pernah saya ambil): [Belajar cara Belajar](https://www.coursera.org/learn/learning-how-to-learn).

### 2. Menggunakan Flashcards

Untuk mengatasi masalah tersebut, saya membuat situs flashcards kecil di mana saya bisa menambahkan flashcards dari 2 jenis: umum dan code. Setiap kartu memiliki format yang berbeda.

Saya membuat sebuah mobile-first website jadi saya bisa mereview di telepon dan tablet saya, dimanapun saya berada.

Membuat punya anda sendiri secara gratis:

- [Repo website flashcards](https://github.com/jwasham/computer-science-flash-cards)
- [Database flashcards saya (lama - 1200 kartu)](https://github.com/jwasham/computer-science-flash-cards/blob/main/cards-jwasham.db):
- [Database flashcards saya (baru - 1800 kartu)](https://github.com/jwasham/computer-science-flash-cards/blob/main/cards-jwasham-extreme.db):

Perlu diingat aku pergi keluar kapal dan memiliki kartu meliputi segala sesuatu dari bahasa assembly dan Python trivia untuk pembelajaran machine learning dan statistik. Ini terlalu banyak untuk apa yang diminta oleh Google.

**Catatan di flashcards:** Pertama kali anda mengenali dan anda tahu jawabannya, jangan menandainya sebagai dikenal.
Anda harus melihat kartu yang sama dan menjawab beberapa kali dengan benar sebelum anda benar-benar tahu akan hal itu. Pengulangan akan membuat pengetahuan yang lebih di
otak anda.

Sebuah alternatif untuk menggunakan situs flashcards saya adalah [Anki](http://ankisrs.net/), yang telah direkomendasikan kepada saya berkali-kali. Ini menggunakan sistem pengulangan untuk membantu anda mengingatnya.
Ini user-friendly, yang tersedia di semua platform dan memiliki sebuah sistem cloud sync. Ini memerlukan biaya $25 di iOS tapi ini gratis di platform lainnya.

Database flashcard saya di format Anki: https://ankiweb.net/shared/info/25173560 (terimakasih [@xiewenya](https://github.com/xiewenya))

### 3. Mulailah membuat pertanyaan wawancara coding saat Anda mempelajari struktur data dan algoritme

Anda perlu menerapkan apa yang Anda pelajari untuk memecahkan masalah, atau Anda akan lupa. Saya melakukan kesalahan ini. Setelah Anda mempelajari suatu topik, dan merasa nyaman dengannya, seperti daftar tertaut, buka salah satu buku wawancara pengkodean dan lakukan beberapa pertanyaan tentang daftar tertaut.
Kemudian lanjutkan ke topik pembelajaran berikutnya. Kemudian, kembali dan lakukan masalah daftar tertaut lainnya,
atau masalah rekursi, atau apa pun. Tapi tetaplah mengerjakan soal sambil belajar.
Anda tidak dipekerjakan karena pengetahuan, tetapi bagaimana Anda menerapkan pengetahuan itu.
Ada beberapa buku dan situs yang saya rekomendasikan. Lihat di sini untuk lebih lanjut: [Latihan Pertanyaan Pemrograman](#latihan-pertanyaan-pemrograman).

### 4. Review, review, review

Aku menyimpan satu set cheat sheet pada ASCII, OSI stack, Big-O notasi, dan banyak lagi. Saya mempelajarinya ketika saya memiliki waktu luang.

Mengambil istirahat dari masalah pemgrogramman selama setengah jam dan pergi melalui flashcards anda.

### 5. Fokus

Ada banyak gangguan yang dapat menghabiskan waktu yang berharga. Fokus dan konsentrasi sulit. Nyalakan musik tanpa lirik dan Anda akan dapat fokus dengan baik.

## Apa yang Tidak Akan Dibahas

Ini adalah teknologi yang lazim tetapi bukan bagian dari rencana studi ini:

- SQL
- Javascript
- HTML, CSS, dan teknologi front-end lainnya

## Rencana Harian

Beberapa mata pelajaran mengambil satu hari, dan beberapa akan mengambil beberapa hari. Beberapa hanya belajar dan tidak ada yang diimplimentasikan.

Setiap hari saya mengambil satu subjek dari daftar di bawah ini, menonton video tentang subjek itu, dan menulis sebuah implementasi di:
- C - menggunakan structs dan functions yang mengambil sebuah struct * dan sesuatu yang lain seperti args.
- C++ - tanpa menggunakan built-in types
- C++ - menggunakan built-in types, seperti STL's std::list untuk daftar link
- Python - menggunakan built-in types (untuk terus berlatih Python)
- dan menulis tes untuk memastikan saya melakukannya dengan benar, kadang-kadang hanya menggunakan assert() statements yang sederhana
- Anda mungkin bisa menggunakan Java atau sesuatu yang lain, ini hanyalah pendapat saya.

Anda tidak perlu semua ini. Anda hanya perlu [satu bahasa untuk wawancara](#pilih-satu-bahasa-pemrograman-untuk-wawancara).

Mengapa meng-kode di semua ini?
- Latihan, latihan, latihan, sampai saya sakit karenanya, dan dapat melakukannya tanpa masalah (beberapa memiliki banyak kasus dan rincian pembukuan untuk diingat)
- Bekerja dalam batasan baku (mengalokasikan/membebaskan memori tanpa bantuan dari sekumpulan sampah (kecuali Python))
- Menggunakan built-in types jadi saya memiliki pengalaman menggunakan alat built-in untuk digunakan di dunia nyata (tidak akan menulis daftar pelaksanaan saya sendiri di produksi)

Saya mungkin tidak punya waktu untuk melakukan semua ini untuk setiap mata pelajaran, tapi saya akan mencobanya.

Anda dapat melihat kode saya di sini:
 - [C](https://github.com/jwasham/practice-c)
 - [C++](https://github.com/jwasham/practice-cpp)
 - [Python](https://github.com/jwasham/practice-python)

Anda tidak perlu susah payah menghafal setiap algoritma.

Menulis kode pada papan tulis atau kertas, bukan komputer. Uji dengan beberapa sampel masukan. Kemudian menguji itu pada komputer.

## Ilmu Prasyarat

- [ ] **belajar C**
    - C ada dimana-mana. Anda akan melihat contoh di buku, lecture, video, *di mana-mana* saat Anda belajar
    - [ ] [Bahasa Pemrograman C, Vol 2](https://www.amazon.com/Programming-Language-Brian-W-Kernighan/dp/0131103628)
        - Ini adalah buku singkat, tetapi akan memberi Anda pemahaman yang baik tentang bahasa C dan jika Anda mempraktikkannya sedikit, Anda akan segera menjadi mahir. Memahami C membantu Anda memahami bagaimana program dan memori bekerja
        - [Jawaban atas pertanyaan](https://github.com/lekkas/c-algorithms)

- [ ] **Bagaimana komputer memproses program:**
    - [ ] [Bagaimana CPU menjalankan program (video)](https://www.youtube.com/watch?v=XM4lGflQFvA)
    - [ ] [Bagaimana komputer menghitung - ALU (video)](https://youtu.be/1I5ZMmrOfnA)
    - [ ] [Registers dan RAM (video)](https://youtu.be/fpnE6UAfbtU)
    - [ ] [Central Processing Unit (CPU) (video)](https://youtu.be/FZGugFqdr60)
    - [ ] [Instruksi dan Program (video)](https://youtu.be/zltgXvg6r3k)

## Kompleksitas Algoritma / Big-O / Analisis Asimptotik

- Tidak ada yang bisa diterapkan
- Ada banyak video di sini. Cukup tonton sampai Anda memahaminya. Anda selalu dapat kembali dan mengulas
- Jika beberapa kuliah terlalu matematis, Anda dapat melompat ke bawah dan menonton video matematika diskrit untuk mendapatkan pengetahuan latar belakang
- [ ] [Harvard CS50 - Notasi Asimtotik (video)](https://www.youtube.com/watch?v=iOq5kSKqeR4)
- [ ] [Notasi Big O (tutorial singkat umum) (video)](https://www.youtube.com/watch?v=V6mKVRU1evU)
- [ ] [Notasi Big O (dan Omega dan Theta) - penjelasan matematika terbaik (video)](https://www.youtube.com/watch?v=ei-A_wy5Yxw&index=2&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [ ] Skiena:
    - [video](https://www.youtube.com/watch?v=gSyDMtdPNpU&index=2&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [slide](https://archive.org/details/lecture2_202008)
- [ ] [Pengantar Lembut untuk Analisis Kompleksitas Algoritma](http://discrete.gr/complexity/)
- [ ] [Orders of Growth (video)](https://www.coursera.org/lecture/algorithmic-thinking-1/orders-of-growth-6PKkX)
- [ ] [Asimtotik (video)](https://www.coursera.org/lecture/algorithmic-thinking-1/asymptotics-bXAtM)
- [ ] [UC Berkeley Big O (video)](https://archive.org/details/ucberkeley_webcast_VIS4YDpuP98)
- [ ] [UC Berkeley Big Omega (video)](https://archive.org/details/ucberkeley_webcast_ca3e7UVmeUc)
- [ ] [Analisis Amortisasi (video)](https://www.youtube.com/watch?v=B3SpQZaAZP4&index=10&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [ ] [Mengilustrasikan "Big O" (video)](https://www.coursera.org/lecture/algorithmic-thinking-1/illustrating-big-o-YVqzv)
- [ ] TopCoder (includes recurrence relations and master theorem):
    - [Computational Complexity: Section 1](https://www.topcoder.com/community/competitive-programming/tutorials/computational-complexity-section-1/)
    - [Computational Complexity: Section 2](https://www.topcoder.com/community/competitive-programming/tutorials/computational-complexity-section-2/)
- [ ] [Cheat sheet](http://bigocheatsheet.com/)
- [ ] [[Review] Big-O notation in 5 minutes (video)](https://youtu.be/__vX2sjlpXU)

## Struktur Data

- ### Arrays
    - Menerapkan vektor yang mengubah ukuran secara otomatis.
    - [ ] Deskripsi:
        - [Array (video)](https://www.coursera.org/lecture/data-structures/arrays-OsBSF)
        - [UC Berkeley CS61B - Array Linear dan Multi-Dim (video)](https://archive.org/details/ucberkeley_webcast_Wp8oiO_CZZE) (Mulailah menonton dari 15m 32s)
        - [Array Dinamis (video)](https://www.coursera.org/lecture/data-structures/dynamic-arrays-EwbnV)
        - [Array Bergerigi (video)](https://www.youtube.com/watch?v=1jtrQqYpt7g)
    - [ ] Menerapkan vektor (array yang bisa berubah dengan ukuran otomatis):
        - [ ] Berlatih coding menggunakan array dan pointer, dan matematika pointer untuk melompat ke indeks daripada menggunakan pengindeksan.
        - [ ] Array data mentah baru dengan memori yang dialokasikan
            - dapat mengalokasikan array int di bawah tenda, hanya saja tidak menggunakan fitur-fiturnya
            - start dengan 16, atau jika angka awal lebih besar, gunakan pangkat 2 - 16, 32, 64, 128
        - [ ] size() - jumlah item
        - [ ] capacity() - jumlah barang yang bisa ditampungnya
        - [ ] is_empty()
        - [ ] at(index) - mengembalikan item pada indeks tertentu, meledak jika indeks di luar batas
        - [ ] push(item)
        - [ ] insert(index, item) - menyisipkan item pada indeks, menggeser nilai indeks dan elemen tambahan ke kanan
        - [ ] prepend(item) - dapat menggunakan sisipan di atas pada indeks 0
        - [ ] pop() - menghapus item dari akhir, nilai kembali
        - [ ] delete(index) - menghapus item pada indeks, menggeser semua elemen tertinggal ke kiri
        - [ ] remove(item) - mencari nilai dan menghapus indeks yang menahannya (meskipun di banyak tempat)
        - [ ] find(item) - mencari nilai dan mengembalikan indeks pertama dengan nilai itu, -1 jika tidak ditemukan
        - [ ] resize(new_capacity) // fungsi pribadi
            - saat Anda mencapai kapasitas, ubah ukurannya menjadi dua kali lipat
            - saat memunculkan item, jika ukurannya 1/4 dari kapasitas, ubah ukurannya menjadi setengah
    - [ ] Waktu
        - O(1) untuk menambah/menghapus di akhir (diamortisasi untuk alokasi untuk lebih banyak ruang), indeks, atau pembaruan
        - O(n) untuk memasukkan/menghapus di tempat lain
    - [ ] Ruang
        - berdekatan dalam memori, jadi kedekatan membantu kinerja
        - ruang yang dibutuhkan = (kapasitas array, yaitu >= n)*ukuran item, tetapi meskipun 2n, tetap O(n)

- ### Linked Lists
    - [ ] Deskripsi:
        - [ ] [Singly Linked Lists (video)](https://www.coursera.org/lecture/data-structures/singly-linked-lists-kHhgK)
        - [ ] [CS 61B - Linked Lists 1 (video)](https://archive.org/details/ucberkeley_webcast_htzJdKoEmO0)
        - [ ] [CS 61B - Linked Lists 2 (video)](https://archive.org/details/ucberkeley_webcast_-c4I3gFYe3w)
        - [ ] [[Review] Linked lists in 4 minutes (video)](https://youtu.be/F8AbOfQwl1c)
    - [ ] [Kode C (video)](https://www.youtube.com/watch?v=QN6FPiD0Gzo)
            - bukan keseluruhan video, hanya bagian tentang struct Node dan alokasi memori
    - [ ] Linked List vs Array:
        - [Daftar Linked List Vs Array (video)](https://www.coursera.org/lecture/data-structures-optimizing-performance/core-linked-lists-vs-arrays-rjBs9)
        - [Di Dunia Nyata Linked List Vs Array (video)](https://www.coursera.org/lecture/data-structures-optimizing-performance/in-the-real-world-lists-vs-arrays-QUaUd)
    - [ ] [mengapa Anda harus menghindari linked list (video)](https://www.youtube.com/watch?v=YQs6IC-vgmo)
    - [ ] Gotcha: Anda perlu pengetahuan pointer ke pointer:
        (untuk saat Anda meneruskan pointer ke fungsi yang dapat mengubah alamat tempat pointer itu menunjuk)
        Halaman ini hanya untuk memahami pointer ke pointer. Saya tidak merekomendasikan gaya traversal daftar ini. Keterbacaan dan pemeliharaan menderita karena kepintaran.
        - [Pointer ke Pointer](https://www.eskimo.com/~scs/cclass/int/sx8.html)
    - [ ] Implementasikan (saya lakukan dengan tail pointer & tanpa):
        - [ ] size() - mengembalikan jumlah elemen data dalam daftar
        - [ ] empty() - bool mengembalikan nilai true jika kosong
        - [ ] value_at(index) - mengembalikan nilai item ke-n (mulai dari 0 untuk yang pertama)
        - [ ] push_front(value) - menambahkan item ke depan daftar
        - [ ] pop_front() - hapus item depan dan kembalikan nilainya
        - [ ] push_back(value) - menambahkan item di akhir
        - [ ] pop_back() - menghapus item akhir dan mengembalikan nilainya
        - [ ] front() - dapatkan nilai barang depan
        - [ ] back() - dapatkan nilai item akhir
        - [ ] insert(index, value) - masukkan nilai pada indeks, maka item saat ini pada indeks tersebut ditunjuk oleh item baru pada indeks
        - [ ] erase(index) - menghapus node pada indeks tertentu
        - [ ] value_n_from_end(n) - mengembalikan nilai node pada posisi ke-n dari akhir daftar
        - [ ] reverse() - membalikkan daftar
        - [ ] remove_value(value) - menghapus item pertama dalam daftar dengan nilai ini
    - [ ] Doubly-linked List
        - [Deskripsi (video)](https://www.coursera.org/lecture/data-structures/doubly-linked-lists-jpGKD)
        - Tidak perlu diimplementasikan

- ### Stack
    - [ ] [Stack (video)](https://www.coursera.org/lecture/data-structures/stacks-UdKzQ)
    - [ ] [[Review] Stacks in 3 minutes (video)](https://youtu.be/KcT3aVgrrpU)
    - [ ] Tidak akan diterapkan. Implementasi dengan array itu sepele

- ### Queue
    - Queue (Antrean)
    - [ ] [Queue (video)](https://www.coursera.org/lecture/data-structures/queues-EShpq)
    - [ ] [Circular buffer/FIFO](https://en.wikipedia.org/wiki/Circular_buffer)
    - [ ] [[Review] Queues in 3 minutes (video)](https://youtu.be/D6gu-_tmEpQ)
    - [ ] Implementasikan menggunakan linked-list, dengan tail pointer:
        - enqueue(value) - menambah nilai pada posisi di ekor
        - dequeue() - mengembalikan nilai dan menghapus elemen yang paling baru ditambahkan (depan)
        - empty()
    - [ ] Menerapkan menggunakan array berukuran tetap:
        - enqueue(value) - menambahkan item di akhir penyimpanan yang tersedia
        - dequeue() - mengembalikan nilai dan menghapus elemen yang paling baru ditambahkan
        - empty()
        - full()
    - [ ] Biaya:
        - implementasi yang buruk menggunakan daftar tertaut di mana Anda mengantre di bagian depan
            dan antrean di bagian ekor akan menjadi O(n) karena Anda memerlukan elemen di sebelah terakhir,
            menyebabkan traversal penuh setiap dequeue
        - enqueue: O(1) (diamortisasi, daftar tertaut dan larik [probing])
        - dequeue: O(1) (daftar dan larik tertaut)
        - empty: O(1) (daftar dan larik tertaut)

- ### Hash table
    - [ ] Video:
        - [ ] [Hashing dengan Chaining (video)](https://www.youtube.com/watch?v=0M_kIqhwbFo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=8)
        - [ ] [Penggandaan Table, Karp-Rabin (video)](https://www.youtube.com/watch?v=BRO7mVIFt08&index=9&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [ ] [Open Addressing, Hashing Kriptografi (video)](https://www.youtube.com/watch?v=rvdJDijO2Ro&index=10&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [ ] [PyCon 2010: The Mighty Dictionary (video)](https://www.youtube.com/watch?v=C4Kc8xzcA68)
        - [ ] [(Lanjutan) Pengacakan: Universal & Hashing Sempurna (video)](https://www.youtube.com/watch?v=z0lJ2k0sl1g&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=11)
        - [ ] [(Lanjutan) Hash sempurna (video)](https://www.youtube.com/watch?v=N0COwN14gt0&list=PL2B4EEwhKD-NbwZ4ezj7gyc_3yNrojKM9&index=4)
        - [ ] [[Review] Hash tables in 4 minutes (video)](https://youtu.be/knV86FlSXJ8)

    - [ ] Kursus Online:
        - [ ] [Tabel Hash Inti (video)](https://www.coursera.org/lecture/data-structures-optimizing-performance/core-hash-tables-m7UuP)
        - [ ] [Struktur Data (video)](https://www.coursera.org/learn/data-structures/home/week/4)
        - [ ] [Masalah Buku Telepon (video)](https://www.coursera.org/lecture/data-structures/phone-book-problem-NYZZP)
        - [ ] tabel hash terdistribusi:
            - [Unggahan Instan dan Pengoptimalan Penyimpanan Di Dropbox (video)](https://www.coursera.org/lecture/data-structures/instant-uploads-and-storage-optimization-in-dropbox-DvaIb)
            - [Tabel Hash Terdistribusi (video)](https://www.coursera.org/lecture/data-structures/distributed-hash-tables-tvH8H)

    - [ ] Implementasikan dengan array menggunakan probing linier
        - hash(k, m) - m adalah ukuran tabel hash
        - add(key, value) - jika kunci sudah ada, perbarui nilai
        - exists(key)
        - get(key)
        - remove(key)

## Lebih Banyak Pengetahuan

- ### Pencarian Biner
    - [ ] [Pencarian Biner (video)](https://www.youtube.com/watch?v=D5SrAga1pno)
    - [ ] [Pencarian Biner (video)](https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search)
    - [ ] [detail](https://www.topcoder.com/community/competitive-programming/tutorials/binary-search/)
    - [ ] [[Review] Binary search in 4 minutes (video)](https://youtu.be/fDKIpRe8GW4)
    - [ ] Implementkan:
        - pencarian biner (pada susunan bilangan bulat yang diurutkan)
        - pencarian biner menggunakan rekursi

- ### Operasi Bitwise
    - [ ] [Bits cheat sheet](https://github.com/jwasham/coding-interview-university/blob/main/extras/cheat%20sheets/bits-cheat-sheet.pdf) - Anda harus mengetahui banyak pangkat 2 dari (2^1 hingga 2^16 dan 2^32)
    - [ ] Dapatkan pemahaman yang sangat baik tentang memanipulasi bit dengan: &, |, ^, ~, >>, <<
        - [ ] [kata-kata](https://en.wikipedia.org/wiki/Word_(computer_architecture))
        - [ ] Good intro:
            [Bit Manipulation (video)](https://www.youtube.com/watch?v=7jkIUgLC29I)
        - [ ] [C Tutorial Pemrograman 2-10: Operator Bitwise (video)](https://www.youtube.com/watch?v=d0AwjSpNXR0)
        - [ ] [Manipulasi Bit](https://en.wikipedia.org/wiki/Bit_manipulation)
        - [ ] [Operasi Bitwise](https://en.wikipedia.org/wiki/Bitwise_operation)
        - [ ] [Bithack](https://graphics.stanford.edu/~seander/bithacks.html)
        - [ ] [Bit Twiddler](https://bits.stephan-brumme.com/)
        - [ ] [Bit Twiddler Interactive](https://bits.stephan-brumme.com/interactive.html)
        - [ ] [Bit Hacks (video)](https://www.youtube.com/watch?v=ZusiKXcz_ac)
		- [ ] [Operasi Praktek](https://pconrad.github.io/old_pconrad_cs16/topics/bitOps/) 
    - [ ] Pelengkap 2s dan 1s
        - [Biner: Plus & Minus (Mengapa Kami Menggunakan Pelengkap Dua) (video)](https://www.youtube.com/watch?v=lKTsv6iVxV4)
        - [Pelengkap 1s](https://en.wikipedia.org/wiki/Ones%27_complement)
        - [Pelengkap 2s](https://en.wikipedia.org/wiki/Two%27s_complement)
    - [ ] Hitung bit set
        - [4 cara untuk menghitung bit dalam satu byte (video)](https://youtu.be/Hzuzo9NJrlc)
        - [Hitung Bits](https://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetKernighan)
        - [Bagaimana Menghitung Jumlah Set Bits Dalam Integer 32 Bit](http://stackoverflow.com/questions/109023/how-to-count-the-number-of-set-bits-in-a-32-bit-integer)
    - [ ] Tukar nilai:
        - [Tukar](https://bits.stephan-brumme.com/swap.html)
    - [ ] Nilai mutlak:
        - [Integer Mutlak](https://bits.stephan-brumme.com/absInteger.html)

## Trees

- ### Trees - Catatan & Latar Belakang
    - [ ] [Seri: Trees (video)](https://www.coursera.org/lecture/data-structures/trees-95qda)
    - konstruksi pohon dasar
    - traversal
    - algoritma manipulasi
    - [ ] [BFS(breadth-first search) dan DFS(depth-first search) (video)](https://www.youtube.com/watch?v=uWL6FJhq5fM)
        - Catatan BFS:
           - level order (BFS, menggunakan queue)
           - kompleksitas waktu: O(n)
           - kompleksitas ruang:
                terbaik: O(1)
                terburuk: O(n/2)=O(n)
        - Catatan DFS:
            - kompleksitas waktu: O(n)
            - kompleksitas ruang:
                terbaik: O(log n) - rata-rata. ketinggian tree
                terburuk: O(n)
            - dalam urutan (DFS: kiri, sendiri/self, kanan)
            - pasca urutan (DFS: kiri, kanan, sendiri/self)
            - pra urutan (DFS: sendiri/self, kiri, kanan)
    - [ ] [[Review] Breadth-first search in 4 minutes (video)](https://youtu.be/HZ5YTanv5QE)
    - [ ] [[Review] Depth-first search in 4 minutes (video)](https://youtu.be/Urx87-NMm6c)
    - [ ] [[Review] Tree Traversal (playlist) in 11 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZO1JC2RgEi04nLy6D-rKk6b)

- ### Binary search trees: BSTs
    - [ ] [Ulasan Binary Search Tree (video)](https://www.youtube.com/watch?v=x6At0nzX92o&index=1&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
    - [ ] [Serial (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/p82sw/core-introduction-to-binary-search-trees)
        - starts with symbol table and goes through BST applications
    - [ ] [Pendahuluan (video)](https://www.coursera.org/learn/data-structures/lecture/E7cXP/introduction)
    - [ ] [MIT (video)](https://www.youtube.com/watch?v=9Jry5-82I68)
    - C/C++:
        - [ ] [Binary search tree - Implementasi di C/C++ (video)](https://www.youtube.com/watch?v=COZK7NATh4k&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=28)
        - [ ] [Implementasi BST - alokasi memori di stack dan heap (video)](https://www.youtube.com/watch?v=hWokyBoo0aI&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=29)
        - [ ] [Temukan min dan max elemen dalam binary search tree (video)](https://www.youtube.com/watch?v=Ut90klNN264&index=30&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [Temukan ketinggian pohon biner (video)](https://www.youtube.com/watch?v=_pnqMz5nrRs&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=31)
        - [ ] [Binary tree traversal - strategi luas-pertama dan mendalam-pertama (video)](https://www.youtube.com/watch?v=9RHO6jU--GU&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=32)
        - [ ] [Pohon biner: Level Order Traversal (video)](https://www.youtube.com/watch?v=86g8jAQug04&index=33&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [Binary tree traversal: Preorder, Inorder, Postorder (video)](https://www.youtube.com/watch?v=gm8DUJJhmY4&index=34&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [Periksa apakah pohon biner adalah binary search tree atau bukan (video)](https://www.youtube.com/watch?v=yEwSGhSsT0U&index=35&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [Hapus node dari Binary Search Tree (video)](https://www.youtube.com/watch?v=gcULXE7ViZw&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=36)
        - [ ] [Penerus Berurutan di binary search tree (video)](https://www.youtube.com/watch?v=5cPbNCrdotA&index=37&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
    - [ ] Implementasikan:
        - [ ] insert    // masukkan nilai ke dalam pohon
        - [ ] get_node_count // dapatkan hitungan nilai yang disimpan
        - [ ] print_values // mencetak nilai di pohon, dari min hingga maks
        - [ ] delete_tree
        - [ ] is_in_tree // mengembalikan nilai true jika nilai yang diberikan ada di pohon
        - [ ] get_height // mengembalikan tinggi dalam node (tinggi node tunggal adalah 1)
        - [ ] get_min   // mengembalikan nilai minimum yang disimpan di pohon
        - [ ] get_max   // mengembalikan nilai maksimum yang disimpan di pohon
        - [ ] is_binary_search_tree
        - [ ] delete_value
        - [ ] get_successor // mengembalikan nilai tertinggi berikutnya di pohon setelah nilai yang diberikan, -1 jika none

- ### Heap / Prioritas Antrian / Biner Heap
    - Heap (tumpukan)
    - Priority Queue (Prioritas Antrian)
    - Binary Heap (Biner Heap)
    - divisualisasikan sebagai pohon, tetapi biasanya linier dalam penyimpanan (array, linked list)
    - [ ] [Heap](https://en.wikipedia.org/wiki/Heap_(data_structure))
    - [ ] [Pendahuluan (video)](https://www.coursera.org/learn/data-structures/lecture/2OpTs/introduction)
    - [ ] [Penerapan Naif (video)](https://www.coursera.org/learn/data-structures/lecture/z3l9N/naive-implementations)
    - [ ] [Pohon Biner (video)](https://www.coursera.org/learn/data-structures/lecture/GRV2q/binary-trees)
    - [ ] [Keterangan Tinggi Pohon (video)](https://www.coursera.org/learn/data-structures/supplement/S5xxz/tree-height-remark)
    - [ ] [Operasi Dasar (video)](https://www.coursera.org/learn/data-structures/lecture/0g1dl/basic-operations)
    - [ ] [Pohon Biner Lengkap (video)](https://www.coursera.org/learn/data-structures/lecture/gl5Ni/complete-binary-trees)
    - [ ] [Pseudocode (video)](https://www.coursera.org/learn/data-structures/lecture/HxQo9/pseudocode)
    - [ ] [Urutan Heap - lompat untuk memulai (video)](https://youtu.be/odNJmw5TOEE?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3291)
    - [ ] [Urutan Heap (video)](https://www.coursera.org/learn/data-structures/lecture/hSzMO/heap-sort)
    - [ ] [Membangun heap (video)](https://www.coursera.org/learn/data-structures/lecture/dwrOS/building-a-heap)
    - [ ] [MIT: Heaps dan Heap Sort (video)](https://www.youtube.com/watch?v=B7hVxCmfPtM&index=4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [CS 61B Kuliah 24: Antrian Prioritas (video)](https://archive.org/details/ucberkeley_webcast_yIUFT6AKBGE)
    - [ ] [Linear Time BuildHeap (max-heap)](https://www.youtube.com/watch?v=MiyLo8adrWw)
    - [ ] [[Review] Heap (playlist) in 13 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZNsyqgPW-DNwUeT8F8uhWc6)
    - [ ] Menerapkan sebuah max-heap:
        - [ ] insert
        - [ ] sift_up - digunakan untuk memasukkan
        - [ ] get_max - mengembalikan item maksimal, tanpa menghapusnya
        - [ ] get_size() - mengembalikan jumlah elemen yang disimpan
        - [ ] is_empty() - mengembalikan nilai true jika heap tidak berisi elemen
        - [ ] extract_max - mengembalikan item maksimal, menghapusnya
        - [ ] sift_down - dibutuhkan untuk extract_max
        - [ ] remove(i) - menghapus item pada indeks i
        - [ ] heapify - membuat heap dari larik elemen, dibutuhkan untuk heap_sort
        - [ ] heap_sort() - mengambil array yang tidak disortir dan mengubahnya menjadi array yang diurutkan di tempat menggunakan heap maks atau heap min

## Penyortiran

- [ ] Catatan:
    - Terapkan sort & ketahui kasus terbaik / kasus terburuk, kompleksitas rata-rata masing-masing:
        - tidak ada bubble sort - ini mengerikan - O(n^2), kecuali jika n<=16
    - [ ] Stabilitas dalam algoritme pengurutan ("Apakah Quicksort stabil?")
        - [Stabilitas Algoritma Penyortiran](https://en.wikipedia.org/wiki/Sorting_algorithm#Stability)
        - [Stabilitas Dalam Mengurutkan Algoritma](http://stackoverflow.com/questions/1517793/stability-in-sorting-algorithms)
        - [Stabilitas Dalam Mengurutkan Algoritma](http://www.geeksforgeeks.org/stability-in-sorting-algorithms/)
        - [Algoritma Pengurutan - Stabilitas](http://homepages.math.uic.edu/~leon/cs-mcs401-s08/handouts/stability.pdf)
    - [ ] Algoritme mana yang dapat digunakan pada linked lists? Yang mana pada array? Yang mana pada keduanya?
        - Saya tidak akan merekomendasikan pengurutan linked lists, tetapi penggabungan semacam bisa dilakukan.
        - [Merge Sort Untuk Linked List](http://www.geeksforgeeks.org/merge-sort-for-linked-list/)

- Untuk heapsort, lihat struktur data Heap di atas. Jenis heap bagus, tapi tidak stabil

- [ ] [Sedgewick - Mergesort (5 video)](https://www.coursera.org/learn/algorithms-part1/home/week/3)
    - [ ] [1. Penggabungan](https://www.coursera.org/learn/algorithms-part1/lecture/ARWDq/mergesort)
    - [ ] [2. Mergesort dari bawah ke atas](https://www.coursera.org/learn/algorithms-part1/lecture/PWNEl/bottom-up-mergesort)
    - [ ] [3. Kompleksitas Sortir](https://www.coursera.org/learn/algorithms-part1/lecture/xAltF/sorting-complexity)
    - [ ] [4. Pembanding](https://www.coursera.org/learn/algorithms-part1/lecture/9FYhS/comparators)
    - [ ] [5. Stabilitas](https://www.coursera.org/learn/algorithms-part1/lecture/pvvLZ/stability)

- [ ] [Sedgewick - Quicksort (4 video)](https://www.coursera.org/learn/algorithms-part1/home/week/3)
    - [ ] [1. Quicksort](https://www.coursera.org/learn/algorithms-part1/lecture/vjvnC/quicksort)
    - [ ] [2. Seleksi](https://www.coursera.org/learn/algorithms-part1/lecture/UQxFT/selection)
    - [ ] [3. Kunci Duplikat](https://www.coursera.org/learn/algorithms-part1/lecture/XvjPd/duplicate-keys)
    - [ ] [4. System Sorts](https://www.coursera.org/learn/algorithms-part1/lecture/QBNZ7/system-sorts)

- [ ] UC Berkeley:
    - [ ] [CS 61B Kuliah 29: Penyortiran I (video)](https://archive.org/details/ucberkeley_webcast_EiUvYS2DT6I)
    - [ ] [CS 61B Kuliah 30: Penyortiran II (video)](https://archive.org/details/ucberkeley_webcast_2hTY3t80Qsk)
    - [ ] [CS 61B Kuliah 32: Penyortiran III (video)](https://archive.org/details/ucberkeley_webcast_Y6LOLpxg6Dc)
    - [ ] [CS 61B Kuliah 33: Penyortiran V (video)](https://archive.org/details/ucberkeley_webcast_qNMQ4ly43p4)

- [ ] [Bubble Sort (video)](https://www.youtube.com/watch?v=P00xJgWzz2c&index=1&list=PL89B61F78B552C1AB)
- [ ] [Menganalisis Bubble Sort (video)](https://www.youtube.com/watch?v=ni_zk257Nqo&index=7&list=PL89B61F78B552C1AB)
- [ ] [Sortir Penyisipan, Sortir Gabung (video)](https://www.youtube.com/watch?v=Kg4bqzAqRBM&index=3&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
- [ ] [Sortir Penyisipan (video)](https://www.youtube.com/watch?v=c4BRHC7kTaQ&index=2&list=PL89B61F78B552C1AB)
- [ ] [Merge Sort (video)](https://www.youtube.com/watch?v=GCae1WNvnZM&index=3&list=PL89B61F78B552C1AB)
- [ ] [Quicksort (video)](https://www.youtube.com/watch?v=y_G9BkAm6B8&index=4&list=PL89B61F78B552C1AB)
- [ ] [Sortir Pilihan (video)](https://www.youtube.com/watch?v=6nDMgr0-Yyo&index=8&list=PL89B61F78B552C1AB)

- [ ] Kode Merge sort:
    - [ ] [Menggunakan keluaran array  (C)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/sorting/mergesort.c)
    - [ ] [Menggunakan keluaran array (Python)](https://github.com/jwasham/practice-python/blob/master/merge_sort/merge_sort.py)
    - [ ] [Di tempat (C ++)](https://github.com/jwasham/practice-cpp/blob/master/merge_sort/merge_sort.cc)
- [ ] Kode Quick sort:
    - [ ] [Implementasi (C)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/randomization/quick.c)
    - [ ] [Implementasi (C)](https://github.com/jwasham/practice-c/blob/master/quick_sort/quick_sort.c)
    - [ ] [Implementasi (Python)](https://github.com/jwasham/practice-python/blob/master/quick_sort/quick_sort.py)

- [ ] [[Review] Sorting (playlist) in 18 minutes](https://www.youtube.com/playlist?list=PL9xmBV_5YoZOZSbGAXAPIq1BeUf4j20pl)
    - [ ] [Quick sort in 4 minutes (video)](https://youtu.be/Hoixgm4-P4M)
    - [ ] [Heap sort in 4 minutes (video)](https://youtu.be/2DmK_H7IdTo)
    - [ ] [Merge sort in 3 minutes (video)](https://youtu.be/4VqmGXwpLqc)
    - [ ] [Bubble sort in 2 minutes (video)](https://youtu.be/xli_FI7CuzA)
    - [ ] [Selection sort in 3 minutes (video)](https://youtu.be/g-PGLbMth_g)
    - [ ] [Insertion sort in 2 minutes (video)](https://youtu.be/JU767SDMDvA)

- [ ] Implementasi:
    - [ ] Mergesort: O(n log n) rata-rata dan kasus terburuk
    - [ ] Quicksort: O(n log n) kasus rata-rata
    - Sortir seleksi dan sortir penyisipan keduanya merupakan kasus rata-rata O (n ^ 2) dan terburuk
    - Untuk heapsort, lihat struktur data Heap di atas

- [ ] Tidak wajib, tetapi saya merekomendasikan mereka:
    - [ ] [Sedgewick - Radix Sorts (6 video)](https://www.coursera.org/learn/algorithms-part2/home/week/3)
        - [ ] [1. String di Java](https://www.coursera.org/learn/algorithms-part2/lecture/vGHvb/strings-in-java)
        - [ ] [2. Penghitungan Indeks Kunci](https://www.coursera.org/learn/algorithms-part2/lecture/2pi1Z/key-indexed-counting)
        - [ ] [3. Urutan Radix String Pertama Digit Signifikan Terkecil](https://www.coursera.org/learn/algorithms-part2/lecture/c1U7L/lsd-radix-sort)
        - [ ] [4. Urutan Radix String Pertama Digit Paling Signifikan](https://www.coursera.org/learn/algorithms-part2/lecture/gFxwG/msd-radix-sort)
        - [ ] [5. Radix Quicksort 3 Arah](https://www.coursera.org/learn/algorithms-part2/lecture/crkd5/3-way-radix-quicksort)
        - [ ] [6. Array Suffix](https://www.coursera.org/learn/algorithms-part2/lecture/TH18W/suffix-arrays)
    - [ ] [Sortir Radix](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#radixSort)
    - [ ] [Sortir Radix (video)](https://www.youtube.com/watch?v=xhr26ia4k38)
    - [ ] [Sortir Radix, Sortir Counting (waktu linier diberikan batasan) (video)](https://www.youtube.com/watch?v=Nz1KZXbghj8&index=7&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [Pengacakan: Penggandaan Matriks, Quicksort, Algoritma Freivalds (video)](https://www.youtube.com/watch?v=cNB2lADK3_s&index=8&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [Menyortir dalam Waktu Linear (video)](https://www.youtube.com/watch?v=pOKy3RZbSws&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=14)

Sebagai ringkasan, berikut adalah representasi visual dari [15 algoritma pengurutan](https://www.youtube.com/watch?v=kPRA0W1kECg).
Jika Anda membutuhkan detail lebih lanjut tentang subjek ini, lihat bagian "Menyortir" di [Detail Tambahan tentang Beberapa Subjek](#detail-tambahan-tentang-beberapa-subjek)

## Graphs

Graf (Graphs) dapat digunakan untuk merepresentasikan banyak masalah dalam ilmu komputer, jadi bagian ini panjang, seperti pohon dan penyortiran.

- Catatan:
    - Ada 4 cara dasar untuk merepresentasikan Graf dalam memori:
        - objek dan pointer
        - matriks kedekatan (adjacency matrix)
        - daftar kedekatan (adjacency list)
        - peta kedekatan (adjacency map)
    - Biasakan diri Anda dengan setiap representasi beserta pro & kontranya
    - BFS dan DFS - mengetahui kompleksitas komputasi mereka, trade off mereka, dan bagaimana menerapkannya dalam kode nyata
    - Saat ditanya pertanyaan, cari solusi berbasis Graf terlebih dahulu, lalu lanjutkan jika tidak ada

- [ ] MIT (video):
    - [ ] [Breadth-First Search](https://www.youtube.com/watch?v=s-CYnVz-uh4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=13)
    - [ ] [Depth-First Search](https://www.youtube.com/watch?v=AfSk24UTFS8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=14)

- [ ] Kuliah Skiena - pengantar yang bagus:
    - [ ] [CSE373 2012 - Lecture 11 - Graphs Struktur Data (video)](https://www.youtube.com/watch?v=OiXxhDrFruw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=11)
    - [ ] [CSE373 2012 - Lecture 12 - Breadth-First Search (video)](https://www.youtube.com/watch?v=g5vF8jscteo&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=12)
    - [ ] [CSE373 2012 - Lecture 13 - Algoritma Graph (video)](https://www.youtube.com/watch?v=S23W6eTcqdY&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=13)
    - [ ] [CSE373 2012 - Lecture 14 - Algoritma Graph (con't) (video)](https://www.youtube.com/watch?v=WitPBKGV0HY&index=14&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [CSE373 2012 - Lecture 15 - Algoritma Graph (con't 2) (video)](https://www.youtube.com/watch?v=ia1L30l7OIg&index=15&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [CSE373 2012 - Lecture 16 - Algoritma Graph (con't 3) (video)](https://www.youtube.com/watch?v=jgDOQq6iWy8&index=16&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)

- [ ] Graphs (ulasan dan lainnya):

    - [ ] [6.006 Masalah Jalur Terpendek Sumber Tunggal (video)](https://www.youtube.com/watch?v=Aa2sqUhIn-E&index=15&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [6.006 Dijkstra (video)](https://www.youtube.com/watch?v=2E7MmKv0Y24&index=16&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [6.006 Bellman-Ford (video)](https://www.youtube.com/watch?v=ozsuci5pIso&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=17)
    - [ ] [6.006 Mempercepat Dijkstra (video)](https://www.youtube.com/watch?v=CHvQ3q_gJ7E&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=18)
    - [ ] [Aduni: Algoritma Graphs I - Sortasi Topologi, Pohon Rentang Minimum, Algoritma Prim - Kuliah 6 (video)](https://www.youtube.com/watch?v=i_AQT_XfvD8&index=6&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
    - [ ] [Aduni: Algoritma Graphs II - DFS, BFS, Algoritma Kruskal, Struktur Data Union Find - Kuliah 7 (video)](https://www.youtube.com/watch?v=ufj5_bppBsA&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=7)
    - [ ] [Aduni: Algoritma Graphs III: Jalur Terpendek - Kuliah 8 (video)](https://www.youtube.com/watch?v=DiedsPsMKXc&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=8)
    - [ ] [Aduni: Algoritma Graphs IV: Pengantar algoritma geometris - Kuliah 9 (video)](https://www.youtube.com/watch?v=XIAQRlNkJAw&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=9)
    - [ ] ~~[CS 61B 2014 (mulai dari 58:09) (video)](https://youtu.be/dgjX4HdMI-Q?list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&t=3489)~~
    - [ ] [CS 61B 2014: Graphs berbobot (video)](https://archive.org/details/ucberkeley_webcast_zFbq8vOZ_0k)
    - [ ] [Algoritma Serakah: Minimum Spanning Tree (video)](https://www.youtube.com/watch?v=tKwnms5iRBU&index=16&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [Komponen yang Sangat Terhubung Algoritma Graphs Algoritma Kosaraju (video)](https://www.youtube.com/watch?v=RpgcYiky7uw)
    - [ ] [[Review] Shortest Path Algorithms (playlist) in 16 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZO-Y-H3xIC9DGSfVYJng9Yw)
    - [ ] [[Review] Minimum Spanning Trees (playlist) in 4 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZObEi3Hf6lmyW-CBfs7nkOV)

- Kursus Coursera Penuh:
    - [ ] [Algoritma pada Graphs (video)](https://www.coursera.org/learn/algorithms-on-graphs/home/welcome)

- Saya akan menerapkan:
    - [ ] DFS dengan daftar kedekatan (rekursif)
    - [ ] DFS dengan daftar adjacency (iteratif dengan stack)
    - [ ] DFS dengan matriks adjacency (rekursif)
    - [ ] DFS dengan matriks adjacency (iteratif dengan stack)
    - [ ] BFS dengan daftar kedekatan
    - [ ] BFS dengan matriks adjacency
    - [ ] jalur terpendek sumber tunggal (Dijkstra)
    - [ ] pohon rentang minimum
    - Algoritme berbasis DFS (lihat video Aduni di atas):
        - [ ] periksa siklus (diperlukan untuk pengurutan topologi, karena kami akan memeriksa siklus sebelum memulai)
        - [ ] sortir topologi
        - [ ] menghitung komponen yang terhubung dalam graf
        - [ ] daftar komponen yang sangat terhubung
        - [ ] periksa graf bipartit

## Bahkan Lebih Banyak Pengetahuan

- ### Pengulangan (Recursion)
    - [ ] Kuliah Stanford tentang rekursi dan backtracking:
        - [ ] [Kuliah 8 | Abstraksi Pemrograman (video)](https://www.youtube.com/watch?v=gl3emqCuueQ&list=PLFE6E58F856038C69&index=8)
        - [ ] [Kuliah 9 | Abstraksi Pemrograman (video)](https://www.youtube.com/watch?v=uFJhEPrbycQ&list=PLFE6E58F856038C69&index=9)
        - [ ] [Kuliah 10 | Abstraksi Pemrograman (video)](https://www.youtube.com/watch?v=NdF1QDTRkck&index=10&list=PLFE6E58F856038C69)
        - [ ] [Kuliah 11 | Abstraksi Pemrograman (video)](https://www.youtube.com/watch?v=p-gpaIGRCQI&list=PLFE6E58F856038C69&index=11)
    - Kapan saat yang tepat untuk menggunakannya?
    - Bagaimana rekursi ekor lebih baik daripada tidak?
        - [ ] [Apa Itu Rekursi Ekor Mengapa Sangat Buruk?](https://www.quora.com/What-is-tail-recursion-Why-is-it-so-bad)
        - [ ] [Rekursi Ekor (video)](https://www.coursera.org/lecture/programming-languages/tail-recursion-YZic1)

- ### Pemrograman Dinamis
    - Anda mungkin tidak akan melihat masalah pemrograman dinamis dalam wawancara Anda, tetapi ada baiknya mengenali masalah sebagai kandidat untuk pemrograman dinamis (Dynamic Programming).
    - Subjek ini bisa sangat sulit, karena setiap masalah pemecahan masalah pemrograman dinamis harus didefinisikan sebagai relasi rekursi, dan menyelesaikannya bisa rumit.
    - Saya sarankan untuk melihat banyak contoh masalah pemrograman dinamis sampai Anda memiliki pemahaman yang kuat tentang pola yang terlibat.
    - [ ] Video:
        - video Skiena mungkin sulit untuk diikuti karena terkadang dia menggunakan papan tulis, yang terlalu kecil untuk dilihat
        - [ ] [Skiena: CSE373 2012 - Kuliah 19 - Pengantar Pemrograman Dinamis (video)](https://youtu.be/Qc2ieXRgR0k?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1718)
        - [ ] [Skiena: CSE373 2012 - Kuliah 20 - Edit Jarak (video)](https://youtu.be/IsmMhMdyeGY?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=2749)
        - [ ] [Skiena: CSE373 2012 - Kuliah 21 - Contoh Pemrograman Dinamis (video)](https://youtu.be/o0V9eYF4UI8?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=406)
        - [ ] [Skiena: CSE373 2012 - Kuliah 22 - Aplikasi Pemrograman Dinamis (video)](https://www.youtube.com/watch?v=dRbMC1Ltl3A&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=22)
        - [ ] [Simonson: Pemrograman Dinamis 0 (dimulai pada 59:18) (video)](https://youtu.be/J5aJEcOr6Eo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3558)
        - [ ] [Simonson: Pemrograman Dinamis I - Kuliah 11 (video)](https://www.youtube.com/watch?v=0EzHjQ_SOeU&index=11&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [Simonson: Pemrograman dinamis II - Kuliah 12 (video)](https://www.youtube.com/watch?v=v1qiRwuJU7g&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=12)
        - [ ] Daftar masalah individu Pemrograman Dinamis (masing-masing pendek):
            [Pemrograman Dinamis (video)](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)
    - [ ] Catatan Kuliah Yale:
        - [ ] [Pemrograman Dinamis](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#dynamicProgramming)
    - [ ] Coursera:
        - [ ] [Masalah struktur sekunder RNA (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/80RrW/the-rna-secondary-structure-problem)
        - [ ] [Algoritma pemrograman dinamis (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/PSonq/a-dynamic-programming-algorithm)
        - [ ] [Mengilustrasikan algoritma DP (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/oUEK2/illustrating-the-dp-algorithm)
        - [ ] [Waktu berjalan dari algoritma DP (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/nfK2r/running-time-of-the-dp-algorithm)
        - [ ] [DP vs. implementasi rekursif (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/M999a/dp-vs-recursive-implementation)
        - [ ] [Global pairwise sequence alignment (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/UZ7o6/global-pairwise-sequence-alignment)
        - [ ] [Local pairwise sequence alignment (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/WnNau/local-pairwise-sequence-alignment)

- ### Pemrograman Berorientasi Objek
    - [ ] [Optional: UML 2.0 seri (video)](https://www.youtube.com/watch?v=OkC7HKtiZC0&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc)
    - [ ] Prinsip SOLID OOP: [Prinsip SOLID (video)](https://www.youtube.com/playlist?list=PL4CE9F710017EA77A)

- ### Pola desain (Design patterns)
    - [ ] [Ulasan UML cepat(video)](https://www.youtube.com/watch?v=3cmzqZzwNDM&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc&index=3)
    - [ ] Pelajari pola-pola ini:
        - [ ] strategy
        - [ ] singleton
        - [ ] adapter
        - [ ] prototype
        - [ ] decorator
        - [ ] visitor
        - [ ] factory, abstract factory
        - [ ] facade
        - [ ] observer
        - [ ] proxy
        - [ ] delegate
        - [ ] command
        - [ ] state
        - [ ] memento
        - [ ] iterator
        - [ ] composite
        - [ ] flyweight
    - [ ] [Bab 6 (Bagian 1) - Patterns (video)](https://youtu.be/LAP2A80Ajrg?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO&t=3344)
    - [ ] [Bab 6 (Bagian 2) - Abstraction-Occurrence, General Hierarchy, Player-Role, Singleton, Observer, Delegation (video)](https://www.youtube.com/watch?v=U8-PGsjvZc4&index=12&list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)
    - [ ] [Bab 6 (Bagian 3) - Adapter, Facade, Immutable, Read-Only Interface, Proxy (video)](https://www.youtube.com/watch?v=7sduBHuex4c&index=13&list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)
    - [ ] [Serial video (27 video)](https://www.youtube.com/playlist?list=PLF206E906175C7E07)
    - [ ] [Head First Design Patterns](https://www.amazon.com/Head-First-Design-Patterns-Freeman/dp/0596007124)
        - Saya tahu buku kanoniknya adalah "Design Patterns: Elements of Reusable Object-Oriented Software", tapi Head First sangat bagus untuk pemula hingga OO.
    - [ ] [Referensi praktis: 101 Pola Desain & Tip untuk Pengembang](https://sourcemaking.com/design-patterns-and-tips)


- ### Kombinatorik (n pilih k) & Probabilitas
    - [ ] [Keterampilan Matematika: Bagaimana menemukan Faktorial, Permutasi dan Kombinasi (Pilih) (video)](https://www.youtube.com/watch?v=8RRo6Ti9d0U)
    - [ ] [Jadikan Sekolah: Probabilitas (video)](https://www.youtube.com/watch?v=sZkAAk9Wwa4)
    - [ ] [Jadikan Sekolah: Lebih Banyak Kemungkinan dan Rantai Markov (video)](https://www.youtube.com/watch?v=dNaJg-mLobQ)
    - [ ] Khan Academy:
        - Tata letak kursus:
            - [ ] [Probabilitas Teoritis Dasar](https://www.khanacademy.org/math/probability/probability-and-combinatorics-topic)
        - Hanya videonya - 41 (masing-masing sederhana dan masing-masing pendek):
            - [ ] [Probabilitas Dijelaskan (video)](https://www.youtube.com/watch?v=uzkc-qNVoOk&list=PLC58778F28211FA19)

- ### Algoritma NP, NP-Complete dan Approximation
    - Ketahui tentang kelas paling terkenal dari masalah NP-complete, seperti travelling salesman dan knapsack problem,
        dan kenali mereka saat pewawancara meminta Anda secara tidak langsung.
    - Ketahui arti NP-complete.
    - [ ] [Kompleksitas Komputasi (video)](https://www.youtube.com/watch?v=moPtwq_cVH8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=23)
    - [ ] Simonson:
        - [ ] [Algoritme Serakah. II & Pengantar tentang NP-Completeness (video)](https://youtu.be/qcGnJ47Smlo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=2939)
        - [ ] [NP Completeness II & Reductions (video)](https://www.youtube.com/watch?v=e0tGC6ZQdQE&index=16&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [NP Completeness III (Video)](https://www.youtube.com/watch?v=fCX1BGT3wjE&index=17&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [NP Completeness IV (video)](https://www.youtube.com/watch?v=NKLDp3Rch3M&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=18)
    - [ ] Skiena:
        - [ ] [CSE373 2012 - Kuliah 23 - Pengantar NP-Completeness (video)](https://youtu.be/KiK5TVgXbFg?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1508)
        - [ ] [CSE373 2012 - Kuliah 24 - Bukti NP-Completeness (video)](https://www.youtube.com/watch?v=27Al52X3hd4&index=24&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [ ] [CSE373 2012 - Kuliah 25 - Tantangan NP-Completeness (video)](https://www.youtube.com/watch?v=xCPH4gwIIXM&index=25&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [Kompleksitas: P, NP, NP-completeness, Reductions (video)](https://www.youtube.com/watch?v=eHZifpgyH_4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=22)
    - [ ] [Kompleksitas: Algoritma Perkiraan (video)](https://www.youtube.com/watch?v=MEz1J9wY2iM&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=24)
    - [ ] [Kompleksitas: Algoritma Parameter Tetap (video)](https://www.youtube.com/watch?v=4q-jmGrmxKs&index=25&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - Ppeter Norvig membahas solusi yang hampir optimal untuk masalah penjual keliling:
        - [Jupyter Notebook](http://nbviewer.jupyter.org/url/norvig.com/ipython/TSP.ipynb)
    - Halaman 1048 - 1140 di CLRS jika Anda memilikinya.

- ### Cache
    - [ ] LRU cache:
        - [ ] [Keajaiban Cache LRU (100 Hari Google Dev) (video)](https://www.youtube.com/watch?v=R5ON3iwx78M)
        - [ ] [Menerapkan LRU (video)](https://www.youtube.com/watch?v=bq6N7Ym81iI)
        - [ ] [LeetCode - 146 LRU Cache (C++) (video)](https://www.youtube.com/watch?v=8-FZRAjR7qU)
    - [ ] CPU cache:
        - [ ] [MIT 6.004 L15: Hirarki Memori (video)](https://www.youtube.com/watch?v=vjYF_fAZI5E&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-&index=24)
        - [ ] [MIT 6.004 L16: Masalah Cache (video)](https://www.youtube.com/watch?v=ajgC3-pyGlk&index=25&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-)

- ### Proses dan Thread
    - [ ] Ilmu Komputer 162 - Sistem Operasi (25 video):
        - untuk proses dan thread lihat video 1-11
        - [Sistem Operasi dan Pemrograman Sistem (video)](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iBDyz-ba4yDskqMDY6A1w_c)
    - [Apa Perbedaan Antara Proses dan Thread?](https://www.quora.com/What-is-the-difference-between-a-process-and-a-thread)
    - Meliputi:
        - Masalah Processes, Threads, Concurrency
            - Perbedaan antara proses dan thread
            - Processes
            - Threads
            - Locks
            - Mutexes
            - Semaphores
            - Monitors
            - Bagaimana cara kerjanya?
            - Deadlock
            - Livelock
        - Aktivitas CPU, interupsi, pengalihan konteks
        - Konstruksi konkurensi modern dengan prosesor multi inti
        - [Paging, segmentasi, dan memori virtual (video)](https://www.youtube.com/watch?v=LKe7xK0bF7o&list=PLCiOXwirraUCBE9i_ukL8_Kfg6XNv7Se8&index=2)
        - [Interrupts (video)](https://www.youtube.com/watch?v=uFKi2-J-6II&list=PLCiOXwirraUCBE9i_ukL8_Kfg6XNv7Se8&index=3)
        - Kebutuhan resource proses (memori: kode, penyimpanan statis, stack, heap, dan juga deskriptor file, i /o)
        - Kebutuhan sumber daya thread (berbagi di atas (dikurangi stack) dengan thread lain dalam proses yang sama tetapi masing-masing memiliki pc, penghitung stack, register, dan stacknya sendiri)
        - Forking benar-benar menyalin saat menulis (hanya baca) hingga proses baru menulis ke memori, lalu menyalin penuh.
        - Peralihan konteks
            - Bagaimana peralihan konteks dimulai oleh sistem operasi dan perangkat keras yang mendasarinya?
    - [ ] [thread di C ++ (seri - 10 video)](https://www.youtube.com/playlist?list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M)
    - [ ] Konkurensi (Concurrency) dengan Python (video):
        - [ ] [Serial pendek tentang thread](https://www.youtube.com/playlist?list=PL1H1sBF1VAKVMONJWJkmUh6_p8g4F2oy1)
        - [ ] [Thread Python](https://www.youtube.com/watch?v=Bs7vPNbB9JM)
        - [ ] [Memahami Python GIL (2010)](https://www.youtube.com/watch?v=Obt-vMVdM8s)
            - [referensi](http://www.dabeaz.com/GIL)
        - [ ] [David Beazley - Python Concurrency Dari Dasar Ke Atas: LANGSUNG! - PyCon 2015](https://www.youtube.com/watch?v=MCs5OvhV9S4)
        - [ ] [Keynote David Beazley - Topik Menarik (Python Asyncio)](https://www.youtube.com/watch?v=ZzfHjytDceU)
        - [ ] [Mutex dengan Python](https://www.youtube.com/watch?v=0zaPs8OtyKY)

- ### Testing
    - Meliputi:
        - bagaimana unit testing bekerja
        - apa itu objek tiruan (mock objects)
        - apa itu pengujian integrasi (integration testing)
        - apa itu dependency injection
    - [ ] [Pengujian Perangkat Lunak Agile dengan James Bach (video)](https://www.youtube.com/watch?v=SAhJf36_u5U)
    - [ ] [Kuliah Terbuka oleh James Bach tentang Pengujian Perangkat Lunak (video)](https://www.youtube.com/watch?v=ILkT_HV9DVU)
    - [ ] [Steve Freeman - Pengembangan Berbasis Test (bukan itu yang kami maksudkan) (video)](https://vimeo.com/83960706)
        - [slides](http://gotocon.com/dl/goto-berlin-2013/slides/SteveFreeman_TestDrivenDevelopmentThatsNotWhatWeMeant.pdf)
    - [ ] Dependency injection:
        - [ ] [video](https://www.youtube.com/watch?v=IKD2-MAkXyQ)
        - [ ] [Tao dari Testing](http://jasonpolites.github.io/tao-of-testing/ch3-1.1.html)
    - [ ] [Bagaimana menulis tes](http://jasonpolites.github.io/tao-of-testing/ch4-1.1.html)

- ### Penjadwalan
    - Di OS, bagaimana cara kerjanya?
    - Dapat diperoleh dari video Sistem Operasi

- ### Pencarian & manipulasi string
    - [ ] [Sedgewick - Suffix Array (video)](https://www.coursera.org/learn/algorithms-part2/lecture/TH18W/suffix-arrays)
    - [ ] [Sedgewick - Pencarian Substring (video)](https://www.coursera.org/learn/algorithms-part2/home/week/4)
        - [ ] [1. Pengantar Pencarian Substring](https://www.coursera.org/learn/algorithms-part2/lecture/n3ZpG/introduction-to-substring-search)
        - [ ] [2. Pencarian Substring Brute-Force](https://www.coursera.org/learn/algorithms-part2/lecture/2Kn5i/brute-force-substring-search)
        - [ ] [3. Knuth-Morris Pratt](https://www.coursera.org/learn/algorithms-part2/lecture/TAtDr/knuth-morris-pratt)
        - [ ] [4. Boyer-Moore](https://www.coursera.org/learn/algorithms-part2/lecture/CYxOT/boyer-moore)
        - [ ] [5. Rabin-Karp](https://www.coursera.org/learn/algorithms-part2/lecture/3KiqT/rabin-karp)
    - [ ] [Pola pencarian dalam teks (video)](https://www.coursera.org/learn/data-structures/lecture/tAfHI/search-pattern-in-text)

    Jika Anda membutuhkan detail lebih lanjut tentang subjek ini, lihat bagian "String Matching" di [Detail Tambahan tentang Beberapa Subjek](#detail-tambahan-tentang-beberapa-subjek).

- ### Tries
    - Perhatikan bahwa ada berbagai jenis percobaan. Beberapa memiliki prefiks, beberapa tidak, dan beberapa menggunakan bit untuk melacak jalur
    - Saya membaca kode, tetapi tidak akan menerapkan
    - [ ] [Sedgewick - Tries (3 video)](https://www.coursera.org/learn/algorithms-part2/home/week/4)
        - [ ] [1. R Way Tries](https://www.coursera.org/learn/algorithms-part2/lecture/CPVdr/r-way-tries)
        - [ ] [2. Ternary Search Tries](https://www.coursera.org/learn/algorithms-part2/lecture/yQM8K/ternary-search-tries)
        - [ ] [3. Operasi Berbasis Karakter](https://www.coursera.org/learn/algorithms-part2/lecture/jwNmV/character-based-operations)
    - [ ] [Catatan tentang Struktur Data dan Teknik Pemrograman](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Tries)
    - [ ] Video kursus singkat:
        - [ ] [Pengantar Tries (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/08Xyf/core-introduction-to-tries)
        - [ ] [Performance Of Tries (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/PvlZW/core-performance-of-tries)
        - [ ] [Menerapkan A Trie (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/DFvd3/core-implementing-a-trie)
    - [ ] [Trie: Sebuah Struktur Data Terabaikan](https://www.toptal.com/java/the-trie-a-neglected-data-structure)
    - [ ] [TopCoder - Menggunakan Tries](https://www.topcoder.com/community/competitive-programming/tutorials/using-tries/)
    - [ ] [Kuliah Stanford (kasus penggunaan dunia nyata) (video)](https://www.youtube.com/watch?v=TJ8SkcUSdbU)
    - [ ] [MIT, Advanced Data Structures, Strings (bisa sangat tidak jelas sekitar setengahnya) (video)](https://www.youtube.com/watch?v=NinWEPPrkDQ&index=16&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf)

- ### Angka Floating Point
    - [ ] simple 8-bit: [Representasi Angka Floating Point - 1 (video - ada kesalahan dalam penghitungan - lihat deskripsi video)](https://www.youtube.com/watch?v=ji3SfClm8TU)
    - [ ] 32 bit: [IEEE754 32-bit floating point biner (video)](https://www.youtube.com/watch?v=50ZYcZebIec)

- ### Unicode
    - [ ] [Minimum Mutlak Setiap Pengembang Perangkat Lunak Sepenuhnya, Secara Positif Harus Tahu Tentang Unicode dan Kumpulan Karakter](http://www.joelonsoftware.com/articles/Unicode.html)
    - [ ] [Apa Yang Setiap Programmer Benar-benar, Secara Positif Perlu Diketahui Tentang Unicode Dan Kumpulan Karakter Untuk Bekerja Dengan Teks](http://kunststube.net/encoding/)

- ### Endianness
    - [ ] [Endian Besar Dan Kecil](https://web.archive.org/web/20180107141940/http://www.cs.umd.edu:80/class/sum2003/cmsc311/Notes/Data/endian.html)
    - [ ] [Endian Besar Vs Endian Kecil (video)](https://www.youtube.com/watch?v=JrNF0KRAlyo)
    - [ ] [Endian Big And Kecil Dalam/Luar (video)](https://www.youtube.com/watch?v=oBSuXP-1Tc0)
        - Pembicaraan yang sangat teknis untuk pengembang kernel. Jangan khawatir jika sebagian besar di atas kepala Anda.
        - Paruh pertama sudah cukup.

- ### Jaringan
    - **jika Anda memiliki pengalaman jaringan atau ingin menjadi insinyur keandalan (reliability engineer) atau insinyur operasi (operations engineer), tunggu pertanyaan**
    - Jika tidak, ini bagus untuk diketahui
    - [ ] [Khan Academy](https://www.khanacademy.org/computing/computer-science/computers-and-internet-code-org)
    - [ ] [UDP dan TCP: Perbandingan Transport Protocols (video)](https://www.youtube.com/watch?v=Vdc8TCESIg8)
    - [ ] [TCP / IP dan Model OSI Dijelaskan! (video)](https://www.youtube.com/watch?v=e5DEVa9eSN0)
    - [ ] [Transmisi Paket melalui Internet. Tutorial Jaringan & TCP / IP. (video)](https://www.youtube.com/watch?v=nomyRJehhnM)
    - [ ] [HTTP (video)](https://www.youtube.com/watch?v=WGJrLqtX7As)
    - [ ] [SSL dan HTTPS (video)](https://www.youtube.com/watch?v=S2iBR2ZlZf0)
    - [ ] [SSL / TLS (video)](https://www.youtube.com/watch?v=Rp3iZUvXWlM)
    - [ ] [HTTP 2.0 (video)](https://www.youtube.com/watch?v=E9FxNzv1Tr8)
    - [ ] [Seri Video (21 video) (video)](https://www.youtube.com/playlist?list=PLEbnTDJUr_IegfoqO4iPnPYQui46QqT0j)
    - [ ] [Subnetting Demystified - Bagian 5 CIDR Notation (video)](https://www.youtube.com/watch?v=t5xYI0jzOf4)
    - [ ] Socket:
        - [ ] [Java - Sockets - Pengenalan (video)](https://www.youtube.com/watch?v=6G_W54zuadg&t=6s)
        - [ ] [Pemrograman Socket (video)](https://www.youtube.com/watch?v=G75vN2mnJeQ)

## Perancangan Sistem, Skalabilitas, Penganganan Data

**Anda dapat mengharapkan pertanyaan desain sistem jika Anda memiliki pengalaman 4+ tahun.**

- Skalabilitas dan Desain Sistem adalah topik yang sangat besar dengan banyak topik dan sumber daya,
    karena ada banyak hal yang perlu dipertimbangkan saat merancang sistem perangkat lunak / perangkat keras yang dapat diskalakan.
    Berharap untuk meluangkan sedikit waktu untuk ini
- Pertimbangan:
    - Skalabilitas (Scalability)
        - Saring kumpulan data besar menjadi nilai tunggal
        - Ubah satu kumpulan data ke kumpulan lainnya
        - Menangani data dalam jumlah yang sangat besar
    - Desain sistem (System design)
        - set fitur (features sets)
        - antarmuka (interfaces)
        - hierarki kelas (class hierarchies)
        - merancang sistem di bawah batasan tertentu
        - kesederhanaan dan ketahanan (simplicity and robustness)
        - pengorbanan (tradeoffs)
        - analisis dan pengoptimalan kinerja
- [ ] **MULAI DI SINI**: [Primer Desain Sistem](https://github.com/donnemartin/system-design-primer)
- [ ] [Desain Sistem dari HiredInTech](http://www.hiredintech.com/system-design/)
- [ ] [Bagaimana Saya Mempersiapkan Untuk Menjawab Pertanyaan Desain Secara Teknis?](https://www.quora.com/How-do-I-prepare-to-answer-design-questions-in-a-technical-interview?redirected_qid=1500023)
- [ ] [8 Hal Yang Perlu Diketahui Sebelum Wawancara Desain Sistem](http://blog.gainlo.co/index.php/2015/10/22/8-things-you-need-to-know-before-system-design-interviews/)
- [ ] [Desain algoritme](http://www.hiredintech.com/algorithm-design/)
- [ ] [Normalisasi Basis Data - 1NF, 2NF, 3NF dan 4NF (video)](https://www.youtube.com/watch?v=UrYLYV7WSHM)
- [ ] [Wawancara Desain Sistem](https://github.com/checkcheckzz/system-design-interview) - Ada banyak sumber daya yang satu ini. Lihat artikel dan contoh. Saya taruh beberapa di bawah ini
- [ ] [Bagaimana menjadi ace wawancara desain sistem](http://www.palantir.com/2011/10/how-to-rock-a-systems-design-interview/)
- [ ] [Nomor yang Harus Diketahui Setiap Orang](http://everythingisdata.wordpress.com/2009/10/17/numbers-everyone-should-know/)
- [ ] [Berapa lama waktu yang dibutuhkan untuk membuat pengalih konteks?](http://blog.tsunanet.net/2010/11/how-long-does-it-take-to-make-context.html)
- [ ] [Transaksi di Seluruh Pusat Data (video)](https://www.youtube.com/watch?v=srOgpXECblk)
- [ ] [Pengantar bahasa Inggris sederhana untuk Teorema CAP](http://ksat.me/a-plain-english-introduction-to-cap-theorem) 
- [ ] Algoritma Konsensus:
    - [ ] Paxos - [Paxos Agreement - Computerphile (video)](https://www.youtube.com/watch?v=s8JqcZtvnsM)
    - [ ] Raft - [Pengantar Algoritma Konsensus Terdistribusi Rakit (video)](https://www.youtube.com/watch?v=P9Ydif5_qvE)
        - [ ] [Kertas yang mudah dibaca](https://raft.github.io/)
        - [ ] [Infografis](http://thesecretlivesofdata.com/raft/)
- [ ] [Hashing yang Konsisten](http://www.tom-e-white.com/2007/11/consistent-hashing.html)
- [ ] [Pola NoSQL](http://horicky.blogspot.com/2009/11/nosql-patterns.html)
- [ ] Skalabilitas:
    - Anda tidak membutuhkan semua ini. Pilih saja beberapa yang menarik bagi Anda.
    - [ ] [Tinjauan bagus (video)](https://www.youtube.com/watch?v=-W9F__D3oY4)
    - [ ] Seri pendek:
        - [Klon (Clones)](http://www.lecloud.net/post/7295452622/scalability-for-dummies-part-1-clones)
        - [Database (Database)](http://www.lecloud.net/post/7994751381/scalability-for-dummies-part-2-database)
        - [Cache (Cache)](http://www.lecloud.net/post/9246290032/scalability-for-dummies-part-3-cache)
        - [Asinkronisme (Asynchronism)](http://www.lecloud.net/post/9699762917/scalability-for-dummies-part-4-asynchronism)
    - [ ] [Arsitektur Web yang Skalabel dan Sistem Terdistribusi](http://www.aosabook.org/en/distsys.html)
    - [ ] [Kekeliruan Komputasi Terdistribusi Dijelaskan](https://pages.cs.wisc.edu/~zuyu/files/fallacies.pdf)
    - [ ] [Teknik Pemrograman Pragmatis](http://horicky.blogspot.com/2010/10/scalable-system-design-patterns.html)
        - [ekstra: Pemrosesan Graph Google Pregel](http://horicky.blogspot.com/2010/07/google-pregel-graph-processing.html)
    - [ ] [Jeff Dean - Membangun Sistem Perangkat Lunak di Google dan Pelajaran yang Dipetik (video)](https://www.youtube.com/watch?v=modXC5IWTJI)
    - [ ] [Pengantar Sistem Arsitek untuk Skala](http://lethain.com/introduction-to-architecting-systems-for-scale/)
    - [ ] [Menskalakan game seluler ke audiens global menggunakan App Engine dan Cloud Datastore (video)](https://www.youtube.com/watch?v=9nWyWwY2Onc)
    - [ ] [Bagaimana Google Melakukan Rekayasa Skala Planet untuk Infra Skala Planet (video)](https://www.youtube.com/watch?v=H4vMcD7zKM0)
    - [ ] [Pentingnya Algoritma](https://www.topcoder.com/community/competitive-programming/tutorials/the-importance-of-algorithms/)
    - [ ] [Sharding](http://highscalability.com/blog/2009/8/6/an-unorthodox-approach-to-database-design-the-coming-of-the.html)
    - [ ] [Scale at Facebook (2012), "Building for a Million Users" (video)](https://www.youtube.com/watch?v=oodS71YtkGU)
    - [ ] [Teknik untuk Permainan Panjang - Astrid Atkinson Keynote (video)](https://www.youtube.com/watch?v=p0jGmgIrf_M&list=PLRXxvay_m8gqVlExPC5DG3TGWJTaBgqSA&index=4)
    - [ ] [7 Tahun Pelajaran Skalabilitas YouTube Dalam 30 Menit](http://highscalability.com/blog/2012/3/26/7-years-of-youtube-scalability-lessons-in-30-minutes.html)
        - [video](https://www.youtube.com/watch?v=G-lGCC4KKok)
    - [ ] [Bagaimana PayPal Mengukur Miliaran Transaksi Setiap Hari Hanya Dengan Menggunakan 8VM](http://highscalability.com/blog/2016/8/15/how-paypal-scaled-to-billions-of-transactions-daily-using-ju.html)
    - [ ] [Cara Menghapus Duplikat dalam Kumpulan Data Besar](https://blog.clevertap.com/how-to-remove-duplicates-in-large-datasets/)
    - [ ] [Sekilas tentang skala dan budaya teknik Etsy dengan Jon Cowie (video)](https://www.youtube.com/watch?v=3vV4YiqKm1o)
    - [ ] [Apa yang Membawa Amazon ke Arsitektur Layanan Mikro Sendiri](http://thenewstack.io/led-amazon-microservices-architecture/)
    - [ ] [Untuk Mengompresi Atau Tidak Mengompresi, Itu Pertanyaan Uber](https://eng.uber.com/trip-data-squeeze-json-encoding-compression/)
    - [ ] [Asyncio Tarantool Queue, Masuk Antrian](http://highscalability.com/blog/2016/3/3/asyncio-tarantool-queue-get-in-the-queue.html)
    - [ ] [Kapan Perkiraan Pemrosesan Kueri Digunakan?](http://highscalability.com/blog/2016/2/25/when-should-approximate-query-processing-be-used.html)
    - [ ] [Transisi Google Dari Pusat Data Tunggal, Ke Failover, Ke Arsitektur Native Multihomed](http://highscalability.com/blog/2016/2/23/googles-transition-from-single-datacenter-to-failover-to-a-n.html)
    - [ ] [Kunci pas](http://highscalability.com/blog/2012/9/24/google-spanners-most-surprising-revelation-nosql-is-out-and.html)
    - [ ] [Pemrograman Didorong Pembelajaran Mesin: Pemrograman Baru Untuk Dunia Baru](http://highscalability.com/blog/2016/7/6/machine-learning-driven-programming-a-new-programming-for-a.html)
    - [ ] [Teknologi Pengoptimalan Gambar Yang Melayani Jutaan Permintaan Per Hari](http://highscalability.com/blog/2016/6/15/the-image-optimization-technology-that-serves-millions-of-re.html)
    - [ ] [A Patreon Architecture Short](http://highscalability.com/blog/2016/2/1/a-patreon-architecture-short.html)
    - [ ] [Tinder: Bagaimana Salah Satu Mesin Rekomendasi Terbesar Memutuskan Siapa yang Akan Anda Lihat Selanjutnya?](http://highscalability.com/blog/2016/1/27/tinder-how-does-one-of-the-largest-recommendation-engines-de.html)
    - [ ] [Desain Cache Modern](http://highscalability.com/blog/2016/1/25/design-of-a-modern-cache.html)
    - [ ] [Streaming Video Langsung Pada Skala Facebook](http://highscalability.com/blog/2016/1/13/live-video-streaming-at-facebook-scale.html)
    - [ ] [Panduan Pemula Untuk Menskalakan Lebih dari 11 Juta Pengguna di Amazon AWS](http://highscalability.com/blog/2016/1/11/a-beginners-guide-to-scaling-to-11-million-users-on-amazons.html)
    - [ ] [Bagaimana Penggunaan Latensi Efek Docker?](http://highscalability.com/blog/2015/12/16/how-does-the-use-of-docker-effect-latency.html)
    - [ ] [Tampilan 360 Derajat Dari Seluruh Tumpukan Netflix](http://highscalability.com/blog/2015/11/9/a-360-degree-view-of-the-entire-netflix-stack.html)
    - [ ] [Latensi Ada Di Mana-Mana Dan Itu Membebani Penjualan Anda - Cara Menghancurkannya](http://highscalability.com/latency-everywhere-and-it-costs-you-sales-how-crush-it)
    - [ ] [Serverless (sangat lama, hanya perlu intinya)](http://martinfowler.com/articles/serverless.html)
    - [ ] [What Powers Instagram: Ratusan Instans, Lusinan Teknologi](http://instagram-engineering.tumblr.com/post/13649370142/what-powers-instagram-hundreds-of-instances)
    - [ ] [Arsitektur Cinchcast - Menghasilkan 1.500 Jam Audio Setiap Hari](http://highscalability.com/blog/2012/7/16/cinchcast-architecture-producing-1500-hours-of-audio-every-d.html)
    - [ ] [Arsitektur Penyiaran Video Langsung Justin.Tv](http://highscalability.com/blog/2010/3/16/justintvs-live-video-broadcasting-architecture.html)
    - [ ] [Arsitektur Permainan Sosial Playfish - 50 Juta Pengguna Bulanan Dan Berkembang](http://highscalability.com/blog/2010/9/21/playfishs-social-gaming-architecture-50-million-monthly-user.html)
    - [ ] [Arsitektur TripAdvisor - 40 Juta Pengunjung, 200 Juta Tampilan Halaman Dinamis, 30 TB Data](http://highscalability.com/blog/2011/6/27/tripadvisor-architecture-40m-visitors-200m-dynamic-page-view.html)
    - [ ] [Arsitektur PlentyOfFish](http://highscalability.com/plentyoffish-architecture)
    - [ ] [Arsitektur Salesforce - Bagaimana Mereka Menangani 1,3 Miliar Transaksi Sehari](http://highscalability.com/blog/2013/9/23/salesforce-architecture-how-they-handle-13-billion-transacti.html)
    - [ ] [Arsitektur ESPN Dalam Skala - Beroperasi pada 100.000 Duh Nuh Nuhs Per Detik](http://highscalability.com/blog/2013/11/4/espns-architecture-at-scale-operating-at-100000-duh-nuh-nuhs.html)
    - [ ] Lihat cara "Sistem Perpesanan, Serialisasi, dan Antrean" di bawah ini untuk info tentang beberapa teknologi yang dapat merekatkan layanan
    - [ ] Twitter:
        - [O'Reilly MySQL CE 2011: Jeremy Cole, "Data Besar dan Kecil di @Twitter" (video)](https://www.youtube.com/watch?v=5cKTP36HVgI)
        - [Garis Waktu dalam Skala](https://www.infoq.com/presentations/Twitter-Timeline-Scalability)
    - Untuk informasi lebih lanjut, lihat serial video "Menambang Kumpulan Data Besar-besaran" di bagian [Seri Video](#seri-video)
- [ ] Mempraktikkan proses desain sistem: Berikut adalah beberapa ide untuk dicoba di atas kertas, masing-masing dengan beberapa dokumentasi tentang bagaimana hal itu ditangani di dunia nyata:
    - review: [Primer Desain Sistem](https://github.com/donnemartin/system-design-primer)
    - [Desain Sistem dari HiredInTech](http://www.hiredintech.com/system-design/)
    - [contekan (cheat sheet)](https://github.com/jwasham/coding-interview-university/blob/main/extras/cheat%20sheets/system-design.pdf)
    - aliran:
        1. Pahami masalah dan cakupannya:
            - Tentukan kasus penggunaan, dengan bantuan pewawancara
            - Sarankan fitur tambahan
            - Hapus item yang dianggap pewawancara di luar jangkauan
            - Asumsikan ketersediaan tinggi diperlukan, tambahkan sebagai kasus penggunaan
        2. Pikirkan tentang kendala:
            - Tanyakan berapa banyak permintaan per bulan
            - Tanyakan berapa banyak permintaan per detik (mereka mungkin menawarkannya secara sukarela atau meminta Anda menghitungnya)
            - Perkirakan persentase membaca vs. menulis
            - Ingat aturan 80/20 saat memperkirakan
            - Berapa banyak data yang ditulis per detik
            - Total penyimpanan yang dibutuhkan selama 5 tahun
            - Berapa banyak data yang dibaca per detik
        3. Desain abstrak:
            - Lapisan (layanan, data, caching)
            - Infrastruktur: load balancing, perpesanan
            - Gambaran kasar tentang algoritme kunci apa pun yang menggerakkan layanan
            - Pertimbangkan kemacetan dan tentukan solusinya
    - Latihan:
        - [Desain jaringan CDN: artikel lama](https://kilthub.cmu.edu/articles/Globally_distributed_content_delivery/6605972)
        - [Rancang sistem pembuatan ID unik secara acak](https://blog.twitter.com/2010/announcing-snowflake)
        - [Mendesain database nilai kunci](http://www.slideshare.net/dvirsky/introduction-to-redis)
        - [Rancang sistem berbagi gambar](http://highscalability.com/blog/2011/12/6/instagram-architecture-14-million-users-terabytes-of-photos.html)
        - [Rancang sistem rekomendasi](http://ijcai13.org/files/tutorial_slides/td3.pdf)
        - [Rancang sistem penyingkat URL: disalin dari atas](http://www.hiredintech.com/system-design/the-system-design-process/)
        - [Rancang sistem cache](https://www.adayinthelifeof.nl/2011/02/06/memcache-internals/)

---

## Ulasan Akhir

    Bagian ini akan memiliki video pendek yang dapat Anda tonton dengan cukup cepat untuk meninjau sebagian besar konsep penting.
    Sangat menyenangkan jika Anda sering ingin penyegaran.

- [ ] Seri video subjek pendek berdurasi 2-3 menit (23 video)
    - [Video](https://www.youtube.com/watch?v=r4r1DZcx1cM&list=PLmVb1OknmNJuC5POdcDv5oCS7_OUkDgpj&index=22)
- [ ] Seri video subjek pendek berdurasi 2-5 menit - Michael Sambol (46 video):
    - [Video](https://www.youtube.com/@MichaelSambol)
    - [Code Examples](https://github.com/msambol/dsa)
- [ ] [Video Sedgewick - Algoritma I](https://www.coursera.org/learn/algorithms-part1)
- [ ] [Video Sedgewick - Algoritma II](https://www.coursera.org/learn/algorithms-part2)

---

## Latihan Pertanyaan Pemrograman

Sekarang setelah kamu mengetahui semua topik ilmu komputer di atas, sekarang saatnya berlatih menjawab soal coding.

**Latihan pertanyaan coding bukan tentang menghafal jawaban atas masalah pemrograman.**

Mengapa Anda perlu berlatih mengerjakan soal pemrograman:
- Pengenalan masalah, dan di mana struktur data dan algoritme yang tepat cocok
- Mengumpulkan persyaratan untuk masalah tersebut
- Berbicara tentang masalah seperti yang akan Anda lakukan dalam wawancara
- Coding di papan tulis atau kertas, bukan di komputer
- Hadir dengan kerumitan ruang dan waktu untuk solusi Anda
- Menguji solusi Anda

Ada pengantar yang bagus untuk pemecahan masalah metodis dan komunikatif dalam sebuah wawancara.
Anda juga akan mendapatkan ini dari buku wawancara pemrograman, tetapi menurut saya ini luar biasa:
[Kanvas desain algoritme](http://www.hiredintech.com/algorithm-design/)

Tidak ada papan tulis di rumah? Itu masuk akal. Saya orang aneh dan memiliki papan tulis besar. Alih-alih papan tulis, belilah papan gambar besar dari toko seni. Anda bisa duduk di sofa dan berlatih. Ini adalah "papan tulis sofa" saya.
Saya menambahkan pena di foto untuk skala. Jika Anda menggunakan pena, Anda pasti berharap dapat menghapusnya. Cepat berantakan. Saya menggunakan pensil dan penghapus.

![papan tulis sofa saya](https://d3j2pkmjtin6ou.cloudfront.net/art_board_sm_2.jpg)

Tambahan:

- [Matematika untuk Topcoders](https://www.topcoder.com/community/competitive-programming/tutorials/mathematics-for-topcoders/)
- [Pemrograman Dinamis - Dari Pemula hingga Mahir](https://www.topcoder.com/community/competitive-programming/tutorials/dynamic-programming-from-novice-to-advanced/)
- [Materi Wawancara MIT](https://web.archive.org/web/20160906124824/http://courses.csail.mit.edu/iap/interview/materials.php)

**Baca dan Lakukan Masalah Pemrograman (dalam urutan ini):**

- [ ] [Wawancara Pemrograman Terkena: Rahasia Mendaratkan Pekerjaan Berikutnya Anda, Edisi ke-2](http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html)
    - jawaban di C, C++ dan Java
- [ ] [Cracking the Coding Interview, Edisi ke-6](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - jawaban di Java

Lihat [Daftar Buku di atas](#daftar-buku)

## Latihan / tantangan coding

Setelah Anda mempelajari otak Anda, gunakan otak itu untuk bekerja.
Ambil tantangan pengkodean setiap hari, sebanyak yang Anda bisa.

- [Bagaimana Menemukan Solusi](https://www.topcoder.com/community/competitive-programming/tutorials/how-to-find-a-solution/)
- [Cara Membedah Pernyataan Masalah Topcoder](https://www.topcoder.com/community/competitive-programming/tutorials/how-to-dissect-a-topcoder-problem-statement/)

Video Pertanyaan Wawancara Coding:
- [IDeserve (88 video)](https://www.youtube.com/watch?v=NBcqBddFbZw&list=PLamzFoFxwoNjPfxzaWqs7cZGsPYy0x_gI)
- [Tushar Roy (5 playlist)](https://www.youtube.com/user/tusharroy2525/playlists?shelf_id=2&view=50&sort=dd)
    - Super for walkthroughs of problem solutions
- [Nick White - LeetCode Solutions (187 Video)](https://www.youtube.com/playlist?list=PLU_sdQYzUj2keVENTP0a5rdykRSgg9Wp-)
    - Good explanations of solution and the code
    - You can watch several in a short time
- [FisherCoder - Solusi LeetCode](https://youtube.com/FisherCoder)

Situs tantangan:
- [LeetCode](https://leetcode.com/)
    - My favorite coding problem site. It's worth the subscription money for the 1-2 months you'll likely be preparing
    - [LeetCode solutions from FisherCoder](https://github.com/fishercoder1534/Leetcode) 
    - See Nick White Videos above for short code-throughs
- [HackerRank](https://www.hackerrank.com/)
- [TopCoder](https://www.topcoder.com/)
- [InterviewCake](https://www.interviewcake.com/)
- [Geeks for Geeks](http://www.geeksforgeeks.org/)
- [InterviewBit](https://www.interviewbit.com)
- [Project Euler (math-focused)](https://projecteuler.net/index.php?section=problems)
- [Code Exercises](https://code-exercises.com)

Situs pembelajaran bahasa, dengan tantangan:
- [Codewars](http://www.codewars.com)
- [Codility](https://codility.com/programmers/)
- [HackerEarth](https://www.hackerearth.com/)
- [Sphere Online Judge (spoj)](http://www.spoj.com/)
- [Codechef](https://www.codechef.com/)

Repo tantangan:
- [Tantangan Interview Coding Interaktif dengan Python](https://github.com/donnemartin/interactive-coding-challenges)

Wawancara Mock:
- [Gainlo.co: Mock pewawancara dari perusahaan besar](http://www.gainlo.co/#!/) - Saya menggunakan ini dan itu membantu saya bersantai untuk layar ponsel dan wawancara di tempat
- [Pramp: Wawancara mengejek dari / dengan teman sebaya](https://www.pramp.com/) - model wawancara praktik peer-to-peer
- [Refdash: Wawancara tiruan dan wawancara yang dipercepat](https://refdash.com/) - juga membantu kandidat mempercepat dengan melewatkan beberapa wawancara dengan perusahaan teknologi
- [interviewing.io: Berlatih wawancara tiruan dengan insinyur senior](https://interviewing.io) - wawancara desain algoritme / sistem tanpa nama dengan insinyur senior dari FAANG secara anonim.

## Menjelang Proses Interview

- Memecahkan Wawancara Coding 2 Set (video):
    - [Memecahkan Wawancara Coding](https://www.youtube.com/watch?v=4NIb9l3imAo)
    - [Memecahkan Wawancara Coding - Seri Speaker Fullstack](https://www.youtube.com/watch?v=Eg5-tdAwclo)

## Resume Anda

- Lihat Lanjutkan item persiapan di Cracking The Coding Interview dan bagian belakang Wawancara Pemrograman Terkena

## Pikirkan saat wawancara datang

Pikirkan sekitar 20 pertanyaan wawancara yang akan Anda dapatkan, bersama dengan baris item di bawah ini. Miliki 2-3 jawaban untuk masing-masing.
Memiliki cerita, bukan hanya data, tentang sesuatu yang Anda capai.

- Mengapa Anda menginginkan pekerjaan ini?
- Apa masalah sulit yang telah Anda selesaikan?
- Tantangan terbesar yang dihadapi?
- Desain terbaik / terburuk terlihat?
- Ide untuk meningkatkan produk Google yang sudah ada.
- Bagaimana Anda bekerja dengan baik, sebagai individu dan sebagai bagian dari tim?
- Keterampilan atau pengalaman mana yang akan menjadi aset dalam peran tersebut dan mengapa?
- Apa yang paling Anda nikmati di [job x / project y]?
- Apa tantangan terbesar yang Anda hadapi di [pekerjaan x / proyek y]?
- Bug tersulit apa yang Anda hadapi di [pekerjaan x / proyek y]?
- Apa yang Anda pelajari di [pekerjaan x / proyek y]?
- Apa yang akan Anda lakukan lebih baik di [pekerjaan x / proyek y]?

## Bertanyalah Pada Pewawancara

    Beberapa milik saya (saya mungkin sudah tahu jawaban tetapi ingin pendapat atau perspektif tim mereka):

- Seberapa besar tim Anda?
- Seperti apa siklus pengembang Anda? Apakah Anda melakukan waterfall / sprint / agile?
- Apakah terburu-buru ke tenggat waktu biasa terjadi? Atau apakah ada fleksibilitas?
- Bagaimana keputusan dibuat dalam tim Anda?
- Berapa banyak pertemuan yang Anda lakukan per minggu?
- Apakah Anda merasa lingkungan kerja membantu Anda berkonsentrasi?
- Apa yang sedang kamu kerjakan?
- Apa yang Anda suka tentang itu?
- Seperti apa kehidupan kerja?

## Saat Anda Berhasil Mendapatkan Pekerjaannya

Selamat!

Terus belajar.

Anda tidak pernah benar-benar selesai.

---

    *****************************************************************************************************
    *****************************************************************************************************

    Segala sesuatu di bawah poin ini bersifat opsional. Ini adalah rekomendasi saya, bukan Google.
    Dengan mempelajari ini, Anda akan mendapatkan eksposur yang lebih besar ke lebih banyak konsep CS,
    dan akan lebih siap untuk pekerjaan rekayasa perangkat lunak apa pun.
    Anda akan menjadi insinyur perangkat lunak yang jauh lebih berpengalaman.

    *****************************************************************************************************
    *****************************************************************************************************

---

## Buku Tambahan

    Ini ada di sini sehingga Anda dapat menyelami topik yang menurut Anda menarik.

- [Lingkungan Pemrograman Unix](https://www.amazon.com/dp/013937681X)
    - Tua tapi bagus
- [Baris Perintah Linux: Pengantar Lengkap](https://www.amazon.com/dp/1593273894/)
    - Pilihan modern
- [Seri Ilustrasi TCP / IP](https://en.wikipedia.org/wiki/TCP/IP_Illustrated)
- [Pola Desain Kepala Pertama](https://www.amazon.com/gp/product/0596007124/)
    - Pengenalan lembut untuk pola desain
- [Pola Desain: Elemen Perangkat Lunak Object-Oriente yang Dapat Digunakan Kembali](https://www.amazon.com/Design-Patterns-Elements-Reusable-Object-Oriented/dp/0201633612)
    - Alias buku "Gang Of Four", atau GOF
    - Buku pola desain kanonik
- [Buku Pegangan Administrasi Sistem UNIX dan Linux, Edisi ke-5](https://www.amazon.com/UNIX-Linux-System-Administration-Handbook/dp/0134277554/)
- [Manual Desain Algoritma](http://www.amazon.com/Algorithm-Design-Manual-Steven-Skiena/dp/1849967202) (Skiena)
    - Sebagai review dan pengenalan masalah
    - Porsi katalog algoritme jauh di luar cakupan kesulitan yang akan Anda dapatkan dalam wawancara
    - Buku ini memiliki 2 bagian:
        - Kelas buku teks tentang struktur data dan algoritma
            - Kelebihan:
                - Merupakan review yang bagus seperti buku teks algoritma apapun
                - Cerita bagus dari pengalamannya memecahkan masalah di industri dan akademisi
                - Contoh kode di C
            - Kekurangan:
                - Bisa padat atau tidak bisa ditembus seperti CLRS, dan dalam beberapa kasus, CLRS mungkin menjadi alternatif yang lebih baik untuk beberapa mata pelajaran
                - Bab 7, 8, 9 bisa menyakitkan untuk dicoba diikuti, karena beberapa item tidak dijelaskan dengan baik atau membutuhkan lebih banyak otak daripada yang saya miliki
                - Jangan salah paham: Saya suka Skiena, gaya mengajarnya, dan tingkah lakunya, tapi saya mungkin bukan materi Stony Brook
        - Katalog algoritma:
            - Inilah alasan sebenarnya Anda membeli buku ini
            - Akan sampai ke bagian ini. Akan memperbarui di sini setelah saya berhasil melewatinya
    - Bisa menyewanya di kindle
    - jawaban:
        - [Solusi](http://www.algorithm.cs.sunysb.edu/algowiki/index.php/The_Algorithms_Design_Manual_(Second_Edition))
        - [Solusi](http://blog.panictank.net/category/algorithmndesignmanualsolutions/page/2/)
    - [Errata](http://www3.cs.stonybrook.edu/~skiena/algorist/book/errata)
- [Tulis Kode Hebat: Volume 1: Memahami Mesin](https://www.amazon.com/Write-Great-Code-Understanding-Machine/dp/1593270038)
    - Buku itu diterbitkan pada tahun 2004, dan agak ketinggalan jaman, tetapi merupakan sumber yang hebat untuk memahami komputer secara singkat
    - Penulis menemukan [HLA](https://en.wikipedia.org/wiki/High_Level_Assembly), jadi ambillah sebutan dan contoh di HLA dengan sedikit garam. Tidak banyak digunakan, tetapi contoh yang layak tentang seperti apa perakitan itu
    - Bab-bab ini layak dibaca untuk memberi Anda dasar yang bagus:
        - Bab 2 - Representasi Numerik
        - Bab 3 - Aritmatika Biner dan Operasi Bit
        - Bab 4 - Representasi Titik Mengambang
        - Bab 5 - Representasi Karakter
        - Bab 6 - Organisasi Memori dan Akses
        - Bab 7 - Tipe Data Komposit dan Objek Memori
        - Bab 9 - Arsitektur CPU
        - Bab 10 - Arsitektur Set Instruksi
        - Bab 11 - Arsitektur dan Organisasi Memori
- [Pengantar Algoritma](https://www.amazon.com/Introduction-Algorithms-3rd-MIT-Press/dp/0262033844)
    - **Penting:** Membaca buku ini hanya akan memiliki nilai yang terbatas. Buku ini adalah ulasan yang bagus tentang algoritme dan struktur data, tetapi tidak akan mengajari Anda cara menulis kode yang baik. Anda harus dapat membuat kode solusi yang layak secara efisien
    - Alias CLR, terkadang CLRS, karena Stein terlambat ke permainan

- [Arsitektur Komputer, Edisi Keenam: Pendekatan Kuantitatif](https://www.amazon.com/dp/0128119055)
    - For a richer, more up-to-date (2017), but longer treatment

- [Pemrograman Mutiara](http://www.amazon.com/Programming-Pearls-2nd-Jon-Bentley/dp/0201657880)
    - Beberapa bab pertama menyajikan solusi cerdas untuk masalah pemrograman (beberapa sangat lama menggunakan pita data)
        tetapi itu hanya intro. Ini adalah buku panduan tentang desain dan arsitektur program

## Pembelajaran Tambahan
    
    Saya menambahkannya untuk membantu Anda menjadi insinyur perangkat lunak yang berpengetahuan luas,
    dan untuk mengetahui teknologi dan algoritme tertentu, sehingga Anda akan memiliki kotak peralatan yang lebih besar.

- ### Kompilator
    - [How a Compiler Works in ~1 minute (video)](https://www.youtube.com/watch?v=IhC7sdYe-Jg)
    - [Harvard CS50 - Compilers (video)](https://www.youtube.com/watch?v=CSZLNYF4Klo)
    - [C++ (video)](https://www.youtube.com/watch?v=twodd1KFfGk)
    - [Understanding Compiler Optimization (C++) (video)](https://www.youtube.com/watch?v=FnGCDLhaxKU)

- ### Emacs and vi(m)
    - Biasakan diri Anda dengan editor kode berbasis unix
    - vi(m):
        - [Mengedit Dengan vim 01 - Instalasi, Setup, dan The Modes (video)](https://www.youtube.com/watch?v=5givLEMcINQ&index=1&list=PL13bz4SHGmRxlZVmWQ9DvXo1fEg4UdGkr)
        - [Petualangan VIM](http://vim-adventures.com/)
        - set of 4 videos:
            - [Editor vi / vim - Pelajaran 1](https://www.youtube.com/watch?v=SI8TeVMX8pk)
            - [Editor vi / vim - Pelajaran 2](https://www.youtube.com/watch?v=F3OO7ZIOaJE)
            - [Editor vi / vim - Pelajaran 3](https://www.youtube.com/watch?v=ZYEccA_nMaI)
            - [Editor vi / vim - Pelajaran 4](https://www.youtube.com/watch?v=1lYD5gwgZIA)
        - [Menggunakan Vi, bukan Emacs](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Using_Vi_instead_of_Emacs)
    - emacs:
        - [Tutorial Dasar Emacs (video)](https://www.youtube.com/watch?v=hbmV1bnQ-i0)
        - set of 3 (videos):
            - [Tutorial Emacs (Pemula) -Bagian 1- Perintah file, potong / salin / tempel, perintah kursor](https://www.youtube.com/watch?v=ujODL7MD04Q)
            - [Tutorial Emacs (Pemula) -Bagian 2- Manajemen buffer, pencarian, mode M-x grep dan rgrep](https://www.youtube.com/watch?v=XWpsRupJ4II)
            - [Tutorial Emacs (Pemula) -Bagian 3- Ekspresi, Pernyataan, ~ / .emacs file dan paket](https://www.youtube.com/watch?v=paSgzPso-yc)
        - [Mode Jahat: Atau, Bagaimana Saya Belajar untuk Berhenti Khawatir dan Cinta Emacs (video)](https://www.youtube.com/watch?v=JWD1Fpdd4Pc)
        - [Menulis Program C Dengan Emacs](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Writing_C_programs_with_Emacs)
        - [(mungkin) Mode Organisasi Secara Mendalam: Mengelola Struktur (video)](https://www.youtube.com/watch?v=nsGYet02bEk)

- ### Unix command line tools
    - Saya mengisi daftar di bawah ini dari alat yang bagus.
    - bash
    - cat
    - grep
    - sed
    - awk
    - curl or wget
    - sort
    - tr
    - uniq
    - [strace](https://en.wikipedia.org/wiki/Strace)
    - [tcpdump](https://danielmiessler.com/study/tcpdump/)

- ### Teori Informasi (video)
    - [Khan Academy](https://www.khanacademy.org/computing/computer-science/informationtheory)
    - Lebih lanjut tentang proses Markov:
        - [Pembuatan Teks Markov Inti](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/waxgx/core-markov-text-generation)
        - [Inti Penerapan Pembuatan Teks Markov](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/gZhiC/core-implementing-markov-text-generation)
        - [Proyek = Panduan Pembuatan Teks Markov](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/EUjrq/project-markov-text-generation-walk-through)
    - Lihat lebih lanjut dalam seri Informasi dan Entropi MIT 6.050J di bawah ini

- ### Pariti & Kode Hamming
    - [Intro](https://www.youtube.com/watch?v=q-3BctoUpHE)
    - [Keseimbangan (Parity)](https://www.youtube.com/watch?v=DdMcAUlxh1M)
    - Hamming Code:
        - [Deteksi kesalahan](https://www.youtube.com/watch?v=1A_NcXxdoCc)
        - [Koreksi kesalahan](https://www.youtube.com/watch?v=JAMLuxdHH8o)
    - [Error Checking](https://www.youtube.com/watch?v=wbH2VxzmoZk)

- ### Entropy
    - Lihat juga video di bawah ini
    - Pastikan untuk menonton video teori informasi terlebih dahulu
    - [Teori Informasi, Claude Shannon, Entropi, Redundansi, Kompresi Data & Bit (video)](https://youtu.be/JnJq3Py0dyM?t=176)

- ### Kriptografi
    - Lihat juga video di bawah ini
    - Pastikan untuk menonton video teori informasi terlebih dahulu
    - [Khan Academy Series](https://www.khanacademy.org/computing/computer-science/cryptography)
    - [Kriptografi: Funsgi Hash](https://www.youtube.com/watch?v=KqqOXndnvic&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=30)
    - [Kriptografi: Enkripsi](https://www.youtube.com/watch?v=9TNI2wHmaeI&index=31&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

- ### Kompresi
    - Pastikan untuk menonton video teori informasi terlebih dahulu
    - Computerphile (video):
        - [Kompresi](https://www.youtube.com/watch?v=Lto-ajuqW3w)
        - [Entropi dalam Kompresi](https://www.youtube.com/watch?v=M5c_RFKVkko)
        - [Pohon Terbalik (Pohon Huffman)](https://www.youtube.com/watch?v=umTbivyJoiI)
        - [EXTRA BITS / TRITS - Pohon Huffman](https://www.youtube.com/watch?v=DV8efuB3h2g)
        - [Kompresi Elegan dalam Teks (Metode LZ 77)](https://www.youtube.com/watch?v=goOa3DGezUA)
        - [Kompresi Teks Memenuhi Probabilitas](https://www.youtube.com/watch?v=cCDCfoHTsaU)
    - [Video Kepala Kompresor](https://www.youtube.com/playlist?list=PLOU2XLYxmsIJGErt5rrCqaSGTMyyqNt2H)
    - [(opsional) Google Developers Live: GZIP saja tidak cukup!](https://www.youtube.com/watch?v=whGwm0Lky2s)

- ### Keamanan komputer
    - [MIT (23 video)](https://www.youtube.com/playlist?list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [Introduction, Threat Models](https://www.youtube.com/watch?v=GqmQg-cszw4&index=1&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [Control Hijacking Attacks](https://www.youtube.com/watch?v=6bwzNg5qQ0o&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh&index=2)
        - [Buffer Overflow Exploits and Defenses](https://www.youtube.com/watch?v=drQyrzRoRiA&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh&index=3)
        - [Privilege Separation](https://www.youtube.com/watch?v=6SIJmoE9L9g&index=4&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [Capabilities](https://www.youtube.com/watch?v=8VqTSY-11F4&index=5&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [Sandboxing Native Code](https://www.youtube.com/watch?v=VEV74hwASeU&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh&index=6)
        - [Web Security Model](https://www.youtube.com/watch?v=chkFBigodIw&index=7&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [Securing Web Applications](https://www.youtube.com/watch?v=EBQIGy1ROLY&index=8&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [Symbolic Execution](https://www.youtube.com/watch?v=yRVZPvHYHzw&index=9&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [Network Security](https://www.youtube.com/watch?v=SIEVvk3NVuk&index=11&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [Network Protocols](https://www.youtube.com/watch?v=QOtA76ga_fY&index=12&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [Side-Channel Attacks](https://www.youtube.com/watch?v=PuVMkSEcPiI&index=15&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)

- ### Pengumpulan sampah
    - [GC dalam Python (video)](https://www.youtube.com/watch?v=iHVs_HkjdmI)
    - [Deep Dive Java: Pengumpulan Sampah itu Baik!](https://www.infoq.com/presentations/garbage-collection-benefits)
    - [Deep Dive Python: Pengumpulan Sampah di CPython (video)](https://www.youtube.com/watch?v=P-8Z0-MhdQs&list=PLdzf4Clw0VbOEWOS_sLhT_9zaiQDrS5AR&index=3)

- ### Pemrograman Paralel
    - [Coursera (Scala)](https://www.coursera.org/learn/parprog1/home/week/1)
    - [Python Efisien untuk Komputasi Paralel Berkinerja Tinggi (video)](https://www.youtube.com/watch?v=uY85GkaYzBk)

- ### Pengiriman Pesan, Serialisasi, dan Sistem Queueing
    - [Thrift](https://thrift.apache.org/)
        - [Tutorial](http://thrift-tutorial.readthedocs.io/en/latest/intro.html)
    - [Protocol Buffers](https://developers.google.com/protocol-buffers/)
        - [Tutorials](https://developers.google.com/protocol-buffers/docs/tutorials)
    - [gRPC](http://www.grpc.io/)
        - [gRPC 101 untuk Pengembang Java (video)](https://www.youtube.com/watch?v=5tmPvSe7xXQ&list=PLcTqM9n_dieN0k1nSeN36Z_ppKnvMJoly&index=1)
    - [Redis](http://redis.io/)
        - [Tutorial](http://try.redis.io/)
    - [Amazon SQS (queue)](https://aws.amazon.com/sqs/)
    - [Amazon SNS (pub-sub)](https://aws.amazon.com/sns/)
    - [RabbitMQ](https://www.rabbitmq.com/)
        - [Memulai](https://www.rabbitmq.com/getstarted.html)
    - [Celery](http://www.celeryproject.org/)
        - [Langkah Awal dengan Celery](http://docs.celeryproject.org/en/latest/getting-started/first-steps-with-celery.html)
    - [ZeroMQ](http://zeromq.org/)
        - [Intro - Baca Manual](http://zeromq.org/intro:read-the-manual)
    - [ActiveMQ](http://activemq.apache.org/)
    - [Kafka](http://kafka.apache.org/documentation.html#introduction)
    - [MessagePack](http://msgpack.org/index.html)
    - [Avro](https://avro.apache.org/)

- ### A*
    - [Algoritma Pencarian](https://en.wikipedia.org/wiki/A*_search_algorithm)
    - [A * Tutorial Pathfinding (video)](https://www.youtube.com/watch?v=KNXfSOx4eEE)
    - [A * Pathfinding (E01: penjelasan algoritma) (video)](https://www.youtube.com/watch?v=-L-WgKMFuhE)

- ### Transformasi Fourier Cepat
    - [Panduan Interaktif Untuk Transformasi Fourier](https://betterexplained.com/articles/an-interactive-guide-to-the-fourier-transform/)
    - [Apa itu Transformasi Fourier? Untuk apa itu digunakan?](http://www.askamathematician.com/2012/09/q-what-is-a-fourier-transform-what-is-it-used-for/)
    - [Apa itu Transformasi Fourier? (video)](https://www.youtube.com/watch?v=Xxut2PN-V8Q)
    - [Bagilah & Taklukkan: FFT (video)](https://www.youtube.com/watch?v=iTMn0Kt18tg&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=4)
    - [Memahami FFT](http://jakevdp.github.io/blog/2013/08/28/understanding-the-fft/)

- ### Bloom Filter
    - Given a Bloom filter with m bits and k hashing functions, both insertion and membership testing are O(k)
    - [Filter Bloom (video)](https://www.youtube.com/watch?v=-SuTGoFYjZs)
    - [Filter Bloom | Penambangan Kumpulan Data Besar-besaran | Universitas Stanford (video)](https://www.youtube.com/watch?v=qBTdukbzc78)
    - [Tutorial](http://billmill.org/bloomfilter-tutorial/)
    - [Cara Menulis Aplikasi Bloom Filter](http://blog.michaelschmatz.com/2016/04/11/how-to-write-a-bloom-filter-cpp/)

- ### HyperLogLog
    - [Cara Menghitung Miliaran Objek Berbeda Hanya Menggunakan Memori 1.5KB](http://highscalability.com/blog/2012/4/5/big-data-counting-how-to-count-a-billion-distinct-objects-us.html)

- ### Locality-Sensitive Hashing
    - Digunakan untuk menentukan kesamaan dokumen
    - Kebalikan dari MD5 atau SHA yang digunakan untuk menentukan apakah 2 dokumen / string sama persis
    - [Simhashing (semoga) menjadi sederhana](http://ferd.ca/simhashing-hopefully-made-simple.html)

- ### van Emde Boas Trees
    - [Bagilah & Taklukkan: Pohon van Emde Boas (video)](https://www.youtube.com/watch?v=hmReJCupbNU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=6)
    - [Catatan Kuliah MIT](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-046j-design-and-analysis-of-algorithms-spring-2012/lecture-notes/MIT6_046JS12_lec15.pdf)

- ### Augmented Data Structures
    - [CS 61B Kuliah 39: Augmented Data Structures](https://archive.org/details/ucberkeley_webcast_zksIj9O8_jc)

- ### Balanced search trees
    - Ketahui setidaknya satu jenis pohon biner yang seimbang (dan ketahui bagaimana implementasinya):
    - "Di antara pohon pencarian seimbang, AVL dan 2/3 trees sekarang sudah ketinggalan zaman, dan red-black trees tampaknya lebih populer.  Struktur data pengorganisasian mandiri yang sangat menarik adalah splay trees, yang menggunakan rotasi untuk memindahkan kunci apa pun yang diakses ke root." - Skiena
    - Dari jumlah tersebut, saya memilih untuk menerapkan splay tree.
        Dari apa yang saya baca, Anda tidak akan menerapkan pohon pencarian seimbang  (balanced search tree) dalam wawancara Anda.
        Tapi saya ingin eksposur ke pengkodean satu dan hadapi saja, splay trees adalah lutut lebah.
        Saya memang membaca banyak kode red-black tree code
         - Splay tree: menyisipkan, mencari, menghapus fungsi
         Jika Anda akhirnya menerapkan pohon merah / hitam coba ini saja:
         - Fungsi pencarian dan penyisipan, melewatkan penghapusan
    - Saya ingin mempelajari lebih lanjut tentang B-Tree karena digunakan secara luas dengan kumpulan data yang sangat besar
    - [Self-balancing binary search tree](https://en.wikipedia.org/wiki/Self-balancing_binary_search_tree)

    - **AVL trees**
        - Dalam praktek:
            Dari apa yang saya tahu, ini tidak banyak digunakan dalam praktiknya, tetapi saya bisa melihat di mana mereka akan berada:
            AVL trees (Pohon AVL) adalah struktur lain yang mendukung pencarian, penyisipan, dan penghapusan O(log n).
            Ini lebih seimbang daripada red-black trees, menyebabkan penyisipan dan pemindahan lebih lambat tetapi pengambilan lebih cepat.
            Ini membuatnya menarik untuk struktur data yang dapat dibangun sekali dan dimuat tanpa rekonstruksi, seperti kamus bahasa (atau kamus program, seperti opcode assembler atau interpreter)
        - [MIT AVL Trees / AVL Sort (video)](https://www.youtube.com/watch?v=FNeL18KsWPc&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=6)
        - [AVL Trees (video)](https://www.coursera.org/learn/data-structures/lecture/Qq5E0/avl-trees)
        - [Implementasi AVL Tree (video)](https://www.coursera.org/learn/data-structures/lecture/PKEBC/avl-tree-implementation)
        - [Split Dan Merge](https://www.coursera.org/learn/data-structures/lecture/22BgE/split-and-merge)
        - [[Review] AVL Trees (playlist) in 19 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZOUFgdIeOPuH6cfSnNRMau-)

    - **Splay trees**
        - Dalam praktek:
            Splay trees (pohon bentang) biasanya digunakan dalam implementasi cache, pengalokasi memori, router, pengumpul sampah, kompresi data, tali (pengganti string yang digunakan untuk string teks panjang), di Windows NT (dalam memori virtual, jaringan, dan kode sistem file) dll.
        - [CS 61B: Splay Trees (video)](https://archive.org/details/ucberkeley_webcast_G5QIXywcJlY)
        - Kuliah MIT: Splay Trees:
            - Menjadi sangat matematis, tetapi perhatikan 10 menit terakhir dengan pasti.
            - [Video](https://www.youtube.com/watch?v=QnPl_Y6EqMo)

    - **Red/black trees**
        - Ini adalah terjemahan dari sebuah 2-3 tree (lihat dibawah).
        - Dalam praktek:
            Red/black trees (Pohon merah / hitam) menawarkan jaminan kasus terburuk untuk waktu penyisipan, waktu penghapusan, dan waktu pencarian.
            Hal ini tidak hanya membuatnya berharga dalam aplikasi yang sensitif terhadap waktu seperti aplikasi waktu nyata, tetapi juga menjadikannya sebagai blok bangunan yang berharga dalam struktur data lain yang memberikan jaminan kasus terburuk;
            sebagai contoh, banyak struktur data yang digunakan dalam geometri komputasi dapat didasarkan pada red/black trees, dan Penjadwal yang Benar-Benar Adil yang digunakan dalam kernel Linux saat ini menggunakan red/black trees.
            Di Java versi 8, Collection HashMap telah dimodifikasi sedemikian rupa sehingga alih-alih menggunakan LinkedList untuk menyimpan elemen identik dengan kode hash yang buruk, red/black trees digunakan
        - [Aduni - Algoritma - Kuliah 4 (link lompat ke titik awal) (video)](https://youtu.be/1W3x0f_RmUo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3871)
        - [Aduni - Algoritma - Kuliah 5 (video)](https://www.youtube.com/watch?v=hm2GHwyKF1o&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=5)
        - [Red-Black Tree](https://en.wikipedia.org/wiki/Red%E2%80%93black_tree)
        - [Pengantar Pencarian Biner Dan Red-Black Tree](https://www.topcoder.com/thrive/articles/An%20Introduction%20to%20Binary%20Search%20and%20Red-Black%20Trees)
        - [[Review] Red-Black Trees (playlist) in 30 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZNqDI8qfOZgzbqahCUmUEin)

    - **2-3 search trees**
        - Dalam praktek:
            2-3 trees memiliki penyisipan yang lebih cepat dengan mengorbankan pencarian yang lebih lambat (karena ketinggian lebih banyak dibandingkan dengan AVL trees).
        - Anda akan sangat jarang menggunakan 2-3 trees karena implementasinya melibatkan berbagai jenis node. Sebaliknya, orang menggunakan red–black trees.
        - [Intuisi dan Definisi 23-Trees (video)](https://www.youtube.com/watch?v=C3SsdUqasD4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=2)
        - [Tampilan Biner dari 23-Trees](https://www.youtube.com/watch?v=iYvBtGKsqSg&index=3&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [2-3 Trees (pengajian siswa) (video)](https://www.youtube.com/watch?v=TOb1tuEZ2X4&index=5&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

    - **2-3-4 Trees (aka 2-4 trees)**
        - Dalam praktek:
            Untuk setiap 2-4 trees, ada red–black trees yang sesuai dengan elemen data dalam urutan yang sama.
            Operasi penyisipan dan penghapusan pada 2-4 trees juga setara dengan pembalikan warna dan rotasi pada red–black trees.
            Hal ini membuat 2-4 trees menjadi alat penting untuk memahami logika di balik red–black trees, dan inilah mengapa banyak teks algoritme pengantar memperkenalkan 2-4 trees tepat sebelum red–black trees, meskipun **2-4 trees tidak sering digunakan dalam praktik**.
        - [CS 61B Kuliah 26: Pohon Pencarian Seimbang (video)](https://archive.org/details/ucberkeley_webcast_zqrqYXkth6Q)
        - [Bawah Atas 234-Trees (video)](https://www.youtube.com/watch?v=DQdMYevEyE4&index=4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [Atas Bawah 234-Trees (video)](https://www.youtube.com/watch?v=2679VQ26Fp4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=5)

    - **N-ary (K-ary, M-ary) trees**
        - catatan: N atau K adalah faktor percabangan (cabang maks)
        - pohon biner adalah pohon 2-ary, dengan faktor percabangan = 2
        - 2-3 pohon adalah 3-ary
        - [K-Ary Tree](https://en.wikipedia.org/wiki/K-ary_tree)

    - **B-Trees**
        - Fakta menyenangkan: ini adalah misteri, tetapi B bisa berarti Boeing, Balanced, atau Bayer (co-inventor).
        - Dalam praktek:
            B-Trees banyak digunakan dalam database. Kebanyakan filesystem modern menggunakan B-tree (atau Variants). Sebagai tambahannya
            penggunaannya dalam database, B-tree juga digunakan dalam sistem file untuk memungkinkan akses acak cepat ke sembarang
            blokir di file tertentu. Masalah dasarnya adalah mengubah alamat file blok i menjadi blok disk
            (atau mungkin ke alamat sektor kepala silinder)
        - [B-Tree](https://en.wikipedia.org/wiki/B-tree)
        - [Struktur Data B-Tree](http://btechsmartclass.com/data_structures/b-trees.html)
        - [Pengantar B-Trees (video)](https://www.youtube.com/watch?v=I22wEC1tTGo&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=6)
        - [Definisi dan Penyisipan B-Tree (video)](https://www.youtube.com/watch?v=s3bCdZGrgpA&index=7&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [Penghapusan B-Tree (video)](https://www.youtube.com/watch?v=svfnVhJOfMc&index=8&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [MIT 6.851 - Model Hirarki Memori (video)](https://www.youtube.com/watch?v=V3omVLzI0WE&index=7&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf)
                - covers cache-oblivious B-Trees, very interesting data structures
                - the first 37 minutes are very technical, may be skipped (B is block size, cache line size)
        - [[Review] B-Trees (playlist) in 26 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZNFPPv98DjTdD9X6UI9KMHz)


- ### k-D Trees
    - Bagus untuk menemukan jumlah titik dalam persegi panjang atau objek berdimensi lebih tinggi
    - Cocok untuk tetangga terdekat
    - [Kd Trees (video)](https://www.youtube.com/watch?v=W94M9D_yXKk)
    - [Algoritma kNN K-d tree (video)](https://www.youtube.com/watch?v=Y4ZgLlDfKDg)

- ### Skip lists
    -"Ini adalah semacam struktur data kultus" - Skiena
    - [Pengacakan: Skip lists (video)](https://www.youtube.com/watch?v=2g9OSRKJuzM&index=10&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [Untuk animasi dan sedikit lebih detail](https://en.wikipedia.org/wiki/Skip_list)

- ### Aliran Jaringan
    - [Ford-Fulkerson dalam 5 menit - Contoh langkah demi langkah (video)](https://www.youtube.com/watch?v=Tl90tNtKvxs)
    - [Algoritma Ford-Fulkerson (video)](https://www.youtube.com/watch?v=v1VgJmkEJW0)
    - [Aliran Jaringan (video)](https://www.youtube.com/watch?v=2vhN4Ice5jI)

- ### Disjoint Sets & Union Find
    - [UCB 61B - Set Pemutusan; Penyortiran & pemilihan (video)](https://archive.org/details/ucberkeley_webcast_MAEGXTwmUsI)
    - [Algoritma Sedgewick - Union-Find (6 video)](https://www.coursera.org/learn/algorithms-part1/home/week/1)

- ### Matematika untuk Pemrosesan Cepat
    - [Aritmatika Integer, Perkalian Karatsuba (video)](https://www.youtube.com/watch?v=eCaXlAaN2uE&index=11&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [Teorema Sisa Cina (digunakan dalam kriptografi) (video)](https://www.youtube.com/watch?v=ru7mWZJlRQg)

- ### Treap
    - Combination of a binary search tree and a heap
    - [Treap](https://en.wikipedia.org/wiki/Treap)
    - [Struktur Data: Penjelasan hierarki (video)](https://www.youtube.com/watch?v=6podLUYinH8)
    - [Aplikasi dalam operasi set](https://www.cs.cmu.edu/~scandal/papers/treaps-spaa98.pdf)

- ### Pemrograman Linear (video)
    - [Pemrograman Linear](https://www.youtube.com/watch?v=M4K6HYLHREQ)
    - [Menemukan biaya minimum](https://www.youtube.com/watch?v=2ACJ9ewUC6U)
    - [Menemukan nilai maksimum](https://www.youtube.com/watch?v=8AA_81xI3ik)
    - [Memecahkan Persamaan Linear dengan Python - Algoritma Simpleks](https://www.youtube.com/watch?v=44pAWI7v5Zk)

- ### Geometry, Convex hull (video)
    - [Grafik Alg. IV: Pengantar algoritma geometris - Kuliah 9](https://youtu.be/XIAQRlNkJAw?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3164)
    - [Algoritma Geometris: Graham & Jarvis - Kuliah 10](https://www.youtube.com/watch?v=J5aJEcOr6Eo&index=10&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
    - [Bagilah & Taklukkan: Convex Hull, Median Finding](https://www.youtube.com/watch?v=EzeYI7p9MjU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=2)

- ### Matematika diskrit
    - Apa itu Matematika Diskrit?
        - [Perkenalan Matematika Diskrit](https://www.youtube.com/watch?v=p2b2Vb-cYCs)
    - Kuliah Gratis Matematika Diskrit
        - [Kuliah Gratis Matematika Diskrit *CS 70: Discrete Mathematics and Probability Theory (Spring 2015, UC Berkeley)*()](http://www.infocobuild.com/education/audio-video-courses/computer-science/CS70-Spring2015-Berkeley/lecture-01.html)

- ### Pembelajaran Mesin (Machine Learning)
    - Kenapa ML?
        - [Bagaimana Google Mengubah Dirinya Sebagai Perusahaan Machine Learning First](https://backchannel.com/how-google-is-remaking-itself-as-a-machine-learning-first-company-ada63defcb70)
        - [Pembelajaran Mendalam Skala Besar untuk Sistem Komputer Cerdas (video)](https://www.youtube.com/watch?v=QSaZGT4-6EY)
        - [Pembelajaran Mendalam dan Dapat Dipahami versus Rekayasa Perangkat Lunak dan Verifikasi oleh Peter Norvig](https://www.youtube.com/watch?v=X769cyzBNVw)
    - [Alat pembelajaran Mesin Cloud Google (video)](https://www.youtube.com/watch?v=Ja2hxBAwG_0)
    - [Resep Pembelajaran Mesin Google Developers (Scikit Learn & Tensorflow) (video)](https://www.youtube.com/playlist?list=PLOU2XLYxmsIIuiBfYad6rFYQU_jL2ryal)
    - [Tensorflow (video)](https://www.youtube.com/watch?v=oZikw5k_2FM)
    - [Tutorials Tensorflow](https://www.tensorflow.org/tutorials)
    - [Panduan Praktis untuk mengimplementasikan Jaringan Neural dengan Python (menggunakan Theano)](http://www.analyticsvidhya.com/blog/2016/04/neural-networks-python-theano/)
    - Kursus:
        - [Kursus pemula yang bagus: Pembelajaran Mesin](https://www.coursera.org/learn/machine-learning)
              - [video saja](https://www.youtube.com/playlist?list=PLZ9qNFMHZ-A4rycgrgOYma6zxF4BZGGPW)
              - lihat video 12-18 untuk review aljabar linier (14 dan 15 adalah duplikat)
        - [Nanodegree Deep Learning Google](https://www.udacity.com/course/deep-learning--ud730)
        - [Nanodegree Machine Learning Engineer Google / Kaggle](https://www.udacity.com/course/machine-learning-engineer-nanodegree--nd009t)
        - [Nanodegree, Insinyur Mobil Mengemudi Mandiri](https://www.udacity.com/drive)
    - Sumber:
        - Buku:
            - [Pembelajaran Mesin Python](https://www.amazon.com/Python-Machine-Learning-Sebastian-Raschka/dp/1783555130/)
            - [Ilmu Data dari Awal: Prinsip Pertama dengan Python](https://www.amazon.com/Data-Science-Scratch-Principles-Python/dp/149190142X)
            - [Pengantar Machine Learning dengan Python](https://www.amazon.com/Introduction-Machine-Learning-Python-Scientists/dp/1449369413/)
        - [Pembelajaran Mesin untuk Insinyur Perangkat Lunak](https://github.com/ZuzooVn/machine-learning-for-software-engineers)
        - Data School: http://www.dataschool.io/

--

## Detail Tambahan tentang Beberapa Subjek

    Saya menambahkan ini untuk memperkuat beberapa ide yang sudah disajikan di atas, tetapi tidak ingin memasukkannya di atas karena terlalu banyak. Sangat mudah untuk melakukannya secara berlebihan pada suatu subjek.
    Anda ingin dipekerjakan di abad ini, bukan?

- **SOLID**   
    - [ ] [Bob Martin SOLID Principles of Object Oriented and Agile Design (video)](https://www.youtube.com/watch?v=TMuno5RZNeE)
    - [ ] S - [Single Responsibility Principle (Prinsip Tanggung Jawab Tunggal)](http://www.oodesign.com/single-responsibility-principle.html) | [Tanggung jawab tunggal untuk setiap Objek](http://www.javacodegeeks.com/2011/11/solid-single-responsibility-principle.html)
        - [lebih banyak rasa](https://docs.google.com/open?id=0ByOwmqah_nuGNHEtcU5OekdDMkk)
    - [ ] O - [Open/Closed Principle (Prinsip Terbuka / Tertutup)](http://www.oodesign.com/open-close-principle.html)  | [Pada tingkat produksi, Objek siap untuk ekstensi tetapi tidak untuk modifikasi](https://en.wikipedia.org/wiki/Open/closed_principle)
        - [lebih banyak rasa](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgN2M5MTkwM2EtNWFkZC00ZTI3LWFjZTUtNTFhZGZiYmUzODc1&hl=en)
    - [ ] L - [Liskov Substitution Principle (Prinsip Substitusi Liskov)](http://www.oodesign.com/liskov-s-substitution-principle.html) | [Class Dasar dan Class Turunan mengikuti prinsip 'IS A'](http://stackoverflow.com/questions/56860/what-is-the-liskov-substitution-principle)
        - [lebih banyak rasa](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgNzAzZjA5ZmItNjU3NS00MzQ5LTkwYjMtMDJhNDU5ZTM0MTlh&hl=en)
    - [ ] I - [Interface segregation principle (Prinsip pemisahan antarmuka)](http://www.oodesign.com/interface-segregation-principle.html) | klien tidak boleh dipaksa untuk mengimplementasikan antarmuka yang tidak mereka gunakan
        - [Prinsip Pemisahan Antarmuka dalam 5 menit (video)](https://www.youtube.com/watch?v=3CtAfl7aXAQ)
        - [lebih banyak rasa](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgOTViYjJhYzMtMzYxMC00MzFjLWJjMzYtOGJiMDc5N2JkYmJi&hl=en)
    - [ ] D - [Dependency Inversion principle (Prinsip Ketergantungan Inversi)](http://www.oodesign.com/dependency-inversion-principle.html) | Kurangi dependency dalam komposisi objek.
        - [Mengapa Prinsip Pembalikan Ketergantungan Dan Mengapa Itu Penting](http://stackoverflow.com/questions/62539/what-is-the-dependency-inversion-principle-and-why-is-it-important)
        - [lebih banyak rasa](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgMjdlMWIzNGUtZTQ0NC00ZjQ5LTkwYzQtZjRhMDRlNTQ3ZGMz&hl=en)


- **Union-Find**
    - [Gambaran](https://www.coursera.org/learn/data-structures/lecture/JssSY/overview)
    - [Implementasi yang Naif](https://www.coursera.org/learn/data-structures/lecture/EM5D0/naive-implementations)
    - [Pohon](https://www.coursera.org/learn/data-structures/lecture/Mxu0w/trees)
    - [Union Berdasarkan Pangkat](https://www.coursera.org/learn/data-structures/lecture/qb4c2/union-by-rank)
    - [Kompresi Jalur](https://www.coursera.org/learn/data-structures/lecture/Q9CVI/path-compression)
    - [Opsi Analisis](https://www.coursera.org/learn/data-structures/lecture/GQQLN/analysis-optional)

- **Lebih banyak Pemrograman Dinamis** (videos)
    - [6.006: Pemrograman Dinamis I: Fibonacci, Jalur Terpendek](https://www.youtube.com/watch?v=OQ5jsbhAv_M&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=19)
    - [6.006: Pemrograman Dinamis II: Justifikasi Teks, Blackjack](https://www.youtube.com/watch?v=ENyox7kNKeY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=20)
    - [6.006: DP III: Tanda kurung, Edit Jarak, Knapsack](https://www.youtube.com/watch?v=ocZMDMZwhCY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=21)
    - [6.006: DP IV: Guitar Fingering, Tetris, Super Mario Bros.](https://www.youtube.com/watch?v=tp4_UXaVyx8&index=22&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [6.046: Pemrograman Dinamis & DP Lanjutan](https://www.youtube.com/watch?v=Tw1k46ywN6E&index=14&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [6.046: Pemrograman Dinamis: Jalur Terpendek Semua Pasangan](https://www.youtube.com/watch?v=NzgFUwOaoIw&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=15)
    - [6.046: Pemrograman Dinamis (pengkajian siswa)](https://www.youtube.com/watch?v=krZI60lKPek&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=12)

- **Pemrosesan Graph Lanjutan** (video)
    - [Algoritma Terdistribusi Sinkron: Pemutusan Simetri. Jalur Terpendek yang Merentangkan Pohon](https://www.youtube.com/watch?v=mUBmcbbJNf4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=27)
    - [Algoritma Terdistribusi Asynchronous: Shortest-Paths Spanning Trees](https://www.youtube.com/watch?v=kQ-UQAzcnzA&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=28)

- MIT **Probabilitas** (matematika, dan lakukan perlahan, yang bagus untuk hal-hal matematika) (video):
    - [MIT 6.042J - Pengenalan Probabilitas](https://www.youtube.com/watch?v=SmFwFdESMHI&index=18&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Probabilitas Bersyarat](https://www.youtube.com/watch?v=E6FbvM-FGZ8&index=19&list=PLB7540DEDD482705B)
    - [DENGAN 6.042J - Kemerdekaan](https://www.youtube.com/watch?v=l1BCv3qqW4A&index=20&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Variabel Acak](https://www.youtube.com/watch?v=MOfhhFaQdjw&list=PLB7540DEDD482705B&index=21)
    - [MIT 6.042J - Harapan I.](https://www.youtube.com/watch?v=gGlMSe7uEkA&index=22&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Harapan II](https://www.youtube.com/watch?v=oI9fMUqgfxY&index=23&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Penyimpangan Besar](https://www.youtube.com/watch?v=q4mwO2qS2z4&index=24&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Jalan Acak](https://www.youtube.com/watch?v=56iFMY8QW2k&list=PLB7540DEDD482705B&index=25)

- [Simonson: Algoritma Perkiraan (video)](https://www.youtube.com/watch?v=oDniZCmNmNw&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=19)

- **Pencocokan String**
    - Rabin-Karp (videos):
        - [Algoritma Rabin Karps](https://www.coursera.org/learn/data-structures/lecture/c0Qkw/rabin-karps-algorithm)
        - [Prekomputasi](https://www.coursera.org/learn/data-structures/lecture/nYrc8/optimization-precomputation)
        - [Optimasi: Implementasi dan Analisis](https://www.coursera.org/learn/data-structures/lecture/h4ZLc/optimization-implementation-and-analysis)
        - [Penggandaan Meja, Karp-Rabin](https://www.youtube.com/watch?v=BRO7mVIFt08&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=9)
        - [Rolling Hashes, Analisis Amortisasi](https://www.youtube.com/watch?v=w6nuXg0BISo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=32)
    - Knuth-Morris-Pratt (KMP):
        - [Algoritma Pencocokan String Knuth-Morris-Pratt (KMP)](https://www.youtube.com/watch?v=5i7oKodCRJo)
    - Algoritma pencarian string Boyer – Moore
        - [Algoritma Pencarian String Boyer-Moore](https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_string_search_algorithm)
        - [Algoritma Boyer-Moore-Horspool Pencarian String Lanjutan (video)](https://www.youtube.com/watch?v=QDZpzctPf10)
    - [Coursera: Algoritma pada String](https://www.coursera.org/learn/algorithms-on-strings/home/week/1)
        - dimulai dengan baik, tetapi pada saat melewati KMP, hal itu menjadi lebih rumit dari yang seharusnya
        - penjelasan yang bagus tentang percobaan
        - bisa dilewati

- **Penyortiran**

    - Kuliah Stanford tentang penyortiran:
        - [Kuliah 15 | Abstraksi Pemrograman (video)](https://www.youtube.com/watch?v=ENp00xylP7c&index=15&list=PLFE6E58F856038C69)
        - [Kuliah 16 | Abstraksi Pemrograman (video)](https://www.youtube.com/watch?v=y4M9IVgrVKo&index=16&list=PLFE6E58F856038C69)
    - Shai Simonson, [Aduni.org](http://www.aduni.org/):
        - [Algoritma - Sortasi - Kuliah 2 (video)](https://www.youtube.com/watch?v=odNJmw5TOEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=2)
        - [Algoritma - Sorting II - Kuliah 3 (video)](https://www.youtube.com/watch?v=hj8YKFTFKEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=3)
    - Steven Skiena memberi kuliah tentang penyortiran:
        - [kuliah dimulai pada 26:46 (video)](https://youtu.be/ute-pmMkyuk?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1600)
        - [kuliah dimulai pada 27:40 (video)](https://www.youtube.com/watch?v=yLvp-pB8mak&index=8&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [kuliah dimulai pada 35:00 (video)](https://www.youtube.com/watch?v=q7K9otnzlfE&index=9&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [kuliah dimulai pada 23:50 (video)](https://www.youtube.com/watch?v=TvqIGu9Iupw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=10)

## Seri Video

Duduk dan nikmati. "Netflix dan keterampilan": P

- [Daftar masalah Pemrograman Dinamis individu (masing-masing pendek)](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)

- [x86 Arsitektur, Perakitan, Aplikasi (11 video)](https://www.youtube.com/playlist?list=PL038BE01D3BAEFDB0)

- [MIT 18.06 Linear Aljabar, Musim Semi 2005 (35 video)](https://www.youtube.com/playlist?list=PLE7DDD91010BC51F8)

- [Luar Biasa - MIT Calculus Revisited: Single Variable Calculus](https://www.youtube.com/playlist?list=PL3B08AE665AB9002A)

- [Ilmu Komputer 70, 001 - Musim Semi 2015 - Matematika Diskrit dan Teori Probabilitas](http://www.infocobuild.com/education/audio-video-courses/computer-science/cs70-spring2015-berkeley.html)

- [Matematika Diskrit oleh Shai Simonson (19 video)](https://www.youtube.com/playlist?list=PLWX710qNZo_sNlSWRMVIh6kfTjolNaZ8t)

- [Matematika Diskrit Bagian 1 oleh Sarada Herke (5 video)](https://www.youtube.com/playlist?list=PLGxuz-nmYlQPOc4w1Kp2MZrdqOOm4Jxeo)

- CSE373 - Analysis of Algorithms (25 videos)
    - [Kuliah Skiena dari Algoritma Design Manual](https://www.youtube.com/watch?v=ZFjhkohHdAA&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=1)

- [UC Berkeley 61B (Musim Semi 2014): Struktur Data (25 video)](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd)

- [UC Berkeley 61B (Musim Gugur 2006): Struktur Data (39 video)](https://archive.org/details/ucberkeley-webcast-PL4BBB74C7D2A1049C)

- [UC Berkeley 61C: Struktur Mesin (26 video)](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iCl2-D-FS5mk0jFF6cYSJs_)

- [OOSE: Software Dev Menggunakan UML dan Java (21 video)](https://www.youtube.com/playlist?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)

- ~~ [UC Berkeley CS 152: Arsitektur dan Teknik Komputer (20 video)](https://www.youtube.com/watch?v=UH0QYvtP7Rk&index=20&list=PLkFD6_40KJIwEiwQx1dACXwh-2Fuo32qr)~~

- [MIT 6.004: Struktur Komputasi (49 video)](https://www.youtube.com/playlist?list=PLDSlqjcPpoL64CJdF0Qee5oWqGS6we_Yu)

- [Carnegie Mellon - Kuliah Arsitektur Komputer (39 video)](https://www.youtube.com/playlist?list=PL5PHm2jkkXmi5CxxI7b3JCL1TWybTDtKq)

- [MIT 6.006: Pengantar Algoritma (47 video)](https://www.youtube.com/watch?v=HtSuA80QTyo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&nohtml5=False)

- [MIT 6.033: Teknik Sistem Komputer (22 video)](https://www.youtube.com/watch?v=zm2VP0kHl1M&list=PL6535748F59DCA484)

- [MIT 6.034 Artificial Intelligence, Fall 2010 (30 video)](https://www.youtube.com/playlist?list=PLUl4u3cNGP63gFHB6xb-kVBiQHYe_4hSi)

- [MIT 6.042J: Matematika untuk Ilmu Komputer, Musim Gugur 2010 (25 video)](https://www.youtube.com/watch?v=L3LMbpZIKhQ&list=PLB7540DEDD482705B)

- [MIT 6.046: Desain dan Analisis Algoritma (34 video)](https://www.youtube.com/watch?v=2P-yW7LQr08&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

- [MIT 6.050J: Information and Entropy, Spring 2008 (19 video)](https://www.youtube.com/watch?v=phxsQrZQupo&list=PL_2Bwul6T-A7OldmhGODImZL8KEVE38X7)

- [MIT 6.851: Struktur Data Lanjutan (22 video)](https://www.youtube.com/watch?v=T0yzrZL1py0&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=1)

- [MIT 6.854: Algoritma Lanjutan, Musim Semi 2016 (24 video)](https://www.youtube.com/playlist?list=PL6ogFv-ieghdoGKGg2Bik3Gl1glBTEu8c)

- [Harvard COMPSCI 224: Algoritma Lanjutan (25 video)](https://www.youtube.com/playlist?list=PL2SOU6wwxB0uP4rJgf5ayhHWgw7akUWSf)

- [MIT 6.858 Computer Systems Security, Musim Gugur 2014](https://www.youtube.com/watch?v=GqmQg-cszw4&index=1&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)

- [Stanford: Paradigma Pemrograman (27 video)](https://www.youtube.com/playlist?list=PL9D558D49CA734A02)

- [Pengantar Kriptografi oleh Christof Paar](https://www.youtube.com/playlist?list=PL6N5qY2nvvJE8X75VkXglSrVhLv1tVcfy)
    - [Situs Kursus bersama dengan Slide dan Kumpulan Soal](http://www.crypto-textbook.com/)

- [Menambang Kumpulan Data Besar-besaran - Universitas Stanford (94 video)](https://www.youtube.com/playlist?list=PLLssT5z_DsK9JDLcT8T62VtzwyW9LNepV)

- [Teori Grafik oleh Sarada Herke (67 video)](https://www.youtube.com/user/DrSaradaHerke/playlists?shelf_id=5&view=50&sort=dd)

## Kursus Ilmu Komputer

- [Direktori Kursus CS Online](https://github.com/open-source-society/computer-science)
- [Direktori Kursus CS (banyak dengan kuliah online)](https://github.com/prakhar1989/awesome-courses)

## Implementasi Algoritma

- [Implementasi Berbagai Algoritma oleh Princeton University)](https://algs4.cs.princeton.edu/code)

## Dokumen

- [Suka makalah klasik?](https://www.cs.cmu.edu/~crary/819-f09/)
- [1978: Mengkomunikasikan Proses Berurutan](http://spinroot.com/courses/summer/Papers/hoare_1978.pdf)
    - [implementasi di Go](https://godoc.org/github.com/thomas11/csp)
- [2003: Sistem Berkas Google](http://static.googleusercontent.com/media/research.google.com/en//archive/gfs-sosp2003.pdf)
    - digantikan oleh Colossus pada tahun 2012
- [2004: MapReduce: Pemrosesan Data yang Disederhanakan pada Kluster Besar](http://static.googleusercontent.com/media/research.google.com/en//archive/mapreduce-osdi04.pdf)
    - kebanyakan digantikan oleh Cloud Dataflow?
- [2006: Bigtable: Sistem Penyimpanan Terdistribusi untuk Data Terstruktur](https://static.googleusercontent.com/media/research.google.com/en//archive/bigtable-osdi06.pdf)
    - [Melihat ke dalam Google BigQuery](https://cloud.google.com/files/BigQueryTechnicalWP.pdf)
- [2006: Layanan Chubby Lock untuk Sistem Terdistribusi yang Dirangkai Secara Longgar](https://research.google.com/archive/chubby-osdi06.pdf)
- [2007: Dynamo: Toko Nilai Kunci Amazon yang Sangat Tersedia](http://s3.amazonaws.com/AllThingsDistributed/sosp/amazon-dynamo-sosp2007.pdf)
    - Makalah Dynamo memulai revolusi NoSQL
- [2007: Yang Harus Diketahui Setiap Programmer Tentang Memori (sangat panjang, dan penulis mendorong untuk melewatkan beberapa bagian)](https://www.akkadia.org/drepper/cpumemory.pdf)
- [2010: Dapper, Infrastruktur Pelacakan Sistem Terdistribusi Skala Besar](https://research.google.com/pubs/archive/36356.pdf)
- [2010: Dremel: Analisis Interaktif Kumpulan Data Skala Web](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/36632.pdf)
- [2012: Colossus Google](https://www.wired.com/2012/07/google-colossus/)
    - kertas tidak tersedia
- 2012: AddressSanitizer: A Fast Address Sanity Checker:
    - [kertas](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/37752.pdf)
    - [video](https://www.usenix.org/conference/atc12/technical-sessions/presentation/serebryany)
- 2013: Spanner: Google’s Globally-Distributed Database:
    - [kertas](http://static.googleusercontent.com/media/research.google.com/en//archive/spanner-osdi2012.pdf)
    - [video](https://www.usenix.org/node/170855)
- [2014: Pembelajaran Mesin: Kartu Kredit Berbunga Tinggi dari Hutang Teknis](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43146.pdf)
- [2015: Continuous Pipelines di Google](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43790.pdf)
- [2015: Ketersediaan Tinggi dalam Skala Besar: Membangun Infrastruktur Data Google untuk Iklan](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44686.pdf)
- [2015: TensorFlow: Machine Learning Skala Besar pada Sistem Terdistribusi Heterogen](http://download.tensorflow.org/paper/whitepaper2015.pdf )
- [2015: Bagaimana Pengembang Menelusuri Kode: Studi Kasus](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43835.pdf)
- [2016: Borg, Omega, dan Kubernetes](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44843.pdf)

## LISENSI

[CC-BY-SA-4.0](../LICENSE.txt)

Terjemahan Bahasa Indonesia dipersembahkan oleh

- @[hexatester](https://github.com/hexatester)
- @[santosomichael](https://github.com/santosomichael)
- @[dikiaap](https://github.com/dikiaap)
- @[rvlewerissa](https://github.com/rvlewerissa)
- @[ziishaned](https://github.com/ziishaned)
- @[rimonmostafiz](https://github.com/rimonmostafiz)
- @[hwhung0111](https://github.com/hwhung0111)
- @[fahminlb33](https://github.com/fahminlb33)
- @[davidsetyanugraha](https://github.com/davidsetyanugraha)
- @[afrizal0](https://github.com/afrizal0)