# Kodlama Mülakatı Üniversitesi

> Bunu aslında yazılım mühendisi olmak için kendime kısa bir yapılacaklar listesi olarak hazırlamıştım,
> fakat bugün gördüğünüz kocaman listeye dönüştü. Bu plana göre çalıştıktan sonra [Amazon'da Yazılım
> Mühendisi olarak işe alındım](https://startupnextdoor.com/ive-been-acquired-by-amazon/?src=ciu)!
> Sizin muhtemelen bu listedeki her şeye benim yaptığım kadar çalışmanız gerekmeyecektir.
> Her neyse, ihtiyacınız olan her şey burada.
>
> Bu listedeki öğeler sizi herhangi bir yazılım mühendisliği mülakatına iyice hazırlayacaktır.
> Buna teknoloji devleri de dahil: Amazon, Facebook, Google veya Microsoft.
>
> *İyi şanslar!*

Çeviriler:
- [中文版本](translations/README-cn.md)
- [Tiếng Việt - Vietnamese](translations/README-vi.md)
- [Español](translations/README-es.md)
- [Português Brasileiro](translations/README-ptbr.md)

Çevrilmekte olan diller:
- [हिन्दी](https://github.com/jwasham/coding-interview-university/issues/81)
- [עברית](https://github.com/jwasham/coding-interview-university/issues/82)
- [Bahasa Indonesia](https://github.com/jwasham/coding-interview-university/issues/101)
- [Arabic](https://github.com/jwasham/coding-interview-university/issues/98)
- [Turkish](https://github.com/jwasham/coding-interview-university/issues/90)
- [French](https://github.com/jwasham/coding-interview-university/issues/89)
- [Russian](https://github.com/jwasham/coding-interview-university/issues/87)
- [Ukrainian](https://github.com/jwasham/coding-interview-university/issues/106)
- [Korean(한국어)](https://github.com/jwasham/coding-interview-university/issues/118)
- [Brazilian Portuguese](https://github.com/jwasham/coding-interview-university/issues/113)
- [Telugu](https://github.com/jwasham/coding-interview-university/issues/117)
- [Polish](https://github.com/jwasham/coding-interview-university/issues/122)
- [Urdu](https://github.com/jwasham/coding-interview-university/issues/140)
- [Thai](https://github.com/jwasham/coding-interview-university/issues/156)
- [Greek](https://github.com/jwasham/coding-interview-university/issues/166)
- [Italian](https://github.com/jwasham/coding-interview-university/issues/170)
- [Malayalam](https://github.com/jwasham/coding-interview-university/issues/239)
- [Japanese (日本語)](https://github.com/jwasham/coding-interview-university/issues/257)

## Bu nedir?

Bu benim Bilgisayar Bilimleri diplomam olmadanö kendi kendimi yetiştirerek büyük bir şirkette yazılım mühendisi olmak için yaptığım aylık çalışma planım.

![Coding at the whiteboard - from HBO's Silicon Valley](https://dng5l3qzreal6.cloudfront.net/2016/Aug/coding_board_small-1470866369118.jpg)

Bu liste **yeni yazılım mühendisleri** veya yazılım/web geliştiriciliğinden(developer) yazılım mühendisliğine geçenlere yöneliktir.
Eğer çok daha deneyimliyseniz ve yıllardır yazılım mühendisliği yaptığınızı belirtiyorsanız, daha zor bir mülakat bekleyin.

Eğer Web Geliştiriciliği(Development) alanında yıllarca deneyiminiz varsa; Google, Amazon, Facebook ve Microsoft gibi 
büyük yazılım şirketlerinin yazılım mühendisliğini, yazılım/web geliştiriciliğinden farklı gördüğünü ve bu pozisyon için 
bilgisayar bilimi bilgisi isteyeceklerini unutmayın.

Eğer güvenilirlik mühendisi(reliability engineer) veya operasyon mühendisi(operation engineer) olmak istiyorsanız daha çok
opsyonel listeden çalışmalısınız. (Ağ oluşturma, Güvenlik)

---

## İçindekiler

- [What is it?](#what-is-it)
- [Why use it?](#why-use-it)
- [How to use it](#how-to-use-it)
- [Don't feel you aren't smart enough](#dont-feel-you-arent-smart-enough)
- [About Video Resources](#about-video-resources)
- [Interview Process & General Interview Prep](#interview-process--general-interview-prep)
- [Pick One Language for the Interview](#pick-one-language-for-the-interview)
- [Book List](#book-list)
- [Before you Get Started](#before-you-get-started)
- [What you Won't See Covered](#what-you-wont-see-covered)
- [Prerequisite Knowledge](#prerequisite-knowledge)
- [The Daily Plan](#the-daily-plan)
- [Algorithmic complexity / Big-O / Asymptotic analysis](#algorithmic-complexity--big-o--asymptotic-analysis)
- [Data Structures](#data-structures)
    - [Arrays](#arrays)
    - [Linked Lists](#linked-lists)
    - [Stack](#stack)
    - [Queue](#queue)
    - [Hash table](#hash-table)
- [More Knowledge](#more-knowledge)
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
- [Even More Knowledge](#even-more-knowledge)
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
- [Final Review](#final-review)
- [Coding Question Practice](#coding-question-practice)
- [Coding exercises/challenges](#coding-exerciseschallenges)
- [Once you're closer to the interview](#once-youre-closer-to-the-interview)
- [Your Resume](#your-resume)
- [Be thinking of for when the interview comes](#be-thinking-of-for-when-the-interview-comes)
- [Have questions for the interviewer](#have-questions-for-the-interviewer)
- [Once You've Got The Job](#once-youve-got-the-job)

---------------- Bu noktadan sonraki her şey opsyoneldir ----------------

- [Additional Books](#additional-books)
- [Additional Learning](#additional-learning)
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
- [Additional Detail on Some Subjects](#additional-detail-on-some-subjects)
- [Video Series](#video-series)
- [Computer Science Courses](#computer-science-courses)

---
