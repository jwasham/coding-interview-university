# Google Interview University
*(formerly known as Project 9894)*

## What is it?

This is my multi-month study plan for going from web developer (self-taught, no CS degree) to
Google software engineer. Please don't let that offend you if you are a web developer. I'm just
speaking from my knowledge and experience.

    This long list has been extracted and expanded from Google's coaching notes,
    so these are the things you need to know. There are extra items I added at the
    bottom that may come up in the interview or be helpful in solving a problem.

Many items are from Steve Yegge's "[Get that job at Google](http://steve-yegge.blogspot.com/2008/03/get-that-job-at-google.html)"
and are reflected sometimes word-for-word in Google's coaching notes.

## Why use it?

I'm following this plan to prepare for my Google interview. I've been building the web, building
services, and launching startups since 1997. I have an economics degree, not a CS degree.  I've
been very successful in my career, but I want to work at Google. I want to progress into larger systems
and get a real understanding of computer systems, algorithmic efficiency, data structure performance,
low-level languages, and how it all works. And if you don't know any of it, Google won't hire you.

When I started this I didn't know a stack from a heap, didn't know Big-O anything, anything about trees, or how to
traverse a graph. If I had to code a sorting algorithm, I can tell ya it wouldn't have been very good.
Every data structure I've ever used was built in to the language, and I didn't know how they worked
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

More about Github flavored markdown: https://guides.github.com/features/mastering-markdown/#GitHub-flavored-markdown

    I have a friendly referral already to get my resume in at Google. Thanks JP.

## Get in a Googley Mood

Print out a "[future Googler](https://github.com/jwasham/project-9894/blob/master/future-googler.pdf)" sign (or two) and keep your eyes on the prize.

## Follow me

