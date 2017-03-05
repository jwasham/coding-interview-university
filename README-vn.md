# Google Interview University

Bản gốc:
* [English](./README.md)

Tác giả gốc: [John Washam](https://github.com/jwasham)

Đóng góp cho bản dịch tiếng Việt:
* [Lê Tiến Tài](https://github.com/letientai299) - [@letientai299](https://twitter.com/letientai299)
* [Võ Tường Thọ](https://github.com/thovo) - [@thovo](https://twitter.com/tho_vo)
* [Lê Tấn Đăng Khoa](https://github.com/dangkhoasdc) - [@dksdc](https://twitter.com/dksdc)
* [Trương Đức Duy](https://github.com/duytruong) - [@dauruy](https://twitter.com/dauruy)

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
- [Sắp xếp](#sắp-xếp)
    - Sắp xếp chọn (Selection Sort)
    - Sắp xếp chèn (Insertion Sort)
    - Sắp xếp chọn vun đống (Heapsort)
    - Sắp xếp nhanh (Quicksort)
    - Sắp xếp trộn (Merge Sort)
- [Đồ thị](#đồ-thị)
    - có hướng
    - vô hướng
    - ma trận kề
    - danh sách kề
    - duyệt đồ thị: BFS, DFS
- [Thêm nhiều kiến thức nữa](#thêm-nhiều-kiến-thức-nữa)
    - [Đệ quy](#Đệ-quy)
    - [Lập trình hướng đối tượng](#lập-trình-hướng-đối-tượng)
    - [Mẫu thiết kế](#mẫu-thiết-kế)
    - [Tổ hợp và Xác Suất](#tổ-hợp-và-xác-suất)
    - [NP, NP-Complete và thuật toán xấp xỉ gần đúng](#np-np-complete-và-thuật-toán-xấp-xỉ-gần-đúng)
    - [Bộ nhớ cache](#bộ-nhớ-cache)
    - [Tiến trình và tiểu trình](#tiến-trình-và-tiểu-trình)
    - [Các công trình nghiên cứu](#các-công-trình-nghiên-cứu)
    - [Kiểm thử phần mềm](#kiểm-thử-phần-mềm)
    - [Lập lịch](#lập-lịch)
    - [Cài đặt các hàm hệ thống](#cài-đặt-các-hàm-hệ-thống)
    - [Tìm kiếm và xử lý chuỗi](#tìm-kiếm-và-xử-lý-chuỗi)
- [Thiết kế hệ thống, Khả năng mở rộng, Xử lý dữ liệu](#thiết-kế-hệ-thống-khả-năng-mở-rộng-xử-lý-dữ-liệu) (Nếu bạn có hơn 4 năm kinh nghiệm)
- [Tống kết](#tổng-kết)
- [Thực hành các câu hỏi về lập trình](#thực-hành-các-câu-hỏi-về-lập-trình)
- [Giải bài tập lập trình](#giải-bài-tập-lập-trình)
- [Khi bạn tiến gần đến kỳ phỏng vấn](#khi-bạn-tiến-gần-đến-kỳ-phỏng-vấn)
- [Resume của bạn](#resume-của-bạn)
- [Hãy nghĩ đến những thứ bạn sẽ được hỏi](#hãy-nghĩ-đến-những-thứ-bạn-sẽ-được-hỏi)
- [Chuẩn bị câu hỏi dành cho phỏng vấn viến](#chuẩn-bị-câu-hỏi-dành-cho-phỏng-vấn-viến)
- [Khi bạn được nhận việc](#khi-bạn-được-nhận-việc)

---------------- Everything below this point is optional ----------------

- [Sách bổ sung](#sách-bổ-sung)
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
- [Đọc thêm về một số đề tài](đọc-thêm-về-một-số-đề-tài)
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


## Sắp xếp

- [ ] Ghi chú:
    - Cài đặt các thuật toán sắp xếp và với mỗi thuật toán, nắm vững độ phức tạp trong các trường hợp tốt nhất, xấu nhất và trung bình:
        - Bỏ qua sắp xếp nổi bọt (bubble sort) - thực thi thảm hại - O(n^2), trừ khi n <= 16
    - [ ] Tính ổn định của các thuật toán sắp xếp ("Sắp xếp nhanh (Quicksort) có ổn định không?")
        - [Tính ổn định của các thuật toán sắp xếp](https://en.wikipedia.org/wiki/Sorting_algorithm#Stability) (wiki)
        - [Tính ổn định trong các thuật toán sắp xếp](http://stackoverflow.com/questions/1517793/stability-in-sorting-algorithms) (stackoverflow)
        - [Tính ổn định trong các thuật toán sắp xếp](http://www.geeksforgeeks.org/stability-in-sorting-algorithms/) (geeksforgeeks)
        - [Các thuật toán sắp xếp - Tính ổn định](http://homepages.math.uic.edu/~leon/cs-mcs401-s08/handouts/stability.pdf) (pdf)
    - [ ] Các thuật toán nào có thể được sử dụng trên danh sách liên kết? mảng? cả hai?
        - Tôi không khuyến khích sắp xếp một danh sách liên kết, nhưng sắp xếp trộn (Merge Sort) có vẻ hữu dụng trong trường hợp đó.
        - [Sắp xếp trộn trên danh sách liên kết](http://www.geeksforgeeks.org/merge-sort-for-linked-list/)

- Với sắp xếp vun đống (Heapsort), xem lại see cấu trúc Heap ở trên. Sắp xếp vun đống tốt, nhưng không ổn định.

- [ ] [Sedgewick - Mergesort (5 videos)](https://www.youtube.com/watch?v=4nKwesx_c8E&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9)
    - [ ] [1. Mergesort](https://www.youtube.com/watch?v=4nKwesx_c8E&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9&index=1)
    - [ ] [2. Sắp xếp trộn từ dưới lên (Bottom up Mergesort)](https://www.youtube.com/watch?v=HGOIGUYjeyk&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9&index=2)
    - [ ] [3. Độ phức tạp của các thuật toán sắp xếp (Sorting Complexity)](https://www.youtube.com/watch?v=WvU_mIWo0Ac&index=3&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9)
    - [ ] [4. Các hàm so sánh (Comparators)](https://www.youtube.com/watch?v=7MvC1kmBza0&index=4&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9)
    - [ ] [5. Tính ổn định (Stability)](https://www.youtube.com/watch?v=XD_5iINB5GI&index=5&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9)

- [ ] [Sedgewick - Quicksort (4 videos)](https://www.youtube.com/playlist?list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1)
    - [ ] [1. Quicksort](https://www.youtube.com/watch?v=5M5A7qPWk84&index=1&list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1)
    - [ ] [2. Cách chọn (Selection)](https://www.youtube.com/watch?v=CgVYfSyct_M&index=2&list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1)
    - [ ] [3. Lặp khóa (Duplicate Keys)](https://www.youtube.com/watch?v=WBFzOYJ5ybM&index=3&list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1)
    - [ ] [4. Các hệ thống sắp xếp (System Sorts)](https://www.youtube.com/watch?v=rejpZ2htBjE&index=4&list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1)

- [ ] UC Berkeley (chuỗi video bài giảng):
    - [ ] [CS 61B Lecture 29: Sorting I (video)](https://www.youtube.com/watch?v=EiUvYS2DT6I&list=PL4BBB74C7D2A1049C&index=29)
    - [ ] [CS 61B Lecture 30: Sorting II (video)](https://www.youtube.com/watch?v=2hTY3t80Qsk&list=PL4BBB74C7D2A1049C&index=30)
    - [ ] [CS 61B Lecture 32: Sorting III (video)](https://www.youtube.com/watch?v=Y6LOLpxg6Dc&index=32&list=PL4BBB74C7D2A1049C)
    - [ ] [CS 61B Lecture 33: Sorting V (video)](https://www.youtube.com/watch?v=qNMQ4ly43p4&index=33&list=PL4BBB74C7D2A1049C)

- [ ] [Sắp xếp nổi bọt (Bubble Sort) - video](https://www.youtube.com/watch?v=P00xJgWzz2c&index=1&list=PL89B61F78B552C1AB)
- [ ] [Phân tích thuật toán sắp xếp nổi bọt (Analyzing Bubble Sort) - video](https://www.youtube.com/watch?v=ni_zk257Nqo&index=7&list=PL89B61F78B552C1AB)
- [ ] [Sắp xếp chèn và sắp xếp trộn (Insertion Sort, Merge Sort) - video](https://www.youtube.com/watch?v=Kg4bqzAqRBM&index=3&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
- [ ] [Sắp xếp chèn (Insertion Sort) - video](https://www.youtube.com/watch?v=c4BRHC7kTaQ&index=2&list=PL89B61F78B552C1AB)
- [ ] [Sắp xếp trộn (Merge Sort) - video](https://www.youtube.com/watch?v=GCae1WNvnZM&index=3&list=PL89B61F78B552C1AB)
- [ ] [Sắp xếp nhanh (Quicksort) - video](https://www.youtube.com/watch?v=y_G9BkAm6B8&index=4&list=PL89B61F78B552C1AB)
- [ ] [Sắp xếp chọn (Selection Sort) - video](https://www.youtube.com/watch?v=6nDMgr0-Yyo&index=8&list=PL89B61F78B552C1AB)

- [ ] Cài đặt cho sắp xếp trộn:
    - [ ] [Sử dụng mảng đệm (C)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/sorting/mergesort.c)
    - [ ] [Sử dụng mảng đệm (Python)](https://github.com/jwasham/practice-python/blob/master/merge_sort/merge_sort.py)
    - [ ] [Sắp xếp tại chỗ, không dùng mảng đệm (C++)](https://github.com/jwasham/practice-cpp/blob/master/merge_sort/merge_sort.cc)
- [ ] Cài đặt cho sắp xếp nhanh:
    - [ ] [C](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/randomization/quick.c)
    - [ ] [Cài đặt khác dùng C](https://github.com/jwasham/practice-c/blob/master/quick_sort/quick_sort.c)
    - [ ] [Python](https://github.com/jwasham/practice-python/blob/master/quick_sort/quick_sort.py)

- [ ] Bài tập cài đặt:
    - [ ] Sắp xếp trộn: O(n log n) trường hợp trung bình và xấu nhất
    - [ ] Sắp xếp nhanh O(n log n) trường hợp trung bình
    - Sắp xếp chọn và sắp xếp chèn đều là O(n^2) cho trường hợp trung bình và xấu nhất.
    - Với sắp xếp vun đống, xem lại cấu trúc Heap ở trên.

- [ ] Không nhất thiết, nhưng tôi khuyến khích xem các phần sau:
    - [ ] [Sedgewick - Sắp xếp theo cơ số (Radix Sorts) (6 videos)](https://www.youtube.com/playlist?list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53)
        - [ ] [1. Chuỗi trong Java (Strings in Java)](https://www.youtube.com/watch?v=zRzU-FWsjNU&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53&index=6)
        - [ ] [2. Đếm các khóa đã được lập chỉ mục (Key Indexed Counting)](https://www.youtube.com/watch?v=CtgKYmXs62w&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53&index=5)
        - [ ] [3. Sắp xếp cơ số ưu tiên chữ số thấp nhất (Least Significant Digit First String Radix Sort)](https://www.youtube.com/watch?v=2pGVq_BwPKs&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53&index=4)
        - [ ] [4. Sắp xếp cơ số ưu tiên chữ số cao nhất (Most Significant Digit First String Radix Sort)](https://www.youtube.com/watch?v=M3cYNY90R6c&index=3&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53)
        - [ ] [5. 3-way Radix Quicksort](https://www.youtube.com/watch?v=YVl58kfE6i8&index=2&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53):  Sắp xếp cơ số kết hợp sắp xếp nhanh, trong đó, chỉ chia mảng ban đầu thành 3 nhóm (thay vì chia theo R nhóm trong sắp xếp cơ số thông thường).
        - [ ] [6. Mảng hậu tố (Suffix Arrays)](https://www.youtube.com/watch?v=HKPrVm5FWvg&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53&index=1)
    - [ ] [Sắp xếp cơ số](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#radixSort)
    - [ ] [Sắp xếp cơ số (video)](https://www.youtube.com/watch?v=xhr26ia4k38)
    - [ ] [Sắp xếp cơ số, sắp xếp đếm (Counting Sort, thực thi thời gian tuyến tính, nhưng có nhiều giới hạn đối với dự liệu)- video](https://www.youtube.com/watch?v=Nz1KZXbghj8&index=7&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [Sự ngẫu nhiên: Phép nhân ma trận, Sắp xếp nhanh và thuật toán của Freivalds - video](https://www.youtube.com/watch?v=cNB2lADK3_s&index=8&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [Sắp xếp trong thời gian tuyến tính (Sorting in Linear Time) - video](https://www.youtube.com/watch?v=pOKy3RZbSws&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=14)

Nếu bạn muốn biết thêm chi tiết trong chủ đề này, xem qua phần "Sắp xếp" trong [Đọc thêm về một số đề tài](đọc-thêm-về-một-số-đề-tài)


> TODO replace sections anchor after translate "Đọc thêm về một số đề tài"


## Đồ thị

Đồ thị có thể được sử dụng để miêu tả nhiều bài toán trong khoa học máy tính, vậy nên phần này cũng khá dài, tương đương với [Cây](#cây) và [Sắp xếp](#sắp-xếp).

- Ghi chú từ Yegge:
    - Có 3 cách cơ bản để thể hiện một đồ thị trong bộ nhớ:
        - Các đối tượng (objects) và con trỏ (pointers)
        - Ma trận
        - Danh sách kề (adjacency list)
    - Hãy làm quen với mỗi cách thể hiện và nắm vững ưu, nhược của nó.
    - BFS và DFS - biết về độ phức tạp tính toán của chúng, ước lượng những sự được và mất khi sử dụng, và cài đặt chúng như thế nào
    - Khi được trao cho một bài toán, hãy thử tìm một giải thuật sử dụng đồ thị trước khi nghĩ đến các hướng giải quyết khác.

- [ ] Các bài giảng của giáo sư Skiena, tốt để dẫn nhập:
    - [ ] [CSE373 2012 - Lecture 11 - Graph Data Structures (video)](https://www.youtube.com/watch?v=OiXxhDrFruw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=11)
    - [ ] [CSE373 2012 - Lecture 12 - Breadth-First Search (video)](https://www.youtube.com/watch?v=g5vF8jscteo&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=12)
    - [ ] [CSE373 2012 - Lecture 13 - Graph Algorithms (video)](https://www.youtube.com/watch?v=S23W6eTcqdY&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=13)
    - [ ] [CSE373 2012 - Lecture 14 - Graph Algorithms (con't) (video)](https://www.youtube.com/watch?v=WitPBKGV0HY&index=14&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [CSE373 2012 - Lecture 15 - Graph Algorithms (con't 2) (video)](https://www.youtube.com/watch?v=ia1L30l7OIg&index=15&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [CSE373 2012 - Lecture 16 - Graph Algorithms (con't 3) (video)](https://www.youtube.com/watch?v=jgDOQq6iWy8&index=16&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)

- [ ] Đồ thị (ôn tập và mở rộng) (tên video được giữ nguyên vì có quá nhiều thuật ngữ và viết tắt):
    - [ ] [6.006 Single-Source Shortest Paths Problem (video)](https://www.youtube.com/watch?v=Aa2sqUhIn-E&index=15&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [6.006 Dijkstra (video)](https://www.youtube.com/watch?v=2E7MmKv0Y24&index=16&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [6.006 Bellman-Ford (video)](https://www.youtube.com/watch?v=ozsuci5pIso&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=17)
    - [ ] [6.006 Speeding Up Dijkstra (video)](https://www.youtube.com/watch?v=CHvQ3q_gJ7E&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=18)
    - [ ] [Aduni: Graph Algorithms I - Topological Sorting, Minimum Spanning Trees, Prim's Algorithm -  Lecture 6 (video)]( https://www.youtube.com/watch?v=i_AQT_XfvD8&index=6&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
    - [ ] [Aduni: Graph Algorithms II - DFS, BFS, Kruskal's Algorithm, Union Find Data Structure - Lecture 7 (video)]( https://www.youtube.com/watch?v=ufj5_bppBsA&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=7)
    - [ ] [Aduni: Graph Algorithms III: Shortest Path - Lecture 8 (video)](https://www.youtube.com/watch?v=DiedsPsMKXc&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=8)
    - [ ] [Aduni: Graph Alg. IV: Intro to geometric algorithms - Lecture 9 (video)](https://www.youtube.com/watch?v=XIAQRlNkJAw&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=9)
    - [ ] [CS 61B 2014 (starting at 58:09) (video)](https://youtu.be/dgjX4HdMI-Q?list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&t=3489)
    - [ ] [CS 61B 2014: Weighted graphs (video)](https://www.youtube.com/watch?v=aJjlQCFwylA&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&index=19)
    - [ ] [Greedy Algorithms: Minimum Spanning Tree (video)](https://www.youtube.com/watch?v=tKwnms5iRBU&index=16&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [Strongly Connected Components Kosaraju's Algorithm Graph Algorithm (video)](https://www.youtube.com/watch?v=RpgcYiky7uw)

- Khóa học đầy đủ về đồ thị trên Coursera:
    - [ ] [Các thuật toán trên đồ thị (video)](https://www.coursera.org/learn/algorithms-on-graphs/home/welcome)

- Yegge: Nếu bạn có cơ hội, hãy thử nghiên cứu các thuật toán đẹp hơn:
    - [ ] Thuật toán tìm đường đi ngắn nhất của Dijkstra - xem phần trên - 6.006
    - [ ] A*
        - [ ] [Thuật toán tìm kiếm A sao (A*)](https://en.wikipedia.org/wiki/A*_search_algorithm)
        - [ ] [Hướng dẫn cài đặt thuật toán tìm đường đi A* - video](https://www.youtube.com/watch?v=KNXfSOx4eEE)
        - [ ] [Thuật toán tìm đường A* (E01: giải thích thuật toán) - video](https://www.youtube.com/watch?v=-L-WgKMFuhE)

- Tôi sẽ viết mã cài đặt:
    - [ ] DFS với danh sách kề (đệ quy)
    - [ ] DFS với danh sách kề (lặp với stack)
    - [ ] DFS với ma trận kề (adjacency matrix) (đệ quy)
    - [ ] DFS với ma trận kề (adjacency matrix) (lặp với stack)
    - [ ] BFS với danh sách kề
    - [ ] BFS với ma trận kề
    - [ ] Đường đi ngắn nhất từ một nút đến các nút khác (single-source shortest path) (Dijkstra)
    - [ ] Cây khung (spanning tree) nhỏ nhất
    - Các thuật toán dựa trên DFS (xem lại các video của Aduni):
        - [ ] tìm chu trình (đường đi mà trên đó tồn tại một nút được ghé qua ít nhất 2 lần) trong đồ thị (cần thiết cho sắp xếp topo (topological sort), vì tôi sẽ kiểm tra có chu trình không trước khi bắt đầu sắp xếp)
        - [ ] Sắp xếp topo (topological sort)
        - [ ] Đếm các thành phần liên thông trong một đồ thị
        - [ ] Liệt kê các thành phần liên thông mạnh
        - [ ] Kiểm tra tính song phương của đồ thị (Bipartite graph: dạng đồ thị mà tập định có thể chia thành 2 tập con không chứa phần tử chung, sao cho không có cặp 2 điểm nào trong cùng một tập hợp là kề nhau).

Bạn sẽ biết thêm nhiều ứng dụng của đồ thị trong sách của Skiena (xem danh mục sách bên dưới) và các sách về phỏng vấn.


## Thêm nhiều kiến thức nữa

- ### Đệ quy
    - [ ] Các bài giảng của đại học Stanford về đệ quy và quay lui:
        - [ ] [Lecture 8 | Programming Abstractions (video)](https://www.youtube.com/watch?v=gl3emqCuueQ&list=PLFE6E58F856038C69&index=8)
        - [ ] [Lecture 9 | Programming Abstractions (video)](https://www.youtube.com/watch?v=uFJhEPrbycQ&list=PLFE6E58F856038C69&index=9)
        - [ ] [Lecture 10 | Programming Abstractions (video)](https://www.youtube.com/watch?v=NdF1QDTRkck&index=10&list=PLFE6E58F856038C69)
        - [ ] [Lecture 11 | Programming Abstractions (video)](https://www.youtube.com/watch?v=p-gpaIGRCQI&list=PLFE6E58F856038C69&index=11)
    - Khi nào thích hợp để sử dụng?
    - Đệ quy đuôi tốt hơn hay không như thế nào?
        - [ ] [Đệ quy đuôi là gì Tại sao nó không tốt(What Is Tail Recursion Why Is It So Bad)?](https://www.quora.com/What-is-tail-recursion-Why-is-it-so-bad)
        - [ ] [Đệ quy đuôi (Tail Recursion) (video)](https://www.youtube.com/watch?v=L1jjXGfxozc)

- ### Lập trình hướng đối tượng
    - [ ] [Phụ thêm: Seri về UML 2.0 (Optional: UML 2.0 Series) (video)](https://www.youtube.com/watch?v=OkC7HKtiZC0&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc)
    - [ ] Lập trình hướng đối tượng: Phát triển phần mềm sử dụng UML và Java (21 videos):
        - Có thể bỏ qua phần này nếu bạn đã có kiến thức vững chắc về OOP
        - [Lập trình hướng đối tượng: Phát triển phần mềm sử dụng UML và Java](https://www.youtube.com/playlist?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)
    - [ ] Những điểm quan trọng nhất của OOP:
        - [ ] [Bob Martin Những điểm quan trọng nhất của lập trình hướng đối tượng và thiết kế linh hoạt (Bob Martin SOLID Principles of Object Oriented and Agile Design) (video)](https://www.youtube.com/watch?v=TMuno5RZNeE)
        - [ ] [Thiết kế mẫu trong C# (SOLID Design Patterns in C#) (video)](https://www.youtube.com/playlist?list=PL8m4NUhTQU48oiGCSgCP1FiJEcg_xJzyQ)
        - [ ] [Những điểm quan trọng nhất (SOLID Principles) (video)](https://www.youtube.com/playlist?list=PL4CE9F710017EA77A)
        - [ ] S - [Nguyên tắc một trách nhiệm (Single Responsibility Principle)](http://www.oodesign.com/single-responsibility-principle.html)
        - [ ] [Mỗi đối tượng chịu một trách nhiệm duy nhất (Single responsibility to each Object)](http://www.javacodegeeks.com/2011/11/solid-single-responsibility-principle.html)
            - [Đọc thêm](https://docs.google.com/open?id=0ByOwmqah_nuGNHEtcU5OekdDMkk)
        - [ ] O - [Nguyên tắc mở đóng (Open/Closed Principal)](http://www.oodesign.com/open-close-principle.html)  | [Trong thực tế, đối tượng có thể mở rộng chứ không thích hợp cho sửa đổi (On production level Objects are ready for extension for not for modification)](https://en.wikipedia.org/wiki/Open/closed_principle)
            - [Đọc thêm](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgN2M5MTkwM2EtNWFkZC00ZTI3LWFjZTUtNTFhZGZiYmUzODc1&hl=en)
        - [ ] L - [Nguyên tắc thay thế của Liskov (Liskov Substitution Principal)](http://www.oodesign.com/liskov-s-substitution-principle.html) | [Nguyên tắc về lớp cơ bản và lớp dẫn xuất (Base Class and Derived class follow ‘IS A’ principal)](http://stackoverflow.com/questions/56860/what-is-the-liskov-substitution-principle)
            - [Đọc thêm](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgNzAzZjA5ZmItNjU3NS00MzQ5LTkwYjMtMDJhNDU5ZTM0MTlh&hl=en)
        - [ ] I - [Nguyên tắc phân chia giao diện (Interface segregation principle)](http://www.oodesign.com/interface-segregation-principle.html) | khách hàng không nên triển khai giao diện họ không sử dụng
            - [Phân chia giao diện trong 5 phút (Interface Segregation Principle in 5 minutes) (video)](https://www.youtube.com/watch?v=3CtAfl7aXAQ)
            - [Đọc thêm](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgOTViYjJhYzMtMzYxMC00MzFjLWJjMzYtOGJiMDc5N2JkYmJi&hl=en)
        - [ ] D -[Nguyên tắc phụ thuộc ngược(Dependency Inversion principle)](http://www.oodesign.com/dependency-inversion-principle.html) | Giảm bớt phụ thuộc trong tập các đối tượng
            - [Tại sao sử dụng nguyên tắc phụ thuộc ngược và tại sao nguyên tắc này quan trọng(Why Is The Dependency Inversion Principle And Why Is It Important)](http://stackoverflow.com/questions/62539/what-is-the-dependency-inversion-principle-and-why-is-it-important)
            - [Đọc thêm](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgMjdlMWIzNGUtZTQ0NC00ZjQ5LTkwYzQtZjRhMDRlNTQ3ZGMz&hl=en)

- ### Mẫu thiết kế
    - [ ] [Đọc nhanh về UML(Quick UML review) (video)](https://www.youtube.com/watch?v=3cmzqZzwNDM&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc&index=3)
    - [ ] Học qua các mẫu sau:
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
    - [ ] [Bắt đầu với thiết kế mẫu(Head First Design Patterns)](https://www.amazon.com/Head-First-Design-Patterns-Freeman/dp/0596007124)
        - Tôi biết có một cuốn sách kinh điển là "Design Patterns: Elements of Reusable Object-Oriented Software" nhưng cuốn Bắt đầu với thiết kế mẫu(Head First Design Patterns là một lựa chọn tuyệt vời cho người mới bắt đầu với OO.
    - [ ] [Ghi nhớ: 101 Thiết kế mẫu và lưu ý dành cho lập trình viên(Handy reference: 101 Design Patterns & Tips for Developers)](https://sourcemaking.com/design-patterns-and-tips)

- ### Tổ hợp và Xác Suất
    - [ ] [Kỹ năng toán: Làm thế nào để tìm giai thừa, hoán vị và tổ hợp(Math Skills: How to find Factorial, Permutation and Combination) (Choose) (video)](https://www.youtube.com/watch?v=8RRo6Ti9d0U)
    - [ ] [Xác suất (Make School: Probability) (video)](https://www.youtube.com/watch?v=sZkAAk9Wwa4)
    - [ ] [Xác suất và chuỗi Markov (Make School: More Probability and Markov Chains) (video)](https://www.youtube.com/watch?v=dNaJg-mLobQ)
    - [ ] Khan Academy:
        - Các khóa học:
            - [ ] [Lý thuyết xác suất(Basic Theoretical Probability)](https://www.khanacademy.org/math/probability/probability-and-combinatorics-topic)
        - 41 video ngắn và đơn giản:
            - [ ] [Lý giải về xác suất (Probability Explained) (video)](https://www.youtube.com/watch?v=uzkc-qNVoOk&list=PLC58778F28211FA19)

- ### NP, NP-Complete và thuật toán xấp xỉ gần đúng
    - Cần biết về các trường hợp nổi tiếng của NP-complete như chuyên du hành doanh nhân hay vấn đề túi đựng đồ nghề(traveling salesman and the knapsack problem) để có thể trả lời khi người phỏng vấn hỏi một cách ẩn ý.
    - Know what NP-complete means.
    - [ ] [Tính toán độ phức tạp(Computational Complexity) (video)](https://www.youtube.com/watch?v=moPtwq_cVH8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=23)
    - [ ] Simonson:
        - [ ] [Thuật toán tham lam và giới thiệu NP-complete(Greedy Algs. II & Intro to NP Completeness) (video)](https://youtu.be/qcGnJ47Smlo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=2939)
        - [ ] [NP Completeness II & Reductions (video)](https://www.youtube.com/watch?v=e0tGC6ZQdQE&index=16&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [NP Completeness III (Video)](https://www.youtube.com/watch?v=fCX1BGT3wjE&index=17&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [NP Completeness IV (video)](https://www.youtube.com/watch?v=NKLDp3Rch3M&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=18)
    - [ ] Skiena:
        - [ ] [CSE373 2012 - Lecture 23 - Giới thiệu về NP-Completeness (Introduction to NP-Completeness) (video)](https://youtu.be/KiK5TVgXbFg?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1508)
        - [ ] [CSE373 2012 - Lecture 24 - Chứng mình NP-Completeness (NP-Completeness Proofs) (video)](https://www.youtube.com/watch?v=27Al52X3hd4&index=24&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [ ] [CSE373 2012 - Lecture 25 - Thách thức với NP-Completeness (NP-Completeness Challenge) (video)](https://www.youtube.com/watch?v=xCPH4gwIIXM&index=25&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [Độ phức tạp: P, NP, NP-completeness, giảm(Complexity: P, NP, NP-completeness, Reductions) (video)](https://www.youtube.com/watch?v=eHZifpgyH_4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=22)
    - [ ] [Độ phức tạp: Thuật toán gần đúng(Complexity: Approximation Algorithms) (video)](https://www.youtube.com/watch?v=MEz1J9wY2iM&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=24)
    - [ ] [Độ phức tạp: Thuật toán cố định tham sô(Complexity: Fixed-Parameter Algorithms) (video)](https://www.youtube.com/watch?v=4q-jmGrmxKs&index=25&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - Peter Norvig đã trình bày thuật toán gần tối ưu cho vấn đề di chuyển của doanh nhân:
        - [Jupyter Notebook](http://nbviewer.jupyter.org/url/norvig.com/ipython/TSP.ipynb)
    - Trang 1048 - 1140 trong CLRS nếu bạn có nó.

- ### Bộ nhớ cache
    - [ ] LRU cache:
        - [ ] [Điều kì diệu của LRU cache (100 ngày Google Dev) (The Magic of LRU Cache (100 Days of Google Dev)) (video)](https://www.youtube.com/watch?v=R5ON3iwx78M)
        - [ ] [Triển khai LRU(Implementing LRU) (video)](https://www.youtube.com/watch?v=bq6N7Ym81iI)
        - [ ] [LeetCode - 146 LRU Cache (C++) (video)](https://www.youtube.com/watch?v=8-FZRAjR7qU)
    - [ ] CPU cache:
        - [ ] [MIT 6.004 L15: Phân cấp bộ nhớ (The Memory Hierarchy) (video)](https://www.youtube.com/watch?v=vjYF_fAZI5E&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-&index=24)
        - [ ] [MIT 6.004 L16: Các vấn đề với bộ nhớ cache (Cache Issues) (video)](https://www.youtube.com/watch?v=ajgC3-pyGlk&index=25&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-)

- ### Tiến trình và tiểu trình
    - [ ] Khóa học "Khoa học máy tính 162 - Hệ điều hành" (25 video):
        - Về tiến trình và tiểu trình, xem video 1-11
        - [Hệ điều hành và lập trình hệ thống (video)](https://www.youtube.com/playlist?list=PL-XXv-cvA_iBDyz-ba4yDskqMDY6A1w_c)
    - [Sự khác nhau giữa một tiến trình và một tiểu trình?](https://www.quora.com/What-is-the-difference-between-a-process-and-a-thread)
    - Học các chủ đề dưới đây:
        - Các vấn đề của tiến trình, tiểu trình và xử lý đồng thời
            - Sự khác nhau giữa tiến trình và tiểu trình
            - Tiến trình
            - Tiểu trình
            - Locks
            - Mutexes
            - Semaphores
            - Monitors
            - Cách chúng hoạt động
            - Deadlock
            - Livelock
        - Hoạt động của CPU, ngắt, chuyển ngữ cảnh
        - Các kiến trúc xử lý đồng thời được sử dụng cùng với các bộ xử lý đa lõi
        - Tài nguyên mà tiến trình cần: (bộ nhớ: các đoạn mã, bộ lưu trữ tĩnh, stack, heap cũng như các mô tả của tập tin, nhập/xuất)
        - Tài nguyên mà tiểu trình cần: (chia sẻ các tài nguyên được liệt kê ở trên (trừ stack) với các tiểu trình khác trong cùng tiến trình nhưng mỗi tiểu trình có program counter, stack counter, thanh ghi (registers) và stack của riêng chúng)
        - Forking thực ra là [copy on write](https://en.wikipedia.org/wiki/Copy-on-write) cho đến khi tiến trình mới ghi vào bộ nhớ, sau đó nó thực hiện hành đồng full copy.
        - Chuyển ngữ cảnh
            - Chuyển ngữ cảnh được bắt đầu như thế nào bởi hệ điều hành và phần cứng bên dưới
    - [ ] [Tiểu trình trong C++ (danh sách 10 video)](https://www.youtube.com/playlist?list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M)
    - [ ] Xử lý đồng thời trong Python (video):
        - [ ] [Danh sách ngắn các video về tiểu trình (Short series on threads)](https://www.youtube.com/playlist?list=PL1H1sBF1VAKVMONJWJkmUh6_p8g4F2oy1)
        - [ ] [Tiểu trình của Python (Python Threads)](https://www.youtube.com/watch?v=Bs7vPNbB9JM)
        - [ ] [Hiểu rõ về Python GIL (Understanding the Python GIL (2010))](https://www.youtube.com/watch?v=Obt-vMVdM8s)
            - [Tham khảo](http://www.dabeaz.com/GIL)
        - [ ] [David Beazley - Căn bản về xử lý đồng thời trong Python: TRỰC TIẾP! - PyCon 2015 (David Beazley - Python Concurrency From the Ground Up: LIVE! - PyCon 2015)](https://www.youtube.com/watch?v=MCs5OvhV9S4)
        - [ ] [Các điểm chính trong phần trình bày của David Beazley - Các vấn đề thú vị (Python Asyncio) (Keynote David Beazley - Topics of Interest (Python Asyncio))](https://www.youtube.com/watch?v=ZzfHjytDceU)
        - [ ] [Mutex trong Python (Mutex in Python)](https://www.youtube.com/watch?v=0zaPs8OtyKY)

- ### Các bài nghiên cứu
    - Có nhiều bài nghiên cứu của Google và các bài nghiên cứu rất nổi tiếng.
    - Đọc hết các bài nghiên cứu tốn rất nhiều thời gian, tôi khuyên bạn nên chọn lọc theo đề tài cụ thể.
    - [ ] [1978: Tiến trình giao tiếp tuần tự (1978: Communicating Sequential Processes)](http://spinroot.com/courses/summer/Papers/hoare_1978.pdf)
        - [Triển khai với Go (implemented in Go)](https://godoc.org/github.com/thomas11/csp)
        - [Yêu thích các nghiên cứu cũ (Love classic papers)?](https://www.cs.cmu.edu/~crary/819-f09/)
    - [ ] [2003: Hệ thống tập tin của Google (2003: The Google File System)](http://static.googleusercontent.com/media/research.google.com/en//archive/gfs-sosp2003.pdf)
        - thay thế bởi Colossus năm 2012
    - [ ] [2004: MapReduce: Đơn giản hóa xử lý dữ liệu trên phân vùng lớn (Simplified Data Processing on Large Clusters)]( http://static.googleusercontent.com/media/research.google.com/en//archive/mapreduce-osdi04.pdf)
        - gần như bị thay thế bởi Cloud Dataflow?
    - [ ] [2007: Những gì mà lập trình viên nên biết về bộ nhớ (rất dài, ngay cả tác giả cũng khuyến khích bỏ qua vài phần) (What Every Programmer Should Know About Memory (very long, and the author encourages skipping of some sections))](https://www.akkadia.org/drepper/cpumemory.pdf)
    - [ ] [2012: Google's Colossus](https://www.wired.com/2012/07/google-colossus/)
        - Bài nghiên cứu không tồn tại
    - [ ] 2012: AddressSanitizer: Kiểm tra nhanh tính đúng đắn của địa chỉ (A Fast Address Sanity Checker):
        - [Bài nghiên cứu](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/37752.pdf)
        - [video](https://www.usenix.org/conference/atc12/technical-sessions/presentation/serebryany)
    - [ ] 2013: Spanner: Google’s Globally-Distributed Database:
        - [Bài nghiên cứu](http://static.googleusercontent.com/media/research.google.com/en//archive/spanner-osdi2012.pdf)
        - [video](https://www.usenix.org/node/170855)
    - [ ] [2014: Máy học: Lợi ích và những vấn đề cần tránh (Machine Learning: The High-Interest Credit Card of Technical Debt)](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43146.pdf)
    - [ ] [2015: Continuous Pipelines at Google](http://static.googleusercontent.com/media/research.google.com/en/pubs/archive/43790.pdf)
    - [ ] [2015: Sẵn sàng cho thay đổi lớn: Xây dựng hạ tầng dữ liệu của Google dành cho quảng cáo (High-Availability at Massive Scale: Building Google’s Data Infrastructure for Ads)](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44686.pdf)
    - [ ] [2015: Tensorflow: Áp dụng máy học với dữ liệu lớn trên hệ thống phân tán tính toán song song (Large-Scale Machine Learning on Heterogeneous Distributed Systems)](http://download.tensorflow.org/paper/whitepaper2015.pdf )
    - [ ] [2015: Lập trình viên tìm code như thế nào: Một trường hợp điển hình (How Developers Search for Code: A Case Study)](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43835.pdf)
    - [ ] [2016: Borg, Omega, and Kubernetes](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44843.pdf)

- ### Kiểm thử phần mềm
    - Cần ghi nhớ:
        - Unit test thực hiện như thế nào
        - Các đối tượng giả là gì
        - Integration testing là gì
        - Dependency injection là gì
    - [ ] [Kiểm tra phần mềm linh hoạt với Jame Bach (Agile Software Testing with James Bach) (video)](https://www.youtube.com/watch?v=SAhJf36_u5U)
    - [ ] [Bài giảng của James Bach về kiểm tra phần mềm (Open Lecture by James Bach on Software Testing) (video)](https://www.youtube.com/watch?v=ILkT_HV9DVU)
    - [ ] [Steve Freeman - Lập trình hướng tới việc test( Không phải như chúng ta nghĩ) (Test-Driven Development (that’s not what we meant)) (video)](https://vimeo.com/83960706)
        - [slides](http://gotocon.com/dl/goto-berlin-2013/slides/SteveFreeman_TestDrivenDevelopmentThatsNotWhatWeMeant.pdf)
    - [ ] [Lập trình hướng tới việc test đã chết. (TDD is dead. Long live testing.)](http://david.heinemeierhansson.com/2014/tdd-is-dead-long-live-testing.html)
    - [ ] [Lập trình hướng tới việc test có phải đã chết? (Is TDD dead?) (video)](https://www.youtube.com/watch?v=z9quxZsLcfo)
    - [ ] [Video series (152 videos) - Không phải tất cả đều cần thiết (not all are needed) (video)](https://www.youtube.com/watch?v=nzJapzxH_rE&list=PLAwxTw4SYaPkWVHeC_8aSIbSxE_NXI76g)
    - [ ] [Lập trình theo hướng test dành cho web với Python (Test-Driven Web Development with Python)](http://www.obeythetestinggoat.com/pages/book.html#toc)
    - [ ] Dependency injection:
        - [ ] [video](https://www.youtube.com/watch?v=IKD2-MAkXyQ)
        - [ ] [Đạo trong kiểm tra (Tao Of Testing)](http://jasonpolites.github.io/tao-of-testing/ch3-1.1.html)
    - [ ] [Viết test thế nào(How to write tests)](http://jasonpolites.github.io/tao-of-testing/ch4-1.1.html)

- ### Lập lịch
    - Trong một hệ điều hành hoạt động như thế nào
    - Có thể tìm thấy trong các video về HĐH

- ### Cài đặt các hàm hệ thống
    - Hiểu rõ cách thức hoạt động đằng sau của các API
    - Có thể triển khai chúng hay không?

- ### Tìm kiếm và xử lý chuỗi
    - [ ] [Sedgewick - Mảng tiền tố(Suffix Arrays) (video)](https://www.youtube.com/watch?v=HKPrVm5FWvg)
    - [ ] [Sedgewick - Tìm và thay chuỗi(Substring Search) (videos)](https://www.youtube.com/watch?v=2LvvVFCEIv8&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66&index=5)
        - [ ] [1. Giới thiệu tìm và thay chuỗi(Introduction to Substring Search)](https://www.youtube.com/watch?v=2LvvVFCEIv8&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66&index=5)
        - [ ] [2. Tìm và thay chuỗi theo Brute-Force(Brute-Force Substring Search)](https://www.youtube.com/watch?v=CcDXwIGEXYU&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66&index=4)
        - [ ] [3. Knuth-Morris Pratt](https://www.youtube.com/watch?v=n-7n-FDEWzc&index=3&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66)
        - [ ] [4. Boyer-Moore](https://www.youtube.com/watch?v=fI7Ch6pZXfM&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66&index=2)
        - [ ] [5. Rabin-Karp](https://www.youtube.com/watch?v=QzI0p6zDjK4&index=1&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66)
    - [ ] [Tìm kiếm mẫu trong văn bản (Search pattern in text) (video)](https://www.coursera.org/learn/data-structures/lecture/tAfHI/search-pattern-in-text)

    Nếu bạn cần thêm thông tin chi tiết, hãy đọc qua phần "So khớp chuỗi" trong các mục đọc thêm [Đọc thêm về một số đề tài](đọc-thêm-về-một-số-đề-tài)

---

## Thiết kế hệ thống, Khả năng mở rộng, Xử lý dữ liệu
- **Bạn có thế sẽ bị hỏi câu hỏi liên quan đến thiết kế hệ thống nếu có hơn 4 năm kinh nghiệm**
- Khả năng mở rộng và Thiết kế hệ thống là các chủ đề rất rộng, với nhiều vấn đề và tài liệu liên quan, bởi vì có rất nhiều vấn đề cần phải giải quyết khi thiết kế các hệ thống phần mềm (hoặc phần cứng) có thể mở rộng được.
      Cần phải đầu tư một chút thời gian cho vấn đề này.
- Lời khuyên từ Yegge:
    - Khả năng mở rộng
        - Trích xuất từ cơ sở dữ liệu lớn về một giá trị độc nhất
        - Chuyển đổi từ một tập dữ liệu sang tập khác
        - Xử lý một khối lượng dữ liệu đồ sộ
    - Thiết kế hệ thống
        - Tập hợp các tính năng
        - Giao diện
        - Lớp phân cấp
        - Thiết kế hệ thống dưới những ràng buộc
        - Đơn giản và vững chắc
        - Đánh đổi (từ gốc tradeoff, chấp nhận bỏ một vài tính năng nhỏ để có được những lợi ích khác như tốc độ xử lý...)
        - Phân tích và tối ưu hiệu suất sử dụng
- [ ] **BÁT ĐẦU TỪ ĐÂY**: [System Design from HiredInTech - Thiết kế hệ thống bởi HiredInTech](http://www.hiredintech.com/system-design/)
- [ ] [Làm thế nào để trả lời các câu hỏi liên quan tới thiết kế trong phỏng vấn kỹ thuật? (How Do I Prepare To Answer Design Questions In A Technical Inverview)](https://www.quora.com/How-do-I-prepare-to-answer-design-questions-in-a-technical-interview?redirected_qid=1500023)
- [ ] [8 điều bạn nên biết trước khi  bắt đầu một buổi phỏng vấn về Thiết kế hệ thống (8 Things You Need to Know Before a System Design Interview) ](http://blog.gainlo.co/index.php/2015/10/22/8-things-you-need-to-know-before-system-design-interviews/)
- [ ] [Thiết kế thuật toán(Algorithm design)](http://www.hiredintech.com/algorithm-design/)
- [ ] [Chuẩn hóa trong cơ sở dữ liệu (Database Normalization - 1NF, 2NF, 3NF and 4NF) (video)](https://www.youtube.com/watch?v=UrYLYV7WSHM)
- [ ] [Phỏng vấn về thiết kế hệ thống(System Design Interview)](https://github.com/checkcheckzz/system-design-interview) - Có rất nhiều tài liệu trong link nay. Hãy đọc qua các bài viết và các ví dụ. Tôi có liệt kê sau đây:
- [ ] [Làm thế nào để dẫn đầu trong cuộc phỏng vấn về thiết kế hệ thống(How to ace a systems design interview) ](http://www.palantir.com/2011/10/how-to-rock-a-systems-design-interview/)
- [ ] [Những con số ai cũng nên biết(Numbers Everyone Should Know)](http://everythingisdata.wordpress.com/2009/10/17/numbers-everyone-should-know/)
- [ ] [Mất bao lâu để làm một chuyển đổi ngữ cảnh?(How long does it take to make a context switch) ](http://blog.tsunanet.net/2010/11/how-long-does-it-take-to-make-context.html)
- [ ] [Các luồng xử lý trong trung tâm dữ liệu(Transactions Across Datacenters)(video)](https://www.youtube.com/watch?v=srOgpXECblk)
- [ ] [Một hướng dẫn đơn giản về lý thuyết CAP(A plain English introduction to CAP Theorem)](http://ksat.me/a-plain-english-introduction-to-cap-theorem/)
- [ ] Thuật toán đồng thuận của Paxos:
    - [video ngắn](https://www.youtube.com/watch?v=s8JqcZtvnsM)
    - [Video mở rộng với trường hợp cụ thể và multi-paxos(extended video with use case and multi-paxos)](https://www.youtube.com/watch?v=JEpsBg0AO6o)
    - [Nghiên cứu](http://research.microsoft.com/en-us/um/people/lamport/pubs/paxos-simple.pdf)
- [ ] [Băm nhất quán(Consistent Hashing)](http://www.tom-e-white.com/2007/11/consistent-hashing.html)
- [ ] [NoSQL Patterns](http://horicky.blogspot.com/2009/11/nosql-patterns.html)
- [ ] Khả năng mở rộng:
    - [ ] [Tầm nhìn chung(Great overview)(video)](https://www.youtube.com/watch?v=-W9F__D3oY4)
    - [ ] Các seri ngắn:
        - [Nhân bản(Clones)](http://www.lecloud.net/post/7295452622/scalability-for-dummies-part-1-clones)
        - [Cơ sỡ dữ liệu(Database)](http://www.lecloud.net/post/7994751381/scalability-for-dummies-part-2-database)
        - [Cache](http://www.lecloud.net/post/9246290032/scalability-for-dummies-part-3-cache)
        - [Bất đồng bộ(Asynchronism)](http://www.lecloud.net/post/9699762917/scalability-for-dummies-part-4-asynchronism)
    - [ ] [Kiến trúc web và hệ thống phân tán có khả năng mở rộng(Scalable Web Architecture and Distributed Systems)](http://www.aosabook.org/en/distsys.html)
    - [ ] [Fallacies of Distributed Computing Explained](https://pages.cs.wisc.edu/~zuyu/files/fallacies.pdf)
    - [ ] [Pragmatic Programming Techniques](http://horicky.blogspot.com/2010/10/scalable-system-design-patterns.html)
        - [Bổ sung: Google Pregel cho xử lý đồ thị(Google Pregel Graph Processing)](http://horicky.blogspot.com/2010/07/google-pregel-graph-processing.html)
    - [ ] [Jeff Dean - Xây dựng hệ thống phần mềm tại Google và các bài học rút ra được(Jeff Dean - Building Software Systems At Google and Lessons Learned)(video)](https://www.youtube.com/watch?v=modXC5IWTJI)
    - [ ] [Giới thiệu về kiến trúc hệ thống có thể mở rộng(Introduction to Architecting Systems for Scale)](http://lethain.com/introduction-to-architecting-systems-for-scale/)
    - [ ] [Mở rộng game trên di động nhắm tới khách hàng trên toàn thế giới sử dụng App Engine và Cloud Datastore (Scaling mobile games to a global audience using App Engine and Cloud Datastore)(video)](https://www.youtube.com/watch?v=9nWyWwY2Onc)
    - [ ] [How Google Does Planet-Scale Engineering for Planet-Scale Infra (video)](https://www.youtube.com/watch?v=H4vMcD7zKM0)
    - [ ] [Sự quan trọng của thuật toán(The Importance of Algorithms)](https://www.topcoder.com/community/data-science/data-science-tutorials/the-importance-of-algorithms/)
    - [ ] [Chia nhỏ cơ sở dữ liệu thành từng phần nhỏ và nhanh hơn, dễ quản lý hơn(Sharding)](http://highscalability.com/blog/2009/8/6/an-unorthodox-approach-to-database-design-the-coming-of-the.html)
    - [ ] [Khả năng mở rộng của Facebook(Scale at Facebook) -  (2009)](https://www.infoq.com/presentations/Scale-at-Facebook)
    - [ ] [Khả năng mở rộng của Facebook (2012), "Xây dựng cho cả tỷ người dùng"(Scale at Facebook (2012), "Building for a Billion Users" -  )(video)](https://www.youtube.com/watch?v=oodS71YtkGU)
    - [ ] [Lập trình cho cả khả năng phát triển trong tương lai(Engineering for the Long Game) - Astrid Atkinson Keynote - (video)](https://www.youtube.com/watch?v=p0jGmgIrf_M&list=PLRXxvay_m8gqVlExPC5DG3TGWJTaBgqSA&index=4)
    - [ ] [7 năm mở rộng của Youtube trong 30 phút(7 Years Of YouTube Scalability Lessons In 30 Minutes)](http://highscalability.com/blog/2012/3/26/7-years-of-youtube-scalability-lessons-in-30-minutes.html)
        - [video](https://www.youtube.com/watch?v=G-lGCC4KKok)
    - [ ] [Paypal đã mở rộng thế nào để đáp ứng hơn tỷ lượt giao dịch mỗi ngày với 8VMs(How PayPal Scaled To Billions Of Transactions Daily Using Just 8VMs) ](http://highscalability.com/blog/2016/8/15/how-paypal-scaled-to-billions-of-transactions-daily-using-ju.html)
    - [ ] [Làm thế nào để xóa lặp trong dữ liệu(How to Remove Duplicates in Large Datasets)](https://blog.clevertap.com/how-to-remove-duplicates-in-large-datasets/)
    - [ ] [A look inside Etsy's scale and engineering culture with Jon Cowie) (video)](https://www.youtube.com/watch?v=3vV4YiqKm1o)
    - [ ] [Cùng nhìn nhận cách Etsy mở rộng và phong cách lập trình với Jon Cowie(What Led Amazon to its Own Microservices Architecture - Điều gì đưa Amazon tới kiến trúc microservices](http://thenewstack.io/led-amazon-microservices-architecture/)
    - [ ] [Nén hay không nén, đây là câu hỏi dành cho Uber(To Compress Or Not To Compress, That Was Uber's Question)](https://eng.uber.com/trip-data-squeeze/)
    - [ ] [Asyncio Tarantool Queue, Get In The Queue](http://highscalability.com/blog/2016/3/3/asyncio-tarantool-queue-get-in-the-queue.html)
    - [ ] [Trong trường hợp nào truy vấn phỏng đoán được thực thi?(When Should Approximate Query Processing Be Used?)](http://highscalability.com/blog/2016/2/25/when-should-approximate-query-processing-be-used.html)
    - [ ] [Google's Transition From Single Datacenter, To Failover, To A Native Multihomed Architecture]( http://highscalability.com/blog/2016/2/23/googles-transition-from-single-datacenter-to-failover-to-a-n.html)
    - [ ] [Spanner](http://highscalability.com/blog/2012/9/24/google-spanners-most-surprising-revelation-nosql-is-out-and.html)
    - [ ] [Kiến trúc Egnyte: Kinh nghiêm từ việc xây dụng và mở rộng hệ thống phân tán lên tới Petabyte(Egnyte Architecture: Lessons Learned In Building And Scaling A Multi Petabyte Distributed System) ](http://highscalability.com/blog/2016/2/15/egnyte-architecture-lessons-learned-in-building-and-scaling.html)
    - [ ] [Lập trình hướng máy học - Một cách lập trình mới trong thời đại mới(Machine Learning Driven Programming: A New Programming For A New World) ](http://highscalability.com/blog/2016/7/6/machine-learning-driven-programming-a-new-programming-for-a.html)
    - [ ] [Kỹ thuật tối ưu hình ảnh để phục vụ hàng triệu yêu cầu mỗi ngày(The Image Optimization Technology That Serves Millions Of Requests Per Day) ](http://highscalability.com/blog/2016/6/15/the-image-optimization-technology-that-serves-millions-of-re.html)
    - [ ] [Trình bày ngắn về kiến trúc Patreon(A Patreon Architecture Short)](http://highscalability.com/blog/2016/2/1/a-patreon-architecture-short.html)
    - [ ] [Tinder: Làm thế nào mà một trong những hệ thống hẹn hò lớn nhất quyết định bạn sẽ nhìn thấy ai tiếp theo(Tinder: How Does One Of The Largest Recommendation Engines Decide Who You'll See Next?)](http://highscalability.com/blog/2016/1/27/tinder-how-does-one-of-the-largest-recommendation-engines-de.html)
    - [ ] [Design Of A Modern Cache](http://highscalability.com/blog/2016/1/25/design-of-a-modern-cache.html)
    - [ ] [Facebook đã mở rộng thế nào để đáp ứng việc trình diễn video trực tiếp(Live Video Streaming At Facebook Scale) ](http://highscalability.com/blog/2016/1/13/live-video-streaming-at-facebook-scale.html)
    - [ ] [ Hướng dẫn cơ bản cho việc mở rộng đến hơn 11 triệu người dùng với Amazon AWS(A Beginner's Guide To Scaling To 11 Million+ Users On Amazon's AWS )](http://highscalability.com/blog/2016/1/11/a-beginners-guide-to-scaling-to-11-million-users-on-amazons.html)
    - [ ] [Sử dụng docker ảnh hưởng tới độ trễ như thế nào?(How Does The Use Of Docker Effect Latency?) ](http://highscalability.com/blog/2015/12/16/how-does-the-use-of-docker-effect-latency.html)
    - [ ] [Có thể xem AMP như 1 đối thủ với Google không?(Does AMP Counter An Existential Threat To Google?) ](http://highscalability.com/blog/2015/12/14/does-amp-counter-an-existential-threat-to-google.html)
    - [ ] [Một cái nhìn 360 độ về toàn bộ Netflix Stack(A 360 Degree View Of The Entire Netflix Stack)](http://highscalability.com/blog/2015/11/9/a-360-degree-view-of-the-entire-netflix-stack.html)
    - [ ] [Độ trễ ảnh hưởng tới doanh thu của bạn - Làm sao để khắc phục?(Latency Is Everywhere And It Costs You Sales - How To Crush It) ](http://highscalability.com/latency-everywhere-and-it-costs-you-sales-how-crush-it)
    - [ ] [Serverless (rất dài, chỉ nền dùng file gist)](http://martinfowler.com/articles/serverless.html)
    - [ ] [Điều gì làm nên sức mạnh của Instagram: Hàng trăm phần tử, hàng tá các công nghệ(What Powers Instagram: Hundreds of Instances, Dozens of Technologies )](http://instagram-engineering.tumblr.com/post/13649370142/what-powers-instagram-hundreds-of-instances)
    - [ ] [Kiến trúc Cinchcast - Tạo ra 1500 giờ âm thanh mỗi ngày(Cinchcast Architecture - Producing 1,500 Hours Of Audio Every Day) ](http://highscalability.com/blog/2012/7/16/cinchcast-architecture-producing-1500-hours-of-audio-every-d.html)
    - [ ] [Kiến trúc của chương trình phát sóng video trực tiếp Justin.Tv(Justin.Tv's Live Video Broadcasting Architecture) ](http://highscalability.com/blog/2010/3/16/justintvs-live-video-broadcasting-architecture.html)
    - [ ] [Kiến trúc của game cộng đồng Playfish - 50 triệu người sử dụng hàng tháng và vẫn tiếp tục tăng(Playfish's Social Gaming Architecture - 50 Million Monthly Users And Growing)](http://highscalability.com/blog/2010/9/21/playfishs-social-gaming-architecture-50-million-monthly-user.html)
    - [ ] [Kiến trúc của TripAdvisor - 40 triệu người viếng thăm, 200 triệu lượt xem, 30 Tb dữ liệu(TripAdvisor Architecture - 40M Visitors, 200M Dynamic Page Views, 30TB Data)](http://highscalability.com/blog/2011/6/27/tripadvisor-architecture-40m-visitors-200m-dynamic-page-view.html)
    - [ ] [Kiến trúc của PlentyOfFish(PlentyOfFish Architecture)](http://highscalability.com/plentyoffish-architecture)
    - [ ] [Kiến trúc của Salesforce - Làm thế nào để xử lý 1.3 tỷ giao dịch mỗi ngày(Salesforce Architecture - How They Handle 1.3 Billion Transactions A Day) ](http://highscalability.com/blog/2013/9/23/salesforce-architecture-how-they-handle-13-billion-transacti.html)
    - [ ] [Kiến trúc của ESPN khi mở rộng - Xử lý 100000 thông tin mỗi giây(ESPN's Architecture At Scale - Operating At 100,000 Duh Nuh Nuhs Per Second)](http://highscalability.com/blog/2013/11/4/espns-architecture-at-scale-operating-at-100000-duh-nuh-nuhs.html)
    - [ ] Xem qua "Messaging, Serialization, and Queueing Systems" phía dưới để hiểu các công nghệ có thể kết nối các dịch vụ cùng lúc thế nào.
    - [ ] Twitter:
        - [O'Reilly MySQL CE 2011: Jeremy Cole, "Big and Small Data at @Twitter" (video)](https://www.youtube.com/watch?v=5cKTP36HVgI)
        - [Timelines at Scale](https://www.infoq.com/presentations/Twitter-Timeline-Scalability)
    - Để có thêm thông tin, xem seri "Mining Massive Datasets" trong seri video.
- [ ] Thực hành thêm về thiết kế hệ thống: Sau đây là vài ý tưởng có thể thực hiện trên giấy, mỗi ý tưởng đều có tư liệu đi cùng để hiểu rõ nó thực thi thế nào trong thế giới thực. [Thiết kế hệ thống bới HiredInTech(System Design from HiredInTech)](http://www.hiredintech.com/system-design/)
    - [cheat sheet](https://github.com/jwasham/google-interview-university/blob/master/extras/cheat%20sheets/system-design.pdf)
    - Các bước thực hiện:
        1. Hiểu vấn đề và phạm vi của vấn đề:
            - Định nghĩa các trường hợp sử dụng cụ thể với sự trợ giúp từ người phỏng vấn
            - Đề xuất thêm tính năng
            - Bỏ đi những phần mà người phỏng vấn cho là không còn nằm trong phạm vi yêu cầu
            - Giả sử khả năng khả dụng cao, thêm vào như một tính năng
        2. Suy nghĩ về các ràng buộc:
            - Hỏi xem có bao nhiêu yêu cầu mỗi tháng
            - Hỏi xem có bao nhiêu yêu cầu mỗi giây (hoặc họ đưa nó cho bạn hoặc bạn phải tự tính toán ra)
            - So sánh tần số đọc và ghi
            - Sử dụng luật 80/20 khi ước lượng
            - Bao nhiêu dữ liệu được viết mỗi giây
            - Toàn bộ kho lưu trữ dữ liệu cần cho 5 năm
            - Bao nhiêu dữ liệu được đọc mỗi giây
        3. Thiết kế trừu tượng:
            - Lớp (dịch vụ, dữ liệu, caching)
            - Cấu trúc hệ thống: tải cân bằng, chuyển thông điệp
            - Cái nhìn tổng quan về thuật toán chủ chốt để chạy các dịch vụ
            - Đưa ra hướng giải quyết cho hiện tượng nghẽn cổ chai
    - Bài tập:
        - [Thiết kế một mạng CDN (Content Delivery Network) (Design a CDN network: old article) ](http://repository.cmu.edu/cgi/viewcontent.cgi?article=2112&context=compsci)
        - [Thiết kê một hệ thống cung cấp ID ngẫu nhiên(Design a random unique ID generation system)](https://blog.twitter.com/2010/announcing-snowflake)
        - [Thiết kế một hệ thống chơi bài nhiều người online(Design an online multiplayer card game)](http://www.indieflashblog.com/how-to-create-an-asynchronous-multiplayer-game.html)
        - [Thiết kế một cơ sở dữ liệu khóa-giá trị(Design a key-value database)](http://www.slideshare.net/dvirsky/introduction-to-redis)
        - [Thiết kế một hàm để trả về những từ khóa được tìm kiếm nhiều nhất trong thời gian gần nhất(Design a function to return the top k requests during past time interval)]( https://icmi.cs.ucsb.edu/research/tech_reports/reports/2005-23.pdf)
        - [Thiết kế một hệ thống chia sẽ ảnh(Design a picture sharing system) ](http://highscalability.com/blog/2011/12/6/instagram-architecture-14-million-users-terabytes-of-photos.html)
        - [Thiết kế một hệ thống hổ trợ ra quyết định(Design a recommendation system)](http://ijcai13.org/files/tutorial_slides/td3.pdf)
        - [Thiết kế một hệ thống làm ngắn URL(Design a URL-shortener system: copied from above)](http://www.hiredintech.com/system-design/the-system-design-process/)
        - [Thiết kế một hệ thống cache(Design a cache system)](https://www.adayinthelifeof.nl/2011/02/06/memcache-internals/)

---

## Tổng kết

    Phần này sẽ là các video ngắn đề bạn ôn tập lại hầu hết các khái niệm quan trọng.
    Cũng tốt nếu như bạn muốn bồi dưỡng thường xuyên.

- [ ] Các video ngắn 2-3 phút (23 video)
    - [Videos](https://www.youtube.com/watch?v=r4r1DZcx1cM&list=PLmVb1OknmNJuC5POdcDv5oCS7_OUkDgpj&index=22)
- [ ] Các video ngắn 2-5 phút - Michael Sambol (18 video)
    - [Videos](https://www.youtube.com/channel/UCzDJwLWoYCUQowF_nG3m5OQ)
- [ ] [Sedgewick Videos - Thuật toán I](https://www.youtube.com/user/algorithmscourses/playlists?shelf_id=2&view=50&sort=dd)
    - [ ] [01. Union-Find](https://www.youtube.com/watch?v=8mYfZeHtdNc&list=PLe-ggMe31CTexoNYnMhbHaWhQ0dvcy43t)
    - [ ] [02. Analysis of Algorithms](https://www.youtube.com/watch?v=ZN-nFW0mEpg&list=PLe-ggMe31CTf0_bkOhh7sa5uqeppp3Sr0)
    - [ ] [03. Stacks and Queues](https://www.youtube.com/watch?v=TIC1gappbP8&list=PLe-ggMe31CTe-9jhnj3P_3mmrCh0A7iHh)
    - [ ] [04. Elementary Sorts](https://www.youtube.com/watch?v=CD2AL6VO0ak&list=PLe-ggMe31CTe_5WhGV0F--7CK8MoRUqBd)
    - [ ] [05. Mergesort](https://www.youtube.com/watch?v=4nKwesx_c8E&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9)
    - [ ] [06. Quicksort](https://www.youtube.com/watch?v=5M5A7qPWk84&list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1)
    - [ ] [07. Priority Queues](https://www.youtube.com/watch?v=G9TMe0KC0w0&list=PLe-ggMe31CTducy9LDiGVkdSv0NfiRwn5)
    - [ ] [08. Elementary Symbol Tables](https://www.youtube.com/watch?v=up_nlilw3ac&list=PLe-ggMe31CTc3a8nKRDxFZZrWrBvkc9SG)
    - [ ] [09. Balanced Search Trees](https://www.youtube.com/watch?v=qC1BLLPK_5w&list=PLe-ggMe31CTf7jHH_mFT50kayjCEA6Rhu)
    - [ ] [10. Geometric Applications of BST](https://www.youtube.com/watch?v=Wl30aGAp6TY&list=PLe-ggMe31CTdBsRIw0hXln0hilRs-DqAx)
    - [ ] [11. Hash Tables](https://www.youtube.com/watch?v=QA8fJGO-i9o&list=PLe-ggMe31CTcKxIRGqqThMts2eHtSrf11)
- [ ] [Sedgewick Videos - Thuật toán II](https://www.youtube.com/user/algorithmscourses/playlists?flow=list&shelf_id=3&view=50)
    - [ ] [01. Undirected Graphs](https://www.youtube.com/watch?v=GmVhD-mmMBg&list=PLe-ggMe31CTc0zDzANxl4I2MhMoRVlbRM)
    - [ ] [02. Directed Graphs](https://www.youtube.com/watch?v=_z-JsVaUS40&list=PLe-ggMe31CTcEwaU8a1P1Gd95A77HV85K)
    - [ ] [03. Minimum Spanning Trees](https://www.youtube.com/watch?v=t8fNk9tfVYY&list=PLe-ggMe31CTceUZxDesGfHGLE7kcSafqj)
    - [ ] [04. Shortest Paths](https://www.youtube.com/watch?v=HoGSiB7tSeI&list=PLe-ggMe31CTePpG3jbeOTsnGUGZDKxgZD)
    - [ ] [05. Maximum Flow](https://www.youtube.com/watch?v=rYIKlFstBqE&list=PLe-ggMe31CTduQ68XQ-sVj32wYJIspTma)
    - [ ] [06. Radix Sorts](https://www.youtube.com/watch?v=HKPrVm5FWvg&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53)
    - [ ] [07. Tries](https://www.youtube.com/watch?v=00YaFPcC65g&list=PLe-ggMe31CTe9IyG9MB8vt5xUJeYgOYRQ)
    - [ ] [08. Substring Search](https://www.youtube.com/watch?v=QzI0p6zDjK4&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66)
    - [ ] [09. Regular Expressions](https://www.youtube.com/watch?v=TQWNQsJSPnk&list=PLe-ggMe31CTetTlJWouM42fyttyKPgSDh)
    - [ ] [10. Data Compression](https://www.youtube.com/watch?v=at9tjpxcBh8&list=PLe-ggMe31CTciifRRo6yY0Yt0mzgIXXVZ)
    - [ ] [11. Reductions](https://www.youtube.com/watch?v=Ow5x-ooMGv8&list=PLe-ggMe31CTe_yliW5vc3yO-dj1LSSDyF)
    - [ ] [12. Linear Programming](https://www.youtube.com/watch?v=rWhcLyiLZLA&list=PLe-ggMe31CTdy6dKzMgkWFuTTN1H8B-E1)
    - [ ] [13. Intractability](https://www.youtube.com/watch?v=6qcaaDp4cdQ&list=PLe-ggMe31CTcZCjluBHw53e_ek2k9Kn-S)

---


## Thực hành các câu hỏi về lập trình

Bây giờ bạn đã biết tất cả các chủ đề về khoa học máy tính, đây là lúc để thực hành các câu hỏi về lập trình.

**Thực hành trả lời các câu hỏi về lập trình không phải là ghi nhớ cách trả lời các vấn đề trong lập trình**

Tại sao bạn cần thực hành trả lời các vấn đề lập trình:
- Nhận diện vấn đề, lựa chọn cấu trúc dữ liệu và thuật toán phù hợp
- Xác định các yêu cầu của vấn đề
- Trình bày cách suy nghĩ của bạn như thể bạn đang trong buổi phỏng vấn
- Lập trình trên bảng trắng hoặc trên giấy, không phải với máy tính
- Đưa ra được tính toán độ phức tạp về thời gian và không gian thực thi của giải pháp của bạn
- Kiểm tra giải pháp của bạn

Dưới đây là một bài viết tuyệt vời về phương thức luận, cách kết nối giải quyết vấn đề trong một bài phỏng vấn. Bạn có thế gặp các bài viết tương tự trong các sách hướng dẫn phỏng vấn nhưng tối cho là bài này thật sự cực kì xuất sắc:
[Thiết kế thuật toán (Algorithm design canvas)](http://www.hiredintech.com/algorithm-design/)

[Các bước tôi xử lý cho các câu hỏi về lập trình trong phỏng vấn (My Process for Coding Interview (Book) Exercises)](https://googleyasheck.com/my-process-for-coding-interview-exercises/)

Không có bảng trắng ở nhà? Cũng hợp lý chứ. Tôi có chút khác biệt và tôi có một cái bảng trắng rất to. Thay vì bảng trắng, bạn có thể chọn một tập sổ ký họa từ các cửa hàng nghệ thuật. Bạn có thể ngồi ở ghế salon và thực hành. Tôi gọi nó là "bảng trắng mềm mại". Tôi có bỏ vào cây bút để dễ ước lượng. Nếu bạn dùng bút mực, bạn sẽ mong chọn loại nào có thể tẩy được ấy, vì sớm muộn sẽ rối cả lên.

![Bảng trắng mềm mại của tôi(my sofa whiteboard)](https://dng5l3qzreal6.cloudfront.net/2016/Oct/art_board_sm_2-1476233630368.jpg)

Phụ lục:

- [Toán học cho nhà lập trình hàng đầu(Mathematics for Topcoders)](https://www.topcoder.com/community/data-science/data-science-tutorials/mathematics-for-topcoders/)
- [Lập trình linh hoạt - Từ cơ bản đến nâng cao (Dynamic Programming – From Novice to Advanced)](https://www.topcoder.com/community/data-science/data-science-tutorials/dynamic-programming-from-novice-to-advanced/)
- [Các tài liệu liên quan tới phỏng vấn của MIT (MIT Interview Materials)](https://web.archive.org/web/20160906124824/http://courses.csail.mit.edu/iap/interview/materials.php)
- [Các bài tập để lập trình tốt hơn đối với ngôn ngữ được lựa chọn (Exercises for getting better at a given language)](http://exercism.io/languages)

**Đọc và làm các bài tập về lập trình (theo thứ tự sau):**

- [ ] [Đi sâu vào các buổi phỏng vấn về lập trình: Bí mật để nhận được công việc mới (Programming Interviews Exposed: Secrets to Landing Your Next Job, 2nd Edition)](http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html)
    - Trả lời bằng C,C++, và Java
- [ ] [Vượt qua các bài phỏng vấn về lập trình (Cracking the Coding Interview, 6th Edition)](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - Trả lời bằng Java

Đọc qua [Danh sách sách phía trên](#danh-sách-sách)


## Giải bài tập lập trình

Bạn nên để cho bộ não vận dụng các kiến thức đã học. Hãy thử sức với các bài toán lập trình hàng ngày, càng nhiều càng tốt.

- [ ] [Làm thể nào để tìm lời giải](https://www.topcoder.com/community/data-science/data-science-tutorials/how-to-find-a-solution/)
- [ ] [Làm thể nào để phân tích đề bài trên TopCoder](https://www.topcoder.com/community/data-science/data-science-tutorials/how-to-dissect-a-topcoder-problem-statement/)

Các trang giải toán lập trình:
- [LeetCode](https://leetcode.com/)
- [TopCoder](https://www.topcoder.com/)
- [Project Euler (nặng về toán học)](https://projecteuler.net/index.php?section=problems)
- [Codewars](http://www.codewars.com)
- [HackerRank](https://www.hackerrank.com/)
- [Codility](https://codility.com/programmers/)
- [InterviewCake](https://www.interviewcake.com/)
- [Geeks for Geeks](http://www.geeksforgeeks.org/)
- [InterviewBit](https://www.interviewbit.com/invite/icjf)

Xem thêm:
- [Phỏng vấn thử nghiệm](http://www.gainlo.co/)


## Khi bạn tiến gần đến kỳ phỏng vấn

- [ ] Cracking The Coding Interview, Phần 2 (video):
    - [Cracking The Code Interview](https://www.youtube.com/watch?v=4NIb9l3imAo)
    - [Cracking the Coding Interview - Fullstack Speaker Series](https://www.youtube.com/watch?v=Eg5-tdAwclo)
    - [Ask Me Anything: Gayle Laakmann McDowell (author of Cracking the Coding Interview)](https://www.youtube.com/watch?v=1fqxMuPmGak)

## Resume của bạn

- [10 mẹo để Resume bớt (một chút) tào lao](http://steve-yegge.blogspot.co.uk/2007_09_01_archive.html)
- Xem các phần về chuẩn bị Resume trong [Cracking The Coding Interview](https://www.amazon.com/Cracking-Coding-Interview-Programming-Questions/dp/0984782850/) và [Programming Interviews Exposed](https://www.amazon.com/Programming-Interviews-Exposed-Secrets-Landing/dp/1118261364)


## Hãy nghĩ đến những thứ bạn sẽ được hỏi

Nghĩ sẵn 20 câu hỏi kỹ thuật bạn có thể gặp phải, cùng với danh sách bên dưới.
Chuẩn bị 2 đến 3 câu trả lời cho mỗi câu hỏi. Hãy chuẩn bị cả câu chuyện (từ chính kinh nghiệm của bạn), chứ không chỉ một câu trả lời suông.

- Tại sao bạn lại muốn ứng tuyển vị trí này?
- Vấn đề khó chịu nhất bạn từng giải quyết là gì?
- Thử thách lớn nhất bạn từng đối mặt?
- Thiết kế (hệ thống) tốt nhất/tồi nhất bạn từng gặp?
- Những ý tưởng để cải thiện các sản phẩm hiện giờ của Google.
- Bạn sẽ làm việc như thế nào để đạt hiểu quả tốt nhất, trong trường hợp làm việc một mình và làm theo team?
- Kỹ năng hay kinh nghiệm nào của bạn thích hợp cho công việc này, và tại sao?
- Bạn thích điều gì nhất ở [công việc X/ dự án Y]?
- Lỗi gấy ức chế nhất bạn từng gặp phải ở [công việc X/ dự án Y]?
- Bạn học được những gì ở [công việc X/ dự án Y]?
- Những gì bạn cho rằng mình đã có thể làm tốt hơn ở [công việc X/ dự án Y]?


## Chuẩn bị câu hỏi dành cho phỏng vấn viến

    Một vài câu hỏi của tôi (Tôi có thể đã tìm hiểu trước rồi, nhưng vẫn muốn được nghe ý kiến từ góc nhìn của người phỏng):

- Quy mô của team thế nào?
- Quy trình phát triển của bạn? Waterfall/sprints/agile?
- Áp lực deadline có phổ biến không? Liệu có sự linh hoạt nào không?
- Các quyết định của team được xây dựng như thế nào?
- Khoảng bao nhiêu cuộc họp hàng tuần?
- Bạn có cho rằng môi trường làm việc giúp bạn tập trung hơn không?
- Hiện tại bạn đang xây dựng những gì?
- Bạn thích gì ở công việc này?
- Sự cân bằng giữa công việc và cuộc sống của bạn có ổn không?

## Khi bạn được nhận việc

Chúc mừng!

- [10 điều tôi ước gì được biết trong ngày đầu tiên tại Google](https://medium.com/@moonstorming/10-things-i-wish-i-knew-on-my-first-day-at-google-107581d87286#.livxn7clw)

Hãy tiếp tục rèn luyện.

Bạn không bao giờ thực sự học xong!


---

    *****************************************************************************************************
    *****************************************************************************************************

    Tiếp theo là các phần phụ mà tôi khuyến khích nên đọc, không phải từ Google.
    Học các chủ đề này sẽ giúp bạn hiểu sâu hơn về Khoa học máy tính, và sẵn sàng hơn cho bất kỳ công ty nào.

    *****************************************************************************************************
    *****************************************************************************************************

---

## Sách bổ sung

- [ ] [The Unix Programming Environment](http://product.half.ebay.com/The-UNIX-Programming-Environment-by-Brian-W-Kernighan-and-Rob-Pike-1983-Other/54385&tg=info)
    - cũ nhưng mà tốt
- [ ] [The Linux Command Line: A Complete Introduction](https://www.amazon.com/dp/1593273894/)
    - một sự lựa chọn hiện đại hơn
- [ ] [TCP/IP Illustrated Series](https://en.wikipedia.org/wiki/TCP/IP_Illustrated)
- [ ] [Head First Design Patterns](https://www.amazon.com/gp/product/0596007124/)
    - dẫn nhập nhẹ nhàng về các mẫu thiết kế.
- [ ] [Design Patterns: Elements of Reusable Object-Oriente​d Software](https://www.amazon.com/Design-Patterns-Elements-Reusable-Object-Oriented/dp/0201633612)
    - còn được gọi là "Sách của bộ tứ" (Gang Of Four, hoặc GOF)
    - quyển sách cổ diển về mẫu thiết kế.
- [ ] [Site Reliability Engineering](https://landing.google.com/sre/book.html)
    - [Site Reliability Engineering: Google chạy các hệ thống của họ như thế nào](https://landing.google.com/sre/)
- [ ] [UNIX and Linux System Administration Handbook, 4th Edition](https://www.amazon.com/UNIX-Linux-System-Administration-Handbook/dp/0131480057/)

> In progress
