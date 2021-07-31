# Coding Interview University

Asl versiyasi: [Inglizcha](../README.md)

> Dastlab men bu proyektni dasturchi (software engineer) bo'lish uchun o'qish kerak bo'lgan mavzularning qisqacha ro'yxati sifatida yaratdim,
> ammo bu proyekt bugun siz ko'rib turgan katta ro'yxatga aylandi. Ushbu o'quv rejasidan o'tib, [men Amazon-ga dasturchi sifatida ishga yollandim](https://startupnextdoor.com/ive-been-acquired-by-amazon/?src=ciu)! 
> Ehtimol, menga o'xshab o'qishingizga to'g'ri kelmaydi. Baribir sizga kerak bo'lgan hamma narsa shu yerda.
>
> Bir necha oy davomida kuniga taxminan 8-12 soat o'qidim. Bu mening hikoyam: [Nega men Google-da intervyudan o'tish uchun 8 oy davomida kechayu kunduz o'qidim?](https://medium.freecodecamp.org/why-i-studied-full-time-for-8-months-for-a-google-interview-cc662ce9bb13)
>
> Bu yerda keltirilgan narsalar sizni har qanday dasturiy ta'minot kompaniyalari, shu jumladan gigantlar: Amazon, Facebook, Google va Microsoft-da o'tkaziladigan texnik suhbatga yaxshi tayyorlaydi.
>
> *Sizga omad tilayman!*

<div align="center">
 	<hr />
     <p>
         <a href="https://github.com/sponsors/jwasham"><strong>Become a sponsor</strong> and support Coding Interview University!</a>
     </p>
     <p>
         <strong>Special thanks to:</strong>
     </p>
     <p>
         <a href="https://oss.capital/">
             <div>
                 <img src="https://d3j2pkmjtin6ou.cloudfront.net/sponsors/oss-capital.svg" width="350" alt="OSS Capital">
             </div>
             <div>
                 <sup><strong>Founded in 2018, OSS Capital is the first and only venture capital platform focused<br>exclusively on supporting early-stage COSS (commercial open source) startup founders.</strong></sup>
             </div>
         </a>
     </p>
     <br />
     <p>
         <a href="https://www.gitpod.io/?utm_campaign=jwasham&utm_medium=referral&utm_content=coding-interview-university&utm_source=github">
             <div>
                 <img src="https://d3j2pkmjtin6ou.cloudfront.net/sponsors/gitpod-logo-light-theme.svg" width="300" alt="Gitpod">
             </div>
             <div>
                 <p>
                     <strong>Dev environments built for the cloud</strong>
                 </p>
             </div>
             <div>
                 <sup>Natively integrated with GitLab, GitHub, and Bitbucket, Gitpod automatically and continuously prebuilds dev environments for all your branches. As a result team members can instantly start coding with fresh dev environments for each new task - no matter if you are building a new feature, want to fix a bug, or work on a code review.</sup>
             </div>
         </a>
     </p>
     <hr />
 </div>

## Bu nima uchun kerak?

Bu mening web dasturchi (web developer) darajasidan katta kompaniyada ishlaydigan dastur injineri (software engineer) darajasiga chiqish uchun qilgan ko'p oylik o'qish rejam.

![Coding at the whiteboard - from HBO's Silicon Valley](https://d3j2pkmjtin6ou.cloudfront.net/coding-at-the-whiteboard-silicon-valley.png)

Bu proyekt **yangi dasturchi injinerlar** uchun juda foydali. Va yana, oddiy programmistlikdan (masalan web yoki mobildan) dasturiy injinerlikka (dastur injinerlaridan computer science bilimlari talab qilinadi) o'tmoqchi bo'lganlar uchun foydali.


Agar sizda dasturchilik bo'yicha ko'p yillik tajribangiz bo'lsa, shuni bilingki: Google, Amazon, Facebook, va Microsoftga o'xshagan katta kompaniyalar dasturiy injinerlikni (software engineer) oddiy dasturchilik (software/web developer) dan farqli deb ko'radi va ular computer science bilimini talab qiladi.


Agar siz reliability engineer yoki operations engineer bo'lmoqchi bo'lsangiz, unda siz ixtiyoriy ro'yxatdan ko'proq o'qing (networking, xavfsizlik va boshqalar).
---

## Mundarija

- [Bu nima uchun kerak?](#bu-nima-uchun-kerak)
- [Nima uchun foydali?](#nima-uchun-foydali)
- [Qanday foydalanish kerak?](#qanday-foydalanish-kerak)
- [O'zingizni omadsiz deb hisoblamang](#ozingizni-omadsiz-deb-hisoblamang)
- [Video qo'llanmalar haqida](#video-qollanmalar-haqida)
- [Suhbat jarayoni va intervyuga tayyorgarlik](#suhbat-jarayoni-va-intervyuga-tayyorgarlik)
- [Intervyu uchun bitta dasturlash tilini tanlang](#intervyu-uchun-bitta-dasturlash-tilini-tanlang)
- [Kitoblar ro'yxati](#kitoblar-royxati)
- [O'rganishni boshlashdan oldin](#organishni-boshlashdan-oldin)
- [Bu proyekt nimalarni o'z ichiga olmaydi](#bu-proyekt-nimalarni-oz-ichiga-olmaydi)
- [Kunlik reja](#kunlik-reja)
- [Oldindan nima bilish kerak](#oldindan-nima-bilish-kerak)
- [Algoritmik murakkablik / Big-O / Asimtotik tahlil](#algoritmik-murakkablik--big-o--asimtotik-tahlil)
- [Ma'lumotlar tuzilmasi (Data structures)](#malumotlar-tuzilmasi-data-structures)
    - [Massivlar](#massivlar)
    - [Linked Lists (O'zaro bog'langan ro'yxatlar)](#linked-lists-ozaro-boglangan-royxatlar)
    - [Stack](#stack)
    - [Queue](#queue)
    - [Hash table](#hash-table)
- [Qo'shimcha bilimlar](#qoshimcha-bilimlar)
    - [Binary search](#binary-search)
    - [Bitwise operatsiyalari](#bitwise-operatsiyalari)
- [Trees (daraxtlar)](#trees-daraxtlar)
    - [Trees - Eslatmalar & Kelib chiqishi](#trees---eslatmalar--kelib-chiqishi)
    - [Binary search tree-lar: BST-lar](#binary-search-tree-lar-bst-lar)
    - [Heap / Priority Queue / Binary Heap](#heap--priority-queue--binary-heap)
    - balanslangan search tree-lar (umumiy tushuncha)
    - traversals: preorder, inorder, postorder, BFS, DFS
- [Sorting (Saralash)](#sorting-saralash)
    - selection
    - insertion
    - heapsort
    - quicksort
    - merge sort
- [Graflar](#graflar)
    - directed
    - undirected
    - adjacency matrix
    - adjacency list
    - traversals: BFS, DFS
- [Yanada ko'proq bilim](#yanada-koproq-bilim)
    - [Rekursiya](#rekursiya)
    - [Dinamik dasturlash (Dynamic Programming)](#dinamik-dasturlash-dynamic-programming)
    - [Object-Oriented Programming](#object-oriented-programming)
    - [Dizayn patternlar](#dizayn-patternlar)
    - [Kombinatorikalar & Ehtimollik nazariyasi](#kombinatorikalar--ehtimollik-nazariyasi)
    - [NP-NP to'liq va taxminiy algoritmlari](#np-np-toliq-va-taxminiy-algoritmlari)
    - [Keshlar](#keshlar)
    - [Process-lar va Thread-lar](#process-lar-va-thread-lar)
    - [Testlash (Testing)](#testlash-testing)
    - [Scheduling](#scheduling)
    - [Stringni izlash va manipulyatsiyalar](#stringni-izlash-va-manipulyatsiyalar)
    - [Trie-lar](#trie-lar)
    - [Floating Point Numbers](#floating-point-numbers)
    - [Unicode](#unicode)
    - [Endianness](#endianness)
    - [Networking](#networking)
- [Tizim Dizayni, Scalability, Ma'lumotlar bilan ishlash](#tizim-dizayni-scalability-malumotlar-bilan-ishlash) (agar sizda 4+ yillik tajriba bo'lsa)
- [Yakuniy tahlil](#yakuniy-tahlil)
- [Coding bo'yicha savollar ustida ishlash](#coding-boyicha-savollar-ustida-ishlash)
- [Coding mashqlar/savollar](#coding-mashqlarsavollar)
- [Intervyuga yaqin kelganingizda](#intervyuga-yaqin-kelganingizda)
- [Sizni rezyumeingiz](#sizni-rezyumeingiz)
- [Intervyuga yaqin kelganda quyidagilar haqida o'ylab yuring](#intervyuga-yaqin-kelganda-quyidagilar-haqida-oylab-yuring)
- [Intervyuver uchun savollaringizni tayyorlab qo'ying](#intervyuver-uchun-savollaringizni-tayyorlab-qoying)
- [Ishga qabul qilinganingizdan so'ng](#ishga-qabul-qilinganingizdan-song)

---------------- Quyidagilar ixtiyoriy ----------------

## Qo'shimcha manbalar

- [Qo'shimcha kitoblar](#qoshimcha-kitoblar)
- [Qo'shimcha o'rganish](#qoshimcha-organish)
    - [Kompilyatorlar](#kompilyatorlar)
    - [Emacs va vi(m)](#emacs-va-vim)
    - [Unix uchun buyruqlar ro'yxati](#unix-uchun-buyruqlar-royxati)
    - [Ma'lumot nazariyasi](#malumot-nazariyasi-videolar)
    - [Parity va "Hamming Code"](#parity-va-hamming-code-videolar)
    - [Entropiya](#entropiya)
    - [Kriptografiya](#kriptografiya)
    - [Kompressiya](#kompressiya)
    - [Kompyuter xavfsizligi](#kompyuter-xavfsizligi)
    - [Chiqindi yig'ish (Garbage collection)](#chiqindi-yigish-garbage-collection)
    - [Paralel dasturlash](#paralel-dasturlash)
    - [Xabar almashish, Serializatsiya, va Queue Tizimlar](#xabar-almashish-serializatsiya-va-queue-tizimlar)
    - [A*](#a)
    - [Fast Fourier Transform](#fast-fourier-transform)
    - [Bloom Filter](#bloom-filter)
    - [HyperLogLog](#hyperloglog)
    - [Locality-Sensitive Hashlash](#locality-sensitive-hashlash)
    - [van Emde Boas Tree-lari](#van-emde-boas-tree-lari)
    - [Kattalashtirilgan Data Strukturalari](#kattalashtirilgan-data-strukturalari)
    - [Balanced search tree-lar](#balanced-search-tree-lar)
        - AVL tree-lar
        - Splay tree-lar
        - Red/black tree-lar
        - 2-3 search tree-lar
        - 2-3-4 Tree-lar (shuningdek 2-4 tree nomi bilan tanilgan)
        - N-talik (K-talik, M-talik) tree-lar
        - B-Tree-lar
    - [k-D Tree-lar](#k-d-tree-lar)
    - [Skip listlar](#skip-listlar)
    - [Network Flow](#network-flow)
    - [Disjoint Set & Union Find](#disjoint-set--union-find)
    - [Tez hisoblash uchun matematika](#tez-hisoblash-uchun-matematika)
    - [Treap](#treap)
    - [Linear Programming](#linear-programming-videolar)
    - [Geometry, Convex hull](#geometry-convex-hull-videolar)
    - [Diskret matematika](#diskret-matematika)
    - [Machine Learning](#machine-learning)
- [Ba'zi mavzular bo'yicha qo'shimcha ma'lumotlar](#bazi-mavzular-boyicha-qoshimcha-malumotlar)
- [Video Seriyalar](#video-seriyalar)
- [Computer Science Kurslari](#computer-science-kurslari)
- [Maqolalar](#maqolalar)

---

## Nima uchun foydali?

Ushbu loyihani boshlaganimda, men stack bilan heap-ni farqini bilmas edim,
Big-O ni nimaligini bilmas edim, tree-lar yoki graph-lar haqida hech qanday tushunchaga 
ega emas edim. Agar tartiblash algoritmini (sorting) yozishni so'rashganda, aniq qovun tushirgan 
bo'lar edim. Umrimda ishlatgan data strukturalarni hammasini tayyor holda ishlatganman 
(built-in library) va ularning asosida nimalar yotishini umuman bilmas edim. 
Juda ko'p kod yozgan bo'lsamda, lekin men hech qachon qandaydir data strukturani noldan yozmaganman.

Bu uzoq vaqt talab qiladigan jarayon bo’lib, sizga bir necha oy kerak bo'lishi mumkin. 
Agar siz allaqachon bu narsalarni ko'pini bilsangiz, bu resurslar sizni ko'p vaqtingizni olmaydi.

## Qanday foydalanish kerak?

Quyida foydalanish qoidalari berilgan bo'lib, bosqichlarni yuqoridan pastga tartibda bajarishingiz kerak.

Men natijalarni kuzatish uchun vazifalar ro'yxatini o'z ichiga olgan Github markup-idan foydalanmoqdaman.

**Bu kabi elementlarni tekshirishingiz uchun yangi "branch" yarating, so'ngra shunchaki qavs ichiga x qo'shib, ro'yxat elementlarini belgilashingiz mumkin: [x]**

     Branch-ni o'zingizga fork qiling va quyidagi buyruqlarni ketma-ketlikda bajaring:

Ulash uchun https://github.com/jwasham/coding-interview-university havola(link) ga o'ting va "Fork" tugmasini bosing  

    Shaxsiy(local) repo-ga ko'chirib oling

`git clone git@github.com:<your_github_username>/coding-interview-university.git`

`git checkout -b progress`

`git remote add jwasham https://github.com/jwasham/coding-interview-university`

`git fetch --all`

    O'zgarishlaringizni tugatganingizdan so'ng barcha qismlarni X bilan belgilang

`git add .`

`git commit -m "Marked x"`

`git rebase jwasham/main`

`git push --set-upstream origin progress`

`git push --force`

[Github-flavored markdown-haqida ko'proq ma'lumot](https://guides.github.com/features/mastering-markdown/#GitHub-flavored-markdown)


## O'zingizni omadsiz deb hisoblamang

- Omadli dasturchilar aqlli, ammo ularning ko'pchiliklari o'zlarini yetarlicha aqlli deb hisoblashmaydi.
- [Daho dasturchining afsonasi](https://www.youtube.com/watch?v=0SARbwvhupQ)
- [Yolg'iz qolish xavfli: Texnologiyada ko'rinmas monsterlarga qarshi kurash](https://www.youtube.com/watch?v=1i8ylq4j_EY)

## Video qo'llanmalar haqida


Ba'zi video darsliklarni faqat Coursera yoki EdX platformalari orqali ro'yxatdan o'tgan holda olish mumkin. 
Ular MOOC (ommaviy ochiq onlayn kurs) deb nomlanadi.
Ba'zan darslar sessiyada bo'lmaganligi sababli siz bir necha oy kutishingizga to'g'ri keladi.

    Bepul va har doim ham ochiq ommaviy manbalarni yaratishda o'z hissangizni qo'shishingizni xohlagan bo'lar edim. 
    Bu manbalar Youtube dagi video darsliklar ham bo'lishi mumkin. Masalan menga universitet 
    ma'ruzalaridan foydalanish yoqadi.    


## Suhbat jarayoni va intervyuga tayyorgarlik

- [ ] [2021 yilda injinerlik suhbatidan qanday o'tish mumkin?](https://davidbyttow.medium.com/how-to-pass-the-engineering-interview-in-2021-45f1b389a1)
- [ ] [Doskada kodlash(Whiteboarding)](https://medium.com/@dpup/whiteboarding-4df873dbba2e#.hf6jn45g1)
- [ ] [Demystifying Tech Recruiting](https://www.youtube.com/watch?v=N233T0epWTs)
- [ ] Qanday qilib "Big 4" kompaniyalariga ishga kirish mumkin:
    - [ ] [How to Get a Job at the Big 4 - Amazon, Facebook, Google & Microsoft (video)](https://www.youtube.com/watch?v=YJZCUhxNCv8)
    - [ ] [How to Get a Job at the Big 4.1 (Follow-up video)](https://www.youtube.com/watch?v=6790FVXWBw8&feature=youtu.be)
- [ ] Coding intervyuga tayyorlanish, to'plam 1:
    - [ ] [Gayle L McDowell - Cracking The Coding Interview (video)](https://www.youtube.com/watch?v=rEJzOhC5ZtQ)
    - [ ] [Cracking the Coding Interview with Author Gayle Laakmann McDowell (video)](https://www.youtube.com/watch?v=aClxtDcdpsQ)
- [ ] Facebook Coding Intervyusiga tayyorlanish:
    - [ ] [The Approach](https://www.youtube.com/watch?v=wCl9kvQGHPI)
    - [ ] [Problem Walkthrough](https://www.youtube.com/watch?v=4UWDyJq8jZg)
- [ ] Tayyorlanish uchun kurslar:
    - [ ] [Software Engineer Interview Unleashed (paid course)](https://www.udemy.com/software-engineer-interview-unleashed):
        - Google-ning sobiq interviewer-dan "software engineer" suhbatlariga qanday tayyorlanishni o'rganing.
    - [ ] [Python for Data Structures, Algorithms, and Interviews (paid course)](https://www.udemy.com/python-for-data-structures-algorithms-and-interviews/):
        - Ma'lumotlar tuzilmalari, algoritmlari, mock intervyular va boshqa ko'p ma'lumotlarni o'z ichiga oladigan Python markaziy intervyuga tayyorlash kursi
    - [ ] [Intro to Data Structures and Algorithms using Python (Udacity free course)](https://www.udacity.com/course/data-structures-and-algorithms-in-python--ud513):
        - Python-da ma'lumotlar tuzilmasi va algoritmlar haqida tekin kurs:
    - [ ] [Data Structures and Algorithms Nanodegree! (Udacity paid Nanodegree)](https://www.udacity.com/course/data-structures-and-algorithms-nanodegree--nd256):
        - 100 dan ortiq ma'lumotlar tuzilmalari va algoritmlarga oid mashqlari bilan amaliy mashg'ulotlarni olib boring va sizni intervyu jarayoniga tayyorlanishingizga yordam beradigan maxsus mentordan ko'rsatma oling.
    - [ ] [Grokking the Behavioral Interview (Educative free course)](https://www.educative.io/courses/grokking-the-behavioral-interview):
        - Ko'pincha orzuyingizdagi ish joyiga intervyudan o'tishingizda faqat texnik salohiyatingiz emas balki o'zingizni qanday tuta olishingiz, xulqingiz ham katta ahamiyatga ega.

## Intervyu uchun bitta dasturlash tilini tanlang

Intervyuning kodlash qismini bajarish uchun o'zingizga qulay bo'lgan dasturlash tilidan foydalanishingiz mumkin,
lekin yirik kompaniyalar quyida berilgan tillarning biridan foydalanishni talab qilishlari mumkin:

- C++
- Java
- Python

Shuningdek quyidagilarni ham ishlatishingiz mumkin:

- JavaScript
- Ruby

Quyida intervyu uchun dasturlash tilini tanlash haqida yozgan maqolam: [Pick One Language for the Coding Interview](https://startupnextdoor.com/important-pick-one-language-for-the-coding-interview/).
 
Siz intervyu uchun tanlagan dasturlash tilida erkin kod yoza oladigan va o'z bilimingizga ega bo'lishingiz kerak.

To'g'ri tanlov haqida ko'proq o'qishingiz uchun manbalar:
- http://www.byte-by-byte.com/choose-the-right-language-for-your-coding-interview/
- http://blog.codingforinterviews.com/best-programming-language-jobs/

[Dasturlash tillari bo'yicha manbalar](programming-language-resources.md)

Quyida berilgan kitoblar ro'yxatida o'zim o'rganayotgan C, C++, va Python ga oid manbalarni ko'rishingiz mumkin.

## Kitoblar ro'yxati

Bu sizning vaqtingizni tejash uchun men ishlatgan kitoblar ro'yxatining qisqartirilgan ko'rinishi.

### Intervyuga tayyorlanish

- [ ] [Programming Interviews Exposed: Coding Your Way Through the Interview, 4th Edition](https://www.amazon.com/Programming-Interviews-Exposed-Through-Interview/dp/111941847X/)
    - Javoblar (C++ va Java)
    - "Cracking the Coding Interview" kitobini boshlashdan oldin tayyorlanish uchun juda yaxshi manba 
    - Juda murakkab emas, hattoki masalalarning ko'pchiligi intervyuda uchraydigan masalalardan osonroq.
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - Java dasturlash tilida javoblar

### Agar sizda bo'sh vaqtingiz ko'p bo'lsa:

Quyidagi kitoblardan birini tanlashingiz mumkin:

- [ ] [Elements of Programming Interviews (C++ version)](https://www.amazon.com/Elements-Programming-Interviews-Insiders-Guide/dp/1479274836)
- [ ] [Elements of Programming Interviews in Python](https://www.amazon.com/Elements-Programming-Interviews-Python-Insiders/dp/1537713949/)
- [ ] Elements of Programming Interviews (Java versiyasi)
    - [book](https://www.amazon.com/Elements-Programming-Interviews-Java-Insiders/dp/1517435803/)
    - [Companion Project - Method Stub and Test Cases for Every Problem in the Book](https://github.com/gardncl/elements-of-programming-interviews)

### Dasturlash tiliga oid

**Yuqorida aytilganidek siz intervyu uchun bitta dasturlash tilini tanlashingiz kerak**

Mening tilga oid tavsiyalarim. Menda barcha tillar uchun resurslar yo'q shuning uchun sizda qo'shimcha ma'lumot bo'lsa tavsiya qilishingiz mumkin.
Agar siz bulardan birini o'qib chiqsangiz, masalalarni yechishda kerak bo'lgan barcha data strukturalar va algoritmlari bo'yicha bilimlarga ega bo'lishingiz kerak.
**Loyihadagi video resurslarni o'tkazib yuborishingiz mumkin**, agar ko'rib chiqishni xohlamasangiz.

[Tilga oid qo'shimcha resurslar.](programming-language-resources.md)

### C++

Men bularning ikkitasini o'qimaganman, lekin ular yuqori baholangan va Sedgewick tomonidan yozilgan. Sedgewick aka zo'rlar :)

- [ ] [Algorithms in C++, Parts 1-4: Fundamentals, Data Structure, Sorting, Searching](https://www.amazon.com/Algorithms-Parts-1-4-Fundamentals-Structure/dp/0201350882/)
- [ ] [Algorithms in C++ Part 5: Graph Algorithms](https://www.amazon.com/Algorithms-Part-Graph-3rd-Pt-5/dp/0201361183/)
- [ ] [Open Data Structures in C++](https://opendatastructures.org/ods-cpp.pdf)
    - Ma'lumotlar tuzilmasi va algoritmlarga oid boy va batafsil to'plam
    - Birinchi marta boshlayotganlar uchun juda mos

Agar sizda C++ bo'yicha yaxshiroq tavsiyalaringiz bo'lsa iltimos biz bilan baham ko'ring.

### Java

- [ ] [Algoritmlar (Sedgewick and Wayne)](https://www.amazon.com/Algorithms-4th-Robert-Sedgewick/dp/032157351X/)
    - Coursera dagi kitob tarkibi bilan videolar (va Sedgewick!):
        - [Algoritmlar I](https://www.coursera.org/learn/algorithms-part1)
        - [Algoritmlar II](https://www.coursera.org/learn/algorithms-part2)

Yoki:

- [ ] [Java da ma'lumotlar tuzilmasi va algoritmlar](https://www.amazon.com/Data-Structures-Algorithms-Michael-Goodrich/dp/1118771338/)
    - Goodrich, Tamassia, va Goldwasser tomonidan yozilgan      
    - UC Berkeley-dagi CS(Computer Science) kirish kursi uchun qo'shimcha kitob sifatida ishlatiladi
    - Quyida Python dasturlash kitobi uchun men qoldirgan izohlar bu kitobga ham tegishli.

### Python

- [ ] [Python da ma'lumotlar tuzilmasi va algoritmlar](https://www.amazon.com/Structures-Algorithms-Python-Michael-Goodrich/dp/1118290275/)
    - Goodrich, Tamassia, va Goldwasser tomonidan yozilgan
    - Menga bu kitob juda yoqdi. Bu juda ko'p ma'lumotlarni o'z ichiga olgan.
    - Pythonic kod
    - Mening bu kitob haqidagi izohim: https://startupnextdoor.com/book-report-data-structures-and-algorithms-in-python/
- [ ] [Python da Open Data strukturalari](https://opendatastructures.org/ods-python.pdf)

## O'rganishni boshlashdan oldin

Mazkur ro'yxat bir necha oylar davomida shakllanganligi sababli biroz qo'ldan chiqdi.
Bu yerda men ba'zi yo'l qo'ygan xatoliklar bor, bu esa sizlarga yaxshiroq tajriba orttirishingizga yordam beradi.

### 1. Bularning barchasini eslab qolmaysiz

Men soatlab videolar ko'rardim va eslatmalar yozib qo'yar edim, va bir necha oydan so'ng hammasini eslab qola olmas edim.
Men yozib olgan eslatmalarim va fleshkartalarim yordamida takrorlab chiqishim uchun 3 kun sarfladim. 

Men qilgan xatolarni siz ham takrorlamasligingiz uchun iltimos o'qib chiqing:

[Retaining Computer Science Knowledge](https://startupnextdoor.com/retaining-computer-science-knowledge/).

Menga tavsiya qilingan kurs (shaxsan o'zim ko'rib chiqmaganman): [Learning how to Learn](https://www.coursera.org/learn/learning-how-to-learn).

### 2. Fleshkartalar(kartochkalar) ishlating

Muammoni yechish uchun, men fleshkartalar uchun sayt yaratdim, u yerga 2 turdagi fleshkartalar joylanadi: umumiy eslatmalar va kod. 
Har bir karta o'z formatiga ega.

Vebsaytdan telefon yoki tabletdan ham xohlagan joyda foydalana olishim uchun mobil telefonga moslangan sayt yaratdim.

O'zingizni saytingizni ham tekinga yarating:

- [Fleshkartalar sayti uchun repo](https://github.com/jwasham/computer-science-flash-cards)
- [Mening fleshkartalarim bazasi (eski versiya - 1200 ta kartalar)](https://github.com/jwasham/computer-science-flash-cards/blob/main/cards-jwasham.db):
- [Mening fleshkartalarim bazasi(yangi versiya - 1800 ta kartalar)](https://github.com/jwasham/computer-science-flash-cards/blob/main/cards-jwasham-extreme.db):

Yodingizda bo'lsin, menda assembly language va Python triviyalaridan tortib, machine learning va statistikani o'z ichiga olgan kartalarim bor. Bu esa talab qilinadigan narsalardan ham ko'p hisoblanadi. 
(Ya'ni bularning barchasini siz bir vaqtda o'zlashtirgan bo'lishingiz shart emas)

**Fleshkartalardagi eslatmalar :** Birinchi marta fleshkartadagi javobni topa olganingizda uni o'zlashtirilganlar qatoriga qo'shmang. Aksincha huddi shu kartani 
ajratib qo'ying va bir necha marta javob bering toki haqiqatdan ham javobni anglab yetguningizgacha.
Takrorlash natijasida ma'lumot miyangizga chuqurroq joylashadi.
 

Fleshkartalar uchun bir necha marta menga tavsiya qilingan alternativ vebsayt [Anki](http://ankisrs.net/). 
Bu sizning eslab qolishingizga yordam berish uchun takrorlash sistemasini ishlatadi. 
Buni ishlatish qulay va barcha platformalarda mavjud va cloud bilan sinxronizatsiya qilingan. iOS platformalari uchun narxi $25, lekin boshqa platformalar uchun tekin.

Anki formatidagi mening fleshkartalarim bazasi: https://ankiweb.net/shared/info/25173560 ([@xiewenya](https://github.com/xiewenya) ga tashakkur).

### 3. Ma'lumotlar tuzilmalari va algoritmlarini o'rganish jarayonida coding intervyu savollariga javob topishni boshlang.

O'rganayotgan narsalaringizni masalalar yechishda qo'llab ketishingiz kerak, 
aks holda o'rganganlaringizni tez unutishingiz mumkin.
Shaxsan menda shunday bo'lgan. Biror bir mavzuni masalan bog'langan ro'yxatlar (linked lists) ga oid mavzuni 
o'rganganingizdan keyin agar o'zingizni shu mavzuda erkin 
his qilishni boshlasangiz coding intervyu kitoblaridan linked list ga oid masala yechishga urinib ko'ring.
So'ng, keyingi mavzuga o'ting. Bir qancha vaqtdan keyin yana ortga qaytib linked listga yoki 
rekursiyaga oid masala yeching. Asosiysi o'rganish jarayonida ko'proq masalalarni yechishda davom eting.
Sizni ishga bilimingiz uchun emas, bilimingizni qo'llay olishingiz uchun qabul qilishadi.
Men sizlarga tavsiya qiladigan kitoblar va saytlar bor. 
Ko'proq ko'rish uchun havolaga o'ting: [Coding bo'yicha savollar ustida ishlash](#coding-boyicha-savollar-ustida-ishlash).

### 4. Takrorlang, takrorlang va yana takrorlang

Menda ASCII, OSI stack, Big-O notations va boshqa mavzularda eslatma varaqlarim bor. 
Ularni biroz bo'sh vaqtim bo'lganda o'rganaman.

Masalalar yechish jarayonida biroz tanaffus oling va o'zingizni fleshkartalaringizni takrorlab chiqing.

### 5. Diqqatingizni bir joyga jamlang

Atrofimizda juda ko'p narsalar bizni chalg'itib qo'yadi va qimmatli vaqtimizni oladi.
Shuning uchun diqqatni jamlash va konsentratsiya qilish oson emas. Buning bir usuli,
matnsiz biron musiqa tinglang, bu esa diqqatingizni jamlashingizga yordam beradi.

## Bu proyekt nimalarni o'z ichiga olmaydi

Bular keng tarqalgan texnologiyalar lekin bu proyekt ularni o'z ichiga olmaydi:

- SQL
- Javascript
- HTML, CSS, va boshqa front-end texnologiyalar

## Kunlik reja

Bazi mavzular bir kun oladi, va bazilariga bir necha kunlar kerak bo'ladi. Bazilari faqat o'rganish, kod yozish kerak emas.

Har kuni bitta mavzu olib, videolarini ko'rib, quyidagi tillarda kodda yozib chiqaman:
- C - struct-lardan va struct * oladigan funksiyalarni ishlatgan holda
- C++ - built-in tiplarni ishlatmagan holda
- C++ - built-in tiplarni ishlatgan holda, masalan STL-ning std::list
- Python - built-in tiplarni ishlatgan holda (Python-ni mashq qilish uchun)
- va testlar yozgan holda (oddiy assert() ishlatib)
- siz Java yoki boshqa tilda qilishingiz mumkin

Sizga bularni hammasi kerak emas. Intervyu uchun sizga [faqat bitta til](#intervyu-uchun-bitta-dasturlash-tilini-tanlang) kerak.

Nega turlicha yozish kerak?
- Mashq, mashq, mashq, ko'nglim ayniguncha. Shunda muammosiz tushimda ham qila olaman.
- Past darajada (low level) yoza olish uchun (masalan, garbage collection ishlatmagan holda)
- Har kunlik ishda built-in tiplardan bemalol foydalana olish uchun (production-da array listni yoki linked listni boshidan yozib o'tirmaymanku)

Har bir mavzuni tepadagi tarzda o'qiyolmasligim mumkin, lekin harakat qilaman.

Meni kodlarimni bu yerda ko'rishingiz mumkin:
 - [C](https://github.com/jwasham/practice-c)
 - [C++](https://github.com/jwasham/practice-cpp)
 - [Python](https://github.com/jwasham/practice-python)

Har bir algoritmni ikr-chikirini eslab qolishingiz shart emas.

Birinchi kodizni doskada yoki qog'ozda yozing, kompyuterda emas. Og'zaki test qiling. Keyin kompyuterda yozib test qiling.

## Oldindan nima bilish kerak

- [ ] **C ni o'rganing**
    - C hamma yoqda. Siz C da yozilgan namuna kodlarni kitoblarda, ma'ruzalarda, videolarda, hamma yoqda uchratasiz
    - [ ] [The C Programming Language, Vol 2](https://www.amazon.com/Programming-Language-Brian-W-Kernighan/dp/0131103628)
        - Bu qisqacha kitob, lekin C ni sizga ancha o'rgatadi va agar ozgina mashq qilsangiz tezda mohir bo'lib ketasiz.
            C ni tushunish - dasturlar va xotira qanday ishlashini tushunishga yordam beradi
        - [Savollarga javoblar](https://github.com/lekkas/c-algorithms)

- [ ] **Kompyuterlar dasturni qanday boshqarishadi**
    - [ ] [How CPU executes a program (video)](https://www.youtube.com/watch?v=XM4lGflQFvA)
    - [ ] [How computers calculate - ALU (video)](https://youtu.be/1I5ZMmrOfnA)
    - [ ] [Registers and RAM (video)](https://youtu.be/fpnE6UAfbtU)
    - [ ] [The Central Processing Unit (CPU) (video)](https://youtu.be/FZGugFqdr60)
    - [ ] [Instructions and Programs (video)](https://youtu.be/zltgXvg6r3k)

## Algoritmik murakkablik / Big-O / Asimtotik tahlil

- Kodda yozadigan narsa yo'q
- Bu yerda ko'p videolar bor. Tushunguningizgacha ko'ring. Har doim qayta ko'rib chiqishingiz mumkin.
- Agar bazi ma'ruzalarda murakkab matematika ishlatilsa, pastgi qismga tushib diskret matematika videolarini ko'rib chiqishingiz mumkin
- [ ] [Harvard CS50 - Asymptotic Notation (video)](https://www.youtube.com/watch?v=iOq5kSKqeR4)
- [ ] [Big O Notations (umumiy qisqacha tutorial) (video)](https://www.youtube.com/watch?v=V6mKVRU1evU)
- [ ] [Big O Notation (and Omega and Theta) - eng yaxshi matematik tushuntirish (video)](https://www.youtube.com/watch?v=ei-A_wy5Yxw&index=2&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [ ] Skiena:
    - [video](https://www.youtube.com/watch?v=gSyDMtdPNpU&index=2&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [slaydlar](https://archive.org/details/lecture2_202008)
- [ ] [A Gentle Introduction to Algorithm Complexity Analysis](http://discrete.gr/complexity/)
- [ ] [Orders of Growth (video)](https://www.coursera.org/lecture/algorithmic-thinking-1/orders-of-growth-6PKkX)
- [ ] [Asymptotics (video)](https://www.coursera.org/lecture/algorithmic-thinking-1/asymptotics-bXAtM)
- [ ] [UC Berkeley Big O (video)](https://archive.org/details/ucberkeley_webcast_VIS4YDpuP98)
- [ ] [UC Berkeley Big Omega (video)](https://archive.org/details/ucberkeley_webcast_ca3e7UVmeUc)
- [ ] [Amortized Analysis (video)](https://www.youtube.com/watch?v=B3SpQZaAZP4&index=10&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [ ] [Illustrating "Big O" (video)](https://www.coursera.org/lecture/algorithmic-thinking-1/illustrating-big-o-YVqzv)
- [ ] TopCoder (recurrence relation-larni va master teoremani o'z ichiga oladi):
    - [Computational Complexity: Section 1](https://www.topcoder.com/community/competitive-programming/tutorials/computational-complexity-section-1/)
    - [Computational Complexity: Section 2](https://www.topcoder.com/community/competitive-programming/tutorials/computational-complexity-section-2/)
- [ ] [Cheat varaq](http://bigocheatsheet.com/)

## Ma'lumotlar tuzilmasi (Data structures)

- ### Massivlar
    - Avtomatik ravishda o'lchamlarini o'zgartiradigan vektorni amalga oshirish.
    - [ ] Tavsif:
        - [Massivlar (video)](https://www.coursera.org/lecture/data-structures/arrays-OsBSF)
        - [UC Berkeley CS61B - Chiziqli va ko'p o'lchovli massivlar(video)](https://archive.org/details/ucberkeley_webcast_Wp8oiO_CZZE) (15:32 sekunddan boshlab ko'rishni boshlang)
        - [Dinamik massivlar (video)](https://www.coursera.org/lecture/data-structures/dynamic-arrays-EwbnV)
        - [Jagged Arrays (video)](https://www.youtube.com/watch?v=1jtrQqYpt7g)
    - [ ] Vektorni bajaring (o'lchamini o'zgartiradigan massiv):
        - [ ] Massivlar va ko'rsatgichlar(pointerlar) yordamida kod yozishni mashq qiling va massivning indeksiga o'tish uchun indeks o'rniga pointer matematikasini ishlating.
        - [ ] Massivimiz elementlarini ushlab turadigan ichki (private) massiv
            - int massivni elementlarni saqlash uchun ishlatsak bo'ladi, faqat uning xususiyatlaridan foydalanmaslik kerak
            - 16 dan boshlang, agar boshlanayotgan son kattaroq bo'lsa 2 ning darajalarini ishlating(2 - 16, 32, 64, 128)
        - [ ] size() - massivdagi elementlar soni
        - [ ] capacity() - massiv o'z ichiga olishi mumkin bo'lgan elementlar soni
        - [ ] is_empty() - massiv bo'sh yoki yo'qligini tekshirish
        - [ ] at(index) - ko'rsatilgan indeksdagi massiv elementini qaytaradi. 
          Agar berilgan index massiv indekslaridan tashqarida bo'lsa xatolik qaytaradi.
        - [ ] push(item)
        - [ ] insert(index, item) - ko'rsatilgan indeksga elementni qo'shadi, indeksdagi eski element(lar)ni esa o'zidan o'ngga ko'chiradi 
        - [ ] prepend(item) - Massivning birinchi elementidan oldin yangi element qo'shish
        - [ ] pop() - Massivning oxirgi elementini o'chiradi va o'chirilgan elementni qaytaradi.
        - [ ] delete(index) - Massiv elementini index bo'yicha o'chiradi, Qolgan elementlar chapga ko'chiriladi
        - [ ] remove(item) - Berilgan qiymatni izlaydi va shu qiymatga ega index-larni barchasini o'chiradi
        - [ ] find(item) - Berilgan qiymatni izlaydi va shu qiymatga ega birinchi index-ni qaytaradi, agar topilmasa -1 qaytaradi
        - [ ] resize(new_capacity) // private function
            - Massiv hajmi to'lganda, uni ikki baravar oshirish uchun o'lchamini o'zgartiring
            - Massivda element olib tashlanganda, agar hajmi umumiy hajmning 1/4 ga teng bo'lsa, hajmini yarimiga o'zgartiring
    - [ ] Ish vaqt xarajati (Time)
        - O(1) Oxiriga qo'shish yoki olib tashlash (ko'proq joy ajratish uchun amortizatsiya qilingan), index, yoki o'zgartirish
        - O(n) boshqa joyga qo'shish yoki olib tashlash
    - [ ] Ish joy xarajati (Space)
        - elementlar xotirada yonma yon joylashgan, shuning uchun yaqinlik yordam beradi 
        - bo'sh joy kerak = (massiv hajmi >= n) * element hajmi, agar 2n bo'lsa ham O(n) hisoblanadi

- ### Linked Lists (O'zaro bog'langan ro'yxatlar)
    - [ ] Tavsif:
        - [ ] [Singly Linked Lists (video)](https://www.coursera.org/lecture/data-structures/singly-linked-lists-kHhgK)
        - [ ] [CS 61B - Linked Lists 1 (video)](https://archive.org/details/ucberkeley_webcast_htzJdKoEmO0)
        - [ ] [CS 61B - Linked Lists 2 (video)](https://archive.org/details/ucberkeley_webcast_-c4I3gFYe3w)
    - [ ] [C Code (video)](https://www.youtube.com/watch?v=QN6FPiD0Gzo)
            - butun videoni ko'rmang, Node struct va xotira ajratish (memory allocation) qismlarini ko'ring
    - [ ] Linked List va Array(massiv)lar:
        - [Core Linked Lists Vs Arrays (video)](https://www.coursera.org/lecture/data-structures-optimizing-performance/core-linked-lists-vs-arrays-rjBs9)
        - [In The Real World Linked Lists Vs Arrays (video)](https://www.coursera.org/lecture/data-structures-optimizing-performance/in-the-real-world-lists-vs-arrays-QUaUd)
    - [ ] [nega linked list-dan foydalanmaganingiz maqul (video)](https://www.youtube.com/watch?v=YQs6IC-vgmo)
    - [ ] Yodda tuting: siz "pointer to pointer" nimaligini tushuningiz kerak:
        (funksiyaga pointer berilganda, funksiya pointer ko'rsatib turgan adresni o'zgartirishi mumkin)
        Bu sahifa "pointer to pointer" ni tushinish uchun foydali. Lekin bunday list traversal stilini tavsiya etmayman chunki kodni o'qish va uni maintain qilish qiyin.
        - [Pointers to Pointers](https://www.eskimo.com/~scs/cclass/int/sx8.html)
    - [ ] Kodda yozaman (tail pointer va tail pointer-siz):
        - [ ] size() - listdagi elementlar sonini qaytaradi
        - [ ] empty() - agar list bo'sh bo'lsa true qaytaradi
        - [ ] value_at(index) - n-inchi elementning qiymatini qaytaradi (0 dan boshlab)
        - [ ] push_front(value) - listning boshiga element qo'shadi
        - [ ] pop_front() - birinchi elementni olib tashlab va uni qiymatini qaytaradi
        - [ ] push_back(value) - oxiriga element qo'shadi
        - [ ] pop_back() - oxirgi elementni olib tashlab va uni qiymatini qaytaradi
        - [ ] front() - birinchi elementni qiymatini qaytaradi
        - [ ] back() - oxirgi elementni qiymatini qaytaradi
        - [ ] insert(index, value) - index-ni joyiga value-ni joylashtiradi
        - [ ] erase(index) - index joyida turgan elementni o'chirib tashlaydi
        - [ ] value_n_from_end(n) - oxiridan sanaganda n-inchi elementni qiymatini qaytaradi
        - [ ] reverse() - listni teskari safga qo'yadi
        - [ ] remove_value(value) - value qiymatiga ega bo'lgan birinchi elementni o'chirib tashlaydi
    - [ ] Doubly-linked List
        - [Tavsif (video)](https://www.coursera.org/lecture/data-structures/doubly-linked-lists-jpGKD)
        - Kodda yozish shart emas

- ### Stack
    - [ ] [Stacks (video)](https://www.coursera.org/lecture/data-structures/stacks-UdKzQ)
    - [ ] Kodda yozmayman. Massivda stackni yaratish juda oson.

- ### Queue
    - [ ] [Queue (video)](https://www.coursera.org/lecture/data-structures/queues-EShpq)
    - [ ] [Circular buffer/FIFO](https://en.wikipedia.org/wiki/Circular_buffer)
    - [ ] linked-list dan foydalangan holda kodda yozaman (tail pointer bilan):
        - enqueue(value) - qiymatni queue-ni oxiriga qo'yadi
        - dequeue() - queue-ni boshidagi elementni o'chirib uni qiymatini qaytaradi
        - empty()
    - [ ] belgilangan o'lchamli massivdan foydalangan holda kodda yozaman:
        - enqueue(value) - mavjud xotirani oxiriga qiymatni qo'yadi
        - dequeue() - queue-ni boshidagi elementni o'chirib uni qiymatini qaytaradi
        - empty()
        - full()
    - [ ] Ish xarajati:
        - queue uchun linked-list ishlatib, list boshiga enqueue qilish va oxiridan dequeue qilish - bu yomon yondashuv. Chunki har safar dequeue qilinganda O(n) vaqt ketadi
        - enqueue: O(1) (amortized, linked list va massiv [probing])
        - dequeue: O(1) (linked list va massiv)
        - empty: O(1) (linked list va massiv)

- ### Hash table
    - [ ] Videolar:
        - [ ] [Hashing with Chaining (video)](https://www.youtube.com/watch?v=0M_kIqhwbFo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=8)
        - [ ] [Table Doubling, Karp-Rabin (video)](https://www.youtube.com/watch?v=BRO7mVIFt08&index=9&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [ ] [Open Addressing, Cryptographic Hashing (video)](https://www.youtube.com/watch?v=rvdJDijO2Ro&index=10&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [ ] [PyCon 2010: The Mighty Dictionary (video)](https://www.youtube.com/watch?v=C4Kc8xzcA68)
        - [ ] [(Advanced) Randomization: Universal & Perfect Hashing (video)](https://www.youtube.com/watch?v=z0lJ2k0sl1g&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=11)
        - [ ] [(Advanced) Perfect hashing (video)](https://www.youtube.com/watch?v=N0COwN14gt0&list=PL2B4EEwhKD-NbwZ4ezj7gyc_3yNrojKM9&index=4)

    - [ ] Onlayn kurslar:
        - [ ] [Core Hash Tables (video)](https://www.coursera.org/lecture/data-structures-optimizing-performance/core-hash-tables-m7UuP)
        - [ ] [Data Structures (video)](https://www.coursera.org/learn/data-structures/home/week/4)
        - [ ] [Phone Book Problem (video)](https://www.coursera.org/lecture/data-structures/phone-book-problem-NYZZP)
        - [ ] tarqatilgan (distributed) hash table:
            - [Instant Uploads And Storage Optimization In Dropbox (video)](https://www.coursera.org/lecture/data-structures/instant-uploads-and-storage-optimization-in-dropbox-DvaIb)
            - [Distributed Hash Tables (video)](https://www.coursera.org/lecture/data-structures/distributed-hash-tables-tvH8H)

    - [ ] 'Linear probing' ishlatgan holda amalga oshirish (massiv bilan)
        - hash(k, m) - m bu hash table-ning o'lchami
        - add(key, value) - agar key mavjud bo'lsa, qiymatini yangilaydi
        - exists(key)
        - get(key)
        - remove(key)

## Qo'shimcha bilimlar

- ### Binary search
    - [ ] [Binary Search (video)](https://www.youtube.com/watch?v=D5SrAga1pno)
    - [ ] [Binary Search (video)](https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search)
    - [ ] [batafsil](https://www.topcoder.com/community/competitive-programming/tutorials/binary-search/)
    - [ ] Kodda yozish:
        - binary search (tartiblangan integer massivlarida)
        - rekursiv binary search

- ### Bitwise operatsiyalari
    - [ ] [Bits cheat sheet](https://github.com/jwasham/coding-interview-university/blob/main/extras/cheat%20sheets/bits-cheat-sheet.pdf) - siz ikkining ko'p darajalarini bilishingiz kerak (2^1 dan 2^16 gacha va 2^32)
    - [ ] Quyidagi operatorlar bilan bitlarni bo'shqarishni yaxshi bilishingiz kerak: &, |, ^, ~, >>, <<
        - [ ] [words](https://en.wikipedia.org/wiki/Word_(computer_architecture))
        - [ ] Yaxshi kirish:
            [Bit Manipulation (video)](https://www.youtube.com/watch?v=7jkIUgLC29I)
        - [ ] [C Programming Tutorial 2-10: Bitwise Operators (video)](https://www.youtube.com/watch?v=d0AwjSpNXR0)
        - [ ] [Bit Manipulation](https://en.wikipedia.org/wiki/Bit_manipulation)
        - [ ] [Bitwise Operation](https://en.wikipedia.org/wiki/Bitwise_operation)
        - [ ] [Bithacks](https://graphics.stanford.edu/~seander/bithacks.html)
        - [ ] [The Bit Twiddler](https://bits.stephan-brumme.com/)
        - [ ] [The Bit Twiddler Interactive](https://bits.stephan-brumme.com/interactive.html)
        - [ ] [Bit Hacks (video)](https://www.youtube.com/watch?v=ZusiKXcz_ac)
		- [ ] [Practice Operations](https://pconrad.github.io/old_pconrad_cs16/topics/bitOps/)
    - [ ] 2 va 1 ning komplementlari
        - [Binary: Plusses & Minuses (Why We Use Two's Complement) (video)](https://www.youtube.com/watch?v=lKTsv6iVxV4)
        - [1s Complement](https://en.wikipedia.org/wiki/Ones%27_complement)
        - [2s Complement](https://en.wikipedia.org/wiki/Two%27s_complement)
    - [ ] 1ga teng bo'lgan bitlarni sanash
        - [4 ways to count bits in a byte (video)](https://youtu.be/Hzuzo9NJrlc)
        - [Count Bits](https://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetKernighan)
        - [How To Count The Number Of Set Bits In a 32 Bit Integer](http://stackoverflow.com/questions/109023/how-to-count-the-number-of-set-bits-in-a-32-bit-integer)
    - [ ] Qiymatlarni almashtirish:
        - [Swap](https://bits.stephan-brumme.com/swap.html)
    - [ ] Absolyut qiymat:
        - [Absolute Integer](https://bits.stephan-brumme.com/absInteger.html)

## Trees (daraxtlar)

- ### Trees - Eslatmalar & Kelib chiqishi
    - [ ] [Series: Trees (video)](https://www.coursera.org/lecture/data-structures/trees-95qda)
    - tree-ning asosiy tuzilmasi
    - traversal (o'tish)
    - manipulyatsiya algoritmlari
    - [ ] [BFS(breadth-first search) va DFS(depth-first search) (video)](https://www.youtube.com/watch?v=uWL6FJhq5fM)
        - BFS eslatmalari:
           - level order (BFS, queue ishlatgan holda)
           - ish vaqti xarajati (time complexity): O(n)
           - ish joyi xarajati (space complexity): eng yaxshisi: O(1), eng yomoni: O(n/2)=O(n)
        - DFS eslatmalari:
            - ish vaqti xarajati: O(n)
            - ish joyi xarajati:
                eng yaxshisi: O(log n) - tree ning o'rtacha balandligi
                eng yomoni: O(n)
            - inorder (DFS: left, self, right)
            - postorder (DFS: left, right, self)
            - preorder (DFS: self, left, right)

- ### Binary search tree lar: BST lar
    - [ ] [Binary Search Tree Tahlili (video)](https://www.youtube.com/watch?v=x6At0nzX92o&index=1&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)    
    - [ ] [Kirish (video)](https://www.coursera.org/learn/data-structures/lecture/E7cXP/introduction)
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
    - [ ] Kodda yozish:
        - [ ] insert    // qiymatni treega joylaydi
        - [ ] get_node_count // treedagi elementlar sonini qaytaradi
        - [ ] print_values // treedagi hamma qiymatlarini, min-dan max-gacha, yozib chiqaradi
        - [ ] delete_tree
        - [ ] is_in_tree // true qaytaradi agar qiymat treeda mavjud bo'lsa
        - [ ] get_height // treeni balandligini qaytaradi (bitta node-ning balandligi 1 hisoblanadi)
        - [ ] get_min   // treedagi minimum qiymatni qaytaradi
        - [ ] get_max   // treedagi maximum qiymatni qaytaradi
        - [ ] is_binary_search_tree
        - [ ] delete_value
        - [ ] get_successor // berilgan qiymatdan keyingi katta qiymatni qaytaradi, agar bunday qiymat bo'lmasa -1 qaytaradi

- ### Heap / Priority Queue / Binary Heap
    - tree (daraxt) dek tasvirlansada, xotirada ketma ket tarzida saqlanadi (massiv, linked list)
    - [ ] [Heap](https://en.wikipedia.org/wiki/Heap_(data_structure))
    - [ ] [Introduction (video)](https://www.coursera.org/learn/data-structures/lecture/2OpTs/introduction)
    - [ ] [Naive Implementations (video)](https://www.coursera.org/learn/data-structures/lecture/z3l9N/naive-implementations)
    - [ ] [Binary Trees (video)](https://www.coursera.org/learn/data-structures/lecture/GRV2q/binary-trees)
    - [ ] [Tree Height Remark (video)](https://www.coursera.org/learn/data-structures/supplement/S5xxz/tree-height-remark)
    - [ ] [Basic Operations (video)](https://www.coursera.org/learn/data-structures/lecture/0g1dl/basic-operations)
    - [ ] [Complete Binary Trees (video)](https://www.coursera.org/learn/data-structures/lecture/gl5Ni/complete-binary-trees)
    - [ ] [Pseudocode (video)](https://www.coursera.org/learn/data-structures/lecture/HxQo9/pseudocode)
    - [ ] [Heap Sort - boshiga sakraydi (video)](https://youtu.be/odNJmw5TOEE?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3291)
    - [ ] [Heap Sort (video)](https://www.coursera.org/learn/data-structures/lecture/hSzMO/heap-sort)
    - [ ] [Building a heap (video)](https://www.coursera.org/learn/data-structures/lecture/dwrOS/building-a-heap)
    - [ ] [MIT: Heaps and Heap Sort (video)](https://www.youtube.com/watch?v=B7hVxCmfPtM&index=4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [CS 61B Lecture 24: Priority Queues (video)](https://archive.org/details/ucberkeley_webcast_yIUFT6AKBGE)
    - [ ] [Linear Time BuildHeap (max-heap)](https://www.youtube.com/watch?v=MiyLo8adrWw)
    - [ ] max-heap ni kodda yozish:
        - [ ] insert
        - [ ] sift_up - insert operatsiyasi uchun kerak
        - [ ] get_max - o'chirmagan holda, max elementni qaytaradi
        - [ ] get_size() - mavjud elementlar sonini qaytaradi
        - [ ] is_empty() - true qaytaradi agar heap bo'sh bo'lsa
        - [ ] extract_max - o'chirgan holda, max elementni qaytaradi
        - [ ] sift_down - extract_max operatsiyasi uchun kerak
        - [ ] remove(i) - x indeksda joylashgan elementni o'chiradi
        - [ ] heapify - massivdan heap yaratadi, heap_sort operatsiyasi uchun kerak
        - [ ] heap_sort() - tartiblanmagan massivni olib, max heap yoki min heap dan foydalangan holda uni joyida tartiblangan massivga aylantiradi

## Sorting (Saralash)

- [ ] Eslatmalar:
        - sorting bilan ishlang va eng yaxshi/eng yomon holatlarni, har birining o'rtacha murakkabligini biling:
        - bubble sort ishlatmang - agar n <= 16 bo'lmasa, O(n^2)-bu juda yomon
        - [ ] Algoritmlarni saralashdagi barqarorlik (stability) ("Quicksort barqarormi?")
        - [Sorting Algorithm Stability](https://en.wikipedia.org/wiki/Sorting_algorithm#Stability)
        - [Stability In Sorting Algorithms](http://stackoverflow.com/questions/1517793/stability-in-sorting-algorithms)
        - [Stability In Sorting Algorithms](http://www.geeksforgeeks.org/stability-in-sorting-algorithms/)
        - [Sorting Algorithms - Stability](http://homepages.math.uic.edu/~leon/cs-mcs401-s08/handouts/stability.pdf)
    - [ ] Linked list-da qaysi algoritmlardan foydalanish mumkin? Qaysi massivlarda? Qaysilarini ikkalasida ham ishlatsa bo'ladi?
        - Men linked listni saralashni maslahat bermayman, lekin merge tartiblash algoritmini qilsa bo'ladi.
        - [Merge Sort For Linked List](http://www.geeksforgeeks.org/merge-sort-for-linked-list/)

- Heapsort uchun yuqorida berilgan ma'lumotlar tuzilmasini ko'ring, Heap sort ajoyib lekin barqaror emas.

- [ ] [Sedgewick - Mergesort (5 videos)](https://www.coursera.org/learn/algorithms-part1/home/week/3)
    - [ ] [1. Mergesort](https://www.coursera.org/learn/algorithms-part1/lecture/ARWDq/mergesort)
    - [ ] [2. Bottom up Mergesort](https://www.coursera.org/learn/algorithms-part1/lecture/PWNEl/bottom-up-mergesort)
    - [ ] [3. Sorting Complexity](https://www.coursera.org/learn/algorithms-part1/lecture/xAltF/sorting-complexity)
    - [ ] [4. Comparators](https://www.coursera.org/learn/algorithms-part1/lecture/9FYhS/comparators)
    - [ ] [5. Stability](https://www.coursera.org/learn/algorithms-part1/lecture/pvvLZ/stability)

- [ ] [Sedgewick - Quicksort (4 videos)](https://www.coursera.org/learn/algorithms-part1/home/week/3)
    - [ ] [1. Quicksort](https://www.coursera.org/learn/algorithms-part1/lecture/vjvnC/quicksort)
    - [ ] [2. Selection](https://www.coursera.org/learn/algorithms-part1/lecture/UQxFT/selection)
    - [ ] [3. Duplicate Keys](https://www.coursera.org/learn/algorithms-part1/lecture/XvjPd/duplicate-keys)
    - [ ] [4. System Sorts](https://www.coursera.org/learn/algorithms-part1/lecture/QBNZ7/system-sorts)

- [ ] UC Berkeley:
    - [ ] [CS 61B Lecture 29: Sorting I (video)](https://archive.org/details/ucberkeley_webcast_EiUvYS2DT6I)
    - [ ] [CS 61B Lecture 30: Sorting II (video)](https://archive.org/details/ucberkeley_webcast_2hTY3t80Qsk)
    - [ ] [CS 61B Lecture 32: Sorting III (video)](https://archive.org/details/ucberkeley_webcast_Y6LOLpxg6Dc)
    - [ ] [CS 61B Lecture 33: Sorting V (video)](https://archive.org/details/ucberkeley_webcast_qNMQ4ly43p4)

- [ ] [Bubble Sort (video)](https://www.youtube.com/watch?v=P00xJgWzz2c&index=1&list=PL89B61F78B552C1AB)
- [ ] [Analyzing Bubble Sort (video)](https://www.youtube.com/watch?v=ni_zk257Nqo&index=7&list=PL89B61F78B552C1AB)
- [ ] [Insertion Sort, Merge Sort (video)](https://www.youtube.com/watch?v=Kg4bqzAqRBM&index=3&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
- [ ] [Insertion Sort (video)](https://www.youtube.com/watch?v=c4BRHC7kTaQ&index=2&list=PL89B61F78B552C1AB)
- [ ] [Merge Sort (video)](https://www.youtube.com/watch?v=GCae1WNvnZM&index=3&list=PL89B61F78B552C1AB)
- [ ] [Quicksort (video)](https://www.youtube.com/watch?v=y_G9BkAm6B8&index=4&list=PL89B61F78B552C1AB)
- [ ] [Selection Sort (video)](https://www.youtube.com/watch?v=6nDMgr0-Yyo&index=8&list=PL89B61F78B552C1AB)

- [ ] Merge sort kodda:
    - [ ] [Using output array (C)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/sorting/mergesort.c)
    - [ ] [Using output array (Python)](https://github.com/jwasham/practice-python/blob/master/merge_sort/merge_sort.py)
    - [ ] [In-place (C++)](https://github.com/jwasham/practice-cpp/blob/master/merge_sort/merge_sort.cc)
- [ ] Quick sort uchun kod:
    - [ ] [Implementation (C)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/randomization/quick.c)
    - [ ] [Implementation (C)](https://github.com/jwasham/practice-c/blob/master/quick_sort/quick_sort.c)
    - [ ] [Implementation (Python)](https://github.com/jwasham/practice-python/blob/master/quick_sort/quick_sort.py)

- [ ] Kodda yozish:
    - [ ] Mergesort: O(n log n) o'rtacha va eng yomon holat
    - [ ] Quicksort O(n log n) o'rtacha
    - Selection sort va insertion sort-larning ikkalalarini ham o'rtacha va eng yomon holati O(n^2) bo'ladi
    - Heapsort uchun yuqoridagi Heap ma'lumotlar tuzilmasini ko'ring

- [ ] Quyidagilar talab qilinmaydi lekin shaxsan men ularni tavsiya qilaman:
    - [ ] [Sedgewick - Radix Sorts (6 ta video)](https://www.coursera.org/learn/algorithms-part2/home/week/3)
        - [ ] [1. Strings in Java](https://www.coursera.org/learn/algorithms-part2/lecture/vGHvb/strings-in-java)
        - [ ] [2. Key Indexed Counting](https://www.coursera.org/learn/algorithms-part2/lecture/2pi1Z/key-indexed-counting)
        - [ ] [3. Least Significant Digit First String Radix Sort](https://www.coursera.org/learn/algorithms-part2/lecture/c1U7L/lsd-radix-sort)
        - [ ] [4. Most Significant Digit First String Radix Sort](https://www.coursera.org/learn/algorithms-part2/lecture/gFxwG/msd-radix-sort)
        - [ ] [5. 3 Way Radix Quicksort](https://www.coursera.org/learn/algorithms-part2/lecture/crkd5/3-way-radix-quicksort)
        - [ ] [6. Suffix Arrays](https://www.coursera.org/learn/algorithms-part2/lecture/TH18W/suffix-arrays)
    - [ ] [Radix Sort](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#radixSort)
    - [ ] [Radix Sort (video)](https://www.youtube.com/watch?v=xhr26ia4k38)
    - [ ] [Radix Sort, Counting Sort (linear time given constraints) (video)](https://www.youtube.com/watch?v=Nz1KZXbghj8&index=7&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [Randomization: Matrix Multiply, Quicksort, Freivalds' algorithm (video)](https://www.youtube.com/watch?v=cNB2lADK3_s&index=8&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [Sorting in Linear Time (video)](https://www.youtube.com/watch?v=pOKy3RZbSws&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=14)

Vizual tarzda ma'lumot olish uchun [15 ta saralash algoritmlari](https://www.youtube.com/watch?v=kPRA0W1kECg).
Agar sizga ushbu mavzu bo'yicha batafsil ma'lumot kerak bo'lsa, "Saralash" bo'limiga qarang [Ba'zi mavzular bo'yicha qo'shimcha ma'lumotlar](#bazi-mavzular-boyicha-qoshimcha-malumotlar)

## Graflar

Computer science da graflar bir talay masalalarni tasvirlashda ishlatiladi. Shuning uchun tree va tartiblash algoritmlari kabi bu qism yetarlicha uzun
- Eslatmalar:
    - grafni xotirada ushlashni 4ta asosiy yo'li bor:
        - obyektlar va pointerlar
        - adjacency matritsa
        - adjacency list
        - adjacency map
    - Har bir usulni va ularni yaxshi & yomon tomonlarini o'rganib chiqing
    - BFS va DFS - bu algoritmlarini tezligini (time & space complexity), yaxshi & yomon tomonlarini, va ularni kodda yozishni biling
    - Masala berilganda, birinchi grafga asoslangan yechim qidiring. Bunday yechim ko'rmasangiz, boshqa yechimlarni qidiring

- [ ] MIT(videolar):
    - [ ] [Breadth-First Search](https://www.youtube.com/watch?v=s-CYnVz-uh4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=13)
    - [ ] [Depth-First Search](https://www.youtube.com/watch?v=AfSk24UTFS8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=14)

- [ ] Skiena ma'ruzalari - ajoyib kirish:
    - [ ] [CSE373 2012 - Lecture 11 - Graph Data Structures (video)](https://www.youtube.com/watch?v=OiXxhDrFruw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=11)
    - [ ] [CSE373 2012 - Lecture 12 - Breadth-First Search (video)](https://www.youtube.com/watch?v=g5vF8jscteo&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=12)
    - [ ] [CSE373 2012 - Lecture 13 - Graph Algorithms (video)](https://www.youtube.com/watch?v=S23W6eTcqdY&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=13)
    - [ ] [CSE373 2012 - Lecture 14 - Graph Algorithms (con't) (video)](https://www.youtube.com/watch?v=WitPBKGV0HY&index=14&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [CSE373 2012 - Lecture 15 - Graph Algorithms (con't 2) (video)](https://www.youtube.com/watch?v=ia1L30l7OIg&index=15&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [CSE373 2012 - Lecture 16 - Graph Algorithms (con't 3) (video)](https://www.youtube.com/watch?v=jgDOQq6iWy8&index=16&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)

- [ ] Graflar (tahlil va boshqa ko'p narsalar):

    - [ ] [6.006 Single-Source Shortest Paths Problem (video)](https://www.youtube.com/watch?v=Aa2sqUhIn-E&index=15&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [6.006 Dijkstra (video)](https://www.youtube.com/watch?v=2E7MmKv0Y24&index=16&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [6.006 Bellman-Ford (video)](https://www.youtube.com/watch?v=ozsuci5pIso&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=17)
    - [ ] [6.006 Speeding Up Dijkstra (video)](https://www.youtube.com/watch?v=CHvQ3q_gJ7E&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=18)
    - [ ] [Aduni: Graph Algorithms I - Topological Sorting, Minimum Spanning Trees, Prim's Algorithm -  Lecture 6 (video)]( https://www.youtube.com/watch?v=i_AQT_XfvD8&index=6&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
    - [ ] [Aduni: Graph Algorithms II - DFS, BFS, Kruskal's Algorithm, Union Find Data Structure - Lecture 7 (video)]( https://www.youtube.com/watch?v=ufj5_bppBsA&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=7)
    - [ ] [Aduni: Graph Algorithms III: Shortest Path - Lecture 8 (video)](https://www.youtube.com/watch?v=DiedsPsMKXc&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=8)
    - [ ] [Aduni: Graph Alg. IV: Intro to geometric algorithms - Lecture 9 (video)](https://www.youtube.com/watch?v=XIAQRlNkJAw&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=9)
    - [ ] ~~[CS 61B 2014 (starting at 58:09) (video)](https://youtu.be/dgjX4HdMI-Q?list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&t=3489)~~
    - [ ] [CS 61B 2014: Weighted graphs (video)](https://archive.org/details/ucberkeley_webcast_zFbq8vOZ_0k)
    - [ ] [Greedy Algorithms: Minimum Spanning Tree (video)](https://www.youtube.com/watch?v=tKwnms5iRBU&index=16&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [Strongly Connected Components Kosaraju's Algorithm Graph Algorithm (video)](https://www.youtube.com/watch?v=RpgcYiky7uw)

- To'liq Coursera kursi:
    - [ ] [Algorithms on Graphs (video)](https://www.coursera.org/learn/algorithms-on-graphs/home/welcome)

- Kodda yozaman:
    - [ ] DFS, adjacency list bilan (recursive)
    - [ ] DFS, adjacency list bilan (iterative, stackdan foydalangan holda)
    - [ ] DFS, adjacency matritsa bilan (recursive)
    - [ ] DFS, adjacency matritsa bilan (iterative, stackdan foydalangan holda)
    - [ ] BFS, adjacency list bilan
    - [ ] BFS, adjacency matritsa bilan
    - [ ] single-source shortest path (Dijkstra)
    - [ ] minimum spanning tree
    - DFS-ga asoslangan algoritmlar (Aduni videolarini tepada ko'ring):
        - [ ] cycle borligini tekshirish (topological sort uchun kerak, chunki boshlashdan oldin cycle bor yoki yo'qligini tekshiramiz)
        - [ ] topological sort
        - [ ] grafdagi bog'liq componentlarni sanash (connected components)
        - [ ] mustahkam bog'liq componentlarni sanash (strongly connected components)
        - [ ] bipartite grafni aniqlash

## Yanada ko'proq bilim

- ### Rekursiya
    - [ ] rekursiya & backtracking-ga oid Stanford ma'ruzalari:
        - [ ] [Lecture 8 | Programming Abstractions (video)](https://www.youtube.com/watch?v=gl3emqCuueQ&list=PLFE6E58F856038C69&index=8)
        - [ ] [Lecture 9 | Programming Abstractions (video)](https://www.youtube.com/watch?v=uFJhEPrbycQ&list=PLFE6E58F856038C69&index=9)
        - [ ] [Lecture 10 | Programming Abstractions (video)](https://www.youtube.com/watch?v=NdF1QDTRkck&index=10&list=PLFE6E58F856038C69)
        - [ ] [Lecture 11 | Programming Abstractions (video)](https://www.youtube.com/watch?v=p-gpaIGRCQI&list=PLFE6E58F856038C69&index=11)
    - Rekursiyani qachon ishlatish yaxshi?
    - Nega tail rekursiya (tail recursion) yaxshi narsa?
        - [ ] [What Is Tail Recursion Why Is It So Bad?](https://www.quora.com/What-is-tail-recursion-Why-is-it-so-bad)
        - [ ] [Tail Recursion (video)](https://www.youtube.com/watch?v=L1jjXGfxozc)

- ### Dinamik dasturlash (Dynamic Programming)
    - Katta ehtimollik bilan sizni intervyuingizda dinamik dasturlash masalalari bo'lmaydi, lekin shunday masalani dinamik dasturlashga mosligini aniqlay olishni o'rganish arzigulik
    - Bu mavzu qiyin bo'lishi mumkin. Chunki har bir DP bilan yechsa bo'ladigan masala uchun "recursion relation" o'ylab topish kerak va bu narsa qiyin bo'lishi mumkin
    - kerakli patternni tushinib yetguncha ko'p DP masalalarni ko'rib chiqishni maslahat beraman
    - [ ] Videolar:
        - Skiena videolarini kuzatib tushinish qiyin bo'lishi mumkin chunki u ko'rish uchun juda kichik bo'lgan doskadan bazida foydalanadi
        - [ ] [Skiena: CSE373 2012 - Lecture 19 - Introduction to Dynamic Programming (video)](https://youtu.be/Qc2ieXRgR0k?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1718)
        - [ ] [Skiena: CSE373 2012 - Lecture 20 - Edit Distance (video)](https://youtu.be/IsmMhMdyeGY?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=2749)
        - [ ] [Skiena: CSE373 2012 - Lecture 21 - Dynamic Programming Examples (video)](https://youtu.be/o0V9eYF4UI8?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=406)
        - [ ] [Skiena: CSE373 2012 - Lecture 22 - Applications of Dynamic Programming (video)](https://www.youtube.com/watch?v=dRbMC1Ltl3A&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=22)
        - [ ] [Simonson: Dynamic Programming 0 (starts at 59:18) (video)](https://youtu.be/J5aJEcOr6Eo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3558)
        - [ ] [Simonson: Dynamic Programming I - Lecture 11 (video)](https://www.youtube.com/watch?v=0EzHjQ_SOeU&index=11&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [Simonson: Dynamic programming II - Lecture 12 (video)](https://www.youtube.com/watch?v=v1qiRwuJU7g&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=12)
        - [ ] DP masalalarini ro'yxati (har biri qisqa):
            [Dynamic Programming (video)](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)
    - [ ] Yale ma'ruza yozuvlari:
        - [ ] [Dynamic Programming](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#dynamicProgramming)
    - [ ] Coursera:
        - [ ] [The RNA secondary structure problem (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/80RrW/the-rna-secondary-structure-problem)
        - [ ] [A dynamic programming algorithm (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/PSonq/a-dynamic-programming-algorithm)
        - [ ] [Illustrating the DP algorithm (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/oUEK2/illustrating-the-dp-algorithm)
        - [ ] [Running time of the DP algorithm (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/nfK2r/running-time-of-the-dp-algorithm)
        - [ ] [DP vs. recursive implementation (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/M999a/dp-vs-recursive-implementation)
        - [ ] [Global pairwise sequence alignment (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/UZ7o6/global-pairwise-sequence-alignment)
        - [ ] [Local pairwise sequence alignment (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/WnNau/local-pairwise-sequence-alignment)

- ### Object-Oriented Programming
    - [ ] [Optional: UML 2.0 Series (video)](https://www.youtube.com/watch?v=OkC7HKtiZC0&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc)
    - [ ] SOLID OOP Prinsiplari: [SOLID Principles (video)](https://www.youtube.com/playlist?list=PL4CE9F710017EA77A)

- ### Dizayn patternlar
    - [ ] [Quick UML review (video)](https://www.youtube.com/watch?v=3cmzqZzwNDM&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc&index=3)
    - [ ] Quyidagi patternlarni o'rganing:
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
        - "Design Patterns: Elements of Reusable Object-Oriented Software" kitobi dizayn patternlar uchun defakto resursligini bilaman, lekin Head First kitobi yangi o'rganuvchilar uchun ancha yaxshiroq.
    - [ ] [Handy reference: 101 Design Patterns & Tips for Developers](https://sourcemaking.com/design-patterns-and-tips)
    - [ ] [Design patterns for humans](https://github.com/kamranahmedse/design-patterns-for-humans#structural-design-patterns)


- ### Kombinatorikalar & Ehtimollik nazariyasi
    - [ ] [Math Skills: Faktorial, Permutatsiya va kombinatsiyalarni qanday topish haqida(video)](https://www.youtube.com/watch?v=8RRo6Ti9d0U)
    - [ ] [Make School: Ehtimollik nazariyasi (video)](https://www.youtube.com/watch?v=sZkAAk9Wwa4)
    - [ ] [Make School: Ko'proq ehtimollik nazariyasi va Markov zanjirlari (Markov Chains) (video)](https://www.youtube.com/watch?v=dNaJg-mLobQ)
    - [ ] Khan Academy:
        - Kurs tartibi:
            - [ ] [Ehtimollik nazariyasining asoslari](https://www.khanacademy.org/math/probability/probability-and-combinatorics-topic)
        - Faqat videolar - 41 (har biri qisqa va tushunishga oson):
            - [ ] [Ehtimollik nazariyasi haqida (video)](https://www.youtube.com/watch?v=uzkc-qNVoOk&list=PLC58778F28211FA19)

- ### NP, NP to'liq va taxminiy algoritmlari
    - traveling salesman and the knapsack muammosi kabi NP-ning eng mashhur klasslari haqida bilish,
        va intervyu beruvchisi ularni niqob bilan so'raganda ularni taniy olish.
        
    - NP-complete nima ekanligini biling.
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
    - Piter Norvig traveling salesman masalasining maqbul yechimlarini muhokama qiladi:
        - [Jupyter Notebook](http://nbviewer.jupyter.org/url/norvig.com/ipython/TSP.ipynb)
    - 1048 - 1140 sahifalari  CLRS da agar bu sizda bo'lsa.

- ### Keshlar
    - [ ] LRU keshi haqida:
        - [ ] [The Magic of LRU Cache (100 Days of Google Dev) (video)](https://www.youtube.com/watch?v=R5ON3iwx78M)
        - [ ] [Implementing LRU (video)](https://www.youtube.com/watch?v=bq6N7Ym81iI)
        - [ ] [LeetCode - 146 LRU Cache (C++) (video)](https://www.youtube.com/watch?v=8-FZRAjR7qU)
    - [ ] CPU keshi haqida:
        - [ ] [MIT 6.004 L15: The Memory Hierarchy (video)](https://www.youtube.com/watch?v=vjYF_fAZI5E&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-&index=24)
        - [ ] [MIT 6.004 L16: Cache Issues (video)](https://www.youtube.com/watch?v=ajgC3-pyGlk&index=25&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-)

- ### Process-lar va Thread-lar
    - [ ] Computer Science 162 - Operatsion tizimlar (25ta video):
        - process-lar va thread-lar uchun 1-chidan 11-chigacha bo'lgan videolarni ko'ring
        - [Operating Systems and System Programming (video)](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iBDyz-ba4yDskqMDY6A1w_c)
    - [What Is The Difference Between A Process And A Thread?](https://www.quora.com/What-is-the-difference-between-a-process-and-a-thread)
    - o'z ichiga oladi:
        - Process-lar, Thread-lar, Concurrency muammolari
            - process-lar va thread-larni bir biridan farqi
            - Processlar
            - Threadlar
            - Locklar
            - Mutex-lar
            - Semaphore-lar
            - Monitorlar
            - Ular qanday ishlaydi?
            - Deadlock
            - Livelock
        - CPU faoliyati, interrupt-lar, context almashtirish (context switching)
        - Ko'p yadrolik processorlar bilan ishlaydigan zamonaviy concurrency construct-lari
        - [Paging, segmentation and virtual memory (video)](https://www.youtube.com/watch?v=LKe7xK0bF7o&list=PLCiOXwirraUCBE9i_ukL8_Kfg6XNv7Se8&index=2)
        - [Interrupts (video)](https://www.youtube.com/watch?v=uFKi2-J-6II&list=PLCiOXwirraUCBE9i_ukL8_Kfg6XNv7Se8&index=3)
        - Process uchun kerakli resurslar (xotira: kod, statik xotira, stack, heap, va hamda file descriptor-lar, i/o)
        - Thread uchun kerakli resurslar (tepadagilarni (stackdan tashqari) bitta processda bo'lgan boshqa threadlar bilan baham ko'radi, lekin har birini o'zini pc, stack counter, registerlar, va stacklari bor)
        - Forklash bu aslida "copy on write" operatsiyasi. Bu degani fork qilingan process-dan nusxa ko'chirish fork process birinchi marta xotiraga yozganda bo'ladi.
        - Context almashtirish
            - Operatsion tizim va uni ushlab turgan hardware context almashtirishni qanday qiladi?
    - [ ] [threads in C++ (to'plam - 10 videos)](https://www.youtube.com/playlist?list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M)
    - [ ] Pythonda concurrency (videolar):
        - [ ] [Short series on threads](https://www.youtube.com/playlist?list=PL1H1sBF1VAKVMONJWJkmUh6_p8g4F2oy1)
        - [ ] [Python Threads](https://www.youtube.com/watch?v=Bs7vPNbB9JM)
        - [ ] [Understanding the Python GIL (2010)](https://www.youtube.com/watch?v=Obt-vMVdM8s)
            - [reference](http://www.dabeaz.com/GIL)
        - [ ] [David Beazley - Python Concurrency From the Ground Up: LIVE! - PyCon 2015](https://www.youtube.com/watch?v=MCs5OvhV9S4)
        - [ ] [Keynote David Beazley - Topics of Interest (Python Asyncio)](https://www.youtube.com/watch?v=ZzfHjytDceU)
        - [ ] [Mutex in Python](https://www.youtube.com/watch?v=0zaPs8OtyKY)

- ### Testlash (Testing)
    - Quyidagilarni o'z ichiga oladi:
        - unit test qanday ishlaydi
        - mock obyektlar nima
        - integration testing nima
        - dependency injection nima
    - [ ] [Agile Software Testing with James Bach (video)](https://www.youtube.com/watch?v=SAhJf36_u5U)
    - [ ] [Open Lecture by James Bach on Software Testing (video)](https://www.youtube.com/watch?v=ILkT_HV9DVU)
    - [ ] [Steve Freeman - Test-Driven Development (that’s not what we meant) (video)](https://vimeo.com/83960706)
        - [slides](http://gotocon.com/dl/goto-berlin-2013/slides/SteveFreeman_TestDrivenDevelopmentThatsNotWhatWeMeant.pdf)
    - [ ] Dependency injection:
        - [ ] [video](https://www.youtube.com/watch?v=IKD2-MAkXyQ)
        - [ ] [Tao Of Testing](http://jasonpolites.github.io/tao-of-testing/ch3-1.1.html)
    - [ ] [Qanday qilib test yozish](http://jasonpolites.github.io/tao-of-testing/ch4-1.1.html)

- ### Scheduling
    - OS da bu qanday ishlaydi?
    - Operatsion tizim videolaridan o'rganish mumkin

- ### Stringni izlash va manipulyatsiyalar
    - [ ] [Sedgewick - Suffix Arrays (video)](https://www.coursera.org/learn/algorithms-part2/lecture/TH18W/suffix-arrays)
    - [ ] [Sedgewick - Substring Search (videos)](https://www.coursera.org/learn/algorithms-part2/home/week/4)
        - [ ] [1. Introduction to Substring Search](https://www.coursera.org/learn/algorithms-part2/lecture/n3ZpG/introduction-to-substring-search)
        - [ ] [2. Brute-Force Substring Search](https://www.coursera.org/learn/algorithms-part2/lecture/2Kn5i/brute-force-substring-search)
        - [ ] [3. Knuth-Morris Pratt](https://www.coursera.org/learn/algorithms-part2/lecture/TAtDr/knuth-morris-pratt)
        - [ ] [4. Boyer-Moore](https://www.coursera.org/learn/algorithms-part2/lecture/CYxOT/boyer-moore)
        - [ ] [5. Rabin-Karp](https://www.coursera.org/learn/algorithms-part2/lecture/3KiqT/rabin-karp)
    - [ ] [Search pattern in text (video)](https://www.coursera.org/learn/data-structures/lecture/tAfHI/search-pattern-in-text)

    Agar bu mavzuda ko'proq ma'lumot olmoqchi bo'lsangiz, "String Matching" bo'limini ko'ring [Ba'zi mavzular bo'yicha qo'shimcha ma'lumotlar](#bazi-mavzular-bo'yicha-qoshimcha-malumotlar).

- ### Trie-lar
    - Trie-larning turli xili mavjud. Bazilarida prefiks bor bo'lsa bazilarida esa yo'q, va bazilari yo'lni kuzatish uchun bitlar o'rniga string ishlatishadi.
    - Men kodini ko'rib chiqaman, lekin o'zim yozmayman
    - [ ] [Sedgewick - Tries (3 videos)](https://www.coursera.org/learn/algorithms-part2/home/week/4)
        - [ ] [1. R Way Tries](https://www.coursera.org/learn/algorithms-part2/lecture/CPVdr/r-way-tries)
        - [ ] [2. Ternary Search Tries](https://www.coursera.org/learn/algorithms-part2/lecture/yQM8K/ternary-search-tries)
        - [ ] [3. Character Based Operations](https://www.coursera.org/learn/algorithms-part2/lecture/jwNmV/character-based-operations)
    - [ ] [Notes on Data Structures and Programming Techniques](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Tries)
    - [ ] Qisqa kurslar:
        - [ ] [Introduction To Tries (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/08Xyf/core-introduction-to-tries)
        - [ ] [Performance Of Tries (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/PvlZW/core-performance-of-tries)
        - [ ] [Implementing A Trie (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/DFvd3/core-implementing-a-trie)
    - [ ] [The Trie: A Neglected Data Structure](https://www.toptal.com/java/the-trie-a-neglected-data-structure)
    - [ ] [TopCoder - Using Tries](https://www.topcoder.com/community/competitive-programming/tutorials/using-tries/)
    - [ ] [Stanford Lecture (real world use case) (video)](https://www.youtube.com/watch?v=TJ8SkcUSdbU)
    - [ ] [MIT, Advanced Data Structures, Strings (taxminan yarim yo'lda juda tushunarsiz bo'lishi mumkin) (video)](https://www.youtube.com/watch?v=NinWEPPrkDQ&index=16&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf)

- ### Floating Point Numbers 
    - [ ] oddiy 8-bitli: [Representation of Floating Point Numbers - 1 (video - there is an error in calculations - see video description)](https://www.youtube.com/watch?v=ji3SfClm8TU)
    - [ ] 32 bitli: [IEEE754 32-bit floating point binary (video)](https://www.youtube.com/watch?v=50ZYcZebIec)

- ### Unicode
    - [ ] [The Absolute Minimum Every Software Developer Absolutely, Positively Must Know About Unicode and Character Sets]( http://www.joelonsoftware.com/articles/Unicode.html)
    - [ ] [What Every Programmer Absolutely, Positively Needs To Know About Encodings And Character Sets To Work With Text](http://kunststube.net/encoding/)

- ### Endianness
    - [ ] [Big And Little Endian](https://web.archive.org/web/20180107141940/http://www.cs.umd.edu:80/class/sum2003/cmsc311/Notes/Data/endian.html)
    - [ ] [Big Endian Vs Little Endian (video)](https://www.youtube.com/watch?v=JrNF0KRAlyo)
    - [ ] [Big And Little Endian Inside/Out (video)](https://www.youtube.com/watch?v=oBSuXP-1Tc0)
        - Kernel dasturchilari uchun juda texnik muloqot. Agar ko'pini tushunmasangiz, tashvishlanmang
        - Birinchi yarmi yetarli bo'ladi.

- ### Networking
    - **Agar siz networkingda tajribaga ega bo'lsangiz yoki reliability injineri yoki operations injineri bo'lishni xohlasangiz, shu mavzuda savollarni kuting**
    - Agar bunday bo'lmasa, baribir bularni bilib qo'ygan yaxshi
    - [ ] [Khan Academy](https://www.khanacademy.org/computing/computer-science/computers-and-internet-code-org)
    - [ ] [UDP and TCP: Comparison of Transport Protocols (video)](https://www.youtube.com/watch?v=Vdc8TCESIg8)
    - [ ] [TCP/IP and the OSI Model Explained! (video)](https://www.youtube.com/watch?v=e5DEVa9eSN0)
    - [ ] [Packet Transmission across the Internet. Networking & TCP/IP tutorial. (video)](https://www.youtube.com/watch?v=nomyRJehhnM)
    - [ ] [HTTP (video)](https://www.youtube.com/watch?v=WGJrLqtX7As)
    - [ ] [SSL and HTTPS (video)](https://www.youtube.com/watch?v=S2iBR2ZlZf0)
    - [ ] [SSL/TLS (video)](https://www.youtube.com/watch?v=Rp3iZUvXWlM)
    - [ ] [HTTP 2.0 (video)](https://www.youtube.com/watch?v=E9FxNzv1Tr8)
    - [ ] [Video Series (21 videos) (video)](https://www.youtube.com/playlist?list=PLEbnTDJUr_IegfoqO4iPnPYQui46QqT0j)
    - [ ] [Subnetting Demystified - Part 5 CIDR Notation (video)](https://www.youtube.com/watch?v=t5xYI0jzOf4)
    - [ ] Soketlar:
        - [ ] [Java - Sockets - Introduction (video)](https://www.youtube.com/watch?v=6G_W54zuadg&t=6s)
        - [ ] [Socket Programming (video)](https://www.youtube.com/watch?v=G75vN2mnJeQ)

## Tizim Dizayni, Scalability, Ma'lumotlar bilan ishlash

**agar sizda 4+ yil ish tajribasi bo'lsa intervyularda sizga tizim dizayn bo'yicha savolar tushadi**
- Scalability va Tizim Dizayn juda katta mavzular hisoblanadi.
      Chunki katta ko'lamli traffikni ko'tara oladigan software/hardware-ni dizayn qilish uni ko'p qirralarini e'tiborga olishni talab qiladi
      Buni ustida bir talay vaqt o'tkazasiz
- Qirralar:
    - Scalability
        - Katta miqdordagi data to'plamlarni bitta qiymatga agregatlash
        - Bitta data to'plamini boshqasiga o'tkazish
        - Haddan tashqari katta miqdordagi data bilan ishlash
    - Tizim dizayni
        - funksional to'plami
        - interfeyslar
        - klaslar ierarxiyasi
        - ma'lum bir cheklovlar ostida tizimni dizayn qilish
        - soddaligi va mustaxkamligi
        - afzalliklar va kamchiliklar o'rtasidagi muvozanat
        - ijro tahlili (performance analysis) va optimallashtirish
- [ ] **Bu yerdan boshlang**: [The System Design Primer](https://github.com/donnemartin/system-design-primer)
- [ ] [System Design from HiredInTech](http://www.hiredintech.com/system-design/)
- [ ] [How Do I Prepare To Answer Design Questions In A Technical Inverview?](https://www.quora.com/How-do-I-prepare-to-answer-design-questions-in-a-technical-interview?redirected_qid=1500023)
- [ ] [8 Things You Need to Know Before a System Design Interview](http://blog.gainlo.co/index.php/2015/10/22/8-things-you-need-to-know-before-system-design-interviews/)
- [ ] [Algorithm design](http://www.hiredintech.com/algorithm-design/)
- [ ] [Database Normalization - 1NF, 2NF, 3NF and 4NF (video)](https://www.youtube.com/watch?v=UrYLYV7WSHM)
- [ ] [System Design Interview](https://github.com/checkcheckzz/system-design-interview) - Bu yerda juda ko'p resurslar bor. Berilgan maqolalarni va namunalarni ko'rib chiqing. Bir ikkitasini pastda topasiz
- [ ] [How to ace a systems design interview](http://www.palantir.com/2011/10/how-to-rock-a-systems-design-interview/)
- [ ] [Numbers Everyone Should Know](http://everythingisdata.wordpress.com/2009/10/17/numbers-everyone-should-know/)
- [ ] [How long does it take to make a context switch?](http://blog.tsunanet.net/2010/11/how-long-does-it-take-to-make-context.html)
- [ ] [Transactions Across Datacenters (video)](https://www.youtube.com/watch?v=srOgpXECblk)
- [ ] [A plain English introduction to CAP Theorem](http://ksat.me/a-plain-english-introduction-to-cap-theorem)
- [ ] Consensus algoritmlari:
    - [ ] Paxos - [Paxos Agreement - Computerphile (video)](https://www.youtube.com/watch?v=s8JqcZtvnsM)
    - [ ] Raft - [An Introduction to the Raft Distributed Consensus Algorithm (video)](https://www.youtube.com/watch?v=P9Ydif5_qvE)
        - [ ] [Easy-to-read paper](https://raft.github.io/)
        - [ ] [Infographic](http://thesecretlivesofdata.com/raft/)
- [ ] [Consistent Hashing](http://www.tom-e-white.com/2007/11/consistent-hashing.html)
- [ ] [NoSQL Patterns](http://horicky.blogspot.com/2009/11/nosql-patterns.html)
- [ ] Scalability:
    - Bularni hammasi kerak bo'lmaydi. Sizi qiziqtirgan bir ikkitasini tanlang.
    - [ ] [Great overview (video)](https://www.youtube.com/watch?v=-W9F__D3oY4)
    - [ ] Qisqa seriyalar:
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
    - [ ] [The Importance of Algorithms](https://www.topcoder.com/community/competitive-programming/tutorials/the-importance-of-algorithms/)
    - [ ] [Sharding](http://highscalability.com/blog/2009/8/6/an-unorthodox-approach-to-database-design-the-coming-of-the.html)
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
    - [ ] [Machine Learning Driven Programming: A New Programming For A New World](http://highscalability.com/blog/2016/7/6/machine-learning-driven-programming-a-new-programming-for-a.html)
    - [ ] [The Image Optimization Technology That Serves Millions Of Requests Per Day](http://highscalability.com/blog/2016/6/15/the-image-optimization-technology-that-serves-millions-of-re.html)
    - [ ] [A Patreon Architecture Short](http://highscalability.com/blog/2016/2/1/a-patreon-architecture-short.html)
    - [ ] [Tinder: How Does One Of The Largest Recommendation Engines Decide Who You'll See Next?](http://highscalability.com/blog/2016/1/27/tinder-how-does-one-of-the-largest-recommendation-engines-de.html)
    - [ ] [Design Of A Modern Cache](http://highscalability.com/blog/2016/1/25/design-of-a-modern-cache.html)
    - [ ] [Live Video Streaming At Facebook Scale](http://highscalability.com/blog/2016/1/13/live-video-streaming-at-facebook-scale.html)
    - [ ] [A Beginner's Guide To Scaling To 11 Million+ Users On Amazon's AWS](http://highscalability.com/blog/2016/1/11/a-beginners-guide-to-scaling-to-11-million-users-on-amazons.html)
    - [ ] [How Does The Use Of Docker Effect Latency?](http://highscalability.com/blog/2015/12/16/how-does-the-use-of-docker-effect-latency.html)
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
    - [ ] Servislarni bir biriga bog'laydigan texnologiyalar haqida o'rganish uchun pastroqdagi "Xabar almashish, Serializatsiya, va Queue Tizimlar" qismini ko'ring
    - [ ] Twitter:
        - [O'Reilly MySQL CE 2011: Jeremy Cole, "Big and Small Data at @Twitter" (video)](https://www.youtube.com/watch?v=5cKTP36HVgI)
        - [Timelines at Scale](https://www.infoq.com/presentations/Twitter-Timeline-Scalability)
    - Bundanda ko'proq narsa o'rganish, [Video Seriyalar](#video-series) seksiyadagi "Ulkan Datasetlarni Qazish" video seriyasini ko'ring
- [ ] Tizim dizayn qilish jarayonini mashq qilish: Bu yerda qog'ozda yozib yechish uchun bir nechta misollar bor. Har birini real proyektlarda qanday yechishgani haqida maqolalari ham bor:
    - tahlil: [The System Design Primer](https://github.com/donnemartin/system-design-primer)
    - [System Design from HiredInTech](http://www.hiredintech.com/system-design/)
    - [cheat sheet](https://github.com/jwasham/coding-interview-university/blob/main/extras/cheat%20sheets/system-design.pdf)
    - jarayon:
        1. Muammo va uning qamrov doirasini tushuning
            - Intervyuverni yordami bilan usecase-larni belgilab oling
            - Qo'shimcha funksional taklif qiling
            - Intervyuver qamrov doirasidan tashqarida deb bilgan punktlarni olib tashlang
            - High availability kerak deb biling va uni usecase-lar qatoriga qo'shing
        2. Cheklovlar haqida o'ylang
            - Oyiga nechta so'rovlar bo'lishini so'rang
            - Sekundiga nechta so'rovlar bo'lishini so'rang (intervyuver javob berishi yoki o'zingiz hisoblashingizni so'rashi mumkin)
            - O'qishlar (reads) va yozishlar (writes) foizini baholang
            - Baholashda 80/20 qoidasini yodda tuting
            - Sekundiga qancha data yoziladi
            - 5 yil davomida jami qancha xotira kerak bo'ladi
            - Sekundiga qancha data o'qiladi
        3. Abstrakt dizayn:
            - Qatlamlar (servis, data, kesh)
            - Infrastruktura: load balancing, xabar almashish (messaging)
            - Servis ishlashi uchun kerak bo'lgan muhim algoritmlarni tahlili
            - Bottleneck-larni e'tiborga oling va ularga yechim toping
    - Mashqlar:
        - [Design a CDN network: old article](https://kilthub.cmu.edu/articles/Globally_distributed_content_delivery/6605972)
        - [Design a random unique ID generation system](https://blog.twitter.com/2010/announcing-snowflake)
        - [Design an online multiplayer card game](http://www.indieflashblog.com/how-to-create-an-asynchronous-multiplayer-game.html)
        - [Design a key-value database](http://www.slideshare.net/dvirsky/introduction-to-redis)
        - [Design a picture sharing system](http://highscalability.com/blog/2011/12/6/instagram-architecture-14-million-users-terabytes-of-photos.html)
        - [Design a recommendation system](http://ijcai13.org/files/tutorial_slides/td3.pdf)
        - [Design a URL-shortener system: copied from above](http://www.hiredintech.com/system-design/the-system-design-process/)
        - [Design a cache system](https://www.adayinthelifeof.nl/2011/02/06/memcache-internals/)

---

## Yakuniy tahlil

    Bu qismda ko'p muhim tushunchalarni tez qaytarib olish uchun kerak bo'ladigan qisqa videolar bor

- [ ] 2-3 minutlik qisqa mavzuga oid videolar seriyasi (23 video)
    - [Videos](https://www.youtube.com/watch?v=r4r1DZcx1cM&list=PLmVb1OknmNJuC5POdcDv5oCS7_OUkDgpj&index=22)
- [ ] 2-5 minutlik qisqa mavzuga oid videolar seriyasi - Michael Sambol (18 video):
    - [Videos](https://www.youtube.com/channel/UCzDJwLWoYCUQowF_nG3m5OQ)
- [ ] [Sedgewick Videos - Algorithms I](https://www.coursera.org/learn/algorithms-part1)
- [ ] [Sedgewick Videos - Algorithms II](https://www.coursera.org/learn/algorithms-part2)

---

## Coding bo'yicha savollar ustida ishlash

Yuqoridagi barcha "computer science" mavzularini bilb oldingiz, endi coding bo'yicha masalalarga javob berishni mashq qilish vaqti keldi.

**Coding masalalarini yechishga tayyorlanish bu javoblarni yodlab qolish emas**

Masalalar yechishni mashq qilish nima uchun zarur:
- Muammoni aniqlash va kerakli ma'lumotlar tuzilmalari va algoritmlari mos keladigan joyni topa olish
- Masala uchun kerakli talablarni to'plash
- Huddi intervyudagi kabi muammoni yechish uchun qadam baqadam yurish
- Doskada yoki qog'ozda kod yozish, kompyuterda emas
- Yechimlaringizga ish joyi xarajati va ish vaqti xarajatini aniqlash
- Yechimlaringizni testlash

Suhbatda metodik, kommunikativ muammolarni hal qilish uchun ajoyib kirish qismi mavjud. 
Siz buni dasturlash uchun intervyu kitoblaridan ham topa olishingiz mumkin,
lekin men buni ular ichida juda foydali deb topdim:
[Algorithm design canvas](http://www.hiredintech.com/algorithm-design/)

Uyingizda doska yo'qmi? Bu tabiiy. Men o'zgacha insonman, menda kotta doskam bor. Doska o'rniga, rasm chizish uchun 
mo'ljallangan daftar ishlating. Shunda divanda o'tirib, mashq qilishingiz mumkin. Bu mening "divanga mo'ljallangan doskam".
Men rasmda qalamimni ham qo'shganman qulaylik uchun. Agar siz ruchkadan foydalansangiz, o'chirish istagi paydo bo'lishi mumkin. 
Tez Chalkashib ketadi. Shuning uchun men qalam va o'chirg'ichdan foydalanaman.

![mening divan uchun doskam](https://d3j2pkmjtin6ou.cloudfront.net/art_board_sm_2.jpg)

Qo'shimcha:

- [Mathematics for Topcoders](https://www.topcoder.com/community/competitive-programming/tutorials/mathematics-for-topcoders/)
- [Dynamic Programming – From Novice to Advanced](https://www.topcoder.com/community/competitive-programming/tutorials/dynamic-programming-from-novice-to-advanced/)
- [MIT Interview Materials](https://web.archive.org/web/20160906124824/http://courses.csail.mit.edu/iap/interview/materials.php)
- [Exercises for getting better at a given language](http://exercism.io/languages)

**Dasturlash masalalarini o'qing va bajaring (ketma ketlikda):**

- [ ] [Programming Interviews Exposed: Secrets to Landing Your Next Job, 2nd Edition](http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html)
    - C, C++ va Java da javoblar
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - Javada javoblar

Ko'ring [Book List above](#book-list)


## Coding mashqlar/savollar

Miyyangiz og'rigunigacha o'rganib bo'lganingizdan keyin o'sha miyyangizni ishga soling
Har kuni coding savollar ishlang, qancha ko'p bo'lsa shuncha yaxshi

- [How to Find a Solution](https://www.topcoder.com/community/competitive-programming/tutorials/how-to-find-a-solution/)
- [How to Dissect a Topcoder Problem Statement](https://www.topcoder.com/community/competitive-programming/tutorials/how-to-dissect-a-topcoder-problem-statement/)

Coding Intervyu Savollar Videolari:
- [IDeserve (88 videos)](https://www.youtube.com/watch?v=NBcqBddFbZw&list=PLamzFoFxwoNjPfxzaWqs7cZGsPYy0x_gI)
- [Tushar Roy (5 playlists)](https://www.youtube.com/user/tusharroy2525/playlists?shelf_id=2&view=50&sort=dd)
    - Qadam baqadam yechimlar tahlili uchun juda zo'r
- [Nick White - LeetCode Solutions (187 Videos)](https://www.youtube.com/playlist?list=PLU_sdQYzUj2keVENTP0a5rdykRSgg9Wp-)
    - Yechimlar va ularni kodi uchun yaxshi tushuntirish
    - Qisqa vaqtda ularni bir qanchasini ko'rib tugatsangiz bo'ladi
- [FisherCoder - LeetCode Solutions](https://youtube.com/FisherCoder)

Mashq saytlari:
- [LeetCode](https://leetcode.com/)
    - Mening sevimli saytim. 1-2 oy tayorgarlik paytida obuna puliga arzidi.
    - [LeetCode solutions from FisherCoder](https://github.com/fishercoder1534/Leetcode)
    - Qisqa kod tahlillari uchun tepadagi Nick White videolarini ko'ring
- [HackerRank](https://www.hackerrank.com/)
- [TopCoder](https://www.topcoder.com/)
- [InterviewCake](https://www.interviewcake.com/)
- [Geeks for Geeks](http://www.geeksforgeeks.org/)
- [InterviewBit](https://www.interviewbit.com/invite/icjf)
- [Project Euler (math-focused)](https://projecteuler.net/index.php?section=problems)
- [Code Exercises](https://code-exercises.com)

Til o'rganish saytlari, mashqlari bilan
- [Codewars](http://www.codewars.com)
- [Codility](https://codility.com/programmers/)
- [HackerEarth](https://www.hackerearth.com/)
- [Sphere Online Judge (spoj)](http://www.spoj.com/)
- [Codechef](https://www.codechef.com/)
- [Codeforces](https://codeforces.com/)

Mashqlar repolari
- [Interactive Coding Interview Challenges in Python](https://github.com/donnemartin/interactive-coding-challenges)

Mock intervyular
- [Gainlo.co: Mock interviewers from big companies](http://www.gainlo.co/) - Men buni ishlatdim va u menga phone screen va on-site intervyularga ruhan tayyorladi
- [Pramp: Mock interviews from/with peers](https://www.pramp.com/) - foydalanuvchilararo intervyuga tayyorlanish modeli
- [Refdash: Mock interviews and expedited interviews](https://refdash.com/) - kandidatlarga tech kompaniyalar bilan bo'ladigan bir nechta intervyulardan sakrab o'tishga ham yordam beradi
- [interviewing.io: Practice mock interview with senior engineers](https://interviewing.io) - FAANG-dan senior injinerlar bilan anonim algoritm/tizim dizayn intervyulari


## Intervyuga yaqin kelganingizda

- Cracking The Coding Interview Set 2 (videolar):
    - [Cracking The Code Interview](https://www.youtube.com/watch?v=4NIb9l3imAo)
    - [Cracking the Coding Interview - Fullstack Speaker Series](https://www.youtube.com/watch?v=Eg5-tdAwclo)

## Sizni rezyumeingiz

- 'Cracking The Coding Interview' kitobini Resume prep qismini va 'Programming Interviews Exposed' kitobini orqasini ko'ring


## Intervyuga yaqin kelganda quyidagilar haqida o'ylab yuring

Sizdan so'rashlari mumkin bo'lgan 20 tacha intervyu savollarini o'ylab toping (pastagi savollarga o'xshagan). Har biri uchun 2-3 javobiz bo'lsin.
Siz amalga oshirgan biror narsa haqida hikoyangiz bo'lsin.

- Nega bu ishni xohlayapsiz?
- Siz yechgan mushkul masala/muammo?
- Qanday qiyinchiliklar bo'lgan?
- Siz ko'rgan eng yaxshi/eng yomon dizaynlar?
- Mavjud produktni takomillashtirish uchun g'oyalar?
- Qanday holda yaxshi ishlaysiz, yolg'iz yoki jamoda?
- Sizni qanday ko'nikmalaringiz/mahoratlaringiz bu ish o'rinida katta foyda bo'ladi va nega?
- [x ishda / y proyektda] sizni eng ko'p zavqlantirgan narsa?
- [x ishda / y proyektda] siz duch kelgan eng katta muammo?
- [x ishda / y proyektda] siz duch kelgan eng mashaqqatli bug?
- [x ishda / y proyektda] siz nima o'rgandingiz?
- [x ishda / y proyektda] siz nimani yaxshiroq qilgan bo'lardingiz?

## Intervyuver uchun savollaringizni tayyorlab qo'ying

    Mening savollarimning bazilari (Bu savollarga javobni bilsam ham ularni fikrlarini yoki jamoaviy nuqtai nazarlarini bilishni xohlayman):

- Jamoangiz qanchalik katta?
- Sizning dasturlash siklingiz qanday tarzda o'tadi? waterfall/sprintlar/ yoki agile ishlatasizmi?
- Deadline-lar ga shoshilish odatiy holmi? Yoki erkinlik ko'proqmi?
- Jamoangizda qarorlar qanday qabul qilinadi?
- Haftasiga nechi marta jamoaviy meeting-lar tashkil etiladi?
- Sizning ishdagi atmosferangiz sizga konsentratsiya qilishga yordam beradimi?
- Hozirda nima ustida ishlayapsizlar?
- Bunda sizga nima ko'proq yoqadi?
- Ish hayoti qanday tarzda o'tadi?
- Ish va shaxsiy hayot balansi qanday yo'lga qo'yilgan?

## Ishga qabul qilinganingizdan so'ng

Tabriklaymiz!

O'rganishda davom eting.

Hech qachon tugatgan bo'lmaymiz.

---

    *****************************************************************************************************
    *****************************************************************************************************

    Ushbu bandning ostidagi hamma narsalar ixtiyoriydir.
    Ularni o'rganish orqali siz ko'proq CS tushunchalariga ega bo'lasiz va har qanday dasturiy injinerlik
    ishi uchun yaxshi tayyorlangan bo'lasiz. Siz ancha mukammal dasturchi darajasiga erishasiz.

    *****************************************************************************************************
    *****************************************************************************************************

---

## Qo'shimcha kitoblar

    O'zingizni qiziqtirgan mavzuga chuqur sho'ng'ishingiz uchun resurslar

- [The Unix Programming Environment](https://www.amazon.com/dp/013937681X)
    - Eski lekin yaxshi
- [The Linux Command Line: A Complete Introduction](https://www.amazon.com/dp/1593273894/)
    - Zamonaviy variant
- [TCP/IP Illustrated Series](https://en.wikipedia.org/wiki/TCP/IP_Illustrated)
- [Head First Design Patterns](https://www.amazon.com/gp/product/0596007124/)
    - Dizayn pattern-larga yengil kirish
- [Design Patterns: Elements of Reusable Object-Oriente​d Software](https://www.amazon.com/Design-Patterns-Elements-Reusable-Object-Oriented/dp/0201633612)
    - Shuningdek, "Gang Of Four" yoki "GOF" nomi bilan tanilgan
    - Qoidaga aylangan dizayn pattern kitobi
- [UNIX and Linux System Administration Handbook, 5th Edition](https://www.amazon.com/UNIX-Linux-System-Administration-Handbook/dp/0134277554/)
- [Algorithm Design Manual](http://www.amazon.com/Algorithm-Design-Manual-Steven-Skiena/dp/1849967202) (Skiena)
    - Qaytarish uchun va muammoni tanib olish uchun
    - Algoritm katalog qismi intervyularda tushadigan savollardan ancha qiyin
    - Bu kitob ikki qismdan iborat:
        - Data strukturalar va algoritmlar bo'yicha sinf darslik kitobi
            - Yaxshi taraflari:
                - Boshqa algoritm sinf darsliklari kabi qaytarish uchun yaxshi
                - Ishda va akademiyada bo'lgan o'zining masala yechish tajribasidan yaxshi hikoyalar bor
                - Kod namunalari C da
            - Yomon taraflari:
                - CLRS kabi zich va tushinishga qiyin bo'lishi mumkin, va hatto bir xil mavzularga CLRS yaxshiroq bo'lishi mumkin
                - Bazi narsalar yetarlicha yoritilmagani uchun, 7, 8, 9-boblar tushunishga qiyin (Ehtimol menikidan aqlliroq kalla kerakdir)
                - Meni noto'g'ri tushunmang: Menga Skiena, uni o'qitish uslubi, va mannerizmi yoqadi, lekin men Stony Brook universitetdagilar kabi emasman
        - Algoritm katalogi:
            - Bu kitobni sotib olishingizni asl sababi
            - Bu qismga yetib qoldim. Tugatganimdan so'ng bu yerni yangilab qo'yaman
    - kindle-da ijaraga olsangiz bo'ladi
    - Javoblar
        - [Solutions](http://www.algorithm.cs.sunysb.edu/algowiki/index.php/The_Algorithms_Design_Manual_(Second_Edition))
        - [Solutions](http://blog.panictank.net/category/algorithmndesignmanualsolutions/page/2/)
    - [Errata](http://www3.cs.stonybrook.edu/~skiena/algorist/book/errata)
- [Write Great Code: Volume 1: Understanding the Machine](https://www.amazon.com/Write-Great-Code-Understanding-Machine/dp/1593270038)
    - Kitob 2004-yilda nashr etilgan va bir oz eskirgan, lekin kompyuterni qisqa vaqta tushunish uchun zo'r resurs
    - Muallif [HLA](https://en.wikipedia.org/wiki/High_Level_Assembly) ni kashf etgan. Shunday ekan, HLA haqida gaplar va namunalarga skeptik qarang. Keng ishlatilmaydi lekin assembly qanday ko'rinishini ko'rsatadigan namunalar
    - Bu boblar sizga kompyuterni tushunishda yaxshi bilim poydevori bo'ladi
        - Chapter 2 - Numeric Representation
        - Chapter 3 - Binary Arithmetic and Bit Operations
        - Chapter 4 - Floating-Point Representation
        - Chapter 5 - Character Representation
        - Chapter 6 - Memory Organization and Access
        - Chapter 7 - Composite Data Types and Memory Objects
        - Chapter 9 - CPU Architecture
        - Chapter 10 - Instruction Set Architecture
        - Chapter 11 - Memory Architecture and Organization
- [Introduction to Algorithms](https://www.amazon.com/Introduction-Algorithms-3rd-MIT-Press/dp/0262033844)
    - **Muhim:** Bu kitobni o'qish siz uchun cheklangan qiymatga ega. Bu kitob algoritmlar va data strukturalar tahlili uchun zo'r, lekin yaxshi kod yozishni o'rgatmaydi. O'zingiz to'g'ri yechim topishingiz kerak bo'ladi
    - CLR nomi bilan ham tanilgan (bazida CLRS chunki Stein keyinroq kitob mualliflariga qo'shilgan)

- [Computer Architecture, Sixth Edition: A Quantitative Approach](https://www.amazon.com/dp/0128119055)
    - Nisbatan ancha boyroq va yangiroq (2017), lekin uzunroq yozilgan

- [Programming Pearls](http://www.amazon.com/Programming-Pearls-2nd-Jon-Bentley/dp/0201657880)
    - Boshlang'ich bir ikki boblari muammolarga ajoyib yechimlar taqdim qiladi, lekin bu shunchaki kirish. 
      Bu kitob dasturning dizayn va arxitekturasi uchun qo'llanma

## Qo'shimcha o'rganish

    Men bularni har tomonlama rivojlangan dasturchi bo'lishingizga yordam berish va ba'zi texnologiyalar va algoritmlardan xabardor bo'lishingiz uchun qo'shdim,
    Natijada sizda kattaroq asboblar qutisi bo'ladi.

- ### Kompilyatorlar
    - [How a Compiler Works in ~1 minute (video)](https://www.youtube.com/watch?v=IhC7sdYe-Jg)
    - [Harvard CS50 - Compilers (video)](https://www.youtube.com/watch?v=CSZLNYF4Klo)
    - [C++ (video)](https://www.youtube.com/watch?v=twodd1KFfGk)
    - [Understanding Compiler Optimization (C++) (video)](https://www.youtube.com/watch?v=FnGCDLhaxKU)

- ### Emacs va vi(m) 
    - Unix-ga asoslangan kod muharriri (code editor) bilan tanishib chiqing
    - vi(m):
        - [Editing With vim 01 - Installation, Setup, and The Modes (video)](https://www.youtube.com/watch?v=5givLEMcINQ&index=1&list=PL13bz4SHGmRxlZVmWQ9DvXo1fEg4UdGkr)
        - [VIM Adventures](http://vim-adventures.com/)
        - 4 ta videolar to'plami:
            - [The vi/vim editor - Lesson 1](https://www.youtube.com/watch?v=SI8TeVMX8pk)
            - [The vi/vim editor - Lesson 2](https://www.youtube.com/watch?v=F3OO7ZIOaJE)
            - [The vi/vim editor - Lesson 3](https://www.youtube.com/watch?v=ZYEccA_nMaI)
            - [The vi/vim editor - Lesson 4](https://www.youtube.com/watch?v=1lYD5gwgZIA)
        - [Using Vi Instead of Emacs](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Using_Vi_instead_of_Emacs)
    - emacs:
        - [Basics Emacs Tutorial (video)](https://www.youtube.com/watch?v=hbmV1bnQ-i0)
        - 3 ta videolar to'plami:
            - [Emacs Tutorial (Beginners) -Part 1- File commands, cut/copy/paste, cursor commands](https://www.youtube.com/watch?v=ujODL7MD04Q)
            - [Emacs Tutorial (Beginners) -Part 2- Buffer management, search, M-x grep and rgrep modes](https://www.youtube.com/watch?v=XWpsRupJ4II)
            - [Emacs Tutorial (Beginners) -Part 3- Expressions, Statements, ~/.emacs file and packages](https://www.youtube.com/watch?v=paSgzPso-yc)
        - [Evil Mode: Or, How I Learned to Stop Worrying and Love Emacs (video)](https://www.youtube.com/watch?v=JWD1Fpdd4Pc)
        - [Writing C Programs With Emacs](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Writing_C_programs_with_Emacs)
        - [(maybe) Org Mode In Depth: Managing Structure (video)](https://www.youtube.com/watch?v=nsGYet02bEk)

- ### Unix uchun buyruqlar ro'yxati
    - Quyidagi ro'yxatni yaxshi vositalardan to'ldirdim.
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

- ### Ma'lumot nazariyasi (videolar)
    - [Khan Academy](https://www.khanacademy.org/computing/computer-science/informationtheory)
    - Markov protseslari haqida batafsil:
        - [Core Markov Text Generation](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/waxgx/core-markov-text-generation)
        - [Core Implementing Markov Text Generation](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/gZhiC/core-implementing-markov-text-generation)
        - [Project = Markov Text Generation Walk Through](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/EUjrq/project-markov-text-generation-walk-through)
    - Batafsil quyida MIT 6.050J-ning Ma'lumot va Entropiya seriyalarida ko'ring

- ### Parity va "Hamming Code" (videolar)
    - [Intro](https://www.youtube.com/watch?v=q-3BctoUpHE)
    - [Parity](https://www.youtube.com/watch?v=DdMcAUlxh1M)
    - Hamming Code:
        - [Error detection](https://www.youtube.com/watch?v=1A_NcXxdoCc)
        - [Error correction](https://www.youtube.com/watch?v=JAMLuxdHH8o)
    - [Error Checking](https://www.youtube.com/watch?v=wbH2VxzmoZk)

- ### Entropiya
    - Quyidagi videolarni ko'ring
    - Avval ma'lumot nazariyasi videolarini tomosha qiling
    - [Information Theory, Claude Shannon, Entropy, Redundancy, Data Compression & Bits (video)](https://youtu.be/JnJq3Py0dyM?t=176)

- ### Kriptografiya
    - Quyidagi videolarni ham ko'ring
    - Avval ma'lumot nazariyasi videolarini tomosha qiling
    - [Khan Academy Series](https://www.khanacademy.org/computing/computer-science/cryptography)
    - [Cryptography: Hash Functions](https://www.youtube.com/watch?v=KqqOXndnvic&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=30)
    - [Cryptography: Encryption](https://www.youtube.com/watch?v=9TNI2wHmaeI&index=31&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

- ### Kompressiya
    - Avval ma'lumot nazariyasi videolarini tomosha qiling
    - Computerphile (videolar):
        - [Compression](https://www.youtube.com/watch?v=Lto-ajuqW3w)
        - [Entropy in Compression](https://www.youtube.com/watch?v=M5c_RFKVkko)
        - [Upside Down Trees (Huffman Trees)](https://www.youtube.com/watch?v=umTbivyJoiI)
        - [EXTRA BITS/TRITS - Huffman Trees](https://www.youtube.com/watch?v=DV8efuB3h2g)
        - [Elegant Compression in Text (The LZ 77 Method)](https://www.youtube.com/watch?v=goOa3DGezUA)
        - [Text Compression Meets Probabilities](https://www.youtube.com/watch?v=cCDCfoHTsaU)
    - [Compressor Head videos](https://www.youtube.com/playlist?list=PLOU2XLYxmsIJGErt5rrCqaSGTMyyqNt2H)
    - [(optional) Google Developers Live: GZIP is not enough!](https://www.youtube.com/watch?v=whGwm0Lky2s)

- ### Kompyuter xavfsizligi
    - [MIT (23 videos)](https://www.youtube.com/playlist?list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
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

- ### Chiqindi yig'ish (Garbage collection)
    - [GC in Python (video)](https://www.youtube.com/watch?v=iHVs_HkjdmI)
    - [Deep Dive Java: Garbage Collection is Good!](https://www.infoq.com/presentations/garbage-collection-benefits)
    - [Deep Dive Python: Garbage Collection in CPython (video)](https://www.youtube.com/watch?v=P-8Z0-MhdQs&list=PLdzf4Clw0VbOEWOS_sLhT_9zaiQDrS5AR&index=3)

- ### Paralel dasturlash
    - [Coursera (Scala)](https://www.coursera.org/learn/parprog1/home/week/1)
    - [Efficient Python for High Performance Parallel Computing (video)](https://www.youtube.com/watch?v=uY85GkaYzBk)

- ### Xabar almashish, Serializatsiya, va Queue Tizimlar
    - [Thrift](https://thrift.apache.org/)
        - [Tutorial](http://thrift-tutorial.readthedocs.io/en/latest/intro.html)
    - [Protocol Buffers](https://developers.google.com/protocol-buffers/)
        - [Tutorials](https://developers.google.com/protocol-buffers/docs/tutorials)
    - [gRPC](http://www.grpc.io/)
        - [gRPC 101 for Java Developers (video)](https://www.youtube.com/watch?v=5tmPvSe7xXQ&list=PLcTqM9n_dieN0k1nSeN36Z_ppKnvMJoly&index=1)
    - [Redis](http://redis.io/)
        - [Tutorial](http://try.redis.io/)
    - [Amazon SQS (queue)](https://aws.amazon.com/sqs/)
    - [Amazon SNS (pub-sub)](https://aws.amazon.com/sns/)
    - [RabbitMQ](https://www.rabbitmq.com/)
        - [Get Started](https://www.rabbitmq.com/getstarted.html)
    - [Celery](http://www.celeryproject.org/)
        - [First Steps With Celery](http://docs.celeryproject.org/en/latest/getting-started/first-steps-with-celery.html)
    - [ZeroMQ](http://zeromq.org/)
        - [Intro - Read The Manual](http://zeromq.org/intro:read-the-manual)
    - [ActiveMQ](http://activemq.apache.org/)
    - [Kafka](http://kafka.apache.org/documentation.html#introduction)
    - [MessagePack](http://msgpack.org/index.html)
    - [Avro](https://avro.apache.org/)

- ### A*
    - [A Search Algorithm](https://en.wikipedia.org/wiki/A*_search_algorithm)
    - [A* Pathfinding Tutorial (video)](https://www.youtube.com/watch?v=KNXfSOx4eEE)
    - [A* Pathfinding (E01: algorithm explanation) (video)](https://www.youtube.com/watch?v=-L-WgKMFuhE)

- ### Fast Fourier Transform
    - [An Interactive Guide To The Fourier Transform](https://betterexplained.com/articles/an-interactive-guide-to-the-fourier-transform/)
    - [What is a Fourier transform? What is it used for?](http://www.askamathematician.com/2012/09/q-what-is-a-fourier-transform-what-is-it-used-for/)
    - [What is the Fourier Transform? (video)](https://www.youtube.com/watch?v=Xxut2PN-V8Q)
    - [Divide & Conquer: FFT (video)](https://www.youtube.com/watch?v=iTMn0Kt18tg&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=4)
    - [Understanding The FFT](http://jakevdp.github.io/blog/2013/08/28/understanding-the-fft/)

- ### Bloom Filter
    - m-ta bitlik va k-ta hashlash funksiyalik Bloom filterda elementni joylash va tekshirish O(k) ish vaqtini oladi
    - [Bloom Filters (video)](https://www.youtube.com/watch?v=-SuTGoFYjZs)
    - [Bloom Filters | Mining of Massive Datasets | Stanford University (video)](https://www.youtube.com/watch?v=qBTdukbzc78)
    - [Tutorial](http://billmill.org/bloomfilter-tutorial/)
    - [How To Write A Bloom Filter App](http://blog.michaelschmatz.com/2016/04/11/how-to-write-a-bloom-filter-cpp/)

- ### HyperLogLog
    - [How To Count A Billion Distinct Objects Using Only 1.5KB Of Memory](http://highscalability.com/blog/2012/4/5/big-data-counting-how-to-count-a-billion-distinct-objects-us.html)

- ### Locality-Sensitive Hashlash
    - dokumentlarni o'xshashligini tekshirish uchun ishlatiladi
    - MD5 va SHA teskarisi. MD5 va SHA esa dokumentlar/stringlarni bir xilligini tekshirish uchun ishlatiladi
    - [Simhashing (hopefully) made simple](http://ferd.ca/simhashing-hopefully-made-simple.html)

- ### van Emde Boas Tree-lari
    - [Divide & Conquer: van Emde Boas Trees (video)](https://www.youtube.com/watch?v=hmReJCupbNU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=6)
    - [MIT Lecture Notes](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-046j-design-and-analysis-of-algorithms-spring-2012/lecture-notes/MIT6_046JS12_lec15.pdf)

- ### Kattalashtirilgan Data Strukturalari
    - [CS 61B Lecture 39: Augmenting Data Structures](https://archive.org/details/ucberkeley_webcast_zksIj9O8_jc)

- ### Balanced search tree-lar
    - Kamida bitta balanced binary tree turini biling (va uni qanday yozishni ham biling)
    - "Balanced search tree-lar orasida, AVL va 2/3 tree-lar hozir o'tmishga aylangan, va red-black tree-lar ancha mashhurroq.
        Xususan qiziqarli bo'lgan o'z-o'zini tashkil qiladigan data struktura bu splay tree. Splay tree
        har safar key so'ralganda uni rotatsiyadan foydalangan holda root-ga o'tkazadi." - Skiena
    - Bulardan men splay tree-ni kodda yozishni tanladim. Bilishimcha intervyuda sizdan balanced search tree-ni
        yozishni so'rashmaydi. Lekin men baribir yozishni xohladim va tan olaylik splay tree-lar zo'r.
        Men juda ko'p red-black tree kodlarini ham o'qidim.
        - Splay tree: insert, search, delete funksiyalari
        Agar red-black tree-ni yozadigan bo'lsangiz faqat shularni yozishga harakat qiling:
        - Search va insertion funksiyalari, delete-ni tashlab ketavering
    - Men B-tree-lar haqida ko'proq o'rganmoqchiman chunki ular katta data to'plamlari bilan juda ko'p ishlatiladi
    - [Self-balancing binary search tree](https://en.wikipedia.org/wiki/Self-balancing_binary_search_tree)

    - **AVL tree-lar**
        - Amalda:
            Meni fikrimda AVL tree-lar amalda uncha ishlatilmaydi. Lekin men qayerda ishlatilishi mumkinligini ayta olaman:
            AVL bu search, insertion, va removal funksiyalarini O(log n) tezligida qila oladigan yana bitta struktura. AVL tree-lar
            red-black tree-larga nisbatan ancha uzil-kesil balanslangan. Shuning uchun insertion va removal sekin, lekin search tezroq.
            Shu sababli u bir marta qurilib qayta-qayta yuklanib ishlatiladigan data strukturalari uchun juda qo'l keladi.
            Masalan: til lug'atlari yoki dastur lu'gatlari (assembler va interpreter opcode-lari)
        - [MIT AVL Trees / AVL Sort (video)](https://www.youtube.com/watch?v=FNeL18KsWPc&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=6)
        - [AVL Trees (video)](https://www.coursera.org/learn/data-structures/lecture/Qq5E0/avl-trees)
        - [AVL Tree Implementation (video)](https://www.coursera.org/learn/data-structures/lecture/PKEBC/avl-tree-implementation)
        - [Split And Merge](https://www.coursera.org/learn/data-structures/lecture/22BgE/split-and-merge)

    - **Splay trees**
        - Amalda:
            Splay tree-lar asosan cache-lar, memory allocator-lar, router-lar, garbage collector-lar, data compressiya,
            rope data struktura, Windows NT, va hokazo componentlarni qurish uchun ishlatiladi
        - [CS 61B: Splay Trees (video)](https://archive.org/details/ucberkeley_webcast_G5QIXywcJlY)
        - MIT ma'ruza: Splay Trees:
            - Juda ko'p matematika aralashgan, lekin aniq oxirgi 10 minutini ko'ring
            - [Video](https://www.youtube.com/watch?v=QnPl_Y6EqMo)

    - **Red/black tree-lar**
        - Bular 2-3 tree-ni tarjimasi (pastni ko'ring)
        - Amalda:
            Red-black tree-lar insertion, deletion va search uchun eng-yomon ish vaqtini kafolatlaydi.
            Uni shu xususiyati vaqt juda muhim bo'lgan dasturlarda foydali qiladi. Hamda eng-yomon vaqtni
            kafolat qiladigan data strukturalarni foydali bir qismi bo'lib ishlaydi;
            masalan, kompyutatsion geometriyada ishlatiladigan ko'p data strukturalar red-black tree-larga asoslanishi mumkin
            va hozirgi Linux kernellarda ishlatiladigan "Completely Fair Scheduler" red-black tree ishlatadi. Javaning 8 versiyasida,
            oldin bir xil bo'lgan elementlari saqlash uchun LinkedList ishlatgan HashMap data strukturasi o'zgartirilib 
            hozirda Red-Black tree ishlatadi
        - [Aduni - Algorithms - Lecture 4 (link videoni kerakli joyidan boshlaydi) (video)](https://youtu.be/1W3x0f_RmUo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3871)
        - [Aduni - Algorithms - Lecture 5 (video)](https://www.youtube.com/watch?v=hm2GHwyKF1o&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=5)
        - [Red-Black Tree](https://en.wikipedia.org/wiki/Red%E2%80%93black_tree)
        - [An Introduction To Binary Search And Red Black Tree](https://www.topcoder.com/community/competitive-programming/tutorials/an-introduction-to-binary-search-and-red-black-trees/)

    - **2-3 search tree-lar**
        - Amalda:
            2-3 tree-lar sekinroq ishlaydigan search operatsiyasi hisobiga juda tez insert operatsiyasiga ega.
        - 2-3 tree-lar kamdan-kam ishlatiladi chunki uni kodda yozish uchun har xil node-lar kerak bo'ladi. O'rniga, odamlar Red Black tree-larni ishlatadi
        - [23-Tree Intuition and Definition (video)](https://www.youtube.com/watch?v=C3SsdUqasD4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=2)
        - [Binary View of 23-Tree](https://www.youtube.com/watch?v=iYvBtGKsqSg&index=3&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [2-3 Trees (student recitation) (video)](https://www.youtube.com/watch?v=TOb1tuEZ2X4&index=5&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

    - **2-3-4 Tree-lar (shuningdek 2-4 tree nomi bilan tanilgan)**
        - Amalda:
            Har 2-4 tree uchun unga mos elementlari bir xil tartibda bo'lgan red-black bor. Insertion va deletion funksiyalari red-black
            tree-dagi color-flipping va rotation funksiyalariga tengma-tengdir. Bu xususiyati uni red-black tree-larni tagidagi mantiqni 
            tushunishda juda muhim rol o'ynaydi va shuning uchun ko'p kirish algoritm kitoblari red-black tree-dan oldin 2-4 treelar haqida gapiradi,
            garchi **2-4 tree-lar amalda uncha ko'p ishlatilmasada**.
        - [CS 61B Lecture 26: Balanced Search Trees (video)](https://archive.org/details/ucberkeley_webcast_zqrqYXkth6Q)
        - [Bottom Up 234-Trees (video)](https://www.youtube.com/watch?v=DQdMYevEyE4&index=4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [Top Down 234-Trees (video)](https://www.youtube.com/watch?v=2679VQ26Fp4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=5)

    - **N-talik (K-talik, M-talik) tree-lar**
        - eslatma: N va K bu branchlash faktori (maksimum branchlar)
        - binary tree-lar bu branchlash faktori = 2 bo'lgan 2-talik tree-lar
        - 2-3 tree-lar 3-talik xisoblanadi
        - [K-Ary Tree](https://en.wikipedia.org/wiki/K-ary_tree)

    - **B-Tree**
        - Qiziq fakt: bu noma'lum, lekin B-tree-dagi B Boeing, Balanced, yoki Bayerdan (boshqa ixtirochisi) olingan bo'lishi mumkin
        - Amalda:
            B-Tree-lar ma'lumotlar bazasida keng ishlatiladi. Ko'p zamonaviy fayl tizimlari B-tree yoki uni boshqa variantlarini ishlatadi.
            Ma'lumotlar bazasidan tashqari, B-Tree-lar berilgan fayldagi tasodifiy bo'lakni tez o'qishga yordam beradi. Berilgan i fayl bo'lak adresini disk bo'lak adresiga aylantirish asosiy muammodir.
        - [B-Tree](https://en.wikipedia.org/wiki/B-tree)
        - [B-Tree Datastructure](http://btechsmartclass.com/data_structures/b-trees.html)
        - [Introduction to B-Trees (video)](https://www.youtube.com/watch?v=I22wEC1tTGo&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=6)
        - [B-Tree Definition and Insertion (video)](https://www.youtube.com/watch?v=s3bCdZGrgpA&index=7&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [B-Tree Deletion (video)](https://www.youtube.com/watch?v=svfnVhJOfMc&index=8&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [MIT 6.851 - Memory Hierarchy Models (video)](https://www.youtube.com/watch?v=V3omVLzI0WE&index=7&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf)
                - keshga e'tiborsiz B-Tree-lar haqida, juda qiziq data strukturalari
                - birinchi 37 minuti juda texnik, o'tkazib yuborsangiz bo'ladi (B bu bo'lak hajmi, kesh qator hajmi)


- ### k-D Tree-lar
    - Uchburchak ichidagi nuqtalarni topish uchun yoki yuqori o'lchovli obyektlar uchun juda zo'r
    - k-ta yaqin qo'shnilarni topish uchun mos
    - [Kd Trees (video)](https://www.youtube.com/watch?v=W94M9D_yXKk)
    - [kNN K-d tree algorithm (video)](https://www.youtube.com/watch?v=Y4ZgLlDfKDg)

- ### Skip listlar
    - "Bular qandaydir kult data strukturalari" - Skiena
    - [Randomization: Skip Lists (video)](https://www.youtube.com/watch?v=2g9OSRKJuzM&index=10&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [For animations and a little more detail](https://en.wikipedia.org/wiki/Skip_list)

- ### Network Flow
    - [Ford-Fulkerson in 5 minutes — Step by step example (video)](https://www.youtube.com/watch?v=Tl90tNtKvxs)
    - [Ford-Fulkerson Algorithm (video)](https://www.youtube.com/watch?v=v1VgJmkEJW0)
    - [Network Flows (video)](https://www.youtube.com/watch?v=2vhN4Ice5jI)

- ### Disjoint Set & Union Find
    - [UCB 61B - Disjoint Sets; Sorting & selection (video)](https://archive.org/details/ucberkeley_webcast_MAEGXTwmUsI)
    - [Sedgewick Algorithms - Union-Find (6 videos)](https://www.coursera.org/learn/algorithms-part1/home/week/1)

- ### Tez hisoblash uchun matematika
    - [Integer Arithmetic, Karatsuba Multiplication (video)](https://www.youtube.com/watch?v=eCaXlAaN2uE&index=11&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [The Chinese Remainder Theorem (used in cryptography) (video)](https://www.youtube.com/watch?v=ru7mWZJlRQg)

- ### Treap
    - Binary search tree va heapni birikmasi
    - [Treap](https://en.wikipedia.org/wiki/Treap)
    - [Data Structures: Treaps explained (video)](https://www.youtube.com/watch?v=6podLUYinH8)
    - [Applications in set operations](https://www.cs.cmu.edu/~scandal/papers/treaps-spaa98.pdf)

- ### Linear Programming (videolar)
    - [Linear Programming](https://www.youtube.com/watch?v=M4K6HYLHREQ)
    - [Finding minimum cost](https://www.youtube.com/watch?v=2ACJ9ewUC6U)
    - [Finding maximum value](https://www.youtube.com/watch?v=8AA_81xI3ik)
    - [Solve Linear Equations with Python - Simplex Algorithm](https://www.youtube.com/watch?v=44pAWI7v5Zk)

- ### Geometry, Convex hull (videolar)
    - [Graph Alg. IV: Intro to geometric algorithms - Lecture 9](https://youtu.be/XIAQRlNkJAw?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3164)
    - [Geometric Algorithms: Graham & Jarvis - Lecture 10](https://www.youtube.com/watch?v=J5aJEcOr6Eo&index=10&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
    - [Divide & Conquer: Convex Hull, Median Finding](https://www.youtube.com/watch?v=EzeYI7p9MjU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=2)

- ### Diskret matematika
    - Pastdagi videolarni ko'ring

- ### Machine Learning
    - Nega ML?
        - [How Google Is Remaking Itself As A Machine Learning First Company](https://backchannel.com/how-google-is-remaking-itself-as-a-machine-learning-first-company-ada63defcb70)
        - [Large-Scale Deep Learning for Intelligent Computer Systems (video)](https://www.youtube.com/watch?v=QSaZGT4-6EY)
        - [Deep Learning and Understandability versus Software Engineering and Verification by Peter Norvig](https://www.youtube.com/watch?v=X769cyzBNVw)
    - [Google's Cloud Machine learning tools (video)](https://www.youtube.com/watch?v=Ja2hxBAwG_0)
    - [Google Developers' Machine Learning Recipes (Scikit Learn & Tensorflow) (video)](https://www.youtube.com/playlist?list=PLOU2XLYxmsIIuiBfYad6rFYQU_jL2ryal)
    - [Tensorflow (video)](https://www.youtube.com/watch?v=oZikw5k_2FM)
    - [Tensorflow Tutoriallari](https://www.tensorflow.org/versions/r0.11/tutorials/index.html)
    - [Practical Guide to implementing Neural Networks in Python (Theano ishlatgan holda)](http://www.analyticsvidhya.com/blog/2016/04/neural-networks-python-theano/)
    - Kurslar:
        - [Zo'r boshlovchi kurs: Machine Learning](https://www.coursera.org/learn/machine-learning)
              - [faqat videolari](https://www.youtube.com/playlist?list=PLZ9qNFMHZ-A4rycgrgOYma6zxF4BZGGPW)
              - 12-dan 18-gacha videolar chiqizli algebrani qaytarish uchun (14 va 15 dublikat)
        - [Neural Networks for Machine Learning](https://www.coursera.org/learn/neural-networks)
        - [Google's Deep Learning Nanodegree](https://www.udacity.com/course/deep-learning--ud730)
        - [Google/Kaggle Machine Learning Engineer Nanodegree](https://www.udacity.com/course/machine-learning-engineer-nanodegree-by-google--nd009)
        - [Self-Driving Car Engineer Nanodegree](https://www.udacity.com/drive)
        - [Metis Online Course ($99 for 2 months)](http://www.thisismetis.com/explore-data-science)
    - Manbalar:
        - Kitoblar:
            - [Python Machine Learning](https://www.amazon.com/Python-Machine-Learning-Sebastian-Raschka/dp/1783555130/)
            - [Data Science from Scratch: First Principles with Python](https://www.amazon.com/Data-Science-Scratch-Principles-Python/dp/149190142X)
            - [Introduction to Machine Learning with Python](https://www.amazon.com/Introduction-Machine-Learning-Python-Scientists/dp/1449369413/)
        - [Machine Learning for Software Engineers](https://github.com/ZuzooVn/machine-learning-for-software-engineers)
        - Data School: http://www.dataschool.io/

---

## Ba'zi mavzular bo'yicha qo'shimcha ma'lumotlar

    Men bularni Yuqorida keltirilgan ba'zi fikrlarni mustahkamlash uchun qo'shdim, lekin yuqorida qo'shishni xohlamadim
    chunki juda ko'p resurslarni o'z ichiga oladi. Bitta mavzuda juda ko'p qolib ketish ham yaxshi emas.
    Siz shu asrda ishga qabul qilinishingizni xohlaysiz shundaymi?

- **SOLID**   
    - [ ] [Bob Martin SOLID Principles of Object Oriented and Agile Design (video)](https://www.youtube.com/watch?v=TMuno5RZNeE)
    - [ ] S - [Single Responsibility Principle](http://www.oodesign.com/single-responsibility-principle.html) | [Single responsibility to each Object](http://www.javacodegeeks.com/2011/11/solid-single-responsibility-principle.html)
        - [more flavor](https://docs.google.com/open?id=0ByOwmqah_nuGNHEtcU5OekdDMkk)
    - [ ] O - [Open/Closed Principal](http://www.oodesign.com/open-close-principle.html)  | [On production level Objects are ready for extension but not for modification](https://en.wikipedia.org/wiki/Open/closed_principle)
        - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgN2M5MTkwM2EtNWFkZC00ZTI3LWFjZTUtNTFhZGZiYmUzODc1&hl=en)
    - [ ] L - [Liskov Substitution Principal](http://www.oodesign.com/liskov-s-substitution-principle.html) | [Base Class and Derived class follow ‘IS A’ principal](http://stackoverflow.com/questions/56860/what-is-the-liskov-substitution-principle)
        - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgNzAzZjA5ZmItNjU3NS00MzQ5LTkwYjMtMDJhNDU5ZTM0MTlh&hl=en)
    - [ ] I - [Interface segregation principle](http://www.oodesign.com/interface-segregation-principle.html) | Mijozlarni o'zlari ishlatmaydigan interfeyslarni implement qilishga majburlash kerak emas
        - [Interface Segregation Principle in 5 minutes (video)](https://www.youtube.com/watch?v=3CtAfl7aXAQ)
        - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgOTViYjJhYzMtMzYxMC00MzFjLWJjMzYtOGJiMDc5N2JkYmJi&hl=en)
    - [ ] D -[Dependency Inversion principle](http://www.oodesign.com/dependency-inversion-principle.html) | Reduce the dependency In composition of objects.
        - [Why Is The Dependency Inversion Principle And Why Is It Important](http://stackoverflow.com/questions/62539/what-is-the-dependency-inversion-principle-and-why-is-it-important)
        - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgMjdlMWIzNGUtZTQ0NC00ZjQ5LTkwYzQtZjRhMDRlNTQ3ZGMz&hl=en)


- **Union-Find**
    - [Overview](https://www.coursera.org/learn/data-structures/lecture/JssSY/overview)
    - [Naive Implementation](https://www.coursera.org/learn/data-structures/lecture/EM5D0/naive-implementations)
    - [Trees](https://www.coursera.org/learn/data-structures/lecture/Mxu0w/trees)
    - [Union By Rank](https://www.coursera.org/learn/data-structures/lecture/qb4c2/union-by-rank)
    - [Path Compression](https://www.coursera.org/learn/data-structures/lecture/Q9CVI/path-compression)
    - [Analysis Options](https://www.coursera.org/learn/data-structures/lecture/GQQLN/analysis-optional)

- **Dinamik dasturlash haqida batafsil** (videolar)
    - [6.006: Dynamic Programming I: Fibonacci, Shortest Paths](https://www.youtube.com/watch?v=OQ5jsbhAv_M&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=19)
    - [6.006: Dynamic Programming II: Text Justification, Blackjack](https://www.youtube.com/watch?v=ENyox7kNKeY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=20)
    - [6.006: DP III: Parenthesization, Edit Distance, Knapsack](https://www.youtube.com/watch?v=ocZMDMZwhCY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=21)
    - [6.006: DP IV: Guitar Fingering, Tetris, Super Mario Bros.](https://www.youtube.com/watch?v=tp4_UXaVyx8&index=22&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [6.046: Dynamic Programming & Advanced DP](https://www.youtube.com/watch?v=Tw1k46ywN6E&index=14&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [6.046: Dynamic Programming: All-Pairs Shortest Paths](https://www.youtube.com/watch?v=NzgFUwOaoIw&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=15)
    - [6.046: Dynamic Programming (student recitation)](https://www.youtube.com/watch?v=krZI60lKPek&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=12)

- **Advanced Graph Processing** (videolar)
    - [Synchronous Distributed Algorithms: Symmetry-Breaking. Shortest-Paths Spanning Trees](https://www.youtube.com/watch?v=mUBmcbbJNf4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=27)
    - [Asynchronous Distributed Algorithms: Shortest-Paths Spanning Trees](https://www.youtube.com/watch?v=kQ-UQAzcnzA&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=28)

- MIT **Ehtimollik nazariyasi** (matematikaga oid, sekin astalik bilan ko'rib chiqing, matematikaga oid narsalar uchun yaxshi) (videolar):
    - [MIT 6.042J - Probability Introduction](https://www.youtube.com/watch?v=SmFwFdESMHI&index=18&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Conditional Probability](https://www.youtube.com/watch?v=E6FbvM-FGZ8&index=19&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Independence](https://www.youtube.com/watch?v=l1BCv3qqW4A&index=20&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Random Variables](https://www.youtube.com/watch?v=MOfhhFaQdjw&list=PLB7540DEDD482705B&index=21)
    - [MIT 6.042J - Expectation I](https://www.youtube.com/watch?v=gGlMSe7uEkA&index=22&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Expectation II](https://www.youtube.com/watch?v=oI9fMUqgfxY&index=23&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Large Deviations](https://www.youtube.com/watch?v=q4mwO2qS2z4&index=24&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Random Walks](https://www.youtube.com/watch?v=56iFMY8QW2k&list=PLB7540DEDD482705B&index=25)

- [Simonson: Approximation Algorithms (video)](https://www.youtube.com/watch?v=oDniZCmNmNw&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=19)

- **String Matching**
    - Rabin-Karp (videolar):
        - [Rabin Karps Algorithm](https://www.coursera.org/learn/data-structures/lecture/c0Qkw/rabin-karps-algorithm)
        - [Precomputing](https://www.coursera.org/learn/data-structures/lecture/nYrc8/optimization-precomputation)
        - [Optimization: Implementation and Analysis](https://www.coursera.org/learn/data-structures/lecture/h4ZLc/optimization-implementation-and-analysis)
        - [Table Doubling, Karp-Rabin](https://www.youtube.com/watch?v=BRO7mVIFt08&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=9)
        - [Rolling Hashes, Amortized Analysis](https://www.youtube.com/watch?v=w6nuXg0BISo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=32)
    - Knuth-Morris-Pratt (KMP):
        - [TThe Knuth-Morris-Pratt (KMP) String Matching Algorithm](https://www.youtube.com/watch?v=5i7oKodCRJo)
    - Boyer–Moore string search algoritmi
        - [Boyer-Moore String Search Algorithm](https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_string_search_algorithm)
        - [Advanced String Searching Boyer-Moore-Horspool Algorithms (video)](https://www.youtube.com/watch?v=QDZpzctPf10)
    - [Coursera: Algorithms on Strings](https://www.coursera.org/learn/algorithms-on-strings/home/week/1)
        - juda yaxshi boshlanadi, ammo KMP-dan o'tib ketishi bilan u kerak bo'lgandan ko'ra murakkabroq bo'ladi
        - tries ning yaxshi tarifi berilgan
        - o'tqazib yuborishingiz mumkin

- **Sorting**

    - Sorting bo'yicha Stanford universiteti ma'ruzalari:
        - [Lecture 15 | Programming Abstractions (video)](https://www.youtube.com/watch?v=ENp00xylP7c&index=15&list=PLFE6E58F856038C69)
        - [Lecture 16 | Programming Abstractions (video)](https://www.youtube.com/watch?v=y4M9IVgrVKo&index=16&list=PLFE6E58F856038C69)
    - Shai Simonson, [Aduni.org](http://www.aduni.org/):
        - [Algorithms - Sorting - Lecture 2 (video)](https://www.youtube.com/watch?v=odNJmw5TOEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=2)
        - [Algorithms - Sorting II - Lecture 3 (video)](https://www.youtube.com/watch?v=hj8YKFTFKEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=3)
    - Steven Skienaning sorting mavzusidagi ma'ruzalari:
        - [lecture begins at 26:46 (video)](https://youtu.be/ute-pmMkyuk?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1600)
        - [lecture begins at 27:40 (video)](https://www.youtube.com/watch?v=yLvp-pB8mak&index=8&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [lecture begins at 35:00 (video)](https://www.youtube.com/watch?v=q7K9otnzlfE&index=9&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [lecture begins at 23:50 (video)](https://www.youtube.com/watch?v=TvqIGu9Iupw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=10)

## Video Seriyalar

Qulay joylashib oling va maroqlaning. "Netflix va skillar" :P

- [List of individual Dynamic Programming problems (each is short)](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)

- [x86 Architecture, Assembly, Applications (11 videos)](https://www.youtube.com/playlist?list=PL038BE01D3BAEFDB0)

- [MIT 18.06 Linear Algebra, Spring 2005 (35 videos)](https://www.youtube.com/playlist?list=PLE7DDD91010BC51F8)

- [Excellent - MIT Calculus Revisited: Single Variable Calculus](https://www.youtube.com/playlist?list=PL3B08AE665AB9002A)

- [Computer Science 70, 001 - Spring 2015 - Discrete Mathematics and Probability Theory](http://www.infocobuild.com/education/audio-video-courses/computer-science/cs70-spring2015-berkeley.html)

- [Discrete Mathematics by Shai Simonson (19 videos)](https://www.youtube.com/playlist?list=PL3o9D4Dl2FJ9q0_gtFXPh_H4POI5dK0yG)

- [Discrete Mathematics Part 1 by Sarada Herke (5 videos)](https://www.youtube.com/playlist?list=PLGxuz-nmYlQPOc4w1Kp2MZrdqOOm4Jxeo)

- CSE373 - Algoritmlarning tahlillari (25 ta videolar to'plami)
    - [Skiena lectures from Algorithm Design Manual](https://www.youtube.com/watch?v=ZFjhkohHdAA&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=1)

- [UC Berkeley 61B (Spring 2014): Data Structures (25 videos)](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd)

- [UC Berkeley 61B (Fall 2006): Data Structures (39 videos)](https://archive.org/details/ucberkeley-webcast-PL4BBB74C7D2A1049C)

- [UC Berkeley 61C: Machine Structures (26 videos)](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iCl2-D-FS5mk0jFF6cYSJs_)

- [OOSE: Software Dev Using UML and Java (21 videos)](https://www.youtube.com/playlist?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)

- ~~[UC Berkeley CS 152: Computer Architecture and Engineering (20 videos)](https://www.youtube.com/watch?v=UH0QYvtP7Rk&index=20&list=PLkFD6_40KJIwEiwQx1dACXwh-2Fuo32qr)~~

- [MIT 6.004: Computation Structures (49 videos)](https://www.youtube.com/playlist?list=PLDSlqjcPpoL64CJdF0Qee5oWqGS6we_Yu)

- [Carnegie Mellon - Computer Architecture Lectures (39 videos)](https://www.youtube.com/playlist?list=PL5PHm2jkkXmi5CxxI7b3JCL1TWybTDtKq)

- [MIT 6.006: Intro to Algorithms (47 videos)](https://www.youtube.com/watch?v=HtSuA80QTyo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&nohtml5=False)

- [MIT 6.033: Computer System Engineering (22 videos)](https://www.youtube.com/watch?v=zm2VP0kHl1M&list=PL6535748F59DCA484)

- [MIT 6.034 Artificial Intelligence, Fall 2010 (30 videos)](https://www.youtube.com/playlist?list=PLUl4u3cNGP63gFHB6xb-kVBiQHYe_4hSi)

- [MIT 6.042J: Mathematics for Computer Science, Fall 2010 (25 videos)](https://www.youtube.com/watch?v=L3LMbpZIKhQ&list=PLB7540DEDD482705B)

- [MIT 6.046: Design and Analysis of Algorithms (34 videos)](https://www.youtube.com/watch?v=2P-yW7LQr08&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

- [MIT 6.050J: Information and Entropy, Spring 2008 (19 videos)](https://www.youtube.com/watch?v=phxsQrZQupo&list=PL_2Bwul6T-A7OldmhGODImZL8KEVE38X7)

- [MIT 6.851: Advanced Data Structures (22 videos)](https://www.youtube.com/watch?v=T0yzrZL1py0&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=1)

- [MIT 6.854: Advanced Algorithms, Spring 2016 (24 videos)](https://www.youtube.com/playlist?list=PL6ogFv-ieghdoGKGg2Bik3Gl1glBTEu8c)

- [Harvard COMPSCI 224: Advanced Algorithms (25 videos)](https://www.youtube.com/playlist?list=PL2SOU6wwxB0uP4rJgf5ayhHWgw7akUWSf)

- [MIT 6.858 Computer Systems Security, Fall 2014](https://www.youtube.com/watch?v=GqmQg-cszw4&index=1&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)

- [Stanford: Programming Paradigms (27 videos)](https://www.youtube.com/playlist?list=PL9D558D49CA734A02)

- [Introduction to Cryptography by Christof Paar](https://www.youtube.com/playlist?list=PL6N5qY2nvvJE8X75VkXglSrVhLv1tVcfy)
    - [Course Website along with Slides and Problem Sets](http://www.crypto-textbook.com/)

- [Mining Massive Datasets - Stanford University (94 videos)](https://www.youtube.com/playlist?list=PLLssT5z_DsK9JDLcT8T62VtzwyW9LNepV)

- [Graph Theory by Sarada Herke (67 videos)](https://www.youtube.com/user/DrSaradaHerke/playlists?shelf_id=5&view=50&sort=dd)

## Computer Science Kurslari

- [Directory of Online CS Courses](https://github.com/open-source-society/computer-science)
- [Directory of CS Courses (many with online lectures)](https://github.com/prakhar1989/awesome-courses)

## Algoritmlarning kodda yozilishi

- [Multiple Algorithms implementation by Princeton University)](https://algs4.cs.princeton.edu/code)


## Maqolalar

- [Love classic papers?](https://www.cs.cmu.edu/~crary/819-f09/)
- [1978: Communicating Sequential Processes](http://spinroot.com/courses/summer/Papers/hoare_1978.pdf)
    - [implemented in Go](https://godoc.org/github.com/thomas11/csp)
- [2003: The Google File System](http://static.googleusercontent.com/media/research.google.com/en//archive/gfs-sosp2003.pdf)
    - 2012 yilda Kolossus bilan almashtirildi
- [2004: MapReduce: Simplified Data Processing on Large Clusters]( http://static.googleusercontent.com/media/research.google.com/en//archive/mapreduce-osdi04.pdf)
    - Asosan Cloud Dataflow bilan almashtirilganmi??
- [2006: Bigtable: A Distributed Storage System for Structured Data](https://static.googleusercontent.com/media/research.google.com/en//archive/bigtable-osdi06.pdf)
    - [An Inside Look at Google BigQuery](https://cloud.google.com/files/BigQueryTechnicalWP.pdf)
- [2006: The Chubby Lock Service for Loosely-Coupled Distributed Systems](https://research.google.com/archive/chubby-osdi06.pdf)
- [2007: Dynamo: Amazon’s Highly Available Key-value Store](http://s3.amazonaws.com/AllThingsDistributed/sosp/amazon-dynamo-sosp2007.pdf)
    - The Dynamo maqolasi NoSQL revolyutsiyasini boshladi
- [2007: What Every Programmer Should Know About Memory (very long, and the author encourages skipping of some sections)](https://www.akkadia.org/drepper/cpumemory.pdf)
- [2010: Dapper, a Large-Scale Distributed Systems Tracing Infrastructure](https://research.google.com/pubs/archive/36356.pdf)
- [2010: Dremel: Interactive Analysis of Web-Scale Datasets](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/36632.pdf)
- [2012: Google's Colossus](https://www.wired.com/2012/07/google-colossus/)
    - maqolaning o'zi mavjud emas
- 2012: AddressSanitizer: A Fast Address Sanity Checker:
    - [paper](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/37752.pdf)
    - [video](https://www.usenix.org/conference/atc12/technical-sessions/presentation/serebryany)
- 2013: Spanner: Googlening global tarqatilgan ma'lumotlar bazasi:
    - [maqola](http://static.googleusercontent.com/media/research.google.com/en//archive/spanner-osdi2012.pdf)
    - [video](https://www.usenix.org/node/170855)
- [2014: Machine Learning: The High-Interest Credit Card of Technical Debt](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43146.pdf)
- [2015: Continuous Pipelines at Google](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43790.pdf)
- [2015: High-Availability at Massive Scale: Building Google’s Data Infrastructure for Ads](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44686.pdf)
- [2015: TensorFlow: Large-Scale Machine Learning on Heterogeneous Distributed Systems](http://download.tensorflow.org/paper/whitepaper2015.pdf )
- [2015: How Developers Search for Code: A Case Study](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43835.pdf)
- [2016: Borg, Omega, and Kubernetes](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44843.pdf)


## Litsenziya

[CC-BY-SA-4.0](./LICENSE.txt)