![John Washam](https://dng5l3qzreal6.cloudfront.net/2016/Jul/me_circle-1467757502022.jpg)

I'm on the journey. Follow along at [GoogleyAsHeck.com](https://googleyasheck.com/)

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

You need to know C, C++, or Java to do the coding part of the interview.
They will sometimes make an exception and let you use Python or some other language, but the language
must be mainstream and allow you write your code low-level enough to solve the problems.
You'll see some C, C++ learning included below.

There are a few books involved, see the bottom.

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
    - [x] K&R C book (ANSI C)
    - [x] Clang: https://www.youtube.com/watch?v=U3zCxnj2w8M
    - [x] GDB:
        - https://www.youtube.com/watch?v=USPvePv1uzE
        - https://www.youtube.com/watch?v=y5JmQItfFck
      - Valgrind: https://www.youtube.com/watch?v=fvTsFjDuag8
- [x] **C++**
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
    - I've already use Python quite a bit. This is just for review.
    - [x] https://www.youtube.com/watch?v=N4mEzFDjqtA

- [x] **Compilers**
    - [x] https://class.coursera.org/compilers-004/lecture/1
    - [x] https://class.coursera.org/compilers-004/lecture/2
    - [x] C++: https://www.youtube.com/watch?v=twodd1KFfGk
    - [x] Understanding Compiler Optimization (C++): https://www.youtube.com/watch?v=FnGCDLhaxKU


## The Daily Plan:

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


- [x] **Before you get started:**
    - The myth of the Genius Programmer: https://www.youtube.com/watch?v=0SARbwvhupQ
    - Google engineers are smart, but many have an insecurity that they aren't smart enough.

- [x] **Algorithmic complexity / Big O / Asymptotic analysis**
    - nothing to implement
    - Harvard CS50 - Asymptotic Notation: https://www.youtube.com/watch?v=iOq5kSKqeR4
    - Big O Notations (general quick tutorial) - https://www.youtube.com/watch?v=V6mKVRU1evU
    - Big O Notation (and Omega and Theta) - best mathematical explanation:
        - https://www.youtube.com/watch?v=ei-A_wy5Yxw&index=2&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN
    - Skiena:
        - video: https://www.youtube.com/watch?v=gSyDMtdPNpU&index=2&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b
        - slides: http://www3.cs.stonybrook.edu/~algorith/video-lectures/2007/lecture2.pdf
    - A Gentle Introduction to Algorithm Complexity Analysis: http://discrete.gr/complexity/
    - Orders of Growth: https://class.coursera.org/algorithmicthink1-004/lecture/59
    - Asymptotics: https://class.coursera.org/algorithmicthink1-004/lecture/61
    - UC Berkeley Big O: https://youtu.be/VIS4YDpuP98
    - UC Berkeley Big Omega: https://youtu.be/ca3e7UVmeUc
    - Amortized Analysis: https://www.youtube.com/watch?v=B3SpQZaAZP4&index=10&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN
    - Illustrating "Big O": https://class.coursera.org/algorithmicthink1-004/lecture/63
    - Cheat sheet: http://bigocheatsheet.com/

## Data Structures

- [x] **Arrays: (Implement an automatically resizing vector)**
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

- [x] **Linked Lists**
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

- [x] **Stack**
    - [x] https://www.coursera.org/learn/data-structures/lecture/UdKzQ/stacks
    - [x] https://www.lynda.com/Developer-Programming-Foundations-tutorials/Using-stacks-last-first-out/149042/177120-4.html
    - [x] Will not implement. Implementing with array is trivial.

- [x] **Queue**
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

- [x] **Hash table**
    - [x] https://www.lynda.com/Developer-Programming-Foundations-tutorials/Understanding-hash-functions/149042/177126-4.html
    - [x] https://www.lynda.com/Developer-Programming-Foundations-tutorials/Using-hash-tables/149042/177127-4.html
    - [x] https://www.lynda.com/Developer-Programming-Foundations-tutorials/Supporting-hashing/149042/177128-4.html
    - [x] https://www.lynda.com/Developer-Programming-Foundations-tutorials/Language-support-hash-tables/149042/177129-4.html
    - [x] https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/m7UuP/core-hash-tables
    - [x] https://www.youtube.com/watch?v=C4Kc8xzcA68
    - [x] https://www.coursera.org/learn/data-structures/home/week/3
    - [x] https://www.coursera.org/learn/data-structures/lecture/NYZZP/phone-book-problem
    - [x] distributed hash tables:
        - https://www.coursera.org/learn/data-structures/lecture/DvaIb/instant-uploads-and-storage-optimization-in-dropbox
        - https://www.coursera.org/learn/data-structures/lecture/tvH8H/distributed-hash-tables
    - [x] MIT:
        - https://www.youtube.com/watch?v=0M_kIqhwbFo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=8
        - https://www.youtube.com/watch?v=BRO7mVIFt08&index=9&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb
        - https://www.youtube.com/watch?v=rvdJDijO2Ro&index=10&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb
    - [x] implement with array using linear probing
        - hash(k, m) - m is size of hash table
        - add(key, value) - if key already exists, update value
        - exists(key)
        - get(key)
        - remove(key)

## More Knowledge

- [x] **Endianness**
    - [x] https://www.cs.umd.edu/class/sum2003/cmsc311/Notes/Data/endian.html
    - [x] https://www.youtube.com/watch?v=JrNF0KRAlyo
    - [x] https://www.youtube.com/watch?v=oBSuXP-1Tc0
        - Very technical talk for kernel devs. Don't worry if most is over your head.
        - The first half is enough.

- [x] **Binary search:**
    - [x] https://www.youtube.com/watch?v=D5SrAga1pno
    - [x] https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search
    - [x] detail: https://www.topcoder.com/community/data-science/data-science-tutorials/binary-search/
    - [x] Implement:
        - binary search (on sorted array of integers)
        - binary search using recursion

- [x] **Bitwise operations**
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

- [x] Notes & Background:
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

- [x] **Binary search trees: BSTs**
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

- [x] **Heap / Priority Queue / Binary Heap:**
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

- [x] **Tries**
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

- [x] **Balanced search trees**
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
        You would use 2-3 tree very rarely because its implementation involves different types of nodes. Instead, people use Red Black trees.
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

- [x] **N-ary (K-ary, M-ary) trees**
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

- [ ] Stanford lectures on sorting:
    - [x] https://www.youtube.com/watch?v=ENp00xylP7c&index=15&list=PLFE6E58F856038C69
    - [x] https://www.youtube.com/watch?v=y4M9IVgrVKo&index=16&list=PLFE6E58F856038C69
    - [ ] https://www.youtube.com/watch?v=Tp3HCeeqyDs&list=PLFE6E58F856038C69&index=17

- [ ] Steven Skiena lectures on sorting:
    - [ ] lecture begins at 27:40: https://www.youtube.com/watch?v=yLvp-pB8mak&index=8&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b
    - [ ] https://www.youtube.com/watch?v=q7K9otnzlfE&index=9&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b
    - [ ] https://www.youtube.com/watch?v=TvqIGu9Iupw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=10

- [x] Coursera: Algorithmic Thinking, Part II
    - [x] The sorting problem: https://www.coursera.org/learn/algorithmic-thinking-2/lecture/yZ9Dh/the-sorting-problem
    - [x] A simple quadratic algorithm: https://www.coursera.org/learn/algorithmic-thinking-2/lecture/aJcei/a-simple-quadratic-algorithm
    - [x] Illustrating MergeSort: https://www.coursera.org/learn/algorithmic-thinking-2/lecture/vymK5/illustrating-mergesort
    - [x] The recurrence for MergeSort: https://www.coursera.org/learn/algorithmic-thinking-2/lecture/mFGa0/the-recurrence-for-mergesort
    - [x] The Master Theorem and MergeSort efficiency: https://www.coursera.org/learn/algorithmic-thinking-2/lecture/Zb4R8/the-master-theorem-and-mergesort-efficiency

- [x] - Merge sort code: http://www.cs.yale.edu/homes/aspnes/classes/223/examples/sorting/mergesort.c
- [x] - Quick sort code: http://www.cs.yale.edu/homes/aspnes/classes/223/examples/randomization/quick.c

- [ ] Implement:
    - [ ] Mergesort: O(n log n) average and worst case
    - [ ] Quicksort O(n log n) average case
    - Selection sort and insertion sort are both O(n^2) average and worst case

- For curiosity - not required:
     - [ ] Radix Sort: http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#radixSort
     - [ ] Radix Sort, Counting Sort (linear time given constraints): https://www.youtube.com/watch?v=Nz1KZXbghj8&index=7&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb
     - [ ] Radix Sort: https://www.youtube.com/watch?v=xhr26ia4k38

## Graphs

    This area is sparse (no pun intended), and I'll be filling it in once I get here.

- Notes:
    - There are three basic ways to represent a graph in memory:
        - objects and pointers
        - matrix
        - adjacency list
    - Familiarize yourself with each representation and its pros & cons
    - BFS and DFS - know their computational complexity, their tradeoffs, and how to implement them in real code
    - If you get a chance, try to study up on fancier algorithms:
        - Dijkstra's algorithm
            - https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm
        - A*
            - https://en.wikipedia.org/wiki/A*_search_algorithm
    - When asked a question, look for a graph-based solution first, then move on if none.

- Graphs:
    - https://www.youtube.com/watch?v=ylWAB6CMYiY&list=PL4BBB74C7D2A1049C&index=27
    - https://www.youtube.com/watch?v=OiXxhDrFruw&index=11&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b

- Weighted graphs:
    - https://www.youtube.com/watch?v=zFbq8vOZ_0k&list=PL4BBB74C7D2A1049C&index=28

- Compute Strongly Connected Components
    - [ ] https://www.coursera.org/learn/algorithms-on-graphs/home/week/5

- Implement:
    - [ ] Dijkstra's algorithm
    - [ ] A*

- For Curiosity:
    - [ ] MIT Lecture: Speeding up Dijkstra: https://www.youtube.com/watch?v=CHvQ3q_gJ7E
        - covers Fibonacci heap, a more complicated but more efficient heap than binary heap

You'll get more graph practice in Skiena's book (see Books section below) and the interview books

## Even More Knowledge

    This area is sparse, and I'll be filling it in once I get here.

- [ ] Caches
    - LRU cache

- [ ] NP and NP Complete
    - Know about the most famous classes of NP-complete problems, such as traveling salesman and the knapsack problem,
        and be able to recognize them when an interviewer asks you them in disguise.
    - Know what NP-complete means.

- [ ] Recursion
    -  when it is appropriate to use it
    - [ ] Short Series on Recurrence Relations: https://www.youtube.com/playlist?list=PLSVu1-lON6LybCHQs8Io_EhyrEQ4b1xAF
    - [ ] Stanford lectures on recursion:
        - [ ] https://www.youtube.com/watch?v=gl3emqCuueQ&list=PLFE6E58F856038C69&index=8
        - [ ] https://www.youtube.com/watch?v=uFJhEPrbycQ&list=PLFE6E58F856038C69&index=9

- [ ] open-ended problems
    - manipulate strings
    - manipulate patterns

- [ ] Combinatorics (n choose k)

- [ ] Probability
    - https://www.youtube.com/watch?v=sZkAAk9Wwa4
    - https://www.youtube.com/watch?v=dNaJg-mLobQ

- [ ] Dynamic Programming
    - [ ] Dynamic Programming & Advanced DP: https://www.youtube.com/watch?v=Tw1k46ywN6E&index=14&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp
    - [ ] Dynamic Programming (student recitation): https://www.youtube.com/watch?v=krZI60lKPek&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=12

- [ ] Scheduling

- [ ] Weighted random sampling

- [ ] Implement system routines

- [ ] Design patterns:
    - description:
        - https://www.lynda.com/Developer-Programming-Foundations-tutorials/Foundations-Programming-Design-Patterns/135365-2.html
        - Patterns: https://www.youtube.com/playlist?list=PLF206E906175C7E07
        - UML: https://www.youtube.com/playlist?list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc
    - [ ] strategy
    - [ ] singleton
    - [ ] adapter
    - [ ] prototype
    - [ ] decorator
    - [ ] visitor
    - [ ] factory

- [ ] **Operating Systems (25 videos):**
    - https://www.youtube.com/watch?v=-KWd_eQYLwY&index=2&list=PL-XXv-cvA_iBDyz-ba4yDskqMDY6A1w_c
    - https://www.quora.com/What-is-the-difference-between-a-process-and-a-thread
    Covers:
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
        - Thread resource needs (shares above with other threads in same process but each has its own pc, stack counter, registers and stack)
        - Forking is really copy on write (read-only) until the new process writes to memory, then it does a full copy.
        - Context switching
            - How context switching is initiated by the operating system and underlying hardware
    - [ ] threads in C++:
        https://www.youtube.com/playlist?list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M
        - stopped here: https://www.youtube.com/watch?v=_N0B5ua7oN8&list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M&index=4

- [ ] **Data handling:**
    - see scalability options below
    - Distill large data sets to single values
    - Transform one data set to another
    - Handling obscenely large amounts of data

- [ ] **System design**
    - https://www.quora.com/How-do-I-prepare-to-answer-design-questions-in-a-technical-interview?redirected_qid=1500023
    - features sets
    - interfaces
    - class hierarchies
    - designing a system under certain constraints
    - simplicity and robustness
    - tradeoffs
    - performance analysis and optimization

- [ ] **Familiarize yourself with a unix-based code editor: emacs & vi(m)**
    - suggested by Yegge, from an old Amazon recruiting post
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

- [ ] **Be able to use unix command line tools:**
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

- [ ] **Testing**
    - how unit testing works
    - what are mock objects
    - what is integration testing
    - what is dependency injection

## Books

#### Mentioned in Google Coaching:

**Read and do exercises:**

- [ ] The Algorithm Design Manual (Skiena)
    - Book (can rent on kindle):
        - http://www.amazon.com/Algorithm-Design-Manual-Steven-Skiena/dp/1849967202
    - Half.com is a great resource for textbooks at good prices.
    - Answers:
        - http://www.algorithm.cs.sunysb.edu/algowiki/index.php/The_Algorithms_Design_Manual_(Second_Edition)

    Once you've understood everything in the daily plan, and read and done exercises from the the books above,
    read and do exercises from the books below. Then move to coding challenges (further down below)

**Read first:**
- [ ] Programming Interviews Exposed: Secrets to Landing Your Next Job, 2nd Edition:
    http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html

**Read second (recommended by many, but not in Google coaching docs):**
- [ ] Cracking the Coding Interview, 6th Edition:
    - http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/
    - If you see people reference "The Google Resume", it was a book replaced by "Cracking the Coding Interview".

#### Additional books (not suggested by Google but I added because I needed the background knowledge):

- [x] C Programming Language, Vol 2

- [x] C++ Primer Plus, 6th Edition

- [ ] The Unix Programming Environment
    - http://product.half.ebay.com/The-UNIX-Programming-Environment-by-Brian-W-Kernighan-and-Rob-Pike-1983-Other/54385&tg=info

- [ ] Introduction to Algorithms
    - https://www.amazon.com/Introduction-Algorithms-3rd-MIT-Press/dp/0262033844
    - Half.com is a great resource for textbooks at good prices.

- [ ] Programming Pearls:
    - http://www.amazon.com/Programming-Pearls-2nd-Jon-Bentley/dp/0201657880

- [ ] Algorithms and Programming: Problems and Solutions:
    http://www.amazon.com/Algorithms-Programming-Solutions-Alexander-Shen/dp/0817638474

## About Google

- [ ] How Search Works:
    - [ ] https://www.google.com/insidesearch/howsearchworks/thestory/
    - [ ] https://www.youtube.com/watch?v=BNHR6IQJGZs
    - [ ] https://www.google.com/insidesearch/howsearchworks/
    - [ ] Series:
        - https://backchannel.com/how-google-search-dealt-with-mobile-33bc09852dc9
        - https://backchannel.com/googles-secret-study-to-find-out-our-needs-eba8700263bf
        - https://backchannel.com/google-search-will-be-your-next-brain-5207c26e4523
        - https://backchannel.com/the-deep-mind-of-demis-hassabis-156112890d8a

## Articles

- https://www.topcoder.com/community/data-science/data-science-tutorials/the-importance-of-algorithms/
- http://highscalability.com/blog/2016/4/4/how-to-remove-duplicates-in-a-large-dataset-reducing-memory.html
- http://highscalability.com/blog/2016/3/23/what-does-etsys-architecture-look-like-today.html
- http://highscalability.com/blog/2016/3/21/to-compress-or-not-to-compress-that-was-ubers-question.html
- http://highscalability.com/blog/2016/3/3/asyncio-tarantool-queue-get-in-the-queue.html
- http://highscalability.com/blog/2016/2/25/when-should-approximate-query-processing-be-used.html
- http://highscalability.com/blog/2016/2/23/googles-transition-from-single-datacenter-to-failover-to-a-n.html
- http://highscalability.com/blog/2016/2/15/egnyte-architecture-lessons-learned-in-building-and-scaling.html
- http://highscalability.com/blog/2016/2/1/a-patreon-architecture-short.html
- http://highscalability.com/blog/2016/1/27/tinder-how-does-one-of-the-largest-recommendation-engines-de.html
- http://highscalability.com/blog/2016/1/25/design-of-a-modern-cache.html
- http://highscalability.com/blog/2016/1/13/live-video-streaming-at-facebook-scale.html
- http://highscalability.com/blog/2016/1/11/a-beginners-guide-to-scaling-to-11-million-users-on-amazons.html
- http://highscalability.com/blog/2015/12/16/how-does-the-use-of-docker-effect-latency.html
- http://highscalability.com/blog/2015/12/14/does-amp-counter-an-existential-threat-to-google.html
- http://highscalability.com/blog/2015/11/9/a-360-degree-view-of-the-entire-netflix-stack.html

## Papers:

Computing Weak Consistency in Polynomial Time
    - http://dl.acm.org/ft_gateway.cfm?id=2767407&ftid=1607485&dwn=1&CFID=627637486&CFTOKEN=49290244

How Developers Search for Code: A Case Study
    - http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43835.pdf

Borg, Omega, and Kubernetes
    - http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44843.pdf

Continuous Pipelines at Google
    - http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43790.pdf

AddressSanitizer: A Fast Address Sanity Checker
    - http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/37752.pdf

## Coding exercises/challenges:

Once you've learned your brains out, put those brains to work.
Take coding challenges every day, as many as you can.

- https://courses.csail.mit.edu/iap/interview/materials.php

The Best:
- LeetCode: https://leetcode.com/
- Project Euler: https://projecteuler.net/index.php?section=problems
- TopCoder: https://www.topcoder.com/

More:
- HackerRank: https://www.hackerrank.com/
- Codility: https://codility.com/programmers/
- InterviewCake: https://www.interviewcake.com/
- InterviewBit: https://www.interviewbit.com/invite/icjf


## Once you're closer to the interview:

- [ ] Cracking The Coding Interview Set 2:
    - https://www.youtube.com/watch?v=4NIb9l3imAo
    - https://www.youtube.com/watch?v=Eg5-tdAwclo
    - https://www.youtube.com/watch?v=1fqxMuPmGak

## Your Resume

- http://steve-yegge.blogspot.co.uk/2007_09_01_archive.html
- Great stuff at the back of Cracking The Coding Interview


## Be thinking of for when the interview comes:

- Think of about 20 interview questions you'll get, along the lines of the items below:
- have 2-3 answers for each
- Have a story, not just data, about something you accomplished

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

### Have questions for the interviewer.

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

## Additional Learnings (not required)

    Everything below is my recommendation, not Google's, and you may not have enough time to
    learn, watch or read them all. That's ok. I may not either.

- [ ] **Skip lists**
    - "These are somewhat of a cult data structure" - Skiena
    - [ ] MIT: Randomization: Skip Lists: https://www.youtube.com/watch?v=2g9OSRKJuzM&index=10&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp

- [ ] **Disjoint Sets:**
    - [ ] https://en.wikipedia.org/wiki/Disjoint-set_data_structure
    - [ ] UCB 61B - Disjoint Sets; Sorting & selection: https://www.youtube.com/watch?v=MAEGXTwmUsI&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&index=21
    - [ ] https://www.coursera.org/learn/data-structures/lecture/JssSY/overview
    - [ ] https://www.coursera.org/learn/data-structures/lecture/EM5D0/naive-implementations
    - [ ] https://www.coursera.org/learn/data-structures/lecture/Mxu0w/trees
    - [ ] https://www.coursera.org/learn/data-structures/lecture/qb4c2/union-by-rank
    - [ ] https://www.coursera.org/learn/data-structures/lecture/Q9CVI/path-compression
    - [ ] https://www.coursera.org/learn/data-structures/lecture/GQQLN/analysis-optional

- van Emde Boas Trees
    - [ ] Divide & Conquer: van Emde Boas Trees: https://www.youtube.com/watch?v=hmReJCupbNU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=6

- [ ] **Treap**
    - [ ] ?

- [x] **Parity & Hamming Code**
    - [x] Parity:
        - https://www.youtube.com/watch?v=DdMcAUlxh1M
    - [x] Hamming Code:
        - Error detection: https://www.youtube.com/watch?v=1A_NcXxdoCc
        - Error correction: https://www.youtube.com/watch?v=JAMLuxdHH8o
    - [x] Error Checking:
        - https://www.youtube.com/watch?v=wbH2VxzmoZk

- [ ] Computer Security:
    - MIT (23 videos): https://www.youtube.com/playlist?list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh

- [ ] Information theory:
    - Markov processes:
        - https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/waxgx/core-markov-text-generation
        - https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/gZhiC/core-implementing-markov-text-generation
    - https://www.khanacademy.org/computing/computer-science/informationtheory/moderninfotheory/v/symbol-rate-information-theory
    - includes Markov chain

- [ ] Bloom Filter
    - https://www.youtube.com/watch?v=-SuTGoFYjZs
    - http://blog.michaelschmatz.com/2016/04/11/how-to-write-a-bloom-filter-cpp/

- [ ] Fast Fourier Transform
    - http://jakevdp.github.io/blog/2013/08/28/understanding-the-fft/

- [ ] Machine Learning:
    - Why ML?
        - [x] https://backchannel.com/how-google-is-remaking-itself-as-a-machine-learning-first-company-ada63defcb70
    - [x] great course (Stanford): https://www.coursera.org/learn/machine-learning
    - [ ] Google course on Udacity: https://www.udacity.com/course/deep-learning--ud730
    - https://www.youtube.com/watch?list=PLOU2XLYxmsIIuiBfYad6rFYQU_jL2ryal&v=cSKfRcEDGUs&app=desktop
    - http://www.analyticsvidhya.com/blog/2016/04/neural-networks-python-theano/
    - http://www.dataschool.io/
    - [ ] Vector calculus

- [ ] Parallel Programming:
    - https://www.coursera.org/learn/parprog1/home/week/1

- [ ] String search algorithms:
    Knuth-Morris-Pratt (KMP):
        - https://en.wikipedia.org/wiki/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm
        - https://www.youtube.com/watch?v=2ogqPWJSftE
    Boyer–Moore string search algorithm
        - https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_string_search_algorithm
        - https://www.youtube.com/watch?v=xYBM0_dChRE

## Videos

Sit back and enjoy. "netflix and skill" :P

- [ ] Scalability:
    - https://www.youtube.com/watch?v=9nWyWwY2Onc
    - https://www.youtube.com/watch?v=H4vMcD7zKM0

- [ ] CSE373 - Analysis of Algorithms (25 videos):
    - Skiena lectures from Algorithm Design Manual
    - https://www.youtube.com/watch?v=ZFjhkohHdAA&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=1

- [ ] UC Berkeley 61B
    - https://www.youtube.com/playlist?list=PL4BBB74C7D2A1049C

- [ ] MIT 6.042: Math for CS (25 videos):
    - https://www.youtube.com/watch?v=L3LMbpZIKhQ&list=PLB7540DEDD482705B

- [ ] MIT 6.006: Intro to Algorithms (47 videos):
    - https://www.youtube.com/watch?v=HtSuA80QTyo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&nohtml5=False

- [ ] MIT 6.033: Computer System Engineering (22 videos):
    - https://www.youtube.com/watch?v=zm2VP0kHl1M&list=PL6535748F59DCA484

- [ ] MIT 6.046: Design and Analysis of Algorithms (34 videos):
    - https://www.youtube.com/watch?v=2P-yW7LQr08&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp

- [ ] MIT 6.858 Computer Systems Security, Fall 2014 ():
    - https://www.youtube.com/watch?v=GqmQg-cszw4&index=1&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh

- [ ] MIT 6.851: Advanced Data Structures (22 videos):
    - https://www.youtube.com/watch?v=T0yzrZL1py0&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=1

- [ ] Stanford: Programming Paradigms (17 videos)
    - Course on C and C++
    - https://www.youtube.com/watch?v=jTSvthW34GU&list=PLC0B8B318B7394B6F&nohtml5=False

- [ ] MIT 6.050J Information and Entropy, Spring 2008 ()
    - https://www.youtube.com/watch?v=phxsQrZQupo&list=PL_2Bwul6T-A7OldmhGODImZL8KEVE38X7

- [ ] Introduction to Cryptography:
    - https://www.youtube.com/watch?v=2aHkqB2-46k&feature=youtu.be

## Maybe

http://www.gainlo.co/ - Mock interviewers from big companies

## Code References

For review questions in C book:
    https://github.com/lekkas/c-algorithms

## Once You've Got The Job

    This is mainly for me.

- [ ] Books:
    - [ ] Clean Code
    - [ ] Code Complete
    - [ ] How to Prove It: A Structured Approach, 2nd Edition
    - [ ] Unix Power Tools, Third Edition

- [x] C++ Seasoning:
    - https://www.youtube.com/watch?v=qH6sSOr-yk8

- [x] Better Code: Data Structures:
    - https://www.youtube.com/watch?v=sWgDk-o-6ZE

- [ ] C++ Talks at CPPCon:
    - https://www.youtube.com/watch?v=hEx5DNLWGgA&index=2&list=PLHTh1InhhwT75gykhs7pqcR_uSiG601oh

- [ ] MIT CMS.611J Creating Video Games, Fall 2014
    - https://www.youtube.com/watch?v=pfDfriSjFbY&list=PLUl4u3cNGP61V4W6yRm1Am5zI94m33dXk

- [ ] Compilers Course:
    - https://class.coursera.org/compilers-004/lecture

- [ ] Computer and processor architecture:
    - https://class.coursera.org/comparch-003/lecture

- [ ] Long series of C++ videos:
    - https://www.youtube.com/playlist?list=PLfVsf4Bjg79Cu5MYkyJ-u4SyQmMhFeC1C

## Done

You're never really done. Keep learning.