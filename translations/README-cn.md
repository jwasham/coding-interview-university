# Coding Interview University

原先我为了成为一个软件工程师而建立这份简单的学习主题清单， 但这份清单随着时间的推移而膨胀成今天这样。在做完这份清单上的每个目标后，[我成为了 Amazon 的软件开发工程师](https://startupnextdoor.com/ive-been-acquired-by-amazon/?src=ciu)! 你或许不需要像我一样学习这么多。但是，让你成为一位称职工程师所需要的知识都在这里了。

我每天自学8~12小时，这样持续了好几个月。这是我的故事：[为什么我为了 Google 面试而自学了8个月](https://medium.freecodecamp.org/why-i-studied-full-time-for-8-months-for-a-google-interview-cc662ce9bb13)。

在这份清单内的主题会让你拥有足够的知识去面对几乎每家软件公司的技术面试，包括科技巨头：Amazon、Facebook、Google，以及 Microsoft。

祝你好运!

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

## 这是？

这是我为了从 web 开发者（自学、非计算机科学学位）蜕变至 Google 软件工程师所制定的计划，其内容历时数月。

![白板上编程 ———— 来自 HBO 频道的剧集，“硅谷”](https://d3j2pkmjtin6ou.cloudfront.net/coding-at-the-whiteboard-silicon-valley.png)

这份清单适用于 **新手软件工程师**，或者想从软件/网站开发转向软件工程（需要计算机科学知识）的人员。如果你有多年的经验，并且声称拥有多年的软件工程经验，并且期待一次更艰难的面试。

如果你具有多年的软件/网页开发经验，请注意，大型软件公司（例如 Google，Amazon，Facebook 和 Microsoft）将软件工程视为不同于软件/网页开发，并且它们需要计算机科学知识。

如果你想成为可靠性工程师或运维工程师，请从可选列表（网络，安全）中学习更多。

---

## 目录

- [这是？](#这是)
- [为何要用到它？](#为何要用到它)
- [如何使用它](#如何使用它)
- [不要觉得自己不够聪明](#不要觉得自己不够聪明)
- [相关视频资源](#相关视频资源)
- [面试过程 & 通用的面试准备](#面试过程--通用的面试准备)
- [为你的面试选择一种语言](#为你的面试选择一种语言)
- [书单](#书单)
- [在你开始之前](#在你开始之前)
- [没有包含的内容](#没有包含的内容)
- [必备知识](#必备知识)
- [日常计划](#日常计划)
- [算法复杂度 / Big-O / 渐进分析法](#算法复杂度--big-o--渐进分析法)
- [数据结构](#数据结构)
    - [数组（Arrays）](#数组arrays)
    - [链表（Linked Lists）](#链表linked-lists)
    - [堆栈（Stack）](#堆栈stack)
    - [队列（Queue）](#队列queue)
    - [哈希表（Hash table）](#哈希表hash-table)
- [更多的知识](#更多的知识)
    - [二分查找（Binary search）](#二分查找binary-search)
    - [按位运算（Bitwise operations）](#按位运算bitwise-operations)
- [树（Trees）](#树trees)
    - [树 —— 笔记 & 背景](#树--笔记--背景)
    - [二叉查找树（Binary search trees）：BSTs](#二叉查找树binary-search-treesbsts)
    - [堆（Heap） / 优先级队列（Priority Queue） / 二叉堆（Binary Heap）](#堆heap--优先级队列priority-queue--二叉堆binary-heap)
    - [平衡查找树（Balanced search trees）（基本概念，非细节）](#平衡查找树balanced-search-trees)
    - 遍历：前序、中序、后序、BFS、DFS
- [排序](#排序sorting)
    - 选择排序（selection）
    - 插入排序（insertion）
    - 堆排序（heapsort）
    - 快速排序（quicksort）
    - 归并排序（merge sort）
- [图（Graphs）](#图graphs)
    - 有向图（directed）
    - 无向图（undirected）
    - 邻接矩阵（adjacency matrix）
    - 邻接表（adjacency list）
    - 遍历：广度优先(BFS), 深度优先(DFS)
- [更多知识](#更多知识)
    - [递归](#递归recursion)
    - [动态规划](#动态规划dynamic-programming)
    - [面向对象编程](#面向对象编程)
    - [设计模式](#设计模式)
    - [组合 & 概率](#组合combinatorics-n-中选-k-个--概率probability)
    - [NP, NP-完全和近似算法](#np-np-完全和近似算法)
    - [缓存](#缓存cache)
    - [进程和线程](#进程processe和线程thread)
    - [测试](#测试)
    - [调度](#调度)
    - [字符串搜索和操作](#字符串搜索和操作)
    - [字典树（Tries）](#字典树tries)
    - [浮点数](#浮点数)
    - [Unicode](#unicode)
    - [字节顺序](#字节序Endianness)
    - [网络](#网络视频)
- [系统设计、可伸缩性、数据处理](#系统设计可伸缩性数据处理)（如果你有4+年经验）
- [终面](#终面)
- [编程问题练习](#编程问题练习)
- [编程练习和挑战](#编程练习和挑战)
- [当你临近面试时](#当你临近面试时)
- [你的简历](#你的简历)
- [当面试来临的时候](#当面试来临的时候)
- [问面试官的问题](#问面试官的问题)
- [当你获得了梦想的职位](#当你获得了梦想的职位)

---------------- 下面的内容是可选的 ----------------

- [额外书籍](#额外书籍)
- [附加学习](#附加学习)
    - [编译器](#编译器)
    - [Emacs and vi(m)](#emacs-and-vim)
    - [Unix 命令行工具](#unix-命令行工具)
    - [信息论](#信息论-视频)
    - [奇偶校验位 & 汉明码 (视频)](#奇偶校验位--汉明码-视频)
    - [系统熵值](#系统熵值Entropy)
    - [密码学](#密码学)
    - [压缩](#压缩)
    - [计算机安全](#计算机安全)
    - [垃圾回收](#垃圾回收)
    - [并行编程](#并行编程)
    - [消息传递，序列化和队列化的系统](#消息传递序列化和队列系统)
    - [A*搜索算法](#A搜索算法)
    - [快速傅里叶变换](#快速傅里叶变换)
    - [布隆过滤器](#布隆过滤器)
    - [HyperLogLog](#HyperLogLog)
    - [局部敏感哈希](#局部敏感哈希)
    - [van Emde Boas 树](#van-emde-boas-树)
    - [增强数据结构](#增强数据结构)
    - [平衡查找树](#平衡查找树balanced-search-trees)
        - AVL 树
        - 伸缩树（Splay tree）
        - 红黑树
        - 2-3 查找树
        - 2-3-4 树(也称 2-4 树)
        - N-ary (K-ary, M-ary)树
        - B 树
    - [k-D 树](#k-D树)
    - [跳表](#跳表)
    - [网络流](#网络流)
    - [不相交集 & 联合查找](#不相交集--联合查找)
    - [快速处理的数学](#快速处理的数学)
    - [树堆 (Treap)](#树堆-treap)
    - [线性规划](#线性规划linear-programming视频)
    - [几何：凸包（Geometry, Convex hull）](#几何凸包geometry-convex-hull视频)
    - [离散数学](#离散数学)
    - [机器学习](#机器学习machine-learning)
- [一些主题的额外内容](#一些主题的额外内容)
- [视频系列](#视频系列)
- [计算机科学课程](#计算机科学课程)
- [论文](#论文)

---

## 为何要用到它？

当我开始这个项目时，我不知道堆和栈的区别，不了解时间复杂度（Big-O）、树，或如何去遍历一个图。如果非要我去编写一个排序算法的话，我只能说我所写的肯定是很糟糕。一直以来，我所用的任何数据结构都是内建于编程语言当中。至于它们在背后是如何运作，对此我一概不清楚。此外，以前的我并不需要对内存进行管理，最多就只是在一个正在执行的进程抛出了“内存不足”的错误后，才会去找解决方法。在我的编程生涯中，虽然我有用过多维数组，也用过关联数组成千上万次，但我从来没有自己实现过数据结构。

这是一个漫长的计划，以至于花费了我数月的时间。若你早已熟悉大部分的知识，那么也许能节省大量的时间。

## 如何使用它

下面所有的东西都只是一个概述。因此，你需要由上而下逐一地去处理它。

在学习过程中，我使用 GitHub 特殊语法的 markdown 去检查计划的进展，包括使用包含任务进度的任务列表。

**创建一个新的分支，以便你可以像这样去勾选计划的进展：直接往方括号中填写一个字符 x 即可：[x]**。

    Fork一个分支，并跟随以下的指令

通过单击 Fork 按钮来 fork GitHub 仓库：[jwasham/coding-interview-university](https://github.com/jwasham/coding-interview-university)

    克隆项目到本地

`git checkout -b progress`

`git remote add jwasham https://github.com/jwasham/coding-interview-university`

`git fetch --all`

    在你完成了一些修改后，在框框中打 x

`git add .`

`git commit -m "Marked x"`

`git rebase jwasham/main`

`git push --set-upstream origin progress`

`git push --force`

[更多关于 Github-flavored markdown 的详情](https://guides.github.com/features/mastering-markdown/#GitHub-flavored-markdown)


## 不要觉得自己不够聪明

- 大多数成功的软件工程师都非常聪明，但他们都有一种觉得自己不够聪明的不安全感。
- [天才程序员的神话](https://www.youtube.com/watch?v=0SARbwvhupQ)
- [不要单打独斗：面对技术中的隐形怪物](https://www.youtube.com/watch?v=1i8ylq4j_EY)

## 相关视频资源

部分视频只能通过在 Coursera 或者 Edx 课程上注册登录才能观看。这些视频被称为网络公开课程（MOOC）。有时候某些课程需要等待好几个月才能获取，这期间你无法观看这些课程的影片。

    很感谢你能帮我把网络公开课程的视频链接转换成公开的，可持续访问的视频源，比如 YouTube 视频，以代替那些在线课程的视频。此外，一些大学的讲座视频也是我所青睐的。

## 面试过程 & 通用的面试准备

- [ ] [ABC：不要停止编程（Always Be Coding）](https://medium.com/always-be-coding/abc-always-be-coding-d5f8051afce2#.4heg8zvm4)
- [ ] [白板编程（Whiteboarding）](https://medium.com/@dpup/whiteboarding-4df873dbba2e#.hf6jn45g1)
- [ ] [揭秘技术招聘](https://www.youtube.com/watch?v=N233T0epWTs)
- [ ] 如何在科技四强企业中获得一份工作：
    - [ ] [“如何在科技四强企业中获得一份工作 —— Amazon、Facebook、Google 和 Microsoft”（视频）](https://www.youtube.com/watch?v=YJZCUhxNCv8)
- [ ] 解密开发类面试第一集：
    - [ ] [Gayle L McDowell —— 解密开发类面试（视频）](https://www.youtube.com/watch?v=rEJzOhC5ZtQ)
    - [ ] [解密开发类面试 —— 作者 Gayle Laakmann McDowell（视频）](https://www.youtube.com/watch?v=aClxtDcdpsQ)
- [ ] 解密 Facebook 编码面试：
    - [方法](https://www.youtube.com/watch?v=wCl9kvQGHPI)
    - [问题演练](https://www.youtube.com/watch?v=4UWDyJq8jZg)
- [ ] 准备课程：
    - [ ] [软件工程师面试发布（收费课程）](https://www.udemy.com/software-engineer-interview-unleashed)：
        - 从前 Google 面试官身上学习如何准备自己，让自己能够应付软件工程师的面试。
    - [ ] [Python 数据结构，算法和面试（收费课程）](https://www.udemy.com/python-for-data-structures-algorithms-and-interviews/)：
        - Python 面试准备课程，内容涉及数据结构，算法，模拟面试等。
    - [ ] [Python 的数据结构和算法简介（Udacity 免费课程）](https://www.udacity.com/course/data-structures-and-algorithms-in-python--ud513)：
        - 免费的 Python 数据结构和算法课程。
    - [ ] [数据结构和算法纳米学位！（Udacity 收费纳米学位）](https://www.udacity.com/course/data-structures-and-algorithms-nanodegree--nd256)：
        - 获得超过100种数据结构和算法练习以及指导的动手练习，专门导师帮助你在面试和职场中做好准备。
    - [ ] [探究行为面试（Educative 免费课程）](https://www.educative.io/courses/grokking-the-behavioral-interview)：
        - 很多时候，不是你的技术能力会阻碍你获得理想的工作，而是你在行为面试中的表现。

## 为你的面试选择一种语言

你可以在编程这一环节，使用一种自己用起来较为舒适的语言去完成编程，但对于大公司，你只有三种固定的选择：

- C++
- Java
- Python

你也可以使用下面两种编程语言，但可能会有某些限制，你需要事先查明：

- JavaScript
- Ruby

我之前写过一篇关于在面试时选择编程语言的文章：[为编程面试选择一种语言](https://startupnextdoor.com/important-pick-one-language-for-the-coding-interview/)。

你需要对你所选择的语言感到非常舒适且足够了解。

更多关于语言选择的阅读：

- http://www.byte-by-byte.com/choose-the-right-language-for-your-coding-interview/
- http://blog.codingforinterviews.com/best-programming-language-jobs/

[在此查看相关语言的资源](../programming-language-resources.md)

由于我正在学习C、C++ 和 Python，因此在下面你会看到部分关于它们的学习资料。相关书籍请看文章的底部。

## 书单

为了节省你的时间，以下是比我使用过的更缩减的书单。

### 面试准备

- [ ] [Programming Interviews Exposed: Coding Your Way Through the Interview, 4th Edition](https://www.amazon.com/Programming-Interviews-Exposed-Through-Interview/dp/111941847X/)
    - 附有 C++ 和 Java 解答
    - 这是在练习 Cracking the Coding Interview 之前一个很好的热身
    - 不太困难，大多数问题可能比你在面试中看到的要容易（根据我的阅读）
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - 附有 Java 答案

### 如果你有额外的时间：

选择以下之一：

- [ ] [Elements of Programming Interviews (C++ version)](https://www.amazon.com/Elements-Programming-Interviews-Insiders-Guide/dp/1479274836)
- [ ] [Elements of Programming Interviews in Python](https://www.amazon.com/Elements-Programming-Interviews-Python-Insiders/dp/1537713949/)
- [ ] Elements of Programming Interviews (Java version)
    - [书](https://www.amazon.com/Elements-Programming-Interviews-Java-Insiders/dp/1517435803/)
    - [配套项目──书中每个问题的方法和测试用例](https://github.com/gardncl/elements-of-programming-interviews)

### 编程语言精选

**你需要选择面试语言（请参见上文）。**

这是我按语言给出的建议。我没有所有语言的资源，欢迎贡献。

如果你通读其中之一，你应该具备了开始解决编程问题所需的所有数据结构和算法知识。除非你需要复习，否则**你可以跳过此项目中的所有视频讲座**。

[额外编程语言的精选资源](https://github.com/jwasham/coding-interview-university/blob/main/programming-language-resources.md)

### C++

我没有读过这两本书，但是它们颇受好评，作者是 Sedgewick，他非常厉害。

- [ ] [Algorithms in C++, Parts 1-4: Fundamentals, Data Structure, Sorting, Searching](https://www.amazon.com/Algorithms-Parts-1-4-Fundamentals-Structure/dp/0201350882/)
- [ ] [Algorithms in C++ Part 5: Graph Algorithms](https://www.amazon.com/Algorithms-Part-Graph-3rd-Pt-5/dp/0201361183/)
- [ ] [Open Data Structures in C++](https://opendatastructures.org/ods-cpp.pdf)
    - 丰富而详细的数据结构和算法集合
    - 非常适合初学者

如果你有更好的 C++ 书籍，请告诉我。我正在搜集全面的资源。

### Java

- [ ] [算法（Sedgewick 和 Wayne）](https://www.amazon.com/Algorithms-4th-Robert-Sedgewick/dp/032157351X/)
    - 包含课程内容（和Sedgewick！）的视频
        - [第一部分](https://www.coursera.org/learn/algorithms-part1)
        - [第二部分](https://www.coursera.org/learn/algorithms-part2)

或者：

- [ ] [Java 数据结构和算法](https://www.amazon.com/Data-Structures-Algorithms-Michael-Goodrich/dp/1118771338/)
    - 作者：Goodrich、Tamassia、Goldwasser
    - 用作 UC Berkeley 的 CS 入门课程的可选教材
    - 请参阅下面有关 Python 版本的我的读书报告，这本书涵盖了相同的主题

### Python

- [ ] [Python数据结构和算法](https://www.amazon.com/Structures-Algorithms-Python-Michael-Goodrich/dp/1118290275/)
    - 作者：Goodrich、Tamassia、Goldwasser
    - 我非常喜爱这本书，它包含了所有东西
    - 很 Python 的代码
    - 我的读书报告：[startupnextdoor.com/book-report-data-structures-and-algorithms-in-python](https://startupnextdoor.com/book-report-data-structures-and-algorithms-in-python/)
- [ ] [Open Data Structures in Python](https://opendatastructures.org/ods-python.pdf)

## 在你开始之前

该列表已经持续更新了很长的一段时间，所以，我们的确很容易会对其失去控制。

这里列出了一些我所犯过的错误，希望你不要重滔覆辙。

### 1. 你不可能把所有的东西都记住

就算我观看了数小时的视频，并记录了大量的笔记，几个月后的我，仍然会忘却其中大部分的东西。所以，我花了3天翻阅我的笔记，并制作成抽认卡（flashcard）帮助我复习：

请阅读以下的文章以免重蹈覆辙:

[记住计算机科学知识](https://startupnextdoor.com/retaining-computer-science-knowledge/)。

有人推荐给我的课程（但我还沒看过）：[学习如何学习](https://www.coursera.org/learn/learning-how-to-learn)。

### 2. 使用抽认卡

为了解决善忘的问题，我制作了一个抽认卡的网页，用于添加两种抽认卡：一般的及带有代码的。每种卡都会有不同的格式设计。

而且，我还以移动设备为先去设计这些网页，以使得在任何地方，我都能通过我的手机及平板去回顾知识。

你也可以免费制作属于你自己的抽认卡网站：

- [抽认卡页面的代码仓库](https://github.com/jwasham/computer-science-flash-cards)
- [我的抽认卡数据库 ── 旧 1200 张](https://github.com/jwasham/computer-science-flash-cards/blob/main/cards-jwasham.db)
- [我的抽认卡数据库 ── 新 1800 张](https://github.com/jwasham/computer-science-flash-cards/blob/main/cards-jwasham-extreme.db)

有一点需要记住的是，我做事有点过头，以至于卡片都覆盖到所有的东西上，从汇编语言和 Python 的细枝末节，到机器学习和统计都被覆盖到卡片上。而这种做法，对于要求来说是多余的。

**在抽认卡上做笔记：** 若你第一次发现你知道问题的答案时，先不要急着把其标注成“已知”。反复复习这张抽认卡，直到每次都能答对后才是真正学会了这个问题。反复地问答可帮助你深刻记住该知识点。

这里有个替代我抽认卡的网站 [Anki](http://ankisrs.net/)，很多人向我推荐过它。这个网站用同一个字卡重复出现的方式让你牢牢地记住知识。这个网站非常容易使用，支持多平台，并且有云端同步功能。在 iOS 平台上收费25美金，其他平台免费。

这是我用 Anki 这个网站里的格式所储存的抽认卡资料库: ankiweb.net/shared/info/25173560 （感谢 [@xiewenya](https://github.com/xiewenya)）

### 3. 复习，复习，再复习

我留有一组 ASCII 码表、OSI 堆栈、Big-O 记号及更多的抽认卡，以便在空余的时候可以学习。

编程累了就休息半个小时，并去复习你的抽认卡。

### 4. 专注

在学习的过程中，往往会有许多令人分心的事占据着我们宝贵的时间。因此，专注和集中注意力是非常困难的。放点纯音乐能帮上一些忙。

## 没有包含的内容

有一些熟悉且普遍的技术在此未被谈及到：

- SQL
- Javascript
- HTML、CSS 和其他前端技术

## 日常计划

部分问题可能会花费一天的时间去学习，而有些则会花费多天。当然，有些学习并不需要我们懂得如何实现。

因此，每一天我都会在下面所列出的列表中选择一项，并观看相关的视频。然后，使用以下的一种语言去实现：

- C —— 使用结构体和函数，该函数会接受一个结构体指针 * 及其他数据作为参数。
- C++ —— 不使用内建的数据类型。
- C++ —— 使用内建的数据类型，如使用 STL 的 std::list 来作为链表。
- Python ——  使用内建的数据类型（为了持续练习 Python），并编写一些测试去保证自己代码的正确性。有时，只需要使用断言函数 assert() 即可。
- 此外，你也可以使用 Java 或其他语言。以上只是我的个人偏好而已。

你不需要学会所有的编程语言，你只需要专注在[一种编程语言](##为你的面试选择一种语言)上。

为何要在这些语言上分别实现一次？

- 练习，练习，练习，直至我厌倦它，并正确无误地实现出来。（若有部分边缘条件没想到时，我会用书写的形式记录下来并去记忆）
- 在纯原生的条件下工作（不需垃圾回收机制的帮助下，手动分配/释放内存（除了 Python））
- 利用语言内建的数据类型，之后在实际工作的时候才能得心应手（在生产环境中，我不会去实现自己的链表）

就算我没有时间去每一项都这么做，但我也会尽我所能。

在这里你可以查看到我的代码：

- [C](https://github.com/jwasham/practice-c)
- [C++](https://github.com/jwasham/practice-cpp)
- [Python](https://github.com/jwasham/practice-python)

你不需要记住每一个算法的内部原理。

在一个白板上写代码，而不要直接在计算机上编写。在测试完部分简单的输入后，到计算机上再测试一遍。

## 必备知识

- [ ] **学习C语言**
    - C 语言无处不在。在学习的过程中，你会在书籍，讲座，视频等任何地方看到它的身影
    - [ ] [C程序设计语言，第二版](https://www.amazon.com/Programming-Language-Brian-W-Kernighan/dp/0131103628)
        - 这是一本简短的书，但是它将使你更好地使用 C 语言，并且如果你稍加练习，就会很快熟练。理解 C 可帮助你了解程序和内存的工作方式
        - 问题答案

- [ ] **计算机是如何处理一段程序：**
    - [ ] [CPU 是如何执行代码（视频）](https://www.youtube.com/watch?v=XM4lGflQFvA)
    - [ ] [计算机如何计算（视频）](https://youtu.be/1I5ZMmrOfnA)
    - [ ] [寄存器和内存（视频）](https://youtu.be/fpnE6UAfbtU)
    - [ ] [中央处理单元（视频）](https://youtu.be/FZGugFqdr60)
    - [ ] [指令和程序（视频）](https://youtu.be/zltgXvg6r3k)

## 算法复杂度 / Big-O / 渐进分析法

- 并不需要实现
- 这里有很多视频，看到你真正了解它为止。你随时可以回来复习。
- 如果这些课程太过数学的话，你可以去看看最下面离散数学的视频，它能让你更了解这些数学背后的来源以及原理。
- [ ] [Harvard CS50 —— 渐进表示（视频）](https://www.youtube.com/watch?v=iOq5kSKqeR4)
- [ ] [Big O 记号（通用快速教程）（视频）](https://www.youtube.com/watch?v=V6mKVRU1evU)
- [ ] [Big O 记号（以及 Omega 和 Theta）——  最佳数学解释（视频）](https://www.youtube.com/watch?v=ei-A_wy5Yxw&index=2&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [ ] Skiena 算法：
    - [视频](https://www.youtube.com/watch?v=gSyDMtdPNpU&index=2&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [幻灯片](http://www3.cs.stonybrook.edu/~algorith/video-lectures/2007/lecture2.pdf)
- [ ] [对于算法复杂度分析的一次详细介绍](http://discrete.gr/complexity/)
- [ ] [增长阶数（Orders of Growth）（视频）](https://class.coursera.org/algorithmicthink1-004/lecture/59)
- [ ] [渐进性（Asymptotics）（视频）](https://class.coursera.org/algorithmicthink1-004/lecture/61)
- [ ] [UC Berkeley Big O（视频）](https://youtu.be/VIS4YDpuP98)
- [ ] [UC Berkeley Big Omega（视频）](https://youtu.be/ca3e7UVmeUc)
- [ ] [平摊分析法（Amortized Analysis）（视频）](https://www.youtube.com/watch?v=B3SpQZaAZP4&index=10&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [ ] [举证“Big O”（视频）](https://class.coursera.org/algorithmicthink1-004/lecture/63)
- [ ] TopCoder（包括递归关系和主定理）：
    - [计算性复杂度：第一部](https://www.topcoder.com/community/data-science/data-science-tutorials/computational-complexity-section-1/)
    - [计算性复杂度：第二部](https://www.topcoder.com/community/data-science/data-science-tutorials/computational-complexity-section-2/)
- [ ] [速查表（Cheat sheet）](http://bigocheatsheet.com/)

## 数据结构

- ### 数组（Arrays）
    - 实现一个可自动调整大小的动态数组。
    - [ ] 介绍：
        - [数组（视频）](https://www.coursera.org/learn/data-structures/lecture/OsBSF/arrays)
        - [UC Berkeley CS61B - 线性数组和多维数组（视频）](https://archive.org/details/ucberkeley_webcast_Wp8oiO_CZZE)（从15分32秒开始）
        - [数组的基础知识（视频）](https://archive.org/details/0102WhatYouShouldKnow/02_04-basicArrays.mp4)
        - [多维数组（视频）](https://archive.org/details/0102WhatYouShouldKnow/02_05-multidimensionalArrays.mp4)
        - [动态数组（视频）](https://www.coursera.org/learn/data-structures/lecture/EwbnV/dynamic-arrays)
        - [不规则数组（视频）](https://www.youtube.com/watch?v=1jtrQqYpt7g)
        - [不规则数组（视频）](https://archive.org/details/0102WhatYouShouldKnow/02_06-jaggedArrays.mp4)
        - [调整数组的大小（视频）](https://archive.org/details/0102WhatYouShouldKnow/03_01-resizableArrays.mp4)
    - [ ] 实现一个动态数组（可自动调整大小的可变数组）：
        - [ ] 练习使用数组和指针去编码，并且指针是通过计算去跳转而不是使用索引
        - [ ] 通过分配内存来新建一个原生数据型数组
            - 可以使用 int 类型的数组，但不能使用其语法特性
            - 从大小为16或更大的数（使用2的倍数 —— 16、32、64、128）开始编写
        - [ ] size() —— 数组元素的个数
        - [ ] capacity() —— 可容纳元素的个数
        - [ ] is_empty()
        - [ ] at(index) —— 返回对应索引的元素，且若索引越界则愤然报错
        - [ ] push(item)
        - [ ] insert(index, item) —— 在指定索引中插入元素，并把后面的元素依次后移
        - [ ] prepend(item) —— 可以使用上面的 insert 函数，传参 index 为 0
        - [ ] pop() —— 删除在数组末端的元素，并返回其值
        - [ ] delete(index) —— 删除指定索引的元素，并把后面的元素依次前移
        - [ ] remove(item) —— 删除指定值的元素，并返回其索引（即使有多个元素）
        - [ ] find(item) —— 寻找指定值的元素并返回其中第一个出现的元素其索引，若未找到则返回 -1
        - [ ] resize(new_capacity) // 私有函数
            - 若数组的大小到达其容积，则变大一倍
            - 获取元素后，若数组大小为其容积的1/4，则缩小一半
    - [ ] 时间复杂度
        - 在数组末端增加/删除、定位、更新元素，只允许占 O(1) 的时间复杂度（平摊（amortized）去分配内存以获取更多空间）
        - 在数组任何地方插入/移除元素，只允许 O(n) 的时间复杂度
    - [ ] 空间复杂度
        - 因为在内存中分配的空间邻近，所以有助于提高性能
        - 空间需求 = （大于或等于 n 的数组容积）* 元素的大小。即便空间需求为 2n，其空间复杂度仍然是 O(n)

- ### 链表（Linked Lists）
    - [ ] 介绍：
        - [ ] [单向链表（视频）](https://www.coursera.org/learn/data-structures/lecture/kHhgK/singly-linked-lists)
        - [ ] [CS 61B —— 链表（一）（视频）](https://archive.org/details/ucberkeley_webcast_htzJdKoEmO0)
        - [ ] [CS 61B —— 链表（二）（视频）](https://archive.org/details/ucberkeley_webcast_-c4I3gFYe3w)
    - [ ] [C 代码（视频）](https://www.youtube.com/watch?v=QN6FPiD0Gzo) ── 并非看完整个视频，只需要看关于节点结构和内存分配那一部分即可
    - [ ] 链表 vs 数组：
        - [基本链表 Vs 数组（视频）](https://www.coursera.org/lecture/data-structures-optimizing-performance/core-linked-lists-vs-arrays-rjBs9)
        - [在现实中，链表 Vs 数组（视频）](https://www.coursera.org/lecture/data-structures-optimizing-performance/in-the-real-world-lists-vs-arrays-QUaUd)
    - [ ] [为什么你需要避免使用链表（视频）](https://www.youtube.com/watch?v=YQs6IC-vgmo)
    - [ ] 的确：你需要关于“指向指针的指针”的相关知识：（因为当你传递一个指针到一个函数时，该函数可能会改变指针所指向的地址）该页只是为了让你了解“指向指针的指针”这一概念。但我并不推荐这种链式遍历的风格。因为，这种风格的代码，其可读性和可维护性太低。
        - [指向指针的指针](https://www.eskimo.com/~scs/cclass/int/sx8.html)
    - [ ] 实现（我实现了使用尾指针以及没有使用尾指针这两种情况）：
        - [ ] size() —— 返回链表中数据元素的个数
        - [ ] empty() —— 若链表为空则返回一个布尔值 true
        - [ ] value_at(index) —— 返回第 n 个元素的值（从0开始计算）
        - [ ] push_front(value) —— 添加元素到链表的首部
        - [ ] pop_front() —— 删除首部元素并返回其值
        - [ ] push_back(value) —— 添加元素到链表的尾部
        - [ ] pop_back() —— 删除尾部元素并返回其值
        - [ ] front() —— 返回首部元素的值
        - [ ] back() —— 返回尾部元素的值
        - [ ] insert(index, value) —— 插入值到指定的索引，并把当前索引的元素指向到新的元素
        - [ ] erase(index) —— 删除指定索引的节点
        - [ ] value_n_from_end(n) —— 返回倒数第 n 个节点的值
        - [ ] reverse() —— 逆序链表
        - [ ] remove_value(value) —— 删除链表中指定值的第一个元素
    - [ ] 双向链表
        - [介绍（视频）](https://www.coursera.org/learn/data-structures/lecture/jpGKD/doubly-linked-lists)
        - 并不需要实现

- ### 堆栈（Stack）
    - [ ] [堆栈（视频）](https://www.coursera.org/learn/data-structures/lecture/UdKzQ/stacks)
    - [ ] [使用堆栈 —— 后进先出（视频）](https://archive.org/details/0102WhatYouShouldKnow/05_01-usingStacksForLast-inFirst-out.mp4)
    - [ ] 可以不实现，因为使用数组来实现并不重要

- ### 队列（Queue）
    - [ ] [使用队列 —— 先进先出（视频）](https://archive.org/details/0102WhatYouShouldKnow/05_03-usingQueuesForFirst-inFirst-out.mp4)
    - [ ] [队列（视频）](https://www.coursera.org/learn/data-structures/lecture/EShpq/queue)
    - [ ] [原型队列/先进先出（FIFO）](https://en.wikipedia.org/wiki/Circular_buffer)
    - [ ] [优先级队列（视频）](https://archive.org/details/0102WhatYouShouldKnow/05_04-priorityQueuesAndDeques.mp4)
    - [ ] 使用含有尾部指针的链表来实现:
        - enqueue(value) —— 在尾部添加值
        - dequeue() —— 删除最早添加的元素并返回其值（首部元素）
        - empty()
    - [ ] 使用固定大小的数组实现：
        - enqueue(value) —— 在可容的情况下添加元素到尾部
        - dequeue() —— 删除最早添加的元素并返回其值
        - empty()
        - full()
    - [ ] 花销：
        - 在糟糕的实现情况下，使用链表所实现的队列，其入列和出列的时间复杂度将会是 O(n)。因为，你需要找到下一个元素，以致循环整个队列
        - enqueue：O(1)（平摊（amortized）、链表和数组 [探测（probing）]）
        - dequeue：O(1)（链表和数组）
        - empty：O(1)（链表和数组）

- ### 哈希表（Hash table）
    - [ ] 视频：
        - [ ] [链式哈希表（视频）](https://www.youtube.com/watch?v=0M_kIqhwbFo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=8)
        - [ ] [Table Doubling 和 Karp-Rabin（视频）](https://www.youtube.com/watch?v=BRO7mVIFt08&index=9&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [ ] [Open Addressing 和密码型哈希（Cryptographic Hashing）（视频）](https://www.youtube.com/watch?v=rvdJDijO2Ro&index=10&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [ ] [PyCon 2010：The Mighty Dictionary（视频）](https://www.youtube.com/watch?v=C4Kc8xzcA68)
        - [ ] [（进阶）随机取样（Randomization）：全域哈希（Universal Hashing）& 完美哈希（Perfect Hashing）（视频）](https://www.youtube.com/watch?v=z0lJ2k0sl1g&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=11)
        - [ ] [（进阶）完美哈希（Perfect hashing）（视频）](https://www.youtube.com/watch?v=N0COwN14gt0&list=PL2B4EEwhKD-NbwZ4ezj7gyc_3yNrojKM9&index=4)

    - [ ] 在线课程：
        - [ ] [理解哈希函数（视频）](https://archive.org/details/0102WhatYouShouldKnow/06_02-understandingHashFunctions.mp4)
        - [ ] [使用哈希表（视频）](https://archive.org/details/0102WhatYouShouldKnow/06_03-usingHashTables.mp4)
        - [ ] [支持哈希（视频）](https://archive.org/details/0102WhatYouShouldKnow/06_04-supportingHashing.mp4)
        - [ ] [哈希表的语言支持（视频）](https://archive.org/details/0102WhatYouShouldKnow/06_05-languageSupportForHashTables.mp4)
        - [ ] [基本哈希表（视频）](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/m7UuP/core-hash-tables)
        - [ ] [数据结构（视频）](https://www.coursera.org/learn/data-structures/home/week/3)
        - [ ] [电话薄问题（Phone Book Problem）（视频）](https://www.coursera.org/learn/data-structures/lecture/NYZZP/phone-book-problem)
        - [ ] 分布式哈希表：
            - [Dropbox 中的瞬时上传及存储优化（视频）](https://www.coursera.org/learn/data-structures/lecture/DvaIb/instant-uploads-and-storage-optimization-in-dropbox)
            - [分布式哈希表（视频）](https://www.coursera.org/learn/data-structures/lecture/tvH8H/distributed-hash-tables)

    - [ ] 使用线性探测的数组去实现
        - hash(k, m) —— m 是哈希表的大小
        - add(key, value) —— 如果 key 已存在则更新值
        - exists(key)
        - get(key)
        - remove(key)

## 更多的知识

- ### 二分查找（Binary search）
    - [ ] [二分查找（视频）](https://www.youtube.com/watch?v=D5SrAga1pno)
    - [ ] [二分查找（视频）](https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search)
    - [ ] [详情](https://www.topcoder.com/community/data-science/data-science-tutorials/binary-search/)
    - [ ] 实现：
        - 二分查找（在一个已排序好的整型数组中查找）
        - 迭代式二分查找

- ### 按位运算（Bitwise operations）
    - [ ] [Bits 速查表](https://github.com/jwasham/coding-interview-university/blob/main/extras/cheat%20sheets/bits-cheat-sheet.pdf) ── 你需要知道大量2的幂数值（从2^1 到 2^16 及 2^32）
    - [ ] 好好理解位操作符的含义：&、|、^、~、>>、<<
        - [ ] [字码（words）](https://en.wikipedia.org/wiki/Word_(computer_architecture))
        - [ ] 好的介绍：
            [位操作（视频）](https://www.youtube.com/watch?v=7jkIUgLC29I)
        - [ ] [C 语言编程教程 2-10：按位运算（视频）](https://www.youtube.com/watch?v=d0AwjSpNXR0)
        - [ ] [位操作](https://en.wikipedia.org/wiki/Bit_manipulation)
        - [ ] [按位运算](https://en.wikipedia.org/wiki/Bitwise_operation)
        - [ ] [Bithacks](https://graphics.stanford.edu/~seander/bithacks.html)
        - [ ] [位元抚弄者（The Bit Twiddler）](http://bits.stephan-brumme.com/)
        - [ ] [交互式位元抚弄者（The Bit Twiddler Interactive）](http://bits.stephan-brumme.com/interactive.html)
        - [ ] [位操作技巧（Bit Hacks）（视频）](https://www.youtube.com/watch?v=ZusiKXcz_ac)
        - [ ] [练习位操作](https://pconrad.github.io/old_pconrad_cs16/topics/bitOps/)
    - [ ] 一补数和补码
        - [二进制：利 & 弊（为什么我们要使用补码）（视频）](https://www.youtube.com/watch?v=lKTsv6iVxV4)
        - [一补数（1s Complement）](https://en.wikipedia.org/wiki/Ones%27_complement)
        - [补码（2s Complement）](https://en.wikipedia.org/wiki/Two%27s_complement)
    - [ ] 计算置位（Set Bits）
        - [计算一个字节中置位（Set Bits）的四种方式（视频）](https://youtu.be/Hzuzo9NJrlc)
        - [计算比特位](https://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetKernighan)
        - [如何在一个 32 位的整型中计算置位（Set Bits）的数量](http://stackoverflow.com/questions/109023/how-to-count-the-number-of-set-bits-in-a-32-bit-integer)
    - [ ] 交换值：
        - [交换（Swap）](http://bits.stephan-brumme.com/swap.html)
    - [ ] 绝对值：
        - [绝对整型（Absolute Integer）](http://bits.stephan-brumme.com/absInteger.html)

## 树（Trees）

- ### 树 —— 笔记 & 背景
    - [ ] [系列：树（视频）](https://www.coursera.org/learn/data-structures/lecture/95qda/trees)
    - 基本的树形结构
    - 遍历
    - 操作算法
    - [ ] [BFS（广度优先检索，breadth-first search）和 DFS（深度优先检索，depth-first search）](https://www.youtube.com/watch?v=uWL6FJhq5fM)
        - BFS 笔记
            - 层序遍历（使用队列的 BFS 算法）
            - 时间复杂度： O(n)
            - 空间复杂度：
                - 最好情况：O(1)
                - 最坏情况：O(n/2)=O(n)
        - DFS 笔记：
            - 时间复杂度：O(n)
            - 空间复杂度：
                - 最好情况：O(log n) - 树的平均高度
                - 最坏情况：O(n)
            - 中序遍历（DFS：左、节点本身、右）
            - 后序遍历（DFS：左、右、节点本身）
            - 先序遍历（DFS：节点本身、左、右）

- ### 二叉查找树（Binary search trees）：BSTs
    - [ ] [二叉查找树概览（视频）](https://www.youtube.com/watch?v=x6At0nzX92o&index=1&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
    - [ ] [系列（视频）](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/p82sw/core-introduction-to-binary-search-trees)
        - 从符号表开始到 BST 程序
    - [ ] [介绍（视频）](https://www.coursera.org/learn/data-structures/lecture/E7cXP/introduction)
    - [ ] [MIT（视频）](https://www.youtube.com/watch?v=9Jry5-82I68)
    - C/C++:
        - [ ] [二叉查找树 —— 在 C/C++ 中实现（视频）](https://www.youtube.com/watch?v=COZK7NATh4k&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=28)
        - [ ] [BST 的实现 —— 在堆栈和堆中的内存分配（视频）](https://www.youtube.com/watch?v=hWokyBoo0aI&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=29)
        - [ ] [在二叉查找树中找到最小和最大的元素（视频）](https://www.youtube.com/watch?v=Ut90klNN264&index=30&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [寻找二叉树的高度（视频）](https://www.youtube.com/watch?v=_pnqMz5nrRs&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=31)
        - [ ] [二叉树的遍历 —— 广度优先和深度优先策略（视频）](https://www.youtube.com/watch?v=9RHO6jU--GU&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=32)
        - [ ] [二叉树：层序遍历（视频）](https://www.youtube.com/watch?v=86g8jAQug04&index=33&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [二叉树的遍历：先序、中序、后序（视频）](https://www.youtube.com/watch?v=gm8DUJJhmY4&index=34&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [判断一棵二叉树是否为二叉查找树（视频）](https://www.youtube.com/watch?v=yEwSGhSsT0U&index=35&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [从二叉查找树中删除一个节点（视频）](https://www.youtube.com/watch?v=gcULXE7ViZw&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=36)
        - [ ] [二叉查找树中序遍历的后继者（视频）](https://www.youtube.com/watch?v=5cPbNCrdotA&index=37&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
    - [ ] 实现：
        - [ ] insert    // 往树上插值
        - [ ] get_node_count // 查找树上的节点数
        - [ ] print_values // 从小到大打印树中节点的值
        - [ ] delete_tree
        - [ ] is_in_tree // 如果值存在于树中则返回 true
        - [ ] get_height // 返回节点所在的高度（如果只有一个节点，那么高度则为1）
        - [ ] get_min   // 返回树上的最小值
        - [ ] get_max   // 返回树上的最大值
        - [ ] is_binary_search_tree
        - [ ] delete_value
        - [ ] get_successor // 返回给定值的后继者，若没有则返回-1

- ### 堆（Heap） / 优先级队列（Priority Queue） / 二叉堆（Binary Heap）
    - 可视化是一棵树，但通常是以线性的形式存储（数组、链表）
    - [ ] [堆](https://en.wikipedia.org/wiki/Heap_(data_structure))
    - [ ] [介绍（视频）](https://www.coursera.org/learn/data-structures/lecture/2OpTs/introduction)
    - [ ] [简单的实现（视频）](https://www.coursera.org/learn/data-structures/lecture/z3l9N/naive-implementations)
    - [ ] [二叉树（视频）](https://www.coursera.org/learn/data-structures/lecture/GRV2q/binary-trees)
    - [ ] [关于树高的讨论（视频）](https://www.coursera.org/learn/data-structures/supplement/S5xxz/tree-height-remark)
    - [ ] [基本操作（视频）](https://www.coursera.org/learn/data-structures/lecture/0g1dl/basic-operations)
    - [ ] [完全二叉树（视频）](https://www.coursera.org/learn/data-structures/lecture/gl5Ni/complete-binary-trees)
    - [ ] [伪代码（视频）](https://www.coursera.org/learn/data-structures/lecture/HxQo9/pseudocode)
    - [ ] [堆排序 —— 跳到起点（视频）](https://youtu.be/odNJmw5TOEE?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3291)
    - [ ] [堆排序（视频）](https://www.coursera.org/learn/data-structures/lecture/hSzMO/heap-sort)
    - [ ] [构建一个堆（视频）](https://www.coursera.org/learn/data-structures/lecture/dwrOS/building-a-heap)
    - [ ] [MIT：堆与堆排序（视频）](https://www.youtube.com/watch?v=B7hVxCmfPtM&index=4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [CS 61B Lecture 24：优先级队列（视频）](https://www.youtube.com/watch?v=yIUFT6AKBGE&index=24&list=PL4BBB74C7D2A1049C)
    - [ ] [构建线性时间复杂度的堆（大顶堆）](https://www.youtube.com/watch?v=MiyLo8adrWw)
    - [ ] 实现一个大顶堆：
        - [ ] insert
        - [ ] sift_up —— 用于插入元素
        - [ ] get_max —— 返回最大值但不移除元素
        - [ ] get_size() —— 返回存储的元素数量
        - [ ] is_empty() —— 若堆为空则返回 true
        - [ ] extract_max —— 返回最大值并移除
        - [ ] sift_down —— 用于获取最大值元素
        - [ ] remove(i) —— 删除指定索引的元素
        - [ ] heapify —— 构建堆，用于堆排序
        - [ ] heap_sort() —— 拿到一个未排序的数组，然后使用大顶堆或者小顶堆进行就地排序

## 排序（Sorting）

- [ ] 笔记:
    - 实现各种排序，知道每种排序的最坏、最好和平均的复杂度分别是什么场景:
        - 不要用冒泡排序 - 效率太差 - 时间复杂度 O(n^2), 除非 n <= 16
    - [ ] 排序算法的稳定性 ("快排是稳定的么?")
        - [排序算法的稳定性](https://en.wikipedia.org/wiki/Sorting_algorithm#Stability)
        - [排序算法的稳定性](http://stackoverflow.com/questions/1517793/stability-in-sorting-algorithms)
        - [排序算法的稳定性](http://www.geeksforgeeks.org/stability-in-sorting-algorithms/)
        - [排序算法 - 稳定性](http://homepages.math.uic.edu/~leon/cs-mcs401-s08/handouts/stability.pdf)
    - [ ] 哪种排序算法可以用链表？哪种用数组？哪种两者都可？
        - 并不推荐对一个链表排序，但归并排序是可行的.
        - [链表的归并排序](http://www.geeksforgeeks.org/merge-sort-for-linked-list/)

- 关于堆排序，请查看前文堆的数据结构部分。堆排序很强大，不过是非稳定排序。
- [ ] [Sedgewick ── 归并排序（5个视频）](https://www.coursera.org/learn/algorithms-part1/home/week/3)
    - [ ] 1. 归并排序
    - [ ] 2. 自下而上的归并排序
    - [ ] 3. 排序复杂度
    - [ ] 4. 比较器
    - [ ] 5. 稳定性
- [ ] [Sedgewick ── 快速排序（4个视频）](https://www.coursera.org/learn/algorithms-part1/home/week/3)
    - [ ] 1. 快速排序
    - [ ] 2. 选择
    - [ ] 3. 重复键值
    - [ ] 4. 系统排序
- [ ] [冒泡排序（视频）](https://www.youtube.com/watch?v=P00xJgWzz2c&index=1&list=PL89B61F78B552C1AB)
- [ ] [冒泡排序分析（视频）](https://www.youtube.com/watch?v=ni_zk257Nqo&index=7&list=PL89B61F78B552C1AB)
- [ ] [插入排序 & 归并排序（视频）](https://www.youtube.com/watch?v=Kg4bqzAqRBM&index=3&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
- [ ] [插入排序（视频）](https://www.youtube.com/watch?v=c4BRHC7kTaQ&index=2&list=PL89B61F78B552C1AB)
- [ ] [归并排序（视频）](https://www.youtube.com/watch?v=GCae1WNvnZM&index=3&list=PL89B61F78B552C1AB)
- [ ] [快排（视频）](https://www.youtube.com/watch?v=y_G9BkAm6B8&index=4&list=PL89B61F78B552C1AB)
- [ ] [选择排序（视频）](https://www.youtube.com/watch?v=6nDMgr0-Yyo&index=8&list=PL89B61F78B552C1AB)

- [ ] 归并排序代码：
    - [ ] [使用外部数组（C语言）](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/sorting/mergesort.c)
    - [ ] [使用外部数组（Python语言）](https://github.com/jwasham/practice-python/blob/master/merge_sort/merge_sort.py)
    - [ ] [对原数组直接排序（C++）](https://github.com/jwasham/practice-cpp/blob/master/merge_sort/merge_sort.cc)
- [ ] 快速排序代码：
    - [ ] [实现（C语言）](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/randomization/quick.c)
    - [ ] [实现（C语言）](https://github.com/jwasham/practice-c/blob/master/quick_sort/quick_sort.c)
    - [ ] [实现（Python语言）](https://github.com/jwasham/practice-python/blob/master/quick_sort/quick_sort.py)

- [ ] 实现:
    - [ ] 归并：平均和最差情况的时间复杂度为 O(n log n)。
    - [ ] 快排：平均时间复杂度为 O(n log n)。
    - 选择排序和插入排序的最坏、平均时间复杂度都是 O(n^2)。
    - 关于堆排序，请查看前文堆的数据结构部分。

- [ ] 有兴趣的话，还有一些补充，但并不是必须的:
    - [Sedgewick──基数排序 (6个视频)](https://www.coursera.org/learn/algorithms-part2/home/week/3)
        - [ ] [1. Java 中的字符串](https://www.coursera.org/learn/algorithms-part2/lecture/vGHvb/strings-in-java)
        - [ ] [2. 键值索引计数（Key Indexed Counting）](https://www.coursera.org/learn/algorithms-part2/lecture/2pi1Z/key-indexed-counting)
        - [ ] [3. Least Significant Digit First String Radix Sort](https://www.coursera.org/learn/algorithms-part2/lecture/c1U7L/lsd-radix-sort)
        - [ ] [4. Most Significant Digit First String Radix Sort](https://www.coursera.org/learn/algorithms-part2/lecture/gFxwG/msd-radix-sort)
        - [ ] [5. 3中基数快速排序](https://www.coursera.org/learn/algorithms-part2/lecture/crkd5/3-way-radix-quicksort)
        - [ ] [6. 后继数组（Suffix Arrays）](https://www.coursera.org/learn/algorithms-part2/lecture/TH18W/suffix-arrays)
    - [ ] [基数排序](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#radixSort)
    - [ ] [基数排序（视频）](https://www.youtube.com/watch?v=xhr26ia4k38)
    - [ ] [基数排序, 计数排序 (线性时间内)（视频）](https://www.youtube.com/watch?v=Nz1KZXbghj8&index=7&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [随机算法: 矩阵相乘, 快排, Freivalds' 算法（视频）](https://www.youtube.com/watch?v=cNB2lADK3_s&index=8&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [线性时间内的排序（视频）](https://www.youtube.com/watch?v=pOKy3RZbSws&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=14)

总结一下，这是[15种排序算法](https://www.youtube.com/watch?v=kPRA0W1kECg)的可视化表示。如果你需要有关此主题的更多详细信息，请参阅“[一些主题的额外内容](#一些主题的额外内容)”中的“排序”部分。

## 图（Graphs）

图论能解决计算机科学里的很多问题，所以这一节会比较长，像树和排序的部分一样。

- 笔记:
    - 有4种基本方式在内存里表示一个图:
        - 对象和指针
        - 邻接矩阵
        - 邻接表
        - 邻接图
    - 熟悉以上每一种图的表示法，并了解各自的优缺点
    - 广度优先搜索和深度优先搜索：知道它们的计算复杂度和设计上的权衡以及如何用代码实现它们
    - 遇到一个问题时，首先尝试基于图的解决方案，如果没有再去尝试其他的。

- MIT（视频）：
    - [广度优先搜索](https://www.youtube.com/watch?v=s-CYnVz-uh4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=13)
    - [深度优先搜索](https://www.youtube.com/watch?v=AfSk24UTFS8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=14)

- [ ] Skiena 教授的课程 - 很不错的介绍:
    - [ ] [CSE373 2012 - 课程 11 - 图的数据结构（视频）](https://www.youtube.com/watch?v=OiXxhDrFruw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=11)
    - [ ] [CSE373 2012 - 课程 12 - 广度优先搜索（视频）](https://www.youtube.com/watch?v=g5vF8jscteo&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=12)
    - [ ] [CSE373 2012 - 课程 13 - 图的算法（视频）](https://www.youtube.com/watch?v=S23W6eTcqdY&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=13)
    - [ ] [CSE373 2012 - 课程 14 - 图的算法 (1)（视频）](https://www.youtube.com/watch?v=WitPBKGV0HY&index=14&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [CSE373 2012 - 课程 15 - 图的算法 (2)（视频）](https://www.youtube.com/watch?v=ia1L30l7OIg&index=15&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [CSE373 2012 - 课程 16 - 图的算法 (3)（视频）](https://www.youtube.com/watch?v=jgDOQq6iWy8&index=16&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)

- [ ] 图 (复习和其他):

    - [ ] [6.006 单源最短路径问题（视频）](https://www.youtube.com/watch?v=Aa2sqUhIn-E&index=15&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [6.006 Dijkstra 算法（视频）](https://www.youtube.com/watch?v=2E7MmKv0Y24&index=16&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [6.006 Bellman-Ford 算法（视频）](https://www.youtube.com/watch?v=ozsuci5pIso&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=17)
    - [ ] [6.006 Dijkstra 效率优化（视频）](https://www.youtube.com/watch?v=CHvQ3q_gJ7E&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=18)
    - [ ] [Aduni: 图的算法 I - 拓扑排序，最小生成树，Prim 算法 - 第六课（视频）](https://www.youtube.com/watch?v=i_AQT_XfvD8&index=6&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
    - [ ] [Aduni: 图的算法 II - 深度优先搜索, 广度优先搜索, Kruskal 算法, 并查集数据结构 - 第七课（视频）](https://www.youtube.com/watch?v=ufj5_bppBsA&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=7)
    - [ ] [Aduni: 图的算法 III: 最短路径 - 第八课（视频）](https://www.youtube.com/watch?v=DiedsPsMKXc&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=8)
    - [ ] [Aduni: 图的算法. IV: 几何算法介绍 - 第九课（视频）](https://www.youtube.com/watch?v=XIAQRlNkJAw&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=9)
    - [ ] <del>[CS 61B 2014 (从 58:09 开始)（视频）](https://youtu.be/dgjX4HdMI-Q?list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&t=3489)</del>
    - [ ] [CS 61B 2014: 加权图（视频）](https://www.youtube.com/watch?v=aJjlQCFwylA&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&index=19)
    - [ ] [贪心算法: 最小生成树（视频）](https://www.youtube.com/watch?v=tKwnms5iRBU&index=16&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [图的算法之强连通分量 Kosaraju 算法（视频）](https://www.youtube.com/watch?v=RpgcYiky7uw)

- 完整的 Coursera 课程:
    - [ ] [图的算法（视频）](https://www.coursera.org/learn/algorithms-on-graphs/home/welcome)

- 我会实现:
    - [ ] DFS 邻接表 (递归)
    - [ ] DFS 邻接表 (栈迭代)
    - [ ] DFS 邻接矩阵 (递归)
    - [ ] DFS 邻接矩阵 (栈迭代)
    - [ ] BFS 邻接表
    - [ ] BFS 邻接矩阵
    - [ ] 单源最短路径问题 (Dijkstra)
    - [ ] 最小生成树
    - 基于 DFS 的算法 (根据上文 Aduni 的视频):
        - [ ] 检查环 (我们会先检查是否有环存在以便做拓扑排序)
        - [ ] 拓扑排序
        - [ ] 计算图中的连通分支
        - [ ] 列出强连通分量
        - [ ] 检查双向图

可以从 Skiena 的书（参考下面的书推荐小节）和面试书籍中学习更多关于图的实践。

## 更多知识

- ### 递归（Recursion）
    - [ ] Stanford 大学关于递归 & 回溯的课程:
        - [ ] [课程 8 | 抽象编程（视频）](https://www.youtube.com/watch?v=gl3emqCuueQ&list=PLFE6E58F856038C69&index=8)
        - [ ] [课程 9 | 抽象编程（视频）](https://www.youtube.com/watch?v=uFJhEPrbycQ&list=PLFE6E58F856038C69&index=9)
        - [ ] [课程 10 | 抽象编程（视频）](https://www.youtube.com/watch?v=NdF1QDTRkck&index=10&list=PLFE6E58F856038C69)
        - [ ] [课程 11 | 抽象编程（视频）](https://www.youtube.com/watch?v=p-gpaIGRCQI&list=PLFE6E58F856038C69&index=11)
    - 什么时候适合使用
    - 尾递归会更好么?
        - [ ] [什么是尾递归以及为什么它如此糟糕?](https://www.quora.com/What-is-tail-recursion-Why-is-it-so-bad)
        - [ ] [尾递归（视频）](https://www.youtube.com/watch?v=L1jjXGfxozc)

- ### 动态规划（Dynamic Programming）
    - 在你的面试中或许没有任何动态规划的问题，但能够知道一个题目可以使用动态规划来解决是很重要的。
    - 这一部分会有点困难，每个可以用动态规划解决的问题都必须先定义出递推关系，要推导出来可能会有点棘手。
    - 我建议先阅读和学习足够多的动态规划的例子，以便对解决 DP 问题的一般模式有个扎实的理解。
    - [ ] 视频:
        - Skiena 的视频可能会有点难跟上，有时候他用白板写的字会比较小，难看清楚。
        - [ ] [Skiena: CSE373 2012 - 课程 19 - 动态规划介绍（视频）](https://youtu.be/Qc2ieXRgR0k?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1718)
        - [ ] [Skiena: CSE373 2012 - 课程 20 - 编辑距离（视频）](https://youtu.be/IsmMhMdyeGY?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=2749)
        - [ ] [Skiena: CSE373 2012 - 课程 21 - 动态规划举例（视频）](https://youtu.be/o0V9eYF4UI8?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=406)
        - [ ] [Skiena: CSE373 2012 - 课程 22 - 动态规划应用（视频）](https://www.youtube.com/watch?v=dRbMC1Ltl3A&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=22)
        - [ ] [Simonson: 动态规划 0 (starts at 59:18)（视频）](https://youtu.be/J5aJEcOr6Eo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3558)
        - [ ] [Simonson: 动态规划 I - 课程 11（视频）](https://www.youtube.com/watch?v=0EzHjQ_SOeU&index=11&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [Simonson: 动态规划 II - 课程 12（视频）](https://www.youtube.com/watch?v=v1qiRwuJU7g&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=12)
        - [ ] 单独的 DP 问题 (每一个视频都很短)：[动态规划（视频）](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)
    - [ ] 耶鲁课程笔记:
        - [ ] [动态规划](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#dynamicProgramming)
    - [ ] Coursera 课程:
        - [ ] [RNA 二级结构问题（视频）](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/80RrW/the-rna-secondary-structure-problem)
        - [ ] [动态规划算法（视频）](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/PSonq/a-dynamic-programming-algorithm)
        - [ ] [DP 算法描述（视频）](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/oUEK2/illustrating-the-dp-algorithm)
        - [ ] [DP 算法的运行时间（视频）](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/nfK2r/running-time-of-the-dp-algorithm)
        - [ ] [DP vs 递归实现（视频）](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/M999a/dp-vs-recursive-implementation)
        - [ ] [全局成对序列排列（视频）](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/UZ7o6/global-pairwise-sequence-alignment)
        - [ ] [本地成对序列排列（视频）](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/WnNau/local-pairwise-sequence-alignment)

- ### 面向对象编程
    - 可选：[UML 2.0系列（视频）](https://www.youtube.com/watch?v=OkC7HKtiZC0&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc)
    - SOLID 面向对象编程原则：[SOLID 原则（视频）](https://www.youtube.com/playlist?list=PL4CE9F710017EA77A)

- ### 设计模式
    - [ ] [UML 统一建模语言概览 (视频)](https://www.youtube.com/watch?v=3cmzqZzwNDM&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc&index=3)
    - [ ] 主要有如下的设计模式:
        - [ ] 策略模式（strategy）
        - [ ] 单例模式（singleton）
        - [ ] 适配器模式（adapter）
        - [ ] 原型模式（prototype）
        - [ ] 装饰器模式（decorator）
        - [ ] 访问者模式（visitor）
        - [ ] 工厂模式，抽象工厂模式（factory, abstract factory）
        - [ ] 外观模式（facade）
        - [ ] 观察者模式（observer）
        - [ ] 代理模式（proxy）
        - [ ] 委托模式（delegate）
        - [ ] 命令模式（command）
        - [ ] 状态模式（state）
        - [ ] 备忘录模式（memento）
        - [ ] 迭代器模式（iterator）
        - [ ] 组合模式（composite）
        - [ ] 享元模式（flyweight）
    - [ ] [第六章 (第 1 部分 ) - 设计模式 (视频)](https://youtu.be/LAP2A80Ajrg?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO&t=3344)
    - [ ] [第六章 (第 2 部分 ) - Abstraction-Occurrence, General Hierarchy, Player-Role, Singleton, Observer, Delegation (视频)](https://www.youtube.com/watch?v=U8-PGsjvZc4&index=12&list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)
    - [ ] [第六章 (第 3 部分 ) - Adapter, Facade, Immutable, Read-Only Interface, Proxy（视频）](https://www.youtube.com/watch?v=7sduBHuex4c&index=13&list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)
    - [ ] [系列视频（27个）](https://www.youtube.com/playlist?list=PLF206E906175C7E07)
    - [ ] [Head First 设计模型](https://www.amazon.com/Head-First-Design-Patterns-Freeman/dp/0596007124)
        - 尽管《设计模式：可复用面向对象软件的基础》才是这方面的经典，但是我还是认为Head First对于新手更加友好。
    - [ ] [实际操作：设计模式和对入门开发者的建议](https://sourcemaking.com/design-patterns-and-tips)
    - [ ] [Design patterns for humans](https://github.com/kamranahmedse/design-patterns-for-humans#structural-design-patterns)

- ### 组合（Combinatorics） (n 中选 k 个) & 概率（Probability）
    - [ ] [数据技巧: 如何找出阶乘、排列和组合(选择)（视频）](https://www.youtube.com/watch?v=8RRo6Ti9d0U)
    - [ ] [来点学校的东西: 概率（视频）](https://www.youtube.com/watch?v=sZkAAk9Wwa4)
    - [ ] [来点学校的东西: 概率和马尔可夫链（视频）](https://www.youtube.com/watch?v=dNaJg-mLobQ)
    - [ ] 可汗学院:
        - 课程设置:
            - [ ] [概率理论基础](https://www.khanacademy.org/math/probability/probability-and-combinatorics-topic)
        - 只有视频 - 41 (每一个都短小精悍):
            - [ ] [概率解释（视频）](https://www.youtube.com/watch?v=uzkc-qNVoOk&list=PLC58778F28211FA19)

- ### NP, NP-完全和近似算法
    - 知道最经典的一些 NP 完全问题，比如旅行商问题和背包问题，而且能在面试官试图忽悠你的时候识别出他们。
    - 知道 NP 完全是什么意思.
    - [ ] [计算复杂度（视频）](https://www.youtube.com/watch?v=moPtwq_cVH8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=23)
    - [ ] Simonson:
        - [ ] [贪心算法. II & 介绍 NP-完全性（视频）](https://youtu.be/qcGnJ47Smlo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=2939)
        - [ ] [NP-完全性 II & 归约（视频）](https://www.youtube.com/watch?v=e0tGC6ZQdQE&index=16&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [NP-完全性 III（视频）](https://www.youtube.com/watch?v=fCX1BGT3wjE&index=17&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [NP-完全性 IV（视频）](https://www.youtube.com/watch?v=NKLDp3Rch3M&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=18)
    - [ ] Skiena:
        - [ ] [CSE373 2012 - 课程 23 - 介绍 NP-完全性 IV（视频）](https://youtu.be/KiK5TVgXbFg?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1508)
        - [ ] [CSE373 2012 - 课程 24 - NP-完全性证明（视频）](https://www.youtube.com/watch?v=27Al52X3hd4&index=24&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [ ] [CSE373 2012 - 课程 25 - NP-完全性挑战（视频）](https://www.youtube.com/watch?v=xCPH4gwIIXM&index=25&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [复杂度: P, NP, NP-完全性, 规约（视频）](https://www.youtube.com/watch?v=eHZifpgyH_4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=22)
    - [ ] [复杂度: 近视算法 Algorithms（视频）](https://www.youtube.com/watch?v=MEz1J9wY2iM&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=24)
    - [ ] [复杂度: 固定参数算法（视频）](https://www.youtube.com/watch?v=4q-jmGrmxKs&index=25&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - Peter Norvik 讨论旅行商问题的近似最优解:
        - [Jupyter 笔记本](http://nbviewer.jupyter.org/url/norvig.com/ipython/TSP.ipynb)
    - 《算法导论》（CLRS）的第 1048 - 1140 页。

- ### 缓存（Cache）
    - [ ] LRU 缓存:
        - [ ] [LRU 的魔力 (100 Days of Google Dev)（视频）](https://www.youtube.com/watch?v=R5ON3iwx78M)
        - [ ] [实现 LRU（视频）](https://www.youtube.com/watch?v=bq6N7Ym81iI)
        - [ ] [LeetCode - 146 LRU Cache (C++)（视频）](https://www.youtube.com/watch?v=8-FZRAjR7qU)
    - [ ] CPU 缓存:
        - [ ] [MIT 6.004 L15: 存储体系（视频）](https://www.youtube.com/watch?v=vjYF_fAZI5E&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-&index=24)
        - [ ] [MIT 6.004 L16: 缓存的问题（视频）](https://www.youtube.com/watch?v=ajgC3-pyGlk&index=25&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-)

- ### 进程（Processe）和线程（Thread）
    - [ ] 计算机科学 162 - 操作系统 (25 个视频):
        - 视频 1-11 是关于进程和线程
        - [操作系统和系统编程（视频）](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iBDyz-ba4yDskqMDY6A1w_c)
    - [进程和线程的区别是什么?](https://www.quora.com/What-is-the-difference-between-a-process-and-a-thread)
    - 涵盖了:
        - 进程、线程、协程
            - 进程和线程的区别
            - 进程
            - 线程
            - 锁
            - 互斥
            - 信号量
            - 监控
            - 他们是如何工作的
            - 死锁
            - 活锁
        - CPU 活动, 中断, 上下文切换
        - 现代多核处理器的并发式结构
        - [分页（paging），分段（segmentation）和虚拟内存（视频）](https://www.youtube.com/watch?v=LKe7xK0bF7o&list=PLCiOXwirraUCBE9i_ukL8_Kfg6XNv7Se8&index=2)
        - [中断（视频）](https://www.youtube.com/watch?v=uFKi2-J-6II&list=PLCiOXwirraUCBE9i_ukL8_Kfg6XNv7Se8&index=3)
        - 进程资源需要（内存：代码、静态存储器、栈、堆、文件描述符、I/O）
        - 线程资源需要（在同一个进程内和其他线程共享以上（除了栈）的资源，但是每个线程都有独立的程序计数器、栈计数器、寄存器和栈）
        - Fork 操作是真正的写时复制（只读），直到新的进程写到内存中，才会生成一份新的拷贝。
        - 上下文切换
            - 操作系统和底层硬件是如何初始化上下文切换的？
    - [ ] [C++ 的线程 (系列 - 10 个视频)](https://www.youtube.com/playlist?list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M)
    - [ ] Python 的并发 (视频):
        - [ ] [线程系列](https://www.youtube.com/playlist?list=PL1H1sBF1VAKVMONJWJkmUh6_p8g4F2oy1)
        - [ ] [Python 线程](https://www.youtube.com/watch?v=Bs7vPNbB9JM)
        - [ ] [理解 Python 的 GIL (2010)](https://www.youtube.com/watch?v=Obt-vMVdM8s)
            - [参考](http://www.dabeaz.com/GIL)
        - [ ] [David Beazley - Python 协程 - PyCon 2015](https://www.youtube.com/watch?v=MCs5OvhV9S4)
        - [ ] [Keynote David Beazley - 兴趣主题 (Python 异步 I/O)](https://www.youtube.com/watch?v=ZzfHjytDceU)
        - [ ] [Python 中的互斥](https://www.youtube.com/watch?v=0zaPs8OtyKY)

- ### 测试
    - 涵盖了:
        - 单元测试是如何工作的
        - 什么是模拟对象
        - 什么是集成测试
        - 什么是依赖注入
    - [ ] [James Bach 讲敏捷软件测试（视频）](https://www.youtube.com/watch?v=SAhJf36_u5U)
    - [ ] [James Bach 软件测试公开课（视频）](https://www.youtube.com/watch?v=ILkT_HV9DVU)
    - [ ] [Steve Freeman - 测试驱动的开发（视频）](https://vimeo.com/83960706)
        - [slides](http://gotocon.com/dl/goto-berlin-2013/slides/SteveFreeman_TestDrivenDevelopmentThatsNotWhatWeMeant.pdf)
    - [ ] [Python：测试驱动的 Web 开发](http://www.obeythetestinggoat.com/pages/book.html#toc)
    - [ ] 依赖注入:
        - [ ] [视频](https://www.youtube.com/watch?v=IKD2-MAkXyQ)
        - [ ] [测试之道](http://jasonpolites.github.io/tao-of-testing/ch3-1.1.html)
    - [ ] [如何编写测试](http://jasonpolites.github.io/tao-of-testing/ch4-1.1.html)

- ### 调度
    - 在操作系统中是如何运作的
    - 在操作系统部分的视频里有很多资料

- ### 字符串搜索和操作
    - [ ] [Sedgewick──后缀数组（Suffix Arrays）（视频）](https://www.coursera.org/learn/algorithms-part2/lecture/TH18W/suffix-arrays)
    - [ ] [Sedgewick──子字符串搜寻（视频）](https://www.coursera.org/learn/algorithms-part2/home/week/4)
        - [ ] [1. 子字符串搜寻导论](https://www.coursera.org/learn/algorithms-part2/lecture/n3ZpG/introduction-to-substring-search)
        - [ ] [2. 子字符串搜寻──暴力法](https://www.coursera.org/learn/algorithms-part2/lecture/2Kn5i/brute-force-substring-search)
        - [ ] [3. KMP算法](https://www.coursera.org/learn/algorithms-part2/lecture/TAtDr/knuth-morris-pratt)
        - [ ] [4. Boyer-Moore算法](https://www.coursera.org/learn/algorithms-part2/lecture/CYxOT/boyer-moore)
        - [ ] [5. Rabin-Karp算法](https://www.coursera.org/learn/algorithms-part2/lecture/3KiqT/rabin-karp)
    - [ ] [文本的搜索模式（视频）](https://www.coursera.org/learn/data-structures/lecture/tAfHI/search-pattern-in-text)

如果你需要有关此主题的更多详细信息，请参阅“[一些主题的额外内容](#一些主题的额外内容)”中的“字符串匹配”部分。

- ### 字典树（Tries）

    - 需要注意的是，字典树各式各样。有些有前缀，而有些则没有。有些使用字符串而不使用比特位来追踪路径。
    - 阅读代码，但不实现。
    - [Sedgewick──字典树（3个视频）](https://www.coursera.org/learn/algorithms-part2/home/week/4)
        - [ ] [1. R Way字典树](https://www.coursera.org/learn/algorithms-part2/lecture/CPVdr/r-way-tries)
        - [ ] [2. 三元搜索树](https://www.coursera.org/learn/algorithms-part2/lecture/yQM8K/ternary-search-tries)
        - [ ] [3. 基于字符串的操作](https://www.coursera.org/learn/algorithms-part2/lecture/jwNmV/character-based-operations)
    - [ ] [数据结构笔记及编程技术](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Tries)
    - [ ] 短课程视频：
        - [ ] [对字典树的介绍（视频）](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/08Xyf/core-introduction-to-tries)
        - [ ] [字典树的性能（视频）](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/PvlZW/core-performance-of-tries)
        - [ ] [实现一棵字典树（视频）](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/DFvd3/core-implementing-a-trie)
    - [ ] [字典树：一个被忽略的数据结构](https://www.toptal.com/java/the-trie-a-neglected-data-structure)
    - [ ] [TopCoder —— 使用字典树](https://www.topcoder.com/community/data-science/data-science-tutorials/using-tries/)
    - [ ] [标准教程（现实中的用例）（视频）](https://www.youtube.com/watch?v=TJ8SkcUSdbU)
    - [ ] [MIT，高阶数据结构，字符串（视频中间有点困难）（视频）](https://www.youtube.com/watch?v=NinWEPPrkDQ&index=16&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf)

- ### 浮点数

    - [ ] 简单8位：[浮点数的表示形式-1（视频──计算中存在错误，请参见视频说明）](https://www.youtube.com/watch?v=ji3SfClm8TU)
    - [ ] 32位：[IEEE754 32位浮点二进制（视频）](https://www.youtube.com/watch?v=50ZYcZebIec)

- ### Unicode
    - [ ] [每一个软件开发者的绝对最低限度，必须要知道的关于 Unicode 和字符集知识](http://www.joelonsoftware.com/articles/Unicode.html)
    - [ ] [关于处理文本需要的编码和字符集，每个程序员绝对需要知道的知识](http://kunststube.net/encoding/)

- ### 字节序（Endianness）
    - [大/小端序](https://web.archive.org/web/20180107141940/http://www.cs.umd.edu:80/class/sum2003/cmsc311/Notes/Data/endian.html)
    - [大端序 Vs 小端序（视频）](https://www.youtube.com/watch?v=JrNF0KRAlyo)
    - [由里入内的大端序与小端序（视频）](https://www.youtube.com/watch?v=oBSuXP-1Tc0)
        - 对于内核开发非常具有技术性，如果大多数的内容听不懂也没关系。
        - 前半部就已经足够了。

- ### 网络（视频）
    - **如果你具有网络经验或想成为可靠性工程师或运维工程师，期待你的问题**
    - 知道这些有益无害，多多益善!
    - [ ] [可汗学院](https://www.khanacademy.org/computing/computer-science/computers-and-internet-code-org)
    - [ ] [UDP 和 TCP：网络传输协议中的数据压缩（视频）](https://www.youtube.com/watch?v=Vdc8TCESIg8)
    - [ ] [TCP/IP 和 OSI 模型解释！（视频）](https://www.youtube.com/watch?v=e5DEVa9eSN0)
    - [ ] [互联网上的数据包传输。网络和 TCP/IP 教程。（视频）](https://www.youtube.com/watch?v=nomyRJehhnM)
    - [ ] [HTTP（视频）](https://www.youtube.com/watch?v=WGJrLqtX7As)
    - [ ] [SSL 和 HTTPS（视频）](https://www.youtube.com/watch?v=S2iBR2ZlZf0)
    - [ ] [SSL/TLS（视频）](https://www.youtube.com/watch?v=Rp3iZUvXWlM)
    - [ ] [HTTP 2.0（视频）](https://www.youtube.com/watch?v=E9FxNzv1Tr8)
    - [ ] [视频系列（21个视频）](https://www.youtube.com/playlist?list=PLEbnTDJUr_IegfoqO4iPnPYQui46QqT0j)
    - [ ] [子网络解密 - 第五部分 经典内部域名指向 CIDR 标记（视频）](https://www.youtube.com/watch?v=t5xYI0jzOf4)
    - [ ] 套接字（Sockets）：
        - [Java──套接字──介绍（视频）](https://www.youtube.com/watch?v=6G_W54zuadg&t=6s)
        - [套接字编程（视频）](https://www.youtube.com/watch?v=G75vN2mnJeQ)

## 系统设计、可伸缩性、数据处理

**如果你已经拥有了4年以上的编程经验，那你可以来看看有关系统设计的问题**
    
- 系统设计以及可伸缩性，要把软硬件的伸缩性设计的足够好有很多的东西要考虑，所以这是个包含非常多内容和资源的大主题。要花费相当多的时间在这个主题上。
- 考量：
    - 伸缩性
        - 把大数据集提取为单一值
        - 大数据集转换
        - 处理大量的数据集
    - 系统
        - 功能集
        - 接口
        - 类层次结构
        - 在特定的约束下设计系统
        - 轻量和健壮性
        - 权衡和折衷
        - 性能分析和优化
- [ ] **从这里开始**：[系统设计入门](https://github.com/donnemartin/system-design-primer)
- [ ] [HiredInTech：系统设计](http://www.hiredintech.com/system-design/)
- [ ] [该如何为技术面试里设计方面的问题做准备?](https://www.quora.comHow-do-I-prepare-to-answer-design-questions-in-a-technical-interview?redirected_qid=1500023)
- [ ] [在系统设计面试前必须知道的 8 件事](http://blog.gainlo.co/index.php/2015/10/228-things-you-need-to-know-before-system-design-interviews/)
- [ ] [算法设计](http://www.hiredintech.com/algorithm-design/)
- [ ] [数据库范式 - 1NF, 2NF, 3NF and 4NF（视频）](https://www.youtube.com/watch?v=UrYLYV7WSHM)
- [ ] [系统设计面试](https://github.com/checkcheckzz/system-design-interview) - 这一部分有很多的资源浏览一下我放在下面的文章和例子。
- [ ] [如何在系统设计面试中脱颖而出](http://www.palantir.com/2011/10how-to-rock-a-systems-design-interview/)
- [ ] [每个人都该知道的一些数字](http://everythingisdata.wordpress.com/2009/10/17numbers-everyone-should-know/)
- [ ] [上下文切换操作会耗费多少时间?](http://blog.tsunanet.net/2010/11how-long-does-it-take-to-make-context.html)
- [ ] [跨数据中心的事务（视频）](https://www.youtube.com/watch?v=srOgpXECblk)
- [ ] [简明 CAP 理论介绍](http://ksat.me/a-plain-english-introduction-to-cap-theorem/)
- [ ] 共识算法：
    - [ ] Paxos：[Paxos协议──Computerphile（视频）](https://www.youtube.com/watch?v=s8JqcZtvnsM)
    - [ ] Raft: [Raft 分布式共识算法简介（视频）](https://www.youtube.com/watch?v=P9Ydif5_qvE)
        - [ ] [易于阅读的论文](https://raft.github.io/)
        - [ ] [信息图]
- [ ] [一致性哈希](http://www.tom-e-white.com/2007/11/consistent-hashing.html)
- [ ] [NoSQL 模式](http://horicky.blogspot.com/2009/11/nosql-patterns.html)
- [ ] 可伸缩性:
    - 你不需要知道所有这些。只需挑选一些你感兴趣的东西即可。
    - [ ] [很棒的概述（视频）](https://www.youtube.com/watch?v=-W9F__D3oY4)
    - [ ] 简短系列:
        - [克隆](http://www.lecloud.net/post/7295452622/scalability-for-dummies-part-1-clones)
        - [数据库](http://www.lecloud.net/post/7994751381/scalability-for-dummies-part-2-database)
        - [缓存](http://www.lecloud.net/post/9246290032/scalability-for-dummies-part-3-cache)
        - [异步](http://www.lecloud.net/post/9699762917/scalability-for-dummies-part-4-asynchronism)
    - [ ] [可伸缩的 Web 架构和分布式系统](http://www.aosabook.org/en/distsys.html)
    - [ ] [错误的分布式系统解释](https://pages.cs.wisc.edu/~zuyu/files/fallacies.pdf)
    - [ ] [实用编程技术](http://horicky.blogspot.com/2010/10/scalable-system-design-patterns.html)
        - [extra: Google Pregel 图形处理](http://horicky.blogspot.com/2010/07/google-pregel-graph-processing.html)
    - [ ] [Jeff Dean - 在 Goolge 构建软件系统（视频）](https://www.youtube.com/watch?v=modXC5IWTJI)
    - [ ] [可伸缩系统架构设计介绍](http://lethain.com/introduction-to-architecting-systems-for-scale/)
    - [ ] [使用 App Engine 和云存储扩展面向全球用户的手机游戏架构实践（视频）](https://www.youtube.com/watch?v=9nWyWwY2Onc)
    - [ ] [How Google Does Planet-Scale Engineering for Planet-Scale Infra（视频）](https://www.youtube.com/watch?v=H4vMcD7zKM0)
    - [ ] [算法的重要性](https://www.topcoder.com/community/data-science/data-science-tutorials/the-importance-of-algorithms/)
    - [ ] [分片（Sharding）](http://highscalability.com/blog/2009/8/6/an-unorthodox-approach-to-database-design-the-coming-of-the.html)
    - [ ] [Facebook 系统规模扩展实践 (2012), "为 10 亿用户构建"（视频）](https://www.youtube.com/watch?v=oodS71YtkGU)
    - [ ] [Long Game 工程实践 - Astrid Atkinson Keynote（视频）](https://www.youtube.com/watch?v=p0jGmgIrf_M&list=PLRXxvay_m8gqVlExPC5DG3TGWJTaBgqSA&index=4)
    - [ ] [30 分钟看完 YouTuBe 7 年系统扩展经验](http://highscalability.com/blog/2012/3/26/7-years-of-youtube-scalability-lessons-in-30-minutes.html)
        - [视频](https://www.youtube.com/watch?v=G-lGCC4KKok)
    - [ ] [PayPal 如何用 8 台虚拟机扛住 10 亿日交易量系统](http://highscalability.com/blog/2016/8/15/how-paypal-scaled-to-billions-of-transactions-daily-using-ju.html)
    - [ ] [如何对大数据集去重](https://blog.clevertap.com/how-to-remove-duplicates-in-large-datasets/)
    - [ ] [Etsy 的扩展和工程文化探究 Jon Cowie（视频）](https://www.youtube.com/watch?v=3vV4YiqKm1o)
    - [ ] [是什么造就了 Amazon 自己的微服务架构](http://thenewstack.io/led-amazon-microservices-architecture/)
    - [ ] [压缩还是不压缩，是 Uber 面临的问题](https://eng.uber.com/trip-data-squeeze/)
    - [ ] [异步 I/O Tarantool 队列](http://highscalability.com/blog/2016/3/3/asyncio-tarantool-queue-get-in-the-queue.html)
    - [ ] [什么时候应该用近似查询处理?](http://highscalability.com/blog/2016/2/25/when-should-approximate-query-processing-be-used.html)
    - [ ] [Google 从单数据中心到故障转移, 到本地多宿主架构的演变](http://highscalability.com/blog/2016/2/23/googles-transition-from-single-datacenter-to-failover-to-a-n.html)
    - [ ] [Spanner](http://highscalability.com/blog/2012/9/24/google-spanners-most-surprising-revelation-nosql-is-out-and.html)
    - [ ] [Egnyte: 构建和扩展 PB 级分布式系统架构的经验教训](http://highscalability.com/blog/2016/2/15/egnyte-architecture-lessons-learned-in-building-and-scaling.html)
    - [ ] [机器学习驱动的编程: 新世界的新编程方式](http://highscalability.com/blog/2016/7/6/machine-learning-driven-programming-a-new-programming-for-a.html)
    - [ ] [日服务数百万请求的图像优化技术](http://highscalability.com/blog/2016/6/15/the-image-optimization-technology-that-serves-millions-of-re.html)
    - [ ] [Patreon 架构](http://highscalability.com/blog/2016/2/1/a-patreon-architecture-short.html)
    - [ ] [Tinder: 推荐引擎是如何决定下一个你将会看到谁的?](http://highscalability.com/blog/2016/1/27/tinder-how-does-one-of-the-largest-recommendation-engines-de.html)
    - [ ] [现代缓存设计](http://highscalability.com/blog/2016/1/25/design-of-a-modern-cache.html)
    - [ ] [Facebook 实时视频流扩展](http://highscalability.com/blog/2016/1/13/live-video-streaming-at-facebook-scale.html)
    - [ ] [在 Amazon AWS 上把服务扩展到 1100 万量级的新手教程](http://highscalability.com/blog/2016/1/11/a-beginners-guide-to-scaling-to-11-million-users-on-amazons.html)
    - [ ] [对延时敏感的应用是否应该使用 Docker?](http://highscalability.com/blog/2015/12/16/how-does-the-use-of-docker-effect-latency.html)
    - [ ] [360 度解读 Netflix 技术栈](http://highscalability.com/blog/2015/11/9/a-360-degree-view-of-the-entire-netflix-stack.html)
    - [ ] [延迟无处不在 - 如何搞定它？](http://highscalability.com/latency-everywhere-and-it-costs-you-sales-how-crush-it)
    - [ ] [无服务器架构](http://martinfowler.com/articles/serverless.html)
    - [ ] [是什么驱动着 Instagram: 上百个实例、几十种技术](http://instagram-engineering.tumblr.com/post/13649370142/what-powers-instagram-hundreds-of-instances)
    - [ ] [Cinchcast 架构 - 每天处理 1500 小时的音频](http://highscalability.com/blog/2012/7/16/cinchcast-architecture-producing-1500-hours-of-audio-every-d.html)
    - [ ] [Justin.Tv 实时视频播放架构](http://highscalability.com/blog/2010/3/16/justintvs-live-video-broadcasting-architecture.html)
    - [ ] [Playfish's 社交游戏架构 - 每月五千万用户增长](http://highscalability.com/blog/2010/9/21/playfishs-social-gaming-architecture-50-million-monthly-user.html)
    - [ ] [猫途鹰架构 - 40 万访客, 200 万动态页面访问, 30TB 数据](http://highscalability.com/blog/2011/6/27/tripadvisor-architecture-40m-visitors-200m-dynamic-page-view.html)
    - [ ] [PlentyOfFish 架构](http://highscalability.com/plentyoffish-architecture)
    - [ ] [Salesforce 架构 - 如何扛住 13 亿日交易量](http://highscalability.com/blog/2013/9/23/salesforce-architecture-how-they-handle-13-billion-transacti.html)
    - [ ] [ESPN's 架构扩展](http://highscalability.com/blog/2013/11/4/espns-architecture-at-scale-operating-at-100000-duh-nuh-nuhs.html)
    - [ ] 下面“消息传递，序列化和队列系统”部分的内容会提到什么样的技术能把各种服务整合到一起
    - [ ] Twitter:
        - [O'Reilly MySQL CE 2011: Jeremy Cole, "Big and Small Data at @Twitter"（视频）](https://www.youtube.com/watch?v=5cKTP36HVgI)
        - [时间线的扩展](https://www.infoq.com/presentations/Twitter-Timeline-Scalability)
    - 更多内容可以查看[视频系列部分](#视频系列)的“大规模数据挖掘”视频系列。
- [ ] 系统设计问题练习：下面有一些指导原则，每一个都有相关文档以及在现实中该如何处理。
    - 复习: [系统设计入门](https://github.com/donnemartin/system-design-primer)
    - [HiredInTech 的系统设计](http://www.hiredintech.com/system-design/)
    - [备忘单](https://github.com/jwasham/coding-interview-university/blob/main/extras/cheat%20sheets/system-design.pdf)
    - 流程:
        1. 理解问题和范围:
            - 在面试官的帮助下定义用例
            - 提出附加功能的建议
            - 去掉面试官认定范围以外的内容
            - 假定高可用是必须的，而且要作为一个用例
        2. 考虑约束:
            - 问一下每月请求量
            - 问一下每秒请求量 (他们可能会主动提到或者让你算一下)
            - 评估读写所占的百分比
            - 评估的时候牢记 2/8 原则
            - 每秒写多少数据
            - 总的数据存储量要考虑超过 5 年的情况
            - 每秒读多少数据
        3. 抽象设计:
            - 分层 (服务, 数据, 缓存)
            - 基础设施: 负载均衡, 消息
            - 粗略的概括任何驱动整个服务的关键算法
            - 考虑瓶颈并指出解决方案
    - 练习:
        - [设计一个 CDN 网络](http://repository.cmu.edu/cgi/viewcontent.cgi?article=2112&context=compsci)
        - [设计一个随机唯一 ID 生成系统](https://blog.twitter.com/2010/announcing-snowflake)
        - [设计一个在线多人卡牌游戏](http://www.indieflashblog.com/how-to-create-an-asynchronous-multiplayer-game.html)
        - [设计一个键值数据库](http://www.slideshare.net/dvirsky/introduction-to-redis)
        - [设计一个图片分享系统](http://highscalability.com/blog/2011/12/6/instagram-architecture-14-million-users-terabytes-of-photos.html)
        - [设计一个推荐系统](http://ijcai13.org/files/tutorial_slides/td3.pdf)
        - [设计一个短域名生成系统](http://www.hiredintech.com/system-design/the-system-design-process/)
        - [设计一个缓存系统](https://www.adayinthelifeof.nl/2011/02/06/memcache-internals/)

---

## 终面

    这一部分有一些短视频，你可以快速的观看和复习大多数重要概念。
    这对经常性的巩固很有帮助。

- [ ] 2-3分钟的简短主题视频系列（23个视频）
    - [视频](https://www.youtube.com/watch?v=r4r1DZcx1cM&list=PLmVb1OknmNJuC5POdcDv5oCS7_OUkDgpj&index=22)
- [ ] 2-5分钟的简短主题视频系列──Michael Sambol（18个视频）：
    - [视频](https://www.youtube.com/channel/UCzDJwLWoYCUQowF_nG3m5OQ)
- [ ] [Sedgewick 视频 ── 算法I](https://www.coursera.org/learn/algorithms-part1)
- [ ] [Sedgewick 视频 ── 算法II](https://www.coursera.org/learn/algorithms-part2)

## 编程问题练习

现在你已经了解了上面所有的计算机科学主题，是时候练习回答编程问题了。

**编程问题的实践并不是要记住编程问题的答案**。

为什么需要练习编程问题：

- 快速识别问题，以及如何应用正确的数据结构及算法
- 收集问题的要求
- 像在面试中一样谈论问题
- 在白板或纸上而非计算机上编码
- 计算解决方案的时间和空间的复杂性
- 测试你的解决方案

这里有个很棒的入门教学，内容是如何在面试中有条不紊，并且有互动沟通地解决问题。这种能力可以从面试书籍中获得，但我觉得这个也很棒：[算法设计画布](http://www.hiredintech.com/algorithm-design/)。

家里没有白板？那讲得通。我是一个怪人，有一个很大的白板。从白板商店买了一个大的绘图板，而不是白板。你可以坐在沙发上练习。这是我的“沙发白板”。我在照片中添加了笔以便进行缩放。如果你使用笔，则希望可以擦除。快速变得凌乱。我用铅笔和橡皮擦。

![我的沙发白板](https://d3j2pkmjtin6ou.cloudfront.net/art_board_sm_2.jpg)

补充：

- [Topcoder的数学](https://www.topcoder.com/community/competitive-programming/tutorials/mathematics-for-topcoders/)
- [动态编程──从新手到高级](https://www.topcoder.com/community/competitive-programming/tutorials/dynamic-programming-from-novice-to-advanced/)
- [MIT 面试材料](https://web.archive.org/web/20160906124824/http://courses.csail.mit.edu/iap/interview/materials.php)
- [练习以掌握特定语言](http://exercism.io/languages)

**阅读并练习编程问题（按此顺序）**：

- [ ] [编程面试公开：下一份工作的秘密，第二版](http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html)
    - C，C ++ 和 Java 的答案
- [ ] [破解编码面试，第六版](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - Java 答案

请参阅上方的[书单](#书单)。

## 编程练习和挑战

一旦你学会了理论基础，就应该把它们拿出来练练。
尽量坚持每天做编码练习，越多越好。

- [如何找到解决方案](https://www.topcoder.com/community/competitive-programming/tutorials/how-to-find-a-solution/)
- [如何剖析 Topcoder 题目描述](https://www.topcoder.com/community/competitive-programming/tutorials/how-to-dissect-a-topcoder-problem-statement/)

编码面试问题视频：

- [IDeserve（88个视频）](https://www.youtube.com/watch?v=NBcqBddFbZw&list=PLamzFoFxwoNjPfxzaWqs7cZGsPYy0x_gI)
- [Tushar Roy（5个播放列表）](https://www.youtube.com/user/tusharroy2525/playlists?shelf_id=2&view=50&sort=dd)
    - 超级解决问题的方法
- [Nick White──LeetCode 解题（187个视频）](https://www.youtube.com/playlist?list=PLU_sdQYzUj2keVENTP0a5rdykRSgg9Wp-)
    - 良好的解决方案和代码解释
    - 你可以在短时间内看好几个
- [FisherCoder──LeetCode 解题](https://youtube.com/FisherCoder)

编码练习平台:

- [LeetCode](https://leetcode.com/)
    - 我最喜欢的编码问题网站，值得你准备的1-2个月的订阅费用
    - [FisherCoder 的 LeetCode 解题](https://github.com/fishercoder1534/Leetcode)
    - 请参阅上面的 Nick White 视频，以获得简短的代码
- [HackerRank](https://www.hackerrank.com/)
- [TopCoder](https://www.topcoder.com/)
- [InterviewCake](https://www.interviewcake.com/)
- [http://www.geeksforgeeks.org/](http://www.geeksforgeeks.org/)
- [InterviewBit](https://www.interviewbit.com)
- [Project Euler (数学方向为主)](https://projecteuler.net/index.php?section=problems)
- [Code Exercises](https://code-exercises.com/)

语言学习网站，附带编码挑战：

- [Codewars](http://www.codewars.com)
- [Codility](https://codility.com/programmers/)
- [HackerEarth](https://www.hackerearth.com/)
- [Sphere Online Judge (spoj)](http://www.spoj.com/)
- [Codechef](https://www.codechef.com/)

编码挑战项目：

- [Python 交互式编码面试挑战](https://github.com/donnemartin/interactive-coding-challenges)

模拟面试：

- [Gainlo.co：来自大公司的模拟面试官](http://www.gainlo.co/)──我使用了它，它帮助我减轻了电话屏幕和现场面试的压力
- [Pramp：模拟来自/与同行的面试](https://www.pramp.com/)──点对点方式练习面试
- [Refdash：模拟面试和加急面试](https://refdash.com/)──跳过与科技公司的多次面试，帮助求职者快速追踪
- [interviewing.io：与高级工程师进行模拟面试](https://interviewing.io/)──与来自 FAANG（译者注：Facebook, Amazon, Apple, Netflix and Google） 的高级工程师进行匿名算法/系统设计面试。

## 当你临近面试时

- 搞定代码面试──第二集 (视频):
    - [Cracking The Code Interview](https://www.youtube.com/watch?v=4NIb9l3imAo)
    - [Cracking the Coding Interview - 全栈系列](https://www.youtube.com/watch?v=Eg5-tdAwclo)

## 你的简历

- 请参阅“破解编码面试”和“编程面试的背面”中的建立准备项。

## 当面试来临的时候

随着下面列举的问题思考下你可能会遇到的 20 个面试问题，每个问题准备 2-3 种回答。准备点故事，不要只是摆一些你完成的事情的数据，相信我，人人都喜欢听故事。

- 你为什么想得到这份工作？
- 你解决过的最有难度的问题是什么？
- 面对过的最大挑战是什么?
- 见过的最好或者最坏的设计是怎么样的?
- 对某个产品提出改进建议。
- 你作为一个个体同时也是团队的一员，如何达到最好的工作状态?
- 你的什么技能或者经验是你的角色中不可或缺的，为什么？
- 你在某份工作或某个项目中最享受的是什么?
- 你在某份工作或某个项目中面临过的最大挑战是什么?
- 你在某份工作或某个项目中遇到过的最硬的 Bug 是什么样的？
- 你在某份工作或某个项目中学到了什么？
- 你在某份工作或某个项目中哪些地方还可以做的更好？

## 问面试官的问题

    我会问的一些：(可能我已经知道了答案但我想听听面试官的看法或者了解团队的前景):

- 团队多大规模?
- 开发周期是怎样的? 会使用瀑布流/极限编程/敏捷开发么?
- 经常会为截止日期（deadlines）加班么? 或者是有弹性的?
- 团队里怎么做技术选型?
- 每周平均开多少次会?
- 你觉得工作环境有助于员工集中精力吗?
- 目前正在做什么工作?
- 喜欢这些事情吗?
- 工作期限是怎么样的?
- 工作生活怎么平衡?

## 当你获得了梦想的职位

恭喜你！

继续学习。

活到老，学到老。

---

    *****************************************************************************************************
    *****************************************************************************************************

    下面的内容都是可选的。
    通过学习这些内容，你将会得到更多的有关 CS 的概念，并将为所有的软件工程工作做更好的准备。你将会成为一个更全面的软件工程师。

    *****************************************************************************************************
    *****************************************************************************************************

---

## 额外书籍

    你可以从以下的书单挑选你有兴趣的主题来研读。

- [UNIX环境高级编程](https://www.amazon.com/dp/013937681X)
    - 老，但却很棒
- [Linux 命令行大全](https://www.amazon.com/dp/1593273894/)
    - 现代选择
- [TCP-IP详解系列](https://en.wikipedia.org/wiki/TCP/IP_Illustrated)
- [Head First 设计模式](https://www.amazon.com/gp/product/0596007124/)
    - 设计模式入门介绍
- [设计模式：可复用面向对象软件的基础](https://www.amazon.com/Design-Patterns-Elements-Reusable-Object-Oriented/dp/0201633612)
    - 也被称为“四人帮”（Gang of Four(GOF)）
    - 经典设计模式书籍
- [Linux 和 UNIX 系统管理技术手册（第五版）](https://www.amazon.com/UNIX-Linux-System-Administration-Handbook/dp/0134277554/)
- [算法设计手冊（Skiena）](http://www.amazon.com/Algorithm-Design-Manual-Steven-Skiena/dp/1849967202)
    - 作为复习以及问题辨别
    - 这本书中算法的部分难度已经超过面试会出现的
    - 本书分为两个部分:
        - 数据结构和算法课本
            - 优点:
                - 跟其他算法课本一样是个很棒的复习素材
                - 包含作者以往解决工业及学术上问题的经验的故事
                - 含C语言代码示例
            - 缺点:
                - 某些地方跟《算法导论》（CLRS）一样艰深，但在某些主题，算法导论或许是更好的选择。
                - 第7、8、9章有点难以消化，因为某些地方并没有解释得很清楚，或者根本上我就是个学渣
                - 别会错意了，我很喜欢 Skiena 的教学方法以及他的风格。
        - 算法目录:
            - 这个部分是买这本书的最大原因
            - 我即将着手进行这部分，一旦完成这部分我会再更新上来
    - 可以在 kindle 上租
    - 解答：
        - [解答](http://www.algorithm.cs.sunysb.edu/algowiki/index.php/The_Algorithms_Design_Manual_(Second_Edition))
        - [解答](http://blog.panictank.net/category/algorithmndesignmanualsolutions/page/2/)
    - [勘误表](http://www3.cs.stonybrook.edu/~skiena/algorist/book/errata)

- [编程卓越之道（第一卷）：深入理解计算机](https://www.amazon.com/Write-Great-Code-Understanding-Machine/dp/1593270038)

    - 该书于2004年出版，虽然有些过时，但是对于简单了解计算机而言，这是一个了不起的资源
    - 作者发明了[高阶组合语言 HLA](https://en.wikipedia.org/wiki/High_Level_Assembly)，所以提到，并且举了一些HLA的例子。里面没有用到很多，但都是很棒的组合语言的例子。
    - 这些章节值得阅读，为你提供良好的基础：
        - 第2章──数字表示
        - 第3章──二进制算术和位运算
        - 第4章──浮点表示
        - 第5章──字符表示
        - 第6章──内存组织和访问
        - 第7章──组合数据类型和内存对象
        - 第9章──CPU体系结构
        - 第10章──指令集架构
        - 第11章──内存体系结构和组织

- [算法导论](https://www.amazon.com/Introduction-Algorithms-3rd-MIT-Press/dp/0262033844)
    - **重要提示**：读这本书的价值有限。本书很好地回顾了算法和数据结构，但不会教你如何编写良好的代码。你必须能够有效地编写一个不错的解决方案
    - 又称 CLR，有时是 CLRS，因为 Stein 最后才加入

- [计算机体系结构：量化研究方法（第6版）](https://www.amazon.com/dp/0128119055)
    - 更丰富、更新（2017年），但篇幅较长
- [编程珠矶](http://www.amazon.com/Programming-Pearls-2nd-Jon-Bentley/dp/0201657880)
    - 前几章介绍了解决编程问题（非常古老，甚至还用数据磁带）的巧妙解决方案，但这只是一个介绍。这是关于程序设计和体系结构的指南

## 附加学习

    我把它们加进来是为了让你成为更全方位的软件工程师，并且留意一些技术以及算法，让你拥有更大的工具箱。

- ### 编译器

    - [编译器的工作方式，约1分钟（视频）](https://www.youtube.com/watch?v=IhC7sdYe-Jg)
    - [Harvard CS50-编译器（视频）](https://www.youtube.com/watch?v=CSZLNYF4Klo)
    - [C ++（视频）](https://www.youtube.com/watch?v=twodd1KFfGk)
    - [了解编译器优化（C ++）（视频）](https://www.youtube.com/watch?v=FnGCDLhaxKU)

- ### Emacs and vi(m)
    - 熟悉基于 unix 的代码编辑器
    - vi(m):
        - [使用 vim 进行编辑 01 - 安装, 设置和模式 (视频)](https://www.youtube.com/watch?v=5givLEMcINQ&index=1&list=PL13bz4SHGmRxlZVmWQ9DvXo1fEg4UdGkr)
        - [VIM 的冒险之旅](http://vim-adventures.com/)
        - 4 个视频集:
            - [vi/vim 编辑器 - 课程 1](https://www.youtube.com/watch?v=SI8TeVMX8pk)
            - [vi/vim 编辑器 - 课程 2](https://www.youtube.com/watch?v=F3OO7ZIOaJE)
            - [vi/vim 编辑器 - 课程 4](https://www.youtube.com/watch?v=1lYD5gwgZIA)
            - [vi/vim 编辑器 - 课程 3](https://www.youtube.com/watch?v=ZYEccA_nMaI)
        - [使用 Vi 而不是 Emacs](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Using_Vi_instead_of_Emacs)
    - emacs:
        - [基础 Emacs 教程 (视频)](https://www.youtube.com/watch?v=hbmV1bnQ-i0)
        - 3 个视频集:
            - [Emacs 教程 (初学者) -第 1 部分- 文件命令, 剪切/复制/粘贴,  自定义命令](https://www.youtube.com/watch?v=ujODL7MD04Q)
            - [Emacs 教程 (初学者 -第 2 部分- Buffer 管理, 搜索, M-x grep 和 rgrep 模式](https://www.youtube.com/watch?v=XWpsRupJ4II)
            - [Emacs 教程 (初学者 -第 3 部分- 表达式, 声明, ~/.emacs 文件和包机制](https://www.youtube.com/watch?v=paSgzPso-yc)
        - [Evil 模式: 或许, 我是怎样对 Emacs 路人转粉的 (视频)](https://www.youtube.com/watch?v=JWD1Fpdd4Pc)
        - [使用 Emacs 开发 C 程序](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Writing_C_programs_with_Emacs)
        - [(或许) 深度组织模式:管理结构 (视频)](https://www.youtube.com/watch?v=nsGYet02bEk)

- ### Unix 命令行工具
    - 下列内容包含优秀工具
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

- ### 信息论 (视频)
    - [Khan Academy 可汗学院](https://www.khanacademy.org/computing/computer-science/informationtheory)
    - 更多有关马尔可夫的内容:
        - [马尔可夫内容生成（Core Markov Text Generation）](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/waxgx/core-markov-text-generation)
        - [Core Implementing Markov Text Generation马尔可夫内容生成实现](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/gZhiC/core-implementing-markov-text-generation)
        - [一个马尔可夫内容生成器的项目（Project = Markov Text Generation Walk Through）](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/EUjrq/project-markov-text-generation-walk-through)
    - 关于更多信息，请参照下方 MIT 6.050J 信息和系统复杂度的内容。

- ### 奇偶校验位 & 汉明码 (视频)
    - [入门](https://www.youtube.com/watch?v=q-3BctoUpHE)
    - [奇偶校验位](https://www.youtube.com/watch?v=DdMcAUlxh1M)
    - 汉明码(Hamming Code):
        - [发现错误](https://www.youtube.com/watch?v=1A_NcXxdoCc)
        - [修正错误](https://www.youtube.com/watch?v=JAMLuxdHH8o)
    - [检查错误](https://www.youtube.com/watch?v=wbH2VxzmoZk)

- ### 系统熵值（Entropy）
    - 请参考下方视频
    - 观看之前，请先确定观看了信息论的视频
    - [信息理论, 克劳德·香农, 熵值, 系统冗余, 数据比特压缩 (视频)](https://youtu.be/JnJq3Py0dyM?t=176)

- ### 密码学
    - 请参考下方视频
    - 观看之前，请先确定观看了信息论的视频
    - [可汗学院](https://www.khanacademy.org/computing/computer-science/密码学)
    - [密码学: 哈希函数](https://www.youtube.com/watch?v=KqqOXndnvic&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=30)
    - [密码学: 加密](https://www.youtube.com/watch?v=9TNI2wHmaeI&index=31&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

- ### 压缩
    - 观看之前，请先确定观看了信息论的视频
    - Computerphile (视频)：
        - [压缩](https://www.youtube.com/watch?v=Lto-ajuqW3w)
        - [压缩熵值](https://www.youtube.com/watch?v=M5c_RFKVkko)
        - [由上而下的树 (霍夫曼编码树)](https://www.youtube.com/watch?v=umTbivyJoiI)
        - [额外比特 - 霍夫曼编码树](https://www.youtube.com/watch?v=DV8efuB3h2g)
        - [优雅的压缩数据 (无损数据压缩方法)](https://www.youtube.com/watch?v=goOa3DGezUA)
        - [Text Compression Meets Probabilities](https://www.youtube.com/watch?v=cCDCfoHTsaU)
    - [数据压缩的艺术](https://www.youtube.com/playlist?list=PLOU2XLYxmsIJGErt5rrCqaSGTMyyqNt2H)
    - [(可选) 谷歌开发者：GZIP 还差远了呢!](https://www.youtube.com/watch?v=whGwm0Lky2s)

- ### 计算机安全
    - [MIT（23个视频）](https://www.youtube.com/playlist?list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [威胁模型：入门](https://www.youtube.com/watch?v=GqmQg-cszw4&index=1&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [控制劫持攻击](https://www.youtube.com/watch?v=6bwzNg5qQ0o&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh&index=2)
        - [缓冲区溢出漏洞攻击和防御](https://www.youtube.com/watch?v=drQyrzRoRiA&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh&index=3)
        - [优先权区分](https://www.youtube.com/watch?v=6SIJmoE9L9g&index=4&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [能力](https://www.youtube.com/watch?v=8VqTSY-11F4&index=5&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [在沙盒中运行原生代码](https://www.youtube.com/watch?v=VEV74hwASeU&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh&index=6)
        - [网络安全模型](https://www.youtube.com/watch?v=chkFBigodIw&index=7&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [网络安全应用](https://www.youtube.com/watch?v=EBQIGy1ROLY&index=8&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [标志化执行](https://www.youtube.com/watch?v=yRVZPvHYHzw&index=9&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [网络安全](https://www.youtube.com/watch?v=SIEVvk3NVuk&index=11&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [网络协议](https://www.youtube.com/watch?v=QOtA76ga_fY&index=12&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [旁路攻击](https://www.youtube.com/watch?v=PuVMkSEcPiI&index=15&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)

- ### 垃圾回收
    - [ ] [Python 中的垃圾回收 (视频)](https://www.youtube.com/watch?v=iHVs_HkjdmI)
    - [ ] [深度解析：论垃圾回收在 JAVA 中的重要性](https://www.infoq.com/presentations/garbage-collection-benefits)
    - [ ] [深度解析：论垃圾回收在 Python 中的重要性(视频)](https://www.youtube.com/watch?v=P-8Z0-MhdQs&list=PLdzf4Clw0VbOEWOS_sLhT_9zaiQDrS5AR&index=3)

- ### 并行编程
    - [ ] [Coursera (Scala)](https://www.coursera.org/learn/parprog1/home/week/1)
    - [ ] [用于高性能并行计算的高效Python（视频）](https://www.youtube.com/watch?v=uY85GkaYzBk)

- ### 消息传递，序列化和队列系统
    - [Thrift](https://thrift.apache.org/)
        - [教程](http://thrift-tutorial.readthedocs.io/en/latest/intro.html)
    - [协议缓冲](https://developers.google.com/protocol-buffers/)
        - [教程](https://developers.google.com/protocol-buffers/docs/tutorials)
    - [gRPC](http://www.grpc.io/)
        - [gRPC 对于JAVA开发者的入门教程（视频）](https://www.youtube.com/watch?v=5tmPvSe7xXQ&list=PLcTqM9n_dieN0k1nSeN36Z_ppKnvMJoly&index=1)
    - [Redis](http://redis.io/)
        - [教程](http://try.redis.io/)
    - [Amazon的 SQS 系统 (队列)](https://aws.amazon.com/sqs/)
    - [Amazon的 SNS 系统 (pub-sub)](https://aws.amazon.com/sns/)
    - [RabbitMQ](https://www.rabbitmq.com/)
        - [入门教程](https://www.rabbitmq.com/getstarted.html)
    - [Celery](http://www.celeryproject.org/)
        - [Celery入门](http://docs.celeryproject.org/en/latest/getting-started/first-steps-with-celery.html)
    - [ZeroMQ](http://zeromq.org/)
        - [入门教程](http://zeromq.org/intro:read-the-manual)
    - [ActiveMQ](http://activemq.apache.org/)
    - [Kafka](http://kafka.apache.org/documentation.html#introduction)
    - [MessagePack](http://msgpack.org/index.html)
    - [Avro](https://avro.apache.org/)

- ### A*搜索算法

    - [A 搜索算法](https://en.wikipedia.org/wiki/A*_search_algorithm)
    - [A* 路径搜索教程（教程）](https://www.youtube.com/watch?v=KNXfSOx4eEE)
    - [A* 路径搜索（E01：算法解释）（视频）](https://www.youtube.com/watch?v=-L-WgKMFuhE)

- ### 快速傅里叶变换
    - [傅立叶变换的交互式指南](https://betterexplained.com/articles/an-interactive-guide-to-the-fourier-transform/)
    - [什么是傅立叶变换？论傅立叶变换的用途](http://www.askamathematician.com/2012/09/q-what-is-a-fourier-transform-what-is-it-used-for/)
    - [什么是傅立叶变换？ (视频)](https://www.youtube.com/watch?v=Xxut2PN-V8Q)
    - [分而治之：FFT（视频）](https://www.youtube.com/watch?v=iTMn0Kt18tg&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=4)
    - [FTT 是什么](http://jakevdp.github.io/blog/2013/08/28/understanding-the-fft/)

- ### 布隆过滤器
    - 给定布隆过滤器m比特位和k个哈希函数，插入和成员检测都会是 O(k)。
    - [布隆过滤器（视频）](https://www.youtube.com/watch?v=-SuTGoFYjZs)
    - [布隆过滤器 | 数据挖掘 | Stanford University（视频）](https://www.youtube.com/watch?v=qBTdukbzc78)
    - [教程](http://billmill.org/bloomfilter-tutorial/)
    - [如何写一个布隆过滤器应用](http://blog.michaelschmatz.com/2016/04/11/how-to-write-a-bloom-filter-cpp/)

- ### HyperLogLog
    - [如何仅使用1.5KB内存计算十亿个不同的对象](http://highscalability.com/blog/2012/4/5/big-data-counting-how-to-count-a-billion-distinct-objects-us.html)

- ### 局部敏感哈希
    - 用于确定文件的相似性
    - MD5 或 SHA 的反义词，用于确定2个文档/字符串是否完全相同
    - [Simhashing（希望如此）变得简单](http://ferd.ca/simhashing-hopefully-made-simple.html)

- ### van Emde Boas 树
    - [分而治之：van Emde Boas 树 (视频)](https://www.youtube.com/watch?v=hmReJCupbNU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=6)
    - [MIT课堂笔记](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-046j-design-and-analysis-of-algorithms-spring-2012/lecture-notes/MIT6_046JS12_lec15.pdf)

- ### 增强数据结构
    - [CS 61B 第 39 课: 增强数据结构](https://youtu.be/zksIj9O8_jc?list=PL4BBB74C7D2A1049C&t=950)

- ### 平衡查找树（Balanced search trees）
    - 掌握至少一种平衡查找树（并懂得如何实现）：
    - “在各种平衡查找树当中，AVL 树和2-3树已经成为了过去，而红黑树（red-black trees）看似变得越来越受人青睐。这种令人特别感兴趣的数据结构，亦称伸展树（splay tree）。它可以自我管理，且会使用轮换来移除任何访问过根节点的键。” —— Skiena
    - 因此，在各种各样的平衡查找树当中，我选择了伸展树来实现。虽然，通过我的阅读，我发现在面试中并不会被要求实现一棵平衡查找树。但是，为了胜人一筹，我们还是应该看看如何去实现。在阅读了大量关于红黑树的代码后，我才发现伸展树的实现确实会使得各方面更为高效。
        - 伸展树：插入、查找、删除函数的实现，而如果你最终实现了红黑树，那么请尝试一下：
        - 跳过删除函数，直接实现搜索和插入功能
    - 我希望能阅读到更多关于 B 树的资料，因为它也被广泛地应用到大型的数据集当中。
    - [自平衡二叉查找树](https://en.wikipedia.org/wiki/Self-balancing_binary_search_tree)

    - **AVL 树**
        - 实际中：我能告诉你的是，该种树并无太多的用途，但我能看到有用的地方在哪里：AVL 树是另一种平衡查找树结构。其可支持时间复杂度为 O(log n) 的查询、插入及删除。它比红黑树严格意义上更为平衡，从而导致插入和删除更慢，但遍历却更快。正因如此，才彰显其结构的魅力。只需要构建一次，就可以在不重新构造的情况下读取，适合于实现诸如语言字典（或程序字典，如一个汇编程序或解释程序的操作码）。
        - [MIT AVL 树 / AVL 树的排序（视频）](https://www.youtube.com/watch?v=FNeL18KsWPc&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=6)
        - [AVL 树（视频）](https://www.coursera.org/learn/data-structures/lecture/Qq5E0/avl-trees)
        - [AVL 树的实现（视频）](https://www.coursera.org/learn/data-structures/lecture/PKEBC/avl-tree-implementation)
        - [分离与合并](https://www.coursera.org/learn/data-structures/lecture/22BgE/split-and-merge)

    - **伸展树**
        - 实际中：伸展树一般用于缓存、内存分配者、路由器、垃圾回收者、数据压缩、ropes（字符串的一种替代品，用于存储长串的文本字符）、Windows NT（虚拟内存、网络及文件系统）等的实现。
        - [CS 61B：伸展树（Splay trees）（视频）](https://www.youtube.com/watch?v=Najzh1rYQTo&index=23&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd)
        - MIT 教程：伸展树（Splay trees）：
            - 该教程会过于学术，但请观看到最后的10分钟以确保掌握。
            - [视频](https://www.youtube.com/watch?v=QnPl_Y6EqMo)

    - **红黑树**
        - 这些是2-3棵树的翻译（请参见下文）。
        - 实际中：红黑树提供了在最坏情况下插入操作、删除操作和查找操作的时间保证。这些时间值的保障不仅对时间敏感型应用有用，例如实时应用，还对在其他数据结构中块的构建非常有用，而这些数据结构都提供了最坏情况下的保障；例如，许多用于计算几何学的数据结构都可以基于红黑树，而目前 Linux 内核所采用的完全公平调度器（the Completely Fair Scheduler）也使用到了该种树。在 Java 8中，Collection HashMap也从原本用Linked List实现，储存特定元素的哈希码，改为用红黑树实现。
        - [Aduni —— 算法 —— 课程4（该链接直接跳到开始部分）（视频）](https://youtu.be/1W3x0f_RmUo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3871)
        - [Aduni —— 算法 —— 课程5（视频）](https://www.youtube.com/watch?v=hm2GHwyKF1o&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=5)
        - [黑树（Black Tree）](https://en.wikipedia.org/wiki/Red%E2%80%93black_tree)
        - [二分查找及红黑树的介绍](https://www.topcoder.com/community/data-science/data-science-tutorials/an-introduction-to-binary-search-and-red-black-trees/)

    - **2-3查找树**
        - 实际中：2-3树的元素插入非常快速，但却有着查询慢的代价（因为相比较 AVL 树来说，其高度更高）。
        - 你会很少用到2-3树。这是因为，其实现过程中涉及到不同类型的节点。因此，人们更多地会选择红黑树。
        - [2-3树的直感与定义（视频）](https://www.youtube.com/watch?v=C3SsdUqasD4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=2)
        - [2-3树的二元观点](https://www.youtube.com/watch?v=iYvBtGKsqSg&index=3&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [2-3树（学生叙述）（视频）](https://www.youtube.com/watch?v=TOb1tuEZ2X4&index=5&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

    - **2-3-4树 (亦称2-4树)**
        - 实际中：对于每一棵2-4树，都有着对应的红黑树来存储同样顺序的数据元素。在2-4树上进行插入及删除操作等同于在红黑树上进行颜色翻转及轮换。这使得2-4树成为一种用于掌握红黑树背后逻辑的重要工具。这就是为什么许多算法引导文章都会在介绍红黑树之前，先介绍2-4树，尽管**2-4树在实际中并不经常使用**。
        - [CS 61B Lecture 26：平衡查找树（视频）](https://www.youtube.com/watch?v=zqrqYXkth6Q&index=26&list=PL4BBB74C7D2A1049C)
        - [自底向上的2-4树（视频）](https://www.youtube.com/watch?v=DQdMYevEyE4&index=4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [自顶向下的2-4树（视频）](https://www.youtube.com/watch?v=2679VQ26Fp4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=5)

    - **N 叉树（K 叉树、M 叉树）**
        - 注意：N 或 K 指的是分支系数（即树的最大分支数）：
        - 二叉树是一种分支系数为2的树
        - 2-3树是一种分支系数为3的树
        - [K 叉树](https://en.wikipedia.org/wiki/K-ary_tree)

    - **B 树**
        - 有趣的是：为啥叫 B 仍然是一个神秘。因为 B 可代表波音（Boeing）、平衡（Balanced）或 Bayer（联合创造者）
        - 实际中：B 树会被广泛适用于数据库中，而现代大多数的文件系统都会使用到这种树（或变种)。除了运用在数据库中，B 树也会被用于文件系统以快速访问一个文件的任意块。但存在着一个基本的问题，那就是如何将文件块 i 转换成一个硬盘块（或一个柱面-磁头-扇区）上的地址。
        - [B 树](https://en.wikipedia.org/wiki/B-tree)
        - [B 树数据结构](http://btechsmartclass.com/data_structures/b-trees.html)
        - [B 树的介绍（视频）](https://www.youtube.com/watch?v=I22wEC1tTGo&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=6)
        - [B 树的定义及其插入操作（视频）](https://www.youtube.com/watch?v=s3bCdZGrgpA&index=7&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [B 树的删除操作（视频）](https://www.youtube.com/watch?v=svfnVhJOfMc&index=8&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [MIT 6.851 —— 内存层次模块（Memory Hierarchy Models）（视频）](https://www.youtube.com/watch?v=V3omVLzI0WE&index=7&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf)
            - 覆盖有高速缓存参数无关型（cache-oblivious）B 树和非常有趣的数据结构
            - 头37分钟讲述的很专业，或许可以跳过（B 指块的大小、即缓存行的大小）

- ### k-D树
    - 非常适合在矩形或更高维度的对象中查找点数
    - 最适合k近邻
    - [Kd树（视频）](https://www.youtube.com/watch?v=W94M9D_yXKk)
    - [kNN K-d树算法（视频）](https://www.youtube.com/watch?v=Y4ZgLlDfKDg)

- ### 跳表
    - "有一种非常迷幻的数据类型" - Skiena
    - [随机化: 跳表 (视频)](https://www.youtube.com/watch?v=2g9OSRKJuzM&index=10&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [更生动详细的解释](https://en.wikipedia.org/wiki/Skip_list)

- ### 网络流
    - [5分钟简析 Ford-Fulkerson──一步步示例 (视频)](https://www.youtube.com/watch?v=v1VgJmkEJW0)
    - [Ford-Fulkerson 算法 (视频)](https://www.youtube.com/watch?v=v1VgJmkEJW0)
    - [网络流 (视频)](https://www.youtube.com/watch?v=2vhN4Ice5jI)

- ### 不相交集 & 联合查找
    - [UCB 61B - 不相交集；排序 & 选择(视频)](https://www.youtube.com/watch?v=MAEGXTwmUsI&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&index=21)
    - [Sedgewick算法──Union-Find（6视频）](https://www.coursera.org/learn/algorithms-part1/home/week/1)

- ### 快速处理的数学
    - [整数运算, Karatsuba 乘法 (视频)](https://www.youtube.com/watch?v=eCaXlAaN2uE&index=11&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [中国剩余定理 (在密码学中的使用) (视频)](https://www.youtube.com/watch?v=ru7mWZJlRQg)

- ### 树堆 (Treap)
    - 一个二叉搜索树和一个堆的组合
    - [树堆](https://en.wikipedia.org/wiki/Treap)
    - [数据结构：树堆的讲解（视频）](https://www.youtube.com/watch?v=6podLUYinH8)
    - [集合操作的应用(Applications in set operations)](https://www.cs.cmu.edu/~scandal/papers/treaps-spaa98.pdf)

- ### 线性规划（Linear Programming）（视频）
    - [线性规划](https://www.youtube.com/watch?v=M4K6HYLHREQ)
    - [寻找最小成本](https://www.youtube.com/watch?v=2ACJ9ewUC6U)
    - [寻找最大值](https://www.youtube.com/watch?v=8AA_81xI3ik)
    - [用 Python 解决线性方程式──单纯形算法](https://www.youtube.com/watch?v=44pAWI7v5Zk)

- ### 几何：凸包（Geometry, Convex hull）（视频）
    - [Graph Alg. IV: 几何算法介绍 - 第 9 课](https://youtu.be/XIAQRlNkJAw?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3164)
    - [Graham & Jarvis: 几何算法 - 第 10 课](https://www.youtube.com/watch?v=J5aJEcOr6Eo&index=10&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
    - [分而治之: 凸包, 中值查找](https://www.youtube.com/watch?v=EzeYI7p9MjU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=2)

- ### 离散数学
    - 查看下面的视频

- ### 机器学习（Machine Learning）
    - 为什么学习机器学习？
        - [谷歌如何将自己改造成一家「机器学习优先」公司？](https://backchannel.com/how-google-is-remaking-itself-as-a-machine-learning-first-company-ada63defcb70)
        - [智能计算机系统的大规模深度学习 (视频)](https://www.youtube.com/watch?v=QSaZGT4-6EY)
        - [Peter Norvig：深度学习和理解与软件工程和验证的对比](https://www.youtube.com/watch?v=X769cyzBNVw)
    - [谷歌云机器学习工具（视频）](https://www.youtube.com/watch?v=Ja2hxBAwG_0)
    - [谷歌开发者机器学习清单 (Scikit Learn 和 Tensorflow) (视频)](https://www.youtube.com/playlist?list=PLOU2XLYxmsIIuiBfYad6rFYQU_jL2ryal)
    - [Tensorflow (视频)](https://www.youtube.com/watch?v=oZikw5k_2FM)
    - [Tensorflow 教程](https://www.tensorflow.org/versions/r0.11/tutorials/index.html)
    - [Python 实现神经网络实例教程（使用 Theano）](http://www.analyticsvidhya.com/blog/2016/04/neural-networks-python-theano/)
    - 课程:
        - [很棒的初级课程：机器学习](https://www.coursera.org/learn/machine-learning)
            - [视频教程](https://www.youtube.com/playlist?list=PLZ9qNFMHZ-A4rycgrgOYma6zxF4BZGGPW)
            - 看第 12-18 集复习线性代数（第 14 集和第 15 集是重复的）
        - [机器学习中的神经网络](https://www.coursera.org/learn/neural-networks)
        - [Google 深度学习微学位](https://www.udacity.com/course/deep-learning--ud730)
        - [Google/Kaggle 机器学习工程师微学位](https://www.udacity.com/course/machine-learning-engineer-nanodegree-by-google--nd009)
        - [无人驾驶工程师微学位](https://www.udacity.com/drive)
        - [Metis 在线课程 (两个月 99 美元)](http://www.thisismetis.com/explore-data-science)
    - 资源:
        - 书籍：
            - [Python 机器学习](https://www.amazon.com/Python-Machine-Learning-Sebastian-Raschka/dp/1783555130/)
            - [Data Science from Scratch: First Principles with Python](https://www.amazon.com/Data-Science-Scratch-Principles-Python/dp/149190142X)
            - [Python 机器学习简介](https://www.amazon.com/Introduction-Machine-Learning-Python-Scientists/dp/1449369413/)
        - [软件工程师的机器学习](https://github.com/ZuzooVn/machine-learning-for-software-engineers)
        - Data School：http://www.dataschool.io/

--

## 一些主题的额外内容
 
    我为前面提到的某些主题增加了一些额外的内容，之所以没有直接添加到前面，是因为这样很容易导致某个主题内容过多。毕竟你想在本世纪找到一份工作，对吧？

- SOLID

    - [ ] [Bob Martin SOLID面向对象和敏捷设计的原理（视频）](https://www.youtube.com/watch?v=TMuno5RZNeE)
    - [ ] S ── [单一责任原则](http://www.oodesign.com/single-responsibility-principle.html) | [对每个对象的单一责任](http://www.javacodegeeks.com/2011/11/solid-single-responsibility-principle.html)
        - [更多](https://docs.google.com/open?id=0ByOwmqah_nuGNHEtcU5OekdDMkk)
    - [ ] O ── [开放/封闭原则](http://www.oodesign.com/open-close-principle.html) | [在生产级别上，可以扩展对象，但不能修改对象](https://en.wikipedia.org/wiki/Open/closed_principle)
        - [更多](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgN2M5MTkwM2EtNWFkZC00ZTI3LWFjZTUtNTFhZGZiYmUzODc1&hl=en)
    - [ ] L ── [Liskov 替换原则](http://www.oodesign.com/liskov-s-substitution-principle.html) | [基本类别和派生类别遵循“IS A”原则](http://stackoverflow.com/questions/56860/what-is-the-liskov-substitution-principle)
        - [更多](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgNzAzZjA5ZmItNjU3NS00MzQ5LTkwYjMtMDJhNDU5ZTM0MTlh&hl=en)
    - [ ] I ── [接口隔离原理](http://www.oodesign.com/interface-segregation-principle.html) | 不应强迫客户端实现不使用的接口
        - [5分钟了解接口隔离原理（视频）](https://www.youtube.com/watch?v=3CtAfl7aXAQ)
        - [更多](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgOTViYjJhYzMtMzYxMC00MzFjLWJjMzYtOGJiMDc5N2JkYmJi&hl=en)
    - [ ] D ── [依赖倒置原理](http://www.oodesign.com/dependency-inversion-principle.html) | 减少对象组合中的依赖性。
        - [依赖倒置原理为何如此重要？](http://stackoverflow.com/questions/62539/what-is-the-dependency-inversion-principle-and-why-is-it-important)
        - [更多](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgMjdlMWIzNGUtZTQ0NC00ZjQ5LTkwYzQtZjRhMDRlNTQ3ZGMz&hl=en)

- Union-Find
    - [概览](https://www.coursera.org/learn/data-structures/lecture/JssSY/overview)
    - [初级实践](https://www.coursera.org/learn/data-structures/lecture/EM5D0/naive-implementations)
    - [树状结构](https://www.coursera.org/learn/data-structures/lecture/Mxu0w/trees)
    - [合并树状结构](https://www.coursera.org/learn/data-structures/lecture/qb4c2/union-by-rank)
    - [路径压缩](https://www.coursera.org/learn/data-structures/lecture/Q9CVI/path-compression)
    - [分析选项](https://www.coursera.org/learn/data-structures/lecture/GQQLN/analysis-optional)

- **动态规划的更多内容** (视频)
    - [6.006: 动态规划 I: 斐波那契数列, 最短路径](https://www.youtube.com/watch?v=OQ5jsbhAv_M&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=19)
    - [6.006: 动态规划 II: 文本匹配, 二十一点/黑杰克](https://www.youtube.com/watch?v=ENyox7kNKeY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=20)
    - [6.006: 动态规划 III: 最优加括号方式, 最小编辑距离, 背包问题](https://www.youtube.com/watch?v=ocZMDMZwhCY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=21)
    - [6.006: 动态规划 IV: 吉他指法，拓扑，超级马里奥.](https://www.youtube.com/watch?v=tp4_UXaVyx8&index=22&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [6.046: 动态规划: 动态规划进阶](https://www.youtube.com/watch?v=Tw1k46ywN6E&index=14&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [6.046: 动态规划: 所有点对最短路径](https://www.youtube.com/watch?v=NzgFUwOaoIw&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=15)
    - [6.046: 动态规划: 更多示例](https://www.youtube.com/watch?v=krZI60lKPek&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=12)

- **图形处理进阶** (视频)
    - [异步分布式算法: 对称性破缺，最小生成树](https://www.youtube.com/watch?v=mUBmcbbJNf4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=27)
    - [异步分布式算法: 最小生成树](https://www.youtube.com/watch?v=kQ-UQAzcnzA&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=28)

- MIT **概率论** (过于数学，进度缓慢，但这对于数学的东西却是必要之恶) (视频):
    - [MIT 6.042J - 概率论概述](https://www.youtube.com/watch?v=SmFwFdESMHI&index=18&list=PLB7540DEDD482705B)
    - [MIT 6.042J - 条件概率 Probability](https://www.youtube.com/watch?v=E6FbvM-FGZ8&index=19&list=PLB7540DEDD482705B)
    - [MIT 6.042J - 独立](https://www.youtube.com/watch?v=l1BCv3qqW4A&index=20&list=PLB7540DEDD482705B)
    - [MIT 6.042J - 随机变量](https://www.youtube.com/watch?v=MOfhhFaQdjw&list=PLB7540DEDD482705B&index=21)
    - [MIT 6.042J - 期望 I](https://www.youtube.com/watch?v=gGlMSe7uEkA&index=22&list=PLB7540DEDD482705B)
    - [MIT 6.042J - 期望 II](https://www.youtube.com/watch?v=oI9fMUqgfxY&index=23&list=PLB7540DEDD482705B)
    - [MIT 6.042J - 大偏差](https://www.youtube.com/watch?v=q4mwO2qS2z4&index=24&list=PLB7540DEDD482705B)
    - [MIT 6.042J - 随机游走](https://www.youtube.com/watch?v=56iFMY8QW2k&list=PLB7540DEDD482705B&index=25)

- [Simonson: 近似算法 (视频)](https://www.youtube.com/watch?v=oDniZCmNmNw&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=19)

- **字符串匹配**

    - Rabin-Karp（视频）
        - [Rabin Karps 算法](https://www.coursera.org/learn/data-structures/lecture/c0Qkw/rabin-karps-algorithm)
        - [预计算](https://www.coursera.org/learn/data-structures/lecture/nYrc8/optimization-precomputation)
        - [优化：实施和分析](https://www.coursera.org/learn/data-structures/lecture/h4ZLc/optimization-implementation-and-analysis)
        - [表翻倍，Karp-Rabin](https://www.youtube.com/watch?v=BRO7mVIFt08&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=9)
        - [滚动哈希，摊销分析](https://www.youtube.com/watch?v=w6nuXg0BISo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=32)
    - Knuth-Morris-Pratt (KMP)：
        - [Knuth-Morris-Pratt（KMP）字符串匹配算法](https://www.youtube.com/watch?v=5i7oKodCRJo)
    - Boyer–Moore 字符串搜索算法
        - [Boyer–Moore 字符串搜索算法](https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_string_search_algorithm)
        - [高级字符串搜索Boyer-Moore-Horspool算法（视频）](https://www.youtube.com/watch?v=QDZpzctPf10)
    - [Coursera：字符串算法](https://www.coursera.org/learn/algorithms-on-strings/home/week/1)
        - 刚开始时很棒，但是当它超过 KMP 时，它变得比需要复杂得多
        - 很好的字典树解释
        - 可以跳过

- **排序**

    - 斯坦福大学关于排序算法的视频:
        - [课程 15 | 编程抽象（视频）](https://www.youtube.com/watch?v=ENp00xylP7c&index=15&list=PLFE6E58F856038C69)
        - [课程 16 | 编程抽象（视频）](https://www.youtube.com/watch?v=y4M9IVgrVKo&index=16&list=PLFE6E58F856038C69)

    - Shai Simonson 视频，[Aduni.org](http://www.aduni.org/):
        - [算法 - 排序 - 第二讲（视频）](https://www.youtube.com/watch?v=odNJmw5TOEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=2)
        - [算法 - 排序2 - 第三讲（视频）](https://www.youtube.com/watch?v=hj8YKFTFKEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=3)

    - Steven Skiena 关于排序的视频:
        - [课程从 26:46 开始（视频）](https://youtu.be/ute-pmMkyuk?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1600)
        - [课程从 27:40 开始（视频）](https://www.youtube.com/watch?v=yLvp-pB8mak&index=8&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [课程从 35:00 开始（视频）](https://www.youtube.com/watch?v=q7K9otnzlfE&index=9&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [课程从 23:50 开始（视频）](https://www.youtube.com/watch?v=TvqIGu9Iupw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=10)

## 视频系列

 坐下来享受一下吧。"netflix 和技能" :P

- [个人的动态规划问题列表 (都是短视频)](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)

- [x86 架构，汇编，应用程序 (11 个视频)](https://www.youtube.com/playlist?list=PL038BE01D3BAEFDB0)

- [MIT 18.06 线性代数，2005 年春季 (35 个视频)](https://www.youtube.com/playlist?list=PLE7DDD91010BC51F8)

- [绝妙的 MIT 微积分：单变量微积分](https://www.youtube.com/playlist?list=PL3B08AE665AB9002A)

- [计算机科学 70, 001 - 2015 年春季 - 离散数学和概率理论](https://www.youtube.com/playlist?list=PL-XXv-cvA_iD8wQm8U0gG_Z1uHjImKXFy)

- [离散数学 (19 个视频)](https://www.youtube.com/playlist?list=PLWX710qNZo_sNlSWRMVIh6kfTjolNaZ8t)

- [离散数学（第一部分），Sarada Herke （5个视频）](https://www.youtube.com/playlist?list=PLGxuz-nmYlQPOc4w1Kp2MZrdqOOm4Jxeo)

- CSE373 - 算法分析 (25 个视频)
    - [Skiena 的算法设计手册讲座](https://www.youtube.com/watch?v=ZFjhkohHdAA&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=1)

- [UC Berkeley 61B (2014 年春季): 数据结构 (25 个视频)](https://www.youtube.com/watch?v=mFPmKGIrQs4&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd)

- [UC Berkeley 61B (2006 年秋季): 数据结构 (39 个视频)](https://www.youtube.com/playlist?list=PL4BBB74C7D2A1049C)

- [UC Berkeley 61C：计算机结构 (26 个视频)](https://www.youtube.com/watch?v=gJJeUFyuvvg&list=PL-XXv-cvA_iCl2-D-FS5mk0jFF6cYSJs_)

- [OOSE：使用 UML 和 Java 进行软件开发 (21 个视频)](https://www.youtube.com/playlist?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)

- <del>[UC Berkeley CS 152: 计算机结构和工程 (20 个视频)](https://www.youtube.com/watch?v=UH0QYvtP7Rk&index=20&list=PLkFD6_40KJIwEiwQx1dACXwh-2Fuo32qr)</del>

- [MIT 6.004: 计算结构 (49 视频)](https://www.youtube.com/playlist?list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-)

- [卡內基梅隆大学 - 计算机架构讲座 (39 个视频)](https://www.youtube.com/playlist?list=PL5PHm2jkkXmi5CxxI7b3JCL1TWybTDtKq)

- [MIT 6.006：算法介绍 (47 个视频)](https://www.youtube.com/watch?v=HtSuA80QTyo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&nohtml5=False)

- [MIT 6.033：计算机系统工程 (22 个视频)](https://www.youtube.com/watch?v=zm2VP0kHl1M&list=PL6535748F59DCA484)

- [MIT 6.034：人工智能，2010 年秋季 (30 个视频)](https://www.youtube.com/playlist?list=PLUl4u3cNGP63gFHB6xb-kVBiQHYe_4hSi)

- [MIT 6.042J：计算机科学数学, 2010 年秋季 (25 个视频)](https://www.youtube.com/watch?v=L3LMbpZIKhQ&list=PLB7540DEDD482705B)

- [MIT 6.046：算法设计与分析 (34 个视频)](https://www.youtube.com/watch?v=2P-yW7LQr08&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

- [MIT 6.050J：信息和熵, 2008 年春季 (19 个视频)](https://www.youtube.com/watch?v=phxsQrZQupo&list=PL_2Bwul6T-A7OldmhGODImZL8KEVE38X7)

- [MIT 6.851：高等数据结构 (22 个视频)](https://www.youtube.com/watch?v=T0yzrZL1py0&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=1)

- [MIT 6.854: 高等算法, 2016 年春季 (24 个视频)](https://www.youtube.com/playlist?list=PL6ogFv-ieghdoGKGg2Bik3Gl1glBTEu8c)

- [Harvard COMPSCI 224：高级算法（25个视频）](https://www.youtube.com/playlist?list=PL2SOU6wwxB0uP4rJgf5ayhHWgw7akUWSf)

- [MIT 6.858：计算机系统安全, 2014 年秋季](https://www.youtube.com/watch?v=GqmQg-cszw4&index=1&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)

- [斯坦福: 编程范例 (27 个视频)](https://www.youtube.com/playlist?list=PL9D558D49CA734A02)

- [密码学导论，Christof Paar](https://www.youtube.com/playlist?list=PL6N5qY2nvvJE8X75VkXglSrVhLv1tVcfy)
    - [课程网站以及幻灯片和问题集](http://www.crypto-textbook.com/)

- [大数据 - 斯坦福大学 (94 个视频)](https://www.youtube.com/playlist?list=PLLssT5z_DsK9JDLcT8T62VtzwyW9LNepV)

- [图论，Sarada Herke（67个视频）](https://www.youtube.com/user/DrSaradaHerke/playlists?shelf_id=5&view=50&sort=dd)

## 计算机科学课程

- [在线 CS 课程目录](https://github.com/open-source-society/computer-science)
- [CS 课程目录 (一些是在线讲座)](https://github.com/prakhar1989/awesome-courses)

## 论文

- [喜欢经典的论文？](https://www.cs.cmu.edu/~crary/819-f09/)
- [1978: 通信顺序处理](http://spinroot.com/courses/summer/Papers/hoare_1978.pdf)
    - [Go 实现](https://godoc.org/github.com/thomas11/csp)
- [2003: The Google 文件系统](http://static.googleusercontent.com/media/research.google.com/en//archive/gfs-sosp2003.pdf)
    - 2012 年被 Colossus 取代了
- [2004: MapReduce: Simplified Data Processing on Large Clusters](http://static.googleusercontent.com/media/research.google.com/en//archive/mapreduce-osdi04.pdf)
    - 大多被云数据流取代了?
- [2006年：Bigtable：结构化数据的分布式存储系统](https://static.googleusercontent.com/media/research.google.com/en//archive/bigtable-osdi06.pdf)
    - [深入了解Google BigQuery](https://cloud.google.com/files/BigQueryTechnicalWP.pdf)
- [2006年：针对松散耦合的分布式系统的Chubby Lock服务](https://research.google.com/archive/chubby-osdi06.pdf)
- [2007年：Dynamo：亚马逊的高可用键值存储](http://s3.amazonaws.com/AllThingsDistributed/sosp/amazon-dynamo-sosp2007.pdf)
    - Dynamo论文启动了NoSQL革命
- [2007: 每个程序员都应该知道的内存知识 (非常长，作者建议跳过某些章节来阅读)](https://www.akkadia.org/drepper/cpumemory.pdf)
- [2010年：Dapper，一个大型分布式系统跟踪基础结构](https://research.google.com/pubs/archive/36356.pdf)
- [2010年：Dremel：Web规模数据集的交互式分析](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/36632.pdf)
- [2012: Google 的 Colossus](https://www.wired.com/2012/07/google-colossus/)
    - 没有论文
- 2012: AddressSanitizer: 快速的内存访问检查器:
    - [论文](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/37752.pdf)
    - [视频](https://www.usenix.org/conference/atc12/technical-sessions/presentation/serebryany)
- 2013: Spanner: Google 的分布式数据库:
    - [论文](http://static.googleusercontent.com/media/research.google.com/en//archive/spanner-osdi2012.pdf)
    - [视频](https://www.usenix.org/node/170855)
- [2014: Machine Learning: The High-Interest Credit Card of Technical Debt](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43146.pdf)
- [2015: Continuous Pipelines at Google](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43790.pdf)
- [2015: 大规模高可用: 构建 Google Ads 的数据基础设施](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44686.pdf)
- [2015: TensorFlow: 异构分布式系统上的大规模机器学习](http://download.tensorflow.org/paper/whitepaper2015.pdf )
- [2015: 开发者应该如何搜索代码：用例学习](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43835.pdf)
- [2016: Borg, Omega, and Kubernetes](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44843.pdf)

## LICENSE

[CC-BY-SA-4.0](https://github.com/jwasham/coding-interview-university/blob/main/LICENSE.txt)
