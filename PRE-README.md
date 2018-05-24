
> I originally created this as a short to-do list of study topics for becoming a software engineer,
> but it grew to the large list you see today. After going through this study plan, [I got hired
> as a Software Development Engineer at Amazon](https://startupnextdoor.com/ive-been-acquired-by-amazon/?src=ciu)!
> You probably won't have to study as much as I did. Anyway, everything you need is here.
>
> The items listed here will prepare you well for in an interview at just about any software company,
> including the giants: Amazon, Facebook, Google or Microsoft.
>
> *Best of luck to you!*

Translations:
- [中文版本](translations/README-cn.md)
- [Tiếng Việt - Vietnamese](translations/README-vi.md)
- [Español](translations/README-es.md)
- [Português Brasileiro](translations/README-ptbr.md)

Translations in progress:
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

## What is it?

This is my multi-month study plan for going from web developer (self-taught, no CS degree) to software engineer for a large company.

![Coding at the whiteboard - from HBO's Silicon Valley](https://dng5l3qzreal6.cloudfront.net/2016/Aug/coding_board_small-1470866369118.jpg)

This is meant for **new software engineers** or those switching from
software/web development to software engineering (where computer science knowledge is required). If you have
many years of experience and are claiming many years of software engineering experience, expect a harder interview.

If you have many years of software/web development experience, note that large software companies like Google, Amazon,
Facebook and Microsoft view software engineering as different from software/web development, and they require computer science knowledge.

If you want to be a reliability engineer or operations engineer, study more from the optional list (networking, security).

---

## Table of Contents

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

---------------- Everything below this point is optional ----------------

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

## Why use it?

When I started this project, I didn't know a stack from a heap, didn't know Big-O anything, anything about trees, or how to
traverse a graph. If I had to code a sorting algorithm, I can tell ya it wouldn't have been very good.
Every data structure I've ever used was built into the language, and I didn't know how they worked
under the hood at all. I've never had to manage memory unless a process I was running would give an "out of
memory" error, and then I'd have to find a workaround. I've used a few multidimensional arrays in my life and
thousands of associative arrays, but I've never created data structures from scratch.

It's a long plan. It may take you months. If you are familiar with a lot of this already it will take you a lot less time.

## How to use it

Everything below is an outline, and you should tackle the items in order from top to bottom.

I'm using Github's special markdown flavor, including tasks lists to check progress.

**Create a new branch so you can check items like this, just put an x in the brackets: [x]**


    Fork a branch and follow the commands below

`git checkout -b progress`

`git remote add jwasham https://github.com/jwasham/coding-interview-university`

`git fetch --all`

    Mark all boxes with X after you completed your changes

`git add . `

`git commit -m "Marked x" `

`git rebase jwasham/master `

`git push --force `

[More about Github-flavored markdown](https://guides.github.com/features/mastering-markdown/#GitHub-flavored-markdown)

## Don't feel you aren't smart enough
- Successful software engineers are smart, but many have an insecurity that they aren't smart enough.
- [The myth of the Genius Programmer](https://www.youtube.com/watch?v=0SARbwvhupQ)
- [It's Dangerous to Go Alone: Battling the Invisible Monsters in Tech](https://www.youtube.com/watch?v=1i8ylq4j_EY)
- [Believe you can change](http://www.aaronsw.com/weblog/dweck)

## About Video Resources

Some videos are available only by enrolling in a Coursera, EdX, or Lynda.com class. These are called MOOCs.
Sometimes the classes are not in session so you have to wait a couple of months, so you have no access. Lynda.com courses are not free.

    I'd appreciate your help to add free and always-available public sources, such as YouTube videos to accompany the online course videos.
    I like using university lectures.


## Interview Process & General Interview Prep

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
        - Learn how to make yourself ready for software engineer interviews from a former Google interviewer.
    - [ ] [Python for Data Structures, Algorithms, and Interviews! (paid course)](https://www.udemy.com/python-for-data-structures-algorithms-and-interviews/):
        - A Python centric interview prep course which covers data structures, algorithms, mock interviews and much more.

## Pick One Language for the Interview

You can use a language you are comfortable in to do the coding part of the interview, but for large companies, these are solid choices:

- C++
- Java
- Python

You could also use these, but read around first. There may be caveats:

- JavaScript
- Ruby

You need to be very comfortable in the language and be knowledgeable.

Read more about choices:
- http://www.byte-by-byte.com/choose-the-right-language-for-your-coding-interview/
- http://blog.codingforinterviews.com/best-programming-language-jobs/

[See language resources here](programming-language-resources.md)

You'll see some C, C++, and Python learning included below, because I'm learning. There are a few books involved, see the bottom.

## Book List

This is a shorter list than what I used. This is abbreviated to save you time.

### Interview Prep

- [ ] [Programming Interviews Exposed: Secrets to Landing Your Next Job, 2nd Edition](http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html)
    - answers in C++ and Java
    - this is a good warm-up for Cracking the Coding Interview
    - not too difficult, most problems may be easier than what you'll see in an interview (from what I've read)
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - answers in Java

If you have tons of extra time:

- [ ] [Elements of Programming Interviews (C++ version)](https://www.amazon.com/Elements-Programming-Interviews-Insiders-Guide/dp/1479274836)
- [ ] Elements of Programming Interviews (Java version)
    - [book](https://www.amazon.com/Elements-Programming-Interviews-Java-Insiders/dp/1517435803/)
    - [Companion Project - Method Stub and Test Cases for Every Problem in the Book](https://github.com/gardncl/elements-of-programming-interviews)

### Computer Architecture

If short on time:

- [ ] [Write Great Code: Volume 1: Understanding the Machine](https://www.amazon.com/Write-Great-Code-Understanding-Machine/dp/1593270038)
    - The book was published in 2004, and is somewhat outdated, but it's a terrific resource for understanding a computer in brief.
    - The author invented HLA, so take mentions and examples in HLA with a grain of salt. Not widely used, but decent examples of what assembly looks like.
    - These chapters are worth the read to give you a nice foundation:
        - Chapter 2 - Numeric Representation
        - Chapter 3 - Binary Arithmetic and Bit Operations
        - Chapter 4 - Floating-Point Representation
        - Chapter 5 - Character Representation
        - Chapter 6 - Memory Organization and Access
        - Chapter 7 - Composite Data Types and Memory Objects
        - Chapter 9 - CPU Architecture
        - Chapter 10 - Instruction Set Architecture
        - Chapter 11 - Memory Architecture and Organization

If you have more time (I want this book):

- [ ] [Computer Architecture, Sixth Edition: A Quantitative Approach](https://www.amazon.com/dp/0128119055)
    - For a richer, more up-to-date (2017), but longer treatment


### Language Specific

**You need to choose a language for the interview (see above).** Here are my recommendations by language. I don't have resources for all languages. I welcome additions.

If you read though one of these, you should have all the data structures and algorithms knowledge you'll need to start doing coding problems.
**You can skip all the video lectures in this project**, unless you'd like a review.

[Additional language-specific resources here.](programming-language-resources.md)

### C++

I haven't read these two, but they are highly rated and written by Sedgewick. He's awesome.

- [ ] [Algorithms in C++, Parts 1-4: Fundamentals, Data Structure, Sorting, Searching](https://www.amazon.com/Algorithms-Parts-1-4-Fundamentals-Structure/dp/0201350882/)
- [ ] [Algorithms in C++ Part 5: Graph Algorithms](https://www.amazon.com/Algorithms-Part-Graph-3rd-Pt-5/dp/0201361183/)

If you have a better recommendation for C++, please let me know. Looking for a comprehensive resource.

### Java

- [ ] [Algorithms (Sedgewick and Wayne)](https://www.amazon.com/Algorithms-4th-Robert-Sedgewick/dp/032157351X/)
    - videos with book content (and Sedgewick!):
        - [Algorithms I](https://www.youtube.com/user/algorithmscourses/playlists?view=50&sort=dd&shelf_id=2)
        - [Algorithms II](https://www.youtube.com/user/algorithmscourses/playlists?shelf_id=3&view=50&sort=dd)

OR:

- [ ] [Data Structures and Algorithms in Java](https://www.amazon.com/Data-Structures-Algorithms-Michael-Goodrich/dp/1118771338/)
    - by Goodrich, Tamassia, Goldwasser
    - used as optional text for CS intro course at UC Berkeley
    - see my book report on the Python version below. This book covers the same topics.

### Python

- [ ] [Data Structures and Algorithms in Python](https://www.amazon.com/Structures-Algorithms-Python-Michael-Goodrich/dp/1118290275/)
    - by Goodrich, Tamassia, Goldwasser
    - I loved this book. It covered everything and more.
    - Pythonic code
    - my glowing book report: https://startupnextdoor.com/book-report-data-structures-and-algorithms-in-python/


### Optional Books

**Some people recommend these, but I think it's going overboard, unless you have many years of software engineering experience and expect a much harder interview:**

- [ ] [Algorithm Design Manual](http://www.amazon.com/Algorithm-Design-Manual-Steven-Skiena/dp/1849967202) (Skiena)
    - As a review and problem recognition
    - The algorithm catalog portion is well beyond the scope of difficulty you'll get in an interview.
    - This book has 2 parts:
        - class textbook on data structures and algorithms
            - pros:
                - is a good review as any algorithms textbook would be
                - nice stories from his experiences solving problems in industry and academia
                - code examples in C
            - cons:
                - can be as dense or impenetrable as CLRS, and in some cases, CLRS may be a better alternative for some subjects
                - chapters 7, 8, 9 can be painful to try to follow, as some items are not explained well or require more brain than I have
                - don't get me wrong: I like Skiena, his teaching style, and mannerisms, but I may not be Stony Brook material.
        - algorithm catalog:
            - this is the real reason you buy this book.
            - about to get to this part. Will update here once I've made my way through it.
    - Can rent it on kindle
    - Answers:
        - [Solutions](http://www.algorithm.cs.sunysb.edu/algowiki/index.php/The_Algorithms_Design_Manual_(Second_Edition))
        - [Solutions](http://blog.panictank.net/category/algorithmndesignmanualsolutions/page/2/)
    - [Errata](http://www3.cs.stonybrook.edu/~skiena/algorist/book/errata)

- [ ] [Introduction to Algorithms](https://www.amazon.com/Introduction-Algorithms-3rd-MIT-Press/dp/0262033844)
    - **Important:** Reading this book will only have limited value. This book is a great review of algorithms and data structures, but won't teach you how to write good code. You have to be able to code a decent solution efficiently.
    - aka CLR, sometimes CLRS, because Stein was late to the game

- [ ] [Programming Pearls](http://www.amazon.com/Programming-Pearls-2nd-Jon-Bentley/dp/0201657880)
    - The first couple of chapters present clever solutions to programming problems (some very old using data tape) but
      that is just an intro. This a guidebook on program design and architecture, much like Code Complete, but much shorter.

- ~~"Algorithms and Programming: Problems and Solutions" by Shen~~
    - A fine book, but after working through problems on several pages I got frustrated with the Pascal, do while loops, 1-indexed arrays, and unclear post-condition satisfaction results.
    - Would rather spend time on coding problems from another book or online coding problems.


## Before you Get Started

This list grew over many months, and yes, it kind of got out of hand.

Here are some mistakes I made so you'll have a better experience.

### 1. You Won't Remember it All

I watched hours of videos and took copious notes, and months later there was much I didn't remember. I spent 3 days going
through my notes and making flashcards so I could review.

Read please so you won't make my mistakes:

[Retaining Computer Science Knowledge](https://startupnextdoor.com/retaining-computer-science-knowledge/)

### 2. Use Flashcards

To solve the problem, I made a little flashcards site where I could add flashcards of 2 types: general and code.
Each card has different formatting.

I made a mobile-first website so I could review on my phone and tablet, wherever I am.

Make your own for free:

- [Flashcards site repo](https://github.com/jwasham/computer-science-flash-cards)
- [My flash cards database (old - 1200 cards)](https://github.com/jwasham/computer-science-flash-cards/blob/master/cards-jwasham.db):
- [My flash cards database (new - 1800 cards)](https://github.com/jwasham/computer-science-flash-cards/blob/master/cards-jwasham-extreme.db):

Keep in mind I went overboard and have cards covering everything from assembly language and Python trivia to machine learning and statistics. It's way too much for what's required.

**Note on flashcards:** The first time you recognize you know the answer, don't mark it as known. You have to see the
same card and answer it several times correctly before you really know it. Repetition will put that knowledge deeper in
your brain.

An alternative to using my flashcard site is [Anki](http://ankisrs.net/), which has been recommended to me numerous times. It uses a repetition system to help you remember.
It's user-friendly, available on all platforms and has a cloud sync system. It costs $25 on iOS but is free on other platforms.

My flashcard database in Anki format: https://ankiweb.net/shared/info/25173560 (thanks [@xiewenya](https://github.com/xiewenya))

### 3. Review, review, review

I keep a set of cheat sheets on ASCII, OSI stack, Big-O notations, and more. I study them when I have some spare time.

Take a break from programming problems for a half hour and go through your flashcards.

### 4. Focus

There are a lot of distractions that can take up valuable time. Focus and concentration are hard.

## What you won't see covered

These are prevalent technologies but not part of this study plan:

- SQL
- Javascript
- HTML, CSS, and other front-end technologies

## The Daily Plan

Some subjects take one day, and some will take multiple days. Some are just learning with nothing to implement.

Each day I take one subject from the list below, watch videos about that subject, and write an implementation in:
- C - using structs and functions that take a struct * and something else as args.
- C++ - without using built-in types
- C++ - using built-in types, like STL's std::list for a linked list
- Python - using built-in types (to keep practicing Python)
- and write tests to ensure I'm doing it right, sometimes just using simple assert() statements
- You may do Java or something else, this is just my thing.

You don't need all these. You need only [one language for the interview](#pick-one-language-for-the-interview).

Why code in all of these?
- Practice, practice, practice, until I'm sick of it, and can do it with no problem (some have many edge cases and bookkeeping details to remember)
- Work within the raw constraints (allocating/freeing memory without help of garbage collection (except Python))
- Make use of built-in types so I have experience using the built-in tools for real-world use (not going to write my own linked list implementation in production)

I may not have time to do all of these for every subject, but I'll try.

You can see my code here:
 - [C](https://github.com/jwasham/practice-c)
 - [C++](https://github.com/jwasham/practice-cpp)
 - [Python](https://github.com/jwasham/practice-python)

You don't need to memorize the guts of every algorithm.

Write code on a whiteboard or paper, not a computer. Test with some sample inputs. Then test it out on a computer.

## Prerequisite Knowledge

- [ ] **Learn C**
    - C is everywhere. You'll see examples in books, lectures, videos, *everywhere* while you're studying.
    - [ ] [C Programming Language, Vol 2](https://www.amazon.com/Programming-Language-Brian-W-Kernighan/dp/0131103628)
        - This is a short book, but it will give you a great handle on the C language and if you practice it a little
            you'll quickly get proficient. Understanding C helps you understand how programs and memory work.
        - [answers to questions](https://github.com/lekkas/c-algorithms)

- [ ] **How computers process a program:**
    - [ ] [How does CPU execute program (video)](https://www.youtube.com/watch?v=42KTvGYQYnA)
    - [ ] [Machine Code Instructions (video)](https://www.youtube.com/watch?v=Mv2XQgpbTNE)
