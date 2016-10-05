# Google Interview University

_If you like this project, please give me a star._ &#9733;

## What is it?

This is my multi-month study plan for going from web developer (self-taught, no CS degree) to Google software engineer.

![Coding at the whiteboard - from HBO's Silicon Valley](https://dng5l3qzreal6.cloudfront.net/2016/Aug/coding_board_small-1470866369118.jpg)

This long list has been extracted and expanded from **Google's coaching notes**, so these are the things you need to know. 
There are extra items I added at the bottom that may come up in the interview or be helpful in solving a problem. Many items are from 
Steve Yegge's "[Get that job at Google](http://steve-yegge.blogspot.com/2008/03/get-that-job-at-google.html)" and are reflected 
sometimes word-for-word in Google's coaching notes.

---

## Table of Contents

- [What is it?](#what-is-it)
- [Why use it?](#why-use-it)
- [How to use it](#how-to-use-it)
- [Get in a Googley Mood](#get-in-a-googley-mood)
- [Don't feel you aren't smart enough](#dont-feel-you-arent-smart-enough)
- [About Video Resources](#about-video-resources)
- [Interview Process & General Interview Prep](#interview-process--general-interview-prep)
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
    - [Endianness](#endianness)
    - [Binary search](#binary-search)
    - [Bitwise operations](#bitwise-operations)
- [Trees](#trees)
    - [Trees - Notes & Background](#trees---notes--background)
    - [Binary search trees: BSTs](#binary-search-trees-bsts)
    - [Heap / Priority Queue / Binary Heap](#heap--priority-queue--binary-heap)
    - [Tries](#tries)
    - [Balanced search trees](#balanced-search-trees)
    - [N-ary (K-ary, M-ary) trees](#n-ary-k-ary-m-ary-trees)
- [Sorting](#sorting)
- [Graphs](#graphs)
- [Even More Knowledge](#even-more-knowledge)
    - [Recursion](#recursion)
    - [Dynamic Programming](#dynamic-programming)
    - [Combinatorics (n choose k) & Probability](#combinatorics-n-choose-k--probability)
    - [NP, NP-Complete and Approximation Algorithms](#np-np-complete-and-approximation-algorithms)
    - [Garbage collection](#garbage-collection)
    - [Caches](#caches)
    - [Processes and Threads](#processes-and-threads)
    - [System Design, Scalability, Data Handling](#system-design-scalability-data-handling)
    - [About Google](#about-google)
    - [Papers](#papers)
    - [Unicode](#unicode)
    - [Emacs and vi(m)](#emacs-and-vim)
    - [Unix command line tools](#unix-command-line-tools)
    - [Testing](#testing)
    - [Design patterns](#design-patterns)
    - [Scheduling](#scheduling)
    - [Implement system routines](#implement-system-routines)
    - [String searching & manipulations](#string-searching--manipulations)
- [Final Review](#final-review)
- [Books](#books)
- [Coding exercises/challenges](#coding-exerciseschallenges)
- [Once you're closer to the interview](#once-youre-closer-to-the-interview)
- [Your Resume](#your-resume)
- [Be thinking of for when the interview comes](#be-thinking-of-for-when-the-interview-comes)
- [Have questions for the interviewer](#have-questions-for-the-interviewer)
- [Additional Learnings (not required)](#additional-learnings-not-required)
    - [Information theory](#information-theory)
    - [Parity & Hamming Code](#parity--hamming-code)
    - [Entropy](#entropy)
    - [Cryptography](#cryptography)
    - [Compression](#compression)
    - [Networking](#networking)
    - [Computer Security](#computer-security)
    - [Parallel Programming](#parallel-programming)
    - [Messaging, Serialization, and Queueing Systems](#messaging-serialization-and-queueing-systems)
    - [Fast Fourier Transform](#fast-fourier-transform)
    - [Bloom Filter](#bloom-filter)
    - [van Emde Boas Trees](#van-emde-boas-trees)
    - [Augmented Data Structures](#augmented-data-structures)
    - [Skip lists](#skip-lists)
    - [Network Flows](#network-flows)
    - [Disjoint Sets & Union Find](#disjoint-sets--union-find)
    - [Math for Fast Processing](#math-for-fast-processing)
    - [Treap](#treap)
    - [Linear Programming](#linear-programming)
    - [Geometry, Convex hull](#geometry-convex-hull)
    - [Discrete math](#discrete-math)
    - [Machine Learning](#machine-learning)
    - [Go](#go)
- [Additional Detail on Some Subjects](#additional-detail-on-some-subjects)
- [Video Series](#video-series)
- [Once You've Got The Job](#once-youve-got-the-job)

---


## Why use it?

I'm following this plan to prepare for my Google interview. I've been building the web, building
services, and launching startups since 1997. I have an economics degree, not a CS degree.  I've
been very successful in my career, but I want to work at Google. I want to progress into larger systems
and get a real understanding of computer systems, algorithmic efficiency, data structure performance,
low-level languages, and how it all works. And if you don't know any of it, Google won't hire you.

When I started this project, I didn't know a stack from a heap, didn't know Big-O anything, anything about trees, or how to
traverse a graph. If I had to code a sorting algorithm, I can tell ya it wouldn't have been very good.
Every data structure I've ever used was built into the language, and I didn't know how they worked
under the hood at all. I've never had to manage memory, unless a process I was running would give an "out of
memory" error, and then I'd have to find a workaround. I've used a few multi-dimensional arrays in my life and
thousands of associative arrays, but I've never created data structures from scratch.

But after going through this study plan I have high confidence I'll be hired. It's a long plan. It's going to take me
months. If you are familiar with a lot of this already it will take you a lot less time.

## How to use it

Everything below is an outline, and you should tackle the items in order from top to bottom.

I'm using Github's special markdown flavor, including tasks lists to check my progress.

I check each task box at the beginning of a line when I'm done with it. When all sub-items in a block are done,
I put [x] at the top level, meaning the entire block is done. Sorry you have to remove all my [x] markings
to use this the same way. If you search/replace, just replace [x] with [ ].
Sometimes I just put a [x] at top level if I know I've done all the subtasks, to cut down on clutter.


    Once I move past the learning phase (in a couple days), I'll remove the checks from all the checkboxes.


More about Github flavored markdown: https://guides.github.com/features/mastering-markdown/#GitHub-flavored-markdown

    I have a friendly referral already to get my resume in at Google. Thanks JP.

## Get in a Googley Mood

Print out a "[future Googler](https://github.com/jwasham/google-interview-university/blob/master/extras/future-googler.pdf)" sign (or two) and keep your eyes on the prize.

[![future Googler sign](https://dng5l3qzreal6.cloudfront.net/2016/Oct/Screen_Shot_2016_10_04_at_10_13_24_AM-1475601104364.png)](https://github.com/jwasham/google-interview-university/blob/master/extras/future-googler.pdf)

## Follow me

I'm on the journey, too. Follow along on my blog at [GoogleyAsHeck.com](https://googleyasheck.com/)

- Twitter: [@googleyasheck](https://twitter.com/googleyasheck)
- Google+: [+Googleyasheck](https://plus.google.com/+Googleyasheck)
- LinkedIn: [johnawasham](https://www.linkedin.com/in/johnawasham)

![John Washam - Google Interview University](https://dng5l3qzreal6.cloudfront.net/2016/Aug/book_stack_photo_resized_18_1469302751157-1472661280368.png)

## Don't feel you aren't smart enough
- Google engineers are smart, but many have an insecurity that they aren't smart enough, even though they work at Google.
- The myth of the Genius Programmer: https://www.youtube.com/watch?v=0SARbwvhupQ

## About Video Resources

Some videos are available only by enrolling in a Coursera or EdX class. It is free to do so, but sometimes the classes
are no longer in session so you have to wait a couple of months, so you have no access. I'm going to be adding more videos
from public sources and replacing the online course videos over time. I like using university lectures.

## Interview Process & General Interview Prep

- [x] Videos:
    - [x] https://www.youtube.com/watch?v=oWbUtlUhwa8&feature=youtu.be
    - [x] https://www.youtube.com/watch?v=qc1owf2-220&feature=youtu.be
    - [x] https://www.youtube.com/watch?v=8npJLXkcmu8

- [x] Articles:
    - [x] http://www.google.com/about/careers/lifeatgoogle/hiringprocess/
    - [x] http://steve-yegge.blogspot.com/2008/03/get-that-job-at-google.html
        - all the things he mentions that you need to know are listed below
    - [x] (very dated) http://dondodge.typepad.com/the_next_big_thing/2010/09/how-to-get-a-job-at-google-interview-questions-hiring-process.html
    - [x] http://sites.google.com/site/steveyegge2/five-essential-phone-screen-questions

- [x] Additional (not suggested by Google but I added):
    - [x] https://medium.com/always-be-coding/abc-always-be-coding-d5f8051afce2#.4heg8zvm4
    - [x] https://medium.com/always-be-coding/four-steps-to-google-without-a-degree-8f381aa6bd5e#.asalo1vfx
    - [x] https://medium.com/@dpup/whiteboarding-4df873dbba2e#.hf6jn45g1
    - [x] http://www.kpcb.com/blog/lessons-learned-how-google-thinks-about-hiring-management-and-culture
    - [x] http://www.coderust.com/blog/2014/04/10/effective-whiteboarding-during-programming-interviews/
    - [x] Cracking The Coding Interview Set 1:
        - [x] https://www.youtube.com/watch?v=rEJzOhC5ZtQ
        - [x] https://www.youtube.com/watch?v=aClxtDcdpsQ
    - [x] How to Get a Job at the Big 4:
        - [x] https://www.youtube.com/watch?v=YJZCUhxNCv8
    - [x] http://alexbowe.com/failing-at-google-interviews/


## Prerequisite Knowledge

This short section were prerequisites/interesting info I wanted to learn before getting started on the daily plan.

You can use a language you are comfortable in to do the coding part of the interview, but for Google, these are solid choices:

- C++
- Java
- Python

You need to be very comfortable in the language, and be knowledgeable. Read more (rescued from the lost web):
    - https://web.archive.org/web/20160204193730/http://blog.codingforinterviews.com/best-programming-language-jobs/

You'll see some C, C++, and Python learning included below, because I'm learning. There are a few books involved, see the bottom.

- [x] **How computers process a program:**
    - [x] https://www.youtube.com/watch?v=42KTvGYQYnA
    - [x] https://www.youtube.com/watch?v=Mv2XQgpbTNE

- [x] **How floating point numbers are stored:**
    - [x] simple 8-bit: http://math.stackexchange.com/questions/301435/fractions-in-binary
    - [x] 32 bit: https://www.youtube.com/watch?v=ji3SfClm8TU
    - [x] 64 bit: https://www.youtube.com/watch?v=50ZYcZebIec

- [x] **Computer Arch Intro:**
    (first video only - interesting but not required) https://www.youtube.com/watch?v=zLP_X4wyHbY&list=PL5PHm2jkkXmi5CxxI7b3JCL1TWybTDtKq&index=1

- [x] **C**
    - [x] [ANSI C Cheat Sheet](https://github.com/jwasham/google-interview-university/blob/master/extras/cheat%20sheets/C%20Reference%20Card%20(ANSI)%202.2.pdf)
    - [x] K&R C book (ANSI C)
    - [x] Clang: https://www.youtube.com/watch?v=U3zCxnj2w8M
    - [x] GDB:
        - https://www.youtube.com/watch?v=USPvePv1uzE
        - https://www.youtube.com/watch?v=y5JmQItfFck
      - Valgrind: https://www.youtube.com/watch?v=fvTsFjDuag8
- [x] **C++**
    - [x] [C++ Cheat Sheet](https://github.com/jwasham/google-interview-university/blob/master/extras/cheat%20sheets/Cpp_reference.pdf)
    - [x] [STL Cheat Sheet](https://github.com/jwasham/google-interview-university/blob/master/extras/cheat%20sheets/STL%20Quick%20Reference%201.29.pdf)
    - [x] basics
    - [x] pointers
    - [x] functions
    - [x] references
    - [x] templates
    - [x] compilation
    - [x] scope & linkage
    - [x] namespaces
    - [x] OOP
    - [x] STL
    - [x] functors: http://www.cprogramming.com/tutorial/functors-function-objects-in-c++.html
    - [x] C++ at Google: https://www.youtube.com/watch?v=NOCElcMcFik
    - [x] Google C++ Style Guide: https://google.github.io/styleguide/cppguide.html
        - [x] Google uses clang-format (there is a command line "style" argument: -style=google)
    - [x] Efficiency with Algorithms, Performance with Data Structures: https://youtu.be/fHNmRkzxHWs
    - [x] review of C++ concepts: https://www.youtube.com/watch?v=Rub-JsjMhWY

- [x] **Python**
    - [x] [Python Cheat Sheet](https://github.com/jwasham/google-interview-university/blob/master/extras/cheat%20sheets/python-cheat-sheet-v1.pdf)
    - [x] Python in One Video: https://www.youtube.com/watch?v=N4mEzFDjqtA
    - [x] Series on 3.4: https://www.youtube.com/playlist?list=PL6gx4Cwl9DGAcbMi1sH6oAMk4JHw91mC_
    - [x] Zero to Hero: https://www.youtube.com/watch?v=emY34tSKXc4
    - [x] Statistics for Hackers: https://www.youtube.com/watch?v=Iq9DzN6mvYA
    - [x] Faster Python: https://www.youtube.com/watch?v=JDSGVvMwNM8
    - [x] CPython Walk: https://www.youtube.com/watch?v=LhadeL7_EIU&list=PLzV58Zm8FuBL6OAv1Yu6AwXZrnsFbbR0S&index=6
    - [x] 10 Tips for Pythonic Code: https://www.youtube.com/watch?v=_O23jIXsshs
    - [x] Beyond PEP 8 -- Best practices for beautiful intelligible code: https://www.youtube.com/watch?v=wf-BqAjZb8M

- [x] **Compilers**
    - [x] https://class.coursera.org/compilers-004/lecture/1
    - [x] https://class.coursera.org/compilers-004/lecture/2
    - [x] C++: https://www.youtube.com/watch?v=twodd1KFfGk
    - [x] Understanding Compiler Optimization (C++): https://www.youtube.com/watch?v=FnGCDLhaxKU

## The Daily Plan

Each subject does not require a whole day to be able to understand it fully, and you can do multiple of these in a day.

Each day I take one subject from the list below, watch videos about that subject, and write an implementation in:
    C - using structs and functions that take a struct * and something else as args.
    C++ - without using built-in types
    C++ - using built-in types, like STL's std::list for a linked list
    Python - using built-in types (to keep practicing Python)
    and write tests to ensure I'm doing it right, sometimes just using simple assert() statements
    You may do Java or something else, this is just my thing.

Why code in all of these?
    Practice, practice, practice, until I'm sick of it, and can do it with no problem (some have many edge cases and bookkeeping details to remember)
    Work within the raw constraints (allocating/freeing memory without help of garbage collection (except Python))
    Make use of built-in types so I have experience using the built-in tools for real-world use (not going to write my own linked list implementation in production)

I may not have time to do all of these for every subject, but I'll try.

You can see my code here:
 - C: https://github.com/jwasham/practice-c
 - C++: https://github.com/jwasham/practice-cpp
 - Python: https://github.com/jwasham/practice-python

You don't need to memorize the guts of every algorithm.

Write code on a whiteboard, not a computer. Test with some sample inputs.
Then test it out on a computer to make sure it's not buggy from syntax.

## Algorithmic complexity / Big-O / Asymptotic analysis
- nothing to implement
- [x] Harvard CS50 - Asymptotic Notation: https://www.youtube.com/watch?v=iOq5kSKqeR4
- [x] Big O Notations (general quick tutorial) - https://www.youtube.com/watch?v=V6mKVRU1evU
- [x] Big O Notation (and Omega and Theta) - best mathematical explanation:
    - https://www.youtube.com/watch?v=ei-A_wy5Yxw&index=2&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN
- [x] Skiena:
    - video: https://www.youtube.com/watch?v=gSyDMtdPNpU&index=2&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b
    - slides: http://www3.cs.stonybrook.edu/~algorith/video-lectures/2007/lecture2.pdf
- [x] A Gentle Introduction to Algorithm Complexity Analysis: http://discrete.gr/complexity/
- [x] Orders of Growth: https://class.coursera.org/algorithmicthink1-004/lecture/59
- [x] Asymptotics: https://class.coursera.org/algorithmicthink1-004/lecture/61
- [x] UC Berkeley Big O: https://youtu.be/VIS4YDpuP98
- [x] UC Berkeley Big Omega: https://youtu.be/ca3e7UVmeUc
- [x] Amortized Analysis: https://www.youtube.com/watch?v=B3SpQZaAZP4&index=10&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN
- [x] Illustrating "Big O": https://class.coursera.org/algorithmicthink1-004/lecture/63
- [x] TopCoder (includes recurrence relations and master theorem):
    - Computational Complexity: Section 1: https://www.topcoder.com/community/data-science/data-science-tutorials/computational-complexity-section-1/
    - Computational Complexity: Section 2: https://www.topcoder.com/community/data-science/data-science-tutorials/computational-complexity-section-2/
- [x] Cheat sheet: http://bigocheatsheet.com/


    If some of the lectures are too mathy, you can jump down to the bottom and
    watch the discrete mathematics videos to get the background knowledge.

## Data Structures

- ### Arrays
    - Implement an automatically resizing vector.
    - [x] Description:
        - Arrays: https://www.coursera.org/learn/data-structures/lecture/OsBSF/arrays
        - Arrays: https://www.lynda.com/Developer-Programming-Foundations-tutorials/Basic-arrays/149042/177104-4.html
        - Multi-dim: https://www.lynda.com/Developer-Programming-Foundations-tutorials/Multidimensional-arrays/149042/177105-4.html
        - Dynamic Arrays: https://www.coursera.org/learn/data-structures/lecture/EwbnV/dynamic-arrays
        - Jagged: https://www.lynda.com/Developer-Programming-Foundations-tutorials/Jagged-arrays/149042/177106-4.html
        - Resizing arrays:
            - https://www.lynda.com/Developer-Programming-Foundations-tutorials/Resizable-arrays/149042/177108-4.html
    - [x] Implement a vector (mutable array with automatic resizing):
        - [x] Practice coding using arrays and pointers, and pointer math to jump to an index instead of using indexing.
        - [x] new raw data array with allocated memory
            - can allocate int array under the hood, just not use its features
            - start with 16, or if starting number is greater, use power of 2 - 16, 32, 64, 128
        - [x] size() - number of items
        - [x] capacity() - number of items it can hold
        - [x] is_empty()
        - [x] at(index) - returns item at given index, blows up if index out of bounds
        - [x] push(item)
        - [x] insert(index, item) - inserts item at index, shifts that index's value and trailing elements to the right
        - [x] prepend(item) - can use insert above at index 0
        - [x] pop() - remove from end, return value
        - [x] delete(index) - delete item at index, shifting all trailing elements left
        - [x] remove(item) - looks for value and removes index holding it (even if in multiple places)
        - [x] find(item) - looks for value and returns first index with that value, -1 if not found
        - [x] resize(new_capacity) // private function
            - when you reach capacity, resize to double the size
            - when popping an item, if size is 1/4 of capacity, resize to half
    - [x] Time
        - O(1) to add/remove at end (amortized for allocations for more space), index, or update
        - O(n) to insert/remove elsewhere
    - [x] Space
        - contiguous in memory, so proximity helps performance
        - space needed = (array capacity, which is >= n) * size of item, but even if 2n, still O(n)

- ### Linked Lists
    - [x] Description:
        - [x] https://www.coursera.org/learn/data-structures/lecture/kHhgK/singly-linked-lists
        - [x] CS 61B - Linked lists: https://www.youtube.com/watch?v=sJtJOtXCW_M&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&index=5
    - [x] C Code: https://www.youtube.com/watch?v=QN6FPiD0Gzo
            - not the whole video, just portions about Node struct and memory allocation.
    - [x] Linked List vs Arrays:
        - https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/rjBs9/core-linked-lists-vs-arrays
        - https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/QUaUd/in-the-real-world-lists-vs-arrays
    - [x] why you should avoid linked lists:
        - https://www.youtube.com/watch?v=YQs6IC-vgmo
    - [x] Gotcha: you need pointer to pointer knowledge:
        (for when you pass a pointer to a function that may change the address where that pointer points)
        This page is just to get a grasp on ptr to ptr. I don't recommend this list traversal style. Readability and maintainability suffer due to cleverness.
        - https://www.eskimo.com/~scs/cclass/int/sx8.html
    - [x] implement (I did with tail pointer & without):
        - [x] size() - returns number of data elements in list
        - [x] empty() - bool returns true if empty
        - [x] value_at(index) - returns the value of the nth item (starting at 0 for first)
        - [x] push_front(value) - adds an item to the front of the list
        - [x] pop_front() - remove front item and return its value
        - [x] push_back(value) - adds an item at the end
        - [x] pop_back() - removes end item and returns its value
        - [x] front() - get value of front item
        - [x] back() - get value of end item
        - [x] insert(index, value) - insert value at index, so current item at that index is pointed to by new item at index
        - [x] erase(index) - removes node at given index
        - [x] value_n_from_end(n) - returns the value of the node at nth position from the end of the list
        - [x] reverse() - reverses the list
        - [x] remove_value(value) - removes the first item in the list with this value
    - [x] Doubly-linked List
        - Description: https://www.coursera.org/learn/data-structures/lecture/jpGKD/doubly-linked-lists
        - No need to implement

- ### Stack
    - [x] https://www.coursera.org/learn/data-structures/lecture/UdKzQ/stacks
    - [x] https://www.lynda.com/Developer-Programming-Foundations-tutorials/Using-stacks-last-first-out/149042/177120-4.html
    - [x] Will not implement. Implementing with array is trivial.

- ### Queue
    - [x] https://www.lynda.com/Developer-Programming-Foundations-tutorials/Using-queues-first-first-out/149042/177122-4.html
    - [x] https://www.coursera.org/learn/data-structures/lecture/EShpq/queue
    - [x] Circular buffer/FIFO: https://en.wikipedia.org/wiki/Circular_buffer
    - [x] https://www.lynda.com/Developer-Programming-Foundations-tutorials/Priority-queues-deques/149042/177123-4.html
    - [x] Implement using linked-list, with tail pointer:
        - enqueue(value) - adds value at position at tail
        - dequeue() - returns value and removes least recently added element (front)
        - empty()
    - [x] Implement using fixed-sized array:
        - enqueue(value) - adds item at end of available storage
        - dequeue() - returns value and removes least recently added element
        - empty()
        - full()
    - [x] Cost:
        - a bad implementation using linked list where you enqueue at head and dequeue at tail would be O(n)
            because you'd need the next to last element, causing a full traversal each dequeue
        - enqueue: O(1) (amortized, linked list and array [probing])
        - dequeue: O(1) (linked list and array)
        - empty: O(1) (linked list and array)
    
- ### Hash table
    - [x] Videos:
        - [x] Hashing with Chaining: https://www.youtube.com/watch?v=0M_kIqhwbFo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=8
        - [x] Table Doubling, Karp-Rabin: https://www.youtube.com/watch?v=BRO7mVIFt08&index=9&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb
        - [x] Open Addressing, Cryptographic Hashing: https://www.youtube.com/watch?v=rvdJDijO2Ro&index=10&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb
        - [x] PyCon 2010: The Mighty Dictionary: https://www.youtube.com/watch?v=C4Kc8xzcA68
        - [x] (Advanced) Randomization: Universal & Perfect Hashing: https://www.youtube.com/watch?v=z0lJ2k0sl1g&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=11
        - [x] (Advanced) Perfect hashing: https://www.youtube.com/watch?v=N0COwN14gt0&list=PL2B4EEwhKD-NbwZ4ezj7gyc_3yNrojKM9&index=4
    
    - [x] Online Courses:
        - [x] https://www.lynda.com/Developer-Programming-Foundations-tutorials/Understanding-hash-functions/149042/177126-4.html
        - [x] https://www.lynda.com/Developer-Programming-Foundations-tutorials/Using-hash-tables/149042/177127-4.html
        - [x] https://www.lynda.com/Developer-Programming-Foundations-tutorials/Supporting-hashing/149042/177128-4.html
        - [x] https://www.lynda.com/Developer-Programming-Foundations-tutorials/Language-support-hash-tables/149042/177129-4.html
        - [x] https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/m7UuP/core-hash-tables
        - [x] https://www.coursera.org/learn/data-structures/home/week/3
        - [x] https://www.coursera.org/learn/data-structures/lecture/NYZZP/phone-book-problem
        - [x] distributed hash tables:
            - https://www.coursera.org/learn/data-structures/lecture/DvaIb/instant-uploads-and-storage-optimization-in-dropbox
            - https://www.coursera.org/learn/data-structures/lecture/tvH8H/distributed-hash-tables
    
    - [x] implement with array using linear probing
        - hash(k, m) - m is size of hash table
        - add(key, value) - if key already exists, update value
        - exists(key)
        - get(key)
        - remove(key)

## More Knowledge

- ### Endianness
    - [x] https://www.cs.umd.edu/class/sum2003/cmsc311/Notes/Data/endian.html
    - [x] https://www.youtube.com/watch?v=JrNF0KRAlyo
    - [x] https://www.youtube.com/watch?v=oBSuXP-1Tc0
        - Very technical talk for kernel devs. Don't worry if most is over your head.
        - The first half is enough.

- ### Binary search
    - [x] https://www.youtube.com/watch?v=D5SrAga1pno
    - [x] https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search
    - [x] detail: https://www.topcoder.com/community/data-science/data-science-tutorials/binary-search/
    - [x] Implement:
        - binary search (on sorted array of integers)
        - binary search using recursion

- ### Bitwise operations
    - [x] [Bits cheat sheet](https://github.com/jwasham/google-interview-university/blob/master/extras/cheat%20sheets/bits-cheat-cheet.pdf) - you should know many of the powers of 2 from (2^1 to 2^16 and 2^32)
    - [x] Get a really good understanding of manipulating bits with: &, |, ^, ~, >>, <<
        - [x] words: https://en.wikipedia.org/wiki/Word_(computer_architecture)
        - [x] Good intro:
            https://www.youtube.com/watch?v=7jkIUgLC29I
        - [x] https://www.youtube.com/watch?v=d0AwjSpNXR0
        - [x] https://en.wikipedia.org/wiki/Bit_manipulation
        - [x] https://en.wikipedia.org/wiki/Bitwise_operation
        - [x] https://graphics.stanford.edu/~seander/bithacks.html
        - [x] http://bits.stephan-brumme.com/
        - [x] http://bits.stephan-brumme.com/interactive.html
    - [x] 2s and 1s complement
        - https://www.youtube.com/watch?v=lKTsv6iVxV4
        - https://en.wikipedia.org/wiki/Ones%27_complement
        - https://en.wikipedia.org/wiki/Two%27s_complement
    - [x] count set bits
        - https://youtu.be/Hzuzo9NJrlc
        - https://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetKernighan
        - http://stackoverflow.com/questions/109023/how-to-count-the-number-of-set-bits-in-a-32-bit-integer
    - [x] round to next power of 2:
        - http://bits.stephan-brumme.com/roundUpToNextPowerOfTwo.html
    - [x] swap values:
        - http://bits.stephan-brumme.com/swap.html
    - [x] absolute value:
        - http://bits.stephan-brumme.com/absInteger.html

## Trees

- ### Trees - Notes & Background
    - [x] Series: https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/ovovP/core-trees
    - [x] Series: https://www.coursera.org/learn/data-structures/lecture/95qda/trees
    - basic tree construction
    - traversal
    - manipulation algorithms
    - BFS (breadth-first search)
        - MIT: https://www.youtube.com/watch?v=s-CYnVz-uh4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=13
        - level order (BFS, using queue)
            time complexity: O(n)
            space complexity: best: O(1), worst: O(n/2)=O(n)
    - DFS (depth-first search)
        - MIT: https://www.youtube.com/watch?v=AfSk24UTFS8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=14
        - notes:
            time complexity: O(n)
            space complexity:
                best: O(log n) - avg. height of tree
                worst: O(n)
        - inorder (DFS: left, self, right)
        - postorder (DFS: left, right, self)
        - preorder (DFS: self, left, right)

- ### Binary search trees: BSTs
    - [x] Binary Search Tree Review: https://www.youtube.com/watch?v=x6At0nzX92o&index=1&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6
    - [x] Series: https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/p82sw/core-introduction-to-binary-search-trees
        - starts with symbol table and goes through BST applications
    - [x] https://www.coursera.org/learn/data-structures/lecture/E7cXP/introduction
    - [x] MIT: https://www.youtube.com/watch?v=9Jry5-82I68
    - C/C++:
        - [x] https://www.youtube.com/watch?v=COZK7NATh4k&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=28
        - [x] https://www.youtube.com/watch?v=hWokyBoo0aI&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=29
        - [x] https://www.youtube.com/watch?v=Ut90klNN264&index=30&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P
        - [x] https://www.youtube.com/watch?v=_pnqMz5nrRs&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=31
        - [x] https://www.youtube.com/watch?v=9RHO6jU--GU&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=32
        - [x] https://www.youtube.com/watch?v=86g8jAQug04&index=33&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P
        - [x] https://www.youtube.com/watch?v=gm8DUJJhmY4&index=34&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P
        - [x] https://www.youtube.com/watch?v=yEwSGhSsT0U&index=35&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P
        - [x] https://www.youtube.com/watch?v=gcULXE7ViZw&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=36
        - [x] https://www.youtube.com/watch?v=5cPbNCrdotA&index=37&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P
    - [x] Implement:
        - [x] insert    // insert value into tree
        - [x] get_node_count // get count of values stored
        - [x] print_values // prints the values in the tree, from min to max
        - [x] delete_tree
        - [x] is_in_tree // returns true if given value exists in the tree
        - [x] get_height // returns the height in nodes (single node's height is 1)
        - [x] get_min   // returns the minimum value stored in the tree
        - [x] get_max   // returns the maximum value stored in the tree
        - [x] is_binary_search_tree
        - [x] delete_value
        - [x] get_successor // returns next-highest value in tree after given value, -1 if none

- ### Heap / Priority Queue / Binary Heap
    - visualized as a tree, but is usually linear in storage (array, linked list)
    - [x] https://en.wikipedia.org/wiki/Heap_(data_structure)
    - [x] https://www.coursera.org/learn/data-structures/lecture/2OpTs/introduction
    - [x] https://www.coursera.org/learn/data-structures/lecture/z3l9N/naive-implementations
    - [x] https://www.coursera.org/learn/data-structures/lecture/GRV2q/binary-trees
    - [x] https://www.coursera.org/learn/data-structures/supplement/S5xxz/tree-height-remark
    - [x] https://www.coursera.org/learn/data-structures/lecture/GRV2q/binary-trees
    - [x] https://www.coursera.org/learn/data-structures/lecture/0g1dl/basic-operations
    - [x] https://www.coursera.org/learn/data-structures/lecture/gl5Ni/complete-binary-trees
    - [x] https://www.coursera.org/learn/data-structures/lecture/HxQo9/pseudocode
    - [x] Heap Sort - jumps to start: https://youtu.be/odNJmw5TOEE?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3291
    - [x] Heap Sort: https://www.coursera.org/learn/data-structures/lecture/hSzMO/heap-sort
    - [x] Building a heap: https://www.coursera.org/learn/data-structures/lecture/dwrOS/building-a-heap
    - [x] MIT: Heaps and Heap Sort: https://www.youtube.com/watch?v=B7hVxCmfPtM&index=4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb
    - [x] CS 61B Lecture 24: Priority Queues: https://www.youtube.com/watch?v=yIUFT6AKBGE&index=24&list=PL4BBB74C7D2A1049C
    - [x] Linear Time BuildHeap (max-heap): https://www.youtube.com/watch?v=MiyLo8adrWw
    - [x] Implement a max-heap:
        - [x] insert
        - [x] sift_up - needed for insert
        - [x] get_max - returns the max item, without removing it
        - [x] get_size() - return number of elements stored
        - [x] is_empty() - returns true if heap contains no elements
        - [x] extract_max - returns the max item, removing it
        - [x] sift_down - needed for extract_max
        - [x] remove(i) - removes item at index x
        - [x] heapify - create a heap from an array of elements, needed for heap_sort
        - [x] heap_sort() - take an unsorted array and turn it into a sorted array in-place using a max heap
            - note: using a min heap instead would save operations, but double the space needed (cannot do in-place).

- ### Tries
    - Note there are different kinds of tries. Some have prefixes, some don't, and some use string instead of bits
        to track the path.
    - I read through code, but will not implement.
    - [x] http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Tries
    - [x] Short course videos:
        - [x] https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/08Xyf/core-introduction-to-tries
        - [x] https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/PvlZW/core-performance-of-tries
        - [x] https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/DFvd3/core-implementing-a-trie
    - [x] The Trie: A Neglected Data Structure: https://www.toptal.com/java/the-trie-a-neglected-data-structure
    - [x] TopCoder - Using Tries: https://www.topcoder.com/community/data-science/data-science-tutorials/using-tries/
    - [x] Stanford Lecture (real world use case): https://www.youtube.com/watch?v=TJ8SkcUSdbU
    - [x] MIT, Advanced Data Structures, Strings (can get pretty obscure about halfway through): https://www.youtube.com/watch?v=NinWEPPrkDQ&index=16&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf

- ### Balanced search trees
    - Know least one type of balanced binary tree (and know how it's implemented):
    - "Among balanced search trees, AVL and 2/3 trees are now passé, and red-black trees seem to be more popular.
        A particularly interesting self-organizing data structure is the splay tree, which uses rotations
        to move any accessed key to the root." - Skiena
    - Of these, I chose to implement a splay tree. From what I've read, you won't implement a
        balanced search tree in your interview. But I wanted exposure to coding one up
        and let's face it, splay trees are the bee's knees. I did read a lot of red-black tree code.
        - splay tree: insert, search, delete functions
        If you end up implementing red/black tree try just these:
        - search and insertion functions, skipping delete
    - I want to learn more about B-Tree since it's used so widely with very large data sets.
    - [x] Self-balancing binary search tree: https://en.wikipedia.org/wiki/Self-balancing_binary_search_tree

    - [x] **AVL trees**
        - In practice:
            From what I can tell, these aren't used much in practice, but I could see where they would be:
            The AVL tree is another structure supporting O(log n) search, insertion, and removal. It is more rigidly
            balanced than red–black trees, leading to slower insertion and removal but faster retrieval. This makes it
            attractive for data structures that may be built once and loaded without reconstruction, such as language
            dictionaries (or program dictionaries, such as the opcodes of an assembler or interpreter).
        - [x] MIT AVL Trees / AVL Sort: https://www.youtube.com/watch?v=FNeL18KsWPc&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=6
        - [x] https://www.coursera.org/learn/data-structures/lecture/Qq5E0/avl-trees
        - [x] https://www.coursera.org/learn/data-structures/lecture/PKEBC/avl-tree-implementation
        - [x] https://www.coursera.org/learn/data-structures/lecture/22BgE/split-and-merge

    - [x] **Splay trees**
        - In practice:
            Splay trees are typically used in the implementation of caches, memory allocators, routers, garbage collectors,
            data compression, ropes (replacement of string used for long text strings), in Windows NT (in the virtual memory,
            networking, and file system code) etc.
        - [x] CS 61B: Splay Trees: https://www.youtube.com/watch?v=Najzh1rYQTo&index=23&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd
        - [x] MIT Lecture: Splay Trees:
                - Gets very mathy, but watch the last 10 minutes for sure.
                - https://www.youtube.com/watch?v=QnPl_Y6EqMo

    - [x] **2-3 search trees**
        - In practice:
            2-3 trees have faster inserts at the expense of slower searches (since height is more compared to AVL trees).
        - You would use 2-3 tree very rarely because its implementation involves different types of nodes. Instead, people use Red Black trees.
        - [x] 23-Tree Intuition and Definition: https://www.youtube.com/watch?v=C3SsdUqasD4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=2
        - [x] Binary View of 23-Tree: https://www.youtube.com/watch?v=iYvBtGKsqSg&index=3&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6
        - [x] 2-3 Trees (student recitation): https://www.youtube.com/watch?v=TOb1tuEZ2X4&index=5&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp

    - [x] **2-3-4 Trees (aka 2-4 trees)**
        - In practice:
            For every 2-4 tree, there are corresponding red–black trees with data elements in the same order. The insertion and deletion
            operations on 2-4 trees are also equivalent to color-flipping and rotations in red–black trees. This makes 2-4 trees an
            important tool for understanding the logic behind red–black trees, and this is why many introductory algorithm texts introduce
            2-4 trees just before red–black trees, even though **2-4 trees are not often used in practice**.
        - [x] CS 61B Lecture 26: Balanced Search Trees: https://www.youtube.com/watch?v=zqrqYXkth6Q&index=26&list=PL4BBB74C7D2A1049C
        - [x] Bottom Up 234-Trees: https://www.youtube.com/watch?v=DQdMYevEyE4&index=4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6
        - [x] Top Down 234-Trees: https://www.youtube.com/watch?v=2679VQ26Fp4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=5

    - [x] **B-Trees**
        - fun fact: it's a mystery, but the B could stand for Boeing, Balanced, or Bayer (co-inventor)
        - In Practice:
            B-Trees are widely used in databases. Most modern filesystems use B-trees (or Variants). In addition to
            its use in databases, the B-tree is also used in filesystems to allow quick random access to an arbitrary
            block in a particular file. The basic problem is turning the file block i address into a disk block
            (or perhaps to a cylinder-head-sector) address.
        - [x] B-Tree: https://en.wikipedia.org/wiki/B-tree
        - [x] Introduction to B-Trees: https://www.youtube.com/watch?v=I22wEC1tTGo&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=6
        - [x] B-Tree Definition and Insertion: https://www.youtube.com/watch?v=s3bCdZGrgpA&index=7&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6
        - [x] B-Tree Deletion: https://www.youtube.com/watch?v=svfnVhJOfMc&index=8&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6
        - [x] MIT 6.851 - Memory Hierarchy Models: https://www.youtube.com/watch?v=V3omVLzI0WE&index=7&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf
                - covers cache-oblivious B-Trees, very interesting data structures
                - the first 37 minutes are very technical, may be skipped (B is block size, cache line size)

    - [x] **Red/black trees**
        - In practice:
            Red–black trees offer worst-case guarantees for insertion time, deletion time, and search time.
            Not only does this make them valuable in time-sensitive applications such as real-time applications,
            but it makes them valuable building blocks in other data structures which provide worst-case guarantees;
            for example, many data structures used in computational geometry can be based on red–black trees, and
            the Completely Fair Scheduler used in current Linux kernels uses red–black trees. In the version 8 of Java,
            the Collection HashMap has been modified such that instead of using a LinkedList to store identical elements with poor
            hashcodes, a Red-Black tree is used.
        - [x] Aduni - Algorithms - Lecture 4
            link jumps to starting point:
            https://youtu.be/1W3x0f_RmUo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3871
        - [x] Aduni - Algorithms - Lecture 5: https://www.youtube.com/watch?v=hm2GHwyKF1o&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=5
        - [x] https://en.wikipedia.org/wiki/Red%E2%80%93black_tree
        - [x] https://www.topcoder.com/community/data-science/data-science-tutorials/an-introduction-to-binary-search-and-red-black-trees/

- ### N-ary (K-ary, M-ary) trees
    - note: the N or K is the branching factor (max branches)
        - binary trees are a 2-ary tree, with branching factor = 2
        - 2-3 trees are 3-ary
    - [x] https://en.wikipedia.org/wiki/K-ary_tree

## Sorting

- [x] Notes:
    - Implement sorts & know best case/worst case, average complexity of each:
        - no bubble sort - it's terrible - O(n^2), except when n <= 16
    - [x] stability in sorting algorithms ("Is Quicksort stable?")
        - https://en.wikipedia.org/wiki/Sorting_algorithm#Stability
        - http://stackoverflow.com/questions/1517793/stability-in-sorting-algorithms
        - http://www.geeksforgeeks.org/stability-in-sorting-algorithms/
        - http://homepages.math.uic.edu/~leon/cs-mcs401-s08/handouts/stability.pdf
    - [x] Which algorithms can be used on linked lists? Which on arrays? Which on both?
        - I wouldn't recommend sorting a linked list, but merge sort is doable.
        - http://www.geeksforgeeks.org/merge-sort-for-linked-list/

- For heapsort, see Heap data structure above. Heap sort is great, but not stable.

- [x] Bubble Sort: https://www.youtube.com/watch?v=P00xJgWzz2c&index=1&list=PL89B61F78B552C1AB
- [x] Analyzing Bubble Sort: https://www.youtube.com/watch?v=ni_zk257Nqo&index=7&list=PL89B61F78B552C1AB
- [x] Insertion Sort, Merge Sort: https://www.youtube.com/watch?v=Kg4bqzAqRBM&index=3&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb
- [x] Insertion Sort: https://www.youtube.com/watch?v=c4BRHC7kTaQ&index=2&list=PL89B61F78B552C1AB
- [x] Merge Sort: https://www.youtube.com/watch?v=GCae1WNvnZM&index=3&list=PL89B61F78B552C1AB
- [x] Quicksort: https://www.youtube.com/watch?v=y_G9BkAm6B8&index=4&list=PL89B61F78B552C1AB
- [x] Selection Sort: https://www.youtube.com/watch?v=6nDMgr0-Yyo&index=8&list=PL89B61F78B552C1AB

- [x] Stanford lectures on sorting:
    - [x] https://www.youtube.com/watch?v=ENp00xylP7c&index=15&list=PLFE6E58F856038C69
    - [x] https://www.youtube.com/watch?v=y4M9IVgrVKo&index=16&list=PLFE6E58F856038C69

- [x] Shai Simonson, [Aduni.org](http://www.aduni.org/):
    - [x] https://www.youtube.com/watch?v=odNJmw5TOEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=2
    - [x] https://www.youtube.com/watch?v=hj8YKFTFKEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=3

- [x] Steven Skiena lectures on sorting:
    - [x] lecture begins at 26:46: https://youtu.be/ute-pmMkyuk?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1600
    - [x] lecture begins at 27:40: https://www.youtube.com/watch?v=yLvp-pB8mak&index=8&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b
    - [x] lecture begins at 35:00: https://www.youtube.com/watch?v=q7K9otnzlfE&index=9&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b
    - [x] lecture begins at 23:50: https://www.youtube.com/watch?v=TvqIGu9Iupw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=10

- [x] UC Berkeley:
    - [x] CS 61B Lecture 29: Sorting I: https://www.youtube.com/watch?v=EiUvYS2DT6I&list=PL4BBB74C7D2A1049C&index=29
    - [x] CS 61B Lecture 30: Sorting II: https://www.youtube.com/watch?v=2hTY3t80Qsk&list=PL4BBB74C7D2A1049C&index=30
    - [x] CS 61B Lecture 32: Sorting III: https://www.youtube.com/watch?v=Y6LOLpxg6Dc&index=32&list=PL4BBB74C7D2A1049C
    - [x] CS 61B Lecture 33: Sorting V: https://www.youtube.com/watch?v=qNMQ4ly43p4&index=33&list=PL4BBB74C7D2A1049C

- [x] - Merge sort code:
    - [x] Using output array: http://www.cs.yale.edu/homes/aspnes/classes/223/examples/sorting/mergesort.c
    - [x] In-place: https://github.com/jwasham/practice-cpp/blob/master/merge_sort/merge_sort.cc
- [x] - Quick sort code:
    - [x] http://www.cs.yale.edu/homes/aspnes/classes/223/examples/randomization/quick.c
    - [x] https://github.com/jwasham/practice-c/blob/master/quick_sort/quick_sort.c

- [x] Implement:
    - [x] Mergesort: O(n log n) average and worst case
    - [x] Quicksort O(n log n) average case
    - Selection sort and insertion sort are both O(n^2) average and worst case
    - For heapsort, see Heap data structure above.

- [x] For curiosity - not required:
    - [x] Radix Sort: http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#radixSort
    - [x] Radix Sort: https://www.youtube.com/watch?v=xhr26ia4k38
    - [x] Radix Sort, Counting Sort (linear time given constraints): https://www.youtube.com/watch?v=Nz1KZXbghj8&index=7&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb
    - [x] Randomization: Matrix Multiply, Quicksort, Freivalds' algorithm: https://www.youtube.com/watch?v=cNB2lADK3_s&index=8&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp
    - [x] Sorting in Linear Time: https://www.youtube.com/watch?v=pOKy3RZbSws&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=14

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

- [x] Skiena Lectures - great intro:
    - [x] CSE373 2012 - Lecture 11 - Graph Data Structures: https://www.youtube.com/watch?v=OiXxhDrFruw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=11
    - [x] CSE373 2012 - Lecture 12 - Breadth-First Search: https://www.youtube.com/watch?v=g5vF8jscteo&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=12
    - [x] CSE373 2012 - Lecture 13 - Graph Algorithms: https://www.youtube.com/watch?v=S23W6eTcqdY&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=13
    - [x] CSE373 2012 - Lecture 14 - Graph Algorithms (con't): https://www.youtube.com/watch?v=WitPBKGV0HY&index=14&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b
    - [x] CSE373 2012 - Lecture 15 - Graph Algorithms (con't 2): https://www.youtube.com/watch?v=ia1L30l7OIg&index=15&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b
    - [x] CSE373 2012 - Lecture 16 - Graph Algorithms (con't 3): https://www.youtube.com/watch?v=jgDOQq6iWy8&index=16&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b

- [x] Graphs (review and more):

    - [x] 6.006 Single-Source Shortest Paths Problem: https://www.youtube.com/watch?v=Aa2sqUhIn-E&index=15&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb
    - [x] 6.006 Dijkstra: https://www.youtube.com/watch?v=2E7MmKv0Y24&index=16&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb
    - [x] 6.006 Bellman-Ford: https://www.youtube.com/watch?v=ozsuci5pIso&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=17
    - [x] 6.006 Speeding Up Dijkstra: https://www.youtube.com/watch?v=CHvQ3q_gJ7E&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=18
    - [x] Aduni: Graph Algorithms I - Topological Sorting, Minimum Spanning Trees, Prim's Algorithm -  Lecture 6: https://www.youtube.com/watch?v=i_AQT_XfvD8&index=6&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm
    - [x] Aduni: Graph Algorithms II - DFS, BFS, Kruskal's Algorithm, Union Find Data Structure - Lecture 7: https://www.youtube.com/watch?v=ufj5_bppBsA&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=7
    - [x] Aduni: Graph Algorithms III: Shortest Path - Lecture 8: https://www.youtube.com/watch?v=DiedsPsMKXc&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=8
    - [x] Aduni: Graph Alg. IV: Intro to geometric algorithms - Lecture 9: https://www.youtube.com/watch?v=XIAQRlNkJAw&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=9
    - [x] CS 61B 2014 (starting at 58:09): https://youtu.be/dgjX4HdMI-Q?list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&t=3489
    - [x] CS 61B 2014: Weighted graphs: https://www.youtube.com/watch?v=aJjlQCFwylA&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&index=19
    - [x] Greedy Algorithms: Minimum Spanning Tree: https://www.youtube.com/watch?v=tKwnms5iRBU&index=16&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp
    - [x] Strongly Connected Components Kosaraju's Algorithm Graph Algorithm: https://www.youtube.com/watch?v=RpgcYiky7uw

- Full Coursera Course:
    - [x] Algorithms on Graphs: https://www.coursera.org/learn/algorithms-on-graphs/home/welcome

- Yegge: If you get a chance, try to study up on fancier algorithms:
    - [x] Dijkstra's algorithm - see above - 6.006
    - [x] A*
        - [x] https://en.wikipedia.org/wiki/A*_search_algorithm
        - [x] A* Pathfinding Tutorial: https://www.youtube.com/watch?v=KNXfSOx4eEE
        - [x] A* Pathfinding (E01: algorithm explanation): https://www.youtube.com/watch?v=-L-WgKMFuhE

- I'll implement:
    - [x] DFS with adjacency list (recursive)
    - [x] DFS with adjacency list (iterative with stack)
    - [x] DFS with adjacency matrix (recursive)
    - [x] DFS with adjacency matrix (iterative with stack)
    - [x] BFS with adjacency list
    - [x] BFS with adjacency matrix
    - [x] single-source shortest path (Dijkstra)
    - [x] minimum spanning tree
    - DFS-based algorithms (see Aduni videos above):
        - [x] check for cycle (needed for topological sort, since we'll check for cycle before starting)
        - [x] topological sort
        - [x] count connected components in a graph
        - [x] list strongly connected components
        - [x] check for bipartite graph

You'll get more graph practice in Skiena's book (see Books section below) and the interview books

## Even More Knowledge

- ### Recursion
    - [x] Stanford lectures on recursion & backtracking:
        - [x] https://www.youtube.com/watch?v=gl3emqCuueQ&list=PLFE6E58F856038C69&index=8
        - [x] https://www.youtube.com/watch?v=uFJhEPrbycQ&list=PLFE6E58F856038C69&index=9
        - [x] https://www.youtube.com/watch?v=NdF1QDTRkck&index=10&list=PLFE6E58F856038C69
        - [x] https://www.youtube.com/watch?v=p-gpaIGRCQI&list=PLFE6E58F856038C69&index=11
    - when it is appropriate to use it
    - how is tail recursion better than not?
        - [x] https://www.quora.com/What-is-tail-recursion-Why-is-it-so-bad
        - [x] https://www.youtube.com/watch?v=L1jjXGfxozc
 
- ### Dynamic Programming
    - This subject can be pretty difficult, as each DP soluble problem must be defined as a recursion relation, and coming up with it can be tricky.
    - I suggest looking at many examples of DP problems until you have a solid understanding of the pattern involved.
    - [x] Videos:
        - the Skiena videos can be hard to follow since he sometimes uses the whiteboard, which is too small to see
        - [x] Skiena: CSE373 2012 - Lecture 19 - Introduction to Dynamic Programming: https://youtu.be/Qc2ieXRgR0k?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1718
        - [x] Skiena: CSE373 2012 - Lecture 20 - Edit Distance: https://youtu.be/IsmMhMdyeGY?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=2749
        - [x] Skiena: CSE373 2012 - Lecture 21 - Dynamic Programming Examples: https://youtu.be/o0V9eYF4UI8?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=406
        - [x] Skiena: CSE373 2012 - Lecture 22 - Applications of Dynamic Programming: https://www.youtube.com/watch?v=dRbMC1Ltl3A&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=22
        - [x] Simonson: Dynamic Programming 0 (starts at 59:18): https://youtu.be/J5aJEcOr6Eo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3558
        - [x] Simonson: Dynamic Programming I - Lecture 11: https://www.youtube.com/watch?v=0EzHjQ_SOeU&index=11&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm
        - [x] Simonson: Dynamic programming II - Lecture 12: https://www.youtube.com/watch?v=v1qiRwuJU7g&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=12
        - [x] List of individual DP problems (each is short):
            https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr
    - [x] Yale Lecture notes: 
        - [x] http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#dynamicProgramming
    - [x] Coursera:
        - [x] The RNA secondary structure problem: https://www.coursera.org/learn/algorithmic-thinking-2/lecture/80RrW/the-rna-secondary-structure-problem
        - [x] A dynamic programming algorithm: https://www.coursera.org/learn/algorithmic-thinking-2/lecture/PSonq/a-dynamic-programming-algorithm
        - [x] Illustrating the DP algorithm: https://www.coursera.org/learn/algorithmic-thinking-2/lecture/oUEK2/illustrating-the-dp-algorithm
        - [x] Running time of the DP algorithm: https://www.coursera.org/learn/algorithmic-thinking-2/lecture/nfK2r/running-time-of-the-dp-algorithm
        - [x] DP vs. recursive implementation: https://www.coursera.org/learn/algorithmic-thinking-2/lecture/M999a/dp-vs-recursive-implementation
        - [x] Global pairwise sequence alignment: https://www.coursera.org/learn/algorithmic-thinking-2/lecture/UZ7o6/global-pairwise-sequence-alignment
        - [x] Local pairwise sequence alignment: https://www.coursera.org/learn/algorithmic-thinking-2/lecture/WnNau/local-pairwise-sequence-alignment

- ### Combinatorics (n choose k) & Probability
    - [x] Math Skills: How to find Factorial, Permutation and Combination (Choose): https://www.youtube.com/watch?v=8RRo6Ti9d0U
    - [x] Make School: Probability: https://www.youtube.com/watch?v=sZkAAk9Wwa4
    - [x] Make School: More Probability and Markov Chains: https://www.youtube.com/watch?v=dNaJg-mLobQ
    - [x] Khan Academy:
        - Course layout:
            - [x] https://www.khanacademy.org/math/probability/probability-and-combinatorics-topic 
        - Just the videos - 41 (each are simple and each are short):
            - [x] https://www.youtube.com/watch?v=uzkc-qNVoOk&list=PLC58778F28211FA19

- ### NP, NP-Complete and Approximation Algorithms
    - Know about the most famous classes of NP-complete problems, such as traveling salesman and the knapsack problem,
        and be able to recognize them when an interviewer asks you them in disguise.
    - Know what NP-complete means.
    - [x] Computational Complexity: https://www.youtube.com/watch?v=moPtwq_cVH8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=23
    - [ ] Simonson:
        - [x] https://youtu.be/qcGnJ47Smlo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=2939
        - [x] https://www.youtube.com/watch?v=e0tGC6ZQdQE&index=16&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm
        - [ ] https://www.youtube.com/watch?v=fCX1BGT3wjE&index=17&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm
        - [ ] https://www.youtube.com/watch?v=NKLDp3Rch3M&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=18
    - [ ] Skiena:
        - [x] CSE373 2012 - Lecture 23 - Introduction to NP-Completeness: https://youtu.be/KiK5TVgXbFg?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1508
        - [ ] CSE373 2012 - Lecture 24 - NP-Completeness Proofs: https://www.youtube.com/watch?v=27Al52X3hd4&index=24&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b
        - [ ] CSE373 2012 - Lecture 25 - NP-Completeness Challenge: https://www.youtube.com/watch?v=xCPH4gwIIXM&index=25&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b
    - [x] Complexity: P, NP, NP-completeness, Reductions: https://www.youtube.com/watch?v=eHZifpgyH_4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=22
    - [x] Complexity: Approximation Algorithms: https://www.youtube.com/watch?v=MEz1J9wY2iM&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=24
    - [ ] Complexity: Fixed-Parameter Algorithms: https://www.youtube.com/watch?v=4q-jmGrmxKs&index=25&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp
    - Peter Norvik discusses near-optimal solutions to traveling salesman problem:
        - http://nbviewer.jupyter.org/url/norvig.com/ipython/TSP.ipynb
    - Pages 1048 - 1140 in CLRS if you have it.

- ### Garbage collection
    - [x] Garbage collection (Java); Augmenting data str: https://www.youtube.com/watch?v=StdfeXaKGEc&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&index=25
    - [x] Compilers: https://www.youtube.com/playlist?list=PLO9y7hOkmmSGTy5z6HZ-W4k2y8WXF7Bff
    - [x] GC in Python: https://www.youtube.com/watch?v=iHVs_HkjdmI
    - [x] Deep Dive Java: Garbage Collection is Good!: https://www.infoq.com/presentations/garbage-collection-benefits
    - [x] Deep Dive Python: Garbage Collection in CPython: https://www.youtube.com/watch?v=P-8Z0-MhdQs&list=PLdzf4Clw0VbOEWOS_sLhT_9zaiQDrS5AR&index=3

- ### Caches
    - [x] LRU cache:
        - [x] The Magic of LRU Cache (100 Days of Google Dev): https://www.youtube.com/watch?v=R5ON3iwx78M
        - [x] Implementing LRU: https://www.youtube.com/watch?v=bq6N7Ym81iI
        - [x] LeetCode - 146 LRU Cache (C++): https://www.youtube.com/watch?v=8-FZRAjR7qU
    - [x] CPU cache:
        - [x] MIT 6.004 L15: The Memory Hierarchy: https://www.youtube.com/watch?v=vjYF_fAZI5E&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-&index=24
        - [x] MIT 6.004 L16: Cache Issues: https://www.youtube.com/watch?v=ajgC3-pyGlk&index=25&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-

- ### Processes and Threads
    - [x] Computer Science 162 - Operating Systems (25 videos):
        - for precesses and threads see videos 1-11
        - https://www.youtube.com/playlist?list=PL-XXv-cvA_iBDyz-ba4yDskqMDY6A1w_c
    - https://www.quora.com/What-is-the-difference-between-a-process-and-a-thread
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
        - Thread resource needs (shares above (minus stack) with other threads in same process but each has its own pc, stack counter, registers and stack)
        - Forking is really copy on write (read-only) until the new process writes to memory, then it does a full copy.
        - Context switching
            - How context switching is initiated by the operating system and underlying hardware
    - [x] threads in C++ (series - 10 videos): https://www.youtube.com/playlist?list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M
    - [x] concurrency in Python:
        - [x] Short series on threads: https://www.youtube.com/playlist?list=PL1H1sBF1VAKVMONJWJkmUh6_p8g4F2oy1
        - [x] Python Threads: https://www.youtube.com/watch?v=Bs7vPNbB9JM
        - [x] Understanding the Python GIL (2010): https://www.youtube.com/watch?v=Obt-vMVdM8s
            - reference: http://www.dabeaz.com/GIL
        - [x] David Beazley - Python Concurrency From the Ground Up: LIVE! - PyCon 2015: https://www.youtube.com/watch?v=MCs5OvhV9S4
        - [x] Keynote David Beazley - Topics of Interest (Python Asyncio): https://www.youtube.com/watch?v=ZzfHjytDceU
        - [x] Mutex in Python: https://www.youtube.com/watch?v=0zaPs8OtyKY


    Scalability and System Design are very large topics with many topics and resources, since there is a lot to consider 
    when designing a software/hardware system that can scale. Expect to spend quite a bit of time on this.

- ### System Design, Scalability, Data Handling
    - Considerations from Yegge:
        - scalability
            - Distill large data sets to single values
            - Transform one data set to another
            - Handling obscenely large amounts of data
        - system design
            - features sets
            - interfaces
            - class hierarchies
            - designing a system under certain constraints
            - simplicity and robustness
            - tradeoffs
            - performance analysis and optimization
    - [x] **START HERE**: System Design from HiredInTech: http://www.hiredintech.com/system-design/
    - [x] https://www.quora.com/How-do-I-prepare-to-answer-design-questions-in-a-technical-interview?redirected_qid=1500023
    - [x] 8 Things You Need to Know Before a System Design Interview: http://blog.gainlo.co/index.php/2015/10/22/8-things-you-need-to-know-before-system-design-interviews/
    - [x] Algorithm design: http://www.hiredintech.com/algorithm-design/
    - [x] Database Normalization - 1NF, 2NF, 3NF and 4NF: https://www.youtube.com/watch?v=UrYLYV7WSHM
    - [x] https://github.com/checkcheckzz/system-design-interview - There are a lot of resources in this one. Look through the articles and examples. I put some of them below.
    - [x] How to ace a systems design interview: http://www.palantir.com/2011/10/how-to-rock-a-systems-design-interview/
    - [x] Numbers Everyone Should Know: http://everythingisdata.wordpress.com/2009/10/17/numbers-everyone-should-know/
    - [x] How long does it take to make a context switch?: http://blog.tsunanet.net/2010/11/how-long-does-it-take-to-make-context.html
    - [x] Transactions Across Datacenters: https://www.youtube.com/watch?v=srOgpXECblk
    - [x] A plain english introduction to CAP Theorem: http://ksat.me/a-plain-english-introduction-to-cap-theorem/
    - [x] Paxos Consensus algorithm: 
        - short video: https://www.youtube.com/watch?v=s8JqcZtvnsM
        - extended video with use case and multi-paxos: https://www.youtube.com/watch?v=JEpsBg0AO6o
        - paper: http://research.microsoft.com/en-us/um/people/lamport/pubs/paxos-simple.pdf
    - [x] Consistent Hashing: http://www.tom-e-white.com/2007/11/consistent-hashing.html
    - [x] NoSQL Patterns: http://horicky.blogspot.com/2009/11/nosql-patterns.html
    - [x] Optional: UML 2.0 Series: https://www.youtube.com/watch?v=OkC7HKtiZC0&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc
    - [x] OOSE: Software Dev Using UML and Java (21 videos): 
        - Can skip this if you have a great grasp of OO and OO design practices.
        - https://www.youtube.com/playlist?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO
    - [x] SOLID OOP Principles:
        - [x] Bob Martin SOLID Principles of Object Oriented and Agile Design: https://www.youtube.com/watch?v=TMuno5RZNeE
        - [x] SOLID Design Patterns in C#: https://www.youtube.com/playlist?list=PL8m4NUhTQU48oiGCSgCP1FiJEcg_xJzyQ
        - [x] SOLID Principles: https://www.youtube.com/playlist?list=PL4CE9F710017EA77A
        - [x] S - Single Responsibility Principle | Single responsibility to each Object
            - http://www.oodesign.com/single-responsibility-principle.html
            - http://www.javacodegeeks.com/2011/11/solid-single-responsibility-principle.html
            - more flavor: https://docs.google.com/open?id=0ByOwmqah_nuGNHEtcU5OekdDMkk
        - [x] O - Open/Closed Principal  | On production level Objects are ready for extension for not for modification
            - http://www.oodesign.com/open-close-principle.html
            - https://en.wikipedia.org/wiki/Open/closed_principle
            - more flavor: http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgN2M5MTkwM2EtNWFkZC00ZTI3LWFjZTUtNTFhZGZiYmUzODc1&hl=en
        - [x] L - Liskov Substitution Principal | Base Class and Derived class follow ‘IS A’ principal
            - http://www.oodesign.com/liskov-s-substitution-principle.html
            - http://stackoverflow.com/questions/56860/what-is-the-liskov-substitution-principle
            - more flavor: http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgNzAzZjA5ZmItNjU3NS00MzQ5LTkwYjMtMDJhNDU5ZTM0MTlh&hl=en
        - [x] I - Interface segregation principle | clients should not be forced to implement interfaces they don't use
            - http://www.oodesign.com/interface-segregation-principle.html
            - Interface Segregation Principle in 5 minutes: https://www.youtube.com/watch?v=3CtAfl7aXAQ
            - more flavor: http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgOTViYjJhYzMtMzYxMC00MzFjLWJjMzYtOGJiMDc5N2JkYmJi&hl=en
        - [x] D - Dependency Inversion principle | Reduce the dependency In composition of objects.
            - http://www.oodesign.com/dependency-inversion-principle.html
            - http://stackoverflow.com/questions/62539/what-is-the-dependency-inversion-principle-and-why-is-it-important
            - more flavor: http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgMjdlMWIzNGUtZTQ0NC00ZjQ5LTkwYzQtZjRhMDRlNTQ3ZGMz&hl=en
    - [x] Scalability:
        - [x] Great overview: https://www.youtube.com/watch?v=-W9F__D3oY4
        - [x] Short series: 
            - http://www.lecloud.net/post/7295452622/scalability-for-dummies-part-1-clones
            - http://www.lecloud.net/post/7994751381/scalability-for-dummies-part-2-database
            - http://www.lecloud.net/post/9246290032/scalability-for-dummies-part-3-cache
            - http://www.lecloud.net/post/9699762917/scalability-for-dummies-part-4-asynchronism
        - [x] Scalable Web Architecture and Distributed Systems: http://www.aosabook.org/en/distsys.html
        - [x] Fallacies of Distributed Computing Explained: https://pages.cs.wisc.edu/~zuyu/files/fallacies.pdf
        - [x] Pragmatic Programming Techniques: http://horicky.blogspot.com/2010/10/scalable-system-design-patterns.html
            - extra: Google Pregel Graph Processing: http://horicky.blogspot.com/2010/07/google-pregel-graph-processing.html
        - [x] Jeff Dean - Building Software Systems At Google and Lessons Learned: https://www.youtube.com/watch?v=modXC5IWTJI
        - [x] Introduction to Architecting Systems for Scale: http://lethain.com/introduction-to-architecting-systems-for-scale/
        - [x] Scaling mobile games to a global audience using App Engine and Cloud Datastore: https://www.youtube.com/watch?v=9nWyWwY2Onc
        - [x] How Google Does Planet-Scale Engineering for Planet-Scale Infra: https://www.youtube.com/watch?v=H4vMcD7zKM0
        - [x] The Importance of Algorithms: https://www.topcoder.com/community/data-science/data-science-tutorials/the-importance-of-algorithms/
        - [x] Sharding: http://highscalability.com/blog/2009/8/6/an-unorthodox-approach-to-database-design-the-coming-of-the.html
        - [x] Scale at Facebook (2009): https://www.infoq.com/presentations/Scale-at-Facebook
        - [x] Scale at Facebook (2012), "Building for a Billion Users": https://www.youtube.com/watch?v=oodS71YtkGU
        - [x] Engineering for the Long Game - Astrid Atkinson Keynote: https://www.youtube.com/watch?v=p0jGmgIrf_M&list=PLRXxvay_m8gqVlExPC5DG3TGWJTaBgqSA&index=4
        - [x] 7 Years Of YouTube Scalability Lessons In 30 Minutes: http://highscalability.com/blog/2012/3/26/7-years-of-youtube-scalability-lessons-in-30-minutes.html
            - video: https://www.youtube.com/watch?v=G-lGCC4KKok
        - [x] How PayPal Scaled To Billions Of Transactions Daily Using Just 8VMs: http://highscalability.com/blog/2016/8/15/how-paypal-scaled-to-billions-of-transactions-daily-using-ju.html
        - [x] How to Remove Duplicates in Large Datasets: https://blog.clevertap.com/how-to-remove-duplicates-in-large-datasets/
        - [x] A look inside Etsy's scale and engineering culture with Jon Cowie: https://www.youtube.com/watch?v=3vV4YiqKm1o
        - [x] What Led Amazon to its Own Microservices Architecture: http://thenewstack.io/led-amazon-microservices-architecture/
        - [x] To Compress Or Not To Compress, That Was Uber's Question: https://eng.uber.com/trip-data-squeeze/
        - [x] Asyncio Tarantool Queue, Get In The Queue: http://highscalability.com/blog/2016/3/3/asyncio-tarantool-queue-get-in-the-queue.html
        - [x] When Should Approximate Query Processing Be Used?: http://highscalability.com/blog/2016/2/25/when-should-approximate-query-processing-be-used.html
        - [x] Google's Transition From Single Datacenter, To Failover, To A Native Multihomed Architecture: http://highscalability.com/blog/2016/2/23/googles-transition-from-single-datacenter-to-failover-to-a-n.html
        - [x] Spanner: http://highscalability.com/blog/2012/9/24/google-spanners-most-surprising-revelation-nosql-is-out-and.html
        - [x] Egnyte Architecture: Lessons Learned In Building And Scaling A Multi Petabyte Distributed System: http://highscalability.com/blog/2016/2/15/egnyte-architecture-lessons-learned-in-building-and-scaling.html
        - [x] Machine Learning Driven Programming: A New Programming For A New World: http://highscalability.com/blog/2016/7/6/machine-learning-driven-programming-a-new-programming-for-a.html
        - [x] The Image Optimization Technology That Serves Millions Of Requests Per Day: http://highscalability.com/blog/2016/6/15/the-image-optimization-technology-that-serves-millions-of-re.html
        - [x] A Patreon Architecture Short: http://highscalability.com/blog/2016/2/1/a-patreon-architecture-short.html
        - [x] Tinder: How Does One Of The Largest Recommendation Engines Decide Who You'll See Next?: http://highscalability.com/blog/2016/1/27/tinder-how-does-one-of-the-largest-recommendation-engines-de.html
        - [x] Design Of A Modern Cache: http://highscalability.com/blog/2016/1/25/design-of-a-modern-cache.html
        - [x] Live Video Streaming At Facebook Scale: http://highscalability.com/blog/2016/1/13/live-video-streaming-at-facebook-scale.html
        - [x] A Beginner's Guide To Scaling To 11 Million+ Users On Amazon's AWS: http://highscalability.com/blog/2016/1/11/a-beginners-guide-to-scaling-to-11-million-users-on-amazons.html
        - [x] How Does The Use Of Docker Effect Latency?: http://highscalability.com/blog/2015/12/16/how-does-the-use-of-docker-effect-latency.html
        - [x] Does AMP Counter An Existential Threat To Google?: http://highscalability.com/blog/2015/12/14/does-amp-counter-an-existential-threat-to-google.html
        - [x] A 360 Degree View Of The Entire Netflix Stack: http://highscalability.com/blog/2015/11/9/a-360-degree-view-of-the-entire-netflix-stack.html
        - [x] Latency Is Everywhere And It Costs You Sales - How To Crush It: http://highscalability.com/latency-everywhere-and-it-costs-you-sales-how-crush-it
        - [x] Serverless (very long, just need the gist): http://martinfowler.com/articles/serverless.html
        - [x] What Powers Instagram: Hundreds of Instances, Dozens of Technologies: http://instagram-engineering.tumblr.com/post/13649370142/what-powers-instagram-hundreds-of-instances
        - [x] Cinchcast Architecture - Producing 1,500 Hours Of Audio Every Day: http://highscalability.com/blog/2012/7/16/cinchcast-architecture-producing-1500-hours-of-audio-every-d.html
        - [x] Justin.Tv's Live Video Broadcasting Architecture: http://highscalability.com/blog/2010/3/16/justintvs-live-video-broadcasting-architecture.html
        - [x] Playfish's Social Gaming Architecture - 50 Million Monthly Users And Growing: http://highscalability.com/blog/2010/9/21/playfishs-social-gaming-architecture-50-million-monthly-user.html
        - [x] TripAdvisor Architecture - 40M Visitors, 200M Dynamic Page Views, 30TB Data: http://highscalability.com/blog/2011/6/27/tripadvisor-architecture-40m-visitors-200m-dynamic-page-view.html
        - [x] PlentyOfFish Architecture: http://highscalability.com/plentyoffish-architecture
        - [x] Salesforce Architecture - How They Handle 1.3 Billion Transactions A Day: http://highscalability.com/blog/2013/9/23/salesforce-architecture-how-they-handle-13-billion-transacti.html
        - [x] ESPN's Architecture At Scale - Operating At 100,000 Duh Nuh Nuhs Per Second: http://highscalability.com/blog/2013/11/4/espns-architecture-at-scale-operating-at-100000-duh-nuh-nuhs.html
        - [x] See "Messaging, Serialization, and Queueing Systems" way below for info on some of the technologies that can glue services together
        - [x] Twitter:
            - O'Reilly MySQL CE 2011: Jeremy Cole, "Big and Small Data at @Twitter": https://www.youtube.com/watch?v=5cKTP36HVgI
            - Timelines at Scale: https://www.infoq.com/presentations/Twitter-Timeline-Scalability
        - For even more, see "Mining Massive Datasets" video series in the Video Series section.
    - [x] Practicing the system design process: Here are some ideas to try working through on paper, each with some documentation on how it was handled in the real world:
        - review: System Design from HiredInTech: http://www.hiredintech.com/system-design/
        - cheat sheet: https://github.com/jwasham/google-interview-university/blob/master/extras/cheat%20sheets/system-design.pdf
        - flow:
            1. Understand the problem and scope:
                - define the use cases, with interviewer's help
                - suggest additional features
                - remove items that interviewer deems out of scope
                - assume high availability is required, add as a use case
            2. Think about constraints:
                - ask how many requests per month
                - ask how many requests per second (they may volunteer it or make you do the math)
                - estimate reads vs. writes percentage
                - keep 80/20 rule in mind when estimating
                - how much data written per second
                - total storage required over 5 years
                - how much data read per second
            3. Abstract design:
                - layers (service, data, caching)
                - infrastructure: load balancing, messaging
                - rough overview of any key algorithm that drives the service
                - consider bottlenecks and determine solutions
        - Exercises:
            - Design a CDN network: old article: http://repository.cmu.edu/cgi/viewcontent.cgi?article=2112&context=compsci
            - Design a random unique ID generation system: https://blog.twitter.com/2010/announcing-snowflake
            - Design an online multiplayer card game: http://www.indieflashblog.com/how-to-create-an-asynchronous-multiplayer-game.html
            - Design a key-value database: http://www.slideshare.net/dvirsky/introduction-to-redis
            - Design a function to return the top k requests during past time interval: https://icmi.cs.ucsb.edu/research/tech_reports/reports/2005-23.pdf
            - Design a picture sharing system: http://highscalability.com/blog/2011/12/6/instagram-architecture-14-million-users-terabytes-of-photos.html
            - Design a recommendation system: http://ijcai13.org/files/tutorial_slides/td3.pdf
            - Design a URL-shortener system: copied from above: http://www.hiredintech.com/system-design/the-system-design-process/
            - Design a cache system: https://www.adayinthelifeof.nl/2011/02/06/memcache-internals/

- ### About Google
    - [x] How Search Works:
        - [x] The Evolution of Search: https://www.youtube.com/watch?v=mTBShTwCnD4
        - [x] How Search Works - the story: https://www.google.com/insidesearch/howsearchworks/thestory/
        - [x] How Search Works: https://www.google.com/insidesearch/howsearchworks/
        - [x] How Search Works - Matt Cutts: https://www.youtube.com/watch?v=BNHR6IQJGZs
        - [x] How Google makes improvements to its search algorithm: https://www.youtube.com/watch?v=J5RZOU6vK4Q
    - [x] Series:
        - [x] https://backchannel.com/how-google-search-dealt-with-mobile-33bc09852dc9
        - [x] https://backchannel.com/googles-secret-study-to-find-out-our-needs-eba8700263bf
        - [x] https://backchannel.com/google-search-will-be-your-next-brain-5207c26e4523
        - [x] https://backchannel.com/the-deep-mind-of-demis-hassabis-156112890d8a

- ### Papers
    - These are Google papers and well-known papers.
    - Reading all from end to end with full comprehension will likely take more time than you have. I recommend being selective on papers and their sections.
    - [x] 1978: Communicating Sequential Processes: http://spinroot.com/courses/summer/Papers/hoare_1978.pdf
        - implemented in Go: https://godoc.org/github.com/thomas11/csp
        - Love classic papers? https://www.cs.cmu.edu/~crary/819-f09/
    - [x] 2003: The Google File System: http://static.googleusercontent.com/media/research.google.com/en//archive/gfs-sosp2003.pdf
        - replaced by Colossus in 2012
    - [x] 2004: MapReduce: Simplified Data Processing on Large Clusters: http://static.googleusercontent.com/media/research.google.com/en//archive/mapreduce-osdi04.pdf
        - mostly replaced by Cloud Dataflow?
    - [x] 2007: What Every Programmer Should Know About Memory (very long, and the author encourages skipping of some sections): https://www.akkadia.org/drepper/cpumemory.pdf
    - [x] 2012: Google's Colossus: https://www.wired.com/2012/07/google-colossus/
        - paper not available
    - [x] 2012: AddressSanitizer: A Fast Address Sanity Checker:
        - paper: http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/37752.pdf
        - video: https://www.usenix.org/conference/atc12/technical-sessions/presentation/serebryany
    - [x] 2013: Spanner: Google’s Globally-Distributed Database:
        - paper: http://static.googleusercontent.com/media/research.google.com/en//archive/spanner-osdi2012.pdf
        - video: https://www.usenix.org/node/170855
    - [x] 2014: Machine Learning: The High-Interest Credit Card of Technical Debt: http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43146.pdf
    - [x] 2015: Continuous Pipelines at Google: http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43790.pdf
    - [x] 2015: High-Availability at Massive Scale: Building Google’s Data Infrastructure for Ads: https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44686.pdf
    - [x] 2015: TensorFlow: Large-Scale Machine Learning on Heterogeneous Distributed Systems: http://download.tensorflow.org/paper/whitepaper2015.pdf 
    - [x] 2015: How Developers Search for Code: A Case Study: http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43835.pdf
    - [x] 2016: Borg, Omega, and Kubernetes: http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44843.pdf

- ### Unicode
    - [x] The Absolute Minimum Every Software Developer Absolutely, Positively Must Know About Unicode and Character Sets: http://www.joelonsoftware.com/articles/Unicode.html
    - [x] What Every Programmer Absolutely, Positively Needs To Know About Encodings And Character Sets To Work With Text: http://kunststube.net/encoding/

- ### Emacs and vi(m)
    - suggested by Yegge, from an old Amazon recruiting post: Familiarize yourself with a unix-based code editor
    - vi(m):
        - https://www.youtube.com/watch?v=5givLEMcINQ&index=1&list=PL13bz4SHGmRxlZVmWQ9DvXo1fEg4UdGkr
        - set of 4:
            - https://www.youtube.com/watch?v=SI8TeVMX8pk
            - https://www.youtube.com/watch?v=F3OO7ZIOaJE
            - https://www.youtube.com/watch?v=ZYEccA_nMaI
            - https://www.youtube.com/watch?v=1lYD5gwgZIA
        - http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Using_Vi_instead_of_Emacs
    - emacs:
        - https://www.youtube.com/watch?v=hbmV1bnQ-i0
        - set of 3:
            - https://www.youtube.com/watch?v=ujODL7MD04Q
            - https://www.youtube.com/watch?v=XWpsRupJ4II
            - https://www.youtube.com/watch?v=paSgzPso-yc
        - https://www.youtube.com/watch?v=JWD1Fpdd4Pc
        - http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Writing_C_programs_with_Emacs
        - (maybe) Org Mode In Depth: Managing Structure: https://www.youtube.com/watch?v=nsGYet02bEk

- ### Unix command line tools
    - suggested by Yegge, from an old Amazon recruiting post. I filled in the list below from good tools.
    - [ ] bash
    - [ ] cat
    - [ ] grep
    - [ ] sed
    - [ ] awk
    - [ ] curl or wget
    - [ ] sort
    - [ ] tr
    - [ ] uniq
    - [ ] strace: https://en.wikipedia.org/wiki/Strace
    - [ ] tcpdump: https://danielmiessler.com/study/tcpdump/

- ### Testing
    - To cover:
        - how unit testing works
        - what are mock objects
        - what is integration testing
        - what is dependency injection
    - [x] Agile Software Testing with James Bach: https://www.youtube.com/watch?v=SAhJf36_u5U
    - [x] Open Lecture by James Bach on Software Testing: https://www.youtube.com/watch?v=ILkT_HV9DVU
    - [x] Steve Freeman - Test-Driven Development (that’s not what we meant): https://vimeo.com/83960706
        - slides: http://gotocon.com/dl/goto-berlin-2013/slides/SteveFreeman_TestDrivenDevelopmentThatsNotWhatWeMeant.pdf
    - [x] TDD is dead. Long live testing.: http://david.heinemeierhansson.com/2014/tdd-is-dead-long-live-testing.html
    - [x] Is TDD dead? https://www.youtube.com/watch?v=z9quxZsLcfo
    - [x] Video series (152 videos) - not all are needed: https://www.youtube.com/watch?v=nzJapzxH_rE&list=PLAwxTw4SYaPkWVHeC_8aSIbSxE_NXI76g
    - [x] Test-Driven Web Development with Python: http://www.obeythetestinggoat.com/pages/book.html#toc
    - [x] Dependency injection:
        - [x] https://www.youtube.com/watch?v=IKD2-MAkXyQ
        - [x] http://jasonpolites.github.io/tao-of-testing/ch3-1.1.html
    - [x] How to write tests: http://jasonpolites.github.io/tao-of-testing/ch4-1.1.html

- ### Design patterns
    - [x] Quick UML review: https://www.youtube.com/watch?v=3cmzqZzwNDM&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc&index=3
    - [x] Learn these patterns:
        - [x] strategy
        - [x] singleton
        - [x] adapter
        - [x] prototype
        - [x] decorator
        - [x] visitor
        - [x] factory, abstract factory
        - [x] facade
        - [x] observer
        - [x] proxy
        - [x] delegate
        - [x] command
        - [x] state
        - [x] memento
        - [x] iterator
        - [x] composite
        - [x] flyweight
    - [x] Chapter 6 (Part 1) - Patterns: https://youtu.be/LAP2A80Ajrg?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO&t=3344
    - [x] Chapter 6 (Part 2) - Abstraction-Occurrence, General Hierarchy, Player-Role, Singleton, Observer, Delegation: https://www.youtube.com/watch?v=U8-PGsjvZc4&index=12&list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO
    - [x] Chapter 6 (Part 3) - Adapter, Facade, Immutable, Read-Only Interface, Proxy: https://www.youtube.com/watch?v=7sduBHuex4c&index=13&list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO
    - [x] Series of videos (27 videos): https://www.youtube.com/playlist?list=PLF206E906175C7E07
    - [x] Head First Design Patterns: https://www.amazon.com/Head-First-Design-Patterns-Freeman/dp/0596007124
        - I know the canonical book is "Design Patterns: Elements of Reusable Object-Oriented Software", but Head First is great for beginners to OO.
    - [ ] Handy reference: 101 Design Patterns & Tips for Developers: https://sourcemaking.com/design-patterns-and-tips

- ### Scheduling
    - in an OS, how it works
    - can be gleaned from Operating System videos

- ### Implement system routines
    - understand what lies beneath the programming APIs you use
    - can you implement them?

- ### String searching & manipulations
    - [ ] Search pattern in text: https://www.coursera.org/learn/data-structures/lecture/tAfHI/search-pattern-in-text
    - [ ] Rabin-Karp:
        https://www.coursera.org/learn/data-structures/lecture/c0Qkw/rabin-karps-algorithm
        https://www.youtube.com/watch?v=BRO7mVIFt08&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=9
    - [ ] Precomputing: https://www.coursera.org/learn/data-structures/lecture/nYrc8/optimization-precomputation
    - [ ] Optimization: Implementation and Analysis: https://www.coursera.org/learn/data-structures/lecture/h4ZLc/optimization-implementation-and-analysis
    - [ ] Knuth-Morris-Pratt (KMP):
        - https://en.wikipedia.org/wiki/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm
        - https://www.youtube.com/watch?v=2ogqPWJSftE
    - [ ] Boyer–Moore string search algorithm
        - https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_string_search_algorithm
        - https://www.youtube.com/watch?v=xYBM0_dChRE
    - [ ] Coursera: Algorithms on Strings:
        - https://www.coursera.org/learn/algorithms-on-strings/home/week/1

---

## Final Review 

    This section will have shorter videos that can you watch pretty quickly to review most of the important concepts.
    It's nice if you want a refresher often.
    (More items will be added here)

#### General:

- [ ] Series of 2-3 minutes short subject videos (23 videos)
    - https://www.youtube.com/watch?v=r4r1DZcx1cM&list=PLmVb1OknmNJuC5POdcDv5oCS7_OUkDgpj&index=22
- [ ] Series of 2-5 minutes short subject videos - Michael Sambol (18 videos):
    - https://www.youtube.com/channel/UCzDJwLWoYCUQowF_nG3m5OQ

#### Sorts:

- [ ] Merge Sort: https://www.youtube.com/watch?v=GCae1WNvnZM
   

## Books

### Mentioned in Google Coaching

**Read and do exercises:**

- [ ] The Algorithm Design Manual (Skiena)
    - Book (can rent on kindle):
        - http://www.amazon.com/Algorithm-Design-Manual-Steven-Skiena/dp/1849967202
    - Half.com is a great resource for textbooks at good prices.
    - Answers:
        - http://www.algorithm.cs.sunysb.edu/algowiki/index.php/The_Algorithms_Design_Manual_(Second_Edition)
        - http://blog.panictank.net/category/algorithmndesignmanualsolutions/page/2/
    - Errata:
        - http://www3.cs.stonybrook.edu/~skiena/algorist/book/errata

    Once you've understood everything in the daily plan, and read and done exercises from the the books above,
    read and do exercises from the books below. Then move to coding challenges (further down below)

**Read first:**
- [ ] Programming Interviews Exposed: Secrets to Landing Your Next Job, 2nd Edition:
    http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html

**Read second (recommended by many, but not in Google coaching docs):**
- [ ] Cracking the Coding Interview, 6th Edition:
    - http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/
    - If you see people reference "The Google Resume", it was a book replaced by "Cracking the Coding Interview".

### Additional books 

    These were not suggested by Google but I added because I needed the background knowledge

- [x] C Programming Language, Vol 2
    - answers to questions: https://github.com/lekkas/c-algorithms

- [x] C++ Primer Plus, 6th Edition

- [x] The Unix Programming Environment
    - http://product.half.ebay.com/The-UNIX-Programming-Environment-by-Brian-W-Kernighan-and-Rob-Pike-1983-Other/54385&tg=info

- [ ] Programming Pearls:
    - http://www.amazon.com/Programming-Pearls-2nd-Jon-Bentley/dp/0201657880

- [ ] Algorithms and Programming: Problems and Solutions:
    http://www.amazon.com/Algorithms-Programming-Solutions-Alexander-Shen/dp/0817638474

### If you have time

- [ ] Introduction to Algorithms
    - https://www.amazon.com/Introduction-Algorithms-3rd-MIT-Press/dp/0262033844
    - Half.com is a great resource for textbooks at good prices.
    
- [ ] Elements of Programming Interviews
    - https://www.amazon.com/Elements-Programming-Interviews-Insiders-Guide/dp/1479274836
    - all code is in C++, if you're looking to use C++ in your interview
    - good book on problem solving in general.

## Coding exercises/challenges

Once you've learned your brains out, put those brains to work.
Take coding challenges every day, as many as you can.

- [x] Great intro (copied from System Design section): Algorithm design: http://www.hiredintech.com/algorithm-design/
- [ ] How to Find a Solution: https://www.topcoder.com/community/data-science/data-science-tutorials/how-to-find-a-solution/
- [ ] How to Dissect a Topcoder Problem Statement: https://www.topcoder.com/community/data-science/data-science-tutorials/how-to-dissect-a-topcoder-problem-statement/ 
- [ ] Mathematics for Topcoders: https://www.topcoder.com/community/data-science/data-science-tutorials/mathematics-for-topcoders/
- [ ] Dynamic Programming – From Novice to Advanced: https://www.topcoder.com/community/data-science/data-science-tutorials/dynamic-programming-from-novice-to-advanced/

- https://courses.csail.mit.edu/iap/interview/materials.php

    - LeetCode: https://leetcode.com/
    - TopCoder: https://www.topcoder.com/
    - Project Euler (math-focused): https://projecteuler.net/index.php?section=problems
    - HackerRank: https://www.hackerrank.com/
    - Codility: https://codility.com/programmers/
    - InterviewCake: https://www.interviewcake.com/
    - InterviewBit: https://www.interviewbit.com/invite/icjf

    - Exercises for getting better at a given language: http://exercism.io/languages

## Once you're closer to the interview

- [ ] Cracking The Coding Interview Set 2:
    - https://www.youtube.com/watch?v=4NIb9l3imAo
    - https://www.youtube.com/watch?v=Eg5-tdAwclo
    - https://www.youtube.com/watch?v=1fqxMuPmGak

## Your Resume

- http://steve-yegge.blogspot.co.uk/2007_09_01_archive.html
- Great stuff at the back of Cracking The Coding Interview


## Be thinking of for when the interview comes

    Think of about 20 interview questions you'll get, along the lines of the items below.
    Have 2-3 answers for each
    Have a story, not just data, about something you accomplished
    
- Why do you want this job?
- What's a tough problem you've solved?
- Biggest challenges faced?
- Best/worst designs seen?
- Ideas for improving an existing Google product.
- How do you work best, as an individual and as part of a team?
- Which of your skills or experiences would be assets in the role and why?
- What did you most enjoy at [job x / project y]?
- What was the biggest challenge you faced at [job x / project y]?
- What was the hardest bug you faced at [job x / project y]?
- What did you learn at [job x / project y]?
- What would you have done better at [job x / project y]?

## Have questions for the interviewer

    Some of mine (I already may know answer to but want their opinion or team perspective):

- How large is your team?
- What is your dev cycle look like? Do you do waterfall/sprints/agile?
- Are rushes to deadlines common? Or is there flexibility?
- How are decisions made in your team?
- How many meetings do you have per week?
- Do you feel your work environment helps you concentrate?
- What are you working on?
- What do you like about it?
- What is the work life like?

---

---

## Additional Learnings (not required)

    Everything below is my recommendation, not Google's, and you may not have enough time to
    learn, watch or read them all. That's ok. I may not either.

- ### Information theory
    - [x] Khan Academy: https://www.khanacademy.org/computing/computer-science/informationtheory
    - [x] more about Markov processes:
        - [x] https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/waxgx/core-markov-text-generation
        - [x] https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/gZhiC/core-implementing-markov-text-generation
        - [x] https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/EUjrq/project-markov-text-generation-walk-through
    - See more in MIT 6.050J Information and Entropy series below. 

- ### Parity & Hamming Code
    - [x] Intro: https://www.youtube.com/watch?v=q-3BctoUpHE
    - [x] Parity: https://www.youtube.com/watch?v=DdMcAUlxh1M
    - [x] Hamming Code:
        - Error detection: https://www.youtube.com/watch?v=1A_NcXxdoCc
        - Error correction: https://www.youtube.com/watch?v=JAMLuxdHH8o
    - [x] Error Checking:
        - https://www.youtube.com/watch?v=wbH2VxzmoZk

- ### Entropy
    - also see videos below
    - make sure to watch information theory videos first
    - [x] Information Theory, Claude Shannon, Entropy, Redundancy, Data Compression & Bits: https://youtu.be/JnJq3Py0dyM?t=176

- ### Cryptography
    - also see videos below
    - make sure to watch information theory videos first
    - [x] Khan Academy Series: https://www.khanacademy.org/computing/computer-science/cryptography
    - [x] Cryptography: Hash Functions: https://www.youtube.com/watch?v=KqqOXndnvic&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=30
    - [x] Cryptography: Encryptiom: https://www.youtube.com/watch?v=9TNI2wHmaeI&index=31&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp

- ### Compression
    - make sure to watch information theory videos first
    - [x] Computerphile: 
        - [x] Compression: https://www.youtube.com/watch?v=Lto-ajuqW3w
        - [x] Entropy in Compression: https://www.youtube.com/watch?v=M5c_RFKVkko 
        - [x] Upside Down Trees (Huffman Trees): https://www.youtube.com/watch?v=umTbivyJoiI
        - [x] EXTRA BITS/TRITS - Huffman Trees: https://www.youtube.com/watch?v=DV8efuB3h2g
        - [x] Elegant Compression in Text (The LZ 77 Method): https://www.youtube.com/watch?v=goOa3DGezUA
        - [x] Text Compression Meets Probabilities: https://www.youtube.com/watch?v=cCDCfoHTsaU
    - [x] Compressor Head videos: 
        - https://www.youtube.com/playlist?list=PLOU2XLYxmsIJGErt5rrCqaSGTMyyqNt2H
    - [x] (optional) Google Developers Live: GZIP is not enough!: https://www.youtube.com/watch?v=whGwm0Lky2s

- ### Networking
    - [x] Khan Academy: https://www.khanacademy.org/computing/computer-science/internet-intro
    - [x] UDP and TCP: Comparison of Transport Protocols: https://www.youtube.com/watch?v=Vdc8TCESIg8
    - [x] TCP/IP and the OSI Model Explained!: https://www.youtube.com/watch?v=e5DEVa9eSN0
    - [x] Packet Transmission across the Internet. Networking & TCP/IP tutorial.: https://www.youtube.com/watch?v=nomyRJehhnM
    - [x] HTTP: https://www.youtube.com/watch?v=WGJrLqtX7As
    - [x] SSL and HTTPS: https://www.youtube.com/watch?v=S2iBR2ZlZf0
    - [x] SSL/TLS: https://www.youtube.com/watch?v=Rp3iZUvXWlM
    - [x] HTTP 2.0: https://www.youtube.com/watch?v=E9FxNzv1Tr8
    - [ ] Video Series (21 videos): https://www.youtube.com/playlist?list=PLEbnTDJUr_IegfoqO4iPnPYQui46QqT0j
    - [x] Subnetting Demystified - Part 5 CIDR Notation: https://www.youtube.com/watch?v=t5xYI0jzOf4

- ### Computer Security
    - MIT (23 videos): https://www.youtube.com/playlist?list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh
        - [x] Introduction, Threat Models: https://www.youtube.com/watch?v=GqmQg-cszw4&index=1&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh
        - [x] Control Hijacking Attacks: https://www.youtube.com/watch?v=6bwzNg5qQ0o&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh&index=2
        - [x] Buffer Overflow Exploits and Defenses: https://www.youtube.com/watch?v=drQyrzRoRiA&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh&index=3
        - [x] Privilege Separation: https://www.youtube.com/watch?v=6SIJmoE9L9g&index=4&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh
        - [x] Capabilities: https://www.youtube.com/watch?v=8VqTSY-11F4&index=5&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh
        - [x] Sandboxing Native Code: https://www.youtube.com/watch?v=VEV74hwASeU&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh&index=6
        - [x] Web Security Model: https://www.youtube.com/watch?v=chkFBigodIw&index=7&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh
        - [x] Securing Web Applications: https://www.youtube.com/watch?v=EBQIGy1ROLY&index=8&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh
        - [x] Symbolic Execution: https://www.youtube.com/watch?v=yRVZPvHYHzw&index=9&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh
        - [x] Network Security: https://www.youtube.com/watch?v=SIEVvk3NVuk&index=11&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh
        - [x] Network Protocols: https://www.youtube.com/watch?v=QOtA76ga_fY&index=12&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh
        - [x] Side-Channel Attacks: https://www.youtube.com/watch?v=PuVMkSEcPiI&index=15&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh

- ### Parallel Programming
    - [x] Coursera (Scala): https://www.coursera.org/learn/parprog1/home/week/1
    - [x] Efficient Python for High Performance Parallel Computing: https://www.youtube.com/watch?v=uY85GkaYzBk

- ### Messaging, Serialization, and Queueing Systems
    - [x] Thrift
        - https://thrift.apache.org/
        - http://thrift-tutorial.readthedocs.io/en/latest/intro.html
    - [x] Protocol Buffers
        - https://developers.google.com/protocol-buffers/
        - https://developers.google.com/protocol-buffers/docs/tutorials
    - [x] gRPC
        - http://www.grpc.io/
        - https://www.youtube.com/watch?v=5tmPvSe7xXQ&list=PLcTqM9n_dieN0k1nSeN36Z_ppKnvMJoly&index=1
    - [x] Redis
        - http://redis.io/
        - tutorial: http://try.redis.io/
    - [x] Amazon SQS (queue)
        - https://aws.amazon.com/sqs/
    - [x] Amazon SNS (pub-sub)
        - https://aws.amazon.com/sns/
    - [x] RabbitMQ
        - https://www.rabbitmq.com/
        - https://www.rabbitmq.com/getstarted.html
    - [x] Celery
        - http://www.celeryproject.org/
        - http://docs.celeryproject.org/en/latest/getting-started/first-steps-with-celery.html
    - [x] ZeroMQ
        - http://zeromq.org/
        - http://zeromq.org/intro:read-the-manual
    - [x] ActiveMQ
        - http://activemq.apache.org/
    - [x] Kafka
        - http://kafka.apache.org/documentation.html#introduction
    - [x] MessagePack
        - http://msgpack.org/index.html
    - [x] Avro
        - https://avro.apache.org/

- ### Fast Fourier Transform
    - [x] What is a Fourier transform? What is it used for?: http://www.askamathematician.com/2012/09/q-what-is-a-fourier-transform-what-is-it-used-for/
    - [x] What is the Fourier Transform?: https://www.youtube.com/watch?v=Xxut2PN-V8Q
    - [x] Divide & Conquer: FFT: https://www.youtube.com/watch?v=iTMn0Kt18tg&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=4
    - [x] http://jakevdp.github.io/blog/2013/08/28/understanding-the-fft/

- ### Bloom Filter
    - Given a Bloom filter with m bits and k hashing functions, both insertion and membership testing are O(k)
    - https://www.youtube.com/watch?v=-SuTGoFYjZs
    - https://www.youtube.com/watch?v=qBTdukbzc78
    - http://billmill.org/bloomfilter-tutorial/
    - http://blog.michaelschmatz.com/2016/04/11/how-to-write-a-bloom-filter-cpp/

- ### van Emde Boas Trees
    - [x] Divide & Conquer: van Emde Boas Trees: https://www.youtube.com/watch?v=hmReJCupbNU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=6
    - [x] https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-046j-design-and-analysis-of-algorithms-spring-2012/lecture-notes/MIT6_046JS12_lec15.pdf

- ### Augmented Data Structures
    - [x] CS 61B Lecture 39: Augmenting Data Structures: https://youtu.be/zksIj9O8_jc?list=PL4BBB74C7D2A1049C&t=950

- ### Skip lists
    - "These are somewhat of a cult data structure" - Skiena
    - [x] Randomization: Skip Lists: https://www.youtube.com/watch?v=2g9OSRKJuzM&index=10&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp
    - [x] For animations and a little more detail: https://en.wikipedia.org/wiki/Skip_list

- ### Network Flows
    - [x] Ford-Fulkerson in 5 minutes: https://www.youtube.com/watch?v=v1VgJmkEJW0
    - [x] Ford-Fulkerson Algorithm: https://www.youtube.com/watch?v=v1VgJmkEJW0
    - [x] Network Flows: https://www.youtube.com/watch?v=2vhN4Ice5jI

- ### Disjoint Sets & Union Find
    - [x] https://en.wikipedia.org/wiki/Disjoint-set_data_structure
    - [x] UCB 61B - Disjoint Sets; Sorting & selection: https://www.youtube.com/watch?v=MAEGXTwmUsI&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&index=21
    - [x] Coursera (not needed since the above video explains it great):
        - [x] https://www.coursera.org/learn/data-structures/lecture/JssSY/overview
        - [x] https://www.coursera.org/learn/data-structures/lecture/EM5D0/naive-implementations
        - [x] https://www.coursera.org/learn/data-structures/lecture/Mxu0w/trees
        - [x] https://www.coursera.org/learn/data-structures/lecture/qb4c2/union-by-rank
        - [x] https://www.coursera.org/learn/data-structures/lecture/Q9CVI/path-compression
        - [x] https://www.coursera.org/learn/data-structures/lecture/GQQLN/analysis-optional

- ### Math for Fast Processing
    - [x] Integer Arithmetic, Karatsuba Multiplication: https://www.youtube.com/watch?v=eCaXlAaN2uE&index=11&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb
    - [x] The Chinese Remainder Theorem (used in cryptography): https://www.youtube.com/watch?v=ru7mWZJlRQg
    
- ### Treap
    - Combination of a binary search tree and a heap
    - [x] Wikipedia: https://en.wikipedia.org/wiki/Treap
    - [x] https://www.youtube.com/watch?v=6podLUYinH8
    - [x] Applications in set operations: https://www.cs.cmu.edu/~scandal/papers/treaps-spaa98.pdf
    
- ### Linear Programming
    - [x] https://www.youtube.com/watch?v=M4K6HYLHREQ
    - [x] Finding minimum cost: https://www.youtube.com/watch?v=2ACJ9ewUC6U
    - [x] Finding maximum value: https://www.youtube.com/watch?v=8AA_81xI3ik

- ### Geometry, Convex hull
    - [x] Graph Alg. IV: Intro to geometric algorithms - Lecture 9: https://youtu.be/XIAQRlNkJAw?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3164
    - [x] Geometric Algorithms: Graham & Jarvis - Lecture 10: https://www.youtube.com/watch?v=J5aJEcOr6Eo&index=10&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm
    - [x] Divide & Conquer: Convex Hull, Median Finding: https://www.youtube.com/watch?v=EzeYI7p9MjU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=2

- ### Discrete math
    - see videos below

- ### Machine Learning
    - [x] Why ML?
        - [x] https://backchannel.com/how-google-is-remaking-itself-as-a-machine-learning-first-company-ada63defcb70
        - [x] Large-Scale Deep Learning for Intelligent Computer Systems: https://www.youtube.com/watch?v=QSaZGT4-6EY
        - [x] Deep Learning and Understandability versus Software Engineering and Verification by Peter Norvig: https://www.youtube.com/watch?v=X769cyzBNVw
    - [ ] Google's Cloud Machine learning tools: https://www.youtube.com/watch?v=Ja2hxBAwG_0
    - [ ] Google Developers' Machine Learning Recipes (Scikit Learn & Tensorflow):
        - https://www.youtube.com/playlist?list=PLOU2XLYxmsIIuiBfYad6rFYQU_jL2ryal
    - [x] Tensorflow: https://www.youtube.com/watch?v=oZikw5k_2FM
    - [ ] Tensorflow Tutorials: https://www.tensorflow.org/versions/r0.11/tutorials/index.html
    - [ ] Practical Guide to implementing Neural Networks in Python (using Theano): http://www.analyticsvidhya.com/blog/2016/04/neural-networks-python-theano/
    - [ ] Vector calculus: https://www.youtube.com/watch?v=tDtYAddb4o4
    - Courses:
        - [x] Great starter course: Machine Learning: https://www.coursera.org/learn/machine-learning
              - videos only: https://www.youtube.com/playlist?list=PLZ9qNFMHZ-A4rycgrgOYma6zxF4BZGGPW
              - see videos 12-18 for a review of linear algebra (14 and 15 are duplicates)
        - [ ] Neural Networks for Machine Learning: https://www.coursera.org/learn/neural-networks
        - [ ] Google's Deep Learning Nanodegree: https://www.udacity.com/course/deep-learning--ud730
        - [ ] Google/Kaggle Machine Learning Engineer Nanodegree: https://www.udacity.com/course/machine-learning-engineer-nanodegree-by-google--nd009
        - [ ] Self-Driving Car Engineer Nanodegree: https://www.udacity.com/drive
        - [ ] Metis Online Course ($99 for 2 months): http://www.thisismetis.com/explore-data-science
    - Resources:
        - Great book: Data Science from Scratch: First Principles with Python: https://www.amazon.com/Data-Science-Scratch-Principles-Python/dp/149190142X
        - Data School: http://www.dataschool.io/

- ### Go
    - [x] Videos:
        - [x] Why Learn Go?: https://www.youtube.com/watch?v=FTl0tl9BGdc
        - [x] Go Programming: https://www.youtube.com/watch?v=CF9S4QZuV30
        - [x] A Tour of Go: https://www.youtube.com/watch?v=ytEkHepK08c
    - [x] Books:
        - [x] An Introduction to Programming in Go (read free online): https://www.golang-book.com/books/intro
        - [ ] The Go Programming Language (Donovan & Kernighan): https://www.amazon.com/Programming-Language-Addison-Wesley-Professional-Computing/dp/0134190440
    - [ ] Bootcamp: https://www.golang-book.com/guides/bootcamp

--

## Additional Detail on Some Subjects

    I added these to reinforce some ideas already presented above, but didn't want to include them
    above because it's just too much. It's easy to overdo it on a subject.
    You want to get hired in this century, right?

- [ ] **More Dynamic Programming**
    - [x] 6.006: Dynamic Programming I: Fibonacci, Shortest Paths: https://www.youtube.com/watch?v=OQ5jsbhAv_M&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=19
    - [x] 6.006: Dynamic Programming II: Text Justification, Blackjack: https://www.youtube.com/watch?v=ENyox7kNKeY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=20
    - [ ] 6.006: DP III: Parenthesization, Edit Distance, Knapsack: https://www.youtube.com/watch?v=ocZMDMZwhCY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=21
    - [ ] 6.006: DP IV: Guitar Fingering, Tetris, Super Mario Bros.: https://www.youtube.com/watch?v=tp4_UXaVyx8&index=22&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb
    - [ ] 6.046: Dynamic Programming & Advanced DP: https://www.youtube.com/watch?v=Tw1k46ywN6E&index=14&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp
    - [ ] 6.046: Dynamic Programming: All-Pairs Shortest Paths: https://www.youtube.com/watch?v=NzgFUwOaoIw&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=15
    - [ ] 6.046: Dynamic Programming (student recitation): https://www.youtube.com/watch?v=krZI60lKPek&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=12

- [ ] **Advanced Graph Processing**
    - [ ] Synchronous Distributed Algorithms: Symmetry-Breaking. Shortest-Paths Spanning Trees: https://www.youtube.com/watch?v=mUBmcbbJNf4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=27
    - [ ] Asynchronous Distributed Algorithms: Shortest-Paths Spanning Trees: https://www.youtube.com/watch?v=kQ-UQAzcnzA&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=28

- [ ] MIT **Probability** (mathy, and go slowly, which is good for mathy things):
    - [x] MIT 6.042J - Probability Introduction: https://www.youtube.com/watch?v=SmFwFdESMHI&index=18&list=PLB7540DEDD482705B
    - [x] MIT 6.042J - Conditional Probability: https://www.youtube.com/watch?v=E6FbvM-FGZ8&index=19&list=PLB7540DEDD482705B
    - [x] MIT 6.042J - Independence: https://www.youtube.com/watch?v=l1BCv3qqW4A&index=20&list=PLB7540DEDD482705B
    - [ ] MIT 6.042J - Random Variables: https://www.youtube.com/watch?v=MOfhhFaQdjw&list=PLB7540DEDD482705B&index=21
    - [ ] MIT 6.042J - Expectation I: https://www.youtube.com/watch?v=gGlMSe7uEkA&index=22&list=PLB7540DEDD482705B
    - [ ] MIT 6.042J - Expectation II: https://www.youtube.com/watch?v=oI9fMUqgfxY&index=23&list=PLB7540DEDD482705B
    - [ ] MIT 6.042J - Large Deviations: https://www.youtube.com/watch?v=q4mwO2qS2z4&index=24&list=PLB7540DEDD482705B
    - [ ] MIT 6.042J - Random Walks: https://www.youtube.com/watch?v=56iFMY8QW2k&list=PLB7540DEDD482705B&index=25

- [ ] Simonson: Approximation Algorithms: https://www.youtube.com/watch?v=oDniZCmNmNw&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=19

## Video Series

Sit back and enjoy. "netflix and skill" :P

- [ ] List of individual Dynamic Programming problems (each is short):
    - https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr

- [ ] x86 Architecture, Assembly, Applications (11 videos)
    - https://www.youtube.com/playlist?list=PL038BE01D3BAEFDB0

- [ ] MIT 18.06 Linear Algebra, Spring 2005 (35 videos):
    - https://www.youtube.com/playlist?list=PLE7DDD91010BC51F8

- [ ] Excellent - MIT Calculus Revisited: Single Variable Calculus:
    - https://www.youtube.com/playlist?list=PL3B08AE665AB9002A

- [ ] Computer Science 70, 001 - Spring 2015 - Discrete Mathematics and Probability Theory:
    - https://www.youtube.com/playlist?list=PL-XXv-cvA_iD8wQm8U0gG_Z1uHjImKXFy

- [ ] Discrete Mathematics (19 videos):
    - https://www.youtube.com/playlist?list=PL3o9D4Dl2FJ9q0_gtFXPh_H4POI5dK0yG

- [ ] CSE373 - Analysis of Algorithms (25 videos):
    - Skiena lectures from Algorithm Design Manual
    - https://www.youtube.com/watch?v=ZFjhkohHdAA&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=1

- [ ] UC Berkeley 61B (Spring 2014): Data Structures (25 videos):
    - https://www.youtube.com/watch?v=mFPmKGIrQs4&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd

- [ ] UC Berkeley 61B (Fall 2006): Data Structures (39 videos):
    - https://www.youtube.com/playlist?list=PL4BBB74C7D2A1049C

- [ ] UC Berkeley 61C: Machine Structures (26 videos):
    - https://www.youtube.com/watch?v=gJJeUFyuvvg&list=PL-XXv-cvA_iCl2-D-FS5mk0jFF6cYSJs_
    
- [ ] OOSE: Software Dev Using UML and Java (21 videos): 
    - https://www.youtube.com/playlist?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO

- [ ] UC Berkeley CS 152: Computer Architecture and Engineering (20 videos): 
    - https://www.youtube.com/watch?v=UH0QYvtP7Rk&index=20&list=PLkFD6_40KJIwEiwQx1dACXwh-2Fuo32qr

- [ ] MIT 6.004: Computation Structures (49 videos):
    - https://www.youtube.com/playlist?list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-

- [ ] MIT 6.006: Intro to Algorithms (47 videos):
    - https://www.youtube.com/watch?v=HtSuA80QTyo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&nohtml5=False

- [ ] MIT 6.033: Computer System Engineering (22 videos):
    - https://www.youtube.com/watch?v=zm2VP0kHl1M&list=PL6535748F59DCA484

- [ ] MIT 6.034 Artificial Intelligence, Fall 2010 (30 videos):
    - https://www.youtube.com/playlist?list=PLUl4u3cNGP63gFHB6xb-kVBiQHYe_4hSi

- [ ] MIT 6.042J: Mathematics for Computer Science, Fall 2010 (25 videos):
    - https://www.youtube.com/watch?v=L3LMbpZIKhQ&list=PLB7540DEDD482705B

- [ ] MIT 6.046: Design and Analysis of Algorithms (34 videos):
    - https://www.youtube.com/watch?v=2P-yW7LQr08&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp

- [ ] MIT 6.050J: Information and Entropy, Spring 2008 (19 videos)
    - https://www.youtube.com/watch?v=phxsQrZQupo&list=PL_2Bwul6T-A7OldmhGODImZL8KEVE38X7

- [ ] MIT 6.851: Advanced Data Structures (22 videos):
    - https://www.youtube.com/watch?v=T0yzrZL1py0&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=1

- [ ] MIT 6.854: Advanced Algorithms, Spring 2016 (24 videos):
    - https://www.youtube.com/playlist?list=PL6ogFv-ieghdoGKGg2Bik3Gl1glBTEu8c

- [ ] MIT 6.858 Computer Systems Security, Fall 2014 ():
    - https://www.youtube.com/watch?v=GqmQg-cszw4&index=1&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh

- [ ] Stanford: Programming Paradigms (17 videos)
    - Course on C and C++
    - https://www.youtube.com/watch?v=jTSvthW34GU&list=PLC0B8B318B7394B6F&nohtml5=False

- [ ] Introduction to Cryptography:
    - https://www.youtube.com/watch?v=2aHkqB2-46k&feature=youtu.be
    - more in series (not in order): https://www.youtube.com/channel/UC1usFRN4LCMcfIV7UjHNuQg
    
- [ ] Mining Massive Datasets - Stanford University (94 videos):
    - https://www.youtube.com/playlist?list=PLLssT5z_DsK9JDLcT8T62VtzwyW9LNepV

## Maybe

http://www.gainlo.co/ - Mock interviewers from big companies

---

---

## Once You've Got The Job

Congratulations!

- 10 things I wish I knew on my first day at Google:
    https://medium.com/@moonstorming/10-things-i-wish-i-knew-on-my-first-day-at-google-107581d87286#.livxn7clw

Keep learning.

You're never really done.
