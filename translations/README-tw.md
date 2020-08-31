# Coding Interview University

> 原先我為了成為一個軟體工程師而建立這份簡單的讀書主題清單(To-do list)，
> 但這份To-do list隨著時間而膨脹成這個樣子。 [做完這份To-do list上的每個目標後，我成為了Amazon的工程師](https://startupnextdoor.com/ive-been-acquired-by-amazon/?src=ciu)!
> 你或許不需要像我讀一樣多。但是，每個讓你成為一位稱職工程師所需要的知識都在這裡了。
>
> 我每天讀8~12小時的書，這樣持續了好幾個月。這是我的故事:[為什麼我為了Google面試而讀了8個月](https://medium.freecodecamp.org/why-i-studied-full-time-for-8-months-for-a-google-interview-cc662ce9bb13)
>
> 在這份To-do list內的主題會讓你擁有足夠的知識去面對幾乎每家軟體公司的專業面試，
> 這些公司包含了科技巨獸，例如Amazon、Facebook、Google，或者是Microsoft。
>
> *祝你好運!*

<details>
<summary>翻譯:</summary>

- [中文版本](translations/README-cn.md)
- [Tiếng Việt - Vietnamese](translations/README-vi.md)
- [Español](translations/README-es.md)
- [Português Brasileiro](translations/README-ptbr.md)
- [繁體中文](translations/README-tw.md)

</details>

<details>
<summary>正在翻譯的項目:</summary>

- [हिन्दी](https://github.com/jwasham/coding-interview-university/issues/81)
- [עברית](https://github.com/jwasham/coding-interview-university/issues/82)
- [Bahasa Indonesia](https://github.com/jwasham/coding-interview-university/issues/101)
- [Arabic](https://github.com/jwasham/coding-interview-university/issues/98)
- [Turkish](https://github.com/jwasham/coding-interview-university/issues/90)
- [French](https://github.com/jwasham/coding-interview-university/issues/89)
- [Russian](https://github.com/jwasham/coding-interview-university/issues/87)
- [Ukrainian](https://github.com/jwasham/coding-interview-university/issues/106)
- [Korean(한국어)](https://github.com/jwasham/coding-interview-university/issues/118)
- [Telugu](https://github.com/jwasham/coding-interview-university/issues/117)
- [Polish](https://github.com/jwasham/coding-interview-university/issues/122)
- [Urdu](https://github.com/jwasham/coding-interview-university/issues/140)
- [Thai](https://github.com/jwasham/coding-interview-university/issues/156)
- [Greek](https://github.com/jwasham/coding-interview-university/issues/166)
- [Italian](https://github.com/jwasham/coding-interview-university/issues/170)
- [Malayalam](https://github.com/jwasham/coding-interview-university/issues/239)
- [Japanese (日本語)](https://github.com/jwasham/coding-interview-university/issues/257)

</details>

## What is it?

這是我為了從一個網頁開發者(自學，並且沒有任何與資工、電腦科學有關的學位)，成為一個大公司軟體工程師，持續好幾個月的讀書計畫。

![Coding at the whiteboard - from HBO's Silicon Valley](https://d3j2pkmjtin6ou.cloudfront.net/coding-at-the-whiteboard-silicon-valley.png)

這是為了那些**新手軟體工程師**，或者是那些想要轉換跑道，從軟體/網頁開發者轉為軟體工程師(需要資工、電腦科學的知識)的人。

請注意就算你有多年的軟體/網頁開發經驗，那些著名的大型軟體公司，像是Google、Amazon、Facebook，或是Microsoft事實上把軟體/網頁開發(Software/Web Development)與軟體工程(Software Engineering)視為不同，而後者需要的是電腦科學/資訊工程的知識。

如果你想成為一個可靠的工程師或者是Operation Engineer，閱讀並且學習更多這份清單中的The Optional List(裡面包含網路與資訊安全的知識)。

---

## 目錄

- [What is it?](#what-is-it)
- [Why use it?](#why-use-it)
- [How to use it](#how-to-use-it)
- [不要覺得自己不夠聰明](#dont-feel-you-arent-smart-enough(不要覺得自己不夠聰明))
- [關於影片資源](#about-video-resources(關於影片資源))
- [面試過程&面試準備](#interview-process--general-interview-prep(面試過程&面試準備))
- [面試時專精一種程式語言](#面試時專精一種程式語言(Pick-One-Language-for-the-Interview))
- [書單](#書單(book-list))
- [在你開始之前](#在你開始之前)
- [這份清單沒有包含的內容](#這份清單沒有包含的內容)
- [先備知識](#先備知識)
- [每日計畫](#每日計畫)
- [演算法複雜度 / Big-O / 漸進分析](#演算法複雜度(Algorithmic-complexity)--Big-O--漸進分析(Asymptotic-analysis))
- [資料結構](#資料結構)
    - [陣列](#陣列)
    - [Linked Lists](#linked-lists)
    - [Stack](#Stack(堆疊))
    - [Queue](#Queue(佇列))
    - [Hash table](#Hash-table(雜湊表))
- [更多](#更多)
    - [二分搜尋法](#二分搜尋法(Binary-Search))
    - [位元運算](#位元運算(Bitwise-operations))
- [樹狀結構(Tree)](#樹狀結構(Tree))
    - [Trees-重點與背景知識](#Trees-重點與背景知識)
    - [二元搜尋樹](#二元搜尋樹Binary-search-trees:-BSTs)
    - [Heap / Priority Queue / Binary Heap](#heap--priority-queue--binary-heap)
    - 平衡搜尋樹(基本概念，非細節)
    - 遍歷:前序、中序、後序、BFS、DFS
- [排序](#排序)
    - 選擇排序
    - 插入排序
    - 堆積排序
    - 快速排序
    - 合併排序
- [圖](#圖)
    - 有向圖
    - 無向圖
    - adjacency matrix
    - adjacency list
    - 遍歷: 廣度優先(BFS), 深度優先(DFS)
- [更多知識](#更多知識)
    - [遞迴](#遞迴Recursion)
    - [動態規劃](#動態規劃)
    - [物件導向程式設計](#物件導向程式設計)
    - [設計模式](#設計模式)
    - [組合數&機率](#組合數&機率)
    - [NP、NP-Complete以及近似演算法](#NP、NP-Complete以及近似演算法)
    - [快取(cache)](#快取(cache))
    - [程序與執行緒](#程序與執行緒(Processes&Threads))
    - [Testing](#testing)
    - [排程](#排程Scheduling)
    - [字串搜尋演算法以及操作](#字串搜尋演算法以及操作)
    - [字典樹](#字典樹(Tries))
    - [浮點數](#浮點數)
    - [Unicode](#unicode)
    - [端序](#端序(Endianness))
    - [網路](#網路)
- [系統設計、可擴充性、資料處理](#系統設計、可擴充性、資料處理) (如果你有四年以上的經驗)
- [總複習](#總複習)
- [解題練習](#解題練習)
- [解題練習/挑戰](#解題練習/挑戰)
- [面試前夕](#面試前夕)
- [你的履歷](#你的履歷)
- [想想面試時可能的狀況](#想想面試時可能的狀況)
- [一旦你得到工作](#一旦你得到工作)

---------------- 以下皆為選讀 ----------------

## 額外資源

- [選修書籍](#選修書籍)
- [額外學習](#額外學習)
    - [編譯器](#編譯器)
    - [Emacs and vi(m)](#emacs-and-vim)
    - [Unix命令列工具](#Unix命令列(command-line)工具)
    - [資訊理論](#資訊理論-(影片))
    - [同位位元 & 漢明碼](#同位位元-&-漢明碼-(影片))
    - [Entropy](#entropy)
    - [密碼學](#密碼學)
    - [壓縮](#壓縮)
    - [電腦安全](#電腦安全)
    - [垃圾回收](#垃圾回收(GC))
    - [平行計算](#平行計算)
    - [通訊、序列化以及佇列系統](#通訊、序列化以及佇列系統(Messaging,-Serialization,-and-Queueing-Systems))
    - [A*搜尋演算法](#A*搜尋演算法)
    - [快速傅立葉轉換](#快速傅立葉轉換)
    - [布隆過濾器](#布隆過濾器(Bloom-filter))
    - [HyperLogLog](#hyperloglog)
    - [Locality-Sensitive Hashing](#locality-sensitive-hashing)
    - [van Emde Boas Trees](#van-emde-boas-trees)
    - [Augmented Data Structures](#augmented-data-structures)
    - [平衡樹](#平衡樹)
        - AVL樹
        - 伸縮樹Splay tree
        - 紅黑樹
        - 2-3搜尋樹
        - 2-3-4樹(aka 2-4樹)
        - N-ary (K-ary, M-ary)樹
        - B樹
    - [k-D樹](#k-d樹)
    - [Skip lists](#skip-lists)
    - [Network Flows](#network-flows)
    - [Disjoint Sets & Union Find](#disjoint-sets--union-find)
    - [快速處理的數學](#快速處理(Fast-Processing)的數學)
    - [Treap](#treap)
    - [線性程式設計](#線性程式設計Linear-Programming-(影片))
    - [幾何、Convex hull](#幾何、Convex-hull-(影片))
    - [離散數學](#離散數學)
    - [機器學習](#機器學習)
- [某些主題的額外知識](#某些主題的額外知識)
- [影片系列](#影片系列)
- [電腦科學課程](#電腦科學課程)
- [論文](#論文)

---

## Why use it?

當我開始這項計畫的時候，我不知道Stack與Heap的差別，不知道時間複雜度(Big-O)，不知道樹狀結構(Tree)，也不知道如何遍歷一個圖(Graph)。過去如果我需要寫一個排序演算法(Sorting Algorithm)，那個code一定是個災難。我過去都用程式語言中內建的資料結構(Data Structure)，對於資料結構裡面的實作方法跟原理我完全沒有任何的概念。除非我的程式碰到了"out of memory"的錯誤我才會去找解決方法，否則我從不特別去花費心思管理程式中的記憶體配置。雖然我有用過多維陣列(Multidimensional Arrays)跟關聯陣列(Associative Arrays)，但我從來沒有自己時做過資料結構。

這是個遠大的計畫，或許要花上你數個月的時間。如果你對其中大部分的東西已經很熟悉的話，那麼執行這項計畫所花費的時間將減少許多。

## How to use it

下面每項是大綱，你需要從上到下的去理解這些大綱。

我用了Github-flavored markdown語法，其中包含了可以確定完成進度的任務清單。


**建立一個新的Branch以使用Github-flavored markdown的勾選功能。只要在[]中打x，像是: [x]**


    Fork一個branch，並且跟隨以下的指令

`git checkout -b progress`

`git remote add jwasham https://github.com/jwasham/coding-interview-university`

`git fetch --all`

    在你完成了一些目標後，在框框中打x

`git add .`

`git commit -m "Marked x"`

`git rebase jwasham/master`

`git push --force`

[更多有關Github-flavored markdown](https://guides.github.com/features/mastering-markdown/#GitHub-flavored-markdown)

## Don't feel you aren't smart enough(不要覺得自己不夠聰明)

- 大多數成功的軟體工程師都非常聰明，但他們都有一種覺得自己不夠聰明的不安全感。
- [The myth of the Genius Programmer(天才Programmer的迷思)](https://www.youtube.com/watch?v=0SARbwvhupQ)
- [It's Dangerous to Go Alone: Battling the Invisible Monsters in Tech(不要單打獨鬥:面對科技中的隱形怪物)](https://www.youtube.com/watch?v=1i8ylq4j_EY)

## About Video Resources(關於影片資源)

有些影片要註冊Coursera或者Edx的課程後才能觀看，也就是所謂的MOOCs。有時候某些課程需要等待好幾個月才能註冊，這期間你無法觀看這些課程的影片。

    我非常喜歡那些大學的線上課程。感謝你們幫忙加入一些免費、可隨時觀看的公開資源，像是那些線上課程的YouTube影片。

## Interview Process & General Interview Prep(面試過程&面試準備)

- [ ] [ABC: Always Be Coding](https://medium.com/always-be-coding/abc-always-be-coding-d5f8051afce2#.4heg8zvm4)
- [ ] [Whiteboarding](https://medium.com/@dpup/whiteboarding-4df873dbba2e#.hf6jn45g1)
- [ ] [Effective Whiteboarding during Programming Interviews](http://www.coderust.com/blog/2014/04/10/effective-whiteboarding-during-programming-interviews/)
- [ ] [Demystifying Tech Recruiting](https://www.youtube.com/watch?v=N233T0epWTs)
- [ ] 如何錄取Big Tech(Google, Amazon, Facebook, Apple):
    - [ ] [How to Get a Job at the Big 4 - Amazon, Facebook, Google & Microsoft (video)](https://www.youtube.com/watch?v=YJZCUhxNCv8)
- [ ] Coding面試解密:
    - [ ] [Gayle L McDowell - Cracking The Coding Interview (video)](https://www.youtube.com/watch?v=rEJzOhC5ZtQ)
    - [ ] [Cracking the Coding Interview with Author Gayle Laakmann McDowell (video)](https://www.youtube.com/watch?v=aClxtDcdpsQ)
- [ ] Facebook Coding面試解密:
    - [ ] [The Approach](https://www.youtube.com/watch?v=wCl9kvQGHPI)
    - [ ] [Problem Walkthrough](https://www.youtube.com/watch?v=4UWDyJq8jZg)
- [ ] 準備課程:
    - [ ] [Software Engineer Interview Unleashed (paid course)](https://www.udemy.com/software-engineer-interview-unleashed):
        - 從前Google面試官身上學習如何充實自己，讓自己能夠應付軟體工程師的面試。
    - [ ] [Python for Data Structures, Algorithms, and Interviews (paid course)](https://www.udemy.com/python-for-data-structures-algorithms-and-interviews/):
        - Python面試準備課程，其中包含了資料結構、演算法、模擬面試等等。
    - [ ] [Intro to Data Structures and Algorithms using Python (Udacity free course)](https://www.udacity.com/course/data-structures-and-algorithms-in-python--ud513):
        - Python免費資料結構及演算法課程。
    - [ ] [Data Structures and Algorithms Nanodegree! (Udacity paid Nanodegree)](https://www.udacity.com/course/data-structures-and-algorithms-nanodegree--nd256):
        - 超過100種實際的資料結構及演算法練習。名師指導讓你準備好面試以及工作的實際情況。

## 面試時專精一種程式語言(Pick One Language for the Interview)

在面試的coding階段，你可以選擇任何一個你擅長的程式語言。但多數大公司僅有以下選擇:

- C++
- Java
- Python

你也可以選擇以下的程式語言，但可能會有某些限制:

- JavaScript
- Ruby

我之前寫過一篇關於在面試時選擇程式語言的文章:[Pick One Language for the Coding Interview](https://startupnextdoor.com/important-pick-one-language-for-the-coding-interview/)

你需要非常熟練這個程式語言，並且對他非常了解。

閱讀更多有關程式語言的選擇:
- http://www.byte-by-byte.com/choose-the-right-language-for-your-coding-interview/
- http://blog.codingforinterviews.com/best-programming-language-jobs/

[程式語言相關資源](programming-language-resources.md)

因為我正在學習C、C++以及Python，所以下面會出現一些有關於這些程式語言的資源。

## 書單(Book List)

為了節省你的時間，以下是已經縮減過的書單。

### 面試準備(Interview Prep)

- [ ] [Programming Interviews Exposed: Coding Your Way Through the Interview, 4th Edition](https://www.amazon.com/Programming-Interviews-Exposed-Through-Interview/dp/111941847X/)
    - 附有解答 in C++ and Java
    - 內含很棒的coding面試解密
    - 不會很困難，大多問題都比面試中的還簡單(從我讀過的)
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - 附有解答 in Java

### 如果你有額外的時間(If you have tons of extra time):

選擇以下其中一個:

- [ ] [Elements of Programming Interviews (C++ version)](https://www.amazon.com/Elements-Programming-Interviews-Insiders-Guide/dp/1479274836)
- [ ] [Elements of Programming Interviews in Python](https://www.amazon.com/Elements-Programming-Interviews-Python-Insiders/dp/1537713949/)
- [ ] 程式面試精華 (Java版)
    - [book](https://www.amazon.com/Elements-Programming-Interviews-Java-Insiders/dp/1517435803/)
    - [Companion Project - Method Stub and Test Cases for Every Problem in the Book](https://github.com/gardncl/elements-of-programming-interviews)

### 程式語言精進

***面試時你需要選擇一種程式語言(詳如上述)***

以下是一些我對程式語言的建議。這邊沒有所有種類程式語言的資源，所以歡迎補充。

如果你讀過以下其中一本，你應該已經具備了所有解決coding問題所需要的資料結構與演算法的知識。除非你想要複習，否則**你可以跳過這個計畫中所有的教學影片**。

[額外程式語言精進資源](programming-language-resources.md)

### C++

我沒讀過這兩本書，但他們頗受好評。作者是Sedgewick，他超讚的!

- [ ] [Algorithms in C++, Parts 1-4: Fundamentals, Data Structure, Sorting, Searching](https://www.amazon.com/Algorithms-Parts-1-4-Fundamentals-Structure/dp/0201350882/)
- [ ] [Algorithms in C++ Part 5: Graph Algorithms](https://www.amazon.com/Algorithms-Part-Graph-3rd-Pt-5/dp/0201361183/)

如果你有更好的C++書籍，請告訴我。我正在蒐集全面性的資源。

## Java

- [ ] [Algorithms (Sedgewick and Wayne)](https://www.amazon.com/Algorithms-4th-Robert-Sedgewick/dp/032157351X/)
    - 在Coursera平台上有影片、書籍內容、(以及Sedgewick!)
        - [Algorithms I](https://www.coursera.org/learn/algorithms-part1)
        - [Algorithms II](https://www.coursera.org/learn/algorithms-part2)

或者:

- [ ] [Data Structures and Algorithms in Java](https://www.amazon.com/Data-Structures-Algorithms-Michael-Goodrich/dp/1118771338/)
    - 作者:Goodrich、Tamassia、Goldwasser
    - 被作為UC Berkeley資工系入門課程的補充教材
    - 看看下面我對這本書的Python版的書評。兩本書都包含了相同的主題。

### Python

- [ ] [Data Structures and Algorithms in Python](https://www.amazon.com/Structures-Algorithms-Python-Michael-Goodrich/dp/1118290275/)
    - 作者:Goodrich、Tamassia、Goldwasser
    - 我超愛這本書。他包含了所有東西。
    - 很Python的Code!
    - 我的書評: https://startupnextdoor.com/book-report-data-structures-and-algorithms-in-python/


## 在你開始之前

這份清單隨著時間越來越大。當然，這也同時代表我越來越難以掌握他的整體內容。

以下是一些清單內的錯誤，希望能讓你避免這些錯誤，並且有更好的學習體驗。

### 1. 你沒辦法記住所有事情

我看了數小時的影片，同時也寫下了大量的筆記。但過了幾個月後，大部分的東西都消失的無影無蹤。我花了三天重新看過我的筆記，並做了小字卡幫助我複習他們。

請閱讀以下的文章以免重蹈覆轍:

[Retaining Computer Science Knowledge](https://startupnextdoor.com/retaining-computer-science-knowledge/).

有人推薦給我的課程(但我還沒看過:( ): [Learning how to Learn](https://www.coursera.org/learn/learning-how-to-learn)

### 2. 使用小字卡

為了解決剛剛提到的遺忘問題，我自己寫了一個小字卡網站。網站上可以新增兩種小字卡，一般的以及程式碼。
每一種類的小字卡都有不同的格式。

這個小字卡網站在製作時便是以行動裝置優先的方式設計的，好處是無論我在何處，我都可以在我的手機與平板上複習。

製作屬於自己的免費小字卡:

- [Flashcards site repo](https://github.com/jwasham/computer-science-flash-cards)
- [My flash cards database (old - 1200 cards)](https://github.com/jwasham/computer-science-flash-cards/blob/master/cards-jwasham.db):
- [My flash cards database (new - 1800 cards)](https://github.com/jwasham/computer-science-flash-cards/blob/master/cards-jwasham-extreme.db):

我的小字卡資料庫中包含了組合語言、Python的小知識、機器學習以及統計。這些內容已經超出了原本他的預設。

**關於小字卡**:當你第一次知道答案後，別馬上把那張小字卡標記為已知。反覆複習這張小字卡，直到每次都能答對後才是真正學會了這個問題。反覆的動作會讓這個知識深深地烙印在你的腦海內。

這裡有個替代我小字卡的網站[Anki](http://ankisrs.net/)，很多人向我推薦過他。這個網站用同一個字卡重複出現的方式讓你牢牢地記住他。
這個網站非常容易使用，支援多平台，並且有雲端同步功能。在iOS平台上收費25美金，其他平台免費。

這是我用Anki這個網站裡的格式所儲存的小字卡資料庫: https://ankiweb.net/shared/info/25173560 (感謝 [@xiewenya](https://github.com/xiewenya))

### 3. 學習資料結構與演算法的同時，也要做一些Coding面試中常出現的問題

把你學過的東西應用在解題上面，否則你很快就會忘了他們。這是一個過來人的經驗談。一旦你自認學會了一個主題，像是Linked List之類的，打開任何一本Coding面試問題書籍，做一些裡面有關Linked List的問題。接著繼續讀後面的主題。然後，再回頭反覆做有關Linked List、遞迴或者其他任何東西(原文為Recursion，非Recursive)的題目。但切記一定在讀這些資料結構、演算法的同時，也要實際去寫一些有關這些東西的題目。公司錄取你是為了能有即戰力能夠上戰場，而非一個紙上談兵的人。這邊我覺得還不錯的書籍和網站。更多: [Coding Question Practice](#coding-question-practice)

### 4. 複習，複習，再複習

我自己寫了一些有關於ASCII Code、網路OSI模型、Big-O(時間複雜度)等等的小抄。我有空的時候就會把他們拿出來看一看複習一下。

打Code累了的話就休息半個小時，並且複習你的小字卡。

### 5. 專注

能夠干擾你，浪費你寶貴時間的東西很多。因此，專注集中精神實在很難。放點純音樂能幫上一些忙。

## 這份清單沒有包含的內容

以下為普遍但沒有包含在這份清單內的技術:

- SQL
- Javascript
- HTML、CSS，以及其他前後端的技術

## 每日計畫

每個主題所花費的時間都不盡相同，有些只要一天，有些需要花上數天。有些主題只有單純的知識而無包含實作。

每天我選擇下面其中一個主題，看跟該主題相關的影片，再用下面的程式語言實作:
- C - 用使用了struct *或者其他東西當作參數的struct以及函數
- C++ - 不要使用內建的東西
- C++ - 用C++內建的東西，像是STL的Linked List，std::list。
- Python - 使用內建的東西(為了練習Python)
- 寫一些測試來驗證自己寫的東西是正確的，像是用assert()等簡單的方法。
- 你也可以用Java來練習，上面只是我自己的方法。

你不需要學會所有的程式語言，你只需要專精在某個程式語言 [one language for the interview](#pick-one-language-for-the-interview).

為什麼要這樣寫Code?
- 練習，練習，再練習，直到我對他產生厭惡感，並且能輕鬆無誤地寫出那些Code。(有些東西需要特別記住，像是在邊界的時候會出現問題(edge cases)，或者一些小細節)
- 全部自己來(像是手動分配/釋放記憶體，不要依賴語言中的garbage collection的功能(除了Python或者Java))
- 利用語言中內建的東西及工具，之後在實際工作的時候才能得心應手(畢竟我不想在工作時手刻一個Linked List)。

我沒有時間做每個主題中的每個東西，但我會盡力而為。

下面是我自己寫的程式碼:
 - [C](https://github.com/jwasham/practice-c)
 - [C++](https://github.com/jwasham/practice-cpp)
 - [Python](https://github.com/jwasham/practice-python)

 你不需要記住每個演算法裡面的內容。

 試試看把程式碼寫在白板或者紙上而不是電腦上。接著用一些測資來測試他。最後才用電腦來驗證。

 ## 先備知識

- [ ] **學習C**
    - C語言無所不在。在你學習的過程中，幾乎任何一本書、課程，或者影片中你都能看到他的身影。
    - [ ] [C Programming Language, Vol 2](https://www.amazon.com/Programming-Language-Brian-W-Kernighan/dp/0131103628)
        - 這本書還滿輕薄的，但他能讓你有初步對於C語言的認識。看著這本書並且練習，你能更快地掌握C語言。理解C語言能讓你更了解程式的運作以及內部記憶體配置。
        - [answers to questions](https://github.com/lekkas/c-algorithms)
- [ ] **一個程式在電腦中是如何運作的:**
    - [ ] [How CPU executes a program (video)](https://www.youtube.com/watch?v=XM4lGflQFvA)
    - [ ] [How computers calculate - ALU (video)](https://youtu.be/1I5ZMmrOfnA)
    - [ ] [Registers and RAM (video)](https://youtu.be/fpnE6UAfbtU)
    - [ ] [The Central Processing Unit (CPU) (video)](https://youtu.be/FZGugFqdr60)
    - [ ] [Instructions and Programs (video)](https://youtu.be/zltgXvg6r3k)

## 演算法複雜度(Algorithmic complexity) / Big-O / 漸進分析(Asymptotic analysis)

- 沒有任何東西能實作
- 這個主題有許多影片，看到你真正了解他為止。你可以隨時回來複習他。
- 如果這些課程太過數學的話，你可以去看看最下面離散數學的影片，他能讓你更了解這些數學背後的來源以及原理。
- [ ] [Harvard CS50 - Asymptotic Notation (video)](https://www.youtube.com/watch?v=iOq5kSKqeR4)
- [ ] [Big O Notations (general quick tutorial) (video)](https://www.youtube.com/watch?v=V6mKVRU1evU)
- [ ] [Big O Notation (and Omega and Theta) - best mathematical explanation (video)](https://www.youtube.com/watch?v=ei-A_wy5Yxw&index=2&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [ ] Skiena:
    - [影片](https://www.youtube.com/watch?v=gSyDMtdPNpU&index=2&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [投影片](http://www3.cs.stonybrook.edu/~algorith/video-lectures/2007/lecture2.pdf)
- [ ] [A Gentle Introduction to Algorithm Complexity Analysis](http://discrete.gr/complexity/)
- [ ] [Orders of Growth (video)](https://www.coursera.org/lecture/algorithmic-thinking-1/orders-of-growth-6PKkX)
- [ ] [Asymptotics (video)](https://www.coursera.org/lecture/algorithmic-thinking-1/asymptotics-bXAtM)
- [ ] [UC Berkeley Big O (video)](https://archive.org/details/ucberkeley_webcast_VIS4YDpuP98)
- [ ] [UC Berkeley Big Omega (video)](https://archive.org/details/ucberkeley_webcast_ca3e7UVmeUc)
- [ ] [Amortized Analysis (video)](https://www.youtube.com/watch?v=B3SpQZaAZP4&index=10&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [ ] [Illustrating "Big O" (video)](https://www.coursera.org/lecture/algorithmic-thinking-1/illustrating-big-o-YVqzv)
- [ ] TopCoder (includes recurrence relations and master theorem):
    - [Computational Complexity: Section 1](https://www.topcoder.com/community/competitive-programming/tutorials/computational-complexity-section-1/)
    - [Computational Complexity: Section 2](https://www.topcoder.com/community/competitive-programming/tutorials/computational-complexity-section-2/)
- [ ] [Cheat sheet](http://bigocheatsheet.com/)

## 資料結構
- ### 陣列
    - 實作一個可以自動調整大小的陣列(動態陣列vector)
    - [ ] (動態)陣列背後原理:
        - [Arrays (video)](https://www.coursera.org/learn/data-structures/lecture/OsBSF/arrays)
        - [UC Berkeley CS61B - Linear and Multi-Dim Arrays (video)](https://archive.org/details/ucberkeley_webcast_Wp8oiO_CZZE) (Start watching from 15m 32s)
        - [Basic Arrays (video)](https://archive.org/details/0102WhatYouShouldKnow/02_04-basicArrays.mp4)
        - [Multi-dim (video)](https://archive.org/details/0102WhatYouShouldKnow/02_05-multidimensionalArrays.mp4)
        - [Dynamic Arrays (video)](https://www.coursera.org/learn/data-structures/lecture/EwbnV/dynamic-arrays)
        - [Jagged Arrays (video)](https://www.youtube.com/watch?v=1jtrQqYpt7g)
        - [Jagged Arrays (video)](https://archive.org/details/0102WhatYouShouldKnow/02_06-jaggedArrays.mp4)
        - [Resizing arrays (video)](https://archive.org/details/0102WhatYouShouldKnow/03_01-resizableArrays.mp4)
    - [ ] 實作動態陣列(可變、可動態調整大小的陣列)
        - [ ] 練習在程式中用陣列以及指標，透過計算指標而存取該內容，而不是直接用索引。
        - [ ] 直接動態生成一個新的陣列
            - 可以生成一個int型別的陣列，但不要使用語言提供的功能
            - 從16，或者更大的數開始寫，像是2的次方 - 16、32、64、128。
        - [ ] size() - 陣列中元素個數
        - [ ] capacity() - 陣列能存的最大元素個數
        - [ ] is_empty()
        - [ ] at(index) - 傳回該索引值的元素，附有邊界檢查(boundary check)
        - [ ] push(item)
        - [ ] insert(index, item) - 把元素插入該索引值，把原本在該索引值的元素往右邊移動。
        - [ ] prepend(item) - 可以把元素插入索引值為0的地方。
        - [ ] pop() - 移除陣列中最後一個元素，並回傳該元素的值。
        - [ ] delete(index) - 刪除在該索引值的元素，並且把右邊剩下元素全部往左移。
        - [ ] remove(item) - 從陣列中尋找該數值，並且移除他(就算陣列中數個地方都有這個數值)。
        - [ ] find(item) - 從陣列中尋找該數值，並且傳回最前面找到該數值的索引值，如果沒有則傳回-1。
        - [ ] resize(nex_capacity) // private function
            - 當陣列已經用盡了所有容量後，把陣列的容量*2。
            - 如果移除掉一個元素後，陣列實際大小是最大容量的1/4，則把陣列容量減半。
        - [ ] 時間複雜度
            - O(1) 在陣列末端插入/刪除元素
            - O(n) 在任何地方插入/刪除元素
        - [ ] 空間複雜度
            - 在記憶體中的存放位置是連續的，這種儲存方式有助於存取的性能。
            - 所需空間 = (陣列容量，>=n) * 元素所需大小，但就算結果為2n，實際上仍算成O(n)

- ### Linked Lists
    - [ ] Linked Lists背後原理:
        - [ ] [Singly Linked Lists (video)](https://www.coursera.org/learn/data-structures/lecture/kHhgK/singly-linked-lists)
        - [ ] [CS 61B - Linked Lists 1 (video)](https://archive.org/details/ucberkeley_webcast_htzJdKoEmO0)
        - [ ] [CS 61B - Linked Lists 2 (video)](https://archive.org/details/ucberkeley_webcast_-c4I3gFYe3w)
    - [ ] [C Code (video)](https://www.youtube.com/watch?v=QN6FPiD0Gzo)
            - 沒有完整的code，裡面只包含了用struct實作節點的方式以及其記憶體配置。
    - [ ] Linked List vs 陣列:
        - [Core Linked Lists Vs Arrays (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/rjBs9/core-linked-lists-vs-arrays)
        - [In The Real World Linked Lists Vs Arrays (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/QUaUd/in-the-real-world-lists-vs-arrays)
    - [ ] [why you should avoid linked lists (video)](https://www.youtube.com/watch?v=YQs6IC-vgmo)
    - [ ] 小心!: 你需要一些關於指標的指標(Pointer to pointer)的知識:
        (當你回傳一個指標到函式，這個動作可能會改變指標所指向的地址)
        這個頁面僅提供基本對於指標的指標的認識。我不推薦這個遍歷linked list的方式，因為他用的方式太過神奇，所以可讀性以及維護性並不好。
        - [Pointers to Pointers](https://www.eskimo.com/~scs/cclass/int/sx8.html)
    - [ ] 實作Linked list (我做了有末端指標(tail pointer)的版本以及無末端指標的版本):
        - [ ] size() - 回傳linked list裡面的元素個數
        - [ ] empty() - 回傳型態:bool，如果linked list為空，回傳true
        - [ ] value_at(index) - 回傳索引值為index的元素的數值，第一個元素索引值為0，以此類推
        - [ ] push_front(value) - 從linked list的起始點加入新的元素
        - [ ] pop_front() - 移除第一個元素，並且回傳該元素的數值
        - [ ] push_back(value) - 在linked list末端加入新元素
        - [ ] pop_back() - 移除最後一個元素，並且回傳該元素的數值
        - [ ] front() - 回傳第一個元素的數值
        - [ ] back() - 回傳最後一個元素的數值
        - [ ] insert(index, value) - 把新元素插入到該索引值，而新元素指向原本在該索引值的元素。
        - [ ] erase(index) - 刪除該索引值的元素(節點)
        - [ ] value_n_from_end(n) - 回傳從末端開始計算的第n個元素的數值
        - [ ] reverse() - 反轉該linked list
        - [ ] remove_value(value) - 刪除第一個為該數值的元素(意即7 2 2 1，要刪除2的話，只刪除index:1的那個2)
    - [ ] 雙向linked List
        - [背後原理(影片)](https://www.coursera.org/learn/data-structures/lecture/jpGKD/doubly-linked-lists)
        - 不需實作

- ### Stack(堆疊)
    - [ ] [Stacks(影片)](https://www.coursera.org/learn/data-structures/lecture/UdKzQ/stacks)
    - [ ] [使用Stacks先進後出(Last-In First-Out)(影片)](https://archive.org/details/0102WhatYouShouldKnow/05_01-usingStacksForLast-inFirst-out.mp4)
    - [ ] 無須實作，可以用陣列實作，但這樣太過簡單了。

- ### Queue(佇列)
    - [ ] [使用Queues(先進先出)First-In First-Out(影片)](https://archive.org/details/0102WhatYouShouldKnow/05_03-usingQueuesForFirst-inFirst-out.mp4)
    - [ ] [Queue(影片)](https://www.coursera.org/lecture/data-structures/queues-EShpq)
    - [ ] [Circular buffer/FIFO](https://en.wikipedia.org/wiki/Circular_buffer)
    - [ ] [Priority Queues(影片)](https://archive.org/details/0102WhatYouShouldKnow/05_04-priorityQueuesAndDeques.mp4)
    - [ ] 使用linked list實作，包含末端指標(tail pointer):
        - enqueue(value) - 在queue末端加入元素
        - dequeue() - 刪除當時queue中最早進入的元素(意即queue中第一個元素)，並且回傳該元素的值。
        - empty()
        - full()
    - [ ] 複雜度:
        - 
        - enqueue: O(1) (平均情況，無論對於用linked list或陣列實作的方法)
        - dequeue: O(1) (linked list與陣列)
        - empty: O(1) (linked list與陣列)

- ### Hash table(雜湊表)
    - [ ] 影片:
        - [ ] [Hashing with Chaining (影片))](https://www.youtube.com/watch?v=0M_kIqhwbFo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=8)
        - [ ] [Table Doubling, Karp-Rabin (影片)](https://www.youtube.com/watch?v=BRO7mVIFt08&index=9&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [ ] [Open Addressing, Cryptographic Hashing (影片)](https://www.youtube.com/watch?v=rvdJDijO2Ro&index=10&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [ ] [PyCon 2010: The Mighty Dictionary (影片)](https://www.youtube.com/watch?v=C4Kc8xzcA68)
        - [ ] [(Advanced) Randomization: Universal & Perfect Hashing (影片)](https://www.youtube.com/watch?v=z0lJ2k0sl1g&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=11)
        - [ ] [(Advanced) Perfect hashing (影片)](https://www.youtube.com/watch?v=N0COwN14gt0&list=PL2B4EEwhKD-NbwZ4ezj7gyc_3yNrojKM9&index=4)
    - [ ] 線上開放式課程:
        - [ ] [Understanding Hash Functions (影片)](https://archive.org/details/0102WhatYouShouldKnow/06_02-understandingHashFunctions.mp4)
        - [ ] [Using Hash Tables (影片)](https://archive.org/details/0102WhatYouShouldKnow/06_03-usingHashTables.mp4)
        - [ ] [Supporting Hashing (影片)](https://archive.org/details/0102WhatYouShouldKnow/06_04-supportingHashing.mp4)
        - [ ] [Language Support Hash Tables (影片)](https://archive.org/details/0102WhatYouShouldKnow/06_05-languageSupportForHashTables.mp4)
        - [ ] [Core Hash Tables (影片)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/m7UuP/core-hash-tables)
        - [ ] [Data Structures (影片)](https://www.coursera.org/learn/data-structures/home/week/3)
        - [ ] [Phone Book Problem (影片)](https://www.coursera.org/learn/data-structures/lecture/NYZZP/phone-book-problem)
        - [ ] 分散式雜湊表(distributed hash table):
            - [Instant Uploads And Storage Optimization In Dropbox (影片)](https://www.coursera.org/learn/data-structures/lecture/DvaIb/instant-uploads-and-storage-optimization-in-dropbox)
            - [Distributed Hash Tables (影片)](https://www.coursera.org/learn/data-structures/lecture/tvH8H/distributed-hash-tables)

    - [ ] 實作雜湊表(用陣列以及線性探測(linear probing))
        - hash(k, m) - m:雜湊表的大小
        - add(key, value) - 如果key已經存在，則更新該key的value
        - exists(key)
        - get(key)
        - remove(key)

## 更多

- ### 二分搜尋法(Binary Search)
    - [ ] [二分搜尋法(影片)](https://www.youtube.com/watch?v=D5SrAga1pno)
    - [ ] [二分搜尋法(影片)](https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search)
    - [ ] [細節](https://www.topcoder.com/community/competitive-programming/tutorials/binary-search/)
    - [ ] 實作:
        - 二分搜尋法 (對已經排列好的數列)
        - 用遞迴(recursion)的方法實作二分搜尋法

- ### 位元運算(Bitwise operations)
    - [ ] [Bits cheat sheet](https://github.com/jwasham/coding-interview-university/blob/master/extras/cheat%20sheets/bits-cheat-cheet.pdf) - 你應該能背出一些2的指數(從2^1到2^16以及2^32)
    - [ ] 實際了解如何用下列的位元運算子來操作每個位元: &, |, ^, ~, >>, <<
        - [ ] [words](https://en.wikipedia.org/wiki/Word_(computer_architecture))
        - [ ] Good intro:
            [Bit Manipulation (影片)](https://www.youtube.com/watch?v=7jkIUgLC29I)
        - [ ] [C Programming Tutorial 2-10: Bitwise Operators (影片)](https://www.youtube.com/watch?v=d0AwjSpNXR0)
        - [ ] [Bit Manipulation](https://en.wikipedia.org/wiki/Bit_manipulation)
        - [ ] [Bitwise Operation](https://en.wikipedia.org/wiki/Bitwise_operation)
        - [ ] [Bithacks](https://graphics.stanford.edu/~seander/bithacks.html)
        - [ ] [The Bit Twiddler](https://bits.stephan-brumme.com/)
        - [ ] [The Bit Twiddler Interactive](https://bits.stephan-brumme.com/interactive.html)
    - [ ] 一補數與二補數
        - [Binary: Plusses & Minuses (Why We Use Two's Complement) (影片)](https://www.youtube.com/watch?v=lKTsv6iVxV4)
        - [1s Complement](https://en.wikipedia.org/wiki/Ones%27_complement)
        - [2s Complement](https://en.wikipedia.org/wiki/Two%27s_complement)
    - [ ] count set bits
        - [4 ways to count bits in a byte (影片)](https://youtu.be/Hzuzo9NJrlc)
        - [Count Bits](https://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetKernighan)
        - [How To Count The Number Of Set Bits In a 32 Bit Integer](http://stackoverflow.com/questions/109023/how-to-count-the-number-of-set-bits-in-a-32-bit-integer)
    - [ ] swap values:
        - [Swap](https://bits.stephan-brumme.com/swap.html)
    - [ ] 絕對值:
        - [Absolute Integer](https://bits.stephan-brumme.com/absInteger.html)

## 樹狀結構(Tree)

- ### Trees-重點與背景知識
    - [ ] [Series: Core Trees (影片)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/ovovP/core-trees)
    - [ ] [Series: Trees (影片)](https://www.coursera.org/learn/data-structures/lecture/95qda/trees)
    - 如何建立一棵樹
    - 遍歷
    - 操作樹的演算法
    - [ ] [BFS(breadth-first search) and DFS(depth-first search) (影片)](https://www.youtube.com/watch?v=uWL6FJhq5fM)
        - BFS(廣度優先搜尋)重點:
           - 每一層的順序(BFS，用queue)
           - 時間複雜度: O(n)
           - 空間複雜度: 最佳: O(1), 最糟: O(n/2)=O(n)
        - DFS(深度優先搜尋)重點:
            - 時間複雜度: O(n)
            - 空間複雜度:
                最佳: O(log n) - 平均. 樹的高度
                最糟: O(n)
            - 中序 (DFS: 左子樹、根、右子樹)
            - 後序 (DFS: 左子樹、右子樹、根)
            - 前序 (DFS: 根、左子樹、右子樹)

- ### 二元搜尋樹Binary search trees: BSTs
    - [ ] [Binary Search Tree Review (影片)](https://www.youtube.com/watch?v=x6At0nzX92o&index=1&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
    - [ ] [Series (影片)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/p82sw/core-introduction-to-binary-search-trees)
        - starts with symbol table and goes through BST applications
    - [ ] [Introduction (影片)](https://www.coursera.org/learn/data-structures/lecture/E7cXP/introduction)
    - [ ] [MIT (影片)](https://www.youtube.com/watch?v=9Jry5-82I68)
    - C/C++:
        - [ ] [二元搜尋樹-用C/C++實作 (影片)](https://www.youtube.com/watch?v=COZK7NATh4k&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=28)
        - [ ] [實作二元搜尋樹 - stack以及heap的記憶體分配 (影片)](https://www.youtube.com/watch?v=hWokyBoo0aI&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=29)
        - [ ] [在二元搜尋樹中尋找最大值與最小值 (影片)](https://www.youtube.com/watch?v=Ut90klNN264&index=30&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [找出二元搜尋樹的高度 (影片)](https://www.youtube.com/watch?v=_pnqMz5nrRs&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=31)
        - [ ] [遍歷二元搜尋樹 - 廣度和深度優先 (影片)](https://www.youtube.com/watch?v=9RHO6jU--GU&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=32)
        - [ ] [二元樹:層層遍歷 (影片)](https://www.youtube.com/watch?v=86g8jAQug04&index=33&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [二元搜尋樹:前序、中序、後序 (影片)](https://www.youtube.com/watch?v=gm8DUJJhmY4&index=34&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [檢查一棵二元樹是否為二元搜尋樹 (影片)](https://www.youtube.com/watch?v=yEwSGhSsT0U&index=35&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [從二元搜尋樹中刪除一個節點 (影片)](https://www.youtube.com/watch?v=gcULXE7ViZw&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=36)
        - [ ] [二元搜尋樹-如何在中序中尋找下一個節點 (影片)](https://www.youtube.com/watch?v=5cPbNCrdotA&index=37&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
    - [ ] 實作:
        - [ ] insert    // 把數值插入到二元搜尋樹當中
        - [ ] get_node_count // get count of values stored
        - [ ] print_values // 把二元搜尋樹中的數值從小到大輸出
        - [ ] delete_tree
        - [ ] is_in_tree // 如果給定的數值位於二元搜尋樹當中則回傳true
        - [ ] get_height // 回傳該節點內的高度(單一節點的樹高度為1)
        - [ ] get_min   // 回傳二元搜尋樹當中的最小值
        - [ ] get_max   // 回傳二元搜尋樹當中的最大值
        - [ ] is_binary_search_tree
        - [ ] delete_value
        - [ ] get_successor // 回傳二元搜尋樹當中大小在給定數值後一位的數值，如果沒有則回傳-1

- ### Heap / Priority Queue / Binary Heap
    - 一般將此資料結構以樹的方式視覺化，但實際上是以線性的方式儲存(陣列、linked list)
    - [ ] [Heap](https://en.wikipedia.org/wiki/Heap_(data_structure))
    - [ ] [Introduction (影片)](https://www.coursera.org/learn/data-structures/lecture/2OpTs/introduction)
    - [ ] [Naive Implementations (影片)](https://www.coursera.org/learn/data-structures/lecture/z3l9N/naive-implementations)
    - [ ] [Binary Trees (影片)](https://www.coursera.org/learn/data-structures/lecture/GRV2q/binary-trees)
    - [ ] [Tree Height Remark (影片)](https://www.coursera.org/learn/data-structures/supplement/S5xxz/tree-height-remark)
    - [ ] [Basic Operations (影片)](https://www.coursera.org/learn/data-structures/lecture/0g1dl/basic-operations)
    - [ ] [Complete Binary Trees (影片)](https://www.coursera.org/learn/data-structures/lecture/gl5Ni/complete-binary-trees)
    - [ ] [Pseudocode (影片)](https://www.coursera.org/learn/data-structures/lecture/HxQo9/pseudocode)
    - [ ] [Heap Sort - jumps to start (影片)](https://youtu.be/odNJmw5TOEE?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3291)
    - [ ] [Heap Sort (影片)](https://www.coursera.org/learn/data-structures/lecture/hSzMO/heap-sort)
    - [ ] [Building a heap (影片)](https://www.coursera.org/learn/data-structures/lecture/dwrOS/building-a-heap)
    - [ ] [MIT: Heaps and Heap Sort (影片)](https://www.youtube.com/watch?v=B7hVxCmfPtM&index=4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [CS 61B Lecture 24: Priority Queues (影片)](https://archive.org/details/ucberkeley_webcast_yIUFT6AKBGE)
    - [ ] [Linear Time BuildHeap (max-heap)](https://www.youtube.com/watch?v=MiyLo8adrWw)
    - [ ] 實作max heap:
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
            - 重點: using a min heap instead would save operations, but double the space needed (cannot do in-place).

## 排序

- [ ] 重點:
    - 實作排序，並且了解該排序法在最佳/最糟/平均情況下的複雜度為何:
        - 不要用泡沫排序法(bubble sort)，那個太糟了 - O(n^2)，除非n<=16
    - [ ] 排序演算法的穩定性("快速排序法穩定嗎?")
        - [排序演算法的穩定性](https://en.wikipedia.org/wiki/Sorting_algorithm#Stability)
        - [穩定性與排序演算法](http://stackoverflow.com/questions/1517793/stability-in-sorting-algorithms)
        - [穩定性與排序演算](http://www.geeksforgeeks.org/stability-in-sorting-algorithms/)
        - [排序演算法-穩定性](http://homepages.math.uic.edu/~leon/cs-mcs401-s08/handouts/stability.pdf)
    - [ ] 哪個演算法可以用在linked list上?那些可以用在陣列上?或者兩個都可以?
        - 我不推薦對一個linked list進行排序,但合併排序是可行的.
        - [對linked list進行合併排序](http://www.geeksforgeeks.org/merge-sort-for-linked-list/)

- 有關於堆積排序，可以看看上面有關於堆積的介紹。堆積排序很棒，但不太穩定。

- [ ] [Sedgewick - Mergesort (5部影片)](https://www.coursera.org/learn/algorithms-part1/home/week/3)
    - [ ] [1. Mergesort](https://www.coursera.org/learn/algorithms-part1/lecture/ARWDq/mergesort)
    - [ ] [2. Bottom up Mergesort](https://www.coursera.org/learn/algorithms-part1/lecture/PWNEl/bottom-up-mergesort)
    - [ ] [3. Sorting Complexity](https://www.coursera.org/learn/algorithms-part1/lecture/xAltF/sorting-complexity)
    - [ ] [4. Comparators](https://www.coursera.org/learn/algorithms-part1/lecture/9FYhS/comparators)
    - [ ] [5. Stability](https://www.coursera.org/learn/algorithms-part1/lecture/pvvLZ/stability)

- [ ] [Sedgewick - Quicksort (4部影片)](https://www.coursera.org/learn/algorithms-part1/home/week/3)
    - [ ] [1. Quicksort](https://www.coursera.org/learn/algorithms-part1/lecture/vjvnC/quicksort)
    - [ ] [2. Selection](https://www.coursera.org/learn/algorithms-part1/lecture/UQxFT/selection)
    - [ ] [3. Duplicate Keys](https://www.coursera.org/learn/algorithms-part1/lecture/XvjPd/duplicate-keys)
    - [ ] [4. System Sorts](https://www.coursera.org/learn/algorithms-part1/lecture/QBNZ7/system-sorts)

- [ ] UC Berkeley:
    - [ ] [CS 61B Lecture 29: Sorting I (影片)](https://archive.org/details/ucberkeley_webcast_EiUvYS2DT6I)
    - [ ] [CS 61B Lecture 30: Sorting II (影片)](https://archive.org/details/ucberkeley_webcast_2hTY3t80Qsk)
    - [ ] [CS 61B Lecture 32: Sorting III (影片)](https://archive.org/details/ucberkeley_webcast_Y6LOLpxg6Dc)
    - [ ] [CS 61B Lecture 33: Sorting V (影片)](https://archive.org/details/ucberkeley_webcast_qNMQ4ly43p4)

- [ ] [Bubble Sort (影片)](https://www.youtube.com/watch?v=P00xJgWzz2c&index=1&list=PL89B61F78B552C1AB)
- [ ] [Analyzing Bubble Sort (影片)](https://www.youtube.com/watch?v=ni_zk257Nqo&index=7&list=PL89B61F78B552C1AB)
- [ ] [Insertion Sort, Merge Sort (影片)](https://www.youtube.com/watch?v=Kg4bqzAqRBM&index=3&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
- [ ] [Insertion Sort (影片)](https://www.youtube.com/watch?v=c4BRHC7kTaQ&index=2&list=PL89B61F78B552C1AB)
- [ ] [Merge Sort (影片)](https://www.youtube.com/watch?v=GCae1WNvnZM&index=3&list=PL89B61F78B552C1AB)
- [ ] [Quicksort (影片)](https://www.youtube.com/watch?v=y_G9BkAm6B8&index=4&list=PL89B61F78B552C1AB)
- [ ] [Selection Sort (影片)](https://www.youtube.com/watch?v=6nDMgr0-Yyo&index=8&list=PL89B61F78B552C1AB)

- [ ] 合併排序程式碼:
    - [ ] [Using output array (C)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/sorting/mergesort.c)
    - [ ] [Using output array (Python)](https://github.com/jwasham/practice-python/blob/master/merge_sort/merge_sort.py)
    - [ ] [In-place (C++)](https://github.com/jwasham/practice-cpp/blob/master/merge_sort/merge_sort.cc)
- [ ] 快速排序程式碼:
    - [ ] [Implementation (C)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/randomization/quick.c)
    - [ ] [Implementation (C)](https://github.com/jwasham/practice-c/blob/master/quick_sort/quick_sort.c)
    - [ ] [Implementation (Python)](https://github.com/jwasham/practice-python/blob/master/quick_sort/quick_sort.py)

- [ ] 實作:
    - [ ] 合併排序: 平均與最糟都是O(n log n) 
    - [ ] 快速排序: 平均O(n log n)
    - 選擇排序與插入排序平均與最糟的時間複雜度都是O(n^2)。
    - 有關堆積排序，請見上方關於堆積的介紹。

- [ ] 非必要，但我建議看一看:
    - [ ] [Sedgewick - Radix Sorts (6部影片)](https://www.coursera.org/learn/algorithms-part2/home/week/3)
        - [ ] [1. Strings in Java](https://www.coursera.org/learn/algorithms-part2/lecture/vGHvb/strings-in-java)
        - [ ] [2. Key Indexed Counting](https://www.coursera.org/learn/algorithms-part2/lecture/2pi1Z/key-indexed-counting)
        - [ ] [3. Least Significant Digit First String Radix Sort](https://www.coursera.org/learn/algorithms-part2/lecture/c1U7L/lsd-radix-sort)
        - [ ] [4. Most Significant Digit First String Radix Sort](https://www.coursera.org/learn/algorithms-part2/lecture/gFxwG/msd-radix-sort)
        - [ ] [5. 3 Way Radix Quicksort](https://www.coursera.org/learn/algorithms-part2/lecture/crkd5/3-way-radix-quicksort)
        - [ ] [6. Suffix Arrays](https://www.coursera.org/learn/algorithms-part2/lecture/TH18W/suffix-arrays)
    - [ ] [Radix Sort](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#radixSort)
    - [ ] [Radix Sort (影片)](https://www.youtube.com/watch?v=xhr26ia4k38)
    - [ ] [Radix Sort, Counting Sort (linear time given constraints) (影片)](https://www.youtube.com/watch?v=Nz1KZXbghj8&index=7&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [Randomization: Matrix Multiply, Quicksort, Freivalds' algorithm (影片)](https://www.youtube.com/watch?v=cNB2lADK3_s&index=8&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [Sorting in Linear Time (影片)](https://www.youtube.com/watch?v=pOKy3RZbSws&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=14)

這裡有[15種排序演算法](https://www.youtube.com/watch?v=kPRA0W1kECg)的影片，如果你想對排序演算法有更多的了解，看看[Additional Detail on Some Subjects](#additional-detail-on-some-subjects)裡的「排序」這個部分

## 圖

圖在電腦科學中可以用來表示、處理很多問題，所以這個部分就像樹以及排序一樣篇幅很長。

- 重點:
    - 有4種基本表示圖的方式:
        - 物件與指標(objects and pointers)
        - adjacency matrix
        - adjacency list
        - adjacency map
    - 請務必了解每種圖的表示法與每種表示法的優點及缺點。
    - 廣度優先搜尋(BFS)與深度優先搜尋(DFS) - 知道他們的時間複雜度，他們的優缺點，以及如何實作他們。
    - 如果出現一個問題，請優先想想看有沒有辦法用圖的方式解決，如果沒辦法再想想其他方法。

- [ ] MIT(影片):
    - [ ] [Breadth-First Search](https://www.youtube.com/watch?v=s-CYnVz-uh4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=13)
    - [ ] [Depth-First Search](https://www.youtube.com/watch?v=AfSk24UTFS8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=14)

- [ ] Skiena Lectures - 很棒的入門介紹:
    - [ ] [CSE373 2012 - Lecture 11 - Graph Data Structures (影片)](https://www.youtube.com/watch?v=OiXxhDrFruw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=11)
    - [ ] [CSE373 2012 - Lecture 12 - Breadth-First Search (影片)](https://www.youtube.com/watch?v=g5vF8jscteo&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=12)
    - [ ] [CSE373 2012 - Lecture 13 - Graph Algorithms (影片)](https://www.youtube.com/watch?v=S23W6eTcqdY&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=13)
    - [ ] [CSE373 2012 - Lecture 14 - Graph Algorithms (con't) (影片)](https://www.youtube.com/watch?v=WitPBKGV0HY&index=14&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [CSE373 2012 - Lecture 15 - Graph Algorithms (con't 2) (影片)](https://www.youtube.com/watch?v=ia1L30l7OIg&index=15&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [CSE373 2012 - Lecture 16 - Graph Algorithms (con't 3) (影片)](https://www.youtube.com/watch?v=jgDOQq6iWy8&index=16&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)

- [ ] 圖(複習以及進階知識):

    - [ ] [6.006 Single-Source Shortest Paths Problem (影片)](https://www.youtube.com/watch?v=Aa2sqUhIn-E&index=15&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [6.006 Dijkstra (影片)](https://www.youtube.com/watch?v=2E7MmKv0Y24&index=16&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [6.006 Bellman-Ford (影片)](https://www.youtube.com/watch?v=ozsuci5pIso&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=17)
    - [ ] [6.006 Speeding Up Dijkstra (影片)](https://www.youtube.com/watch?v=CHvQ3q_gJ7E&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=18)
    - [ ] [Aduni: Graph Algorithms I - Topological Sorting, Minimum Spanning Trees, Prim's Algorithm -  Lecture 6 (影片)]( https://www.youtube.com/watch?v=i_AQT_XfvD8&index=6&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
    - [ ] [Aduni: Graph Algorithms II - DFS, BFS, Kruskal's Algorithm, Union Find Data Structure - Lecture 7 (影片)]( https://www.youtube.com/watch?v=ufj5_bppBsA&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=7)
    - [ ] [Aduni: Graph Algorithms III: Shortest Path - Lecture 8 (影片)](https://www.youtube.com/watch?v=DiedsPsMKXc&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=8)
    - [ ] [Aduni: Graph Alg. IV: Intro to geometric algorithms - Lecture 9 (影片)](https://www.youtube.com/watch?v=XIAQRlNkJAw&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=9)
    - [ ] ~~[CS 61B 2014 (starting at 58:09) (影片)](https://youtu.be/dgjX4HdMI-Q?list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&t=3489)~~
    - [ ] [CS 61B 2014: Weighted graphs (影片)](https://archive.org/details/ucberkeley_webcast_zFbq8vOZ_0k)
    - [ ] [Greedy Algorithms: Minimum Spanning Tree (影片)](https://www.youtube.com/watch?v=tKwnms5iRBU&index=16&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [Strongly Connected Components Kosaraju's Algorithm Graph Algorithm (影片)](https://www.youtube.com/watch?v=RpgcYiky7uw)

- 完整Coursera課程:
    - [ ] [Algorithms on Graphs (影片)](https://www.coursera.org/learn/algorithms-on-graphs/home/welcome)

- 我將實作:
    - [ ] 深度優先搜尋搭配adjacency list(遞迴recursive)
    - [ ] 深度優先搜尋搭配adjacency list(疊代+stack)
    - [ ] 深度優先搜尋搭配adjacency matrix (遞迴recursive)
    - [ ] 深度優先搜尋搭配adjacency matrix(疊代+stack)
    - [ ] 廣度優先搜尋搭配adjacency list
    - [ ] 廣度優先搜尋搭配adjacency matrix
    - [ ] single-source shortest path (Dijkstra)
    - [ ] minimum spanning tree
    - DFS-based algorithms (看看上面Aduni的影片):
        - [ ] check for cycle (needed for topological sort, since we'll check for cycle before starting)
        - [ ] topological sort
        - [ ] count connected components in a graph
        - [ ] list strongly connected components
        - [ ] check for bipartite graph

## 更多知識

- ### 遞迴Recursion
    - [ ] Stanford課程-遞迴recursion與回溯法backtracking:
        - [ ] [Lecture 8 | Programming Abstractions (影片)](https://www.youtube.com/watch?v=gl3emqCuueQ&list=PLFE6E58F856038C69&index=8)
        - [ ] [Lecture 9 | Programming Abstractions (影片)](https://www.youtube.com/watch?v=uFJhEPrbycQ&list=PLFE6E58F856038C69&index=9)
        - [ ] [Lecture 10 | Programming Abstractions (影片)](https://www.youtube.com/watch?v=NdF1QDTRkck&index=10&list=PLFE6E58F856038C69)
        - [ ] [Lecture 11 | Programming Abstractions (影片)](https://www.youtube.com/watch?v=p-gpaIGRCQI&list=PLFE6E58F856038C69&index=11)
    - 什麼時候適合用這些
    - tail recursion沒有比較好?
        - [ ] [What Is Tail Recursion Why Is It So Bad?](https://www.quora.com/What-is-tail-recursion-Why-is-it-so-bad)
        - [ ] [Tail Recursion (影片)](https://www.youtube.com/watch?v=L1jjXGfxozc)

- ### 動態規劃
    - 在你的面試中或許沒有任何動態規劃的問題，但能夠知道一個題目可以使用動態規劃來解決是很重要的。
    - 動態規劃很難，因為動態規劃的題目通常都要有遞迴關係。要想到他的解法有時需要天外飛來一筆的想法。
    - 我建議你可以多看一些動態規劃的題目，這可以讓你對這類型的問題以及他的長相有更多的理解。
    - [ ] 影片:
        - Skiena的影片有點難跟上，他有時候用白板，寫的字又很小。
        - [ ] [Skiena: CSE373 2012 - Lecture 19 - Introduction to Dynamic Programming (影片)](https://youtu.be/Qc2ieXRgR0k?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1718)
        - [ ] [Skiena: CSE373 2012 - Lecture 20 - Edit Distance (影片)](https://youtu.be/IsmMhMdyeGY?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=2749)
        - [ ] [Skiena: CSE373 2012 - Lecture 21 - Dynamic Programming Examples (影片)](https://youtu.be/o0V9eYF4UI8?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=406)
        - [ ] [Skiena: CSE373 2012 - Lecture 22 - Applications of Dynamic Programming (影片)](https://www.youtube.com/watch?v=dRbMC1Ltl3A&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=22)
        - [ ] [Simonson: Dynamic Programming 0 (starts at 59:18) (影片)](https://youtu.be/J5aJEcOr6Eo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3558)
        - [ ] [Simonson: Dynamic Programming I - Lecture 11 (影片)](https://www.youtube.com/watch?v=0EzHjQ_SOeU&index=11&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [Simonson: Dynamic programming II - Lecture 12 (影片)](https://www.youtube.com/watch?v=v1qiRwuJU7g&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=12)
        - [ ] List of individual DP problems (每一部都很短):
            [Dynamic Programming (v影片ideo)](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)
    - [ ] Yale課程筆記:
        - [ ] [Dynamic Programming](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#dynamicProgramming)
    - [ ] Coursera:
        - [ ] [The RNA secondary structure problem (影片)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/80RrW/the-rna-secondary-structure-problem)
        - [ ] [A dynamic programming algorithm (影片)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/PSonq/a-dynamic-programming-algorithm)
        - [ ] [Illustrating the DP algorithm (影片)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/oUEK2/illustrating-the-dp-algorithm)
        - [ ] [Running time of the DP algorithm (影片)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/nfK2r/running-time-of-the-dp-algorithm)
        - [ ] [DP vs. recursive implementation (影片)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/M999a/dp-vs-recursive-implementation)
        - [ ] [Global pairwise sequence alignment (影片)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/UZ7o6/global-pairwise-sequence-alignment)
        - [ ] [Local pairwise sequence alignment (影片)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/WnNau/local-pairwise-sequence-alignment)

- ### 物件導向程式設計
    - [ ] [Optional: UML 2.0 Series (影片)](https://www.youtube.com/watch?v=OkC7HKtiZC0&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc)
    - [ ] 重要!物件導向程式設計原則: [SOLID Principles (影片)](https://www.youtube.com/playlist?list=PL4CE9F710017EA77A)

- ### 設計模式
- [ ] [Quick UML review(影片)](https://www.youtube.com/watch?v=3cmzqZzwNDM&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc&index=3)
    - [ ] 學學這些設計模式:
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
    - [ ] [Chapter 6 (Part 1) - Patterns (影片)](https://youtu.be/LAP2A80Ajrg?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO&t=3344)
    - [ ] [Chapter 6 (Part 2) - Abstraction-Occurrence, General Hierarchy, Player-Role, Singleton, Observer, Delegation (影片)](https://www.youtube.com/watch?v=U8-PGsjvZc4&index=12&list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)
    - [ ] [Chapter 6 (Part 3) - Adapter, Facade, Immutable, Read-Only Interface, Proxy (影片)](https://www.youtube.com/watch?v=7sduBHuex4c&index=13&list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)
    - [ ] [Series of videos (27部影片)](https://www.youtube.com/playlist?list=PLF206E906175C7E07)
    - [ ] [Head First Design Patterns](https://www.amazon.com/Head-First-Design-Patterns-Freeman/dp/0596007124)
        - 我知道"Design Patterns: Elements of Reusable Object-Oriented Software"才是這方面的經典書籍，但深入淺出系列對於物件導向的初學者可能是更好的選擇。
    - [ ] [Handy reference: 101 Design Patterns & Tips for Developers](https://sourcemaking.com/design-patterns-and-tips)
    - [ ] [Design patterns for humans](https://github.com/kamranahmedse/design-patterns-for-humans#structural-design-patterns)

- ### 組合數&機率
    - [ ] [Math Skills: How to find Factorial, Permutation and Combination (Choose) (影片)](https://www.youtube.com/watch?v=8RRo6Ti9d0U)
    - [ ] [Make School: Probability (影片)](https://www.youtube.com/watch?v=sZkAAk9Wwa4)
    - [ ] [Make School: More Probability and Markov Chains (影片)](https://www.youtube.com/watch?v=dNaJg-mLobQ)
    - [ ] Khan Academy:
        - Course大綱:
            - [ ] [Basic Theoretical Probability](https://www.khanacademy.org/math/probability/probability-and-combinatorics-topic)
        - 只有影片(每個都很簡單而且很短):
            - [ ] [Probability Explained (影片)](https://www.youtube.com/watch?v=uzkc-qNVoOk&list=PLC58778F28211FA19)

- ### NP、NP-Complete以及近似演算法
    - 了解一些著名的NP-Complete問題，像是旅行推銷員問題(traveling salesman problem)和背包問題(knapsack problem)，並要能夠在面試官問類似這些經典範例的問題時辨認出他們。
    - 了解NP-complete的方法。
    - [ ] [計算複雜性理論(影片))](https://www.youtube.com/watch?v=moPtwq_cVH8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=23)
    - [ ] Simonson:
        - [ ] [貪心演算法II & NP Completeness導論(影片)](https://youtu.be/qcGnJ47Smlo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=2939)
        - [ ] [NP Completeness II & Reductions(影片)](https://www.youtube.com/watch?v=e0tGC6ZQdQE&index=16&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [NP Completeness III(影片)](https://www.youtube.com/watch?v=fCX1BGT3wjE&index=17&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [NP Completeness IV(影片)](https://www.youtube.com/watch?v=NKLDp3Rch3M&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=18)
    - [ ] Skiena:
        - [ ] [CSE373 2012 - Lecture 23 - NP-Completeness導論(影片)](https://youtu.be/KiK5TVgXbFg?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1508)
        - [ ] [CSE373 2012 - Lecture 24 - NP-Completeness證明(影片)](https://www.youtube.com/watch?v=27Al52X3hd4&index=24&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [ ] [CSE373 2012 - Lecture 25 - NP-Completeness牛刀小試(影片)](https://www.youtube.com/watch?v=xCPH4gwIIXM&index=25&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [複雜性: P、NP、NP-completeness、Reductions(影片)](https://www.youtube.com/watch?v=eHZifpgyH_4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=22)
    - [ ] [複雜性: 近似演算法(影片)](https://www.youtube.com/watch?v=MEz1J9wY2iM&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=24)
    - [ ] [複雜性: Fixed-Parameter Algorithms(影片)](https://www.youtube.com/watch?v=4q-jmGrmxKs&index=25&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - Peter Norvig在影片中提到旅行推銷員問題的近似最佳解:
        - [Jupyter Notebook](http://nbviewer.jupyter.org/url/norvig.com/ipython/TSP.ipynb)
    - 在演算法導論(Introduction to Algorithms)第1048~1140頁

- ### 快取(cache)
    - [ ] LRU cache:
        - [ ] [奇妙LRU Cache (100 Days of Google Dev)(影片)](https://www.youtube.com/watch?v=R5ON3iwx78M)
        - [ ] [實作LRU(影片)](https://www.youtube.com/watch?v=bq6N7Ym81iI)
        - [ ] [LeetCode - 146 LRU Cache (C++)(影片)](https://www.youtube.com/watch?v=8-FZRAjR7qU)
    - [ ] CPU cache:
        - [ ] [MIT 6.004 L15: 記憶體階層(影片)](https://www.youtube.com/watch?v=vjYF_fAZI5E&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-&index=24)
        - [ ] [MIT 6.004 L16: 快取深入探討(影片)](https://www.youtube.com/watch?v=ajgC3-pyGlk&index=25&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-)

- ### 程序與執行緒(Processes&Threads)
- [ ] Computer Science 162 - 作業系統 (25部影片):
        - 程序與執行緒在第1~11部影片中
        - [作業系統以及系統程式設計(影片)](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iBDyz-ba4yDskqMDY6A1w_c)
    - [程序與執行緒有什麼差別?](https://www.quora.com/What-is-the-difference-between-a-process-and-a-thread)
    - 涵蓋:
        - 探討程序、執行緒與並行性
            - 程序與執行緒的差別
            - 程序(processes)
            - 執行緒(threads)
            - 鎖(locks)
            - 互斥鎖(mutexes)
            - 號誌(semaphores)
            - 監視器(monitors)
            - 他們如何運作?
            - 死鎖(deadlock)
            - 活鎖(livelock)
        - CPU活動、中斷、上下文交換(context switching)
        - 現代cpu並行性由多核處理器實現
        - [Paging, segmentation and virtual memory(影片)](https://www.youtube.com/watch?v=LKe7xK0bF7o&list=PLCiOXwirraUCBE9i_ukL8_Kfg6XNv7Se8&index=2)
        - [中斷Interrupt(影片)](https://www.youtube.com/watch?v=uFKi2-J-6II&list=PLCiOXwirraUCBE9i_ukL8_Kfg6XNv7Se8&index=3)
        - 程序所需資源 (記憶體): code, 靜態儲存, stack, heap,檔案描述符(file descriptors)以及i/o)
        - 執行序所需資源 (跟上述相同(除了stack)， 其他的執行序都各自擁有pc、stack計數器、暫存器以及stack在相同的程序中)
        - Forking只有複製寫入(唯讀)，直到新的程序被寫入到記憶體中u，然後他再複製一個新的
        - 上下文交換
            - 上下文交換如何被作業系統以及硬體所啟動
    - [ ] [C++執行序 (包含10部影片的系列)](https://www.youtube.com/playlist?list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M)
    - [ ] Python並行性 (影片)):
        - [ ] [執行序簡短系列](https://www.youtube.com/playlist?list=PL1H1sBF1VAKVMONJWJkmUh6_p8g4F2oy1)
        - [ ] [Python執行序](https://www.youtube.com/watch?v=Bs7vPNbB9JM)
        - [ ] [理解Python GIL(2010)](https://www.youtube.com/watch?v=Obt-vMVdM8s)
            - [參考資源](http://www.dabeaz.com/GIL)
        - [ ] [David Beazley - Python並行性入門: LIVE! - PyCon 2015](https://www.youtube.com/watch?v=MCs5OvhV9S4)
        - [ ] [Keynote David Beazley - Topics of Interest (Python Asyncio)](https://www.youtube.com/watch?v=ZzfHjytDceU)
        - [ ] [Python互斥鎖](https://www.youtube.com/watch?v=0zaPs8OtyKY)

- ### Testing
    - 涵蓋:
        - 單元測試如何運作
        - 什麼是模擬對象(mock object)
        - 整合測試(integration testing)是什麼
        - 什麼是依賴注入(dependency injection)
    - [ ] [敏捷軟體測試-James Bach(影片))](https://www.youtube.com/watch?v=SAhJf36_u5U)
    - [ ] [James Bach軟體測試的公開課程(影片))](https://www.youtube.com/watch?v=ILkT_HV9DVU)
    - [ ] [Steve Freeman - 測試導向軟體開發(影片))](https://vimeo.com/83960706)
        - [投影片](http://gotocon.com/dl/goto-berlin-2013/slides/SteveFreeman_TestDrivenDevelopmentThatsNotWhatWeMeant.pdf)
    - [ ] 依賴注入(Dependency injection):
        - [ ] [影片](https://www.youtube.com/watch?v=IKD2-MAkXyQ)
        - [ ] [Tao Of Testing](http://jasonpolites.github.io/tao-of-testing/ch3-1.1.html)
    - [ ] [如何寫測試](http://jasonpolites.github.io/tao-of-testing/ch4-1.1.html)

- ### 排程Scheduling
    - 作業系統中排程如何運作?
    - 可以從作業系統的課程影片中學習

- ### 字串搜尋演算法以及操作
    - [ ] [Sedgewick-後綴陣列(Suffix Arrays)(影片)](https://www.coursera.org/learn/algorithms-part2/lecture/TH18W/suffix-arrays)
    - [ ] [Sedgewick-子字串搜尋(影片)](https://www.coursera.org/learn/algorithms-part2/home/week/4)
        - [ ] [1.子字串搜尋導論](https://www.coursera.org/learn/algorithms-part2/lecture/n3ZpG/introduction-to-substring-search)
        - [ ] [2.子字串搜尋-暴力法](https://www.coursera.org/learn/algorithms-part2/lecture/2Kn5i/brute-force-substring-search)
        - [ ] [3.KMP演算法](https://www.coursera.org/learn/algorithms-part2/lecture/TAtDr/knuth-morris-pratt)
        - [ ] [4.Boyer-Moore字串搜尋演算法](https://www.coursera.org/learn/algorithms-part2/lecture/CYxOT/boyer-moore)
        - [ ] [5.Rabin-Karp演算法](https://www.coursera.org/learn/algorithms-part2/lecture/3KiqT/rabin-karp)
    - [ ] [在文字中尋找模式(影片)](https://www.coursera.org/learn/data-structures/lecture/tAfHI/search-pattern-in-text)

  如果你想知道更多有關這個主題的知識，可以去看[某些主題的額外知識](#某些主題的額外知識)中的"String Matching"

- ### 字典樹(Tries)
    - 請注意字典樹有許多種類。有些有前綴，有些沒有，而有些在追蹤路徑時使用字串而非位元。
    - 我有看過這些程式碼，但沒有實作
    - [ ] [Sedgewick-字典樹(3部影片)](https://www.coursera.org/learn/algorithms-part2/home/week/4)
        - [ ] [1.R Way字典樹](https://www.coursera.org/learn/algorithms-part2/lecture/CPVdr/r-way-tries)
        - [ ] [2.三元搜尋樹](https://www.coursera.org/learn/algorithms-part2/lecture/yQM8K/ternary-search-tries)
        - [ ] [3.字元操作](https://www.coursera.org/learn/algorithms-part2/lecture/jwNmV/character-based-operations)
    - [ ] [Note:資料結構以及coding技巧](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Tries)
    - [ ] 簡短的課程影片:
        - [ ] [字典樹簡介(影片)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/08Xyf/core-introduction-to-tries)
        - [ ] [字典樹效能(影片)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/PvlZW/core-performance-of-tries)
        - [ ] [實作字典樹(影片)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/DFvd3/core-implementing-a-trie)
    - [ ] [字典樹:一個被忽視的資料結構](https://www.toptal.com/java/the-trie-a-neglected-data-structure)
    - [ ] [TopCoder-使用字典樹](https://www.topcoder.com/community/competitive-programming/tutorials/using-tries/)
    - [ ] [Stanford線上課程(實際使用範例))(影片)](https://www.youtube.com/watch?v=TJ8SkcUSdbU)
    - [ ] [MIT進階資料結構-字串(影片中間有點困難)(影片)](https://www.youtube.com/watch?v=NinWEPPrkDQ&index=16&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf)

- ### 浮點數
    - [ ] 8位元: [浮點數表示 - 1 (影片 - there is an error in calculations - see video description)](https://www.youtube.com/watch?v=ji3SfClm8TU)
    - [ ] 32位元: [IEEE754 32位元浮點數(影片)](https://www.youtube.com/watch?v=50ZYcZebIec)

- ### Unicode
    - [ ] [每個軟體工程師一定要知道的Unicode以及字元集]( http://www.joelonsoftware.com/articles/Unicode.html)
    - [ ] [每個工程師一定要知道的編碼以及字元集-如何與文字搭配](http://kunststube.net/encoding/)

- ### 端序(Endianness)
    - [ ] [大/小端序](https://web.archive.org/web/20180107141940/http://www.cs.umd.edu:80/class/sum2003/cmsc311/Notes/Data/endian.html)
    - [ ] [大端序 Vs 小端序(影片)](https://www.youtube.com/watch?v=JrNF0KRAlyo)
    - [ ] [由裡入內的大端序與小端序(影片)](https://www.youtube.com/watch?v=oBSuXP-1Tc0)
        - 對於核心開發非常具有技術性。如果大多數的內容聽不懂也沒關係。
        - 前半部就已經足夠了

- ### 網路
    - **以下為如果你有網路相關經驗，或是想成為一個可靠的工程師需要知道的知識**
    - 知道這些有益無害，多多益善!
    - [ ] [Khan Academy](https://www.khanacademy.org/computing/computer-science/internet-intro)
    - [ ] [UDP and TCP: Comparison of Transport Protocols(影片)](https://www.youtube.com/watch?v=Vdc8TCESIg8)
    - [ ] [TCP/IP and the OSI Model Explained!(影片)](https://www.youtube.com/watch?v=e5DEVa9eSN0)
    - [ ] [Packet Transmission across the Internet. Networking & TCP/IP tutorial.(影片)](https://www.youtube.com/watch?v=nomyRJehhnM)
    - [ ] [HTTP(影片)](https://www.youtube.com/watch?v=WGJrLqtX7As)
    - [ ] [SSL and HTTPS(影片)](https://www.youtube.com/watch?v=S2iBR2ZlZf0)
    - [ ] [SSL/TLS(影片)](https://www.youtube.com/watch?v=Rp3iZUvXWlM)
    - [ ] [HTTP 2.0(影片)](https://www.youtube.com/watch?v=E9FxNzv1Tr8)
    - [ ] [Video Series (21 videos)(影片)](https://www.youtube.com/playlist?list=PLEbnTDJUr_IegfoqO4iPnPYQui46QqT0j)
    - [ ] [Subnetting Demystified - Part 5 CIDR Notation(影片)](https://www.youtube.com/watch?v=t5xYI0jzOf4)
    - [ ] Sockets:
        - [ ] [Java - Sockets - Introduction(影片)](https://www.youtube.com/watch?v=6G_W54zuadg&t=6s)
        - [ ] [Socket Programming(影片)](https://www.youtube.com/watch?v=G75vN2mnJeQ)

## 系統設計、可擴充性、資料處理

**如果你已經擁有了4年以上的程式經驗，那你可以來看看有關系統設計的問題**

- 可擴充性與系統設計的範圍非常廣大，裡面還包含了許多主題，因為在設計一個具有擴充性的軟體/硬體時有許多事情需要考量。你可以花點時間看看這些。

- 考量:
    - 可擴充性
        - 將大量資料抽取出而成一個值
        - 將一個資料轉換成另一個
        - 處理大量的資料
    - 系統設計
        - 功能集
        - 介面
        - class階層
        - 在某些限制下設計一個系統
        - 簡單與強健的系統
        - 權衡得失
        - 效能評估與最佳化

- [ ] **從這裡開始**: [The System Design Primer](https://github.com/donnemartin/system-design-primer)
- [ ] [System Design from HiredInTech](http://www.hiredintech.com/system-design/)
- [ ] [How Do I Prepare To Answer Design Questions In A Technical Inverview?](https://www.quora.com/How-do-I-prepare-to-answer-design-questions-in-a-technical-interview?redirected_qid=1500023)
- [ ] [8 Things You Need to Know Before a System Design Interview](http://blog.gainlo.co/index.php/2015/10/22/8-things-you-need-to-know-before-system-design-interviews/)
- [ ] [Algorithm design](http://www.hiredintech.com/algorithm-design/)
- [ ] [Database Normalization - 1NF, 2NF, 3NF and 4NF(影片)](https://www.youtube.com/watch?v=UrYLYV7WSHM)
- [ ] [System Design Interview](https://github.com/checkcheckzz/system-design-interview) - 這個裡面包含許多資源。把裡面的文章與例子都看過一遍，裡面有些我把他特別放在下面。
- [ ] [How to ace a systems design interview](http://www.palantir.com/2011/10/how-to-rock-a-systems-design-interview/)
- [ ] [Numbers Everyone Should Know](http://everythingisdata.wordpress.com/2009/10/17/numbers-everyone-should-know/)
- [ ] [How long does it take to make a context switch?](http://blog.tsunanet.net/2010/11/how-long-does-it-take-to-make-context.html)
- [ ] [Transactions Across Datacenters(影片)](https://www.youtube.com/watch?v=srOgpXECblk)
- [ ] [A plain English introduction to CAP Theorem](http://ksat.me/a-plain-english-introduction-to-cap-theorem/)
- [ ] 共識演算法(Consensus Algorithms):
    - [ ] Paxos - [Paxos Agreement - Computerphile(影片)](https://www.youtube.com/watch?v=s8JqcZtvnsM)
    - [ ] Raft - [An Introduction to the Raft Distributed Consensus Algorithm(影片)](https://www.youtube.com/watch?v=P9Ydif5_qvE)
        - [ ] [Easy-to-read paper](https://raft.github.io/)
        - [ ] [Infographic](http://thesecretlivesofdata.com/raft/)
- [ ] [Consistent Hashing](http://www.tom-e-white.com/2007/11/consistent-hashing.html)
- [ ] [NoSQL Patterns](http://horicky.blogspot.com/2009/11/nosql-patterns.html)
- [ ] 可擴充性:
    - 不用把這些全讀過，挑幾個你有興趣的即可。
    - [ ] [Great overview(影片)](https://www.youtube.com/watch?v=-W9F__D3oY4)
    - [ ] 簡單系列:
        - [Clones](http://www.lecloud.net/post/7295452622/scalability-for-dummies-part-1-clones)
        - [Database](http://www.lecloud.net/post/7994751381/scalability-for-dummies-part-2-database)
        - [Cache](http://www.lecloud.net/post/9246290032/scalability-for-dummies-part-3-cache)
        - [Asynchronism](http://www.lecloud.net/post/9699762917/scalability-for-dummies-part-4-asynchronism)
    - [ ] [Scalable Web Architecture and Distributed Systems](http://www.aosabook.org/en/distsys.html)
    - [ ] [Fallacies of Distributed Computing Explained](https://pages.cs.wisc.edu/~zuyu/files/fallacies.pdf)
    - [ ] [Pragmatic Programming Techniques](http://horicky.blogspot.com/2010/10/scalable-system-design-patterns.html)
        - [extra: Google Pregel Graph Processing](http://horicky.blogspot.com/2010/07/google-pregel-graph-processing.html)
    - [ ] [Jeff Dean - Building Software Systems At Google and Lessons Learned (影片)](https://www.youtube.com/watch?v=modXC5IWTJI)
    - [ ] [Introduction to Architecting Systems for Scale](http://lethain.com/introduction-to-architecting-systems-for-scale/)
    - [ ] [Scaling mobile games to a global audience using App Engine and Cloud Datastore (影片)](https://www.youtube.com/watch?v=9nWyWwY2Onc)
    - [ ] [How Google Does Planet-Scale Engineering for Planet-Scale Infra (影片)](https://www.youtube.com/watch?v=H4vMcD7zKM0)
    - [ ] [The Importance of Algorithms](https://www.topcoder.com/community/competitive-programming/tutorials/the-importance-of-algorithms/)
    - [ ] [Sharding](http://highscalability.com/blog/2009/8/6/an-unorthodox-approach-to-database-design-the-coming-of-the.html)
    - [ ] [Scale at Facebook (2012), "Building for a Billion Users" (影片)](https://www.youtube.com/watch?v=oodS71YtkGU)
    - [ ] [Engineering for the Long Game - Astrid Atkinson Keynote(影片)](https://www.youtube.com/watch?v=p0jGmgIrf_M&list=PLRXxvay_m8gqVlExPC5DG3TGWJTaBgqSA&index=4)
    - [ ] [7 Years Of YouTube Scalability Lessons In 30 Minutes](http://highscalability.com/blog/2012/3/26/7-years-of-youtube-scalability-lessons-in-30-minutes.html)
        - [影片](https://www.youtube.com/watch?v=G-lGCC4KKok)
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
    - [ ] 看看下方的"通訊、序列化以及佇列系統"，裡面有一些你可以參考的東西。
    - [ ] Twitter:
        - [O'Reilly MySQL CE 2011: Jeremy Cole, "Big and Small Data at @Twitter" (影片)](https://www.youtube.com/watch?v=5cKTP36HVgI)
        - [Timelines at Scale](https://www.infoq.com/presentations/Twitter-Timeline-Scalability)
    - 更多請看看下面[影片系列](#影片系列)中的"Mining Massive Datasets"
- [ ] 練習系統設計的過程:以下是在紙上練習的一些方法，每個都有他們如何運用在現實中的說明文件:
    - 複習: [系統設計入門](https://github.com/donnemartin/system-design-primer)
    - [HiredInTech系統設計](http://www.hiredintech.com/system-design/)
    - [提示](https://github.com/jwasham/coding-interview-university/blob/master/extras/cheat%20sheets/system-design.pdf)
    - 流程:
        1. 了解問題與其範圍:
            - 在面試官的幫助下定義使用情況
            - 提供些額外功能的建議
            - 移除面試官認為是超出範圍的東西
            - 默認高可用度是必須的，並增加一些使用情況
        2. 設想限制:
            - 想想看每個月會有多少請求
            - 想想看每秒會有多少請求(他們可能自願或者讓你自己計算)
            - 評估讀寫比率
            - 評估時請保持80/20法則
            - 每秒有多少資料被寫入?
            - 5年內總共需要的儲存空間
            - 每秒有多少資料被讀取?
        3. 抽象設計:
            - 層(服務、資料、快取)
            - 基礎:讀取平衡、通訊
            - 初步概覽驅動整個服務的關鍵演算法
            - 考慮會遇到的瓶頸以及解決方案
    - 練習:
        - [Design a CDN network: old article](http://repository.cmu.edu/cgi/viewcontent.cgi?article=2112&context=compsci)
        - [Design a random unique ID generation system](https://blog.twitter.com/2010/announcing-snowflake)
        - [Design an online multiplayer card game](http://www.indieflashblog.com/how-to-create-an-asynchronous-multiplayer-game.html)
        - [Design a key-value database](http://www.slideshare.net/dvirsky/introduction-to-redis)
        - [Design a picture sharing system](http://highscalability.com/blog/2011/12/6/instagram-architecture-14-million-users-terabytes-of-photos.html)
        - [Design a recommendation system](http://ijcai13.org/files/tutorial_slides/td3.pdf)
        - [Design a URL-shortener system: copied from above](http://www.hiredintech.com/system-design/the-system-design-process/)
        - [Design a cache system](https://www.adayinthelifeof.nl/2011/02/06/memcache-internals/)

---

## 總複習

    這部分我放了一些簡短的影片，觀看這些影片可以快速的複習一些重要的觀念。
    如果你想時常複習，那真是太棒了!

- [ ] 2-3分鐘快速複習影片系列(23個影片)
    - [影片](https://www.youtube.com/watch?v=r4r1DZcx1cM&list=PLmVb1OknmNJuC5POdcDv5oCS7_OUkDgpj&index=22)
- [ ] 2-5分鐘快速複習影片系列-Michael Sambol (18個影片)
    - [影片](https://www.youtube.com/channel/UCzDJwLWoYCUQowF_nG3m5OQ)
- [ ] [Sedgewick Videos - Algorithms I](https://www.coursera.org/learn/algorithms-part1)
- [ ] [Sedgewick Videos - Algorithms II](https://www.coursera.org/learn/algorithms-part2)

---

## 解題練習

現在你已經知道上面所有有關電腦科學的主題了，該是時候做些解題的練習了。

**解題練習不能死記題目的解法**

為什麼你需要練習解題:
- 快速識別問題，以及如何應用正確的資料結構及演算法。
- 蒐集問題的需求
- 模擬面試時用你的方法闡述問題
- 試著不要在電腦上寫程式，而是 在白板上或紙上
- 想出該問題的時間與空間複雜度
- 測試你的解法

這裡有個很棒的入門教學，內容是如何在面試中有條不紊，並且有互動溝通地解決問題。這種能力可以從面試書籍中獲得，但我覺得這個也超讚的:[Algorithm design canvas](http://www.hiredintech.com/algorithm-design/)

家裡沒有白板嗎？這很合理。但我是個奇怪的人，家裡有個大白板。沒有白板的話，可以去美術社買個大的繪圖板。你可以坐在沙發上練習。這是我的「沙發白板」。我在照片中放了一枝筆當作比例尺。如果你用筆的話，你將會希望你可以擦拭他，因為他很快就會變髒了。通常我都用鉛筆與橡皮擦。

![my sofa whiteboard](https://d3j2pkmjtin6ou.cloudfront.net/art_board_sm_2.jpg)

補充:

- [Mathematics for Topcoders](https://www.topcoder.com/community/competitive-programming/tutorials/mathematics-for-topcoders/)
- [Dynamic Programming – From Novice to Advanced](https://www.topcoder.com/community/competitive-programming/tutorials/dynamic-programming-from-novice-to-advanced/)
- [MIT Interview Materials](https://web.archive.org/web/20160906124824/http://courses.csail.mit.edu/iap/interview/materials.php)
- [Exercises for getting better at a given language](http://exercism.io/languages)
  
**閱讀並解題(按照以下順序):**

- [ ] [Programming Interviews Exposed: Secrets to Landing Your Next Job, 2nd Edition](http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html)
    - 附有C、C++、Java的解答
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - 附有Java的解答

看看[上方的書單](#書單(book-list))

## 解題練習/挑戰

學了一些東西之後，可以開始試試每天解一些題目，越多越好!

- [如何找到解法](https://www.topcoder.com/community/competitive-programming/tutorials/how-to-find-a-solution/)
- [如何剖析好的coder的問題解析](https://www.topcoder.com/community/competitive-programming/tutorials/how-to-dissect-a-topcoder-problem-statement/)

Coding面試題目影片:
- [IDeserve (88部影片)](https://www.youtube.com/watch?v=NBcqBddFbZw&list=PLamzFoFxwoNjPfxzaWqs7cZGsPYy0x_gI)
- [Tushar Roy (5個播放清單)](https://www.youtube.com/user/tusharroy2525/playlists?shelf_id=2&view=50&sort=dd)
    - 對於解法的練習非常有幫助
- [Nick White - LeetCode Solutions (187部影片)](https://www.youtube.com/playlist?list=PLU_sdQYzUj2keVENTP0a5rdykRSgg9Wp-)
    - 這些是我最近很喜歡的影片，你可以在短時間內看完他們
    - 對於解法以及程式碼有很棒的解釋

解題網站:
- [LeetCode](https://leetcode.com/)
- [TopCoder](https://www.topcoder.com/)
- [Project Euler (math-focused)](https://projecteuler.net/index.php?section=problems)
- [Codewars](http://www.codewars.com)
- [HackerEarth](https://www.hackerearth.com/)
- [HackerRank](https://www.hackerrank.com/)
- [Codility](https://codility.com/programmers/)
- [InterviewCake](https://www.interviewcake.com/)
- [Geeks for Geeks](http://www.geeksforgeeks.org/)
- [InterviewBit](https://www.interviewbit.com/invite/icjf)
- [Sphere Online Judge (spoj)](http://www.spoj.com/)
- [Codechef](https://www.codechef.com/)

解題repository:
- [Python互動式coding面試解題](https://github.com/donnemartin/interactive-coding-challenges)

更多面試:
- [Gainlo.co: Mock interviewers from big companies](http://www.gainlo.co/) - I used this and it helped me relax for the phone screen and on-site interview.
- [Pramp: Mock interviews from/with peers](https://www.pramp.com/) - 點對點面試練習
- [Refdash: Mock interviews and expedited interviews](https://refdash.com/) - 同樣能藉由跳過跟多家科技公司的面試，幫助你快速步上軌道，

## 面試前夕

- Coding面試解密-第二集(影片):
    - [Coding面試解密](https://www.youtube.com/watch?v=4NIb9l3imAo)
    - [Coding面試解密 - 全端講者系列](https://www.youtube.com/watch?v=Eg5-tdAwclo)

## 你的履歷

- 看看Coding面試解密中的履歷準備。

## 想想面試時可能的狀況

    一些我預想的問題(我或許已經知道答案，但想知道他們的意見或是團隊的觀點):

- 你的團隊規模多大?
- 你的開發週期大概是怎樣?敏捷agile、瀑布式waterfall、sprint?
- 截止日前趕工是常態嗎?或是這之中有彈性?
- 在你的團隊中是怎麼做決定的?
- 每週你們開幾次會?
- 你覺得你的工作環境能幫助你專注嗎?
- 你目前在做哪個專案?
- 你喜歡這個專案的哪個部份?
- 工作生活如何?
- 工作與生活如何取得平衡?

## 一旦你得到工作

恭喜!!!

繼續學習

活到老，學到老。

---

    *****************************************************************************************************
    *****************************************************************************************************

    下面的東西都是額外的。
    讀這些東西，可以更了解電腦科學的概念，
    並且能讓自己對任何軟體工程的工作做更好的準備。
    如此一來，你將會成為一個更全面的軟體工程師。

    *****************************************************************************************************
    *****************************************************************************************************

---

## 選修書籍

    你可以從以下的書單挑選你有興趣的主題來研讀

- [The Unix Programming Environment](https://www.amazon.com/dp/013937681X)
    - 老，但卻很棒
- [The Linux Command Line: A Complete Introduction](https://www.amazon.com/dp/1593273894/)
    - 現代選擇
- [TCP/IP Illustrated Series](https://en.wikipedia.org/wiki/TCP/IP_Illustrated)
- [Head First Design Patterns](https://www.amazon.com/gp/product/0596007124/)
    - 設計模式的入門簡介
- [Design Patterns: Elements of Reusable Object-Oriente​d Software](https://www.amazon.com/Design-Patterns-Elements-Reusable-Object-Oriented/dp/0201633612)
    - 也被稱為"四人幫"("Gang of Four(GOF)")
    - 經典設計模式書籍
- [UNIX and Linux System Administration Handbook, 5th Edition](https://www.amazon.com/UNIX-Linux-System-Administration-Handbook/dp/0134277554/)
- [Algorithm Design Manual](http://www.amazon.com/Algorithm-Design-Manual-Steven-Skiena/dp/1849967202) (Skiena)
    - 作為複習以及問題辨別
    - 這本書中演算法的部分難度已經超過面試會出現的
    - 本書分為兩個部分:
        - 資料結構及演算法課本
            - 優點:
                - 跟其他演算法課本一樣是個很棒的複習素材
                - 內含關於作者以往解決工業及學術上問題的經驗的故事
                - 含C語言程式碼範例
            - 缺點:
                - 某些地方跟"Introduction to Algorithms"一樣艱深，但在某些主題，"Introduction to Algorithms"或許是更好的選擇。
                - 第7、8、9章有點難以消化，因為某些地方並沒有解釋得很清楚，或者根本上我就是個學渣
                - 別會錯意了，我很喜歡Skiena的教學方法以及他的風格。
        - 演算法目錄:
            - 這個部分是買這本書的最大誘因
            - 我即將著手進行這部分，一旦完成這部分我會再更新上來
        - 可以在kindle上租
    - 解答:
        - [解答](http://www.algorithm.cs.sunysb.edu/algowiki/index.php/The_Algorithms_Design_Manual_(Second_Edition))
        - [解答](http://blog.panictank.net/category/algorithmndesignmanualsolutions/page/2/)
    - [勘誤表](http://www3.cs.stonybrook.edu/~skiena/algorist/book/errata)
- [Write Great Code: Volume 1: Understanding the Machine](https://www.amazon.com/Write-Great-Code-Understanding-Machine/dp/1593270038)
    - 這本書出版於2004年，某些程度上他有點過時了，但對於初步理解電腦是個很棒的資源
    - 作者發明了[高階組合語言HLA](https://zh.wikipedia.org/wiki/%E9%AB%98%E9%9A%8E%E7%B5%84%E5%90%88%E8%AA%9E%E8%A8%80)，所以提到，並且舉了一些HLA的例子。裡面沒有用到很多，但都是很棒的組合語言的例子。
    - 這些章節很值得一讀，讓你具備極佳的基礎:
        - 第2章 - 數值表示法
        - 第3章 - 二進位運算和位元運算
        - 第4章 - 浮點數表示法
        - 第5章 - 字元表示法
        - 第6章 - 記憶體組織和存取
        - 第7章 - 複合資料型別和記憶體
        - 第9章 - CPU架構
        - 第10章 - 指令集架構
        - 第11章 - 記憶體架構與組織
- [Introduction to Algorithms](https://www.amazon.com/Introduction-Algorithms-3rd-MIT-Press/dp/0262033844)
    - **重要:** 讀這本書CP值不高。這本書作為複習演算法和資料結構還算滿不錯的，但它裡面沒有教你怎麼實作這些東西。你必須要能夠自己寫出很棒、有效率的解法。
    - 也被稱為CLR，或是CLRS，因為Stein是後來才加入作者群的。

- [Computer Architecture, Sixth Edition: A Quantitative Approach](https://www.amazon.com/dp/0128119055)
    - 更豐富、更新(2017年)，但篇幅較長。

- [Programming Pearls](http://www.amazon.com/Programming-Pearls-2nd-Jon-Bentley/dp/0201657880)
    - 前幾章提供了一些解決coding問題的精妙絕倫的方法(有些很舊，甚至還用磁帶)，但那些只是導論。這是本程式設計和架構的指南。

## 額外學習
    
    我把他們加了進來為了讓你成為更全方位的軟體工程師，並且留意一些科技以及演算法，讓你的資料庫中有更多素材。

- ### 編譯器
    - [How a Compiler Works in ~1 minute (影片)](https://www.youtube.com/watch?v=IhC7sdYe-Jg)
    - [Harvard CS50 - Compilers (影片)](https://www.youtube.com/watch?v=CSZLNYF4Klo)
    - [C++ (影片)](https://www.youtube.com/watch?v=twodd1KFfGk)
    - [Understanding Compiler Optimization (C++) (影片)](https://www.youtube.com/watch?v=FnGCDLhaxKU)

- ### Emacs and vi(m)
    - 讓你自己熟悉unix的文字編輯器
    - vi(m):
        - [Editing With vim 01 - Installation, Setup, and The Modes (影片)](https://www.youtube.com/watch?v=5givLEMcINQ&index=1&list=PL13bz4SHGmRxlZVmWQ9DvXo1fEg4UdGkr)
        - [VIM Adventures](http://vim-adventures.com/)
        - set of 4 videos:
            - [The vi/vim editor - Lesson 1](https://www.youtube.com/watch?v=SI8TeVMX8pk)
            - [The vi/vim editor - Lesson 2](https://www.youtube.com/watch?v=F3OO7ZIOaJE)
            - [The vi/vim editor - Lesson 3](https://www.youtube.com/watch?v=ZYEccA_nMaI)
            - [The vi/vim editor - Lesson 4](https://www.youtube.com/watch?v=1lYD5gwgZIA)
        - [Using Vi Instead of Emacs](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Using_Vi_instead_of_Emacs)
    - emacs:
        - [基礎Emacs教學 (影片)](https://www.youtube.com/watch?v=hbmV1bnQ-i0)
        - 三組影片:
            - [Emacs教學(初學者) -Part 1- File commands, cut/copy/paste, cursor commands](https://www.youtube.com/watch?v=ujODL7MD04Q)
            - [Emacs教學(初學者) -Part 2- Buffer management, search, M-x grep and rgrep modes](https://www.youtube.com/watch?v=XWpsRupJ4II)
            - [Emacs教學(初學者) -Part 3- Expressions, Statements, ~/.emacs file and packages](https://www.youtube.com/watch?v=paSgzPso-yc)
        - [Evil Mode: Or, How I Learned to Stop Worrying and Love Emacs (影片)](https://www.youtube.com/watch?v=JWD1Fpdd4Pc)
        - [Writing C Programs With Emacs](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Writing_C_programs_with_Emacs)
        - [(maybe) Org Mode In Depth: Managing Structure (影片)](https://www.youtube.com/watch?v=nsGYet02bEk)

- ### Unix命令列(command line)工具
    - bash
    - cat
    - grep
    - sed
    - awk
    - curl or wget
    - sort
    - tr
    - uniq
    - [strace](https://zh.wikipedia.org/wiki/Strace)
    - [tcpdump](https://danielmiessler.com/study/tcpdump/)

- ### 資訊理論 (影片)
    - [Khan Academy](https://www.khanacademy.org/computing/computer-science/informationtheory)
    - 更多有關馬可夫鏈:
        - [Core Markov Text Generation](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/waxgx/core-markov-text-generation)
        - [Core Implementing Markov Text Generation](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/gZhiC/core-implementing-markov-text-generation)
        - [Project = Markov Text Generation Walk Through](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/EUjrq/project-markov-text-generation-walk-through)
    - 進一步的可以去看看下方的MIT 6.050J Information和Entropy系列

- ### 同位位元 & 漢明碼 (影片)
    - [簡介](https://www.youtube.com/watch?v=q-3BctoUpHE)
    - [同位位元](https://www.youtube.com/watch?v=DdMcAUlxh1M)
    - 漢明碼:
        - [錯誤偵測](https://www.youtube.com/watch?v=1A_NcXxdoCc)
        - [錯誤修正](https://www.youtube.com/watch?v=JAMLuxdHH8o)
    - [錯誤檢查](https://www.youtube.com/watch?v=wbH2VxzmoZk)

- ### Entropy
    - 同樣看看下方的影片
    - 務必先看過資訊理論的影片
    - [Information Theory, Claude Shannon, Entropy, Redundancy, Data Compression & Bits (影片)](https://youtu.be/JnJq3Py0dyM?t=176)

- ### 密碼學
    - 同樣看看下方的影片
    - 務必先看過資訊理論的影片
    - [Khan Academy Series](https://www.khanacademy.org/computing/computer-science/cryptography)
    - [Cryptography: Hash Functions](https://www.youtube.com/watch?v=KqqOXndnvic&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=30)
    - [Cryptography: Encryption](https://www.youtube.com/watch?v=9TNI2wHmaeI&index=31&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

- ### 壓縮
    - 務必先看過資訊理論的影片
    - 電腦愛好者 (影片):
        - [Compression](https://www.youtube.com/watch?v=Lto-ajuqW3w)
        - [Entropy in Compression](https://www.youtube.com/watch?v=M5c_RFKVkko)
        - [Upside Down Trees (Huffman Trees)](https://www.youtube.com/watch?v=umTbivyJoiI)
        - [EXTRA BITS/TRITS - Huffman Trees](https://www.youtube.com/watch?v=DV8efuB3h2g)
        - [Elegant Compression in Text (The LZ 77 Method)](https://www.youtube.com/watch?v=goOa3DGezUA)
        - [Text Compression Meets Probabilities](https://www.youtube.com/watch?v=cCDCfoHTsaU)
    - [Compressor Head videos](https://www.youtube.com/playlist?list=PLOU2XLYxmsIJGErt5rrCqaSGTMyyqNt2H)
    - [(額外) Google Developers Live: GZIP is not enough!](https://www.youtube.com/watch?v=whGwm0Lky2s)

- ### 電腦安全
    - [MIT (23部影片)](https://www.youtube.com/playlist?list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
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

- ### 垃圾回收(GC)
    - [GC in Python (影片)](https://www.youtube.com/watch?v=iHVs_HkjdmI)
    - [Deep Dive Java: Garbage Collection is Good!](https://www.infoq.com/presentations/garbage-collection-benefits)
    - [Deep Dive Python: Garbage Collection in CPython (影片)](https://www.youtube.com/watch?v=P-8Z0-MhdQs&list=PLdzf4Clw0VbOEWOS_sLhT_9zaiQDrS5AR&index=3)

- ### 平行計算
    - [Coursera (Scala)](https://www.coursera.org/learn/parprog1/home/week/1)
    - [Efficient Python for High Performance Parallel Computing (影片)](https://www.youtube.com/watch?v=uY85GkaYzBk)

- ### 通訊、序列化以及佇列系統(Messaging, Serialization, and Queueing Systems)
    - [Thrift](https://thrift.apache.org/)
        - [教學](http://thrift-tutorial.readthedocs.io/en/latest/intro.html)
    - [Protocol Buffers](https://developers.google.com/protocol-buffers/)
        - [教學](https://developers.google.com/protocol-buffers/docs/tutorials)
    - [gRPC](http://www.grpc.io/)
        - [gRPC 101 for Java Developers (影片)](https://www.youtube.com/watch?v=5tmPvSe7xXQ&list=PLcTqM9n_dieN0k1nSeN36Z_ppKnvMJoly&index=1)
    - [Redis](http://redis.io/)
        - [教學](http://try.redis.io/)
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

- ### A*搜尋演算法
    - [A搜尋演算法](https://en.wikipedia.org/wiki/A*_search_algorithm)
    - [A* 路徑找尋教學 (影片)](https://www.youtube.com/watch?v=KNXfSOx4eEE)
    - [A* 路徑找尋 (E01: 演算法解釋) (影片)](https://www.youtube.com/watch?v=-L-WgKMFuhE)

- ### 快速傅立葉轉換
    - [傅立葉轉換互動式教學](https://betterexplained.com/articles/an-interactive-guide-to-the-fourier-transform/)
    - [什麼是傅立葉轉換? 他是用來幹嘛的?](http://www.askamathematician.com/2012/09/q-what-is-a-fourier-transform-what-is-it-used-for/)
    - [快速傅立葉轉換是什麼? (影片)](https://www.youtube.com/watch?v=Xxut2PN-V8Q)
    - [分治法: 快速傅立葉轉換 (影片)](https://www.youtube.com/watch?v=iTMn0Kt18tg&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=4)
    - [理解快速傅立葉轉換](http://jakevdp.github.io/blog/2013/08/28/understanding-the-fft/)

- ### 布隆過濾器(Bloom filter)
    - 給定布隆過濾器m個位元以及k個雜湊函式，插入以及membership testing都是O(k)
    - [布隆過濾器 (影片))](https://www.youtube.com/watch?v=-SuTGoFYjZs)
    - [布隆過濾器 | Mining of Massive Datasets | Stanford University (影片)](https://www.youtube.com/watch?v=qBTdukbzc78)
    - [教學](http://billmill.org/bloomfilter-tutorial/)
    - [如何寫一個布隆過濾器的APP](http://blog.michaelschmatz.com/2016/04/11/how-to-write-a-bloom-filter-cpp/)

- ### HyperLogLog
    - [如何只用僅僅1.5KB的記憶體計算數十億個不同的物體](http://highscalability.com/blog/2012/4/5/big-data-counting-how-to-count-a-billion-distinct-objects-us.html)

- ### Locality-Sensitive Hashing
    - 用來判定文件的相似度
    - 跟MD5/SHA正好相反，他們是用來判定兩個文件/字串是否完全相同
    - [Simhashing (hopefully) made simple](http://ferd.ca/simhashing-hopefully-made-simple.html)

- ### van Emde Boas Trees
    - [Divide & Conquer: van Emde Boas Trees (影片)](https://www.youtube.com/watch?v=hmReJCupbNU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=6)
    - [MIT課程筆記](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-046j-design-and-analysis-of-algorithms-spring-2012/lecture-notes/MIT6_046JS12_lec15.pdf)

- ### Augmented Data Structures
    - [CS 61B Lecture 39: Augmenting Data Structures](https://archive.org/details/ucberkeley_webcast_zksIj9O8_jc)

- ### 平衡樹
    - 至少要了解一種平衡樹(並且理解怎麼實作他):
    - "在平衡樹中，AVL和2/3樹已經有點過時了，而紅黑樹則比較流行。伸展樹(Splay tree)是一個特別有趣，能夠自我伸展的資料結構，他利用了旋轉rotation來移動任何accessed key到樹的根部。" - Skiena
    - 在這麼多平衡樹之中，我選擇實作伸縮樹。從我曾聽過的看來，在面試時你並不需要會實作平衡搜尋樹。我看過了很多紅黑樹的程式碼。
        - 伸縮樹:插入、搜尋、刪除函式
        如果你最後選擇實作紅黑樹，試試看以下這些:
        - 搜尋和插入函式，跳過刪除
    - 我想學習更多有關B-Tree的東西，因為在大量資料的時候他運用得十分廣泛
    - [自我平衡二元搜尋樹](https://en.wikipedia.org/wiki/Self-balancing_binary_search_tree)

    - **AVL樹**
        - 實際上:
            從我所知，這些樹在實際上並沒有用到太多，但這些是他們可能會出現的地方:
            AVL樹是另一個能夠在O(log n)的時間內搜尋、插入和刪除的資料結構。AVL樹比起紅黑樹更加嚴格的兩邊平衡，而這也導致了比較慢的插入和刪除，但比較快速的拿取。這對於那些只要建立一次，之後就只要取用的資料結構非常有吸引力，像是字典(或是程式字典，像是直譯器或組譯器的opcodes)
        - [MIT AVL Trees / AVL Sort (影片)](https://www.youtube.com/watch?v=FNeL18KsWPc&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=6)
        - [AVL Trees (影片)](https://www.coursera.org/learn/data-structures/lecture/Qq5E0/avl-trees)
        - [AVL Tree Implementation (影片)](https://www.coursera.org/learn/data-structures/lecture/PKEBC/avl-tree-implementation)
        - [Split And Merge](https://www.coursera.org/learn/data-structures/lecture/22BgE/split-and-merge)

    - **伸縮樹Splay tree**
        - 實際上:
            伸縮樹運用在快取、記憶體分配、路由、垃圾回收、資料壓縮、ropes(在長字串時取代string)、Windows NT(在虛擬記憶體、網路以及檔案系統)等等。
        - [CS 61B: Splay Trees (影片)](https://archive.org/details/ucberkeley_webcast_G5QIXywcJlY)
        - MIT Lecture: 伸縮樹:
            - 非常數學，但務必看看最後10分鐘
            - [影片](https://www.youtube.com/watch?v=QnPl_Y6EqMo)

    - **紅黑樹**
        - 這些是2-3樹的解釋(請看下方)
        - 實際上:
            紅黑樹插入、刪除以及搜尋的時間複雜度在最糟情況下仍有一定程度的保證表現。
            這不只讓他們在時間要求極高的應用(像是即時應用)有著很高的價值，在建構其他資料結構中也有著極高的價值。
            舉例來說，許多在計算幾何中的資料結構都是由紅黑樹所構成的，而在Linux中用到的Completely Fair Scheduler也用到了紅黑樹。
            在Java8中，Collection HashMap也從原本用Linked List實作，儲存特定元素的hashcode，改為用紅黑樹實作。
        - [Aduni - Algorithms - Lecture 4 (link jumps to starting point) (影片)](https://youtu.be/1W3x0f_RmUo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3871)
        - [Aduni - Algorithms - Lecture 5 (影片)](https://www.youtube.com/watch?v=hm2GHwyKF1o&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=5)
        - [Red-Black Tree](https://en.wikipedia.org/wiki/Red%E2%80%93black_tree)
        - [An Introduction To Binary Search And Red Black Tree](https://www.topcoder.com/community/competitive-programming/tutorials/an-introduction-to-binary-search-and-red-black-trees/)

    - **2-3搜尋樹**
        - 實際上:
            2-3樹在犧牲了搜尋速度下換來了相對快速的插入速度(因為高度比起AVL樹來的高)
        - 2-3樹極少被用到，因為實作他需要用到不同的節點。因此，紅黑樹的出現機率較高。
        - [23-Tree Intuition and Definition (影片)](https://www.youtube.com/watch?v=C3SsdUqasD4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=2)
        - [Binary View of 23-Tree](https://www.youtube.com/watch?v=iYvBtGKsqSg&index=3&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [2-3 Trees (student recitation) (影片)](https://www.youtube.com/watch?v=TOb1tuEZ2X4&index=5&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

    - **2-3-4樹 (aka 2-4樹)**
        - 實際上:
            每個2-4樹都有相對應，有著相同資料順序的紅黑樹。2-4樹的插入以及刪除跟紅黑樹中的color-flipping以及rotation是相同的。這讓2-4樹成為了了解紅黑樹背後的
            邏輯的重要工具，而這也是為什麼很多演算法入門課本都會在介紹紅黑樹前介紹2-4樹，即使**2-4樹在實際上並不常用到**。
        - [CS 61B Lecture 26: Balanced Search Trees (影片)](https://archive.org/details/ucberkeley_webcast_zqrqYXkth6Q)
        - [Bottom Up 234-Trees (影片)](https://www.youtube.com/watch?v=DQdMYevEyE4&index=4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [Top Down 234-Trees (影片)](https://www.youtube.com/watch?v=2679VQ26Fp4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=5)

    - **N-ary (K-ary, M-ary) trees**
        - 重點: N或K指的是branching factor(最大的分支數)
        - 二元樹屬於2-ary tree，branching factor為2
        - 2-3樹屬於3-ary
        - [K-Ary Tree](https://en.wikipedia.org/wiki/K-ary_tree)

    - **B樹**
        - 有趣的小知識: B代表什麼是個謎題，或許代表Boeing、Balanced，或Bayer(co-inventor)
        - 實際上:
            B樹廣泛的運用在資料庫中。多數現代資料系統使用B樹(或是其變異體)。除了在資料庫方面的應用，B樹也用在資料系統中，使得我們能夠
            隨機存取特定檔案中的任意部分。最基礎的問題是把file block的i address轉變為disk block(或是轉變為cylinder head sector)的address。
        - [B-Tree](https://en.wikipedia.org/wiki/B-tree)
        - [B-Tree Datastructure](http://btechsmartclass.com/data_structures/b-trees.html)
        - [Introduction to B-Trees (影片)](https://www.youtube.com/watch?v=I22wEC1tTGo&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=6)
        - [B-Tree Definition and Insertion (影片)](https://www.youtube.com/watch?v=s3bCdZGrgpA&index=7&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [B-Tree Deletion (影片)](https://www.youtube.com/watch?v=svfnVhJOfMc&index=8&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [MIT 6.851 - Memory Hierarchy Models (影片)](https://www.youtube.com/watch?v=V3omVLzI0WE&index=7&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf)
                - 涵蓋了cache-oblivious B樹，非常有趣的資料結構
                - 前37分鐘非常技術性，可以跳過(B代表block大小、cache line大小)


- ### k-D樹
    - 是找矩形中或是更高維度物體中的點的數量的好方法
    - 對於k-nearest neighbors很有幫助
    - [Kd Trees (影片)](https://www.youtube.com/watch?v=W94M9D_yXKk)
    - [kNN K-d tree algorithm (影片)](https://www.youtube.com/watch?v=Y4ZgLlDfKDg)

- ### Skip lists
    - "這些資料結構某種程度上有些邪門" - Skiena
    - [Randomization: Skip Lists (影片)](https://www.youtube.com/watch?v=2g9OSRKJuzM&index=10&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [For animations and a little more detail](https://en.wikipedia.org/wiki/Skip_list)

- ### Network Flows
    - [Ford-Fulkerson in 5 minutes — Step by step example (影片)](https://www.youtube.com/watch?v=Tl90tNtKvxs)
    - [Ford-Fulkerson Algorithm (影片)](https://www.youtube.com/watch?v=v1VgJmkEJW0)
    - [Network Flows (影片)](https://www.youtube.com/watch?v=2vhN4Ice5jI)

- ### Disjoint Sets & Union Find
    - [UCB 61B - Disjoint Sets; Sorting & selection (影片)](https://archive.org/details/ucberkeley_webcast_MAEGXTwmUsI)
    - [Sedgewick Algorithms - Union-Find (6部影片)](https://www.coursera.org/learn/algorithms-part1/home/week/1)

- ### 快速處理(Fast Processing)的數學
    - [Integer Arithmetic, Karatsuba Multiplication (影片)](https://www.youtube.com/watch?v=eCaXlAaN2uE&index=11&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [The Chinese Remainder Theorem (used in cryptography) (影片)](https://www.youtube.com/watch?v=ru7mWZJlRQg)

- ### Treap
    - 二元搜尋樹以及heap的結合
    - [Treap](https://en.wikipedia.org/wiki/Treap)
    - [Data Structures: Treaps explained (影片)](https://www.youtube.com/watch?v=6podLUYinH8)
    - [Applications in set operations](https://www.cs.cmu.edu/~scandal/papers/treaps-spaa98.pdf)

- ### 線性程式設計Linear Programming (影片)
    - [Linear Programming](https://www.youtube.com/watch?v=M4K6HYLHREQ)
    - [Finding minimum cost](https://www.youtube.com/watch?v=2ACJ9ewUC6U)
    - [Finding maximum value](https://www.youtube.com/watch?v=8AA_81xI3ik)
    - [Solve Linear Equations with Python - Simplex Algorithm](https://www.youtube.com/watch?v=44pAWI7v5Zk)

- ### 幾何、Convex hull (影片)
    - [Graph Alg. IV: Intro to geometric algorithms - Lecture 9](https://youtu.be/XIAQRlNkJAw?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3164)
    - [Geometric Algorithms: Graham & Jarvis - Lecture 10](https://www.youtube.com/watch?v=J5aJEcOr6Eo&index=10&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
    - [Divide & Conquer: Convex Hull, Median Finding](https://www.youtube.com/watch?v=EzeYI7p9MjU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=2)

- ### 離散數學
    - 觀看下方影片

- ### 機器學習
    - 為什麼要學機器學習?
        - [How Google Is Remaking Itself As A Machine Learning First Company](https://backchannel.com/how-google-is-remaking-itself-as-a-machine-learning-first-company-ada63defcb70)
        - [Large-Scale Deep Learning for Intelligent Computer Systems (影片)](https://www.youtube.com/watch?v=QSaZGT4-6EY)
        - [Deep Learning and Understandability versus Software Engineering and Verification by Peter Norvig](https://www.youtube.com/watch?v=X769cyzBNVw)
    - [Google's Cloud Machine learning tools (影片)](https://www.youtube.com/watch?v=Ja2hxBAwG_0)
    - [Google Developers' Machine Learning Recipes (Scikit Learn & Tensorflow) (影片)](https://www.youtube.com/playlist?list=PLOU2XLYxmsIIuiBfYad6rFYQU_jL2ryal)
    - [Tensorflow (影片)](https://www.youtube.com/watch?v=oZikw5k_2FM)
    - [Tensorflow Tutorials](https://www.tensorflow.org/versions/r0.11/tutorials/index.html)
    - [Practical Guide to implementing Neural Networks in Python (使用Theano)](http://www.analyticsvidhya.com/blog/2016/04/neural-networks-python-theano/)
    - 課程:
        - [Great starter course: Machine Learning](https://www.coursera.org/learn/machine-learning)
              - [只有影片](https://www.youtube.com/playlist?list=PLZ9qNFMHZ-A4rycgrgOYma6zxF4BZGGPW)
              - see videos 12-18 for a review of linear algebra (14 and 15 are duplicates)
        - [Neural Networks for Machine Learning](https://www.coursera.org/learn/neural-networks)
        - [Google's Deep Learning Nanodegree](https://www.udacity.com/course/deep-learning--ud730)
        - [Google/Kaggle Machine Learning Engineer Nanodegree](https://www.udacity.com/course/machine-learning-engineer-nanodegree-by-google--nd009)
        - [Self-Driving Car Engineer Nanodegree](https://www.udacity.com/drive)
        - [Metis Online Course ($99/2個月)](http://www.thisismetis.com/explore-data-science)
    - 資源:
        - 書籍:
            - [Python Machine Learning](https://www.amazon.com/Python-Machine-Learning-Sebastian-Raschka/dp/1783555130/)
            - [Data Science from Scratch: First Principles with Python](https://www.amazon.com/Data-Science-Scratch-Principles-Python/dp/149190142X)
            - [Introduction to Machine Learning with Python](https://www.amazon.com/Introduction-Machine-Learning-Python-Scientists/dp/1449369413/)
        - [Machine Learning for Software Engineers](https://github.com/ZuzooVn/machine-learning-for-software-engineers)
        - Data School: http://www.dataschool.io/

---

## 某些主題的額外知識

    我為了強化某些已經在上面呈現的內容，所以才增加這些東西。但因為上面已經有太多內容了，所以不想把這些放在上面。
    You want to get hired in this century, right?

- **SOLID**   
    - [ ] [Bob Martin SOLID Principles of Object Oriented and Agile Design (video)](https://www.youtube.com/watch?v=TMuno5RZNeE)
    - [ ] S - [Single Responsibility Principle](http://www.oodesign.com/single-responsibility-principle.html) | [Single responsibility to each Object](http://www.javacodegeeks.com/2011/11/solid-single-responsibility-principle.html)
        - [more flavor](https://docs.google.com/open?id=0ByOwmqah_nuGNHEtcU5OekdDMkk)
    - [ ] O - [Open/Closed Principal](http://www.oodesign.com/open-close-principle.html)  | [On production level Objects are ready for extension but not for modification](https://en.wikipedia.org/wiki/Open/closed_principle)
        - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgN2M5MTkwM2EtNWFkZC00ZTI3LWFjZTUtNTFhZGZiYmUzODc1&hl=en)
    - [ ] L - [Liskov Substitution Principal](http://www.oodesign.com/liskov-s-substitution-principle.html) | [Base Class and Derived class follow ‘IS A’ principal](http://stackoverflow.com/questions/56860/what-is-the-liskov-substitution-principle)
        - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgNzAzZjA5ZmItNjU3NS00MzQ5LTkwYjMtMDJhNDU5ZTM0MTlh&hl=en)
    - [ ] I - [Interface segregation principle](http://www.oodesign.com/interface-segregation-principle.html) | clients不該被強迫去實作他們不會用到的介面
        - [Interface Segregation Principle in 5 minutes (影片)](https://www.youtube.com/watch?v=3CtAfl7aXAQ)
        - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgOTViYjJhYzMtMzYxMC00MzFjLWJjMzYtOGJiMDc5N2JkYmJi&hl=en)
    - [ ] D -[Dependency Inversion principle](http://www.oodesign.com/dependency-inversion-principle.html) | 減少對物件的composition的依賴
        - [Why Is The Dependency Inversion Principle And Why Is It Important](http://stackoverflow.com/questions/62539/what-is-the-dependency-inversion-principle-and-why-is-it-important)
        - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgMjdlMWIzNGUtZTQ0NC00ZjQ5LTkwYzQtZjRhMDRlNTQ3ZGMz&hl=en)


- **Union-Find**
    - [Overview](https://www.coursera.org/learn/data-structures/lecture/JssSY/overview)
    - [Naive Implementation](https://www.coursera.org/learn/data-structures/lecture/EM5D0/naive-implementations)
    - [Trees](https://www.coursera.org/learn/data-structures/lecture/Mxu0w/trees)
    - [Union By Rank](https://www.coursera.org/learn/data-structures/lecture/qb4c2/union-by-rank)
    - [Path Compression](https://www.coursera.org/learn/data-structures/lecture/Q9CVI/path-compression)
    - [Analysis Options](https://www.coursera.org/learn/data-structures/lecture/GQQLN/analysis-optional)

- **More Dynamic Programming** (影片)
    - [6.006: Dynamic Programming I: Fibonacci, Shortest Paths](https://www.youtube.com/watch?v=OQ5jsbhAv_M&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=19)
    - [6.006: Dynamic Programming II: Text Justification, Blackjack](https://www.youtube.com/watch?v=ENyox7kNKeY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=20)
    - [6.006: DP III: Parenthesization, Edit Distance, Knapsack](https://www.youtube.com/watch?v=ocZMDMZwhCY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=21)
    - [6.006: DP IV: Guitar Fingering, Tetris, Super Mario Bros.](https://www.youtube.com/watch?v=tp4_UXaVyx8&index=22&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [6.046: Dynamic Programming & Advanced DP](https://www.youtube.com/watch?v=Tw1k46ywN6E&index=14&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [6.046: Dynamic Programming: All-Pairs Shortest Paths](https://www.youtube.com/watch?v=NzgFUwOaoIw&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=15)
    - [6.046: Dynamic Programming (student recitation)](https://www.youtube.com/watch?v=krZI60lKPek&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=12)

- **Advanced Graph Processing** (影片)
    - [Synchronous Distributed Algorithms: Symmetry-Breaking. Shortest-Paths Spanning Trees](https://www.youtube.com/watch?v=mUBmcbbJNf4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=27)
    - [Asynchronous Distributed Algorithms: Shortest-Paths Spanning Trees](https://www.youtube.com/watch?v=kQ-UQAzcnzA&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=28)

- MIT **Probability** (過於數學，進度緩慢，但這對於數學的東西卻是必要之惡) (影片):
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
    - Rabin-Karp (影片):
        - [Rabin Karps Algorithm](https://www.coursera.org/learn/data-structures/lecture/c0Qkw/rabin-karps-algorithm)
        - [Precomputing](https://www.coursera.org/learn/data-structures/lecture/nYrc8/optimization-precomputation)
        - [Optimization: Implementation and Analysis](https://www.coursera.org/learn/data-structures/lecture/h4ZLc/optimization-implementation-and-analysis)
        - [Table Doubling, Karp-Rabin](https://www.youtube.com/watch?v=BRO7mVIFt08&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=9)
        - [Rolling Hashes, Amortized Analysis](https://www.youtube.com/watch?v=w6nuXg0BISo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=32)
    - Knuth-Morris-Pratt (KMP):
        - [TThe Knuth-Morris-Pratt (KMP) String Matching Algorithm](https://www.youtube.com/watch?v=5i7oKodCRJo)
    - Boyer–Moore string search algorithm
        - [Boyer-Moore String Search Algorithm](https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_string_search_algorithm)
        - [Advanced String Searching Boyer-Moore-Horspool Algorithms (影片)](https://www.youtube.com/watch?v=QDZpzctPf10)
    - [Coursera: Algorithms on Strings](https://www.coursera.org/learn/algorithms-on-strings/home/week/1)
        - 開始的時候很不錯，但過了KMP的部分後就變得過於困難
        - 很好的解釋了tries(字典樹)
        - 可以跳過

- **排序**

    - Stanford的排序課程:
        - [Lecture 15 | Programming Abstractions (影片)](https://www.youtube.com/watch?v=ENp00xylP7c&index=15&list=PLFE6E58F856038C69)
        - [Lecture 16 | Programming Abstractions (影片)](https://www.youtube.com/watch?v=y4M9IVgrVKo&index=16&list=PLFE6E58F856038C69)
    - Shai Simonson, [Aduni.org](http://www.aduni.org/):
        - [Algorithms - Sorting - Lecture 2 (影片)](https://www.youtube.com/watch?v=odNJmw5TOEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=2)
        - [Algorithms - Sorting II - Lecture 3 (影片)](https://www.youtube.com/watch?v=hj8YKFTFKEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=3)
    - Steven Skiena的排序課程:
        - [lecture begins at 26:46 (影片)](https://youtu.be/ute-pmMkyuk?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1600)
        - [lecture begins at 27:40 (影片)](https://www.youtube.com/watch?v=yLvp-pB8mak&index=8&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [lecture begins at 35:00 (影片)](https://www.youtube.com/watch?v=q7K9otnzlfE&index=9&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [lecture begins at 23:50 (影片)](https://www.youtube.com/watch?v=TvqIGu9Iupw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=10)

## 影片系列

坐下來享受一下"Netflix和技巧" :P

- [List of individual Dynamic Programming problems (每部都很短)](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)

- [x86 Architecture, Assembly, Applications (11部影片)](https://www.youtube.com/playlist?list=PL038BE01D3BAEFDB0)

- [MIT 18.06 Linear Algebra, Spring 2005 (35部影片)](https://www.youtube.com/playlist?list=PLE7DDD91010BC51F8)

- [Excellent - MIT Calculus Revisited: Single Variable Calculus](https://www.youtube.com/playlist?list=PL3B08AE665AB9002A)

- [Computer Science 70, 001 - Spring 2015 - Discrete Mathematics and Probability Theory](http://www.infocobuild.com/education/audio-video-courses/computer-science/cs70-spring2015-berkeley.html)

- [Discrete Mathematics by Shai Simonson (19部影片)](https://www.youtube.com/playlist?list=PL3o9D4Dl2FJ9q0_gtFXPh_H4POI5dK0yG)

- [Discrete Mathematics Part 1 by Sarada Herke (5部影片)](https://www.youtube.com/playlist?list=PLGxuz-nmYlQPOc4w1Kp2MZrdqOOm4Jxeo)

- CSE373 - Analysis of Algorithms (25部影片)
    - [Skiena lectures from Algorithm Design Manual](https://www.youtube.com/watch?v=ZFjhkohHdAA&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=1)

- [UC Berkeley 61B (Spring 2014): Data Structures (25部影片)](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd)

- [UC Berkeley 61B (Fall 2006): Data Structures (39部影片)](https://archive.org/details/ucberkeley-webcast-PL4BBB74C7D2A1049C)

- [UC Berkeley 61C: Machine Structures (26部影片)](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iCl2-D-FS5mk0jFF6cYSJs_)

- [OOSE: Software Dev Using UML and Java (21部影片)](https://www.youtube.com/playlist?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)

- ~~[UC Berkeley CS 152: Computer Architecture and Engineering (20部影片)](https://www.youtube.com/watch?v=UH0QYvtP7Rk&index=20&list=PLkFD6_40KJIwEiwQx1dACXwh-2Fuo32qr)~~

- [MIT 6.004: Computation Structures (49部影片)](https://www.youtube.com/playlist?list=PLDSlqjcPpoL64CJdF0Qee5oWqGS6we_Yu)

- [Carnegie Mellon - Computer Architecture Lectures (39部影片)](https://www.youtube.com/playlist?list=PL5PHm2jkkXmi5CxxI7b3JCL1TWybTDtKq)

- [MIT 6.006: Intro to Algorithms (47部影片)](https://www.youtube.com/watch?v=HtSuA80QTyo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&nohtml5=False)

- [MIT 6.033: Computer System Engineering (22部影片)](https://www.youtube.com/watch?v=zm2VP0kHl1M&list=PL6535748F59DCA484)

- [MIT 6.034 Artificial Intelligence, Fall 2010 (30部影片)](https://www.youtube.com/playlist?list=PLUl4u3cNGP63gFHB6xb-kVBiQHYe_4hSi)

- [MIT 6.042J: Mathematics for Computer Science, Fall 2010 (25部影片)](https://www.youtube.com/watch?v=L3LMbpZIKhQ&list=PLB7540DEDD482705B)

- [MIT 6.046: Design and Analysis of Algorithms (34部影片)](https://www.youtube.com/watch?v=2P-yW7LQr08&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

- [MIT 6.050J: Information and Entropy, Spring 2008 (19部影片)](https://www.youtube.com/watch?v=phxsQrZQupo&list=PL_2Bwul6T-A7OldmhGODImZL8KEVE38X7)

- [MIT 6.851: Advanced Data Structures (22部影片)](https://www.youtube.com/watch?v=T0yzrZL1py0&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=1)

- [MIT 6.854: Advanced Algorithms, Spring 2016 (24部影片)](https://www.youtube.com/playlist?list=PL6ogFv-ieghdoGKGg2Bik3Gl1glBTEu8c)

- [Harvard COMPSCI 224: Advanced Algorithms (25部影片)](https://www.youtube.com/playlist?list=PL2SOU6wwxB0uP4rJgf5ayhHWgw7akUWSf)

- [MIT 6.858 Computer Systems Security, Fall 2014](https://www.youtube.com/watch?v=GqmQg-cszw4&index=1&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)

- [Stanford: Programming Paradigms (27部影片)](https://www.youtube.com/view_play_list?p=9D558D49CA734A02)

- [Introduction to Cryptography by Christof Paar](https://www.youtube.com/playlist?list=PL6N5qY2nvvJE8X75VkXglSrVhLv1tVcfy)
    - [Course Website along with Slides and Problem Sets](http://www.crypto-textbook.com/)

- [Mining Massive Datasets - Stanford University (94部影片)](https://www.youtube.com/playlist?list=PLLssT5z_DsK9JDLcT8T62VtzwyW9LNepV)

- [Graph Theory by Sarada Herke (67部影片)](https://www.youtube.com/user/DrSaradaHerke/playlists?shelf_id=5&view=50&sort=dd)

## 電腦科學課程

- [電腦科學線上課程目錄]](https://github.com/open-source-society/computer-science)
- [電腦科學課程目錄 (大多都有線上課程))](https://github.com/prakhar1989/awesome-courses)

## 論文

- [Love classic papers?](https://www.cs.cmu.edu/~crary/819-f09/)
- [1978: Communicating Sequential Processes](http://spinroot.com/courses/summer/Papers/hoare_1978.pdf)
    - [Go語言實作](https://godoc.org/github.com/thomas11/csp)
- [2003: The Google File System](http://static.googleusercontent.com/media/research.google.com/en//archive/gfs-sosp2003.pdf)
    - replaced by Colossus in 2012
- [2004: MapReduce: Simplified Data Processing on Large Clusters]( http://static.googleusercontent.com/media/research.google.com/en//archive/mapreduce-osdi04.pdf)
    - mostly replaced by Cloud Dataflow?
- [2006: Bigtable: A Distributed Storage System for Structured Data](https://static.googleusercontent.com/media/research.google.com/en//archive/bigtable-osdi06.pdf)
    - [An Inside Look at Google BigQuery](https://cloud.google.com/files/BigQueryTechnicalWP.pdf)
- [2006: The Chubby Lock Service for Loosely-Coupled Distributed Systems](https://research.google.com/archive/chubby-osdi06.pdf)
- [2007: Dynamo: Amazon’s Highly Available Key-value Store](http://s3.amazonaws.com/AllThingsDistributed/sosp/amazon-dynamo-sosp2007.pdf)
    - The Dynamo paper kicked off the NoSQL revolution
- [2007: What Every Programmer Should Know About Memory (very long, and the author encourages skipping of some sections)](https://www.akkadia.org/drepper/cpumemory.pdf)
- [2010: Dapper, a Large-Scale Distributed Systems Tracing Infrastructure](https://research.google.com/pubs/archive/36356.pdf)
- [2010: Dremel: Interactive Analysis of Web-Scale Datasets](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/36632.pdf)
- [2012: Google's Colossus](https://www.wired.com/2012/07/google-colossus/)
    - 論文暫不提供
- 2012: AddressSanitizer: A Fast Address Sanity Checker:
    - [論文](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/37752.pdf)
    - [影片](https://www.usenix.org/conference/atc12/technical-sessions/presentation/serebryany)
- 2013: Spanner: Google’s Globally-Distributed Database:
    - [論文](http://static.googleusercontent.com/media/research.google.com/en//archive/spanner-osdi2012.pdf)
    - [影片](https://www.usenix.org/node/170855)
- [2014: Machine Learning: The High-Interest Credit Card of Technical Debt](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43146.pdf)
- [2015: Continuous Pipelines at Google](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43790.pdf)
- [2015: High-Availability at Massive Scale: Building Google’s Data Infrastructure for Ads](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44686.pdf)
- [2015: TensorFlow: Large-Scale Machine Learning on Heterogeneous Distributed Systems](http://download.tensorflow.org/paper/whitepaper2015.pdf )
- [2015: How Developers Search for Code: A Case Study](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43835.pdf)
- [2016: Borg, Omega, and Kubernetes](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44843.pdf)


## LICENSE

[CC-BY-SA-4.0](./LICENSE.txt)