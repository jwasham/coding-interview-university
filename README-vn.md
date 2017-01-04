# Google Interview University

Bản gốc:
* [English](./README.md)

Tác giả gốc: [John Washam](https://github.com/jwasham)

Đóng góp cho bản dịch tiếng Việt:
* [Lê Tiến Tài](https://github.com/letientai299) - [@letientai299](https://twitter.com/letientai299)
* [Võ Tường Thọ](https://github.com/thovo) - [@thovo](https://twitter.com/tho_vo)
* [Lê Tấn Đăng Khoa](https://github.com/dangkhoasdc) - [@dksdc](https://twitter.com/dksdc)

Ghi chú riêng cho việc duy trì và cập nhật bản dịch tiếng Việt:

* Bản dịch này nhằm mục đích khuyến khích các bạn trẻ yêu thích công nghệ nhưng chưa vững tiếng Anh dễ tiếp cận, và tìm được hướng nghiên cứu. Để đi xa hơn trong ngành công nghệ thông tin (CNTT), sớm hay muộn, bạn cũng cần phải trau dồi vốn tiếng Anh của mình. Vì vậy, các thuật ngữ chuyên ngành, mình xin được giữ nguyên gốc. Ví dụ như: `stack`, `heap`, `queue`,...

* Mình cố gắng dịch thoát nghĩa, sao cho các bạn với ít kiến thức công nghệ thông tin nhất cũng có thể hiểu được. Trong quá trình dịch khó có thể trách khỏi sai sót, xin được lượng thứ.

* Mọi ý kiến, đóng góp về bản dịch, vui lòng [tạo một issue mới](/issues/new) hoặc bạn có thể chỉnh sửa và tạo Pull Request, đồng thời cc trực tiếp các dịch giả để kiểm tra.

## Giới thiệu

Đây là kế hoạch học tập trong nhiều tháng của tôi, để từ một nhà phát triển web (tự học, không có bằng cấp về Khoa Học Máy Tính - KHMT) trở thành một kỹ sư phần mềm ở Google.

![Viết code trên bảng - ánh trích từ bộ phim Silicon Valley của HBO](https://dng5l3qzreal6.cloudfront.net/2016/Aug/coding_board_small-1470866369118.jpg)

Danh sách dài này được trích và mở rộng từ **Ghi chú huấn luyện của Google**, vậy nên đây là những gì bạn cần biết.
Một vài mục tôi thêm vào ở cuối danh sách có thể xuất hiện trong cuộc phỏng vấn hoặc hữu ích cho việc giải quyết các bài toán. Nhiều mục đến từ bài viết [Lấy được việc ở Google (Get that job at Google)](http://steve-yegge.blogspot.com/2008/03/get-that-job-at-google.html)" của Steve Yegge.

Tôi lược bớt những gì bạn cần từ lời khuyên của yegge. Tôi cũng chỉnh sửa lại các yêu cầu dựa trên thông tin tôi có được từ bạn bè ở Google. Danh sách này được thiết kế cho **Kỹ sư phần mềm** hoặc những ai chuyển từ phát triển web hoặc phần mềm sang _kỹ nghệ_ phần mềm (khi mà kiến thức về Khoa Học Máy Tính là bắt buộc). Nếu bạn có nhiều kinh nghiệm và muốn khẳng định nhiều năm trong đó bạn làm việc như một kỹ sư phần mềm, hãy sẵn sàng cho một buổi phòng vấn khó hơn. [Xem thêm ở đây](https://googleyasheck.com/what-you-need-to-know-for-your-google-interview-and-what-you-dont/).

Nếu bạn có kinh nghiệm trong phát triển web hoặc ứng dụng, hãy chú ý rằng Google xem việc xây dựng phần mềm khác với web và ứng dụng thông thường. Họ yêu cầu kiến thức về Khoa Học Máy Tính.

Thêm vào đó, nếu bạn muốn trở thành một kỹ sư hệ thống (System Engineer), hãy học thêm từ danh sách bổ sung (mạng máy tính, bảo mật,...)

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
- [Kế hoạch hằng ngày](#Kế-hoạch-hàng-ngày)
- [Kiến thức tiên quyết](#kiến-thức-tiên-quyết)
- [Độ phức tạp của thuật toán / Big-O / Phân tích tiệm cận](#độ-phức-tạp-của-thuật-toán--big-o--phân-tích-tiệm-cận)
- [Cấu trúc dữ liệu](#cấu-trúc-dữ-liệu)
    - [Arrays](#arrays)
    - [Linked Lists](#linked-lists)
    - [Stack](#stack)
    - [Queue](#queue)
    - [Hash table](#hash-table)
- [Kiến thức bổ sung](#kiến-thức-bổ-sung)
    - [Tìm kiếm nhị phân](#tìm-kiếm-nhị-phân)
    - [Toán tử trên bit](#toán-tử-trên-bit)
- [Cây](#cây)
    - [Cây - Ghi chú và kiến thức nền](#cây---ghi-chú-và-kiến-thức-nền)
    - [Cây tìm kiếm nhị phân](#cây-tìm-kiếm-nhị-phân)
    - [Heap / Priority Queue / Binary Heap](#heap--priority-queue--binary-heap)
    - Cây tìm kiếm cân bằng (một chủ đề chung, không đi sâu vào chi tiết)
    - Duyệt cây: preorder, inorder, postorder, BFS, DFS
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

Tôi đang chuẩn bị tham gia phỏng vấn ở Google. Tôi từng làm web, xây dựng các dịch vụ và lập các công ty khởi nghiệp từ năm 1997. Tôi có bằng Kinh Tế, nhưng không có bằng Khoa Học Máy Yính. Tôi thấy sự nghiệp của mình khá thành công, nhưng như thế chưa đủ. Tôi muốn làm việc ở Google, được tham gia xử lý một hệ thống lớn; thực sự hiểu rõ về máy tính, sự hiệu quả của các thuật toán và cấu trúc dự liệu, các ngôn ngữ lập trình cấp thấp, và chúng hoạt động cùng nhau như thế nào. Và nếu bạn không biết về cái nào trong số đó, Google sẽ không tuyển bạn.

Khi tôi bắt đầu dự án này, tôi không phân biệt được stack và heap, không biết về Big-O, không có khái niệm gì về cây (`tree`) hay việc duyệt đồ thị (`graph traversal`). Và nếu buộc phải viết code cho một thuật toán sắp xếp, tôi đảm bảo rằng nó sẽ không chạy tốt.

Tất cả các cấu trúc dự liệu tôi từng sử dụng đều được cài đặt sẵn trong ngôn ngữ lập trình và tôi không nhất thiết phải biết chúng làm việc như thế nào. Tôi chưa từng phải tự quản lý vùng nhớ, trừ khi một tiến trình đang chạy ném lỗi "hết bộ nhớ" (`out of memory`), và sau đó tôi phải tìm một cách giải quyết khác. Tồi từng sử dụng mảng nhiều chiều vài lần trong đời, và hàng ngàn mảng kết hợp (`associate arrays`). Nhưng thực sự tôi chưa từng tự mình xây dựng một cấu trúc dữ liệu nào.

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
    - [ ] [Google Search làm việc với thiết bị di động ra sao (How Google Search Dealt With Mobile)](https://backchannel.com/how-google-search-dealt-with-mobile-33bc09852dc9)
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
    - [ ] [Lấy công việc ở Google](http://steve-yegge.blogspot.com/2008/03/get-that-job-at-google.html)
        - Tất cả những gì anh ta đề cập đến đều được liệt kê bên dưới.
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

> Tên sách được giữ nguyên gốc tiếng Anh.

### Chuẩn bị phỏng vấn


- [ ] [Programming Interviews Exposed: Secrets to Landing Your Next Job, 2nd Edition](http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html)
    - Có câu trả lời bằng C++ và Java
    - Được khuyến khích bởi các khóa hướng dẫn của Google.
    - Đây là một phần luyện tập tốt trước khi bắt đầu với quyển Cracking the Coding Interview
    - Không quá khó, phần lớn các bài toán có lẽ dễ hơn nhiều so với những gì bạn thường thấy trong một buổi phỏng vấn (dựa theo những gì tôi đọc được)
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - Trả lời bằng Java
    - Được khuyến nghị trên [Google Careers site](https://www.google.com/about/careers/how-we-hire/interview/)
    - Nếu bạn thấy mọi người trích dẫn "The Google Resume", đó là một cuốn sách được thay thế bởi "Cracking the Coding Interview".

Nếu bạn có nhiều thời gian hơn nữa:

- [ ] [Elements of Programming Interviews](https://www.amazon.com/Elements-Programming-Interviews-Insiders-Guide/dp/1479274836)
    - Code trên C++, rất tốt nếu bạn muốn sử dụng C++ làm ngôn ngữ chính cho cuộc phỏng vấn.
    - Một quyển sách hay về giải quyết vấn đề nói chung.


### Kiến trúc máy tính

Nếu không có nhiều thời gian:

- [ ] [Write Great Code: Volume 1: Understanding the Machine](https://www.amazon.com/Write-Great-Code-Understanding-Machine/dp/1593270038)
    - Quyển này được xuất bản năm 2004, phần nào đã lỗi thời, nhưng nó vẫn là một tài liệu tuyệt vời để tìm hiểu về máy tính một cách ngắn gọn.
    - Tác giả phát minh ra HLA (High Level Assembly), vậy nên hãy hãy chú ý một chút về các ví dụ và định nghĩa trong sách. Tuy không được sử dụng rộng rãi, nhưng đó là một ví dụ hiện đại về hợp ngữ.
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

**Bạn phải chọn một ngôn ngữ cho cuộc phỏng vấn (xem ở trên).** Đây là các khuyến nghị của tôi. Tôi không có tài liệu cho tất cả các ngôn ngữ lập trình, vậy nên, đóng góp từ bạn luôn được chào đón.

Nếu bạn muốn đọc xuyên suốt một trong những quyển sách này, bạn nên có kiến thức về cấu trúc dữ liệu và giải thuật. Bạn cũng nên luyện tập giải toán lập trình.

**Bạn có thể bỏ qua bài giảng video trong project này**, trừ khi bạn muốn tự đánh giá lại kiến thức của mình.

[Đây là tài liệu ngôn ngữ lập trình bổ sung.](programming-language-resources.md)


### C++

Tôi chưa đọc 2 cuốn này, nhưng chúng được đánh giá cao, và được viết bởi Sedgewick. Giáo sư Sedgewick rất xuất sắc.

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
    - Hãy xem mục sách của tôi bên dưới cho phiên bản Python. Cuốn sách này cũng bao phủ các chủ đề đó.


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
                - Cô đặc và có thể khó hiểu ngang với CLRS, và trong một số chủ đề, CLRS có thể là một tài liệu tốt hơn để tham khảo.
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
    - **Chú ý:** Đọc cuốn này chỉ có một ít giá trị. Đây là một tổng hợp xuất sắc về giải thuật và cấu trúc dữ liệu, nhưng nó không dạy cho bạn cách viết code xuất sắc. Để làm một lập trình viên giỏi, bạn đồng thời phải có khả năng phát triển một giải pháp một cách hiệu quả nữa.
    - Trích lời Yegge: "Nhưng nếu bạn muốn đến với buổi phỏng vấn một cách có chuẩn bị, vậy hãy hoãn đơn xin ứng tuyển lại cho đến khi bạn hoàn tất quyển sách này"
    - Half.com là một trang hữu dụng để tìm sách với giá tốt.
    - Đôi được gọi là CLR, hoặc là CLRS (trích chữ cái đầu trong tên của các tác giả), vì Stein (một trong 4 tác giả, S trong CLRS) nhập cuộc trễ

- [ ] [Programming Pearls](http://www.amazon.com/Programming-Pearls-2nd-Jon-Bentley/dp/0201657880)
    - Vài chương đầu trình bày những giải pháp thông minh để giải quyết các vấn đề lập trình (một số đã rất cũ, từ thời người ta còn sử dụng băng từ). Nhưng, đó chỉ là phần mở đầu. đây là một quyển sách về thiết kế và cấu trúc phần mềm, giống như Code Complete, nhưng ngắn hơn nhiều.

- ~~"Algorithms and Programming: Problems and Solutions" by Shen~~
    - Sách tạm được, nhưng sau khi làm việc với các bài toán trong vài trang, tôi thấy nhức đầu với ngôn ngữ Pascal, do-while loop, mảng bắt đầu với số 1 (thay vì 0 như Java, C, C++, ...), và một vài thông tin không rõ ràng.
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
- [Cơ sở dữ liệu thẻ ghi nhớ của tôi](https://github.com/jwasham/computer-science-flash-cards/blob/master/cards-jwasham.db): Lưu ý là tôi có đi hơi xa và các thẻ ghi nhớ có thể bao gồm cả hợp ngữ (ngôn ngữ máy) và Python cho đến cả máy học (machine learning) và thống kê. Như thế là quá nhiều cho các yêu cầu từ Google.

**Ghi chú dành cho các thẻ ghi nhớ:** The first time you recognize you know the answer, don't mark it as known. Lần đầu tiên bạn nhận ra bạn biết câu trả lời, đừng đánh dấu là đã biết.Bạn phải xem thẻ tương tự và đưa ra câu trả lời chính xác vài lần trước khi bạn thực sự khẳng định đã nắm được vấn đề.Lặp đi lặp lại việc này sẽ giúp kiến thức được khắc sâu vào não bạn.

Có thể thay thế thẻ ghi nhớ với [Anki](http://ankisrs.net/), đây là ứng dụng mà bạn sẽ thấy tôi khuyến khích sử dụng rất nhiều lần. Nó sử dụng một hệ thống lặp để giúp bạn có thể ghi nhớ được kiến thức.

Đây là ứng dụng cực kì thân thiện với người dùng, có mặt trên tất cả các hệ điều hành, và có hệ thống lưu trữ đồng bộ đám mây. Tốn khoản 25$ cho iOS nhưng miễn phí trên các hệ điều hành khác.

Cơ sỏ dữ liệu thẻ ghi nhớ của tôi tuân theo chuẩn định dạng của Anki: https://ankiweb.net/shared/info/25173560 (cảm ơn [@xiewenya](https://github.com/xiewenya))

### 3. Xem đi xem lại và xem lại nữa

Tôi giữ một danh sách xem nhanh các mã của ASCII, OSI stack, định nghĩa về Big-O, và nhiều hơn nữa. Tôi đọc bất cứ khi nào rảnh rỗi.

Khi gặp vấn đề trong lúc code, nghỉ ngơi chừng nửa giờ và đọc lại các thẻ ghi nhớ.

### 4. Tập trung

Có rất nhiều thứ lấy đi sự tập trung của ta, việc này tốn rất nhiều thời gian. Tập trung và toàn tâm toàn ý rất khó.


## Những phần không được đề cập


Danh sách lớn này bắt đầu như một bản To-do lược trích từ Huấn luyện phỏng vấn cho Google. Có vài công nghệ đang thịnh hành nhưng không được đề cập đến, ví dụ:

- SQL
- Javascript
- HTML, CSS, và các công nghệ thiết kế giao diện người dùng ("front-end").


## Kế hoạch hàng ngày

Một vài môn học chỉ mất một ngày, vài môn khác có thể mất nhiều ngày. Có vài môn chỉ có thể học thôi chứ không cài đặt được gì.

Mỗi ngày tôi sẽ chọn một trong các thứ liệt kê bên dưới, xem video bải giảng về nó, và viết mã trên:
- C - luyện tập sử dụng `struct` và các hàm nhận các `struct` đó cùng với các tham số khác.
- C++ - không sử dụng các kiểu dữ liệu, cấu trúc sẵn có.
- C++ - sử dụng các kiểu, cấu trúc sẵn có, ví dụ như `std::list` cho danh sách liên kết.
- Python - sử dụng kiểu, cấu trúc sẵn có (để luyện tập Python).
- Viết test (thuật ngữ dành cho các đoạn mã chuyên để kiểm tra phẩn mềm, ở đây tác giả cõ lẽ muốn đề cập đến [unit test](https://en.wikipedia.org/wiki/Unit_testing)) để chắc rằng tôi làm đúng. Đôi khi có thể chỉ là vài hàm `assert()` đơn giản.
- Bạn có thể thực hành với Java hoặc ngôn ngữ khác. Đây chỉ là sự lựa chọn của tôi.

Bạn không cần luyện tất cả các ngôn ngữ đó. Chỉ cần [một ngôn ngữ cho cuộc phỏng vấn là đủ](#chọn-ngôn-ngữ-lập-trình-cho-cuộc-phỏng-vấn).

Tại sao lại viết mã với tất cả các ngôn ngữ đó?

- Luyện tập, luyện tập, luyện tập, cho đến khi tôi phát bệnh với việc đó, và có thể giải các bài toán mà không gặp trục trặc gì (một vài bài toán có thể có nhiều trường hợp đặc biệt, hãy lưu lại các lần sai lầm đề ghi nhớ)
- Tôi muốn làm việc với các sức ép căn bản nhất (xin cấp phát/ giải phóng vùng nhớ, không sử dụng trợ giúp từ bộ dọn rác trong các ngôn ngữ câp cao, ngọai trừ Python)
- Học cách vận dụng kiểu dữ liệu sẵn có, nhờ đó, tôi có kinh nghiệm nhiều hơn và biết cách dùng chúng trong thực tế (sẽ không bao giờ bỏ thời gian ra tự thiết kế danh sách liên kết của riêng mình nữa).

Tôi có lẽ không đủ thời gian để thử hết tất cả các bước trên với từng chủ đề, nhưng tôi sẽ cố.

Bạn có thể xem code của tôi ở các trang sau:

 - [C] (https://github.com/jwasham/practice-c)
 - [C++] (https://github.com/jwasham/practice-cpp)
 - [Python] (https://github.com/jwasham/practice-python)

Bạn không cần phải ghi nhớ cặn kẽ từ giải thuật.

Hãy viết code trên bảng đen hoặc trên giấy. Đừng sử dụng máy tính. Chạy thử trên giấy với vài bộ dữ liệu mẫu, sau đó chạy thử thuật tóan của bạn trên một máy tính.


## Kiến thức tiên quyết

- [ ] **Học C**
    - C có ở khắp nơi. Bạn sẽ thấy các ví dụ trong sách, bài giảng, video, bất kỳ đâu mà bạn học.
    - [ ] [C Programming Language, Vol 2](https://www.amazon.com/Programming-Language-Brian-W-Kernighan/dp/0131103628)
        - Sách ngắn, nhưng nó sẽ cho bạn một nền tảng tốt về C, và nếu bạn luyện tập nhiều hơn, bạn sẽ nhanh chóng thành thạo nó. Hiểu về C giúp bạn hiểu cách các chương trình và bộ nhớ hoạt động.
        - [Lời giải cho các câu hỏi](https://github.com/lekkas/c-algorithms)

- [ ] **Máy tính thực thi một chương trình như thế nào?**
    - [ ] [CPU thực thi chương trình thế nào (How does CPU execute program) - video](https://www.youtube.com/watch?v=42KTvGYQYnA)
    - [ ] [Tập lệnh mã máy (Machine Code Instructions) - video](https://www.youtube.com/watch?v=Mv2XQgpbTNE)

## Độ phức tạp của thuật toán / Big-O / Phân tích tiệm cận 
- Link được giữ nguyên theo bản tiếng Anh
- [ ] [Harvard CS50 - Asymptotic Notation (video)](https://www.youtube.com/watch?v=iOq5kSKqeR4)
- [ ] [Big O Notations (general quick tutorial) (video)](https://www.youtube.com/watch?v=V6mKVRU1evU)
- [ ] [Big O Notation (and Omega and Theta) - best mathematical explanation (video)](https://www.youtube.com/watch?v=ei-A_wy5Yxw&index=2&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [ ] Skiena:
    - [video](https://www.youtube.com/watch?v=gSyDMtdPNpU&index=2&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [slides](http://www3.cs.stonybrook.edu/~algorith/video-lectures/2007/lecture2.pdf)
- [ ] [A Gentle Introduction to Algorithm Complexity Analysis](http://discrete.gr/complexity/)
- [ ] [Orders of Growth (video)](https://class.coursera.org/algorithmicthink1-004/lecture/59)
- [ ] [Asymptotics (video)](https://class.coursera.org/algorithmicthink1-004/lecture/61)
- [ ] [UC Berkeley Big O (video)](https://youtu.be/VIS4YDpuP98)
- [ ] [UC Berkeley Big Omega (video)](https://youtu.be/ca3e7UVmeUc)
- [ ] [Amortized Analysis (video)](https://www.youtube.com/watch?v=B3SpQZaAZP4&index=10&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [ ] [Illustrating "Big O" (video)](https://class.coursera.org/algorithmicthink1-004/lecture/63)
- [ ] TopCoder (includes recurrence relations and master theorem):
    - [Computational Complexity: Section 1](https://www.topcoder.com/community/data-science/data-science-tutorials/computational-complexity-section-1/)
    - [Computational Complexity: Section 2](https://www.topcoder.com/community/data-science/data-science-tutorials/computational-complexity-section-2/)
- [ ] [Cheat sheet](http://bigocheatsheet.com/)


    Nếu một vài bài học quá chuyên sâu về toán, bạn có thể nhảy cóc tới các bài toán riêng lẻ để có kiến thức toàn diện hơn.

## Cấu trúc dữ liệu

- ### Arrays
    - Cấp phát mảng vector tự động tùy biến kích cỡ.
    - [ ] Miêu tả, tên gốc được giữ nguyên kèm với bản dịch sang tiếng Việt:
        - [Arrays - Mảng (video)](https://www.coursera.org/learn/data-structures/lecture/OsBSF/arrays)
        - [UCBerkley CS61B - Linear and Multi-Dim Arrays - Mảng tuyến tính và mảng đa chiều(video)](https://youtu.be/Wp8oiO_CZZE?t=15m32s)
        - [Basic Arrays - Mảng cơ bản (video)](https://www.lynda.com/Developer-Programming-Foundations-tutorials/Basic-arrays/149042/177104-4.html)
        - [Multi-dim - Đa chiều(video)](https://www.lynda.com/Developer-Programming-Foundations-tutorials/Multidimensional-arrays/149042/177105-4.html)
        - [Dynamic Arrays - Mảng tùy biến (video)](https://www.coursera.org/learn/data-structures/lecture/EwbnV/dynamic-arrays)
        - [Jagged Arrays - Mảng trong mảng (video)](https://www.youtube.com/watch?v=1jtrQqYpt7g)
        - [Jagged Arrays - Mảng trong mảng (video)](https://www.lynda.com/Developer-Programming-Foundations-tutorials/Jagged-arrays/149042/177106-4.html)
        - [Resizing arrays - Mảng có thể tùy biến kích thước (video)](https://www.lynda.com/Developer-Programming-Foundations-tutorials/Resizable-arrays/149042/177108-4.html)
     - [ ] Cấp phát vector (Mảng có thể thay đổi với khả năng tự điều chỉnh kích cỡ):
        - [ ] Tập sử dụng mảng và con trỏ, dùng phép toán con trỏ  để nhảy tới một chỉ mục (index) thay vì sử dụng chỉ mục.
        - [ ] Tạo mảng mới với vùng nhớ được cấp phát sẵn
            - Có thể triển khai mảng số nguyên một cách nhanh chóng, nhưng không sử dụng các tính năng sẵn có
            - Bắt đầu với 16, hoặc số lớn hơn, với cấp số nhân của 2 - 16, 32, 64, 128
        - [ ] size() - Số lượng của các thành phần trong mảng
        - [ ] capacity() - Số lượng tối đa các phần tử mà mảng có thể lưu trữ
        - [ ] is_empty() - Kiểm tra mảng rỗng
        - [ ] at(index) - Trả về phần tử ở vị trí chỉ mục (index), hoặc lỗi nếu rơi ra ngoài chỉ mục
        - [ ] push(item) Thêm vào một phần tử mới
        - [ ] insert(index, item) - Thêm một phần tử mới tại vị trí của chỉ mục, điều chỉnh lại chỉ mục và đưa các phần tử còn lại dịch chuyển theo
        - [ ] prepend(item) - Thêm tại vị trí chỉ mục 0, hay đầu tiên
        - [ ] pop() - trả về phần tử cuối cùng
        - [ ] delete(index) - Xóa phần tử tại chỉ mục, dịch chuyển lại các phần tử trong mảng
        - [ ] remove(item) - Tìm theo giá trị của phần tử và xóa chỉ mục đang lưu trữ cho phần tử này (áp dụng với việc nhiều phần tử có cùng giá trị)
        - [ ] find(item) - Tìm theo giá trị của phần tử và trả về chỉ mục đầu tiên tìm được, -1 nếu không tìm thấy
        - [ ] resize(new_capacity) // private function
            - Khi tới giới hạn của mảng, tăng gấp đôi giá trị độ dài mảng để thay đổi kích thước
            - Khi xóa 1 thành phần, nếu kích thước hiện tại chỉ bằng 1/4 kích thước được cấp phát, thay đổi thành 1/2
    - [ ] Thời gian thực thi
        - O(1) để thêm/xóa tại vị trí cuối (tính luôn cả cấp phát lại để có thêm không gian lưu trữ), đánh chỉ mục, hay cập nhật
        - O(n) để thêm/xóa tại bất cứ đâu
    - [ ] Không gian
        - Liên tục trong bộ nhớ, giúp cải thiện hiệu suất
        - Không gian cần thiết = (Kích cở của mảng, thường >= n)* kích thước của 1 phần tử, cho dù là 2n, vẫn xem như O(n)

- ### Linked Lists
    - [ ] Miêu tả:
        - [ ] [Singly Linked Lists - Danh sách liên kết (video)](https://www.coursera.org/learn/data-structures/lecture/kHhgK/singly-linked-lists)
        - [ ] [CS 61B - Linked Lists - Danh sách liên kết (video)](https://www.youtube.com/watch?v=sJtJOtXCW_M&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&index=5)
    - [ ] [C Code (video)](https://www.youtube.com/watch?v=QN6FPiD0Gzo)
            - Không cần xem toàn bộ video, chỉ phần cấu trúc Node và cấp phát vùng nhớ.
    - [ ] Danh sách liên kết so sánh với Mảng:
        - [Core Linked Lists Vs Arrays - Danh sách liên kết Vs Mảng (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/rjBs9/core-linked-lists-vs-arrays)
        - [In The Real World Linked Lists Vs Arrays - Trong thực tế, Danh sách liên kết Vs Mảng (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/QUaUd/in-the-real-world-lists-vs-arrays)
    - [ ] [Why you should avoid linked lists - Tại sao bạn nên tránh danh sách liên kết(video)](https://www.youtube.com/watch?v=YQs6IC-vgmo)
    - [ ] Ghi chú: Bạn cần kiến thức về con trỏ trỏ về con trỏ:
        (Khi bạn chuyển một con trỏ vào trong 1 thân hàm khiến thay đổi địa chỉ mà con trỏ trỏ về)
        Trang này giúp bạn có cái nhìn khái quát về con trỏ trỏ tới con trỏ. Tối không khuyến khích đọc lướt qua danh sách này. Đề tài này rất khó đọc và nắm bắt.
        - [Pointers to Pointers - Con trỏ trỏ tới con trỏ](https://www.eskimo.com/~scs/cclass/int/sx8.html)
    - [ ] Cài đặt (Tôi đã thực hiện với con trỏ đuôi và không dùng con trỏ đuôi):
        - [ ] size() - Trả về số lượng các phần tử trong danh sách
        - [ ] empty() - Giá trị luận lý logic, true nếu rỗng
        - [ ] value_at(index) - Trả về phần tử tại vị trí thứ n (danh sách bắt đầu từ 0)
        - [ ] push_front(value) - Thêm phần tử mới vào đầu danh sách
        - [ ] pop_front() - Xóa phần tử đầu tiên và trả về giá trị này
        - [ ] push_back(value) - Thêm phần tử tại cuối danh sách
        - [ ] pop_back() - Xóa phần tử cuối và trả về giá trị
        - [ ] front() - Lấy giá trị của phần tử đầu tiền
        - [ ] back() - Lấy giá trị của phần tử cuối cùng
        - [ ] insert(index, value) - Thêm phần tử mới tại vị trí chỉ mục, phần tử hiện tại sẽ trỏ về phần tử mới tại vị trí chỉ mục này (A->B->C, thêm N tại vị trí B, A->D->B->C, A hiện giờ sẽ trỏ tới D, chỉ mục 1 sẽ trỏ tới D thay vì B)
        - [ ] erase(index) - Xóa node tại vị trí chỉ mục
        - [ ] value_n_from_end(n) - Trả về danh sách từ vị trí thứ n đến cuối danh sách
        - [ ] reverse() - đảo ngược danh sách
        - [ ] remove_value(value) - Xóa dữ liệu đầu tiên được tìm thấy khớp với giá trị được cho
    - [ ] Doubly-linked List
        - [Description - Miêu tả danh sách liên kết đôi (video)](https://www.coursera.org/learn/data-structures/lecture/jpGKD/doubly-linked-lists)
        - Không cần phải cài đặt 
        
- ### Stack
    - [ ] [Stacks (video)](https://www.coursera.org/learn/data-structures/lecture/UdKzQ/stacks)
    - [ ] [Using Stacks Last-In First-Out - Sử dụng stack Vào-Cuối-Ra-Trước (video)](https://www.lynda.com/Developer-Programming-Foundations-tutorials/Using-stacks-last-first-out/149042/177120-4.html)
    - [ ] Sẽ không cài đặt. Cài đặt với mảng là điều hiển nhiên.

- ### Queue
    - [ ] [Using Queues First-In First-Out -  Sử dụng hàng đợi Vào-Trước-Ra-Trước(video)](https://www.lynda.com/Developer-Programming-Foundations-tutorials/Using-queues-first-first-out/149042/177122-4.html)
    - [ ] [Queue (video)](https://www.coursera.org/learn/data-structures/lecture/EShpq/queue)
    - [ ] [Circular buffer/FIFO](https://en.wikipedia.org/wiki/Circular_buffer)
    - [ ] [Priority Queues - Hàng đợi ưu tiên (video)](https://www.lynda.com/Developer-Programming-Foundations-tutorials/Priority-queues-deques/149042/177123-4.html)
    - [ ] Cài đặt sử dụng danh sách liên kết, áp dụng con trỏ đuôi:
        - enqueue(value) - Thêm giá trị ở đuôi
        - dequeue() - Trả về giá trị của dữ liệu được thêm vào xa nhất (thông thường là dữ liệu đầu tiên trong danh sách)
        - empty()
    - [ ] Sử dụng mảng cố định kích thước:
        - enqueue(value) - Thêm giá trị vào cuối mảng
        - dequeue() - Trả về giá trị của dữ liệu được thêm vào xa nhất
        - empty()
        - full()
    - [ ] Chi phí:
        - Không cài đặt đúng việc sử dụng danh sách liên kết khi enqueue tại đầu và dequeue tại đuôi sẽ có chi phí là O(n) bởi vì bạn cần con trỏ next tới giá trị cuối cùng, khiến việc phải chạy qua toàn danh sách mỗi lần dequeue
        - enqueue: O(1) (Không đáng kể, danh sách liên kết và mảng [probing])
        - dequeue: O(1) (danh sách liên kết và mảng)
        - empty: O(1) (danh sách liên kết và mảng)

- ### Hash table
    - [ ] Video:
        - [ ] [Hashing with Chaining (video)](https://www.youtube.com/watch?v=0M_kIqhwbFo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=8)
        - [ ] [Table Doubling, Karp-Rabin (video)](https://www.youtube.com/watch?v=BRO7mVIFt08&index=9&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [ ] [Open Addressing, Cryptographic Hashing (video)](https://www.youtube.com/watch?v=rvdJDijO2Ro&index=10&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [ ] [PyCon 2010: The Mighty Dictionary (video)](https://www.youtube.com/watch?v=C4Kc8xzcA68)
        - [ ] [(Advanced) Randomization: Universal & Perfect Hashing (video)](https://www.youtube.com/watch?v=z0lJ2k0sl1g&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=11)
        - [ ] [(Advanced) Perfect hashing (video)](https://www.youtube.com/watch?v=N0COwN14gt0&list=PL2B4EEwhKD-NbwZ4ezj7gyc_3yNrojKM9&index=4)

    - [ ] Các khóa học online:
        - [ ] [Understanding Hash Functions - Hiểu hàm băm (video)](https://www.lynda.com/Developer-Programming-Foundations-tutorials/Understanding-hash-functions/149042/177126-4.html)
        - [ ] [Using Hash Tables - Sử dụng bảng băm (video)](https://www.lynda.com/Developer-Programming-Foundations-tutorials/Using-hash-tables/149042/177127-4.html)
        - [ ] [Supporting Hashing - Hỗ trợ băm(video)](https://www.lynda.com/Developer-Programming-Foundations-tutorials/Supporting-hashing/149042/177128-4.html)
        - [ ] [Language Support Hash Tables - Ngôn ngữ hỗ trợ bảng băm (video)](https://www.lynda.com/Developer-Programming-Foundations-tutorials/Language-support-hash-tables/149042/177129-4.html)
        - [ ] [Core Hash Tables - Cơ bản về bảng băm (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/m7UuP/core-hash-tables)
        - [ ] [Data Structures - Cấu trúc dữ liệu (video)](https://www.coursera.org/learn/data-structures/home/week/3)
        - [ ] [Phone Book Problem - Vấn đề sổ điện thoại (video)](https://www.coursera.org/learn/data-structures/lecture/NYZZP/phone-book-problem)
        - [ ] Phân phối bảng băm:
            - [Instant Uploads And Storage Optimization In Dropbox - Tải nhanh và tối ưu lưu trữ trong Dropbox (video)](https://www.coursera.org/learn/data-structures/lecture/DvaIb/instant-uploads-and-storage-optimization-in-dropbox)
            - [Distributed Hash Tables - Phân phối bảng băm(video)](https://www.coursera.org/learn/data-structures/lecture/tvH8H/distributed-hash-tables)

    - [ ] Cài đặt với mảng sử dụng thăm dò tuyến tính:
        - hash(k, m) - m là kích thước của bảng băm
        - add(key, value) - nếu khóa đã tồn tại, cập nhật giá trị
        - exists(key)
        - get(key)
        - remove(key)


## Kiến thức ngoài 
- ### Tìm kiếm nhị phân
    - [ ] [Tìm kiếm nhị phân (Binary Search) - video](https://www.youtube.com/watch?v=D5SrAga1pno)
    - [ ] [Tìm kiếm nhị phân - Khan Academy (Binary Search) - video](https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search)
    - [ ] [giải thích chi tiết](https://www.topcoder.com/community/data-science/data-science-tutorials/binary-search/)
    - [ ] Cài đặt:
        - Tìm kiếm nhị phân (trên mảng số nguyên đã sắp xếp)
        - Tìm kiếm nhị phân sử dụng đệ quy

- ### Toán tử trên bit
    - [ ] [Bits cheat sheet](https://github.com/jwasham/google-interview-university/blob/master/extras/cheat%20sheets/bits-cheat-cheet.pdf) - bạn nên thuộc lòng nhiều lũy thừa của 2 (từ 2^1 đến 2^16 và 2^32)
    - [ ] Hãy chuẩn bị một nền tảng tốt về các biến đổi bit với các toán tử: &, |, ^, ~, >>, <<
        - [ ] [words (thuật ngữ trong kiến trúc máy tính)](https://en.wikipedia.org/wiki/Word_(computer_architecture) )
        - [ ] Bài mở đầu:
            [Thao tác bit (Bit Manipulation) - video](https://www.youtube.com/watch?v=7jkIUgLC29I)
        - [ ] [C Programming Tutorial 2-10: Bitwise Operators (video)](https://www.youtube.com/watch?v=d0AwjSpNXR0)
        - [ ] [Thao tác bit (Bit Manipulation)](https://en.wikipedia.org/wiki/Bit_manipulation)
        - [ ] [Toán tử trên bit (Bitwise Operation)](https://en.wikipedia.org/wiki/Bitwise_operation)
        - [ ] [Bithacks](https://graphics.stanford.edu/~seander/bithacks.html)
        - [ ] [The Bit Twiddler](http://bits.stephan-brumme.com/)
        - [ ] [The Bit Twiddler Interactive](http://bits.stephan-brumme.com/interactive.html)
    - [ ] Phần bù 2 và phần bù 1 (2s and 1s complement)
        - [Nhị phân: Cộng và trừ (Tại sao chúng ta sử dụng phần bù 2) - video](https://www.youtube.com/watch?v=lKTsv6iVxV4)
        - [Phần bù 1 (1s Complement)](https://en.wikipedia.org/wiki/Ones%27_complement)
        - [Phần bù 2 (2s Complement)](https://en.wikipedia.org/wiki/Two%27s_complement)
    - [ ] Đếm tập hợp của các bit
        - [4 cách đê đếm các bit trong một byte - video](https://youtu.be/Hzuzo9NJrlc)
        - [Đếm bit](https://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetKernighan)
        - [Làm thế nào để đếm số lượng các bit 1 trong một số 32 bit](http://stackoverflow.com/questions/109023/how-to-count-the-number-of-set-bits-in-a-32-bit-integer)
    - [ ] Làm tròn đến lũy thừa gần nhất của 2:
        - [Làm tròn lên lũy thừa kế tiếp của 2](http://bits.stephan-brumme.com/roundUpToNextPowerOfTwo.html)
    - [ ] Đôi giá trị:
        - [Swap](http://bits.stephan-brumme.com/swap.html)
    - [ ] Giá trị tuyệt đối:
        - [Giá trị tuyết đối của số nguyên](http://bits.stephan-brumme.com/absInteger.html)


## Cây

- ### Cây - Ghi chú và kiến thức nền
    - [ ] [Chuỗi bài giảng: Căn bản về cây](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/ovovP/core-trees)
    - [ ] [Chuỗi bài giảng: Cây](https://www.coursera.org/learn/data-structures/lecture/95qda/trees)
    - Xây dựng cây cơ bản.
    - Duyệt cây.
    - Các thuật toán biến đổi.
    - BFS - Tìm kiếm ưu tiên chiều rộng (breadth-first search)
        - [MIT (video)](https://www.youtube.com/watch?v=s-CYnVz-uh4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=13)
        - Các thứ tự duyết (BFS, sử dụng `queue`)
            Độ phức tạp thời gian: O(n)
            Độ phức tạp không gian: tốt nhất: O(1), tệ nhất: O(n/2)=O(n)
    - DFS - Tìm kiếm ưu tiên chiều sâu (depth-first search)
        - [MIT (video)](https://www.youtube.com/watch?v=AfSk24UTFS8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=14)
        - Ghi chú:
            Độ phức tạp thời gian: O(n)
            Độ phức tạp không gian:
                tốt nhất: O(log n) - trung bình: bằng chiều cao của cây
                tệ nhất: O(n)
        - theo thứ tự (inorder) - (DFS: left, self, right)
        - nhánh con trước (postorder) - (DFS: left, right, self)
        - nhánh con sau (preorder) - (DFS: self, left, right)


- ### Cây tìm kiếm nhị phân
    BST: Binary search tree - cây tìm kiếm nhị phân.
    - [ ] [Ôn lại cây tìm kiếm nhị phân - video](https://www.youtube.com/watch?v=x6At0nzX92o&index=1&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
    - [ ] [Chuỗi video](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/p82sw/core-introduction-to-binary-search-trees)
        - Khởi đầu với bảng ký hiệu và đi xuyên suốt các ứng dụng của BST (Binary search tree).
    - [ ] [Dẫn nhập - video](https://www.coursera.org/learn/data-structures/lecture/E7cXP/introduction)
    - [ ] [MIT - video](https://www.youtube.com/watch?v=9Jry5-82I68)
    - C/C++:
        - [ ] [Cây tìm kiếm nhị phân - Cài đặt trên C/C++ - video](https://www.youtube.com/watch?v=COZK7NATh4k&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=28)
        - [ ] [Cài đặt BST - cấp phát bộ nhớ trên `stack` và `heap` - video](https://www.youtube.com/watch?v=hWokyBoo0aI&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=29)
        - [ ] [Tìm phần tử nhỏ nhất và lớn nhất trong BST - video](https://www.youtube.com/watch?v=Ut90klNN264&index=30&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [Tìm chiều cao của BST - video](https://www.youtube.com/watch?v=_pnqMz5nrRs&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=31)
        - [ ] [Duyệt cây nhị phân - các chiến lược BFS và DFS - video](https://www.youtube.com/watch?v=9RHO6jU--GU&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=32)
        - [ ] [Cây nhị phân: duyệt theo cấp - video](https://www.youtube.com/watch?v=86g8jAQug04&index=33&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [Duyệt cây nhị phân: Preorder, Inorder, Postorder - video](https://www.youtube.com/watch?v=gm8DUJJhmY4&index=34&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [Kiểm tra một cậy nhị phân có phải là BST không - video](https://www.youtube.com/watch?v=yEwSGhSsT0U&index=35&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [Xóa một nút trong BST - video](https://www.youtube.com/watch?v=gcULXE7ViZw&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=36)
        - [ ] [Xác định nút tiếp theo một nút cho trước khi duyệt cây inorder (Inorder Successor in a binary search tree) - video](https://www.youtube.com/watch?v=5cPbNCrdotA&index=37&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
    - [ ] Cài đặt:

        - [ ] `insert` // thêm gíá trị vào cây
        - [ ] `get_node_count` // lấy số lượng nút trong cây
        - [ ] `print_values` // In ra gíá trị trong cây, từ nhỏ nhất đến lớn nhất
        - [ ] `delete_tree` // Xóa cây
        - [ ] `is_in_tree` // cho biết gíá trị cho trước có tồn tại trong cây hay không
        - [ ] `get_height` // cho biết chiều cao của cây
        - [ ] `get_min` // cho biết giá trị nhỏ nhất trong cây
        - [ ] `get_max` // cho biết giá trị lớn nhất trong cây
        - [ ] `is_binary_search_tree` // kiểm tra xem cây cho trước có thỏa mãn điều kiện của một BST không.
        - [ ] `delete_value` // xóa một gíá trị trong cây
        - [ ] `get_successor` // Trả về phần tử cao nhất trong cây liền sau một gíá trị cho trước hoặc -1 nếu không tìm được

- ### Heap / Priority Queue / Binary Heap
    - hình thức thể hiện như một cây, nhưng chúng thường được lưu trữ theo kiểu tuyến tính (mảng, danh sách liên kết)
    - [ ] [Heap](https://en.wikipedia.org/wiki/Heap_(data_structure))
    - [ ] [Dẫn nhập - video](https://www.coursera.org/learn/data-structures/lecture/2OpTs/introduction)
    - [ ] [Cài đặt căn bản - video](https://www.coursera.org/learn/data-structures/lecture/z3l9N/naive-implementations)
    - [ ] [Cây nhị phân - video](https://www.coursera.org/learn/data-structures/lecture/GRV2q/binary-trees)
    - [ ] [Các lưu ý về chiều cao của cây - video](https://www.coursera.org/learn/data-structures/supplement/S5xxz/tree-height-remark)
    - [ ] [Các toán tử cơ bản - video](https://www.coursera.org/learn/data-structures/lecture/0g1dl/basic-operations)
    - [ ] [Cây nhị phân đầy đủ - video](https://www.coursera.org/learn/data-structures/lecture/gl5Ni/complete-binary-trees)
    - [ ] [Mã giả - video](https://www.coursera.org/learn/data-structures/lecture/HxQo9/pseudocode)
    - [ ] [Heap Sort - video](https://youtu.be/odNJmw5TOEE?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3291)
    - [ ] [Heap Sort - coursera - video](https://www.coursera.org/learn/data-structures/lecture/hSzMO/heap-sort)
    - [ ] [Xây dựng một heap - video](https://www.coursera.org/learn/data-structures/lecture/dwrOS/building-a-heap)
    - [ ] [MIT: Heaps và Heap Sort - video](https://www.youtube.com/watch?v=B7hVxCmfPtM&index=4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [CS 61B Lecture 24: Priority Queues - video](https://www.youtube.com/watch?v=yIUFT6AKBGE&index=24&list=PL4BBB74C7D2A1049C)
    - [ ] [Xây dựng Heap với thời gian tuyến tính `O(n)`](https://www.youtube.com/watch?v=MiyLo8adrWw)
    - [ ] Tự cài đặt max-heap:
        - [ ] `insert`
        - [ ] `sift_up` - cần thiết cho hàm `insert`.
        - [ ] `get_max` - trả về phần tử lớn nhất mà không xóa nó khỏi heap
        - [ ] `get_size()` - trả về số lượng các phần từ trong một heap
        - [ ] `is_empty()` - trả về `true` nếu heap rỗng
        - [ ] `extract_max` - trà về phần tử lớn nhất và đồng thời xóa nó khỏi heap
        - [ ] `sift_down` - cần thiết cho hàm `extract_max`
        - [ ] `remove(i)` - xóa phần tử tại một vị trí `i` cho trước
        - [ ] `heapify` - tạo một heap từ một mảng các phần tử, cần thiết cho hàm `heap_sort`
        - [ ] `heap_sort()` - nhận vào một mảng chưa sắp xếp, sắp xếp nó tại chỗ (không tốn thêm bộ nhớ) bằng một kỹ thuật sử dụng heap
            - Chú ý: sử dụng min-heap sẽ tiết kiệm được một phép tính (giảm thời gian thực thi thuật toán), nhưng lại tốn gấp đôi bộ nhớ (để chứa kết quả phụ)

> In progress
