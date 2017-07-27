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
    
    
## Mülakat Süreci & Genel Mülakat Hazırlığı

- [ ] [ABC: Always Be Coding](https://medium.com/always-be-coding/abc-always-be-coding-d5f8051afce2#.4heg8zvm4)
- [ ] [Whiteboarding](https://medium.com/@dpup/whiteboarding-4df873dbba2e#.hf6jn45g1)
- [ ] [Effective Whiteboarding during Programming Interviews](http://www.coderust.com/blog/2014/04/10/effective-whiteboarding-during-programming-interviews/)
- [ ] [Demystifying Tech Recruiting](https://www.youtube.com/watch?v=N233T0epWTs)
- [ ] Cracking The Coding Interview Set 1:
    - [ ] [Gayle L McDowell - Cracking The Coding Interview (video)](https://www.youtube.com/watch?v=rEJzOhC5ZtQ)
    - [ ] [Cracking the Coding Interview with Author Gayle Laakmann McDowell (video)](https://www.youtube.com/watch?v=aClxtDcdpsQ)
- [ ] How to Get a Job at the Big 4:
    - [ ] [How to Get a Job at the Big 4 - Amazon, Facebook, Google & Microsoft (video)](https://www.youtube.com/watch?v=YJZCUhxNCv8)

- [ ] Prep Course:
    - [ ] [Software Engineer Interview Unleashed (paid course)](https://www.udemy.com/software-engineer-interview-unleashed):
        - Google'da mülakat yapan birinden, kendinizi yazılım mühendisliği mülakatına nasıl hazırlayacağınızı öğrenin.
    - [ ] [Python for Data Structures, Algorithms, and Interviews! (paid course)](https://www.udemy.com/python-for-data-structures-algorithms-and-interviews/):
        - Veri yapılarını, algoritmaları ve daha fazlasını kapsayan bir Python mülakat hazırlığı kursu.

## Mülakat İçin Bir Dil Seçin

Mülakatın kodlama bölümünde rahatça kullanabildiğiniz bir dili kullabilirsiniz, ama büyük şirketler için bu dillerin kullanılması önemlidir :

- C++
- Java
- Python

Aynı zamanda bu dillerinde kullanabilirsiniz, ama kullanmadan önce okumanızda fayda var. Bazı uyarılar olabilir:

- JavaScript
- Ruby

Kullandığınız dilde oldukça rahat ve bilgili olmalısınız.

Hangi dili seçmeniz gerektiğiyle ilgili bilgiler:
- http://www.byte-by-byte.com/choose-the-right-language-for-your-coding-interview/
- http://blog.codingforinterviews.com/best-programming-language-jobs/

[Dil Kaynaklarına Buradan Bakınız](programming-language-resources.md)

Alt tarafta  bazı C, C++, ve Python öğrenimleri göreceksiniz, çünkü ben öğreniyorum. Birkaç kitap da dahil edildi, aşağıya bakınız.

## Kitap Listesi

Bu liste benim kullandığım listeden biraz daha kısa. Zaman kazanmanız için bu listeyi sadeleştirdim.

### Mülakat Hazırlığı

- [ ] [Programming Interviews Exposed: Secrets to Landing Your Next Job, 2nd Edition](http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html)
    - Cevaplar C++ ve Java dillerinde kodlanmış.
    - Mülakatları geçmek için iyi bir ısınma.
    - Çok zor değil,  çoğu problem mülakatlarda görebileceğizden daha kolay olabilir (okudugumdan)
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - Cevaplar Java diline göre kodlanmış.

Fazladan zamanınız varsa:

- [ ] [Elements of Programming Interviews (C++ version)](https://www.amazon.com/Elements-Programming-Interviews-Insiders-Guide/dp/1479274836)
- [ ] Elements of Programming Interviews (Java version)
    - [book](https://www.amazon.com/Elements-Programming-Interviews-Java-Insiders/dp/1517435803/)
    - [Companion Project - Method Stub and Test Cases for Every Problem in the Book](https://github.com/gardncl/elements-of-programming-interviews)
    
### Bilgisayar Mimarisi

Zamanınız kısıtlıysa:

- [ ] [Write Great Code: Volume 1: Understanding the Machine](https://www.amazon.com/Write-Great-Code-Understanding-Machine/dp/1593270038)
    - Kitap 2004 yılında yayınlandı, biraz eski ama bilgisayarı kısa öz bir şekilde anlatan eşi bulunmaz bir kaynak.
    - The author invented HLA, so take mentions and examples in HLA with a grain of salt. Not widely used, but decent examples of what assembly looks like.
    - Bu bölümler temel bilgiler vermesi bakımından okumaya değer:
        - Chapter 2 - Numeric Representation
        - Chapter 3 - Binary Arithmetic and Bit Operations
        - Chapter 4 - Floating-Point Representation
        - Chapter 5 - Character Representation
        - Chapter 6 - Memory Organization and Access
        - Chapter 7 - Composite Data Types and Memory Objects
        - Chapter 9 - CPU Architecture
        - Chapter 10 - Instruction Set Architecture
        - Chapter 11 - Memory Architecture and Organization

Eğer daha fazla zamanınız varsa:

- [ ] [Computer Architecture, Fifth Edition: A Quantitative Approach](https://www.amazon.com/dp/012383872X/)
    - Daha zengin içerik, daha güncel(2011), ama daha uzun
    
    ### Dillere Göre

**Mülakat için bir dil seçmeniz gerekiyor (Yukarıya Bakınız).** Dillere göre önerilerim aşağıda. Tüm diller için kaynağım yok. Eklemelere ve önerilere açığım .

Eğer bunlardan birine çalıştıysanız, kodlama problemleri çözmek için yeterli veri yapıları ve algoritma bilgisine sahipsiniz demektir.
**İsterseniz bu projedeki tüm üniversite ders videolarını geçebilirsiniz**, çalıştığınız konuları gözden geçirmek istemiyorsanız.

[Dil Bazlı Ek Kaynaklar Burada.](programming-language-resources.md)

### C++

Bu ikisini henüz okumadım ama şiddetle tavsiye ediliyorlar ve mühteşem biri olan Sedgewick tarafından yazılmışlar.
- [ ] [Algorithms in C++, Parts 1-4: Fundamentals, Data Structure, Sorting, Searching](https://www.amazon.com/Algorithms-Parts-1-4-Fundamentals-Structure/dp/0201350882/)
- [ ] [Algorithms in C++ Part 5: Graph Algorithms](https://www.amazon.com/Algorithms-Part-Graph-3rd-Pt-5/dp/0201361183/)

Eğer C++ için daha iyi bir öneriniz varsa lütfen bana ulaştırın. Kapsamlı bir kaynak arıyorum.

### Java

- [ ] [Algorithms (Sedgewick and Wayne)](https://www.amazon.com/Algorithms-4th-Robert-Sedgewick/dp/032157351X/)
    - videos with book content (and Sedgewick!):
        - [Algorithms I](https://www.youtube.com/user/algorithmscourses/playlists?view=50&sort=dd&shelf_id=2)
        - [Algorithms II](https://www.youtube.com/user/algorithmscourses/playlists?shelf_id=3&view=50&sort=dd)

Ya da:

- [ ] [Data Structures and Algorithms in Java](https://www.amazon.com/Data-Structures-Algorithms-Michael-Goodrich/dp/1118771338/)
    - by Goodrich, Tamassia, Goldwasser
    - used as optional text for CS intro course at UC Berkeley
    - see my book report on the Python version below. This book covers the same topics.

### Python

- [ ] [Data Structures and Algorithms in Python](https://www.amazon.com/Structures-Algorithms-Python-Michael-Goodrich/dp/1118290275/)
    - by Goodrich, Tamassia, Goldwasser
    - Bu kitaba bayılıyorum. Her şeyi kapsıyor.
    - Pythonic code
    - Kitap incelemem için: https://startupnextdoor.com/book-report-data-structures-and-algorithms-in-python/

### İsteğe bağlı kitaplar

**Bazıları bu kitabı öneriyorlar, eğer yüklü bir yazılım mühendisliği tecrübeniz ya da zor bir mülakat beklentiniz yoksa, bence bu biraz aşırıya kaçıyor:**

- [ ] [Algorithm Design Manual](http://www.amazon.com/Algorithm-Design-Manual-Steven-Skiena/dp/1849967202) (Skiena)
    - Gözden geçirme ve sorun tanıma
    - Algoritma kataloğu kısmı, bir röportajda bulacağınız zorlukların çok ötesinde.
    - Kitabın iki bölümü var:
        - class textbook on data structures and algorithms
            - Avantajları:
                - is a good review as any algorithms textbook would be
                - Akademi ve iş hayatındaki problemlere nasıl çözüm bulduğuna dair güzel hikayeler
                - örnek kodlar C dilinde
            - Dezavantajları:
                - can be as dense or impenetrable as CLRS, and in some cases, CLRS may be a better alternative for some subjects
                - 7. 8. ve 9. bölümlerin takip edilmesi zor olabilir, bazı öğeler iyi açıklanmış ya da  bende yeterli akıl yok.
                - Beni yanlış anlamayın: Skiena' yı severim, onun öğretim şeklini ve üslubunu beğenirim fakat ben Stony Brook malzemesi değilim.
        - algorithm catalog:
            - Bu kitabı satın almanız için gerçek bir sebep.
            - about to get to this part. Will update here once I've made my way through it.
    - Kindle'da kiralanabilir
    - Half.com uygun fiyatlarıyla harika bir online kaynak.
    - Çözümler:
        - [Solutions](http://www.algorithm.cs.sunysb.edu/algowiki/index.php/The_Algorithms_Design_Manual_(Second_Edition))
        - [Solutions](http://blog.panictank.net/category/algorithmndesignmanualsolutions/page/2/)
    - [Errata](http://www3.cs.stonybrook.edu/~skiena/algorist/book/errata)

- [ ] [Introduction to Algorithms](https://www.amazon.com/Introduction-Algorithms-3rd-MIT-Press/dp/0262033844)
    - **Önemli:** Bu kitabın size kazandırdıkları sınırlı olacaktır. Veri yapıları ve algoritma tekrarı için iyi bir kaynak, ama nasıl iyi kod yazacagğınızı öğretmiyor. İyi bir çözümü verimli bir şekilde kodlayabilmelisiniz.
    - Half.com uygun fiyatlarıyla harika bir online kaynak.

- [ ] [Programming Pearls](http://www.amazon.com/Programming-Pearls-2nd-Jon-Bentley/dp/0201657880)
    - İlk birkaç bölüm, programlama sorunlarına zekice çözümler sunuyor. (bazı çözümler çok eski veri tipleriyle çözülmüş) ama bu sadece giriş. Kod tasarımı ve mimarisi için rehber bir kitap, daha çok Code Complete'e benziyer, ama daha kısa.

- ~~"Algorithms and Programming: Problems and Solutions" by Shen~~
    - Güzel bir kitap, ama birkaç probleme çalıştıktan sonra Pascal, do while döngüleri ve içiçe diziler beni hayal kırıklığına uğrattı.
    - Kodlama problemlerine diğer kitaplardan ya da online olarak çalışmayı tercih ederdim.


## Başlamadan Önce

Liste bir kaç ayda büyüdü, ve evet, biraz kontrolden çıktı.

Daha iyi bir tecrübe kazanmanız için yaptığım hataları aşağıda listeledim.
