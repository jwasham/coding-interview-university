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
- [Danh mục sách](#danh-mục-sách)
- [Trước khi bắt đầu](#trước-khi-bắt-đầu)
- [Những phần không được đề cập](#những-phần-không-được-đề-cập)
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


## Danh mục sách

Đây là danh sách rút gọn từ những gì mà tôi đọc, để tiết kiệm thời gian cho bạn.

> Tên sách được giũ nguyên gốc tiếng Anh.

### Chuẩn bị phỏng vấn


- [ ] [Programming Interviews Exposed: Secrets to Landing Your Next Job, 2nd Edition](http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html)
    - Có câu trả lời bằng C++ và Java
    - Được khuyến khích bởi các khóa hướng dẫn của Google.
    - Đây là một phần luyện tập tốt trước khi bắt đầu với quyển Cracking the Coding Interview
    - Không quá khó, phần lớn các bài toán có lẽ dễ hơn nhiều so với những gì bạn thường thấy trong một buổi phỏng vấn (dựa theo những gì tôi đọc được)
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - Trả lời bằng Java
    - Được khuyến nghĩ trên [Google Careers site](https://www.google.com/about/careers/how-we-hire/interview/)
    - Nếu bạn thấy mọi người trích dẫn "The Google Resume", đó là một cốn sách được thay thế bởi "Cracking the Coding Interview".

Nếu bạn có nhiều thời gian hơn nữa:

- [ ] [Elements of Programming Interviews](https://www.amazon.com/Elements-Programming-Interviews-Insiders-Guide/dp/1479274836)
    - Code trên C++, rất tốt nếu bạn muốn sử dụng C++ làm ngôn ngữ chính cho cuộc phỏng vấn.
    - Một quyển sách hay về giải quyết vấn đề nói chung.


### Kiến trúc máy tính

Nếu không có nhiều thời gian:

- [ ] [Write Great Code: Volume 1: Understanding the Machine](https://www.amazon.com/Write-Great-Code-Understanding-Machine/dp/1593270038)
    - Quyển này được xuất bản năm 2004, phần nào đã lỗi thời, nhưng nó vẫn là một tài liệu tuyệt vời để tìm hiểu về máy tính một cách ngắn gọn.
    - Tác giả phát minh ra HLA (High Level Assembly), vậy nên hãy hãy chú ý một chút về các ví dụ và định nghĩa trong sách. Không được sử dụng rộng rãi, nhưng đó là một ví dụ hiện đại về hợp ngữ.
    - Những chương này rất đáng đọc để xây dựng cho bạn một nền tảng tốt (giữ nguyên gốc tiếng Anh):
        - Chapter 2 - Numeric Representation
        - Chapter 3 - Binary Arithmetic and Bit Operations
        - Chapter 4 - Floating-Point Representation
        - Chapter 5 - Character Representation
        - Chapter 6 - Memory Organization and Access
        - Chapter 7 - Composite Data Types and Memory Objects
        - Chapter 9 - CPU Architecture
        - Chapter 10 - Instruction Set Architecture
        - Chapter 11 - Memory Architecture and Organization

Nếu bạn có nhiều thời gian (tôi đã muốn đọc quyển này):

- [ ] [Computer Architecture, Fifth Edition: A Quantitative Approach](https://www.amazon.com/dp/012383872X/)
    - Dành cho người có điều kiện hơn, sách được cập nhật gần hơn (2011), đồng thời đòi hỏi nhiều thời gian hơn để thấm.


### Từng ngôn ngữ riêng biệt

**Bạn phải chọn một ngôn ngử cho cuộc phỏng vấn (xem ở trên).** Đây là các khuyến nghị của tôi. Tôi không có tài liệu cho tất cả các ngôn ngữ lập trình, vậy nên, đóng góp từ bạn luôn được chào đón.

Nếu bạn muốn đọc xuyên suốt một trong những quyển sách này, bạn nên có kiến thức về cấu trúc dữ liệu và giải thuật. Bạn cũng nên luyện tập giải toán lập trình.

**Bạn có thể bỏ qua bài giảng video trong project này**, trừ khi bạn muốn tự đánh giá lại kiến thức của mình.

[Đây là tài liệu ngôn ngữ lập trình bổ sung.](programming-language-resources.md)


### C++

Tôi chưa đọc 2 cuốn này, nhưng chúng được đánh giá cao, và được viết bởi Sedgewick. Anh ta rất xuất sắc.

- [ ] [Algorithms in C++, Parts 1-4: Fundamentals, Data Structure, Sorting, Searching](https://www.amazon.com/Algorithms-Parts-1-4-Fundamentals-Structure/dp/0201350882/)
- [ ] [Algorithms in C++ Part 5: Graph Algorithms](https://www.amazon.com/Algorithms-Part-Graph-3rd-Pt-5/dp/0201361183/)

Nếu bạn có đề xuất nào tốt hơn cho C++, hãy cho tôi biết. Tôi đang tìm một tài liệu súc tích.


### Java

- [ ] [Algorithms (Sedgewick and Wayne)](https://www.amazon.com/Algorithms-4th-Robert-Sedgewick/dp/032157351X/)
    - Video và mục lục của sách (và Sedgewick!):
        - [Algorithms I](https://www.youtube.com/user/algorithmscourses/playlists?view=50&sort=dd&shelf_id=2)
        - [Algorithms II](https://www.youtube.com/user/algorithmscourses/playlists?shelf_id=3&view=50&sort=dd)

hoặc:

- [ ] [Data Structures and Algorithms in Java](https://www.amazon.com/Data-Structures-Algorithms-Michael-Goodrich/dp/1118771338/)
    - Bởi Goodrich, Tamassia, Goldwasser
    - Được sử dụng làm tài liệu tham khảo cho khóa Dẫn nhập vào khoa học máy tính của UC Berkeley
    - Hãy xem phần báo cáo về sách của tôi bên dưới cho phiên bản Python. Cuốn sách này cũng bao phủ các chủ đề đó.


### Python

- [ ] [Data Structures and Algorithms in Python](https://www.amazon.com/Structures-Algorithms-Python-Michael-Goodrich/dp/1118290275/)
    - Bởi Goodrich, Tamassia, Goldwasser
    - Tôi thích cuốn này. Nó bao phủ mọi thứ cần thiết và hơn thế nữa.
    - Pythonic code (code theo đúng phong cách Python)
    - Báo cáo đọc sách mới toanh của tôi: https://googleyasheck.com/book-report-data-structures-and-algorithms-in-python/


### Sách tùy chọn

**Một vài người đề xuất mấy quyển này, nhưng tôi nghĩ chúng là quá nặng, trừ khi bạn có nhiều kinh nghiệm với kỹ nghệ phần mềm và đang mong đợi một cuộc phỏng vấn khó hơn nhiều:**


- [ ] [Algorithm Design Manual](http://www.amazon.com/Algorithm-Design-Manual-Steven-Skiena/dp/1849967202) (Skiena)
    - Như một tài liệu ôn tập và hỗ trợ nhận dạng vấn đề.
    - Danh mục thuật toán thật sự vượt xa độ khó của một cuộc phỏng vấn.
    - Cuốn sách có 2 phần:
        - Giáo trình về cấu trúc dữ liệu và giải thuật:
            - Ưu:
                - Là một bài tổng quát tốt tương đương với các giáo trình khác.
                - Nhiều câu chuyện thú vị từ kinh nghiệm của tác giả trong việc giải quyết các vấn đề thực tế và trong giới học thuật.
                - Code mẫu bằng C.
            - Nhược:
                - Cô đặc và có thể khó hiểu ngang với CLRS, và trong một số chủ đề, CLRS có thể là một tài liệu tốt hơn đẻ tham khảo.
                - Các chương 7, 8, 9 có thể rất vất vả để theo được, vì một vài phần không được giải thích rõ, hoặc là yêu cầu nhiều não hơn những gì tôi có.
                - Đừng hiểu lầm: Tôi thích Skiena, cách dạy học và phong các của ông ấy, nhưng tôi có lẽ không đủ khả năng để tốt nghiệp ở Stony Brook (nơi Skiena giảng dạy).
        - Danh mục thuật toán:
            - Đây là phần chính yếu mà bạn mua được từ quyển sách.
            - Sắp đến được phần này rồi. Tôi sẽ cập nhật một khi tôi xong với nó.
    - Trích dẫn từ Yegge: "Hơn hẳn những quyến sách khác, cuốn này giúp tôi hiểu rõ các bài toán về Graph phổ biến một cách đáng kinh ngạc và quan trọng như thế nào - chúng nên là một phần trong các công cụ của bất kỳ lập trình viên nào. Quyển sách đồng thời cũng bao phủ các cấu trúc dữ liệu cơ bản, các thuật toán sắp xếp. Đó là một điểm cộng. Nhưng phần quý giá thật sự nằm ở nửa sau, chính là bách khoa toàn thư ngắn gọn về hàng triệu bài toán hữu dụng và vô số cách để giải quyết chúng, trình bày sơ lược. Mỗi trang đều có một hình minh họa, giúp người đọc dễ ghi nhớ hơn. Đó là một cách tốt đề định dạng và phân loại các bài toán".
    - Có thể thuê quyển sách này trên Kindle
    - Half.com là một trang hữu dụng để tìm sách với giá tốt.
    - Câu trả lời cho các bài tập trong sách:
        - [Solutions](http://www.algorithm.cs.sunysb.edu/algowiki/index.php/The_Algorithms_Design_Manual_(Second_Edition))
        - [Solutions](http://blog.panictank.net/category/algorithmndesignmanualsolutions/page/2/)
    - [Danh mục lỗi của sách](http://www3.cs.stonybrook.edu/~skiena/algorist/book/errata)


- [ ] [Introduction to Algorithms](https://www.amazon.com/Introduction-Algorithms-3rd-MIT-Press/dp/0262033844)
    - **Chú ý:** Đọc cuốn này chỉ có một ít giá trị. Đây là một tổng hợp xuất sắc về giải thuật và cấu trúc dữ liệu, nhưng nó không dạy cho bạn cách viết code xuất sắc. Để làm một lập trình viên giỏi, bạn đồng thời phải có khả năng phát triển một giải pháp một cách hiệu quà nữa.
    - Trích lời Yegge: "Nhưng nếu bạn muốn đến với buổi phỏng vấn một cách có chuẩn bị, vậy hãy hoãn đơn xin ứng tuyển lại cho đến khi bạn hoàn tất quyển sách này"
    - Half.com là một trang hữu dụng để tìm sách với giá tốt.
    - Đôi được gọi là CLR, hoặc là CLRS (trích chữ cái đầu trong tên của các tác giả), vì Stein (một trong 4 tác giả, S trong CLRS) nhập cuộc trễ

- [ ] [Programming Pearls](http://www.amazon.com/Programming-Pearls-2nd-Jon-Bentley/dp/0201657880)
    - Vài chương đầu trình bày những giải pháp thông minh để giải quyết các vấn đề lập trình (một số đã rất cũ, từ thời người ta còn sử dụng băng từ). Nhưng, đó chỉ là phần mở đầu. đây là một quyển sách về thiết kế và cấu trúc phần mềm, giống như Code Complete, nhưng ngắn hơn nhiều.

- ~~"Algorithms and Programming: Problems and Solutions" by Shen~~
    - Sách tạm được, nhưng sau khi làm việc với các bài toán trong vài trang, tôi thây nhức đầu với ngôn ngữ Pascal, do-while loop, mảng bắt đầu với số 1 (thay vì 0 như Java, C, C++, ...), và một vài thông tin không rõ ràng.
    - Lẽ ra nên dành thời gian để giải toán từ các quyển sách khác hoặc làm toán lập trình online.

## Trước khi bắt đầu

Danh sách này ngày càng dài theo năm tháng và tôi phải thừa nhận là nó ngoài tầm kiểm soát.

Sau đây là 1 vài lỗi tôi đã mắc phải, hy vọng rằng có thể mang lại cho bạn một chút kinh nghiệm.

### 1. Bạn sẽ không nhớ được tất cả

Tôi đã xem hàng giờ video và viết rất nhiều ghi chú, và chỉ sau vài tháng không còn nhớ chút gì. Tôi đã bỏ ra 3 ngày đọc lại các ghi chú và làm thẻ ghi nhớ để có thể đọc dễ dàng hơn.

Hãy đọc để tránh phạm phải sai lầm tương tự:

[Retaining Computer Science Knowledge](https://googleyasheck.com/retaining-computer-science-knowledge/)

### 2. Sử dụng thẻ ghi nhớ

Để giải quyết vấn đề, tôi đã viết 1 trang web nhỏ về thẻ ghi nhớ để thêm các thẻ mới với 2 dạng chính: kiến thức chung và code.
Mỗi loại có định dạng riêng.

Tôi đã làm một trang mobile-first (lấy mobile là trọng tâm phát triển trang web) để có thể xem trên điện thoại và máy tính bảng, ở bất cứ đâu.

Tự tạo cho mình hoàn toàn miễn phí:

- [Repo của trang thẻ ghi nhớ](https://github.com/jwasham/computer-science-flash-cards)
- [Cơ sỏ dữ liệu thẻ ghi nhớ của tôi](https://github.com/jwasham/computer-science-flash-cards/blob/master/cards-jwasham.db): Lưu ý là tôi có đi hơi xa và các thẻ ghi nhớ có thể bao gồm cả hợp ngữ (ngôn ngữ máy) và Python cho đến cả máy học (machine learning) và thống kê. Như thế là quá nhiều cho các yêu cầu từ Google.

**Ghi chú dành cho các thẻ ghi nhớ:** The first time you recognize you know the answer, don't mark it as known. Lần đầu tiên bạn nhận ra bạn biết câu trả lời, đừng đánh dấu là đã biết.Bạn phải xem thẻ tương tự và đưa ra câu trả lời chính xác vài lần trước khi bạn thực sự khẳng định đã nắm được vấn đề.Lặp đi lặp lại việc này sẽ giúp kiến thức được khắc sâu vào não bạn.

Có thể thay thế thẻ ghi nhớ với [Anki](http://ankisrs.net/), đây là ứng dụng mà bạn sẽ thấy tôi khuyến khích sử dụng rất nhiều lần. Nó sử dụng một hệ thống lặp để giúp bạn có thể ghi nhớ được kiến thức.

Đây là ứng dụng cực kì thân thiện với người dùng, có mặt trên tất cả các hệ điều hành, và có hệ thống lưu trữ đồng bộ đám mây. Tốn khoản 25$ cho iOS nhưng miễn phí trên các hệ điều hành khác.

Cơ sỏ dữ liệu thẻ ghi nhớ của tôi tuân theo chuẩn định dạng của Anki: https://ankiweb.net/shared/info/25173560 (cảm ơn [@xiewenya](https://github.com/xiewenya))

### 3. Xem đi xem lại và xem lại nữa

Tôi giữ một danh sách xem nhanh các mã của ASCII, OSI stack, định nghĩa về Big-O, và nhiều hơn nữa. Tôi đọc bất cứ khi nào rảnh rỗi.

Khi gặp vấn đề trong lúc code, nghỉ ngơi chừng nửa giờ và đọc lại các thẻ ghi nhớ.

### 4. Tập trung

Có rất nhiều thứ lấy đi sự chú ý của ta, việc này tốn rất nhiều thời gian. Tập trung và toàn tâm toàn ý rất khó.


## Những phần không được đề cập


Danh sách lớn này bắt đầu như một bản To-do lược trích từ Huấn luyện phỏng vấn cho Google. Có vài công nghệ đang thịnh hành nhưng không được đề cập đến, ví dụ:

- SQL
- Javascript
- HTML, CSS, và các công nghệ thiết kế giao diện người dùng ("front-end").


> In progress
