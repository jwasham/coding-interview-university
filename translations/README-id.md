# Coding Interview University

Version original: [Bahasa Inggris](README.md)

## Ringkasan apa ini?

Ini adalah ringkasan studi saya selama beberapa bulan dari web developer (otodidak, tanpa gelar sarjana informatika) hingga menjadi *software engineer Google*.

![Menulis kode di papan tulis - dikutip dari serial TV Silicon Valley oleh HBO](https://d3j2pkmjtin6ou.cloudfront.net/coding-at-the-whiteboard-silicon-valley.png)

Saya telah mengupas catatan **Google's Coaching Note** dan berikut adalah hal-hal penting dari catatan tersebut. Ada beberapa poin yang saya tambahkan pada bagian akhir yang mungkin muncul dalam wawancara atau dapat berguna dalam proses penyelesaian masalah.
Banyak poin berasal dari artikel Steve Yegge "[Get that job at Google](http://steve-yegge.blogspot.com/2008/03/get-that-job-at-google.html)"  yang berisi poin-poin dari **Google's Coaching Note**.

Saya sudah meringkas poin-poin penting menurut saran dari Yegge. Saya juga mengubah beberapa rekomendasinya berdasarkan informasi yang saya dapatkan dari kontak saya di Google. Pedoman ini ditujukan untuk *software engineer* baru dan mereka yang ingin beralih profesi dari *web developer* menjadi *software engineer* (dimana ilmu komputer diperlukan). 

Jika Anda mengaku memiliki pengalaman bertahun-tahun dalam rekayasa perangkat lunak, bersiaplah untuk wawncara yang jauh lebih sulit.
[Baca lebih lanjut](https://googleyasheck.com/what-you-need-to-know-for-your-google-interview-and-what-you-dont/).

Jika Anda memiliki pengalaman sebagai developer software/web, catat bahwa Google memandang *software engineer* berbeda dari *developer software/web* karena *software engineer* menggunakan ilmu komputer.

Jika Anda ingin menjadi teknisi ketahanan sistem atau teknisi sistem, lebih banyak pelajari pada bagian tambahan (jaringan, keamanan).

---

## Daftar Isi

- [Apa ini?](#ringkasan-apa-ini)
- [Mengapa menggunakan ini?](#mengapa-menggunakan-ini)
- [Bagaimana cara menggunakannya](#bagaimana-cara-menggunakannya)
- [Masuk ke Mode Googley](#masuk-ke-mode-googley)
- [Jangan merasa anda kurang pintar](#jangan-merasa-anda-kurang-pintar)
- [Tentang Google](#tentang-google)
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
- [Pengetahauan Tambahan](#pengetahuan-tambahan)
    - [Binary search](#binary-search)
    - [Operasi Bitwise](#operasi-bitwise)
- [Trees](#trees)
    - [Trees - Catatan & Latar Belakang](#trees---catatan--latar-belakang)
    - [Binary search trees: BSTs](#binary-search-trees-bsts)
    - [Heap / Priority Queue / Binary Heap](#heap--priority-queue--binary-heap)
    - balanced search trees (konsep dasar, tidak mendalam)
    - traversals: preorder, inorder, postorder, BFS, DFS
- [Sorting](#sorting)
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
- [Pengetahuan Tambahan Lainnya](#pengetahuan-tambahan-lainnya)
    - [Rekursi](#rekursi)
    - [Pemrograman Berbasis Objek](#pemrograman-berbasis-objek)
    - [Pola Desain](#pola-desain)
    - [Kombinatorik (n pilih k) & Probabilitas](#kombinatorik-n-pilih-k--probabilitas)
    - [NP, NP-Lengkap dan Algoritma Aproksimasi](#np-np-lengkap-dan-algoritma-aproksimasi)
    - [Caches](#caches)
    - [Proses dan Threads](#proses-dan-threads)
    - [Tesis](#tesis)
    - [Testing](#testing)
    - [Penjadwalan](#penjadwalan)
    - [Implementasi Rutinitas Sistem](#implementasi-rutinitas-sistem)
    - [Pencarian String & Manipulasi](#pencarian-string--manipulasi)
- [Perancangan Sistem, Skalabilitas, Penganganan Data](#perancangan-sistem-skalabilitas-penanganan-data) (jika anda memiliki pengalaman 4 tahun lebih)
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

Ketika saya memulai proyek ini, saya tidak tahu tentang stack dari sebuah heap, tidak tahu tentang notasi Big-O apapun, begitupula dengan struktur data trees, atau bagaimana menyusuri sebuah graph. Jika saya harus menulis algoritma penyortiran, saya bisa katakan pada anda bahwa hasilnya tidak akan memuaskan.
Setiap struktur data yang saya pernah pakai sudah tertanam dalam bahasa yang saya gunakan, dan saya tidak tahu bagaimana mereka bekerja secara riil. Saya tidak pernah diharuskan untuk mengatur penggunaan memori kecuali proses yang saya jalankan akan memberikan error 'memori tidak cukup', sehingga saya harus mencari jalan keluarnya. Saya pernah menggunakan beberapa array multidimensi dalam hidup saya dan ribuan array asosiatif, tapi saya tidak pernah menciptakan struktur data dari nol.

Tetapi setelah menjalani rencana studi ini saya memiliki kepercayaan diri yang tinggi bahwa saya akan diterima. Ini adalah rencana yang panjang. Ini akan menyita waktu saya selama berbulan-bulan. Tetapi jika anda sudah tidak asing lagi dengan materi yang dibutuhkan, hal ini akan membutuhkan waktu jauh lebih sedikit.

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

`git commit -m "Marked x" `

`git rebase jwasham/master `

`git push --force `

[Lebih jauh tentang markdown Github](https://guides.github.com/features/mastering-markdown/#GitHub-flavored-markdown)

## Masuk ke Mode Googley

Print satu atau beberapa foto dari "[future Googler](https://github.com/jwasham/coding-interview-university/blob/master/extras/future-googler.pdf)" (untuk ditempel tentunya) sebagai reminder anda apa hasil usaha yang anda akan dapatkan.

[![future Googler sign](https://dng5l3qzreal6.cloudfront.net/2016/Oct/Screen_Shot_2016_10_04_at_10_13_24_AM-1475601104364.png)](https://github.com/jwasham/coding-interview-university/blob/master/extras/future-googler.pdf)

## Jangan merasa anda kurang pintar
- Para engineers/programmer di google adalah orang-orang pintar, tapi banyak dari mereka berpikir bahwa mereka tidak cukup pintar, walaupun mereka bekerja di Google.
- [Mitos dari programmer yang jenius](https://www.youtube.com/watch?v=0SARbwvhupQ)
- [Hal yang berbahaya untuk pergi sendirian: Bertarung dengan monster yang tidak kelihatan di dunia teknologi](https://www.youtube.com/watch?v=1i8ylq4j_EY)

## Tentang Google

- [ ] Untuk pelajar - [Google Careers: Technical Development Guide](https://www.google.com/about/careers/students/guide-to-technical-development.html)
- [ ] Bagaimana Pencari Bekerja:
    - [ ] [The Evolution of Search (video)](https://www.youtube.com/watch?v=mTBShTwCnD4)
    - [ ] [How Search Works - the story](https://www.google.com/insidesearch/howsearchworks/thestory/)
    - [ ] [How Search Works](https://www.google.com/insidesearch/howsearchworks/)
    - [ ] [How Search Works - Matt Cutts (video)](https://www.youtube.com/watch?v=BNHR6IQJGZs)
    - [ ] [How Google makes improvements to its search algorithm (video)](https://www.youtube.com/watch?v=J5RZOU6vK4Q)
- [ ] Seri:
    - [ ] [How Google Search Dealt With Mobile](https://backchannel.com/how-google-search-dealt-with-mobile-33bc09852dc9)
    - [ ] [Google's Secret Study To Find Out Our Needs](https://backchannel.com/googles-secret-study-to-find-out-our-needs-eba8700263bf)
    - [ ] [Google Search Will Be Your Next Brain](https://backchannel.com/google-search-will-be-your-next-brain-5207c26e4523)
    - [ ] [The Deep Mind Of Demis Hassabis](https://backchannel.com/the-deep-mind-of-demis-hassabis-156112890d8a)
- [ ] [Book: How Google Works](https://www.amazon.com/How-Google-Works-Eric-Schmidt/dp/1455582344)
- [ ] [Made by Google announcement - Oct 2016 (video)](https://www.youtube.com/watch?v=q4y0KOeXViI)

## Tentang Sumber Video

Beberapa video hanya dapat diakses dengan mengikuti kelas di [Coursera](https://www.coursera.org/), [Edx](https://www.edx.org/), atau [Lynda.com](https://www.lynda.com/). Beberapa link tersebut biasa disebut MOOC (massive open online course) atau belajar online, seperti layaknya anda berkuliah biasa namun bedanya ini online dan diikuti oleh banyak orang dari seluruh dunia.
Terkadang suatu saat kelas yang ada tidak dapat diikuti untuk sementara, dan harus menunggu beberapa bulan. Karena kelas tersebut ada waktunya dalam pembelajaran, dan ada waktunya untuk mendaftar, layaknya anda berkuliah. Khusus untuk Lynda.com merupakan situs yang berbayar untuk mengakses materinya.
    
    Selain saya membagikan ilmu kepada kalian semua, saya juga mengapresiasi bantuan anda untuk menambahkan sumber pembelajaran yang gratis dan selalu terbuka untuk umum, seperti video di youtube untuk sebagai selingan dari kuliah online dari website yang disebutkan diatas.
    Saya suka menggunakan media pembelajaran berbasiskan universitas.

## Proses Interview dan Preparasi Wawancara Secara Umum

- [ ] Video:
    - [ ] [How to Work at Google: Prepare for an Engineering Interview (video)](https://www.youtube.com/watch?v=ko-KkSmp-Lk)
    - [ ] [How to Work at Google: Example Coding/Engineering Interview (video)](https://www.youtube.com/watch?v=XKu_SEDAykw)
    - [ ] [How to Work at Google - Candidate Coaching Session (video)](https://www.youtube.com/watch?v=oWbUtlUhwa8&feature=youtu.be)
    - [ ] [Google Recruiters Share Technical Interview Tips (video)](https://www.youtube.com/watch?v=qc1owf2-220&feature=youtu.be)
    - [ ] [How to Work at Google: Tech Resume Preparation (video)](https://www.youtube.com/watch?v=8npJLXkcmu8)

- [ ] Artikel:
    - [ ] [Becoming a Googler in Three Steps](http://www.google.com/about/careers/lifeatgoogle/hiringprocess/)
    - [ ] [Get That Job at Google](http://steve-yegge.blogspot.com/2008/03/get-that-job-at-google.html)
        - semua hal-hal yang dia sebutkan itu sudah terdaftar dibawah dan kamu harus tahu
    - [ ] _(very dated)_ [How To Get A Job At Google, Interview Questions, Hiring Process](http://dondodge.typepad.com/the_next_big_thing/2010/09/how-to-get-a-job-at-google-interview-questions-hiring-process.html)
    - [ ] [Phone Screen Questions](http://sites.google.com/site/steveyegge2/five-essential-phone-screen-questions)

- [ ] Materi kelas untuk persiapan:
    - [ ] [Software Engineer Interview Unleashed (paid course)](https://www.udemy.com/software-engineer-interview-unleashed):
        - Learn how to make yourself ready for software engineer interviews from a former Google interviewer.

- [ ] Tambahan (tidak disarankan oleh Google tapi saya tambahkan sendiri):
    - [ ] [ABC: Always Be Coding](https://medium.com/always-be-coding/abc-always-be-coding-d5f8051afce2#.4heg8zvm4)
    - [ ] [Four Steps To Google Without A Degree](https://medium.com/always-be-coding/four-steps-to-google-without-a-degree-8f381aa6bd5e#.asalo1vfx)
    - [ ] [Whiteboarding](https://medium.com/@dpup/whiteboarding-4df873dbba2e#.hf6jn45g1)
    - [ ] [How Google Thinks About Hiring, Management And Culture](http://www.kpcb.com/blog/lessons-learned-how-google-thinks-about-hiring-management-and-culture)
    - [ ] [Effective Whiteboarding during Programming Interviews](http://www.coderust.com/blog/2014/04/10/effective-whiteboarding-during-programming-interviews/)
    - [ ] Cracking The Coding Interview Set 1:
        - [ ] [Gayle L McDowell - Cracking The Coding Interview (video)](https://www.youtube.com/watch?v=rEJzOhC5ZtQ)
        - [ ] [Cracking the Coding Interview with Author Gayle Laakmann McDowell (video)](https://www.youtube.com/watch?v=aClxtDcdpsQ)
    - [ ] How to Get a Job at the Big 4:
        - [ ] ['How to Get a Job at the Big 4 - Amazon, Facebook, Google & Microsoft' (video)](https://www.youtube.com/watch?v=YJZCUhxNCv8)
    - [ ] [Failing at Google Interviews](http://alexbowe.com/failing-at-google-interviews/)

## Pilih Satu Bahasa Pemrograman untuk Wawancara

Saya menulis artikel pendek tentang topik hal tersebut: [Penting:Pilih Satu Bahasa Pemrograman untuk wawancara dengan Google](https://googleyasheck.com/important-pick-one-language-for-the-google-interview/) (Penting: Pilih Satu Bahasa Pemrograman untuk wawancara dengan Google)

Anda dapat menggunakan sebuah bahasa pemrograman yang nyaman bagi anda untuk melaksanakan salah satu bagian wawancara yaitu sesi mengkoding, tapi bagi Google, berikut adalah beberapa pilihan:

- C++
- Java
- Python

Anda juga dapat menggunakan beberapa bahasa pemrograman berikut, tapi cari informasi dahulu tentang hal ini, karena mungkin ada kualifikasi khusus:

- JavaScript
- Ruby

Anda harus sangat nyaman dan memahami bahasa yang akan digunakan untuk wawancara tersebut.

Baca lebih banyak tentang pilihan:
- http://www.byte-by-byte.com/choose-the-right-language-for-your-coding-interview/
- http://blog.codingforinterviews.com/best-programming-language-jobs/
- https://www.quora.com/What-is-the-best-language-to-program-in-for-an-in-person-Google-interview

[Lihat beberapa sumber bahasa pemrograman disini](programming-language-resources.md)

Anda akan melihat beberapa C, C++, dan Python di cantumkan di link dibawah, karena saya juga sedang belajar. Ada beberapa buku juga diikutkan dalam list dibawah ini, lihat bagian bawah.

## Daftar Buku

Ini adalah daftar pendek yang saya gunakan. Ini disingkat untuk menghemat waktu Anda.

### Interview Prep

- [ ] [Programming Interviews Exposed: Secrets to Landing Your Next Job, 2nd Edition](http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html)
    - jawaban di C++ and Java
    - direkomendasikan di Google candidate coaching
    - ini adalah pemanasan yang baik untuk Cracking the Coding Interview
    - tidak terlalu sulit, kebanyakan masalah mungkin lebih mudah daripada apa yang akan anda lihat dalam sebuah wawancara (dari apa yang saya baca)
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - jawaban in Java
    - direkomendasikan di the [Google Careers site](https://www.google.com/about/careers/how-we-hire/interview/)
    - Jika kamu melihat orang-orang mereferensikan "The Google Resume", itu adalah sebuah buku yang diganti oleh "Cracking the Coding Interview".

Jika anda memiliki banyak waktu:

- [ ] [Elements of Programming Interviews](https://www.amazon.com/Elements-Programming-Interviews-Insiders-Guide/dp/1479274836)
    - semua kode adalah di C++, sangat bagus jika anda menggunakan C++ di wawancara anda.
    - sebuah buku yang bagus mengenai pemecahan masalah secara umum.

### Computer Architecture

Jika kekurangan waktu:

- [ ] [Write Great Code: Volume 1: Understanding the Machine](https://www.amazon.com/Write-Great-Code-Understanding-Machine/dp/1593270038)
    - Buku ini dirilis pada tahun 2004, dan agak ketinggalan jaman, tetapi dengan sumber daya yang hebat bisa untuk memahami komputer secara singkat.
    - Penulis menemukan HLA, sehingga menyebutkan dan memberi contoh di HLA dengan sebutir garam. Tidak banyak digunakan, tapi contoh yang baik seperti apa assembly itu.
    - Bab-bab ini patut dibaca untuk memberikan dasar yang baik:
        - Chapter 2 - Numeric Representation
        - Chapter 3 - Binary Arithmetic and Bit Operations
        - Chapter 4 - Floating-Point Representation
        - Chapter 5 - Character Representation
        - Chapter 6 - Memory Organization and Access
        - Chapter 7 - Composite Data Types and Memory Objects
        - Chapter 9 - CPU Architecture
        - Chapter 10 - Instruction Set Architecture
        - Chapter 11 - Memory Architecture and Organization

Jika anda punya banyak waktu (Saya ingin buku ini):

- [ ] [Computer Architecture, Fifth Edition: A Quantitative Approach](https://www.amazon.com/dp/012383872X/)
    - Untuk orang kaya, lebih up-to-date (2011), tapi dengan pemeliharaan jangka panjang

### Language Specific

**Anda harus memilih sebuah bahasa pemgrograman untuk wawancara (lihat diatas).** Berikut adalah rekomendasi bahasa dari saya. Saya tidak memiliki sumber daya untuk semua bahasa. Saya menyambut penambahan.

Jika meskipun anda membaca salah satu dari ini, anda harus memiliki semua pengetahuan struktur data dan algoritma, anda harus mulai melakukan pemecahan masalah koding.
**Anda dapat melewati semua video ceramah di proyek ini**, kecuali jika anda ingin sebuah review.

[Additional language-specific resources here.](programming-language-resources.md)

### C++

Saya belum membaca keduanya. tapi mereka dinilai sangat bagus dan ditulis oleh Sedgewick. Dia mengagumkan.

- [ ] [Algorithms in C++, Parts 1-4: Fundamentals, Data Structure, Sorting, Searching](https://www.amazon.com/Algorithms-Parts-1-4-Fundamentals-Structure/dp/0201350882/)
- [ ] [Algorithms in C++ Part 5: Graph Algorithms](https://www.amazon.com/Algorithms-Part-Graph-3rd-Pt-5/dp/0201361183/)

Jika anda memiliki rekomendasi yang lebih baik untuk C++, tolong beritahu saya. Mencari sumber daya yang komprehensif.

### Java

- [ ] [Algorithms (Sedgewick and Wayne)](https://www.amazon.com/Algorithms-4th-Robert-Sedgewick/dp/032157351X/)
    - video dengan buku (dan Sedgewick!):
        - [Algorithms I](https://www.youtube.com/user/algorithmscourses/playlists?view=50&sort=dd&shelf_id=2)
        - [Algorithms II](https://www.youtube.com/user/algorithmscourses/playlists?shelf_id=3&view=50&sort=dd)

OR:

- [ ] [Data Structures and Algorithms in Java](https://www.amazon.com/Data-Structures-Algorithms-Michael-Goodrich/dp/1118771338/)
    - oleh Goodrich, Tamassia, Goldwasser
    - digunakan sebagai teks opsional untuk kursus pengenalan CS di UC Berkeley
    - lihat laporan buku saya pada versi Python dibawah. Buku ini mencakup topik-topik yang sama.

### Python

- [ ] [Data Structures and Algorithms in Python](https://www.amazon.com/Structures-Algorithms-Python-Michael-Goodrich/dp/1118290275/)
    - oleh Goodrich, Tamassia, Goldwasser
    - Saya mencintai buku ini. Mencakup segala hal dan lainnya.
    - kode Pythonic
    - laporan buku saya: https://googleyasheck.com/book-report-data-structures-and-algorithms-in-python/


### Optional Books

**Beberapa orang merekomendasikan ini, tapi saya pikir itu akan berlebihan, kecuali jika anda punya pengalaman di software engineering bertahun-tahun dan mengharapkan sebuah wawancara yang jauh lebih sulit**

- [ ] [Algorithm Design Manual](http://www.amazon.com/Algorithm-Design-Manual-Steven-Skiena/dp/1849967202) (Skiena)
    - Sebagai sebuah review dan pengenalan masalah
    - Bagian katalog algoritma adalah luar lingkup yang baik saat anda mendapatkan kesulitan di wawancara
    - Buku ini mempunyai 2 bagian:
        - class textbook on data structures and algorithms
            - pros:
                - adalah sebuah review yang bagus sebagai buku algoritma
                - cerita bagus dari pengalamannya memecahkan masalah dalam industri dan akademisi
                - contoh kode di C
            - cons:
                - dapat secara penuh dan tak tertembus sebagai CLRS, dan dalam beberapa kasus, CLRS mungkin menjadi alternatif yang lebih baik untuk beberapa mata pelajaran
                - bab 7, 8, 9 bisa menyakitkan untuk mencoba mengikutinya, karena beberapa item yang tidak dijelaskan dengan baik atau membutuhkan kinerja otak yang lebih daripada yang saya miliki
                - jangan salah paham: Saya suka Skiena, gaya mengajarnya, dan kelakuannya, tapi aku mungkin tidak akan seperti bahan Stony Brook.
        - algorithm catalog:
            - ini adalah alasan nyata kamu membeli buku ini
            - tentang untuk mendapatkan bagian ini. Akan diperbarui disini suatu waktu setelah saya membuat jalan melewati itu.
    - Mengutip Yegge: "More than any other book it helped me understand just how astonishingly commonplace
        (and important) graph problems are – they should be part of every working programmer's toolkit. The book also
        covers basic data structures and sorting algorithms, which is a nice bonus. But the gold mine is the second half
        of the book, which is a sort of encyclopedia of 1-pagers on zillions of useful problems and various ways to solve
        them, without too much detail. Almost every 1-pager has a simple picture, making it easy to remember. This is a
        great way to learn how to identify hundreds of problem types."
    - Dapat menyewa di kindle
    - Half.com adalah sumber daya yang besar untuk buku dengan harga yang baik.
    - Jawaban:
        - [Solutions](http://www.algorithm.cs.sunysb.edu/algowiki/index.php/The_Algorithms_Design_Manual_(Second_Edition)
        - [Solutions](http://blog.panictank.net/category/algorithmndesignmanualsolutions/page/2/)
    - [Errata](http://www3.cs.stonybrook.edu/~skiena/algorist/book/errata)

- [ ] [Introduction to Algorithms](https://www.amazon.com/Introduction-Algorithms-3rd-MIT-Press/dp/0262033844)
    - **Penting:** Membaca buku ini hanya akan memiliki nilai yang terbatas. Buku ini adalah review besar algoritma dan struktur data, tetapi akan mengajarkan cara menulis kode yang baik. Anda harus dapat mengkode yang layak secara efisien.
    - Mengutip Yegge: "But if you want to come into your interviews *prepped*, then consider deferring your application until you've made your way through that book."
    - Half.com adalah sumber daya yang besar untuk buku dengan harga yang baik.
    - aka CLR, terkadang CLRS, karena Stein terlambat untuk permainan.

- [ ] [Programming Pearls](http://www.amazon.com/Programming-Pearls-2nd-Jon-Bentley/dp/0201657880)
    - Pasangan pertama dari bab yang menyajikan solusi cerdas untuk masalah pemrogramman (beberapa sangat tua saat menggunakan tipe data) tapi itu hanya sebuah intro. Ini sebuah buku panduan tentang program desain dan arsitektur, seperti Code Complete, tapi jauh lebih pendek.

- ~~"Algorithms and Programming: Problems and Solutions" oleh Shen~~
    - Sebuah buku yang baik, tapi setelah bekerja melalui masalah pada halaman, saya frustasi dengan Pascal, do while loops, 1-indexed arrays, dan hasil post-condition yang tidak jelas.
    - Lebih suka menghabiskan waktu di masalah coding dari buku lain atau masalah coding online.


## Sebelum Anda Mulai

Daftar ini tumbuh selama berbulan-bulan, dan ya, itu jenis keluaran dari tangan.

Berikut adalah beberapa kesalahan yang saya buat sehingga anda akan memiliki pengalaman yang lebih baik.

### 1. Kamu Tidak Akan Mengingat Semuanya

Saya menonton video berjam-jam dan mengambil catatan yang berlebihan, dan beberapa bulan kemudian disana ada banyak yang tidak saya ingat. Saya menghabiskan 3 hari melalui catatan saya dan membuat flashcards sehingga saya bisa meninjaunya dengan lebih cepat.

Tolong baca sehingga anda tidak akan membuat kesalahan seperti saya:

[Menguasai Pengetahuan Ilmu Komputer](https://googleyasheck.com/retaining-computer-science-knowledge/)

### 2. Menggunakan Flashcards

Untuk mengatasi masalah tersebut, saya membuat situs flashcards kecil di mana saya bisa menambahkan flashcards dari 2 jenis: umum dan code. Setiap kartu memiliki format yang berbeda.

Saya membuat sebuah mobile-first website jadi saya bisa mereview di telepon dan tablet saya, dimanapun saya berada.

Membuat punya anda sendiri secara gratis:

- [Repo website flashcards](https://github.com/jwasham/computer-science-flash-cards)
- [Database flashcards saya (lama - 1200 kartu)](https://github.com/jwasham/computer-science-flash-cards/blob/master/cards-jwasham.db):
- [Database flashcards saya (baru - 1800 kartu)](https://github.com/jwasham/computer-science-flash-cards/blob/master/cards-jwasham-extreme.db):

Perlu diingat aku pergi keluar kapal dan memiliki kartu meliputi segala sesuatu dari bahasa assembly dan Python trivia untuk pembelajaran machine learning dan statistik. Ini terlalu banyak untuk apa yang diminta oleh Google.

**Catatan di flashcards:** Pertama kali anda mengenali dan anda tahu jawabannya, jangan menandainya sebagai dikenal.
Anda harus melihat kartu yang sama dan menjawab beberapa kali dengan benar sebelum anda benar-benar tahu akan hal itu. Pengulangan akan membuat pengetahuan yang lebih di
otak anda.

Sebuah alternatif untuk menggunakan situs flashcards saya adalah [Anki](http://ankisrs.net/), yang telah direkomendasikan kepada saya berkali-kali. Ini menggunakan sistem pengulangan untuk membantu anda mengingatnya.
Ini user-friendly, yang tersedia di semua platform dan memiliki sebuah sistem cloud sync. Ini memerlukan biaya $25 di iOS tapi ini gratis di platform lainnya.

Database flashcard saya di format Anki: https://ankiweb.net/shared/info/25173560 (terimakasih [@xiewenya](https://github.com/xiewenya))

### 3. Review, review, review

Aku menyimpan satu set cheat sheet pada ASCII, OSI stack, Big-O notasi, dan banyak lagi. Saya mempelajari mereka ketika saya memiliki beberapa waktu luang.

Mengambil istirahat dari masalah pemgrogramman selama setengah jam dan pergi melalui flashcards anda.

### 4. Fokus

Disana ada banyak gangguan yang dapat menyita waktu yang berharga. Fokus dan kosentrasi adalah hal yang sulit.

## Apa yang Tidak Akan Dibahas

Daftar besar ini semua dimulai sebagai daftar to-do pribadi yang dibuat dari catatan Google interview coaching. Ini adalah
teknologi lazim mereka tetapi tidak disebutkan dalam catatan itu:

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
 - [C] (https://github.com/jwasham/practice-c)
 - [C++] (https://github.com/jwasham/practice-cpp)
 - [Python] (https://github.com/jwasham/practice-python)

Anda tidak perlu susah payah menghafal setiap algoritma.

Menulis kode pada papan tulis atau kertas, bukan komputer. Uji dengan beberapa sampel masukan. Kemudian menguji itu pada komputer.

## Ilmu Prasyarat

- [ ] **Belajar C**
    - C ada dimana-mana. Anda akan melihat contoh di buku, perkuliahan, video, *dimanapun* ketika kamu belajar.
    - [ ] [C Programming Language, Vol 2](https://www.amazon.com/Programming-Language-Brian-W-Kernighan/dp/0131103628)
        - Ini adalah sebuah buku yang pendek, tapi itu akan memberikanmu sebuah pegangan yang kuat di bahasa C dan Anda akan melakukan latihan kecil
            dengan secara singkat dan cakap. Memahami C akan membantu anda memahami bagaimana program dan memori itu bekerja.
        - [answers to questions](https://github.com/lekkas/c-algorithms)

- [ ] **Bagaimana komputer memproses sebuah program:**
    - [ ] [How does CPU execute program (video)](https://www.youtube.com/watch?v=42KTvGYQYnA)
    - [ ] [Machine Code Instructions (video)](https://www.youtube.com/watch?v=Mv2XQgpbTNE)

## Kompleksitas Algoritma / Big-O / Analisis Asimptotik
- tidak ada untuk dilaksanakan
- [ ] [Harvard CS50 - Asymptotic Notation (video)](https://www.youtube.com/watch?v=iOq5kSKqeR4)
- [ ] [Big O Notations (general quick tutorial) (video)](https://www.youtube.com/watch?v=V6mKVRU1evU)
- [ ] [Big O Notation (and Omega and Theta) - best mathematical explanation (video)](https://www.youtube.com/watch?v=ei-A_wy5Yxw&index=2&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [ ] Skiena:
    - [video](https://www.youtube.com/watch?v=gSyDMtdPNpU&index=2&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [slides](http://www3.cs.stonybrook.edu/~algorith/video-lectures/2007/lecture2.pdf)
- [ ] [A Gentle Introduction to Algorithm Complexity Analysis](http://discrete.gr/complexity/)
- [ ] [Orders of Growth (video)](https://class.coursera.org/algorithmicthink1-004/lecture/59)
- [ ] [Asymptotics (video)](https://class.coursera.org/algorithmicthink1-004/lecture/61)
- [ ] [UC Berkeley Big O (video)](https://youtu.be/VIS4YDpuP98)
- [ ] [UC Berkeley Big Omega (video)](https://youtu.be/ca3e7UVmeUc)
- [ ] [Amortized Analysis (video)](https://www.youtube.com/watch?v=B3SpQZaAZP4&index=10&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [ ] [Illustrating "Big O" (video)](https://class.coursera.org/algorithmicthink1-004/lecture/63)
- [ ] TopCoder (includes recurrence relations and master theorem):
    - [Computational Complexity: Section 1](https://www.topcoder.com/community/data-science/data-science-tutorials/computational-complexity-section-1/)
    - [Computational Complexity: Section 2](https://www.topcoder.com/community/data-science/data-science-tutorials/computational-complexity-section-2/)
- [ ] [Cheat sheet](http://bigocheatsheet.com/)


    Jika beberapa ceramah terlalu membingunkan, anda dapat melompatinya kebawah dan
    tonton the discrete mathematics videos untuk mendapatkan latar belakang pengetahuan. 

## Struktur Data

- ### Arrays
    - Implement an automatically resizing vector.
    - [ ] Description:
        - [Arrays (video)](https://www.coursera.org/learn/data-structures/lecture/OsBSF/arrays)
        - [UCBerkley CS61B - Linear and Multi-Dim Arrays (video)](https://youtu.be/Wp8oiO_CZZE?t=15m32s)
        - [Basic Arrays (video)](https://archive.org/details/0102WhatYouShouldKnow/02_04-basicArrays.mp4)
        - [Multi-dim (video)](https://archive.org/details/0102WhatYouShouldKnow/02_05-multidimensionalArrays.mp4)
        - [Dynamic Arrays (video)](https://www.coursera.org/learn/data-structures/lecture/EwbnV/dynamic-arrays)
        - [Jagged Arrays (video)](https://www.youtube.com/watch?v=1jtrQqYpt7g)
        - [Jagged Arrays (video)](https://archive.org/details/0102WhatYouShouldKnow/02_06-jaggedArrays.mp4)
        - [Resizing arrays (video)](https://archive.org/details/0102WhatYouShouldKnow/03_01-resizableArrays.mp4)
    - [ ] Implement a vector (mutable array with automatic resizing):
        - [ ] Practice coding using arrays and pointers, and pointer math to jump to an index instead of using indexing.
        - [ ] new raw data array with allocated memory
            - can allocate int array under the hood, just not use its features
            - start with 16, or if starting number is greater, use power of 2 - 16, 32, 64, 128
        - [ ] size() - number of items
        - [ ] capacity() - number of items it can hold
        - [ ] is_empty()
        - [ ] at(index) - returns item at given index, blows up if index out of bounds
        - [ ] push(item)
        - [ ] insert(index, item) - inserts item at index, shifts that index's value and trailing elements to the right
        - [ ] prepend(item) - can use insert above at index 0
        - [ ] pop() - remove from end, return value
        - [ ] delete(index) - delete item at index, shifting all trailing elements left
        - [ ] remove(item) - looks for value and removes index holding it (even if in multiple places)
        - [ ] find(item) - looks for value and returns first index with that value, -1 if not found
        - [ ] resize(new_capacity) // private function
            - when you reach capacity, resize to double the size
            - when popping an item, if size is 1/4 of capacity, resize to half
    - [ ] Time
        - O(1) to add/remove at end (amortized for allocations for more space), index, or update
        - O(n) to insert/remove elsewhere
    - [ ] Space
        - contiguous in memory, so proximity helps performance
        - space needed = (array capacity, which is >= n) * size of item, but even if 2n, still O(n)

- ### Linked Lists
    - [ ] Description:
        - [ ] [Singly Linked Lists (video)](https://www.coursera.org/learn/data-structures/lecture/kHhgK/singly-linked-lists)
        - [ ] [CS 61B - Linked Lists (video)](https://www.youtube.com/watch?v=sJtJOtXCW_M&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&index=5)
    - [ ] [C Code (video)](https://www.youtube.com/watch?v=QN6FPiD0Gzo)
            - not the whole video, just portions about Node struct and memory allocation.
    - [ ] Linked List vs Arrays:
        - [Core Linked Lists Vs Arrays (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/rjBs9/core-linked-lists-vs-arrays)
        - [In The Real World Linked Lists Vs Arrays (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/QUaUd/in-the-real-world-lists-vs-arrays)
    - [ ] [why you should avoid linked lists (video)](https://www.youtube.com/watch?v=YQs6IC-vgmo)
    - [ ] Gotcha: you need pointer to pointer knowledge:
        (for when you pass a pointer to a function that may change the address where that pointer points)
        This page is just to get a grasp on ptr to ptr. I don't recommend this list traversal style. Readability and maintainability suffer due to cleverness.
        - [Pointers to Pointers](https://www.eskimo.com/~scs/cclass/int/sx8.html)
    - [ ] implement (I did with tail pointer & without):
        - [ ] size() - returns number of data elements in list
        - [ ] empty() - bool returns true if empty
        - [ ] value_at(index) - returns the value of the nth item (starting at 0 for first)
        - [ ] push_front(value) - adds an item to the front of the list
        - [ ] pop_front() - remove front item and return its value
        - [ ] push_back(value) - adds an item at the end
        - [ ] pop_back() - removes end item and returns its value
        - [ ] front() - get value of front item
        - [ ] back() - get value of end item
        - [ ] insert(index, value) - insert value at index, so current item at that index is pointed to by new item at index
        - [ ] erase(index) - removes node at given index
        - [ ] value_n_from_end(n) - returns the value of the node at nth position from the end of the list
        - [ ] reverse() - reverses the list
        - [ ] remove_value(value) - removes the first item in the list with this value
    - [ ] Doubly-linked List
        - [Description (video)](https://www.coursera.org/learn/data-structures/lecture/jpGKD/doubly-linked-lists)
        - No need to implement

- ### Stack
    - [ ] [Stacks (video)](https://www.coursera.org/learn/data-structures/lecture/UdKzQ/stacks)
    - [ ] [Using Stacks Last-In First-Out (video)](https://archive.org/details/0102WhatYouShouldKnow/05_01-usingStacksForLast-inFirst-out.mp4)
    - [ ] Will not implement. Implementing with array is trivial.

- ### Queue
    - [ ] [Using Queues First-In First-Out(video)](https://archive.org/details/0102WhatYouShouldKnow/05_03-usingQueuesForFirst-inFirst-out.mp4)
    - [ ] [Queue (video)](https://www.coursera.org/learn/data-structures/lecture/EShpq/queue)
    - [ ] [Circular buffer/FIFO](https://en.wikipedia.org/wiki/Circular_buffer)
    - [ ] [Priority Queues (video)](https://archive.org/details/0102WhatYouShouldKnow/05_04-priorityQueuesAndDeques.mp4)
    - [ ] Implement using linked-list, with tail pointer:
        - enqueue(value) - adds value at position at tail
        - dequeue() - returns value and removes least recently added element (front)
        - empty()
    - [ ] Implement using fixed-sized array:
        - enqueue(value) - adds item at end of available storage
        - dequeue() - returns value and removes least recently added element
        - empty()
        - full()
    - [ ] Cost:
        - a bad implementation using linked list where you enqueue at head and dequeue at tail would be O(n)
            because you'd need the next to last element, causing a full traversal each dequeue
        - enqueue: O(1) (amortized, linked list and array [probing])
        - dequeue: O(1) (linked list and array)
        - empty: O(1) (linked list and array)

- ### Hash table
    - [ ] Videos:
        - [ ] [Hashing with Chaining (video)](https://www.youtube.com/watch?v=0M_kIqhwbFo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=8)
        - [ ] [Table Doubling, Karp-Rabin (video)](https://www.youtube.com/watch?v=BRO7mVIFt08&index=9&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [ ] [Open Addressing, Cryptographic Hashing (video)](https://www.youtube.com/watch?v=rvdJDijO2Ro&index=10&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [ ] [PyCon 2010: The Mighty Dictionary (video)](https://www.youtube.com/watch?v=C4Kc8xzcA68)
        - [ ] [(Advanced) Randomization: Universal & Perfect Hashing (video)](https://www.youtube.com/watch?v=z0lJ2k0sl1g&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=11)
        - [ ] [(Advanced) Perfect hashing (video)](https://www.youtube.com/watch?v=N0COwN14gt0&list=PL2B4EEwhKD-NbwZ4ezj7gyc_3yNrojKM9&index=4)

    - [ ] Online Courses:
        - [ ] [Understanding Hash Functions (video)](https://archive.org/details/0102WhatYouShouldKnow/06_02-understandingHashFunctions.mp4)
        - [ ] [Using Hash Tables (video)](https://archive.org/details/0102WhatYouShouldKnow/06_03-usingHashTables.mp4)
        - [ ] [Supporting Hashing (video)](https://archive.org/details/0102WhatYouShouldKnow/06_04-supportingHashing.mp4)
        - [ ] [Language Support Hash Tables (video)](https://archive.org/details/0102WhatYouShouldKnow/06_05-languageSupportForHashTables.mp4)
        - [ ] [Core Hash Tables (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/m7UuP/core-hash-tables)
        - [ ] [Data Structures (video)](https://www.coursera.org/learn/data-structures/home/week/3)
        - [ ] [Phone Book Problem (video)](https://www.coursera.org/learn/data-structures/lecture/NYZZP/phone-book-problem)
        - [ ] distributed hash tables:
            - [Instant Uploads And Storage Optimization In Dropbox (video)](https://www.coursera.org/learn/data-structures/lecture/DvaIb/instant-uploads-and-storage-optimization-in-dropbox)
            - [Distributed Hash Tables (video)](https://www.coursera.org/learn/data-structures/lecture/tvH8H/distributed-hash-tables)

    - [ ] implement with array using linear probing
        - hash(k, m) - m is size of hash table
        - add(key, value) - if key already exists, update value
        - exists(key)
        - get(key)
        - remove(key)

## More Knowledge

- ### Binary search
    - [ ] [Binary Search (video)](https://www.youtube.com/watch?v=D5SrAga1pno)
    - [ ] [Binary Search (video)](https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search)
    - [ ] [detail](https://www.topcoder.com/community/data-science/data-science-tutorials/binary-search/)
    - [ ] Implement:
        - binary search (on sorted array of integers)
        - binary search using recursion

- ### Bitwise operations
    - [ ] [Bits cheat sheet](https://github.com/jwasham/coding-interview-university/blob/master/extras/cheat%20sheets/bits-cheat-sheet.pdf) - you should know many of the powers of 2 from (2^1 to 2^16 and 2^32)
    - [ ] Get a really good understanding of manipulating bits with: &, |, ^, ~, >>, <<
        - [ ] [words](https://en.wikipedia.org/wiki/Word_(computer_architecture))
        - [ ] Good intro:
            [Bit Manipulation (video)](https://www.youtube.com/watch?v=7jkIUgLC29I)
        - [ ] [C Programming Tutorial 2-10: Bitwise Operators (video)](https://www.youtube.com/watch?v=d0AwjSpNXR0)
        - [ ] [Bit Manipulation](https://en.wikipedia.org/wiki/Bit_manipulation)
        - [ ] [Bitwise Operation](https://en.wikipedia.org/wiki/Bitwise_operation)
        - [ ] [Bithacks](https://graphics.stanford.edu/~seander/bithacks.html)
        - [ ] [The Bit Twiddler](http://bits.stephan-brumme.com/)
        - [ ] [The Bit Twiddler Interactive](http://bits.stephan-brumme.com/interactive.html)
    - [ ] 2s and 1s complement
        - [Binary: Plusses & Minuses (Why We Use Two's Complement) (video)](https://www.youtube.com/watch?v=lKTsv6iVxV4)
        - [1s Complement](https://en.wikipedia.org/wiki/Ones%27_complement)
        - [2s Complement](https://en.wikipedia.org/wiki/Two%27s_complement)
    - [ ] count set bits
        - [4 ways to count bits in a byte (video)](https://youtu.be/Hzuzo9NJrlc)
        - [Count Bits](https://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetKernighan)
        - [How To Count The Number Of Set Bits In a 32 Bit Integer](http://stackoverflow.com/questions/109023/how-to-count-the-number-of-set-bits-in-a-32-bit-integer)
    - [ ] round to next power of 2:
        - [Round Up To Next Power Of Two](http://bits.stephan-brumme.com/roundUpToNextPowerOfTwo.html)
    - [ ] swap values:
        - [Swap](http://bits.stephan-brumme.com/swap.html)
    - [ ] absolute value:
        - [Absolute Integer](http://bits.stephan-brumme.com/absInteger.html)

## Trees

- ### Trees - Notes & Background
    - [ ] [Series: Trees (video)](https://www.coursera.org/learn/data-structures/lecture/95qda/trees)
    - basic tree construction
    - traversal
    - manipulation algorithms
    - BFS (breadth-first search)
        - [MIT (video)](https://www.youtube.com/watch?v=s-CYnVz-uh4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=13)
        - level order (BFS, using queue)
            time complexity: O(n)
            space complexity: best: O(1), worst: O(n/2)=O(n)
    - DFS (depth-first search)
        - [MIT (video)](https://www.youtube.com/watch?v=AfSk24UTFS8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=14)
        - notes:
            time complexity: O(n)
            space complexity:
                best: O(log n) - avg. height of tree
                worst: O(n)
        - inorder (DFS: left, self, right)
        - postorder (DFS: left, right, self)
        - preorder (DFS: self, left, right)

- ### Binary search trees: BSTs
    - [ ] [Binary Search Tree Review (video)](https://www.youtube.com/watch?v=x6At0nzX92o&index=1&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
    - [ ] [Series (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/p82sw/core-introduction-to-binary-search-trees)
        - starts with symbol table and goes through BST applications
    - [ ] [Introduction (video)](https://www.coursera.org/learn/data-structures/lecture/E7cXP/introduction)
    - [ ] [MIT (video)](https://www.youtube.com/watch?v=9Jry5-82I68)
    - C/C++:
        - [ ] [Binary search tree - Implementation in C/C++ (video)](https://www.youtube.com/watch?v=COZK7NATh4k&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=28)
        - [ ] [BST implementation - memory allocation in stack and heap (video)](https://www.youtube.com/watch?v=hWokyBoo0aI&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=29)
        - [ ] [Find min and max element in a binary search tree (video)](https://www.youtube.com/watch?v=Ut90klNN264&index=30&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [Find height of a binary tree (video)](https://www.youtube.com/watch?v=_pnqMz5nrRs&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=31)
        - [ ] [Binary tree traversal - breadth-first and depth-first strategies (video)](https://www.youtube.com/watch?v=9RHO6jU--GU&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=32)
        - [ ] [Binary tree: Level Order Traversal (video)](https://www.youtube.com/watch?v=86g8jAQug04&index=33&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [Binary tree traversal: Preorder, Inorder, Postorder (video)](https://www.youtube.com/watch?v=gm8DUJJhmY4&index=34&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [Check if a binary tree is binary search tree or not (video)](https://www.youtube.com/watch?v=yEwSGhSsT0U&index=35&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [Delete a node from Binary Search Tree (video)](https://www.youtube.com/watch?v=gcULXE7ViZw&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=36)
        - [ ] [Inorder Successor in a binary search tree (video)](https://www.youtube.com/watch?v=5cPbNCrdotA&index=37&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
    - [ ] Implement:
        - [ ] insert    // insert value into tree
        - [ ] get_node_count // get count of values stored
        - [ ] print_values // prints the values in the tree, from min to max
        - [ ] delete_tree
        - [ ] is_in_tree // returns true if given value exists in the tree
        - [ ] get_height // returns the height in nodes (single node's height is 1)
        - [ ] get_min   // returns the minimum value stored in the tree
        - [ ] get_max   // returns the maximum value stored in the tree
        - [ ] is_binary_search_tree
        - [ ] delete_value
        - [ ] get_successor // returns next-highest value in tree after given value, -1 if none

- ### Heap / Priority Queue / Binary Heap
    - visualized as a tree, but is usually linear in storage (array, linked list)
    - [ ] [Heap](https://en.wikipedia.org/wiki/Heap_(data_structure))
    - [ ] [Introduction (video)](https://www.coursera.org/learn/data-structures/lecture/2OpTs/introduction)
    - [ ] [Naive Implementations (video)](https://www.coursera.org/learn/data-structures/lecture/z3l9N/naive-implementations)
    - [ ] [Binary Trees (video)](https://www.coursera.org/learn/data-structures/lecture/GRV2q/binary-trees)
    - [ ] [Tree Height Remark (video)](https://www.coursera.org/learn/data-structures/supplement/S5xxz/tree-height-remark)
    - [ ] [Basic Operations (video)](https://www.coursera.org/learn/data-structures/lecture/0g1dl/basic-operations)
    - [ ] [Complete Binary Trees (video)](https://www.coursera.org/learn/data-structures/lecture/gl5Ni/complete-binary-trees)
    - [ ] [Pseudocode (video)](https://www.coursera.org/learn/data-structures/lecture/HxQo9/pseudocode)
    - [ ] [Heap Sort - jumps to start (video)](https://youtu.be/odNJmw5TOEE?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3291)
    - [ ] [Heap Sort (video)](https://www.coursera.org/learn/data-structures/lecture/hSzMO/heap-sort)
    - [ ] [Building a heap (video)](https://www.coursera.org/learn/data-structures/lecture/dwrOS/building-a-heap)
    - [ ] [MIT: Heaps and Heap Sort (video)](https://www.youtube.com/watch?v=B7hVxCmfPtM&index=4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [CS 61B Lecture 24: Priority Queues (video)](https://www.youtube.com/watch?v=yIUFT6AKBGE&index=24&list=PL4BBB74C7D2A1049C)
    - [ ] [Linear Time BuildHeap (max-heap)](https://www.youtube.com/watch?v=MiyLo8adrWw)
    - [ ] Implement a max-heap:
        - [ ] insert
        - [ ] sift_up - needed for insert
        - [ ] get_max - returns the max item, without removing it
        - [ ] get_size() - return number of elements stored
        - [ ] is_empty() - returns true if heap contains no elements
        - [ ] extract_max - returns the max item, removing it
        - [ ] sift_down - needed for extract_max
        - [ ] remove(i) - removes item at index x
        - [ ] heapify - create a heap from an array of elements, needed for heap_sort
        - [ ] heap_sort() - take an unsorted array and turn it into a sorted array in-place using a max heap
            - note: using a min heap instead would save operations, but double the space needed (cannot do in-place).

## Sorting

- [ ] Notes:
    - Implement sorts & know best case/worst case, average complexity of each:
        - no bubble sort - it's terrible - O(n^2), except when n <= 16
    - [ ] stability in sorting algorithms ("Is Quicksort stable?")
        - [Sorting Algorithm Stability](https://en.wikipedia.org/wiki/Sorting_algorithm#Stability)
        - [Stability In Sorting Algorithms](http://stackoverflow.com/questions/1517793/stability-in-sorting-algorithms)
        - [Stability In Sorting Algorithms](http://www.geeksforgeeks.org/stability-in-sorting-algorithms/)
        - [Sorting Algorithms - Stability](http://homepages.math.uic.edu/~leon/cs-mcs401-s08/handouts/stability.pdf)
    - [ ] Which algorithms can be used on linked lists? Which on arrays? Which on both?
        - I wouldn't recommend sorting a linked list, but merge sort is doable.
        - [Merge Sort For Linked List](http://www.geeksforgeeks.org/merge-sort-for-linked-list/)

- For heapsort, see Heap data structure above. Heap sort is great, but not stable.

- [ ] [Sedgewick - Mergesort (5 videos)](https://www.youtube.com/watch?v=4nKwesx_c8E&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9)
    - [ ] [1. Mergesort](https://www.youtube.com/watch?v=4nKwesx_c8E&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9&index=1)
    - [ ] [2. Bottom up Mergesort](https://www.youtube.com/watch?v=HGOIGUYjeyk&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9&index=2)
    - [ ] [3. Sorting Complexity](https://www.youtube.com/watch?v=WvU_mIWo0Ac&index=3&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9)
    - [ ] [4. Comparators](https://www.youtube.com/watch?v=7MvC1kmBza0&index=4&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9)
    - [ ] [5. Stability](https://www.youtube.com/watch?v=XD_5iINB5GI&index=5&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9)

- [ ] [Sedgewick - Quicksort (4 videos)](https://www.youtube.com/playlist?list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1)
    - [ ] [1. Quicksort](https://www.youtube.com/watch?v=5M5A7qPWk84&index=1&list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1)
    - [ ] [2. Selection](https://www.youtube.com/watch?v=CgVYfSyct_M&index=2&list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1)
    - [ ] [3. Duplicate Keys](https://www.youtube.com/watch?v=WBFzOYJ5ybM&index=3&list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1)
    - [ ] [4. System Sorts](https://www.youtube.com/watch?v=rejpZ2htBjE&index=4&list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1)

- [ ] UC Berkeley:
    - [ ] [CS 61B Lecture 29: Sorting I (video)](https://www.youtube.com/watch?v=EiUvYS2DT6I&list=PL4BBB74C7D2A1049C&index=29)
    - [ ] [CS 61B Lecture 30: Sorting II (video)](https://www.youtube.com/watch?v=2hTY3t80Qsk&list=PL4BBB74C7D2A1049C&index=30)
    - [ ] [CS 61B Lecture 32: Sorting III (video)](https://www.youtube.com/watch?v=Y6LOLpxg6Dc&index=32&list=PL4BBB74C7D2A1049C)
    - [ ] [CS 61B Lecture 33: Sorting V (video)](https://www.youtube.com/watch?v=qNMQ4ly43p4&index=33&list=PL4BBB74C7D2A1049C)

- [ ] [Bubble Sort (video)](https://www.youtube.com/watch?v=P00xJgWzz2c&index=1&list=PL89B61F78B552C1AB)
- [ ] [Analyzing Bubble Sort (video)](https://www.youtube.com/watch?v=ni_zk257Nqo&index=7&list=PL89B61F78B552C1AB)
- [ ] [Insertion Sort, Merge Sort (video)](https://www.youtube.com/watch?v=Kg4bqzAqRBM&index=3&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
- [ ] [Insertion Sort (video)](https://www.youtube.com/watch?v=c4BRHC7kTaQ&index=2&list=PL89B61F78B552C1AB)
- [ ] [Merge Sort (video)](https://www.youtube.com/watch?v=GCae1WNvnZM&index=3&list=PL89B61F78B552C1AB)
- [ ] [Quicksort (video)](https://www.youtube.com/watch?v=y_G9BkAm6B8&index=4&list=PL89B61F78B552C1AB)
- [ ] [Selection Sort (video)](https://www.youtube.com/watch?v=6nDMgr0-Yyo&index=8&list=PL89B61F78B552C1AB)

- [ ] Merge sort code:
    - [ ] [Using output array (C)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/sorting/mergesort.c)
    - [ ] [Using output array (Python)](https://github.com/jwasham/practice-python/blob/master/merge_sort/merge_sort.py)
    - [ ] [In-place (C++)](https://github.com/jwasham/practice-cpp/blob/master/merge_sort/merge_sort.cc)
- [ ] Quick sort code:
    - [ ] [Implementation (C)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/randomization/quick.c)
    - [ ] [Implementation (C)](https://github.com/jwasham/practice-c/blob/master/quick_sort/quick_sort.c)
    - [ ] [Implementation (Python)](https://github.com/jwasham/practice-python/blob/master/quick_sort/quick_sort.py)

- [ ] Implement:
    - [ ] Mergesort: O(n log n) average and worst case
    - [ ] Quicksort O(n log n) average case
    - Selection sort and insertion sort are both O(n^2) average and worst case
    - For heapsort, see Heap data structure above.

- [ ] Not required, but I recommended them:
    - [ ] [Sedgewick - Radix Sorts (6 videos)](https://www.youtube.com/playlist?list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53)
        - [ ] [1. Strings in Java](https://www.youtube.com/watch?v=zRzU-FWsjNU&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53&index=6)
        - [ ] [2. Key Indexed Counting](https://www.youtube.com/watch?v=CtgKYmXs62w&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53&index=5)
        - [ ] [3. Least Significant Digit First String Radix Sort](https://www.youtube.com/watch?v=2pGVq_BwPKs&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53&index=4)
        - [ ] [4. Most Significant Digit First String Radix Sort](https://www.youtube.com/watch?v=M3cYNY90R6c&index=3&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53)
        - [ ] [5. 3 Way Radix Quicksort](https://www.youtube.com/watch?v=YVl58kfE6i8&index=2&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53)
        - [ ] [6. Suffix Arrays](https://www.youtube.com/watch?v=HKPrVm5FWvg&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53&index=1)
    - [ ] [Radix Sort](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#radixSort)
    - [ ] [Radix Sort (video)](https://www.youtube.com/watch?v=xhr26ia4k38)
    - [ ] [Radix Sort, Counting Sort (linear time given constraints) (video)](https://www.youtube.com/watch?v=Nz1KZXbghj8&index=7&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [Randomization: Matrix Multiply, Quicksort, Freivalds' algorithm (video)](https://www.youtube.com/watch?v=cNB2lADK3_s&index=8&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [Sorting in Linear Time (video)](https://www.youtube.com/watch?v=pOKy3RZbSws&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=14)

If you need more detail on this subject, see "Sorting" section in [Additional Detail on Some Subjects](#additional-detail-on-some-subjects)

## Graphs

Graphs can be used to represent many problems in computer science, so this section is long, like trees and sorting were.

- Notes from Yegge:
    - There are three basic ways to represent a graph in memory:
        - objects and pointers
        - matrix
        - adjacency list
    - Familiarize yourself with each representation and its pros & cons
    - BFS and DFS - know their computational complexity, their tradeoffs, and how to implement them in real code
    - When asked a question, look for a graph-based solution first, then move on if none.

- [ ] Skiena Lectures - great intro:
    - [ ] [CSE373 2012 - Lecture 11 - Graph Data Structures (video)](https://www.youtube.com/watch?v=OiXxhDrFruw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=11)
    - [ ] [CSE373 2012 - Lecture 12 - Breadth-First Search (video)](https://www.youtube.com/watch?v=g5vF8jscteo&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=12)
    - [ ] [CSE373 2012 - Lecture 13 - Graph Algorithms (video)](https://www.youtube.com/watch?v=S23W6eTcqdY&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=13)
    - [ ] [CSE373 2012 - Lecture 14 - Graph Algorithms (con't) (video)](https://www.youtube.com/watch?v=WitPBKGV0HY&index=14&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [CSE373 2012 - Lecture 15 - Graph Algorithms (con't 2) (video)](https://www.youtube.com/watch?v=ia1L30l7OIg&index=15&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [CSE373 2012 - Lecture 16 - Graph Algorithms (con't 3) (video)](https://www.youtube.com/watch?v=jgDOQq6iWy8&index=16&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)

- [ ] Graphs (review and more):

    - [ ] [6.006 Single-Source Shortest Paths Problem (video)](https://www.youtube.com/watch?v=Aa2sqUhIn-E&index=15&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [6.006 Dijkstra (video)](https://www.youtube.com/watch?v=2E7MmKv0Y24&index=16&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [6.006 Bellman-Ford (video)](https://www.youtube.com/watch?v=ozsuci5pIso&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=17)
    - [ ] [6.006 Speeding Up Dijkstra (video)](https://www.youtube.com/watch?v=CHvQ3q_gJ7E&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=18)
    - [ ] [Aduni: Graph Algorithms I - Topological Sorting, Minimum Spanning Trees, Prim's Algorithm -  Lecture 6 (video)]( https://www.youtube.com/watch?v=i_AQT_XfvD8&index=6&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
    - [ ] [Aduni: Graph Algorithms II - DFS, BFS, Kruskal's Algorithm, Union Find Data Structure - Lecture 7 (video)]( https://www.youtube.com/watch?v=ufj5_bppBsA&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=7)
    - [ ] [Aduni: Graph Algorithms III: Shortest Path - Lecture 8 (video)](https://www.youtube.com/watch?v=DiedsPsMKXc&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=8)
    - [ ] [Aduni: Graph Alg. IV: Intro to geometric algorithms - Lecture 9 (video)](https://www.youtube.com/watch?v=XIAQRlNkJAw&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=9)
    - [ ] [CS 61B 2014 (starting at 58:09) (video)](https://youtu.be/dgjX4HdMI-Q?list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&t=3489)
    - [ ] [CS 61B 2014: Weighted graphs (video)](https://www.youtube.com/watch?v=aJjlQCFwylA&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&index=19)
    - [ ] [Greedy Algorithms: Minimum Spanning Tree (video)](https://www.youtube.com/watch?v=tKwnms5iRBU&index=16&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [Strongly Connected Components Kosaraju's Algorithm Graph Algorithm (video)](https://www.youtube.com/watch?v=RpgcYiky7uw)

- Full Coursera Course:
    - [ ] [Algorithms on Graphs (video)](https://www.coursera.org/learn/algorithms-on-graphs/home/welcome)

- Yegge: If you get a chance, try to study up on fancier algorithms:
    - [ ] Dijkstra's algorithm - see above - 6.006
    - [ ] A*
        - [ ] [A Search Algorithm](https://en.wikipedia.org/wiki/A*_search_algorithm)
        - [ ] [A* Pathfinding Tutorial (video)](https://www.youtube.com/watch?v=KNXfSOx4eEE)
        - [ ] [A* Pathfinding (E01: algorithm explanation) (video)](https://www.youtube.com/watch?v=-L-WgKMFuhE)

- I'll implement:
    - [ ] DFS with adjacency list (recursive)
    - [ ] DFS with adjacency list (iterative with stack)
    - [ ] DFS with adjacency matrix (recursive)
    - [ ] DFS with adjacency matrix (iterative with stack)
    - [ ] BFS with adjacency list
    - [ ] BFS with adjacency matrix
    - [ ] single-source shortest path (Dijkstra)
    - [ ] minimum spanning tree
    - DFS-based algorithms (see Aduni videos above):
        - [ ] check for cycle (needed for topological sort, since we'll check for cycle before starting)
        - [ ] topological sort
        - [ ] count connected components in a graph
        - [ ] list strongly connected components
        - [ ] check for bipartite graph

You'll get more graph practice in Skiena's book (see Books section below) and the interview books

## Even More Knowledge

- ### Recursion
    - [ ] Stanford lectures on recursion & backtracking:
        - [ ] [Lecture 8 | Programming Abstractions (video)](https://www.youtube.com/watch?v=gl3emqCuueQ&list=PLFE6E58F856038C69&index=8)
        - [ ] [Lecture 9 | Programming Abstractions (video)](https://www.youtube.com/watch?v=uFJhEPrbycQ&list=PLFE6E58F856038C69&index=9)
        - [ ] [Lecture 10 | Programming Abstractions (video)](https://www.youtube.com/watch?v=NdF1QDTRkck&index=10&list=PLFE6E58F856038C69)
        - [ ] [Lecture 11 | Programming Abstractions (video)](https://www.youtube.com/watch?v=p-gpaIGRCQI&list=PLFE6E58F856038C69&index=11)
    - when it is appropriate to use it
    - how is tail recursion better than not?
        - [ ] [What Is Tail Recursion Why Is It So Bad?](https://www.quora.com/What-is-tail-recursion-Why-is-it-so-bad)
        - [ ] [Tail Recursion (video)](https://www.youtube.com/watch?v=L1jjXGfxozc)

- ### Object-Oriented Programming
    - [ ] [Optional: UML 2.0 Series (video)](https://www.youtube.com/watch?v=OkC7HKtiZC0&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc)
    - [ ] Object-Oriented Software Engineering: Software Dev Using UML and Java (21 videos):
        - Can skip this if you have a great grasp of OO and OO design practices.
        - [OOSE: Software Dev Using UML and Java](https://www.youtube.com/playlist?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)
    - [ ] SOLID OOP Principles:
        - [ ] [Bob Martin SOLID Principles of Object Oriented and Agile Design (video)](https://www.youtube.com/watch?v=TMuno5RZNeE)
        - [ ] [SOLID Design Patterns in C# (video)](https://www.youtube.com/playlist?list=PL8m4NUhTQU48oiGCSgCP1FiJEcg_xJzyQ)
        - [ ] [SOLID Principles (video)](https://www.youtube.com/playlist?list=PL4CE9F710017EA77A)
        - [ ] S - [Single Responsibility Principle](http://www.oodesign.com/single-responsibility-principle.html) | [Single responsibility to each Object](http://www.javacodegeeks.com/2011/11/solid-single-responsibility-principle.html)
            - [more flavor](https://docs.google.com/open?id=0ByOwmqah_nuGNHEtcU5OekdDMkk)
        - [ ] O - [Open/Closed Principal](http://www.oodesign.com/open-close-principle.html)  | [On production level Objects are ready for extension for not for modification](https://en.wikipedia.org/wiki/Open/closed_principle)
            - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgN2M5MTkwM2EtNWFkZC00ZTI3LWFjZTUtNTFhZGZiYmUzODc1&hl=en)
        - [ ] L - [Liskov Substitution Principal](http://www.oodesign.com/liskov-s-substitution-principle.html) | [Base Class and Derived class follow ‘IS A’ principal](http://stackoverflow.com/questions/56860/what-is-the-liskov-substitution-principle)
            - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgNzAzZjA5ZmItNjU3NS00MzQ5LTkwYjMtMDJhNDU5ZTM0MTlh&hl=en)
        - [ ] I - [Interface segregation principle](http://www.oodesign.com/interface-segregation-principle.html) | clients should not be forced to implement interfaces they don't use
            - [Interface Segregation Principle in 5 minutes (video)](https://www.youtube.com/watch?v=3CtAfl7aXAQ)
            - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgOTViYjJhYzMtMzYxMC00MzFjLWJjMzYtOGJiMDc5N2JkYmJi&hl=en)
        - [ ] D -[Dependency Inversion principle](http://www.oodesign.com/dependency-inversion-principle.html) | Reduce the dependency In composition of objects.
            - [Why Is The Dependency Inversion Principle And Why Is It Important](http://stackoverflow.com/questions/62539/what-is-the-dependency-inversion-principle-and-why-is-it-important)
            - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgMjdlMWIzNGUtZTQ0NC00ZjQ5LTkwYzQtZjRhMDRlNTQ3ZGMz&hl=en)

- ### Design patterns
    - [ ] [Quick UML review (video)](https://www.youtube.com/watch?v=3cmzqZzwNDM&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc&index=3)
    - [ ] Learn these patterns:
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
    - [ ] [Chapter 6 (Part 1) - Patterns (video)](https://youtu.be/LAP2A80Ajrg?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO&t=3344)
    - [ ] [Chapter 6 (Part 2) - Abstraction-Occurrence, General Hierarchy, Player-Role, Singleton, Observer, Delegation (video)](https://www.youtube.com/watch?v=U8-PGsjvZc4&index=12&list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)
    - [ ] [Chapter 6 (Part 3) - Adapter, Facade, Immutable, Read-Only Interface, Proxy (video)](https://www.youtube.com/watch?v=7sduBHuex4c&index=13&list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)
    - [ ] [Series of videos (27 videos)](https://www.youtube.com/playlist?list=PLF206E906175C7E07)
    - [ ] [Head First Design Patterns](https://www.amazon.com/Head-First-Design-Patterns-Freeman/dp/0596007124)
        - I know the canonical book is "Design Patterns: Elements of Reusable Object-Oriented Software", but Head First is great for beginners to OO.
    - [ ] [Handy reference: 101 Design Patterns & Tips for Developers](https://sourcemaking.com/design-patterns-and-tips)

- ### Combinatorics (n choose k) & Probability
    - [ ] [Math Skills: How to find Factorial, Permutation and Combination (Choose) (video)](https://www.youtube.com/watch?v=8RRo6Ti9d0U)
    - [ ] [Make School: Probability (video)](https://www.youtube.com/watch?v=sZkAAk9Wwa4)
    - [ ] [Make School: More Probability and Markov Chains (video)](https://www.youtube.com/watch?v=dNaJg-mLobQ)
    - [ ] Khan Academy:
        - Course layout:
            - [ ] [Basic Theoretical Probability](https://www.khanacademy.org/math/probability/probability-and-combinatorics-topic)
        - Just the videos - 41 (each are simple and each are short):
            - [ ] [Probability Explained (video)](https://www.youtube.com/watch?v=uzkc-qNVoOk&list=PLC58778F28211FA19)

- ### NP, NP-Complete and Approximation Algorithms
    - Know about the most famous classes of NP-complete problems, such as traveling salesman and the knapsack problem,
        and be able to recognize them when an interviewer asks you them in disguise.
    - Know what NP-complete means.
    - [ ] [Computational Complexity (video)](https://www.youtube.com/watch?v=moPtwq_cVH8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=23)
    - [ ] Simonson:
        - [ ] [Greedy Algs. II & Intro to NP Completeness (video)](https://youtu.be/qcGnJ47Smlo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=2939)
        - [ ] [NP Completeness II & Reductions (video)](https://www.youtube.com/watch?v=e0tGC6ZQdQE&index=16&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [NP Completeness III (Video)](https://www.youtube.com/watch?v=fCX1BGT3wjE&index=17&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [NP Completeness IV (video)](https://www.youtube.com/watch?v=NKLDp3Rch3M&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=18)
    - [ ] Skiena:
        - [ ] [CSE373 2012 - Lecture 23 - Introduction to NP-Completeness (video)](https://youtu.be/KiK5TVgXbFg?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1508)
        - [ ] [CSE373 2012 - Lecture 24 - NP-Completeness Proofs (video)](https://www.youtube.com/watch?v=27Al52X3hd4&index=24&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [ ] [CSE373 2012 - Lecture 25 - NP-Completeness Challenge (video)](https://www.youtube.com/watch?v=xCPH4gwIIXM&index=25&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [Complexity: P, NP, NP-completeness, Reductions (video)](https://www.youtube.com/watch?v=eHZifpgyH_4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=22)
    - [ ] [Complexity: Approximation Algorithms (video)](https://www.youtube.com/watch?v=MEz1J9wY2iM&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=24)
    - [ ] [Complexity: Fixed-Parameter Algorithms (video)](https://www.youtube.com/watch?v=4q-jmGrmxKs&index=25&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - Peter Norvig discusses near-optimal solutions to traveling salesman problem:
        - [Jupyter Notebook](http://nbviewer.jupyter.org/url/norvig.com/ipython/TSP.ipynb)
    - Pages 1048 - 1140 in CLRS if you have it.

- ### Caches
    - [ ] LRU cache:
        - [ ] [The Magic of LRU Cache (100 Days of Google Dev) (video)](https://www.youtube.com/watch?v=R5ON3iwx78M)
        - [ ] [Implementing LRU (video)](https://www.youtube.com/watch?v=bq6N7Ym81iI)
        - [ ] [LeetCode - 146 LRU Cache (C++) (video)](https://www.youtube.com/watch?v=8-FZRAjR7qU)
    - [ ] CPU cache:
        - [ ] [MIT 6.004 L15: The Memory Hierarchy (video)](https://www.youtube.com/watch?v=vjYF_fAZI5E&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-&index=24)
        - [ ] [MIT 6.004 L16: Cache Issues (video)](https://www.youtube.com/watch?v=ajgC3-pyGlk&index=25&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-)

- ### Processes and Threads
    - [ ] Computer Science 162 - Operating Systems (25 videos):
        - for processes and threads see videos 1-11
        - [Operating Systems and System Programming (video)](https://www.youtube.com/playlist?list=PL-XXv-cvA_iBDyz-ba4yDskqMDY6A1w_c)
    - [What Is The Difference Between A Process And A Thread?](https://www.quora.com/What-is-the-difference-between-a-process-and-a-thread)
    - Covers:
        - Processes, Threads, Concurrency issues
            - difference between processes and threads
            - processes
            - threads
            - locks
            - mutexes
            - semaphores
            - monitors
            - how they work
            - deadlock
            - livelock
        - CPU activity, interrupts, context switching
        - Modern concurrency constructs with multicore processors
        - Process resource needs (memory: code, static storage, stack, heap, and also file descriptors, i/o)
        - Thread resource needs (shares above (minus stack) with other threads in the same process but each has its own pc, stack counter, registers, and stack)
        - Forking is really copy on write (read-only) until the new process writes to memory, then it does a full copy.
        - Context switching
            - How context switching is initiated by the operating system and underlying hardware
    - [ ] [threads in C++ (series - 10 videos)](https://www.youtube.com/playlist?list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M)
    - [ ] concurrency in Python (videos):
        - [ ] [Short series on threads](https://www.youtube.com/playlist?list=PL1H1sBF1VAKVMONJWJkmUh6_p8g4F2oy1)
        - [ ] [Python Threads](https://www.youtube.com/watch?v=Bs7vPNbB9JM)
        - [ ] [Understanding the Python GIL (2010)](https://www.youtube.com/watch?v=Obt-vMVdM8s)
            - [reference](http://www.dabeaz.com/GIL)
        - [ ] [David Beazley - Python Concurrency From the Ground Up: LIVE! - PyCon 2015](https://www.youtube.com/watch?v=MCs5OvhV9S4)
        - [ ] [Keynote David Beazley - Topics of Interest (Python Asyncio)](https://www.youtube.com/watch?v=ZzfHjytDceU)
        - [ ] [Mutex in Python](https://www.youtube.com/watch?v=0zaPs8OtyKY)

- ### Papers
    - These are Google papers and well-known papers.
    - Reading all from end to end with full comprehension will likely take more time than you have. I recommend being selective on papers and their sections.
    - [ ] [1978: Communicating Sequential Processes](http://spinroot.com/courses/summer/Papers/hoare_1978.pdf)
        - [implemented in Go](https://godoc.org/github.com/thomas11/csp)
        - [Love classic papers?](https://www.cs.cmu.edu/~crary/819-f09/)
    - [ ] [2003: The Google File System](http://static.googleusercontent.com/media/research.google.com/en//archive/gfs-sosp2003.pdf)
        - replaced by Colossus in 2012
    - [ ] [2004: MapReduce: Simplified Data Processing on Large Clusters]( http://static.googleusercontent.com/media/research.google.com/en//archive/mapreduce-osdi04.pdf)
        - mostly replaced by Cloud Dataflow?
    - [ ] [2006: Bigtable: A Distributed Storage System for Structured Data](https://static.googleusercontent.com/media/research.google.com/en//archive/bigtable-osdi06.pdf)
        - [An Inside Look at Google BigQuery](https://cloud.google.com/files/BigQueryTechnicalWP.pdf)
    - [ ] [2006: The Chubby Lock Service for Loosely-Coupled Distributed Systems](https://research.google.com/archive/chubby-osdi06.pdf)
    - [ ] [2007: What Every Programmer Should Know About Memory (very long, and the author encourages skipping of some sections)](https://www.akkadia.org/drepper/cpumemory.pdf)
    - [ ] [2010: Dapper, a Large-Scale Distributed Systems Tracing Infrastructure](https://research.google.com/pubs/archive/36356.pdf)
    - [ ] [2010: Dremel: Interactive Analysis of Web-Scale Datasets](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/36632.pdf)
    - [ ] [2012: Google's Colossus](https://www.wired.com/2012/07/google-colossus/)
        - paper not available
    - [ ] 2012: AddressSanitizer: A Fast Address Sanity Checker:
        - [paper](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/37752.pdf)
        - [video](https://www.usenix.org/conference/atc12/technical-sessions/presentation/serebryany)
    - [ ] 2013: Spanner: Google’s Globally-Distributed Database:
        - [paper](http://static.googleusercontent.com/media/research.google.com/en//archive/spanner-osdi2012.pdf)
        - [video](https://www.usenix.org/node/170855)
    - [ ] [2014: Machine Learning: The High-Interest Credit Card of Technical Debt](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43146.pdf)
    - [ ] [2015: Continuous Pipelines at Google](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43790.pdf)
    - [ ] [2015: High-Availability at Massive Scale: Building Google’s Data Infrastructure for Ads](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44686.pdf)
    - [ ] [2015: TensorFlow: Large-Scale Machine Learning on Heterogeneous Distributed Systems](http://download.tensorflow.org/paper/whitepaper2015.pdf )
    - [ ] [2015: How Developers Search for Code: A Case Study](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43835.pdf)
    - [ ] [2016: Borg, Omega, and Kubernetes](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44843.pdf)

- ### Testing
    - To cover:
        - how unit testing works
        - what are mock objects
        - what is integration testing
        - what is dependency injection
    - [ ] [Agile Software Testing with James Bach (video)](https://www.youtube.com/watch?v=SAhJf36_u5U)
    - [ ] [Open Lecture by James Bach on Software Testing (video)](https://www.youtube.com/watch?v=ILkT_HV9DVU)
    - [ ] [Steve Freeman - Test-Driven Development (that’s not what we meant) (video)](https://vimeo.com/83960706)
        - [slides](http://gotocon.com/dl/goto-berlin-2013/slides/SteveFreeman_TestDrivenDevelopmentThatsNotWhatWeMeant.pdf)
    - [ ] [TDD is dead. Long live testing.](http://david.heinemeierhansson.com/2014/tdd-is-dead-long-live-testing.html)
    - [ ] [Is TDD dead? (video)](https://www.youtube.com/watch?v=z9quxZsLcfo)
    - [ ] [Video series (152 videos) - not all are needed (video)](https://www.youtube.com/watch?v=nzJapzxH_rE&list=PLAwxTw4SYaPkWVHeC_8aSIbSxE_NXI76g)
    - [ ] [Test-Driven Web Development with Python](http://www.obeythetestinggoat.com/pages/book.html#toc)
    - [ ] Dependency injection:
        - [ ] [video](https://www.youtube.com/watch?v=IKD2-MAkXyQ)
        - [ ] [Tao Of Testing](http://jasonpolites.github.io/tao-of-testing/ch3-1.1.html)
    - [ ] [How to write tests](http://jasonpolites.github.io/tao-of-testing/ch4-1.1.html)

- ### Penjadwalan
    - di OS, cara kerjanya
    - dapat diperoleh dari video Sistem Operasi

- ### Implementasi Rutinitas Sistem
    - memahami apa yang ada di bawah API pemrograman yang Anda gunakan
    - bisakah kamu menerapkannya?

- ### Pencarian String & Manipulasi
    - [ ] [Sedgewick - Suffix Arrays (video)](https://www.youtube.com/watch?v=HKPrVm5FWvg)
    - [ ] [Sedgewick - Substring Search (videos)](https://www.youtube.com/watch?v=2LvvVFCEIv8&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66&index=5)
        - [ ] [1. Introduction to Substring Search](https://www.youtube.com/watch?v=2LvvVFCEIv8&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66&index=5)
        - [ ] [2. Brute-Force Substring Search](https://www.youtube.com/watch?v=CcDXwIGEXYU&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66&index=4)
        - [ ] [3. Knuth-Morris Pratt](https://www.youtube.com/watch?v=n-7n-FDEWzc&index=3&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66)
        - [ ] [4. Boyer-Moore](https://www.youtube.com/watch?v=fI7Ch6pZXfM&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66&index=2)
        - [ ] [5. Rabin-Karp](https://www.youtube.com/watch?v=QzI0p6zDjK4&index=1&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66)
    - [ ] [Search pattern in text (video)](https://www.coursera.org/learn/data-structures/lecture/tAfHI/search-pattern-in-text)

    Jika Anda membutuhkan detail lebih lanjut tentang subjek ini, lihat bagian "String Matching" di [Detail Tambahan pada Beberapa Subjek](#additional-detail-on-some-subjects)

---

## Perancangan Sistem, Skalabilitas, Penganganan Data
- **Anda dapat mengharapkan pertanyaan desain sistem jika Anda memiliki pengalaman 4+ tahun.**
- Skalabilitas dan Desain Sistem adalah topik yang sangat besar dengan banyak topik dan sumber daya, karena ada banyak hal yang perlu dipertimbangkan saat merancang sistem perangkat lunak / perangkat keras yang dapat diskalakan. Berharap untuk meluangkan sedikit waktu untuk ini.
- Pertimbangan dari Yegge:
    - skalabilitas
        - Saring kumpulan data besar menjadi nilai tunggal
        - Ubah satu kumpulan data ke kumpulan lainnya
        - Menangani data dalam jumlah yang sangat besar
    - desain sistem (system design)
        - set fitur (features sets)
        - antarmuka (interfaces)
        - hierarki kelas (class hierarchies)
        - merancang sistem di bawah batasan tertentu
        - kesederhanaan dan ketahanan
        - pengorbanan (tradeoffs)
        - analisis dan pengoptimalan kinerja
- [ ] **MULAI DI SINI**: [System Design from HiredInTech](http://www.hiredintech.com/system-design/)
- [ ] [How Do I Prepare To Answer Design Questions In A Technical Inverview?](https://www.quora.com/How-do-I-prepare-to-answer-design-questions-in-a-technical-interview?redirected_qid=1500023)
- [ ] [8 Things You Need to Know Before a System Design Interview](http://blog.gainlo.co/index.php/2015/10/22/8-things-you-need-to-know-before-system-design-interviews/)
- [ ] [Algorithm design](http://www.hiredintech.com/algorithm-design/)
- [ ] [Database Normalization - 1NF, 2NF, 3NF and 4NF (video)](https://www.youtube.com/watch?v=UrYLYV7WSHM)
- [ ] [System Design Interview](https://github.com/checkcheckzz/system-design-interview) - There are a lot of resources in this one. Look through the articles and examples. I put some of them below.
- [ ] [How to ace a systems design interview](http://www.palantir.com/2011/10/how-to-rock-a-systems-design-interview/)
- [ ] [Numbers Everyone Should Know](http://everythingisdata.wordpress.com/2009/10/17/numbers-everyone-should-know/)
- [ ] [How long does it take to make a context switch?](http://blog.tsunanet.net/2010/11/how-long-does-it-take-to-make-context.html)
- [ ] [Transactions Across Datacenters (video)](https://www.youtube.com/watch?v=srOgpXECblk)
- [ ] [A plain English introduction to CAP Theorem](http://ksat.me/a-plain-english-introduction-to-cap-theorem/)
- [ ] Paxos Consensus algorithm:
    - [short video](https://www.youtube.com/watch?v=s8JqcZtvnsM)
    - [extended video with use case and multi-paxos](https://www.youtube.com/watch?v=JEpsBg0AO6o)
    - [paper](http://research.microsoft.com/en-us/um/people/lamport/pubs/paxos-simple.pdf)
- [ ] [Consistent Hashing](http://www.tom-e-white.com/2007/11/consistent-hashing.html)
- [ ] [NoSQL Patterns](http://horicky.blogspot.com/2009/11/nosql-patterns.html)
- [ ] Skalabilitas:
    - [ ] [Great overview (video)](https://www.youtube.com/watch?v=-W9F__D3oY4)
    - [ ] Short series:
        - [Clones](http://www.lecloud.net/post/7295452622/scalability-for-dummies-part-1-clones)
        - [Database](http://www.lecloud.net/post/7994751381/scalability-for-dummies-part-2-database)
        - [Cache](http://www.lecloud.net/post/9246290032/scalability-for-dummies-part-3-cache)
        - [Asynchronism](http://www.lecloud.net/post/9699762917/scalability-for-dummies-part-4-asynchronism)
    - [ ] [Scalable Web Architecture and Distributed Systems](http://www.aosabook.org/en/distsys.html)
    - [ ] [Fallacies of Distributed Computing Explained](https://pages.cs.wisc.edu/~zuyu/files/fallacies.pdf)
    - [ ] [Pragmatic Programming Techniques](http://horicky.blogspot.com/2010/10/scalable-system-design-patterns.html)
        - [extra: Google Pregel Graph Processing](http://horicky.blogspot.com/2010/07/google-pregel-graph-processing.html)
    - [ ] [Jeff Dean - Building Software Systems At Google and Lessons Learned (video)](https://www.youtube.com/watch?v=modXC5IWTJI)
    - [ ] [Introduction to Architecting Systems for Scale](http://lethain.com/introduction-to-architecting-systems-for-scale/)
    - [ ] [Scaling mobile games to a global audience using App Engine and Cloud Datastore (video)](https://www.youtube.com/watch?v=9nWyWwY2Onc)
    - [ ] [How Google Does Planet-Scale Engineering for Planet-Scale Infra (video)](https://www.youtube.com/watch?v=H4vMcD7zKM0)
    - [ ] [The Importance of Algorithms](https://www.topcoder.com/community/data-science/data-science-tutorials/the-importance-of-algorithms/)
    - [ ] [Sharding](http://highscalability.com/blog/2009/8/6/an-unorthodox-approach-to-database-design-the-coming-of-the.html)
    - [ ] [Scale at Facebook (2009)](https://www.infoq.com/presentations/Scale-at-Facebook)
    - [ ] [Scale at Facebook (2012), "Building for a Billion Users" (video)](https://www.youtube.com/watch?v=oodS71YtkGU)
    - [ ] [Engineering for the Long Game - Astrid Atkinson Keynote(video)](https://www.youtube.com/watch?v=p0jGmgIrf_M&list=PLRXxvay_m8gqVlExPC5DG3TGWJTaBgqSA&index=4)
    - [ ] [7 Years Of YouTube Scalability Lessons In 30 Minutes](http://highscalability.com/blog/2012/3/26/7-years-of-youtube-scalability-lessons-in-30-minutes.html)
        - [video](https://www.youtube.com/watch?v=G-lGCC4KKok)
    - [ ] [How PayPal Scaled To Billions Of Transactions Daily Using Just 8VMs](http://highscalability.com/blog/2016/8/15/how-paypal-scaled-to-billions-of-transactions-daily-using-ju.html)
    - [ ] [How to Remove Duplicates in Large Datasets](https://blog.clevertap.com/how-to-remove-duplicates-in-large-datasets/)
    - [ ] [A look inside Etsy's scale and engineering culture with Jon Cowie (video)](https://www.youtube.com/watch?v=3vV4YiqKm1o)
    - [ ] [What Led Amazon to its Own Microservices Architecture](http://thenewstack.io/led-amazon-microservices-architecture/)
    - [ ] [To Compress Or Not To Compress, That Was Uber's Question](https://eng.uber.com/trip-data-squeeze/)
    - [ ] [Asyncio Tarantool Queue, Get In The Queue](http://highscalability.com/blog/2016/3/3/asyncio-tarantool-queue-get-in-the-queue.html)
    - [ ] [When Should Approximate Query Processing Be Used?](http://highscalability.com/blog/2016/2/25/when-should-approximate-query-processing-be-used.html)
    - [ ] [Google's Transition From Single Datacenter, To Failover, To A Native Multihomed Architecture]( http://highscalability.com/blog/2016/2/23/googles-transition-from-single-datacenter-to-failover-to-a-n.html)
    - [ ] [Spanner](http://highscalability.com/blog/2012/9/24/google-spanners-most-surprising-revelation-nosql-is-out-and.html)
    - [ ] [Egnyte Architecture: Lessons Learned In Building And Scaling A Multi Petabyte Distributed System](http://highscalability.com/blog/2016/2/15/egnyte-architecture-lessons-learned-in-building-and-scaling.html)
    - [ ] [Machine Learning Driven Programming: A New Programming For A New World](http://highscalability.com/blog/2016/7/6/machine-learning-driven-programming-a-new-programming-for-a.html)
    - [ ] [The Image Optimization Technology That Serves Millions Of Requests Per Day](http://highscalability.com/blog/2016/6/15/the-image-optimization-technology-that-serves-millions-of-re.html)
    - [ ] [A Patreon Architecture Short](http://highscalability.com/blog/2016/2/1/a-patreon-architecture-short.html)
    - [ ] [Tinder: How Does One Of The Largest Recommendation Engines Decide Who You'll See Next?](http://highscalability.com/blog/2016/1/27/tinder-how-does-one-of-the-largest-recommendation-engines-de.html)
    - [ ] [Design Of A Modern Cache](http://highscalability.com/blog/2016/1/25/design-of-a-modern-cache.html)
    - [ ] [Live Video Streaming At Facebook Scale](http://highscalability.com/blog/2016/1/13/live-video-streaming-at-facebook-scale.html)
    - [ ] [A Beginner's Guide To Scaling To 11 Million+ Users On Amazon's AWS](http://highscalability.com/blog/2016/1/11/a-beginners-guide-to-scaling-to-11-million-users-on-amazons.html)
    - [ ] [How Does The Use Of Docker Effect Latency?](http://highscalability.com/blog/2015/12/16/how-does-the-use-of-docker-effect-latency.html)
    - [ ] [Does AMP Counter An Existential Threat To Google?](http://highscalability.com/blog/2015/12/14/does-amp-counter-an-existential-threat-to-google.html)
    - [ ] [A 360 Degree View Of The Entire Netflix Stack](http://highscalability.com/blog/2015/11/9/a-360-degree-view-of-the-entire-netflix-stack.html)
    - [ ] [Latency Is Everywhere And It Costs You Sales - How To Crush It](http://highscalability.com/latency-everywhere-and-it-costs-you-sales-how-crush-it)
    - [ ] [Serverless (very long, just need the gist)](http://martinfowler.com/articles/serverless.html)
    - [ ] [What Powers Instagram: Hundreds of Instances, Dozens of Technologies](http://instagram-engineering.tumblr.com/post/13649370142/what-powers-instagram-hundreds-of-instances)
    - [ ] [Cinchcast Architecture - Producing 1,500 Hours Of Audio Every Day](http://highscalability.com/blog/2012/7/16/cinchcast-architecture-producing-1500-hours-of-audio-every-d.html)
    - [ ] [Justin.Tv's Live Video Broadcasting Architecture](http://highscalability.com/blog/2010/3/16/justintvs-live-video-broadcasting-architecture.html)
    - [ ] [Playfish's Social Gaming Architecture - 50 Million Monthly Users And Growing](http://highscalability.com/blog/2010/9/21/playfishs-social-gaming-architecture-50-million-monthly-user.html)
    - [ ] [TripAdvisor Architecture - 40M Visitors, 200M Dynamic Page Views, 30TB Data](http://highscalability.com/blog/2011/6/27/tripadvisor-architecture-40m-visitors-200m-dynamic-page-view.html)
    - [ ] [PlentyOfFish Architecture](http://highscalability.com/plentyoffish-architecture)
    - [ ] [Salesforce Architecture - How They Handle 1.3 Billion Transactions A Day](http://highscalability.com/blog/2013/9/23/salesforce-architecture-how-they-handle-13-billion-transacti.html)
    - [ ] [ESPN's Architecture At Scale - Operating At 100,000 Duh Nuh Nuhs Per Second](http://highscalability.com/blog/2013/11/4/espns-architecture-at-scale-operating-at-100000-duh-nuh-nuhs.html)
    - [ ] See "Messaging, Serialization, and Queueing Systems" way below for info on some of the technologies that can glue services together
    - [ ] Twitter:
        - [O'Reilly MySQL CE 2011: Jeremy Cole, "Big and Small Data at @Twitter" (video)](https://www.youtube.com/watch?v=5cKTP36HVgI)
        - [Timelines at Scale](https://www.infoq.com/presentations/Twitter-Timeline-Scalability)
    - Untuk informasi lebih lanjut, lihat seri video "Menambang Kumpulan Data Besar-besaran (Mining Massive Datasets)" di bagian Seri Video.
- [ ] Mempraktikkan proses desain sistem: Berikut adalah beberapa ide untuk dicoba di atas kertas, masing-masing dengan beberapa dokumentasi tentang bagaimana hal itu ditangani di dunia nyata:
    - ulasan: [System Design from HiredInTech](http://www.hiredintech.com/system-design/)
    - [cheat sheet](https://github.com/jwasham/coding-interview-university/blob/master/extras/cheat%20sheets/system-design.pdf)
    - aliran:
        1. Pahami masalah dan cakupannya:
            - tentukan kasus penggunaan, dengan bantuan pewawancara
            - menyarankan fitur tambahan
            - hapus item yang dianggap pewawancara di luar jangkauan
            - asumsikan ketersediaan tinggi diperlukan, tambahkan sebagai kasus penggunaan
        2. Pikirkan tentang kendala:
            - tanyakan berapa permintaan per bulan
            - tanyakan berapa banyak permintaan per detik (mereka mungkin mengajukannya secara sukarela atau meminta Anda menghitungnya)
            - memperkirakan persentase membaca vs menulis
            - ingat aturan 80/20 saat membuat estimasi
            - berapa banyak data yang ditulis per detik
            - total penyimpanan yang dibutuhkan selama 5 tahun
            - berapa banyak data yang dibaca per detik
        3. Desain abstrak:
            - lapisan (layanan, data, caching)
            - infrastruktur: load balancing, perpesanan
            - gambaran kasar dari setiap algoritma kunci yang menggerakkan layanan
            - pertimbangkan kemacetan dan tentukan solusinya
    - Exercises:
        - [Design a CDN network: old article](http://repository.cmu.edu/cgi/viewcontent.cgi?article=2112&context=compsci)
        - [Design a random unique ID generation system](https://blog.twitter.com/2010/announcing-snowflake)
        - [Design an online multiplayer card game](http://www.indieflashblog.com/how-to-create-an-asynchronous-multiplayer-game.html)
        - [Design a key-value database](http://www.slideshare.net/dvirsky/introduction-to-redis)
        - [Design a picture sharing system](http://highscalability.com/blog/2011/12/6/instagram-architecture-14-million-users-terabytes-of-photos.html)
        - [Design a recommendation system](http://ijcai13.org/files/tutorial_slides/td3.pdf)
        - [Design a URL-shortener system: copied from above](http://www.hiredintech.com/system-design/the-system-design-process/)
        - [Design a cache system](https://www.adayinthelifeof.nl/2011/02/06/memcache-internals/)

---

## Ulasan Akhir

    Bagian ini akan memiliki video pendek yang dapat Anda tonton dengan cukup cepat untuk meninjau sebagian besar konsep penting.
    Sangat menyenangkan jika Anda sering ingin penyegaran.

- [ ] Series of 2-3 minutes short subject videos (23 videos)
    - [Videos](https://www.youtube.com/watch?v=r4r1DZcx1cM&list=PLmVb1OknmNJuC5POdcDv5oCS7_OUkDgpj&index=22)
- [ ] Series of 2-5 minutes short subject videos - Michael Sambol (18 videos):
    - [Videos](https://www.youtube.com/channel/UCzDJwLWoYCUQowF_nG3m5OQ)
- [ ] [Sedgewick Videos - Algorithms I](https://www.youtube.com/user/algorithmscourses/playlists?shelf_id=2&view=50&sort=dd)
    - [ ] [01. Union-Find](https://www.youtube.com/watch?v=8mYfZeHtdNc&list=PLe-ggMe31CTexoNYnMhbHaWhQ0dvcy43t)
    - [ ] [02. Analysis of Algorithms](https://www.youtube.com/watch?v=ZN-nFW0mEpg&list=PLe-ggMe31CTf0_bkOhh7sa5uqeppp3Sr0)
    - [ ] [03. Stacks and Queues](https://www.youtube.com/watch?v=TIC1gappbP8&list=PLe-ggMe31CTe-9jhnj3P_3mmrCh0A7iHh)
    - [ ] [04. Elementary Sorts](https://www.youtube.com/watch?v=CD2AL6VO0ak&list=PLe-ggMe31CTe_5WhGV0F--7CK8MoRUqBd)
    - [ ] [05. Mergesort](https://www.youtube.com/watch?v=4nKwesx_c8E&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9)
    - [ ] [06. Quicksort](https://www.youtube.com/watch?v=5M5A7qPWk84&list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1)
    - [ ] [07. Priority Queues](https://www.youtube.com/watch?v=G9TMe0KC0w0&list=PLe-ggMe31CTducy9LDiGVkdSv0NfiRwn5)
    - [ ] [08. Elementary Symbol Tables](https://www.youtube.com/watch?v=up_nlilw3ac&list=PLe-ggMe31CTc3a8nKRDxFZZrWrBvkc9SG)
    - [ ] [09. Balanced Search Trees](https://www.youtube.com/watch?v=qC1BLLPK_5w&list=PLe-ggMe31CTf7jHH_mFT50kayjCEA6Rhu)
    - [ ] [10. Geometric Applications of BST](https://www.youtube.com/watch?v=Wl30aGAp6TY&list=PLe-ggMe31CTdBsRIw0hXln0hilRs-DqAx)
    - [ ] [11. Hash Tables](https://www.youtube.com/watch?v=QA8fJGO-i9o&list=PLe-ggMe31CTcKxIRGqqThMts2eHtSrf11)
- [ ] [Sedgewick Videos - Algorithms II](https://www.youtube.com/user/algorithmscourses/playlists?flow=list&shelf_id=3&view=50)
    - [ ] [01. Undirected Graphs](https://www.youtube.com/watch?v=GmVhD-mmMBg&list=PLe-ggMe31CTc0zDzANxl4I2MhMoRVlbRM)
    - [ ] [02. Directed Graphs](https://www.youtube.com/watch?v=_z-JsVaUS40&list=PLe-ggMe31CTcEwaU8a1P1Gd95A77HV85K)
    - [ ] [03. Minimum Spanning Trees](https://www.youtube.com/watch?v=t8fNk9tfVYY&list=PLe-ggMe31CTceUZxDesGfHGLE7kcSafqj)
    - [ ] [04. Shortest Paths](https://www.youtube.com/watch?v=HoGSiB7tSeI&list=PLe-ggMe31CTePpG3jbeOTsnGUGZDKxgZD)
    - [ ] [05. Maximum Flow](https://www.youtube.com/watch?v=rYIKlFstBqE&list=PLe-ggMe31CTduQ68XQ-sVj32wYJIspTma)
    - [ ] [06. Radix Sorts](https://www.youtube.com/watch?v=HKPrVm5FWvg&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53)
    - [ ] [07. Tries](https://www.youtube.com/watch?v=00YaFPcC65g&list=PLe-ggMe31CTe9IyG9MB8vt5xUJeYgOYRQ)
    - [ ] [08. Substring Search](https://www.youtube.com/watch?v=QzI0p6zDjK4&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66)
    - [ ] [09. Regular Expressions](https://www.youtube.com/watch?v=TQWNQsJSPnk&list=PLe-ggMe31CTetTlJWouM42fyttyKPgSDh)
    - [ ] [10. Data Compression](https://www.youtube.com/watch?v=at9tjpxcBh8&list=PLe-ggMe31CTciifRRo6yY0Yt0mzgIXXVZ)
    - [ ] [11. Reductions](https://www.youtube.com/watch?v=Ow5x-ooMGv8&list=PLe-ggMe31CTe_yliW5vc3yO-dj1LSSDyF)
    - [ ] [12. Linear Programming](https://www.youtube.com/watch?v=rWhcLyiLZLA&list=PLe-ggMe31CTdy6dKzMgkWFuTTN1H8B-E1)
    - [ ] [13. Intractability](https://www.youtube.com/watch?v=6qcaaDp4cdQ&list=PLe-ggMe31CTcZCjluBHw53e_ek2k9Kn-S)

---

## [Latihan Pertanyaan Pemrograman

Sekarang setelah kamu mengetahui semua topik ilmu komputer di atas, sekarang saatnya berlatih menjawab soal coding.

**Latihan pertanyaan coding bukan tentang menghafal jawaban atas masalah pemrograman.**

Mengapa Anda perlu berlatih mengerjakan soal pemrograman:
- pengenalan masalah, dan di mana struktur data dan algoritme yang tepat cocok
- mengumpulkan persyaratan untuk masalah tersebut
- berbicara melalui masalah seperti yang akan Anda lakukan dalam wawancara
- coding di papan tulis atau kertas, bukan di komputer
- hadir dengan kerumitan ruang dan waktu untuk solusi Anda
- menguji solusi Anda

Ada pengantar yang bagus untuk pemecahan masalah metodis dan komunikatif dalam sebuah wawancara. Anda akan mendapatkan ini dari buku wawancara pemrograman juga, tapi saya menemukan ini luar biasa:
[Algorithm design canvas](http://www.hiredintech.com/algorithm-design/)

[My Process for Coding Interview (Book) Exercises](https://googleyasheck.com/my-process-for-coding-interview-exercises/)

Tidak ada papan tulis di rumah? Itu masuk akal. Saya orang aneh dan memiliki papan tulis besar. Alih-alih papan tulis, pilih file
papan gambar besar dari toko seni. Anda bisa duduk di sofa dan berlatih. Ini adalah "papan tulis sofa" saya.
Saya menambahkan pena di foto untuk skala. Jika Anda menggunakan pena, Anda pasti berharap dapat menghapusnya. Cepat berantakan.

![my sofa whiteboard](https://dng5l3qzreal6.cloudfront.net/2016/Oct/art_board_sm_2-1476233630368.jpg)

Tambahan:

- [Mathematics for Topcoders](https://www.topcoder.com/community/data-science/data-science-tutorials/mathematics-for-topcoders/)
- [Dynamic Programming – From Novice to Advanced](https://www.topcoder.com/community/data-science/data-science-tutorials/dynamic-programming-from-novice-to-advanced/)
- [MIT Interview Materials](https://web.archive.org/web/20160906124824/http://courses.csail.mit.edu/iap/interview/materials.php)
- [Exercises for getting better at a given language](http://exercism.io/languages)

**Baca dan Lakukan Masalah Pemrograman (dalam urutan ini):**

- [ ] [Programming Interviews Exposed: Secrets to Landing Your Next Job, 2nd Edition](http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html)
    - answers in C, C++ and Java
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - answers in Java

Lihat [Daftar Buku di atas](#book-list)

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
- [InterviewBit](https://www.interviewbit.com/invite/icjf)
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
- [Gainlo.co: Mock pewawancara dari perusahaan besar](http://www.gainlo.co/) - Saya menggunakan ini dan itu membantu saya bersantai untuk layar ponsel dan wawancara di tempat
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
        - [Pengantar Pencarian Biner Dan Red-Black Tree](https://www.topcoder.com/community/competitive-programming/tutorials/an-introduction-to-binary-search-and-red-black-trees/)

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
    - lihat video di bawah ini

- ### Pembelajaran Mesin (Machine Learning)
    - Kenapa ML?
        - [Bagaimana Google Mengubah Dirinya Sebagai Perusahaan Machine Learning First](https://backchannel.com/how-google-is-remaking-itself-as-a-machine-learning-first-company-ada63defcb70)
        - [Pembelajaran Mendalam Skala Besar untuk Sistem Komputer Cerdas (video)](https://www.youtube.com/watch?v=QSaZGT4-6EY)
        - [Pembelajaran Mendalam dan Dapat Dipahami versus Rekayasa Perangkat Lunak dan Verifikasi oleh Peter Norvig](https://www.youtube.com/watch?v=X769cyzBNVw)
    - [Alat pembelajaran Mesin Cloud Google (video)](https://www.youtube.com/watch?v=Ja2hxBAwG_0)
    - [Resep Pembelajaran Mesin Google Developers (Scikit Learn & Tensorflow) (video)](https://www.youtube.com/playlist?list=PLOU2XLYxmsIIuiBfYad6rFYQU_jL2ryal)
    - [Tensorflow (video)](https://www.youtube.com/watch?v=oZikw5k_2FM)
    - [Tutorial Tensorflow](https://www.tensorflow.org/versions/r0.11/tutorials/index.html)
    - [Panduan Praktis untuk mengimplementasikan Jaringan Neural dengan Python (menggunakan Theano)](http://www.analyticsvidhya.com/blog/2016/04/neural-networks-python-theano/)
    - Kursus:
        - [Kursus pemula yang bagus: Pembelajaran Mesin](https://www.coursera.org/learn/machine-learning)
              - [video saja](https://www.youtube.com/playlist?list=PLZ9qNFMHZ-A4rycgrgOYma6zxF4BZGGPW)
              - lihat video 12-18 untuk review aljabar linier (14 dan 15 adalah duplikat)
        - [Jaringan Neural untuk Pembelajaran Mesin](https://www.coursera.org/learn/neural-networks)
        - [Nanodegree Deep Learning Google](https://www.udacity.com/course/deep-learning--ud730)
        - [Nanodegree Machine Learning Engineer Google / Kaggle](https://www.udacity.com/course/machine-learning-engineer-nanodegree-by-google--nd009)
        - [Nanodegree, Insinyur Mobil Mengemudi Mandiri](https://www.udacity.com/drive)
        - [Kursus Online Metis ($99 selama 2 bulan)](http://www.thisismetis.com/explore-data-science)
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

- [Matematika Diskrit oleh Shai Simonson (19 video)](https://www.youtube.com/playlist?list=PL3o9D4Dl2FJ9q0_gtFXPh_H4POI5dK0yG)

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

- [Stanford: Paradigma Pemrograman (27 video)](https://www.youtube.com/view_play_list?p=9D558D49CA734A02)

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

## LICENSE

[CC-BY-SA-4.0](../LICENSE.txt)

Terjemahan Bahasa Indonesia oleh  @[hexatester](https://github.com/hexatester), @[santosomichael](https://github.com/santosomichael), @[dikiaap](https://github.com/dikiaap), @[rvlewerissa](https://github.com/rvlewerissa), @[ziishaned](https://github.com/ziishaned), @[rimonmostafiz](https://github.com/rimonmostafiz), @[hwhung0111](https://github.com/hwhung0111), @[fahminlb33](https://github.com/fahminlb33), @[davidsetyanugraha](https://github.com/davidsetyanugraha)
