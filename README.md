# Kodlama Mülakat Üniversitesi
> Aslında bunu bir yazılım mühendisi olmak için kısa çalışma listesi olarak hazırladım,
> ama bugün gördüğünüz bu büyük listeye döndü. Bu çalışma planı ile ilerdikten sonra, [Amazon'da
> yazılım geliştirme mühendisi olarak işe başladım.](https://startupnextdoor.com/ive-been-acquired-by-amazon/?src=ciu)!
> Büyük bir ihtimalle benim kadar çalışmak zorunda kalmayacaksınız. Herneyse, İhtiyacınız olan Her şey burada.
>
> Burada listenen öğeler sizi hemen hemen her yazılım şirketindeki mülakatlar için iyi bir şekilde
> hazırlayacaktır.Bu şirketlere Amazon, Facebook, Google ya da Microsoft gibi devlerde dahil.
>
> *İyi Şanslar!*

> Tamamlanmış çeviriler:
- [中文版本](translations/README-cn.md)
- [Tiếng Việt - Vietnamese](translations/README-vi.md)
- [Español](translations/README-es.md)

> Çevirisi devam edenler:
- [हिन्दी](https://github.com/jwasham/coding-interview-university/issues/81)
- [עברית](https://github.com/jwasham/coding-interview-university/issues/82)
- [Bahasa Indonesia](https://github.com/jwasham/coding-interview-university/issues/101)
- [Arabic](https://github.com/jwasham/coding-interview-university/issues/98)
- [Turkish](https://github.com/jwasham/coding-interview-university/issues/90)
- [French](https://github.com/jwasham/coding-interview-university/issues/89)
- [Russian](https://github.com/jwasham/coding-interview-university/issues/87)
- [Ukrainian](https://github.com/jwasham/coding-interview-university/issues/106)
- [Brazilian Portuguese](https://github.com/jwasham/coding-interview-university/issues/113)
- [Korean](https://github.com/jwasham/coding-interview-university/issues/118)
- [Telugu](https://github.com/jwasham/coding-interview-university/issues/117)
- [Polish](https://github.com/jwasham/coding-interview-university/issues/122)
- [German](https://github.com/jwasham/coding-interview-university/issues/135)
- [Urdu](https://github.com/jwasham/coding-interview-university/issues/140)
- [Thai](https://github.com/jwasham/coding-interview-university/issues/156)
- [Greek](https://github.com/jwasham/coding-interview-university/issues/166)
- [Italian](https://github.com/jwasham/coding-interview-university/issues/170)

## Bu Nedir?
> Bu benim web geliştiricisiyken(kendi kendime öğrendim, bilgisayar mühendisliği* ile ilgili bir diplomam yok) büyük bir 
> şirkette yazılım geliştiricisi olmak için kullandığım uzun süreli çalışma planım. 

> ![Coding at the whiteboard - from HBO's Silicon Valley](https://dng5l3qzreal6.cloudfront.net/2016/Aug/coding_board_small-1470866369118.jpg)

**Yeni Yazılım mühendisleri** ya da yazılım/web geliştirmeden yazılım mühendisliğine(bilgisayar bilimi bilgisi gerekir) geçenler içindir.
Google, Amazon, Facebook ve Microsoft gibi büyük yazılım şirketleri yazılım mühendisliğini, yazılım/web geliştirmeden farklı olarak değerlendirir ve bu şirketler bilgisayar bilimi bilgisi ister.

## İçindekiler
- [Bu Nedir?](#bu-nedir)
- [Neden Kullanmalıyım?](#neden-kullanmalıyım)
- [Nasıl Kullanılır?](#nasıl-kullanılır)
- [Yeterince zeki değilim diye düşünmeyin](#yeterince-zeki-değlim-diye-düşünmeyin)
- [Video Kaynakları Hakkında](#video-kaynakları-hakkında)
- [Mülakat Süreci & Genel Mülakat Hazırlığı](#mülakat-süreçi--genel-mülakat-hazırlığı)
- [Başlamadan Önce](#başlamadan-önce)
- [Önceden Bilinmesi Gerekenler](#önceden-bilinmesi-gerekenler)
- [Günlük Plan](#günlük-plan)
- [Algorithmic complexity / Big-O / Asymptotic analysis](#algorithmic-complexity--big-o--asymptotic-analysis)
- [Data Structures](#data-structures)
    - [Arrays](#arrays)
    - [Linked Lists](#linked-lists)
    - [Stack](#stack)
    - [Queue](#queue)
    - [Hash table](#hash-table)
- [Daha Fazla Bilgi](#daha-fazla-bilgi)
    - [Binary search](#binary-search)
    - [Bitwise operations](#bitwise-operations)
- [Trees](#trees)
    - [Trees - Notes & Background](#trees---notes--background)
    - [Binary search trees: BSTs](#binary-search-trees-bsts)
    - [Heap / Priority Queue / Binary Heap](#heap--priority-queue--binary-heap)
    - balanced search trees (general concept, not details)
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
- [Daha da Fazla Bilgi](#daha-da-fazla-bilgi)
    - [Recursion](#recursion)
    - [Dynamic Programming](#dynamic-programming)
    - [Object-Oriented Programming](#object-oriented-programming)
    - [Design Patterns](#design-patterns)
    - [Combinatorics (n choose k) & Probability](#combinatorics-n-choose-k--probability)
    - [NP, NP-Complete and Approximation Algorithms](#np-np-complete-and-approximation-algorithms)
    - [Caches](#caches)
    - [Processes and Threads](#processes-and-threads)
    - [Papers](#papers)
    - [Testing](#testing)
    - [Scheduling](#scheduling)
    - [Implement system routines](#implement-system-routines)
    - [String searching & manipulations](#string-searching--manipulations)
    - [Tries](#tries)
    - [Floating Point Numbers](#floating-point-numbers)
    - [Unicode](#unicode)
    - [Endianness](#endianness)
- [Networking](#networking)
- [System Design, Scalability, Data Handling](#system-design-scalability-data-handling) (if you have 4+ years experience)
- [Son bir tekrar](#son-bir-tekrar)
- [Kodlama Soruları Egzersizi](#kodlama-soruları-egzersizi)
- [Kodlama Alıştırması](#kodlama-alıştırması)
- [Mülakat Yaklaşırken](#mülakat-yaklaşırken)
- [Özgeçmiş](#özgeçmişin)
- [Mülakatlarda Karşılaşabileceğiniz Bazı Sorular](#mülakatlarda-karşılaşabileceğiniz-bazı-sorular)
- [Mülakatı Yapan Kişiye Sorulabilecek Sorular](#mülakatı-yapan-kişiye-sorulabilecek-sorular)
- [İşe Alındıktan Sonra](#işe-alındıktan-sonra)

---------------- Buradan Sonraki Her Şey İsteğe Bağlı ----------------

- [İlave Kitaplar](#ilave-kitaplar)
- [İlave Öğrenme](#ilave-öğrenme)
    - [Compilers](#compilers)
    - [Emacs and vi(m)](#emacs-and-vim)
    - [Unix command line tools](#unix-command-line-tools)
    - [Information theory](#information-theory-videos)
    - [Parity & Hamming Code](#parity--hamming-code-videos)
    - [Entropy](#entropy)
    - [Cryptography](#cryptography)
    - [Compression](#compression)
    - [Computer Security](#computer-security)
    - [Garbage collection](#garbage-collection)
    - [Parallel Programming](#parallel-programming)
    - [Messaging, Serialization, and Queueing Systems](#messaging-serialization-and-queueing-systems)
    - [A*](#a)
    - [Fast Fourier Transform](#fast-fourier-transform)
    - [Bloom Filter](#bloom-filter)
    - [HyperLogLog](#hyperloglog)
    - [Locality-Sensitive Hashing](#locality-sensitive-hashing)
    - [van Emde Boas Trees](#van-emde-boas-trees)
    - [Augmented Data Structures](#augmented-data-structures)
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
    - [Network Flows](#network-flows)
    - [Disjoint Sets & Union Find](#disjoint-sets--union-find)
    - [Math for Fast Processing](#math-for-fast-processing)
    - [Treap](#treap)
    - [Linear Programming](#linear-programming-videos)
    - [Geometry, Convex hull](#geometry-convex-hull-videos)
    - [Discrete math](#discrete-math)
    - [Machine Learning](#machine-learning)
- [Bazı Konularda İlave Bilgiler](#bazı-konularda-ilave-bilgiler)
- [Videolar](#videolar)
- [Bilgisayar Bilimi Kursları](#bilgisayar-bilimi-kursları)

---

## Neden Kullanmalıyım?
Bu projeye başlamadan önce ne yığını(stack) ne öbeği(heap) ne Big-O'yu ne de ağaçlar(trees) hakkında bir bilgim vardı.
Eğer bir sıralama algoritması kodlamak zorunda kalsaydım, ortaya pek iyi şeyler çıkmazdı. Sadece dile yerleşik veri yapılarını
kullanabiliyordum ve nasıl çalıştıklarını bilmiyordum. Çalıştırdığım bir program eğer yetersiz bellek hatası vermezse, hafıza yönetimi
yapmıyordum ve bu problemi anlık bir çözüm bularak hallediyordum. Hayatım boyunca birkaç kez iki boyutlu diziler ve yüzlerce kez birleştirici diziler kullandım ama daha önce hiç sıfırdan veri yapıları oluşturmadım.

Bu plan aylarınızı alacak uzun bir plan. Eğer bu öğeler tanıdık geliyorsa daha az vaktinizi alacaktır.

## Nasıl Kullanmalıyım?

Aşağıdaki her şey bir taslaktır ve öğeleri üstten alta doğru sırayla ele almanız gerekir.

İlerlemeyi kontrol etmek için Github'ın özel metin düzenleme özelliğini(Github's Markdown) kullanıyorum.

**Yeni bir branch oluşturun ve köşeli parantezlerin içerisine x koyun ([x]), böylelikle çalıştığınız öğelere tık koyabilirsiniz.

    Bir tane branch forklayın ve aşağdaki komutları takip edin
    
`git checkout -b progress`

`git remote add jwasham https://github.com/jwasham/coding-interview-university`

`git fetch --all`

    Yaptığınız değişiklikleri tamamladıktan sonra tüm kutuları X ile işaretleyin.

`git add . `

`git commit -m "Marked x" `

`git rebase jwasham/master `

`git push --force `

[Github'ın Özel Metin Düzenleme Özelliği Hakkında](https://guides.github.com/features/mastering-markdown/#GitHub-flavored-markdown)

## Yeterince zeki değilim diye düşünmeyin
- Başarılı yazılım mühendisleri zekidir ama çoğunun zeki olmadıklarına dair endişeleri vardır.
- [Dahi Programcı Efsanesi](https://www.youtube.com/watch?v=0SARbwvhupQ)
- [Tek Başına Gitmek Tehlikelidir: Teknolojideki Görünmez Canavarlar ile Savaşmak](https://www.youtube.com/watch?v=1i8ylq4j_EY)

## Video Kaynakları Hakkında

Bazı videolar sadece Coursera, EdX, ya da Lynda.com'daki derslere kayıt olunarak erişilebilir. Bu tür kurslar MOOC olarak adlandırılıyor (MOOC: Massive open online course)

    Ücretsiz ve her zaman erişilebilir videolar koyma konusundaki yardımlarınız için minnettarım, örneğin online ders videolarına eşlik eden YouTube videoları.
    Üniversite derslerini kullanmayı seviyorum.
    
