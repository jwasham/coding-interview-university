# Google Interview University

Bản gốc:
* [English](./README.md)

Tác giả gốc: [John Washam](https://github.com/jwasham)

Đóng góp cho bản dịch tiếng Việt:
* [Lê Tiến Tài](https://github.com/letientai299) - [@letientai299](https://twitter.com/letientai299)


Ghi chú riêng cho việc duy trì và cập nhật bản dịch tiếng Việt:

* Bản dịch này nhằm mục đích khuyến khích các bạn trẻ yêu thích công nghệ nhưng chưa vững tiếng Anh dễ tiếp cận, và tìm được hướng nghiên cứu. Để đi xa hơn trong ngành công nghệ thông tin, sớm hay muộn, bạn cũng cần phải trau dồi vốn tiếng Anh của mình. Vì vậy, các thuật ngữ chuyên ngành, mình xin được giữ nguyên gốc. Ví dụ như: `stack`, `heap`, `queue`,...

* Mình cố gắng dịch thoát nghĩa, sao cho các bạn với ít kiến thức công nghệ thông tin nhất cũng có thể hiểu được. Trong quá trình dịch khó có thể trách khỏi sai sót, xin được lượng thứ.

* Mọi ý kiến, đóng góp về bản dịch, vui lòng [tạo một issue mới](/issues/new) hoặc bạn có thể  chỉnh sửa và tạo Pull Request, đồng thời cc trực tiếp các dịch giả để kiểm tra.

## Giới thiệu

Đây là kế hoạch học tập trong nhiều tháng của tôi, để từ một nhà phát triển web (tự học, không có bằng cấp về Khoa học máy tính) trở thành một kỹ sư phần mềm ở Google.

![Viết code trên bảng - ánh trích từ bộ phim Silicon Valley của HBO](https://dng5l3qzreal6.cloudfront.net/2016/Aug/coding_board_small-1470866369118.jpg)

Danh sách dài này được trích và mở rộng từ **Ghi chú huấn luyện của Google**, vậy nên đây là những gì bạn cần biết.
Một vài mục tôi thêm vào ở cuối danh sách có thể xuất hiện trong cuộc phỏng vấn hoặc hữu ích cho việc giải quyết các bài toán. Nhiều mục đến từ bài viết [Lấy được việc ở Google (Get that job at Google)](http://steve-yegge.blogspot.com/2008/03/get-that-job-at-google.html)" của Steve Yegge.

Tôi lược bớt những gì bạn cần từ lời khuyên của yegge. Tôi cũng chỉnh sửa lại các yêu cầu dựa trên thông tin tôi có được từ bạn bè ở Google. Danh sách này được thiết kế cho **Kỹ sư phần mềm** hoặc những ai chuyển từ phát triển web hoặc phần mềm sang _kỹ nghệ_ phần mềm (khi mà kiến thức về khoa học máy tính là bắt buộc). Nếu bạn có nhiều kinh nghiệm và muốn khẳng định nhiều năm trong đó bạn làm việc như một kỹ sư phần mềm, hãy sẳn sàng cho một buổi phòng vấn khó hơn. [Xem thêm ở đây](https://googleyasheck.com/what-you-need-to-know-for-your-google-interview-and-what-you-dont/).

Nếu bạn có kinh nghiệm trong phát triển web hoặc ứng dụng, hãy chú ý rằng Google xem xây dựng phần mềm khác với web và ứng dụng thông thường. Họ yêu cầu kiến thức về khoa học máy tính.

Thêm vào đó, nếu bạn muốn trở thành một kỹ sư hệ thống (System engineer), hãy học thêm từ danh sách bổ sung (mạng máy tính, bảo mật,...)

---

## Mục lục

- [Giới thiệu?](#giới-thiệu)
- [Vì sao tôi cần tài liệu này?](#vì-sao-tôi-cần-tài-liệu-này)
- [Sử dụng như thế nào?](#sử-dụng-như-thế-nào)
- [Tự tạo cảm hứng Googley](#tự-tạo-cảm-hứng-googley)
- [Tôi đã được tuyển chưa?](#tôi-đã-được-tuyển-chưa)
- [Theo dõi cuộc hành trình của tôi](#theo-dõi-cuộc-hành-trình-của-tôi)
- [Đừng nghĩ rằng bạn không đủ thông minh](#đừng-nghĩ-rằng-bạn-không-đủ-thông-minh)
- [Về Google](#về-google)
- [Về nguồn video](#về-nguồn-video)
- [Quy trình phỏng vấn & các bước chuẩn bị tổng quát](#quy-trình-phỏng-vấn--các-bước-chuẩn-bị-tổng-quát)
- [Chọn ngôn ngữ lập trình cho cuộc phỏng vấn](#chọn-ngôn-ngữ-lập-trình-cho-cuộc-phỏng-vấn)
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
    - [Dynamic Programming](#dynamic-programming)
    - [Compilers](#compilers)
    - [Floating Point Numbers](#floating-point-numbers)
    - [Unicode](#unicode)
    - [Endianness](#endianness)
    - [Emacs and vi(m)](#emacs-and-vim)
    - [Unix command line tools](#unix-command-line-tools)
    - [Information theory](#information-theory)
    - [Parity & Hamming Code](#parity--hamming-code)
    - [Entropy](#entropy)
    - [Cryptography](#cryptography)
    - [Compression](#compression)
    - [Networking](#networking) (if you have networking experience or want to be a systems engineer, expect questions)
    - [Computer Security](#computer-security)
    - [Garbage collection](#garbage-collection)
    - [Parallel Programming](#parallel-programming)
    - [Messaging, Serialization, and Queueing Systems](#messaging-serialization-and-queueing-systems)
    - [Fast Fourier Transform](#fast-fourier-transform)
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
- [Computer Science Courses](#computer-science-courses)

---

## Vì sao tôi cần tài liệu này?

Tôi đang chuẩn bị tham gia phỏng vấn ở Google. Tôi từng làm web, xây dựng các dịch vụ và lập các công ty khởi nghiệp từ năm 1997. Tôi có bằng Kinh tế, nhưng không có bằng Khoa học máy tính. Tôi thấy sự nghiệp của mình khá thành công, nhưng như thế chưa đủ. Tôi muốn làm việc ở Google, được tham gia xử lý một hệ thống lớn; thực sự hiểu rõ về máy tính, sự hiệu quả của các thuật toán và cấu trúc dự liệu, các ngôn ngữ lập trình cấp thấp, và chúng hoạt động cùng nhau như thế nào. Và nếu bạn không biết về cái nào trong số đó, Google sẽ không tuyển bạn.

Khi tôi bắt đầu dự án này, tôi không phân biệt được stack và heap, không biết về Big-O, không có khái niệm gì về cây (`tree`) hay việc duyệt đồ thị (`graph`). Và nếu buộc phải việt code cho một thuật toán sắp xếp, tôi đảm bảo rằng nó sẽ không chạy tốt.

Tất cả các cấu trúc dự liệu tôi từng sử dụng đề được dựng sẵn trong ngôn ngữ lập trình và tôi không nhất thiết phải biết chúng làm việc như thế nào. Tôi chưa từng phải tự quản lý vùng nhớ, trừ khi một tiến trình đang chạy ném lỗi "hết bộ nhớ" (`out of memory`), và sau đó tôi phải tìm một cách giải quyết khác. Tồi từng sử dụng mảng nhiều chiều vài lần trong dời, và hàng ngàn mảng liên kết (`map` hoặc `dictionary` cho dễ hiểu). Nhưng thực sự tôi chưa từng tự mình xây dựng một cấu trúc dữ liệu nào.

Nhưng, sau khi trải qua dự án này, tôi rất tự tin rằng mình sẽ được tuyển. Đây là một dự án dài hơi, sẽ tốn của tôi hàng tháng. Nếu bạn đã quen với nhiều nội dung trong này, bạn sẽ mất ít thời gian hơn.

## Sử dụng như thế nào?

> Phần này được viết lại khá nhiều để thuận tiện cho các bạn tiếp cận. Dựa theo bản gốc, tác giả có vẻ như cũng đang cố hướng dẫn cho người mới dùng git.

Bạn có thể bỏ qua mục này nếu đã có kiến thức về Git, Github và [Github Flavored Markdown](https://guides.github.com/features/mastering-markdown/#GitHub-flavored-markdown)

Nếu bạn chưa biết về [git](https://git-scm.com) thì vui lòng tham khảo các bài hướng dẫn sau để nắm cách sử dụng:

- Tiếng Anh: [git - the simple guide](http://rogerdudler.github.io/git-guide/)
- Tiếng Viết: [Sổ tay git cho người mới bát đầu](http://rogerdudler.github.io/git-guide/index.vi.html) (Việt hóa từ nội dung với link trên)

Tiếp theo, bạn cần biết cách [fork một repo trên github](https://help.github.com/articles/fork-a-repo/) (Mình không tìm được hướng dẫn tiếng Việt nào thích hợp.)

Ok, bây giờ bạn có thể bắt đầu:

- Fork repo này.
- Clone bản fork của bạn về máy tính cá nhân.
    ```
    git clone https://github.com/<your-username>/google-interview-university
    ```
- Chạy các dòng lệnh sau
- Tạo một branch mới để đánh dấu tiến độ của bạn:
    ```
    git checkout -b progress
    ```
- Check các phần đã hoàn thành bằng cách thêm `x` vào giữa cặp ngoặc vuông (`[ ]`), như thế này: `[x]`.
- Chạy `git add .` để bắt đầu lưu lại các thay đổi.
- Chạy `git commit -m "commit message" `. Thay `commit message` với ghi chú của bạn cho sự thay đổi đó.
- Đồng bộ thay đổi với bản fork trên Github của bạn bằng `git push origin master`.


## Tự tạo cảm hứng Googley

In một (hay vài cái cũng được) đề can "[future Googler](https://github.com/jwasham/google-interview-university/blob/master/extras/future-googler.pdf)" và để nó (chúng) ở đâu đó mà bạn luôn nhìn thấy và nghĩ đến được.

[![future Googler sign](https://dng5l3qzreal6.cloudfront.net/2016/Oct/Screen_Shot_2016_10_04_at_10_13_24_AM-1475601104364.png)](https://github.com/jwasham/google-interview-university/blob/master/extras/future-googler.pdf)


## Tôi đã được tuyển chưa?

Tôi đang ở trong _hàng đợi_. Hy vọng sẽ sớm đến lược phỏng vấn.

    Cảm ơn vì đồng ý giới thiệu tôi, JP.


## Theo dõi cuộc hành trình của tôi

Tôi cũng đang đi trên con đường này. Hãy cùng xem chúng ta đi được đến đâu:

- **Blog**: [GoogleyAsHeck.com](https://googleyasheck.com/)
- Twitter: [@googleyasheck](https://twitter.com/googleyasheck)
- Twitter: [@StartupNextDoor](https://twitter.com/StartupNextDoor)
- Google+: [+Googleyasheck](https://plus.google.com/+Googleyasheck)
- LinkedIn: [johnawasham](https://www.linkedin.com/in/johnawasham)

![John Washam - Google Interview University](https://dng5l3qzreal6.cloudfront.net/2016/Aug/book_stack_photo_resized_18_1469302751157-1472661280368.png)


## Đừng nghĩ rằng bạn không đủ thông minh

- Các kỹ sư của Google là những người xuất sắc, nhưng nhiều người vẫn cho rằng họ không đủ thông minh, mặc dù họ đang làm việc tại Google.

- [Bí mật của của Thiên Tài Lập Trình  (The myth of the Genius Programmer) - video](https://www.youtube.com/watch?v=0SARbwvhupQ)
- [ulie Pagano: Đi một mình rất nguy hiểm - Cuộc chiến với con quái vật vô hình trong công nghệ](https://www.youtube.com/watch?v=1i8ylq4j_EY)


## Về Google

- [x] Dành cho học viên - [Google Careers: Technical Development Guide](https://www.google.com/about/careers/students/guide-to-technical-development.html)
- [ ] Search (tên sản phảm của Google) làm việc như thế nào:
    - [ ] [Sự phát triển của Search (The Evolution of Search) - video](https://www.youtube.com/watch?v=mTBShTwCnD4)
    - [ ] [Search làm việc như thế nào - câu chuyện (How Search Works - the story)](https://www.google.com/insidesearch/howsearchworks/thestory/)
    - [ ] [Search làm việc như thế nào (How Search Works)](https://www.google.com/insidesearch/howsearchworks/)
    - [ ] [Search làm việc như thế nào - tác giả Matt Cutts (How Search Works - Matt Cutts) - video](https://www.youtube.com/watch?v=BNHR6IQJGZs)
    - [ ] [Google cải tiến thuật toán tìm kiếm của họ như thế nào (How Google makes improvements to its search algorithm) - video](https://www.youtube.com/watch?v=J5RZOU6vK4Q)
- [ ] Các chuỗi bài viết:
    - [ ] [Google Search làm việc với thiết bị di đồng ra sao (How Google Search Dealt With Mobile)](https://backchannel.com/how-google-search-dealt-with-mobile-33bc09852dc9)
    - [ ] [Nghiên cứu bí mật của Google để tìm ra thứ chúng ta cần (Google's Secret Study To Find Out Our Needs)](https://backchannel.com/googles-secret-study-to-find-out-our-needs-eba8700263bf)
    - [ ] [Google Search sẽ là bộ não tiếp theo của bạn (Google Search Will Be Your Next Brain)](https://backchannel.com/google-search-will-be-your-next-brain-5207c26e4523)
    - [ ] [The Deep Mind Of Demis Hassabis](https://backchannel.com/the-deep-mind-of-demis-hassabis-156112890d8a)
- [ ] [Sách: Google hoạt động ra sao](https://www.amazon.com/How-Google-Works-Eric-Schmidt/dp/1455582344)
- [ ] [Thông báo về Made by Google - 10/2016 (video)](https://www.youtube.com/watch?v=q4y0KOeXViI)

## Về nguồn video

Một vài video chỉ xem được khi bạn tham gia vào các lớp học online trên Coursera, EdX, hay Lynda.com. Các lớp đó được gọi là MOOC.
Đôi khi các lớp không có sẵn, và bạn phải đợi một vài tháng đến khi chúng được mở lại, do đó bạn không thể truy cập vào video được.
Lynda.com thì không miễn phí.

    Tôi sẽ rất cảm kích sự hỗ trợ của các bạn trong việc thêm các nguồn video miễn phí và luôn sẵn có, ví dụ như Youtube, để hỗ trợ nguồn video từ các khóa học online.
    Tôi cũng rất thích xem các bài giảng của các trường đại học.


## Quy trình phỏng vấn & các bước chuẩn bị tổng quát

- [ ] Videos:
    - [ ] [Làm việc ở Google như thế nào: Chuẩn bị cho một buổi phỏng vấn kỹ thuật (video)](https://www.youtube.com/watch?v=ko-KkSmp-Lk)
    - [ ] [Làm việc ở Google như thế nào - Tập dượt với ứng viên (video)](https://www.youtube.com/watch?v=oWbUtlUhwa8&feature=youtu.be)
    - [ ] [Nhà tuyển dụng ở Google chia sẽ các bí quyết phỏng vấn kỹ thuật (video)](https://www.youtube.com/watch?v=qc1owf2-220&feature=youtu.be)
    - [ ] [Làm việc ở Google như thế nào: Chuẩn bị hồ sơ kỹ thuật cá nhân (video)](https://www.youtube.com/watch?v=8npJLXkcmu8)

- [ ] Bài viết:
    - [ ] [Trở thành nhân viên của Google với 3 bước](http://www.google.com/about/careers/lifeatgoogle/hiringprocess/)
    - [ ] [Lấy công việc ỡ Google](http://steve-yegge.blogspot.com/2008/03/get-that-job-at-google.html)
        - Tất cả những gì anh ta đề cập đến đều được liệt kể bên dưới.
    - [ ] _(bài viết từ rất lâu)_ [Làm sao để lấy được công việc tại Google, các câu hỏi phỏng vấn, quy trình tuyền dụng](http://dondodge.typepad.com/the_next_big_thing/2010/09/how-to-get-a-job-at-google-interview-questions-hiring-process.html)
    - [ ] [Các câu hỏi phỏng vấn qua điện thoại](http://sites.google.com/site/steveyegge2/five-essential-phone-screen-questions)

- [ ] Các khóa chuẩn bị:
    - [ ] [Mở khóa phỏng vấn kỹ thuật (khóa học trả phí)](https://www.udemy.com/software-engineer-interview-unleashed):
        - Học cách làm sao để sẵn sàng cho phỏng vấn kỹ thuật từ một cựu phỏng vấn viên tại Google.

- [ ] Bổ sung (không được đề xuất từ Google, nhưng tôi vẫn thêm vào):
    - [ ] [ABC: Always Be Coding](https://medium.com/always-be-coding/abc-always-be-coding-d5f8051afce2#.4heg8zvm4)
    - [ ] [4 bước đến Google dù khồng có bẳng cấp](https://medium.com/always-be-coding/four-steps-to-google-without-a-degree-8f381aa6bd5e#.asalo1vfx)
    - [ ] [Whiteboarding (Giải toán lập trình trên bảng trắng)](https://medium.com/@dpup/whiteboarding-4df873dbba2e#.hf6jn45g1)
    - [ ] [Google nghĩ thế nào về Tuyển dụng, Quản lý và Văn hóa](http://www.kpcb.com/blog/lessons-learned-how-google-thinks-about-hiring-management-and-culture)
    - [ ] [Whiteboarding hiệu quả trong khi phỏng vấn kỹ năng lập trình](http://www.coderust.com/blog/2014/04/10/effective-whiteboarding-during-programming-interviews/)
    - [ ] Cracking The Coding Interview Set 1:
        - [ ] [Gayle L McDowell - Cracking The Coding Interview (video)](https://www.youtube.com/watch?v=rEJzOhC5ZtQ)
        - [ ] [Cracking the Coding Interview with Author Gayle Laakmann McDowell (video)](https://www.youtube.com/watch?v=aClxtDcdpsQ)
    - [ ] Làm thế nào để lấy được công việc ở Big 4:
        - [ ] ['Làm sao để lấy được công việc ở Big 4 - Amazon, Facebook, Google & Microsoft' (video)](https://www.youtube.com/watch?v=YJZCUhxNCv8)
    - [ ] [Thất bại trong cuộc phòng vấn với Google](http://alexbowe.com/failing-at-google-interviews/)


## Chọn ngôn ngữ lập trình cho cuộc phỏng vấn

Tôi viết bài báo ngắn về điêu này: [Quan trọng: Chọn ngôn ngữ lập trình cho phỏng vấn ớ Google](https://googleyasheck.com/important-pick-one-language-for-the-google-interview/)

Bạn có thể chọn ngôn ngữ mà bạn quen thuộc để thực hiện phần viết mã trong lúc phỏng vấn, nhưng với Google, những ngôn ngữ sau đây là thích hợp nhất:

- C++
- Java
- Python

Bạn cũng có thể sử dụng các ngôn ngữ sau đây, nhưng hãy tìm hiểu thêm trước. Chúng có thể có bất lợi:

- JavaScript
- Ruby

Dù sao, bạn cũng cần phải rất quen thuộc với ngôn ngử lập trình của mình.

Xem thêm về các sự lựa chọn:

- http://www.byte-by-byte.com/choose-the-right-language-for-your-coding-interview/
- http://blog.codingforinterviews.com/best-programming-language-jobs/
- https://www.quora.com/What-is-the-best-language-to-program-in-for-an-in-person-Google-interview

[Xem tài liệu về các ngôn ngữ ở đây](programming-language-resources.md)

Bạn sẽ thấy vài tài liệu về C, C++ và Python bên dưới, vì tôi đang học chúng. Ngoài ra còn có một vài đầu sách nữa, xem ở cuối.


> In progress
