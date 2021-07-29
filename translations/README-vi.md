# Tự ôn tập phỏng vấn về lập trình (Coding Interview University)

Bản gốc:
* [English](/README.md)

Tác giả gốc: [John Washam](https://github.com/jwasham)

Đóng góp cho bản dịch tiếng Việt:
* [Lê Tiến Tài](https://github.com/letientai299) - [@letientai299](https://twitter.com/letientai299)
* [Võ Tường Thọ](https://github.com/thovo) - [@thovo](https://twitter.com/tho_vo)
* [Lê Tấn Đăng Khoa](https://github.com/dangkhoasdc) - [@dksdc](https://twitter.com/dksdc)
* [Trương Đức Duy](https://github.com/duytruong) - [@dauruy](https://twitter.com/dauruy)
* [Lương Đăng Hải](https://github.com/jarvisluong) - [@jarvisluong](https://twitter.com/jarvisluong)
* [Hiền Vương](https://github.com/hienvd) - [@duchienvuong](https://twitter.com/duchienvuong)

Ghi chú riêng cho việc duy trì và cập nhật bản dịch tiếng Việt:

* Bản dịch này nhằm mục đích khuyến khích các bạn trẻ yêu thích công nghệ nhưng chưa vững tiếng Anh dễ tiếp cận, và tìm được hướng nghiên cứu. Để đi xa hơn trong ngành công nghệ thông tin (CNTT), sớm hay muộn, bạn cũng cần phải trau dồi vốn tiếng Anh của mình. Vì vậy, các thuật ngữ chuyên ngành, mình xin được giữ nguyên gốc. Ví dụ như: `stack`, `heap`, `queue`,...

* Mình cố gắng dịch thoát nghĩa, sao cho các bạn với ít kiến thức công nghệ thông tin nhất cũng có thể hiểu được. Trong quá trình dịch khó có thể trách khỏi sai sót, xin được lượng thứ.

* Mọi ý kiến, đóng góp về bản dịch, vui lòng [tạo một issue mới](/issues/new) hoặc bạn có thể chỉnh sửa và tạo Pull Request, đồng thời cc trực tiếp các dịch giả để kiểm tra.

---

> Ban đầu, đây chỉ là một danh sách to-do (danh sách các việc cần làm) ngắn về các chủ đề phải ôn tập của tôi, để trở thành một kỹ sư phần mềm. Nhưng rôi nó lớn dần nên như ngày nay. Sau khi đi hết con đường này, [tôi đã được tuyển vào vị trí Software Development Engineer ở Amazon](https://startupnextdoor.com/ive-been-acquired-by-amazon/?src=ciu)! Bạn có lẽ không cần phải học nhiều như tôi đã học. Nhưng dù sao, mọi thứ bạn cần ở đây.
>
> Những chủ đề này sẽ chuẩn bị cho bạn nền tảng kiến thức vững vàng cho bất kỳ công ty phần mềm nào, bao gồm cả những gã khổng lồ như: Amazon, Facebook, Google hay Microsoft.
>
> *Chúc may mắn!*

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

## Giới thiệu

Đây là kế hoạch học tập trong nhiều tháng của tôi, để từ một nhà phát triển web (tự học, không có bằng cấp về Khoa Học Máy Tính - KHMT) trở thành một kỹ sư phần mềm ở Google.

![Viết code trên bảng - ảnh trích từ bộ phim Silicon Valley của HBO](https://d3j2pkmjtin6ou.cloudfront.net/coding-at-the-whiteboard-silicon-valley.png)

Danh sách dài này được trích và mở rộng từ **Ghi chú huấn luyện của Google**, vậy nên đây là những gì bạn cần biết.
Một vài mục tôi thêm vào ở cuối danh sách có thể xuất hiện trong cuộc phỏng vấn hoặc hữu ích cho việc giải quyết các bài toán về lập trình. Nhiều mục đến từ bài viết [Lấy được việc ở Google (Get that job at Google)](http://steve-yegge.blogspot.com/2008/03/get-that-job-at-google.html)" của Steve Yegge.

Tôi lược bớt những gì bạn cần từ lời khuyên của Yegge. Tôi cũng chỉnh sửa lại các yêu cầu dựa trên thông tin tôi có được từ bạn bè ở Google. Danh sách này được thiết kế cho **Kỹ sư phần mềm** hoặc những ai chuyển từ phát triển web hoặc phần mềm sang _kỹ nghệ_ phần mềm (khi mà kiến thức về Khoa Học Máy Tính là bắt buộc). Nếu bạn có nhiều kinh nghiệm và muốn khẳng định nhiều năm trong đó bạn làm việc như một kỹ sư phần mềm, hãy sẵn sàng cho một buổi phỏng vấn khó hơn. [Xem thêm ở đây](https://googleyasheck.com/what-you-need-to-know-for-your-google-interview-and-what-you-dont/).

Nếu bạn có kinh nghiệm trong phát triển web hoặc ứng dụng, hãy chú ý rằng Google xem việc xây dựng phần mềm khác với web và ứng dụng thông thường. Họ yêu cầu kiến thức về Khoa Học Máy Tính.

Thêm vào đó, nếu bạn muốn trở thành một kỹ sư hệ thống (System Engineer), hãy học thêm từ danh sách bổ sung (mạng máy tính, bảo mật,...)

---

## Mục lục

- [Giới thiệu?](#giới-thiệu)
- [Vì sao tôi cần tài liệu này?](#vì-sao-tôi-cần-tài-liệu-này)
- [Sử dụng tài liệu này như thế nào?](#sử-dụng-tài-liệu-này-như-thế-nào)
- [Đừng nghĩ rằng bạn không đủ thông minh](#đừng-nghĩ-rằng-bạn-không-đủ-thông-minh)
- [Về nguồn video](#về-nguồn-video)
- [Quy trình phỏng vấn & các bước chuẩn bị tổng quát](#quy-trình-phỏng-vấn--các-bước-chuẩn-bị-tổng-quát)
- [Chọn ngôn ngữ lập trình cho cuộc phỏng vấn](#chọn-ngôn-ngữ-lập-trình-cho-cuộc-phỏng-vấn)
- [Danh mục sách](#danh-mục-sách)
- [Trước khi bắt đầu](#trước-khi-bắt-đầu)
- [Những phần không được đề cập](#những-phần-không-được-đề-cập)
- [Kiến thức tiên quyết](#kiến-thức-tiên-quyết)
- [Kế hoạch hằng ngày](#Kế-hoạch-hàng-ngày)
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
- [Kiến thức bổ sung](#kiến-thức-bổ-sung)
    - [Đệ quy](#Đệ-quy)
    - [Quy hoạch động](#quy-hoạch-động)
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
    - [Tries](#tries)
    - [Cách biểu diễn số thực](#cách-biểu-diễn-số-thực)
    - [Unicode](#unicode)
    - [Endianness](#endianness)
- [Mạng máy tính](#mạng-máy-tính)
- [Thiết kế hệ thống, Khả năng mở rộng, Xử lý dữ liệu](#thiết-kế-hệ-thống-khả-năng-mở-rộng-xử-lý-dữ-liệu) (Nếu bạn có hơn 4 năm kinh nghiệm)
- [Tống kết](#tổng-kết)
- [Thực hành các câu hỏi về lập trình](#thực-hành-các-câu-hỏi-về-lập-trình)
- [Giải bài tập lập trình](#giải-bài-tập-lập-trình)
- [Khi bạn tiến gần đến kỳ phỏng vấn](#khi-bạn-tiến-gần-đến-kỳ-phỏng-vấn)
- [Lý lịch (Resume) của bạn](#lý-lịch-resume-của-bạn)
- [Hãy nghĩ đến những thứ bạn sẽ được hỏi](#hãy-nghĩ-đến-những-thứ-bạn-sẽ-được-hỏi)
- [Chuẩn bị câu hỏi dành cho phỏng vấn viên](#chuẩn-bị-câu-hỏi-dành-cho-phỏng-vấn-viên)
- [Khi bạn được nhận việc](#khi-bạn-được-nhận-việc)

---------------- Những mục dưới đây là tuỳ chọn ----------------

- [Sách bổ sung](#sách-bổ-sung)
- [Học thêm](#học-thêm)
    - [Trình biên dịch](#trình-biên-dịch)
    - [Emacs và vi(m)](#emacs-và-vim)
    - [Các công cụ chạy trên dòng lệnh của Unix](#các-công-cụ-chạy-trên-dòng-lệnh-của-Unix)
    - [Lý thuyết thông tin](#lý-thuyết-thông-tin)
    - [Parity & Hamming Code](#parity--hamming-code)
    - [Entropy](#entropy)
    - [Mã hóa](#mã-hóa)
    - [Thuật toán nén](#thuật-toán-nén)
    - [Bảo mật](#bảo-mật)
    - [Trình dọn rác](#trình-dọn-rác)
    - [Lập trình song song](#lập-trình-song-song)
    - [Messaging, Serialization, and Queueing Systems](#messaging-serialization-and-queueing-systems)
    - [A*](#a)
    - [Fast Fourier Transform](#fast-fourier-transform)
    - [Bloom Filter](#bloom-filter)
    - [HyperLogLog](#hyperloglog)
    - [Locality-Sensitive Hashing](#locality-sensitive-hashing)
    - [van Emde Boas Trees](#van-emde-boas-trees)
    - [Augmented Data Structures](#augmented-data-structures)
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
- [Các chuỗi Video](#các-chuỗi-video)
- [Các khóa học khoa học máy tính](#các-khóa-học-khoa-học-máy-tính)

---

## Vì sao tôi cần tài liệu này?

Tôi đang chuẩn bị tham gia phỏng vấn ở Google. Tôi từng làm web, xây dựng các dịch vụ và lập các công ty khởi nghiệp từ năm 1997. Tôi có bằng Kinh Tế, nhưng không có bằng Khoa Học Máy Tính. Tôi thấy sự nghiệp của mình khá thành công, nhưng như thế chưa đủ. Tôi muốn làm việc ở Google, được tham gia xử lý một hệ thống lớn; thực sự hiểu rõ về máy tính, sự hiệu quả của các thuật toán và cấu trúc dữ liệu, các ngôn ngữ lập trình cấp thấp, và chúng hoạt động cùng nhau như thế nào. Và nếu bạn không biết về cái nào trong số đó, Google sẽ không tuyển bạn.

Khi tôi bắt đầu dự án này, tôi không phân biệt được stack và heap, không biết về Big-O, không có khái niệm gì về cây (`tree`) hay việc duyệt đồ thị (`graph traversal`). Và nếu buộc phải viết code cho một thuật toán sắp xếp, tôi đảm bảo rằng nó sẽ không chạy tốt.

Tất cả các cấu trúc dữ liệu tôi từng sử dụng đều được cài đặt sẵn trong ngôn ngữ lập trình và tôi không nhất thiết phải biết chúng làm việc như thế nào. Tôi chưa từng phải tự quản lý vùng nhớ, trừ khi một tiến trình đang chạy ném lỗi "hết bộ nhớ" (`out of memory`), và sau đó tôi phải tìm một cách giải quyết khác. Tồi từng sử dụng mảng nhiều chiều vài lần trong đời, và hàng ngàn mảng kết hợp (`associate arrays`). Nhưng thực sự tôi chưa từng tự mình xây dựng một cấu trúc dữ liệu nào.

Nhưng, sau khi trải qua dự án này, tôi rất tự tin rằng mình sẽ được tuyển. Đây là một dự án dài hơi, sẽ tốn của tôi hàng tháng. Nếu bạn đã quen với nhiều nội dung trong này, bạn sẽ mất ít thời gian hơn.

## Sử dụng tài liệu này như thế nào?

> Phần này được viết lại khá nhiều để thuận tiện cho các bạn tiếp cận. Dựa theo bản gốc, tác giả có vẻ như cũng đang cố hướng dẫn cho người mới dùng git.

Bạn có thể bỏ qua mục này nếu đã có kiến thức về Git, Github và [Github Flavored Markdown](https://guides.github.com/features/mastering-markdown/#GitHub-flavored-markdown)

Nếu bạn chưa biết về [git](https://git-scm.com) thì vui lòng tham khảo các bài hướng dẫn sau để nắm cách sử dụng:

- Tiếng Anh: [git - the simple guide](http://rogerdudler.github.io/git-guide/)
- Tiếng Việt: [Sổ tay git cho người mới bắt đầu](http://rogerdudler.github.io/git-guide/index.vi.html) (Việt hóa từ nội dung với link trên)

Tiếp theo, bạn cần biết cách gắp (fork) một repo trên github:

- Tiếng Anh [Fork a repo](https://help.github.com/articles/fork-a-repo/)
- Tiếng Việt: [Cách gắp (fork) một repo trên github](https://techynovice.wordpress.com/2017/03/19/cach-gap-fork-mot-repository-tren-github/) (Việt hoá từ nội dung với link trên)

Ok, bây giờ bạn có thể bắt đầu:

- Fork repo này.
- Clone bản fork của bạn về máy tính cá nhân.
    ```
    git clone https://github.com/<your-username>/coding-interview-university
    ```
- Chạy các dòng lệnh sau
- Tạo một branch mới để đánh dấu tiến độ của bạn:
    ```
    git checkout -b progress
    ```
- Check các phần đã hoàn thành bằng cách thêm `x` vào giữa cặp ngoặc vuông (`[ ]`), như thế này: `[x]`.
- Chạy `git add .` để bắt đầu lưu lại các thay đổi.
- Chạy `git commit -m "commit message" `. Thay `commit message` với ghi chú của bạn cho sự thay đổi đó.
- Đồng bộ thay đổi với bản fork trên Github của bạn bằng `git push origin main`.


## Đừng nghĩ rằng bạn không đủ thông minh

- Các kỹ sư của Google là những người xuất sắc, nhưng nhiều người vẫn cho rằng họ không đủ thông minh, mặc dù họ đang làm việc tại Google.
- [Bí mật của của Thiên Tài Lập Trình  (The myth of the Genius Programmer) - video](https://www.youtube.com/watch?v=0SARbwvhupQ)
- [ulie Pagano: Đi một mình rất nguy hiểm - Cuộc chiến với con quái vật vô hình trong công nghệ](https://www.youtube.com/watch?v=1i8ylq4j_EY)
- [Hãy tin bạn có thể thay đổi](http://www.aaronsw.com/weblog/dweck)


## Về nguồn video

Một vài video chỉ xem được khi bạn tham gia vào các lớp học online trên Coursera, EdX, hay Lynda.com. Các lớp đó được gọi là MOOC.
Đôi khi các lớp chưa mở, và bạn phải đợi một vài tháng đến khi chúng được mở lại, do đó bạn không thể truy cập vào video được.
Lynda.com thì không miễn phí.

    Tôi sẽ rất cảm kích sự hỗ trợ của các bạn trong việc thêm các nguồn video miễn phí và luôn sẵn có, ví dụ như Youtube, để hỗ trợ nguồn video từ các khóa học online.
    Tôi cũng rất thích xem các bài giảng của các trường đại học.


## Quy trình phỏng vấn & các bước chuẩn bị tổng quát

- [ ] [ABC: Always Be Coding](https://medium.com/always-be-coding/abc-always-be-coding-d5f8051afce2#.4heg8zvm4)
- [ ] [4 bước đến Google dù không có bằng cấp](https://medium.com/always-be-coding/four-steps-to-google-without-a-degree-8f381aa6bd5e#.asalo1vfx)
- [ ] [Whiteboarding (Giải toán lập trình trên bảng trắng)](https://medium.com/@dpup/whiteboarding-4df873dbba2e#.hf6jn45g1)
- [ ] [Google nghĩ thế nào về Tuyển dụng, Quản lý và Văn hóa](http://www.kpcb.com/blog/lessons-learned-how-google-thinks-about-hiring-management-and-culture)
- [ ] [Whiteboarding hiệu quả trong khi phỏng vấn kỹ năng lập trình](http://www.coderust.com/blog/2014/04/10/effective-whiteboarding-during-programming-interviews/)
- [ ] Cracking The Coding Interview Set 1:
    - [ ] [Gayle L McDowell - Cracking The Coding Interview (video)](https://www.youtube.com/watch?v=rEJzOhC5ZtQ)
    - [ ] [Cracking the Coding Interview with Author Gayle Laakmann McDowell (video)](https://www.youtube.com/watch?v=aClxtDcdpsQ)
- [ ] Làm thế nào để lấy được công việc ở Big 4:
    - [ ] [Làm sao để lấy được công việc ở Big 4 - Amazon, Facebook, Google & Microsoft (video)](https://www.youtube.com/watch?v=YJZCUhxNCv8)
- [ ] [Thất bại trong cuộc phỏng vấn với Google](http://alexbowe.com/failing-at-google-interviews/)


## Chọn ngôn ngữ lập trình cho cuộc phỏng vấn

Bạn có thể chọn ngôn ngữ mà bạn quen thuộc để thực hiện phần viết mã trong lúc phỏng vấn, nhưng với Google, những ngôn ngữ sau đây là thích hợp nhất:

- C++
- Java
- Python

Bạn cũng có thể sử dụng các ngôn ngữ sau đây, nhưng hãy tìm hiểu thêm trước. Chúng có thể có bất lợi:

- JavaScript
- Ruby

Dù sao, bạn cũng cần phải rất quen thuộc với ngôn ngữ lập trình của mình.

Xem thêm về các sự lựa chọn:

- http://www.byte-by-byte.com/choose-the-right-language-for-your-coding-interview/
- http://blog.codingforinterviews.com/best-programming-language-jobs/
- https://www.quora.com/What-is-the-best-language-to-program-in-for-an-in-person-Google-interview

[Xem tài liệu về các ngôn ngữ ở đây](/programming-language-resources.md)

Bạn sẽ thấy vài tài liệu về C, C++ và Python bên dưới, vì tôi đang học chúng. Ngoài ra còn có một vài đầu sách nữa, xem ở cuối.


## Danh mục sách

Đây là danh sách rút gọn từ những gì mà tôi đọc, để tiết kiệm thời gian cho bạn. (xem bên dưới).


### Chuẩn bị phỏng vấn


- [ ] [Programming Interviews Exposed: Coding Your Way Through the Interview, 4nd Edition](https://www.amazon.com/Programming-Interviews-Exposed-Through-Interview/dp/111941847X/)
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

[Đây là tài liệu ngôn ngữ lập trình bổ sung.](/programming-language-resources.md)


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
- [Cơ sở dữ liệu thẻ ghi nhớ của tôi](https://github.com/jwasham/computer-science-flash-cards/blob/main/cards-jwasham.db): Lưu ý là tôi có đi hơi xa và các thẻ ghi nhớ có thể bao gồm cả hợp ngữ (ngôn ngữ máy) và Python cho đến cả máy học (machine learning) và thống kê. Như thế là quá nhiều cho các yêu cầu từ Google.

**Ghi chú dành cho các thẻ ghi nhớ:** Lần đầu tiên bạn nhận ra bạn biết câu trả lời, đừng đánh dấu là đã biết.Bạn phải xem thẻ tương tự và đưa ra câu trả lời chính xác vài lần trước khi bạn thực sự khẳng định đã nắm được vấn đề. Lặp đi lặp lại việc này sẽ giúp kiến thức được khắc sâu vào não bạn.

Có thể thay thế thẻ ghi nhớ với [Anki](http://ankisrs.net/), đây là ứng dụng mà bạn sẽ thấy tôi khuyến khích sử dụng rất nhiều lần. Nó sử dụng một hệ thống lặp để giúp bạn có thể ghi nhớ được kiến thức.

Đây là ứng dụng cực kì thân thiện với người dùng, có mặt trên tất cả các hệ điều hành, và có hệ thống lưu trữ đồng bộ đám mây. Tốn khoản 25$ cho iOS nhưng miễn phí trên các hệ điều hành khác.

Cơ sở dữ liệu thẻ ghi nhớ của tôi tuân theo chuẩn định dạng của Anki: https://ankiweb.net/shared/info/25173560 (cảm ơn [@xiewenya](https://github.com/xiewenya))

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
- Viết test (thuật ngữ dành cho các đoạn mã chuyên để kiểm tra phần mềm, ở đây tác giả có lẽ muốn đề cập đến [unit test](https://en.wikipedia.org/wiki/Unit_testing)) để chắc rằng tôi làm đúng. Đôi khi có thể chỉ là vài hàm `assert()` đơn giản.
- Bạn có thể thực hành với Java hoặc ngôn ngữ khác. Đây chỉ là sự lựa chọn của tôi.

Bạn không cần luyện tất cả các ngôn ngữ đó. Chỉ cần [một ngôn ngữ cho cuộc phỏng vấn là đủ](#chọn-ngôn-ngữ-lập-trình-cho-cuộc-phỏng-vấn).

Tại sao lại viết mã với tất cả các ngôn ngữ đó?

- Luyện tập, luyện tập, luyện tập, cho đến khi tôi phát bệnh với việc đó, và có thể giải các bài toán mà không gặp trục trặc gì (một vài bài toán có thể có nhiều trường hợp đặc biệt, hãy lưu lại các lần sai lầm đề ghi nhớ)
- Tôi muốn làm việc với các sức ép căn bản nhất (xin cấp phát/ giải phóng vùng nhớ, không sử dụng trợ giúp từ bộ dọn rác trong các ngôn ngữ câp cao, ngọai trừ Python)
- Học cách vận dụng kiểu dữ liệu sẵn có, nhờ đó, tôi có kinh nghiệm nhiều hơn và biết cách dùng chúng trong thực tế (sẽ không bao giờ bỏ thời gian ra tự thiết kế danh sách liên kết của riêng mình nữa).

Tôi có lẽ không đủ thời gian để thử hết tất cả các bước trên với từng chủ đề, nhưng tôi sẽ cố.

Bạn có thể xem code của tôi ở các trang sau:

 - [C](https://github.com/jwasham/practice-c)
 - [C++](https://github.com/jwasham/practice-cpp)
 - [Python](https://github.com/jwasham/practice-python)

Bạn không cần phải ghi nhớ cặn kẽ từ giải thuật.

Hãy viết code trên bảng đen hoặc trên giấy. Đừng sử dụng máy tính. Chạy thử trên giấy với vài bộ dữ liệu mẫu, sau đó chạy thử thuật toán của bạn trên một máy tính.


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
        - [Basic Arrays - Mảng cơ bản (video)](https://archive.org/details/0102WhatYouShouldKnow/02_04-basicArrays.mp4)
        - [Multi-dim - Đa chiều(video)](https://archive.org/details/0102WhatYouShouldKnow/02_05-multidimensionalArrays.mp4)
        - [Dynamic Arrays - Mảng tùy biến (video)](https://www.coursera.org/learn/data-structures/lecture/EwbnV/dynamic-arrays)
        - [Jagged Arrays - Mảng trong mảng (video)](https://www.youtube.com/watch?v=1jtrQqYpt7g)
        - [Jagged Arrays - Mảng trong mảng (video)](https://archive.org/details/0102WhatYouShouldKnow/02_06-jaggedArrays.mp4)
        - [Resizing arrays - Mảng có thể tùy biến kích thước (video)](https://archive.org/details/0102WhatYouShouldKnow/03_01-resizableArrays.mp4)
    - [ ] Cấp phát vector (Mảng có thể thay đổi với khả năng tự điều chỉnh kích cỡ):
        - [ ] Tập sử dụng mảng và con trỏ, dùng phép toán con trỏ để nhảy tới một chỉ mục (index) thay vì sử dụng chỉ mục.
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
        - Không gian cần thiết = (Kích cỡ của mảng, thường >= n)* kích thước của 1 phần tử, cho dù là 2n, vẫn xem như O(n)

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
        Trang này giúp bạn có cái nhìn khái quát về con trỏ trỏ tới con trỏ. Tôi không khuyến khích đọc lướt qua danh sách này. Đề tài này rất khó đọc và nắm bắt.
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
    - [ ] [Using Stacks Last-In First-Out - Sử dụng stack Vào-Cuối-Ra-Trước (video)](https://archive.org/details/0102WhatYouShouldKnow/05_01-usingStacksForLast-inFirst-out.mp4)
    - [ ] Sẽ không cài đặt. Cài đặt với mảng là điều hiển nhiên.

- ### Queue
    - [ ] [Using Queues First-In First-Out -  Sử dụng hàng đợi Vào-Trước-Ra-Trước(video)](https://archive.org/details/0102WhatYouShouldKnow/05_03-usingQueuesForFirst-inFirst-out.mp4)
    - [ ] [Queue (video)](https://www.coursera.org/learn/data-structures/lecture/EShpq/queue)
    - [ ] [Circular buffer/FIFO](https://en.wikipedia.org/wiki/Circular_buffer)
    - [ ] [Priority Queues - Hàng đợi ưu tiên (video)](https://archive.org/details/0102WhatYouShouldKnow/05_04-priorityQueuesAndDeques.mp4)
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
        - [ ] [Understanding Hash Functions - Hiểu hàm băm (video)](https://archive.org/details/0102WhatYouShouldKnow/06_02-understandingHashFunctions.mp4)
        - [ ] [Using Hash Tables - Sử dụng bảng băm (video)](https://archive.org/details/0102WhatYouShouldKnow/06_03-usingHashTables.mp4)
        - [ ] [Supporting Hashing - Hỗ trợ băm(video)](https://archive.org/details/0102WhatYouShouldKnow/06_04-supportingHashing.mp4)
        - [ ] [Language Support Hash Tables - Ngôn ngữ hỗ trợ bảng băm (video)](https://archive.org/details/0102WhatYouShouldKnow/06_05-languageSupportForHashTables.mp4)
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
    - [ ] [Bits cheat sheet](/extras/cheat%20sheets/bits-cheat-sheet.pdf) - bạn nên thuộc lòng nhiều lũy thừa của 2 (từ 2^1 đến 2^16 và 2^32)
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

        - [ ] `insert` // thêm giá trị vào cây
        - [ ] `get_node_count` // lấy số lượng nút trong cây
        - [ ] `print_values` // In ra gíá trị trong cây, từ nhỏ nhất đến lớn nhất
        - [ ] `delete_tree` // Xóa cây
        - [ ] `is_in_tree` // cho biết giá trị cho trước có tồn tại trong cây hay không
        - [ ] `get_height` // cho biết chiều cao của cây
        - [ ] `get_min` // cho biết giá trị nhỏ nhất trong cây
        - [ ] `get_max` // cho biết giá trị lớn nhất trong cây
        - [ ] `is_binary_search_tree` // kiểm tra xem cây cho trước có thỏa mãn điều kiện của một BST không.
        - [ ] `delete_value` // xóa một giá trị trong cây
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


## Kiến thức bổ sung

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

- ### Quy hoạch động
    - Chủ đề này có thể hơi khó, và các bài toán giải được bằng quy hoạch động (Dynamic Programming - DP) phải được định nghĩa ở dạng quan hệ hồi quy, và tìm ra giải pháp quy hoạch động cũng không đơn giản.
    - Tôi nghĩ rằng nên xem qua nhiều bài toán mẫu về quy hoạch động cho đến khi bạn hiểu rõ các dạng mô hình của chúng.

    - [ ] Video:
        - Video của giáo sư Skiena có thể hơi khó theo kịp vì ông ấy sử dụng bảng đen để giảng bài, và chữ hơi nhỏ
        - [ ] [Skiena: CSE373 2012 - Lecture 19 - Introduction to Dynamic Programming (video)](https://youtu.be/Qc2ieXRgR0k?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1718)
        - [ ] [Skiena: CSE373 2012 - Lecture 20 - Edit Distance (video)](https://youtu.be/IsmMhMdyeGY?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=2749)
        - [ ] [Skiena: CSE373 2012 - Lecture 21 - Dynamic Programming Examples (video)](https://youtu.be/o0V9eYF4UI8?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=406)
        - [ ] [Skiena: CSE373 2012 - Lecture 22 - Applications of Dynamic Programming (video)](https://www.youtube.com/watch?v=dRbMC1Ltl3A&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=22)
        - [ ] [Simonson: Dynamic Programming 0 (starts at 59:18) (video)](https://youtu.be/J5aJEcOr6Eo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3558)
        - [ ] [Simonson: Dynamic Programming I - Lecture 11 (video)](https://www.youtube.com/watch?v=0EzHjQ_SOeU&index=11&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [Simonson: Dynamic programming II - Lecture 12 (video)](https://www.youtube.com/watch?v=v1qiRwuJU7g&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=12)
        - [ ] List of individual DP problems (each is short):
            [Dynamic Programming (video)](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)
    - [ ] Ghi chú cho các bài giảng của đại học Yale:
        - [ ] [Dynamic Programming](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#dynamicProgramming)
    - [ ] Coursera:
        - [ ] [The RNA secondary structure problem (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/80RrW/the-rna-secondary-structure-problem)
        - [ ] [A dynamic programming algorithm (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/PSonq/a-dynamic-programming-algorithm)
        - [ ] [Illustrating the DP algorithm (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/oUEK2/illustrating-the-dp-algorithm)
        - [ ] [Running time of the DP algorithm (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/nfK2r/running-time-of-the-dp-algorithm)
        - [ ] [DP vs. recursive implementation (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/M999a/dp-vs-recursive-implementation)
        - [ ] [Global pairwise sequence alignment (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/UZ7o6/global-pairwise-sequence-alignment)
        - [ ] [Local pairwise sequence alignment (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/WnNau/local-pairwise-sequence-alignment)

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
        - [ ] D -[Nguyên tắc phụ thuộc ngược (Dependency Inversion principle)](http://www.oodesign.com/dependency-inversion-principle.html) | Giảm bớt phụ thuộc trong tập các đối tượng
            - [Tại sao sử dụng nguyên tắc phụ thuộc ngược và tại sao nguyên tắc này quan trọng (Why Is The Dependency Inversion Principle And Why Is It Important)](http://stackoverflow.com/questions/62539/what-is-the-dependency-inversion-principle-and-why-is-it-important)
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
    - [ ] [Ghi nhớ: 101 Thiết kế mẫu và lưu ý dành cho lập trình viên (Handy reference: 101 Design Patterns & Tips for Developers)](https://sourcemaking.com/design-patterns-and-tips)
    - [ ] [Design patterns for humans](https://github.com/kamranahmedse/design-patterns-for-humans#structural-design-patterns)

- ### Tổ hợp và Xác Suất
    - [ ] [Kỹ năng toán: Làm thế nào để tìm giai thừa, hoán vị và tổ hợp (Math Skills: How to find Factorial, Permutation and Combination) (Choose) (video)](https://www.youtube.com/watch?v=8RRo6Ti9d0U)
    - [ ] [Xác suất (Make School: Probability) (video)](https://www.youtube.com/watch?v=sZkAAk9Wwa4)
    - [ ] [Xác suất và chuỗi Markov (Make School: More Probability and Markov Chains) (video)](https://www.youtube.com/watch?v=dNaJg-mLobQ)
    - [ ] Khan Academy:
        - Các khóa học:
            - [ ] [Lý thuyết xác suất (Basic Theoretical Probability)](https://www.khanacademy.org/math/probability/probability-and-combinatorics-topic)
        - 41 video ngắn và đơn giản:
            - [ ] [Lý giải về xác suất (Probability Explained) (video)](https://www.youtube.com/watch?v=uzkc-qNVoOk&list=PLC58778F28211FA19)

- ### NP, NP-Complete và thuật toán xấp xỉ gần đúng
    - Cần biết về các trường hợp nổi tiếng của NP-complete như chuyên du hành doanh nhân hay vấn đề túi đựng đồ nghề (traveling salesman and the knapsack problem) để có thể trả lời khi người phỏng vấn hỏi một cách ẩn ý.
    - Know what NP-complete means.
    - [ ] [Tính toán độ phức tạp (Computational Complexity) (video)](https://www.youtube.com/watch?v=moPtwq_cVH8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=23)
    - [ ] Simonson:
        - [ ] [Thuật toán tham lam và giới thiệu NP-complete (Greedy Algs. II & Intro to NP Completeness) (video)](https://youtu.be/qcGnJ47Smlo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=2939)
        - [ ] [NP Completeness II & Reductions (video)](https://www.youtube.com/watch?v=e0tGC6ZQdQE&index=16&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [NP Completeness III (Video)](https://www.youtube.com/watch?v=fCX1BGT3wjE&index=17&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [NP Completeness IV (video)](https://www.youtube.com/watch?v=NKLDp3Rch3M&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=18)
    - [ ] Skiena:
        - [ ] [CSE373 2012 - Lecture 23 - Giới thiệu về NP-Completeness (Introduction to NP-Completeness) (video)](https://youtu.be/KiK5TVgXbFg?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1508)
        - [ ] [CSE373 2012 - Lecture 24 - Chứng mình NP-Completeness (NP-Completeness Proofs) (video)](https://www.youtube.com/watch?v=27Al52X3hd4&index=24&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [ ] [CSE373 2012 - Lecture 25 - Thách thức với NP-Completeness (NP-Completeness Challenge) (video)](https://www.youtube.com/watch?v=xCPH4gwIIXM&index=25&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [Độ phức tạp: P, NP, NP-completeness, giảm (Complexity: P, NP, NP-completeness, Reductions) (video)](https://www.youtube.com/watch?v=eHZifpgyH_4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=22)
    - [ ] [Độ phức tạp: Thuật toán gần đúng (Complexity: Approximation Algorithms) (video)](https://www.youtube.com/watch?v=MEz1J9wY2iM&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=24)
    - [ ] [Độ phức tạp: Thuật toán cố định tham số (Complexity: Fixed-Parameter Algorithms) (video)](https://www.youtube.com/watch?v=4q-jmGrmxKs&index=25&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
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
    - [ ] [Sedgewick - Mảng tiền tố (Suffix Arrays) (video)](https://www.youtube.com/watch?v=HKPrVm5FWvg)
    - [ ] [Sedgewick - Tìm và thay chuỗi (Substring Search) (videos)](https://www.youtube.com/watch?v=2LvvVFCEIv8&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66&index=5)
        - [ ] [1. Giới thiệu tìm và thay chuỗi (Introduction to Substring Search)](https://www.youtube.com/watch?v=2LvvVFCEIv8&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66&index=5)
        - [ ] [2. Tìm và thay chuỗi theo Brute-Force (Brute-Force Substring Search)](https://www.youtube.com/watch?v=CcDXwIGEXYU&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66&index=4)
        - [ ] [3. Knuth-Morris Pratt](https://www.youtube.com/watch?v=n-7n-FDEWzc&index=3&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66)
        - [ ] [4. Boyer-Moore](https://www.youtube.com/watch?v=fI7Ch6pZXfM&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66&index=2)
        - [ ] [5. Rabin-Karp](https://www.youtube.com/watch?v=QzI0p6zDjK4&index=1&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66)
    - [ ] [Tìm kiếm mẫu trong văn bản (Search pattern in text) (video)](https://www.coursera.org/learn/data-structures/lecture/tAfHI/search-pattern-in-text)

    Nếu bạn cần thêm thông tin chi tiết, hãy đọc qua phần "So khớp chuỗi" trong các mục đọc thêm [Đọc thêm về một số đề tài](đọc-thêm-về-một-số-đề-tài)

- ### Tries
    > Tries: cấu trúc dữ liệu dạng cây cho phép _chèn_ và _tìm kiếm_ một chuỗi con nhanh (`O(L)`) và một vài lợi thế khác, thích hợp cho một số dạng toán xử lý chuỗi.
    - Chú ý rằng có những loại _trie_ khác nhau. Một vài có tiền tố (prefix), một vài loại thì không, và một số thì sử dụng chuỗi thay vì bit để lưu trử các con đường (từ gốc đến lá).
    - [ ] [Sedgewick - Tries (3 videos)](https://www.youtube.com/playlist?list=PLe-ggMe31CTe9IyG9MB8vt5xUJeYgOYRQ)
        - [ ] [1. R Way Tries](https://www.youtube.com/watch?v=buq2bn8x3Vo&index=3&list=PLe-ggMe31CTe9IyG9MB8vt5xUJeYgOYRQ)
        - [ ] [2. Ternary Search Tries](https://www.youtube.com/watch?v=LelV-kkYMIg&index=2&list=PLe-ggMe31CTe9IyG9MB8vt5xUJeYgOYRQ)
        - [ ] [3. Character Based Operations](https://www.youtube.com/watch?v=00YaFPcC65g&list=PLe-ggMe31CTe9IyG9MB8vt5xUJeYgOYRQ&index=1)
    - [ ] [Notes on Data Structures and Programming Techniques](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Tries)
    - [ ] Short course videos:
        - [ ] [Introduction To Tries (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/08Xyf/core-introduction-to-tries)
        - [ ] [Performance Of Tries (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/PvlZW/core-performance-of-tries)
        - [ ] [Implementing A Trie (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/DFvd3/core-implementing-a-trie)
    - [ ] [The Trie: A Neglected Data Structure](https://www.toptal.com/java/the-trie-a-neglected-data-structure)
    - [ ] [TopCoder - Using Tries](https://www.topcoder.com/community/data-science/data-science-tutorials/using-tries/)
    - [ ] [Stanford Lecture (real world use case) (video)](https://www.youtube.com/watch?v=TJ8SkcUSdbU)
    - [ ] [MIT, Advanced Data Structures, Strings (can get pretty obscure about halfway through)](https://www.youtube.com/watch?v=NinWEPPrkDQ&index=16&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf)

- ### Cách biểu diễn số thực
    - [ ] Dạng 8-bit đơn giản: [Representation of Floating Point Numbers - 1 (video - có một lỗi nhỏ trong phần tính toán, xem thêm ở bên dưới video)](https://www.youtube.com/watch?v=ji3SfClm8TU)
    - [ ] 32 bit: [IEEE754 32-bit floating point binary (video)](https://www.youtube.com/watch?v=50ZYcZebIec)

- ### Unicode
    - [ ] [Điểu tối thiểu nhất mà mọi lập trình viên bắt buộc phải biết về Unicode và các tập ký tự.]( http://www.joelonsoftware.com/articles/Unicode.html)
    - [ ] [Điều mà mọi lập trình viên nên biết về mã hóa ký tự và tập ký tự để làm việc với văn bản](http://kunststube.net/encoding/)

- ### Endianness

    > Endianness: thứ tự phiên dịch các byte của một chuỗi byte trong bộ nhớ máy tính sang dạng số (4 byte với `int` hoặc 8 byte với `double`). Ví dụ như với 2 byte `0x00` và `0x01` lưu trên bộ nhớ, đọc theo Big-Endian ta được số 1 (0x00001. Đọc theo Little-Endia ta được 256 (0x100). Xem thêm ở các đường link bên duới.

    - [ ] [Big And Little Endian](https://www.cs.umd.edu/class/sum2003/cmsc311/Notes/Data/endian.html)
    - [ ] [Big Endian Vs Lxittle Endian (video)](https://www.youtube.com/watch?v=JrNF0KRAlyo)
    - [ ] [Big And Little Endian Inside/Out (video)](https://www.youtube.com/watch?v=oBSuXP-1Tc0)
        - Rất nặng về mặt kỹ thuật, dành cho các lập trình viên làm việc với nhân Linux (kernels).
        - Đừng quá bận tâm nếu phần lớn video vượt quá khả năng của bạn. Chỉ cần đoạn nửa đầu video là đủ.

- ### Mạng máy tính
    - **Nếu bạn có kinh nghiệm với mạng máy tính hoặc muốn trở thành một kỹ sư hệ thống, sẽ có các câu hỏi về chúng**
    - còn nếu không, biết thêm cũng tốt
    - [ ] [Khan Academy](https://www.khanacademy.org/computing/computer-science/internet-intro)
    - [ ] [UDP and TCP: Comparison of Transport Protocols](https://www.youtube.com/watch?v=Vdc8TCESIg8)
    - [ ] [TCP/IP and the OSI Model Explained!](https://www.youtube.com/watch?v=e5DEVa9eSN0)
    - [ ] [Packet Transmission across the Internet. Networking & TCP/IP tutorial.](https://www.youtube.com/watch?v=nomyRJehhnM)
    - [ ] [HTTP](https://www.youtube.com/watch?v=WGJrLqtX7As)
    - [ ] [SSL and HTTPS](https://www.youtube.com/watch?v=S2iBR2ZlZf0)
    - [ ] [SSL/TLS](https://www.youtube.com/watch?v=Rp3iZUvXWlM)
    - [ ] [HTTP 2.0](https://www.youtube.com/watch?v=E9FxNzv1Tr8)
    - [ ] [Video Series (21 videos)](https://www.youtube.com/playlist?list=PLEbnTDJUr_IegfoqO4iPnPYQui46QqT0j)
    - [ ] [Subnetting Demystified - Part 5 CIDR Notation](https://www.youtube.com/watch?v=t5xYI0jzOf4)


## Thiết kế hệ thống, Khả năng mở rộng, Xử lý dữ liệu
- **Bạn có thể sẽ bị hỏi câu hỏi liên quan đến thiết kế hệ thống nếu có hơn 4 năm kinh nghiệm**
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
- [ ] [Thiết kế thuật toán (Algorithm design)](http://www.hiredintech.com/algorithm-design/)
- [ ] [Chuẩn hóa trong cơ sở dữ liệu (Database Normalization - 1NF, 2NF, 3NF and 4NF) (video)](https://www.youtube.com/watch?v=UrYLYV7WSHM)
- [ ] [Phỏng vấn về thiết kế hệ thống (System Design Interview)](https://github.com/checkcheckzz/system-design-interview) - Có rất nhiều tài liệu trong link nay. Hãy đọc qua các bài viết và các ví dụ. Tôi có liệt kê sau đây:
- [ ] [Làm thế nào để dẫn đầu trong cuộc phỏng vấn về thiết kế hệ thống (How to ace a systems design interview) ](http://www.palantir.com/2011/10/how-to-rock-a-systems-design-interview/)
- [ ] [Những con số ai cũng nên biết (Numbers Everyone Should Know)](http://everythingisdata.wordpress.com/2009/10/17/numbers-everyone-should-know/)
- [ ] [Mất bao lâu để làm một chuyển đổi ngữ cảnh? (How long does it take to make a context switch) ](http://blog.tsunanet.net/2010/11/how-long-does-it-take-to-make-context.html)
- [ ] [Các luồng xử lý trong trung tâm dữ liệu (Transactions Across Datacenters)(video)](https://www.youtube.com/watch?v=srOgpXECblk)
- [ ] [Một hướng dẫn đơn giản về lý thuyết CAP (A plain English introduction to CAP Theorem)](http://ksat.me/a-plain-english-introduction-to-cap-theorem/)
- [ ] Thuật toán đồng thuận của Paxos:
    - [video ngắn](https://www.youtube.com/watch?v=s8JqcZtvnsM)
    - [Video mở rộng với trường hợp cụ thể và multi-paxos (extended video with use case and multi-paxos)](https://www.youtube.com/watch?v=JEpsBg0AO6o)
    - [Nghiên cứu](http://research.microsoft.com/en-us/um/people/lamport/pubs/paxos-simple.pdf)
- [ ] [Băm nhất quán (Consistent Hashing)](http://www.tom-e-white.com/2007/11/consistent-hashing.html)
- [ ] [NoSQL Patterns](http://horicky.blogspot.com/2009/11/nosql-patterns.html)
- [ ] Khả năng mở rộng:
    - [ ] [Tầm nhìn chung (Great overview)(video)](https://www.youtube.com/watch?v=-W9F__D3oY4)
    - [ ] Các seri ngắn:
        - [Nhân bản (Clones)](http://www.lecloud.net/post/7295452622/scalability-for-dummies-part-1-clones)
        - [Cơ sỡ dữ liệu (Database)](http://www.lecloud.net/post/7994751381/scalability-for-dummies-part-2-database)
        - [Cache](http://www.lecloud.net/post/9246290032/scalability-for-dummies-part-3-cache)
        - [Bất đồng bộ (Asynchronism)](http://www.lecloud.net/post/9699762917/scalability-for-dummies-part-4-asynchronism)
    - [ ] [Kiến trúc web và hệ thống phân tán có khả năng mở rộng (Scalable Web Architecture and Distributed Systems)](http://www.aosabook.org/en/distsys.html)
    - [ ] [Fallacies of Distributed Computing Explained](https://pages.cs.wisc.edu/~zuyu/files/fallacies.pdf)
    - [ ] [Pragmatic Programming Techniques](http://horicky.blogspot.com/2010/10/scalable-system-design-patterns.html)
        - [Bổ sung: Google Pregel cho xử lý đồ thị (Google Pregel Graph Processing)](http://horicky.blogspot.com/2010/07/google-pregel-graph-processing.html)
    - [ ] [Jeff Dean - Xây dựng hệ thống phần mềm tại Google và các bài học rút ra được (Jeff Dean - Building Software Systems At Google and Lessons Learned)(video)](https://www.youtube.com/watch?v=modXC5IWTJI)
    - [ ] [Giới thiệu về kiến trúc hệ thống có thể mở rộng (Introduction to Architecting Systems for Scale)](http://lethain.com/introduction-to-architecting-systems-for-scale/)
    - [ ] [Mở rộng game trên di động nhắm tới khách hàng trên toàn thế giới sử dụng App Engine và Cloud Datastore (Scaling mobile games to a global audience using App Engine and Cloud Datastore)(video)](https://www.youtube.com/watch?v=9nWyWwY2Onc)
    - [ ] [How Google Does Planet-Scale Engineering for Planet-Scale Infra (video)](https://www.youtube.com/watch?v=H4vMcD7zKM0)
    - [ ] [Sự quan trọng của thuật toán (The Importance of Algorithms)](https://www.topcoder.com/community/data-science/data-science-tutorials/the-importance-of-algorithms/)
    - [ ] [Chia nhỏ cơ sở dữ liệu thành từng phần nhỏ và nhanh hơn, dễ quản lý hơn (Sharding)](http://highscalability.com/blog/2009/8/6/an-unorthodox-approach-to-database-design-the-coming-of-the.html)
    - [ ] [Khả năng mở rộng của Facebook (Scale at Facebook) -  (2009)](https://www.infoq.com/presentations/Scale-at-Facebook)
    - [ ] [Khả năng mở rộng của Facebook (2012), "Xây dựng cho cả tỷ người dùng" (Scale at Facebook (2012), "Building for a Billion Users" -  )(video)](https://www.youtube.com/watch?v=oodS71YtkGU)
    - [ ] [Lập trình cho cả khả năng phát triển trong tương lai (Engineering for the Long Game) - Astrid Atkinson Keynote - (video)](https://www.youtube.com/watch?v=p0jGmgIrf_M&list=PLRXxvay_m8gqVlExPC5DG3TGWJTaBgqSA&index=4)
    - [ ] [7 năm mở rộng của Youtube trong 30 phút (7 Years Of YouTube Scalability Lessons In 30 Minutes)](http://highscalability.com/blog/2012/3/26/7-years-of-youtube-scalability-lessons-in-30-minutes.html)
        - [video](https://www.youtube.com/watch?v=G-lGCC4KKok)
    - [ ] [Paypal đã mở rộng thế nào để đáp ứng hơn tỷ lượt giao dịch mỗi ngày với 8VMs (How PayPal Scaled To Billions Of Transactions Daily Using Just 8VMs) ](http://highscalability.com/blog/2016/8/15/how-paypal-scaled-to-billions-of-transactions-daily-using-ju.html)
    - [ ] [Làm thế nào để xóa lặp trong dữ liệu (How to Remove Duplicates in Large Datasets)](https://blog.clevertap.com/how-to-remove-duplicates-in-large-datasets/)
    - [ ] [A look inside Etsy's scale and engineering culture with Jon Cowie) (video)](https://www.youtube.com/watch?v=3vV4YiqKm1o)
    - [ ] [Cùng nhìn nhận cách Etsy mở rộng và phong cách lập trình với Jon Cowie (What Led Amazon to its Own Microservices Architecture - Điều gì đưa Amazon tới kiến trúc microservices](http://thenewstack.io/led-amazon-microservices-architecture/)
    - [ ] [Nén hay không nén, đây là câu hỏi dành cho Uber (To Compress Or Not To Compress, That Was Uber's Question)](https://eng.uber.com/trip-data-squeeze/)
    - [ ] [Asyncio Tarantool Queue, Get In The Queue](http://highscalability.com/blog/2016/3/3/asyncio-tarantool-queue-get-in-the-queue.html)
    - [ ] [Trong trường hợp nào truy vấn phỏng đoán được thực thi? (When Should Approximate Query Processing Be Used?)](http://highscalability.com/blog/2016/2/25/when-should-approximate-query-processing-be-used.html)
    - [ ] [Google's Transition From Single Datacenter, To Failover, To A Native Multihomed Architecture]( http://highscalability.com/blog/2016/2/23/googles-transition-from-single-datacenter-to-failover-to-a-n.html)
    - [ ] [Spanner](http://highscalability.com/blog/2012/9/24/google-spanners-most-surprising-revelation-nosql-is-out-and.html)
    - [ ] [Kiến trúc Egnyte: Kinh nghiêm từ việc xây dụng và mở rộng hệ thống phân tán lên tới Petabyte (Egnyte Architecture: Lessons Learned In Building And Scaling A Multi Petabyte Distributed System) ](http://highscalability.com/blog/2016/2/15/egnyte-architecture-lessons-learned-in-building-and-scaling.html)
    - [ ] [Lập trình hướng máy học - Một cách lập trình mới trong thời đại mới (Machine Learning Driven Programming: A New Programming For A New World)](http://highscalability.com/blog/2016/7/6/machine-learning-driven-programming-a-new-programming-for-a.html)
    - [ ] [Kỹ thuật tối ưu hình ảnh để phục vụ hàng triệu yêu cầu mỗi ngày (The Image Optimization Technology That Serves Millions Of Requests Per Day)](http://highscalability.com/blog/2016/6/15/the-image-optimization-technology-that-serves-millions-of-re.html)
    - [ ] [Trình bày ngắn về kiến trúc Patreon (A Patreon Architecture Short)](http://highscalability.com/blog/2016/2/1/a-patreon-architecture-short.html)
    - [ ] [Tinder: Làm thế nào mà một trong những hệ thống hẹn hò lớn nhất quyết định bạn sẽ nhìn thấy ai tiếp theo (Tinder: How Does One Of The Largest Recommendation Engines Decide Who You'll See Next?)](http://highscalability.com/blog/2016/1/27/tinder-how-does-one-of-the-largest-recommendation-engines-de.html)
    - [ ] [Design Of A Modern Cache](http://highscalability.com/blog/2016/1/25/design-of-a-modern-cache.html)
    - [ ] [Facebook đã mở rộng thế nào để đáp ứng việc trình diễn video trực tiếp (Live Video Streaming At Facebook Scale)](http://highscalability.com/blog/2016/1/13/live-video-streaming-at-facebook-scale.html)
    - [ ] [ Hướng dẫn cơ bản cho việc mở rộng đến hơn 11 triệu người dùng với Amazon AWS (A Beginner's Guide To Scaling To 11 Million+ Users On Amazon's AWS )](http://highscalability.com/blog/2016/1/11/a-beginners-guide-to-scaling-to-11-million-users-on-amazons.html)
    - [ ] [Sử dụng docker ảnh hưởng tới độ trễ như thế nào? (How Does The Use Of Docker Effect Latency?)](http://highscalability.com/blog/2015/12/16/how-does-the-use-of-docker-effect-latency.html)
    - [ ] [Có thể xem AMP như 1 đối thủ với Google không? (Does AMP Counter An Existential Threat To Google?)](http://highscalability.com/blog/2015/12/14/does-amp-counter-an-existential-threat-to-google.html)
    - [ ] [Một cái nhìn 360 độ về toàn bộ Netflix Stack (A 360 Degree View Of The Entire Netflix Stack)](http://highscalability.com/blog/2015/11/9/a-360-degree-view-of-the-entire-netflix-stack.html)
    - [ ] [Độ trễ ảnh hưởng tới doanh thu của bạn - Làm sao để khắc phục? (Latency Is Everywhere And It Costs You Sales - How To Crush It)](http://highscalability.com/latency-everywhere-and-it-costs-you-sales-how-crush-it)
    - [ ] [Serverless (rất dài, chỉ nền dùng file gist)](http://martinfowler.com/articles/serverless.html)
    - [ ] [Điều gì làm nên sức mạnh của Instagram: Hàng trăm phần tử, hàng tá các công nghệ (What Powers Instagram: Hundreds of Instances, Dozens of Technologies )](http://instagram-engineering.tumblr.com/post/13649370142/what-powers-instagram-hundreds-of-instances)
    - [ ] [Kiến trúc Cinchcast - Tạo ra 1500 giờ âm thanh mỗi ngày (Cinchcast Architecture - Producing 1,500 Hours Of Audio Every Day)](http://highscalability.com/blog/2012/7/16/cinchcast-architecture-producing-1500-hours-of-audio-every-d.html)
    - [ ] [Kiến trúc của chương trình phát sóng video trực tiếp Justin.Tv (Justin.Tv's Live Video Broadcasting Architecture)](http://highscalability.com/blog/2010/3/16/justintvs-live-video-broadcasting-architecture.html)
    - [ ] [Kiến trúc của game cộng đồng Playfish - 50 triệu người sử dụng hàng tháng và vẫn tiếp tục tăng (Playfish's Social Gaming Architecture - 50 Million Monthly Users And Growing)](http://highscalability.com/blog/2010/9/21/playfishs-social-gaming-architecture-50-million-monthly-user.html)
    - [ ] [Kiến trúc của TripAdvisor - 40 triệu người viếng thăm, 200 triệu lượt xem, 30 Tb dữ liệu (TripAdvisor Architecture - 40M Visitors, 200M Dynamic Page Views, 30TB Data)](http://highscalability.com/blog/2011/6/27/tripadvisor-architecture-40m-visitors-200m-dynamic-page-view.html)
    - [ ] [Kiến trúc của PlentyOfFish (PlentyOfFish Architecture)](http://highscalability.com/plentyoffish-architecture)
    - [ ] [Kiến trúc của Salesforce - Làm thế nào để xử lý 1.3 tỷ giao dịch mỗi ngày (Salesforce Architecture - How They Handle 1.3 Billion Transactions A Day)](http://highscalability.com/blog/2013/9/23/salesforce-architecture-how-they-handle-13-billion-transacti.html)
    - [ ] [Kiến trúc của ESPN khi mở rộng - Xử lý 100000 thông tin mỗi giây (ESPN's Architecture At Scale - Operating At 100,000 Duh Nuh Nuhs Per Second)](http://highscalability.com/blog/2013/11/4/espns-architecture-at-scale-operating-at-100000-duh-nuh-nuhs.html)
    - [ ] Xem qua "Messaging, Serialization, and Queueing Systems" phía dưới để hiểu các công nghệ có thể kết nối các dịch vụ cùng lúc thế nào.
    - [ ] Twitter:
        - [O'Reilly MySQL CE 2011: Jeremy Cole, "Big and Small Data at @Twitter" (video)](https://www.youtube.com/watch?v=5cKTP36HVgI)
        - [Timelines at Scale](https://www.infoq.com/presentations/Twitter-Timeline-Scalability)
    - Để có thêm thông tin, xem seri "Mining Massive Datasets" trong seri video.
- [ ] Thực hành thêm về thiết kế hệ thống: Sau đây là vài ý tưởng có thể thực hiện trên giấy, mỗi ý tưởng đều có tư liệu đi cùng để hiểu rõ nó thực thi thế nào trong thế giới thực. [Thiết kế hệ thống bới HiredInTech (System Design from HiredInTech)](http://www.hiredintech.com/system-design/)
    - [cheat sheet](/extras/cheat%20sheets/system-design.pdf)
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
        - [Thiết kê một hệ thống cung cấp ID ngẫu nhiên (Design a random unique ID generation system)](https://blog.twitter.com/2010/announcing-snowflake)
        - [Thiết kế một hệ thống chơi bài nhiều người online (Design an online multiplayer card game)](http://www.indieflashblog.com/how-to-create-an-asynchronous-multiplayer-game.html)
        - [Thiết kế một cơ sở dữ liệu khóa-giá trị (Design a key-value database)](http://www.slideshare.net/dvirsky/introduction-to-redis)
        - [Thiết kế một hàm để trả về những từ khóa được tìm kiếm nhiều nhất trong thời gian gần nhất (Design a function to return the top k requests during past time interval)]( https://icmi.cs.ucsb.edu/research/tech_reports/reports/2005-23.pdf)
        - [Thiết kế một hệ thống chia sẻ ảnh (Design a picture sharing system) ](http://highscalability.com/blog/2011/12/6/instagram-architecture-14-million-users-terabytes-of-photos.html)
        - [Thiết kế một hệ thống hổ trợ ra quyết định (Design a recommendation system)](http://ijcai13.org/files/tutorial_slides/td3.pdf)
        - [Thiết kế một hệ thống làm ngắn URL (Design a URL-shortener system: copied from above)](http://www.hiredintech.com/system-design/the-system-design-process/)
        - [Thiết kế một hệ thống cache (Design a cache system)](https://www.adayinthelifeof.nl/2011/02/06/memcache-internals/)

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

Dưới đây là một bài viết tuyệt vời về phương thức luận, cách kết nối giải quyết vấn đề trong một bài phỏng vấn. Bạn có thể gặp các bài viết tương tự trong các sách hướng dẫn phỏng vấn nhưng tôi cho là bài này thật sự cực kì xuất sắc:
[Thiết kế thuật toán (Algorithm design canvas)](http://www.hiredintech.com/algorithm-design/)

[Các bước tôi xử lý cho các câu hỏi về lập trình trong phỏng vấn (My Process for Coding Interview (Book) Exercises)](https://googleyasheck.com/my-process-for-coding-interview-exercises/)

Không có bảng trắng ở nhà? Cũng hợp lý chứ. Tôi có chút khác biệt và tôi có một cái bảng trắng rất to. Thay vì bảng trắng, bạn có thể chọn một tập sổ ký họa từ các cửa hàng nghệ thuật. Bạn có thể ngồi ở ghế salon và thực hành. Tôi gọi nó là "bảng trắng mềm mại". Tôi có bỏ vào cây bút để dễ ước lượng. Nếu bạn dùng bút mực, bạn sẽ mong chọn loại nào có thể tẩy được ấy, vì sớm muộn sẽ rối cả lên.

![Bảng trắng mềm mại của tôi(my sofa whiteboard)](https://dng5l3qzreal6.cloudfront.net/2016/Oct/art_board_sm_2-1476233630368.jpg)

Phụ lục:

- [Toán học cho nhà lập trình hàng đầu (Mathematics for Topcoders)](https://www.topcoder.com/community/data-science/data-science-tutorials/mathematics-for-topcoders/)
- [Quy hoạch động - Từ cơ bản đến nâng cao (Dynamic Programming – From Novice to Advanced)](https://www.topcoder.com/community/data-science/data-science-tutorials/dynamic-programming-from-novice-to-advanced/)
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
- [InterviewBit](https://www.interviewbit.com)

Xem thêm:
- [Phỏng vấn thử nghiệm](http://www.gainlo.co/)


## Khi bạn tiến gần đến kỳ phỏng vấn

- [ ] Cracking The Coding Interview, Phần 2 (video):
    - [Cracking The Code Interview](https://www.youtube.com/watch?v=4NIb9l3imAo)
    - [Cracking the Coding Interview - Fullstack Speaker Series](https://www.youtube.com/watch?v=Eg5-tdAwclo)
    - [Ask Me Anything: Gayle Laakmann McDowell (author of Cracking the Coding Interview)](https://www.youtube.com/watch?v=1fqxMuPmGak)

## Lý lịch (Resume) của bạn

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
- Bạn sẽ làm việc như thế nào để đạt hiệu quả tốt nhất, trong trường hợp làm việc một mình và làm theo team?
- Kỹ năng hay kinh nghiệm nào của bạn thích hợp cho công việc này, và tại sao?
- Bạn thích điều gì nhất ở [công việc X/ dự án Y]?
- Lỗi gấy ức chế nhất bạn từng gặp phải ở [công việc X/ dự án Y]?
- Bạn học được những gì ở [công việc X/ dự án Y]?
- Những gì bạn cho rằng mình đã có thể làm tốt hơn ở [công việc X/ dự án Y]?


## Chuẩn bị câu hỏi dành cho phỏng vấn viên

    Một vài câu hỏi của tôi (Tôi có thể đã tìm hiểu trước rồi, nhưng vẫn muốn được nghe ý kiến từ góc nhìn của người phỏng vấn):

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

    Học các chủ đề này sẽ giúp bạn hiểu sâu hơn về Khoa học máy tính, và sẵn sàng hơn cho bất kỳ công ty nào.

    *****************************************************************************************************
    *****************************************************************************************************

---

## Sách bổ sung

- [ ] [The Unix Programming Environment](https://www.amazon.com/dp/013937681X)
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
- [ ] [UNIX and Linux System Administration Handbook, 5th Edition](https://www.amazon.com/UNIX-Linux-System-Administration-Handbook/dp/0134277554/)

## Học thêm

>  Tiêu đề của các video, các thuật ngữ cao cấp xin được giữ nguyên. Một số thuật ngữ có thể dịch được, nhưng người dịch không đủ vốn từ đề diễn đạt chúng một cách ngắn gọn như trong tiếng Anh, nên cũng xin phép cho qua.

- ### Trình biên dịch
    - [ ] [How a Compiler Works in ~1 minute (video)](https://www.youtube.com/watch?v=IhC7sdYe-Jg)
    - [ ] [Harvard CS50 - Compilers (video)](https://www.youtube.com/watch?v=CSZLNYF4Klo)
    - [ ] [C++ (video)](https://www.youtube.com/watch?v=twodd1KFfGk)
    - [ ] [Understanding Compiler Optimization (C++) (video)](https://www.youtube.com/watch?v=FnGCDLhaxKU)

- ### Emacs và vi(m)
    - Được đề xuất bởi Yegge, từ một bài đăng tuyển dụng cũ của Amazon: Phải nắm vững một trình chỉnh sửa văn bản thông dụng trên Unix.
    - vi(m):
        - [Editing With vim 01 - Installation, Setup, and The Modes (video)](https://www.youtube.com/watch?v=5givLEMcINQ&index=1&list=PL13bz4SHGmRxlZVmWQ9DvXo1fEg4UdGkr)
        - [VIM Adventures](http://vim-adventures.com/)
        - 4 video:
            - [The vi/vim editor - Lesson 1](https://www.youtube.com/watch?v=SI8TeVMX8pk)
            - [The vi/vim editor - Lesson 2](https://www.youtube.com/watch?v=F3OO7ZIOaJE)
            - [The vi/vim editor - Lesson 3](https://www.youtube.com/watch?v=ZYEccA_nMaI)
            - [The vi/vim editor - Lesson 4](https://www.youtube.com/watch?v=1lYD5gwgZIA)
        - [Using Vi Instead of Emacs](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Using_Vi_instead_of_Emacs)
    - emacs:
        - [Basics Emacs Tutorial (video)](https://www.youtube.com/watch?v=hbmV1bnQ-i0)
        - 3 video:
            - [Emacs Tutorial (Beginners) -Part 1- File commands, cut/copy/paste, cursor commands](https://www.youtube.com/watch?v=ujODL7MD04Q)
            - [Emacs Tutorial (Beginners) -Part 2- Buffer management, search, M-x grep and rgrep modes](https://www.youtube.com/watch?v=XWpsRupJ4II)
            - [Emacs Tutorial (Beginners) -Part 3- Expressions, Statements, ~/.emacs file and packages](https://www.youtube.com/watch?v=paSgzPso-yc)
        - [Evil Mode: Or, How I Learned to Stop Worrying and Love Emacs (video)](https://www.youtube.com/watch?v=JWD1Fpdd4Pc)
        - [Writing C Programs With Emacs](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Writing_C_programs_with_Emacs)
        - [(maybe) Org Mode In Depth: Managing Structure (video)](https://www.youtube.com/watch?v=nsGYet02bEk)

- ### Các công cụ chạy trên dòng lệnh của Unix
    - Được đề xuất bởi Yegge, từ một bài đăng tuyển dụng cũ của Amazon.
    - [ ] bash
    - [ ] cat
    - [ ] grep
    - [ ] sed
    - [ ] awk
    - [ ] curl or wget
    - [ ] sort
    - [ ] tr
    - [ ] uniq
    - [ ] [strace](https://en.wikipedia.org/wiki/Strace)
    - [ ] [tcpdump](https://danielmiessler.com/study/tcpdump/)

- ### Lý thuyết thông tin
    - [ ] [Khan Academy](https://www.khanacademy.org/computing/computer-science/informationtheory)
    - [ ] Hiểu thêm về chuỗi Markov:
        - [ ] [Core Markov Text Generation](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/waxgx/core-markov-text-generation)
        - [ ] [Core Implementing Markov Text Generation](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/gZhiC/core-implementing-markov-text-generation)
        - [ ] [Project = Markov Text Generation Walk Through](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/EUjrq/project-markov-text-generation-walk-through)
    - Xem thêm ở chuỗi bài từ đại học MIT 6.050J Information và Entropy bên dưới.

- ### Parity & Hamming Code (videos)
    - [ ] [Intro](https://www.youtube.com/watch?v=q-3BctoUpHE)
    - [ ] [Parity](https://www.youtube.com/watch?v=DdMcAUlxh1M)
    - [ ] Hamming Code:
        - [Error detection](https://www.youtube.com/watch?v=1A_NcXxdoCc)
        - [Error correction](https://www.youtube.com/watch?v=JAMLuxdHH8o)
    - [ ] [Error Checking](https://www.youtube.com/watch?v=wbH2VxzmoZk)

- ### Entropy
    - Xem các video bên dưới.
    - Hãy chăc chắn đã xem qua các video đề lý thuyết thông tin trước.
    - [ ] [Information Theory, Claude Shannon, Entropy, Redundancy, Data Compression & Bits (video)](https://youtu.be/JnJq3Py0dyM?t=176)

- ### Mã hóa
    - Hãy chăc chắn đã xem qua các video đề lý thuyết thông tin trước.
    - [ ] [Khan Academy Series](https://www.khanacademy.org/computing/computer-science/cryptography)
    - [ ] [Cryptography: Hash Functions](https://www.youtube.com/watch?v=KqqOXndnvic&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=30)
    - [ ] [Cryptography: Encryption](https://www.youtube.com/watch?v=9TNI2wHmaeI&index=31&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

- ### Thuật toán nén
    - Hãy chăc chắn đã xem qua các video đề lý thuyết thông tin trước.
    - [ ] Computerphile (videos):
        - [ ] [Compression](https://www.youtube.com/watch?v=Lto-ajuqW3w)
        - [ ] [Entropy in Compression](https://www.youtube.com/watch?v=M5c_RFKVkko)
        - [ ] [Upside Down Trees (Huffman Trees)](https://www.youtube.com/watch?v=umTbivyJoiI)
        - [ ] [EXTRA BITS/TRITS - Huffman Trees](https://www.youtube.com/watch?v=DV8efuB3h2g)
        - [ ] [Elegant Compression in Text (The LZ 77 Method)](https://www.youtube.com/watch?v=goOa3DGezUA)
        - [ ] [Text Compression Meets Probabilities](https://www.youtube.com/watch?v=cCDCfoHTsaU)
    - [ ] [Compressor Head videos](https://www.youtube.com/playlist?list=PLOU2XLYxmsIJGErt5rrCqaSGTMyyqNt2H)
    - [ ] [(optional) Google Developers Live: GZIP is not enough!](https://www.youtube.com/watch?v=whGwm0Lky2s)


- ### Bảo mật
    - [MIT (23 videos)](https://www.youtube.com/playlist?list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [ ] [Introduction, Threat Models](https://www.youtube.com/watch?v=GqmQg-cszw4&index=1&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [ ] [Control Hijacking Attacks](https://www.youtube.com/watch?v=6bwzNg5qQ0o&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh&index=2)
        - [ ] [Buffer Overflow Exploits and Defenses](https://www.youtube.com/watch?v=drQyrzRoRiA&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh&index=3)
        - [ ] [Privilege Separation](https://www.youtube.com/watch?v=6SIJmoE9L9g&index=4&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [ ] [Capabilities](https://www.youtube.com/watch?v=8VqTSY-11F4&index=5&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [ ] [Sandboxing Native Code](https://www.youtube.com/watch?v=VEV74hwASeU&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh&index=6)
        - [ ] [Web Security Model](https://www.youtube.com/watch?v=chkFBigodIw&index=7&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [ ] [Securing Web Applications](https://www.youtube.com/watch?v=EBQIGy1ROLY&index=8&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [ ] [Symbolic Execution](https://www.youtube.com/watch?v=yRVZPvHYHzw&index=9&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [ ] [Network Security](https://www.youtube.com/watch?v=SIEVvk3NVuk&index=11&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [ ] [Network Protocols](https://www.youtube.com/watch?v=QOtA76ga_fY&index=12&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [ ] [Side-Channel Attacks](https://www.youtube.com/watch?v=PuVMkSEcPiI&index=15&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)

- ### Trình dọn rác
    > Trình dọn rác (garbage collection) là một tính năng của các ngôn ngữ lập trình cấp cao, trong đó hệ thông tự động thu hồi vùng nhớ của các data (biến, đối tượng) không còn được sử dụng nữa, và cấp phát chúng cho các data mới. Trước khi có tính năng này, lập trình viên phải quản lý vùng nhớ thủ công, tự xin cấp phát và tự giải phóng.
    - [ ] [Compilers (video)](https://www.youtube.com/playlist?list=PLO9y7hOkmmSGTy5z6HZ-W4k2y8WXF7Bff)
    - [ ] [GC in Python (video)](https://www.youtube.com/watch?v=iHVs_HkjdmI)
    - [ ] [Deep Dive Java: Garbage Collection is Good!](https://www.infoq.com/presentations/garbage-collection-benefits)
    - [ ] [Deep Dive Python: Garbage Collection in CPython (video)](https://www.youtube.com/watch?v=P-8Z0-MhdQs&list=PLdzf4Clw0VbOEWOS_sLhT_9zaiQDrS5AR&index=3)

- ### Lập trình song song
    - [ ] [Coursera (Scala)](https://www.coursera.org/learn/parprog1/home/week/1)
    - [ ] [Efficient Python for High Performance Parallel Computing (video)](https://www.youtube.com/watch?v=uY85GkaYzBk)

- ### Messaging, Serialization, và Queueing Systems
    - [ ] [Thrift](https://thrift.apache.org/)
        - [Tutorial](http://thrift-tutorial.readthedocs.io/en/latest/intro.html)
    - [ ] [Protocol Buffers](https://developers.google.com/protocol-buffers/)
        - [Tutorials](https://developers.google.com/protocol-buffers/docs/tutorials)
    - [ ] [gRPC](http://www.grpc.io/)
        - [gRPC 101 for Java Developers (video)](https://www.youtube.com/watch?v=5tmPvSe7xXQ&list=PLcTqM9n_dieN0k1nSeN36Z_ppKnvMJoly&index=1)
    - [ ] [Redis](http://redis.io/)
        - [Tutorial](http://try.redis.io/)
    - [ ] [Amazon SQS (queue)](https://aws.amazon.com/sqs/)
    - [ ] [Amazon SNS (pub-sub)](https://aws.amazon.com/sns/)
    - [ ] [RabbitMQ](https://www.rabbitmq.com/)
        - [Get Started](https://www.rabbitmq.com/getstarted.html)
    - [ ] [Celery](http://www.celeryproject.org/)
        - [First Steps With Celery](http://docs.celeryproject.org/en/latest/getting-started/first-steps-with-celery.html)
    - [ ] [ZeroMQ](http://zeromq.org/)
        - [Intro - Read The Manual](http://zeromq.org/intro:read-the-manual)
    - [ ] [ActiveMQ](http://activemq.apache.org/)
    - [ ] [Kafka](http://kafka.apache.org/documentation.html#introduction)
    - [ ] [MessagePack](http://msgpack.org/index.html)
    - [ ] [Avro](https://avro.apache.org/)

- ### Fast Fourier Transform
    - [ ] [An Interactive Guide To The Fourier Transform](https://betterexplained.com/articles/an-interactive-guide-to-the-fourier-transform/)
    - [ ] [What is a Fourier transform? What is it used for?](http://www.askamathematician.com/2012/09/q-what-is-a-fourier-transform-what-is-it-used-for/)
    - [ ] [What is the Fourier Transform? (video)](https://www.youtube.com/watch?v=Xxut2PN-V8Q)
    - [ ] [Divide & Conquer: FFT (video)](https://www.youtube.com/watch?v=iTMn0Kt18tg&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=4)
    - [ ] [Understanding The FFT](http://jakevdp.github.io/blog/2013/08/28/understanding-the-fft/)

- ### Bloom Filter
    - Given a Bloom filter with m bits and k hashing functions, both insertion and membership testing are O(k)
    - [Bloom Filters](https://www.youtube.com/watch?v=-SuTGoFYjZs)
    - [Bloom Filters | Mining of Massive Datasets | Stanford University](https://www.youtube.com/watch?v=qBTdukbzc78)
    - [Tutorial](http://billmill.org/bloomfilter-tutorial/)
    - [How To Write A Bloom Filter App](http://blog.michaelschmatz.com/2016/04/11/how-to-write-a-bloom-filter-cpp/)

- ### HyperLogLog
    - [How To Count A Billion Distinct Objects Using Only 1.5KB Of Memory](http://highscalability.com/blog/2012/4/5/big-data-counting-how-to-count-a-billion-distinct-objects-us.html)

- ### Locality-Sensitive Hashing
    - Được sử dụng để kiểm tra tính tương đồng của các tài liệu.
    - Trái ngược lại với MD5 và SHA, chúng vốn được dùng để xác định chăc chắn rằng 2 tài liệu hoàn toàn trùng khớp với nhau.
    - [Simhashing (hopefully) made simple](http://ferd.ca/simhashing-hopefully-made-simple.html)

- ### van Emde Boas Trees
    - [ ] [Divide & Conquer: van Emde Boas Trees (video)](https://www.youtube.com/watch?v=hmReJCupbNU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=6)
    - [ ] [MIT Lecture Notes](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-046j-design-and-analysis-of-algorithms-spring-2012/lecture-notes/MIT6_046JS12_lec15.pdf)

- ### Augmented Data Structures
    - [ ] [CS 61B Lecture 39: Augmenting Data Structures](https://youtu.be/zksIj9O8_jc?list=PL4BBB74C7D2A1049C&t=950)

- ### Balanced search trees
    - Biết ít nhất một dạng cây nhị phân tìm kiếm cân bằng (và biết cách cài đặt nó)
    - "Trong các loại cây nhị phân cân bằng, cây AVL và 2/3 đã "ra đi", và cây đỏ-đen (red-black) có vẻ khá phỏ biến. Một dạng cây tự quản khá thú vị là _splay tree_, sử dụng phép xoay nút để chuyển bất kỳ nút nào lên trên gốc" - Skiena
    - Do đó, tôi quyết định cài đặt splay tree. Từ những gì tôi đọc được, bạn không cần phải cài đặt một cây nhị phân trong cuộc phỏng vấn. Nhưng tôi muốn chắc chắn về kiến thức của mình, và cũng phải đối diện với sự thật rằng splay tree khá khó.
        - splay tree: insert, search, delete functions
        - Nếu bạn muốn cài đặt cây đỏ-đen thì có thể thử sức các phép toán này: search and insertion functions, skipping delete
    - Tôi muốn học nhiều hơn về B-Tree, bởi vì nó được sử dụng rộng rãi với các tập dữ liệu rất lớn.
    - [ ] [Self-balancing binary search tree](https://en.wikipedia.org/wiki/Self-balancing_binary_search_tree)

    - [ ] **AVL trees**
        - Trong thực tế:
            Từ những gì mà tôi đọc được, chúng không được sử dụng nhiều, nhưng tôi có thể nghĩ đến vài ứng dụng: cây AVL hỗ trợ O(log n) cho tìm kiếm, chèn và xóa nút. Nó được cân bằng một cách chặt chẽ hơn so với cây đỏ-đen, dẫn đến việc chèn và xóa chậm hơn, nhưng tìm kiếm sẽ nhanh hơn. Điều đó khiến nó thích hơp với các bộ dữ liệu được xây dựng một lần và tái sử dụng nhiều lần, ví dụ như từ diển trong ngôn ngữ thông thường (hoặc các bộ từ vựng trong lập trình, biên dịch)
        - [ ] [MIT AVL Trees / AVL Sort (video)](https://www.youtube.com/watch?v=FNeL18KsWPc&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=6)
        - [ ] [AVL Trees (video)](https://www.coursera.org/learn/data-structures/lecture/Qq5E0/avl-trees)
        - [ ] [AVL Tree Implementation (video)](https://www.coursera.org/learn/data-structures/lecture/PKEBC/avl-tree-implementation)
        - [ ] [Split And Merge](https://www.coursera.org/learn/data-structures/lecture/22BgE/split-and-merge)

    - [ ] **Splay trees**
        - Trong thực tế:
            Splay tree được sử dụng để cài đặt cache, bộ cấp phát bộ nhớ, định tuyến, bộ dọn rác, trình nén dữ liệu, ropes (thay thế hoặc đại diện cho một chuỗi lớn), trong Windows NT (bộ nhớ ảo, mạng và hệ thống file.)
        - [ ] [CS 61B: Splay Trees (video)](https://www.youtube.com/watch?v=Najzh1rYQTo&index=23&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd)
        - [ ] MIT Lecture: Splay Trees:
            - Gets very mathy, but watch the last 10 minutes for sure.
            - [Video](https://www.youtube.com/watch?v=QnPl_Y6EqMo)

    - [ ] **Red/black trees**
        - Đây là một biến thể của cây 2/3 tree (xem bên dưới)
        - Trong thực tế:
            Cây Đỏ-đen đảm bảo tốc độ thực thi ok trong trường hợp xấu nhất cho các phép toán: chèn, xóa, tìm kiếm. Điều đó không chỉ khiến nó có giá trị trong các ứng dụng thời gian thực, mà còn là phần cơ bản đề xây dựng nhiều dạng cấu trúc dữ liệu nâng cao, ví dụ như, trong tính toán địa lý, nhiều cấu trúc dữ liệu được xây dựng dựa trên cây đỏ-đen, thuật toán Lập lịch tuyệt đối công bằng (Completely Fair Scheduler) sử dụng trong nhân Linux cũng dùng cây đỏ-đen. Trên Java 8, HashMap cũng được điều chỉnh lại, thay vi dùng LinkedList để chứa các phần tử giống nhau (trùng hashcode), nguời ta dùng một cây đỏ-đen.
        - [ ] [Aduni - Algorithms - Lecture 4 (link jumps to starting point) (video)](https://youtu.be/1W3x0f_RmUo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3871)
        - [ ] [Aduni - Algorithms - Lecture 5 (video)](https://www.youtube.com/watch?v=hm2GHwyKF1o&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=5)
        - [ ] [Black Tree](https://en.wikipedia.org/wiki/Red%E2%80%93black_tree)
        - [ ] [An Introduction To Binary Search And Red Black Tree](https://www.topcoder.com/community/data-science/data-science-tutorials/an-introduction-to-binary-search-and-red-black-trees/)

    - [ ] **2-3 search trees**
        - Trong thực tế:
            cây 2-3 chèn nhanh hơn, nhưng tìm kiêm chậm hơn (chiều cao của cây cao hơn so với AVL)
        - Bạn sẽ hiếm khi sử dụng cây 2-3, vì cài đặt của chúng sử dụng các dạng nút khác nhau. Vì vậy, người ta dùng cây đỏ-đen nhiều hơn.
        - [ ] [23-Tree Intuition and Definition (video)](https://www.youtube.com/watch?v=C3SsdUqasD4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=2)
        - [ ] [Binary View of 23-Tree](https://www.youtube.com/watch?v=iYvBtGKsqSg&index=3&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [ ] [2-3 Trees (student recitation) (video)](https://www.youtube.com/watch?v=TOb1tuEZ2X4&index=5&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

    - [ ] **2-3-4 Trees (aka 2-4 trees)**
        - Trong thực tế:
            Với mỗi cây 2-4, có nhiều cây đỏ-đen tương ứng với cùng thứ tự nút. Phép chèn và xóa trên cây 2-4 cũng tương đương với phép đổi màu và xoay trên cây đỏ-đen. Nó khiến cho cây 2-4 trở thành một công cụ hiệu quả để hiểu được logic phía sau cây đỏ-đen, và đó là tại sao nhiều sách dẫn nhập thuật toán lại giới thiệu cây 2-4 trước cây đỏ-đen. **cây 2-4 không thường được dùng trong thực tế**
        - [ ] [CS 61B Lecture 26: Balanced Search Trees (video)](https://www.youtube.com/watch?v=zqrqYXkth6Q&index=26&list=PL4BBB74C7D2A1049C)
        - [ ] [Bottom Up 234-Trees (video)](https://www.youtube.com/watch?v=DQdMYevEyE4&index=4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [ ] [Top Down 234-Trees (video)](https://www.youtube.com/watch?v=2679VQ26Fp4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=5)

    - [ ] **N-ary (K-ary, M-ary) trees**
        - chú ý: N hay K chính là yếu tố cho phân nhánh (số nhánh tối đa)
        - Cây nhị phân là 2-ary, trong đó, số nhánh tối đa (branching factor) là 2
        - Cây 2-3 là 3-ary
        - [ ] [K-Ary Tree](https://en.wikipedia.org/wiki/K-ary_tree)

    - [ ] **B-Trees**
        - fun fact: điều đó vẫn còn là một bí ẩn, nhưng B ở đây có thể là Boeing, Balanced (được cân bằng) hoặc Bayer (người đồng sáng tạo)
        - Trong thực tế:
            B-tree được sử dụng rộng rãi trong các cơ sở dữ liệu. Hầu hết các hệ thống file sử dụng B-tree (hoặc biến thể của nó). Thêm vào đó, loại cấu trúc cho phép truy cập ngẫu nhiên nhanh chóng vào một file bất kỳ. Vấn đề còn lại là điều chỉnh địa chỉ khổi vùng nhớ của file thành địa chỉ vật lý của ổ đĩa (hoặc địa chỉ _cylinder-head-sector_).
            (or perhaps to a cylinder-head-sector) address.
        - [ ] [B-Tree](https://en.wikipedia.org/wiki/B-tree)
        - [ ] [Introduction to B-Trees (video)](https://www.youtube.com/watch?v=I22wEC1tTGo&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=6)
        - [ ] [B-Tree Definition and Insertion (video)](https://www.youtube.com/watch?v=s3bCdZGrgpA&index=7&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [ ] [B-Tree Deletion (video)](https://www.youtube.com/watch?v=svfnVhJOfMc&index=8&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [ ] [MIT 6.851 - Memory Hierarchy Models (video)](https://www.youtube.com/watch?v=V3omVLzI0WE&index=7&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf)
                - giải thích cache mau quên (cache-oblivious) B-Trees, một cấu trúc dữ liệu rất thú vị.
                - 37 phút đầu tiên rất nặng kỹ thuật, có thể bỏ qua


- ### k-D Trees
    - Tốt đề tìm số điểm nằm trong một hình chữ nhật hoặc một đối tượng đa chiều.
    - Rất thích hợp cho thuật toán tìm láng giềng gần nhất (k-nearest neighbors, một thuật toán trong khai thác dữ liệu)
    - [ ] [Kd Trees (video)](https://www.youtube.com/watch?v=W94M9D_yXKk)
    - [ ] [kNN K-d tree algorithm (video)](https://www.youtube.com/watch?v=Y4ZgLlDfKDg)

- ### Skip lists
    - "Đó là một dạng cấu trúc dữ liệu được sùng bái" - Skiena
    - [ ] [Randomization: Skip Lists (video)](https://www.youtube.com/watch?v=2g9OSRKJuzM&index=10&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [For animations and a little more detail](https://en.wikipedia.org/wiki/Skip_list)

- ### Network Flows
    - [ ] [Ford-Fulkerson in 5 minutes (video)](https://www.youtube.com/watch?v=v1VgJmkEJW0)
    - [ ] [Ford-Fulkerson Algorithm (video)](https://www.youtube.com/watch?v=v1VgJmkEJW0)
    - [ ] [Network Flows (video)](https://www.youtube.com/watch?v=2vhN4Ice5jI)

- ### Disjoint Sets & Union Find
    - [ ] [UCB 61B - Disjoint Sets; Sorting & selection (video)](https://www.youtube.com/watch?v=MAEGXTwmUsI&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&index=21)
    - [ ] [Sedgewick Algorithms - Union-Find (6 videos)](https://www.youtube.com/watch?v=8mYfZeHtdNc&list=PLe-ggMe31CTexoNYnMhbHaWhQ0dvcy43t)

- ### Math for Fast Processing
    - [ ] [Integer Arithmetic, Karatsuba Multiplication (video)](https://www.youtube.com/watch?v=eCaXlAaN2uE&index=11&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [The Chinese Remainder Theorem (used in cryptography) (video)](https://www.youtube.com/watch?v=ru7mWZJlRQg)

- ### Treap
    - Sự kết hợp giữa cây nhị phân và heap.
    - [ ] [Treap](https://en.wikipedia.org/wiki/Treap)
    - [ ] [Data Structures: Treaps explained (video)](https://www.youtube.com/watch?v=6podLUYinH8)
    - [ ] [Applications in set operations](https://www.cs.cmu.edu/~scandal/papers/treaps-spaa98.pdf)

- ### Linear Programming (videos)
    - [ ] [Linear Programming](https://www.youtube.com/watch?v=M4K6HYLHREQ)
    - [ ] [Finding minimum cost](https://www.youtube.com/watch?v=2ACJ9ewUC6U)
    - [ ] [Finding maximum value](https://www.youtube.com/watch?v=8AA_81xI3ik)
    - [ ] [Solve Linear Equations with Python - Simplex Algorithm](https://www.youtube.com/watch?v=44pAWI7v5Zk)

- ### Geometry, Convex hull (videos)
    - [ ] [Graph Alg. IV: Intro to geometric algorithms - Lecture 9](https://youtu.be/XIAQRlNkJAw?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3164)
    - [ ] [Geometric Algorithms: Graham & Jarvis - Lecture 10](https://www.youtube.com/watch?v=J5aJEcOr6Eo&index=10&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
    - [ ] [Divide & Conquer: Convex Hull, Median Finding](https://www.youtube.com/watch?v=EzeYI7p9MjU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=2)

- ### Discrete math
    - Xem các video bên dưới

- ### Machine Learning
    - [ ] Tại sao nên học ML?
        - [ ] [How Google Is Remaking Itself As A Machine Learning First Company](https://backchannel.com/how-google-is-remaking-itself-as-a-machine-learning-first-company-ada63defcb70)
        - [ ] [Large-Scale Deep Learning for Intelligent Computer Systems (video)](https://www.youtube.com/watch?v=QSaZGT4-6EY)
        - [ ] [Deep Learning and Understandability versus Software Engineering and Verification by Peter Norvig](https://www.youtube.com/watch?v=X769cyzBNVw)
    - [ ] [Google's Cloud Machine learning tools (video)](https://www.youtube.com/watch?v=Ja2hxBAwG_0)
    - [ ] [Google Developers' Machine Learning Recipes (Scikit Learn & Tensorflow) (video)](https://www.youtube.com/playlist?list=PLOU2XLYxmsIIuiBfYad6rFYQU_jL2ryal)
    - [ ] [Tensorflow (video)](https://www.youtube.com/watch?v=oZikw5k_2FM)
    - [ ] [Tensorflow Tutorials](https://www.tensorflow.org/versions/r0.11/tutorials/index.html)
    - [ ] [Practical Guide to implementing Neural Networks in Python (using Theano)](http://www.analyticsvidhya.com/blog/2016/04/neural-networks-python-theano/)
    - Các khóa học:
        - [Great starter course: Machine Learning](https://www.coursera.org/learn/machine-learning)
              - [videos only](https://www.youtube.com/playlist?list=PLZ9qNFMHZ-A4rycgrgOYma6zxF4BZGGPW)
              - see videos 12-18 for a review of linear algebra (14 and 15 are duplicates)
        - [Neural Networks for Machine Learning](https://www.coursera.org/learn/neural-networks)
        - [Google's Deep Learning Nanodegree](https://www.udacity.com/course/deep-learning--ud730)
        - [Google/Kaggle Machine Learning Engineer Nanodegree](https://www.udacity.com/course/machine-learning-engineer-nanodegree-by-google--nd009)
        - [Self-Driving Car Engineer Nanodegree](https://www.udacity.com/drive)
        - [Metis Online Course ($99 for 2 months)](http://www.thisismetis.com/explore-data-science)
    - Tài nguyên:
        - Sách:
            - [Python Machine Learning](https://www.amazon.com/Python-Machine-Learning-Sebastian-Raschka/dp/1783555130/)
            - [Data Science from Scratch: First Principles with Python](https://www.amazon.com/Data-Science-Scratch-Principles-Python/dp/149190142X)
            - [Introduction to Machine Learning with Python](https://www.amazon.com/Introduction-Machine-Learning-Python-Scientists/dp/1449369413/)
        - [Machine Learning for Software Engineers](https://github.com/ZuzooVn/machine-learning-for-software-engineers)
        - Data School: http://www.dataschool.io/

- ### Go
    - [ ] Video:
        - [ ] [Why Learn Go?](https://www.youtube.com/watch?v=FTl0tl9BGdc)
        - [ ] [Go Programming](https://www.youtube.com/watch?v=CF9S4QZuV30)
        - [ ] [A Tour of Go](https://www.youtube.com/watch?v=ytEkHepK08c)
    - [ ] Sách:
        - [ ] [An Introduction to Programming in Go (read free online)](https://www.golang-book.com/books/intro)
        - [ ] [The Go Programming Language (Donovan & Kernighan)](https://www.amazon.com/Programming-Language-Addison-Wesley-Professional-Computing/dp/0134190440)
    - [ ] [Bootcamp](https://www.golang-book.com/guides/bootcamp)

--

## Đọc thêm về một số đề tài

    Tôi thêm những phần này để củng cố các kiến thức đã được trình bày ở trên, nhưng không muốn đưa chúng vào danh sách trên, vì đã quá nhiều rồi. Cũng có hơi vượt mức cần thiết. Nhưng dù sao, bạn muốn trúng tuyển mà phải không?

- [ ] **Union-Find**
    - [ ] [Overview](https://www.coursera.org/learn/data-structures/lecture/JssSY/overview)
    - [ ] [Naive Implementation](https://www.coursera.org/learn/data-structures/lecture/EM5D0/naive-implementations)
    - [ ] [Trees](https://www.coursera.org/learn/data-structures/lecture/Mxu0w/trees)
    - [ ] [Union By Rank](https://www.coursera.org/learn/data-structures/lecture/qb4c2/union-by-rank)
    - [ ] [Path Compression](https://www.coursera.org/learn/data-structures/lecture/Q9CVI/path-compression)
    - [ ] [Analysis Options](https://www.coursera.org/learn/data-structures/lecture/GQQLN/analysis-optional)

- [ ] **Đi sâu hơn vào quy hoạch động** (videos)
    - [ ] [6.006: Dynamic Programming I: Fibonacci, Shortest Paths](https://www.youtube.com/watch?v=OQ5jsbhAv_M&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=19)
    - [ ] [6.006: Dynamic Programming II: Text Justification, Blackjack](https://www.youtube.com/watch?v=ENyox7kNKeY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=20)
    - [ ] [6.006: DP III: Parenthesization, Edit Distance, Knapsack](https://www.youtube.com/watch?v=ocZMDMZwhCY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=21)
    - [ ] [6.006: DP IV: Guitar Fingering, Tetris, Super Mario Bros.](https://www.youtube.com/watch?v=tp4_UXaVyx8&index=22&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [6.046: Dynamic Programming & Advanced DP](https://www.youtube.com/watch?v=Tw1k46ywN6E&index=14&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [6.046: Dynamic Programming: All-Pairs Shortest Paths](https://www.youtube.com/watch?v=NzgFUwOaoIw&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=15)
    - [ ] [6.046: Dynamic Programming (student recitation)](https://www.youtube.com/watch?v=krZI60lKPek&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=12)

- [ ] **Xử lý đồ thị nâng cao** (videos)
    - [ ] [Synchronous Distributed Algorithms: Symmetry-Breaking. Shortest-Paths Spanning Trees](https://www.youtube.com/watch?v=mUBmcbbJNf4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=27)
    - [ ] [Asynchronous Distributed Algorithms: Shortest-Paths Spanning Trees](https://www.youtube.com/watch?v=kQ-UQAzcnzA&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=28)

- [ ] MIT **Xác suất** (nặng toán học, và hãy đi chậm chậm, sẽ tốt cho các vấn đề toán học khác) (videos):
    - [ ] [MIT 6.042J - Probability Introduction](https://www.youtube.com/watch?v=SmFwFdESMHI&index=18&list=PLB7540DEDD482705B)
    - [ ] [MIT 6.042J - Conditional Probability](https://www.youtube.com/watch?v=E6FbvM-FGZ8&index=19&list=PLB7540DEDD482705B)
    - [ ] [MIT 6.042J - Independence](https://www.youtube.com/watch?v=l1BCv3qqW4A&index=20&list=PLB7540DEDD482705B)
    - [ ] [MIT 6.042J - Random Variables](https://www.youtube.com/watch?v=MOfhhFaQdjw&list=PLB7540DEDD482705B&index=21)
    - [ ] [MIT 6.042J - Expectation I](https://www.youtube.com/watch?v=gGlMSe7uEkA&index=22&list=PLB7540DEDD482705B)
    - [ ] [MIT 6.042J - Expectation II](https://www.youtube.com/watch?v=oI9fMUqgfxY&index=23&list=PLB7540DEDD482705B)
    - [ ] [MIT 6.042J - Large Deviations](https://www.youtube.com/watch?v=q4mwO2qS2z4&index=24&list=PLB7540DEDD482705B)
    - [ ] [MIT 6.042J - Random Walks](https://www.youtube.com/watch?v=56iFMY8QW2k&list=PLB7540DEDD482705B&index=25)

- [ ] [Simonson: Approximation Algorithms (video)](https://www.youtube.com/watch?v=oDniZCmNmNw&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=19)

- [ ] **So khớp chuỗi**
    - [ ] Rabin-Karp (videos):
        - [Rabin Karps Algorithm](https://www.coursera.org/learn/data-structures/lecture/c0Qkw/rabin-karps-algorithm)
        - [Precomputing](https://www.coursera.org/learn/data-structures/lecture/nYrc8/optimization-precomputation)
        - [Optimization: Implementation and Analysis](https://www.coursera.org/learn/data-structures/lecture/h4ZLc/optimization-implementation-and-analysis)
        - [Table Doubling, Karp-Rabin](https://www.youtube.com/watch?v=BRO7mVIFt08&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=9)
        - [Rolling Hashes, Amortized Analysis](https://www.youtube.com/watch?v=w6nuXg0BISo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=32)
    - [ ] Knuth-Morris-Pratt (KMP):
        - [TThe Knuth-Morris-Pratt (KMP) String Matching Algorithm](https://www.youtube.com/watch?v=5i7oKodCRJo)
    - [ ] Boyer–Moore string search algorithm
        - [Boyer-Moore String Search Algorithm](https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_string_search_algorithm)
        - [Advanced String Searching Boyer-Moore-Horspool Algorithms (video)](https://www.youtube.com/watch?v=QDZpzctPf10)
    - [ ] [Coursera: Algorithms on Strings](https://www.coursera.org/learn/algorithms-on-strings/home/week/1)
        - Khởi đầu khá tốt. Nhưng theo thời gian, khóa học đi qua thuật toán KMP, và trở nên phức tạp hơn mức cần thiết.
        - Trình bày về trie rất hay.
        - Có thể bỏ qua.

- [ ] **Sắp xếp**

    - [ ] Bài giảng của Stanford về sắp xếp:
        - [ ] [Lecture 15 | Programming Abstractions (video)](https://www.youtube.com/watch?v=ENp00xylP7c&index=15&list=PLFE6E58F856038C69)
        - [ ] [Lecture 16 | Programming Abstractions (video)](https://www.youtube.com/watch?v=y4M9IVgrVKo&index=16&list=PLFE6E58F856038C69)
    - [ ] Shai Simonson, [Aduni.org](http://www.aduni.org/):
        - [ ] [Algorithms - Sorting - Lecture 2 (video)](https://www.youtube.com/watch?v=odNJmw5TOEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=2)
        - [ ] [Algorithms - Sorting II - Lecture 3 (video)](https://www.youtube.com/watch?v=hj8YKFTFKEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=3)
    - [ ] Steven Skiena lectures on sorting:
        - [ ] [lecture begins at 26:46 (video)](https://youtu.be/ute-pmMkyuk?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1600)
        - [ ] [lecture begins at 27:40 (video)](https://www.youtube.com/watch?v=yLvp-pB8mak&index=8&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [ ] [lecture begins at 35:00 (video)](https://www.youtube.com/watch?v=q7K9otnzlfE&index=9&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [ ] [lecture begins at 23:50 (video)](https://www.youtube.com/watch?v=TvqIGu9Iupw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=10)

## Các chuỗi Video

Hãy ngồi xuống và thưởng thức. "Luyện kỹ năng với Netflix" :P

- [ ] [List of individual Dynamic Programming problems (each is short)](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)

- [ ] [x86 Architecture, Assembly, Applications (11 videos)](https://www.youtube.com/playlist?list=PL038BE01D3BAEFDB0)

- [ ] [MIT 18.06 Linear Algebra, Spring 2005 (35 videos)](https://www.youtube.com/playlist?list=PLE7DDD91010BC51F8)

- [ ] [Excellent - MIT Calculus Revisited: Single Variable Calculus](https://www.youtube.com/playlist?list=PL3B08AE665AB9002A)

- [ ] [Computer Science 70, 001 - Spring 2015 - Discrete Mathematics and Probability Theory](https://www.youtube.com/playlist?list=PL-XXv-cvA_iD8wQm8U0gG_Z1uHjImKXFy)

- [ ] [Discrete Mathematics by Shai Simonson (19 videos)](https://www.youtube.com/playlist?list=PLWX710qNZo_sNlSWRMVIh6kfTjolNaZ8t)

- [ ] [Discrete Mathematics Part 1 by Sarada Herke (5 videos)](https://www.youtube.com/playlist?list=PLGxuz-nmYlQPOc4w1Kp2MZrdqOOm4Jxeo)

- [ ] CSE373 - Analysis of Algorithms (25 videos)
    - [Skiena lectures from Algorithm Design Manual](https://www.youtube.com/watch?v=ZFjhkohHdAA&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=1)

- [ ] [UC Berkeley 61B (Spring 2014): Data Structures (25 videos)](https://www.youtube.com/watch?v=mFPmKGIrQs4&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd)

- [ ] [UC Berkeley 61B (Fall 2006): Data Structures (39 videos)](https://www.youtube.com/playlist?list=PL4BBB74C7D2A1049C)

- [ ] [UC Berkeley 61C: Machine Structures (26 videos)](https://www.youtube.com/watch?v=gJJeUFyuvvg&list=PL-XXv-cvA_iCl2-D-FS5mk0jFF6cYSJs_)

- [ ] [OOSE: Software Dev Using UML and Java (21 videos)](https://www.youtube.com/playlist?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)

- [ ] [UC Berkeley CS 152: Computer Architecture and Engineering (20 videos)](https://www.youtube.com/watch?v=UH0QYvtP7Rk&index=20&list=PLkFD6_40KJIwEiwQx1dACXwh-2Fuo32qr)

- [ ] [MIT 6.004: Computation Structures (49 videos)](https://www.youtube.com/playlist?list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-)

- [ ] [Carnegie Mellon - Computer Architecture Lectures (39 videos)](https://www.youtube.com/playlist?list=PL5PHm2jkkXmi5CxxI7b3JCL1TWybTDtKq)

- [ ] [MIT 6.006: Intro to Algorithms (47 videos)](https://www.youtube.com/watch?v=HtSuA80QTyo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&nohtml5=False)

- [ ] [MIT 6.033: Computer System Engineering (22 videos)](https://www.youtube.com/watch?v=zm2VP0kHl1M&list=PL6535748F59DCA484)

- [ ] [MIT 6.034 Artificial Intelligence, Fall 2010 (30 videos)](https://www.youtube.com/playlist?list=PLUl4u3cNGP63gFHB6xb-kVBiQHYe_4hSi)

- [ ] [MIT 6.042J: Mathematics for Computer Science, Fall 2010 (25 videos)](https://www.youtube.com/watch?v=L3LMbpZIKhQ&list=PLB7540DEDD482705B)

- [ ] [MIT 6.046: Design and Analysis of Algorithms (34 videos)](https://www.youtube.com/watch?v=2P-yW7LQr08&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

- [ ] [MIT 6.050J: Information and Entropy, Spring 2008 (19 videos)](https://www.youtube.com/watch?v=phxsQrZQupo&list=PL_2Bwul6T-A7OldmhGODImZL8KEVE38X7)

- [ ] [MIT 6.851: Advanced Data Structures (22 videos)](https://www.youtube.com/watch?v=T0yzrZL1py0&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=1)

- [ ] [MIT 6.854: Advanced Algorithms, Spring 2016 (24 videos)](https://www.youtube.com/playlist?list=PL6ogFv-ieghdoGKGg2Bik3Gl1glBTEu8c)

- [ ] [Harvard COMPSCI 224: Advanced Algorithms (25 videos)](https://www.youtube.com/playlist?list=PL2SOU6wwxB0uP4rJgf5ayhHWgw7akUWSf)

- [ ] [MIT 6.858 Computer Systems Security, Fall 2014](https://www.youtube.com/watch?v=GqmQg-cszw4&index=1&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)

- [ ] [Stanford: Programming Paradigms (27 videos)](https://www.youtube.com/playlist?list=PL9D558D49CA734A02)

- [ ] [Introduction to Cryptography by Christof Paar](https://www.youtube.com/playlist?list=PL6N5qY2nvvJE8X75VkXglSrVhLv1tVcfy)
    - [Course Website along with Slides and Problem Sets](http://www.crypto-textbook.com/)

- [ ] [Mining Massive Datasets - Stanford University (94 videos)](https://www.youtube.com/playlist?list=PLLssT5z_DsK9JDLcT8T62VtzwyW9LNepV)

- [ ] [Graph Theory by Sarada Herke (67 videos)](https://www.youtube.com/user/DrSaradaHerke/playlists?shelf_id=5&view=50&sort=dd)

## Các khóa học khoa học máy tính

- [Directory of Online CS Courses](https://github.com/open-source-society/computer-science)
- [Directory of CS Courses (many with online lectures)](https://github.com/prakhar1989/awesome-courses)
