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
* [Nguyễn Đức Đông](https://github.com/ducdongmg)

Ghi chú riêng cho việc duy trì và cập nhật bản dịch tiếng Việt:

* Bản dịch này nhằm mục đích khuyến khích các bạn trẻ yêu thích công nghệ nhưng chưa vững tiếng Anh dễ tiếp cận, và tìm được hướng nghiên cứu. Để đi xa hơn trong ngành công nghệ thông tin (CNTT), sớm hay muộn, bạn cũng cần phải trau dồi vốn tiếng Anh của mình. Vì vậy, các thuật ngữ chuyên ngành, mình xin được giữ nguyên gốc. Ví dụ như: `stack`, `heap`, `queue`,...

* Mình cố gắng dịch thoát nghĩa, sao cho các bạn với ít kiến thức công nghệ thông tin nhất cũng có thể hiểu được. Trong quá trình dịch khó có thể trách khỏi sai sót, xin được lượng thứ.

* Mọi ý kiến, đóng góp về bản dịch, vui lòng [tạo một issue mới](/issues/new) hoặc bạn có thể chỉnh sửa và tạo Pull Request, đồng thời cc trực tiếp các dịch giả để kiểm tra.

---

> Ban đầu, đây chỉ là một danh sách to-do (danh sách các việc cần làm) ngắn về các chủ đề phải ôn tập của tôi, để trở thành một kỹ sư phần mềm.
> Nhưng rôi nó lớn dần nên như ngày nay. Sau khi đi hết con đường này, [tôi đã được tuyển vào vị trí Software Development Engineer ở Amazon](https://startupnextdoor.com/ive-been-acquired-by-amazon/?src=ciu)!
> Bạn có lẽ không cần phải học nhiều như tôi đã học. Nhưng dù sao, mọi thứ bạn cần ở đây.
>
> I studied about 8-12 hours a day, for several months. This is my story: [Why I studied full-time for 8 months for a Google interview](https://medium.freecodecamp.org/why-i-studied-full-time-for-8-months-for-a-google-interview-cc662ce9bb13)
>
> **Lưu ý:** Bạn sẽ không cần phải học nhiều như tôi đã làm. Tôi đã lãng phí rất nhiều thời gian vào những thứ mà tôi không cần biết. Thêm thông tin về điều này ở phía dưới. Tôi sẽ giúp bạn đạt được mục tiêu mà không lãng phí thời gian quý giá của bạn.
>
> Những chủ đề này sẽ chuẩn bị cho bạn nền tảng kiến thức vững vàng cho cuộc phỏng vấn kỹ thuật tại bất kỳ công ty phần mềm nào,
> bao gồm cả những gã khổng lồ như: Amazon, Facebook, Google hay Microsoft.
>
> *Chúc may mắn!*

<div align="center">
	<hr />
    <p>
        <a href="https://github.com/sponsors/jwasham"><strong>Trở thành nhà tài trợ</strong> và hỗ trợ cho Coding Interview University!</a>
    </p>
    <hr />
</div>

## Giới thiệu

![Viết code trên bảng - ảnh trích từ bộ phim Silicon Valley của HBO](https://d3j2pkmjtin6ou.cloudfront.net/coding-at-the-whiteboard-silicon-valley.png)

Đây là kế hoạch học tập kéo dài nhiều tháng của tôi để trở thành một software engineer cho một công ty lớn.

**Yêu cầu:**
* Một chút kinh nghiệm về mã hóa (biến, vòng lặp, phương thức/hàm, v.v.)
* Tính kiên nhẫn
* Thời gian

Lưu ý rằng đây là một kế hoạch dành cho **software engineering**, không phải frontend engineering hay full-stack. Thực sự có một siêu lộ trình và khóa học cho những career path đó ngoài kia (xem https://roadmap.sh/ để biết thêm chi tiết).

Có rất nhiều điều để học trong một chương trình Khoa học Máy tính tại trường đại học, nhưng chỉ cần biết khoảng 75% là đủ tốt cho một cuộc phỏng vấn, vì vậy đó là những gì tôi đề cập ở đây.
Để có một chương trình tự học Khoa học Máy tính hoàn chỉnh, các tài nguyên cho kế hoạch học tập của tôi đã được đưa vào Lộ trình Khoa học Máy tính của Kamran Ahmed: https://roadmap.sh/computer-science

---

## Mục lục

### Kế hoạch học tập

- [Giới thiệu?](#giới-thiệu)
- [Vì sao tôi cần tài liệu này?](#vì-sao-tôi-cần-tài-liệu-này)
- [Sử dụng tài liệu này như thế nào?](#sử-dụng-tài-liệu-này-như-thế-nào)
- [Đừng nghĩ rằng bạn không đủ thông minh](#đừng-nghĩ-rằng-bạn-không-đủ-thông-minh)
- [Về nguồn video](#về-nguồn-video)
- [Chọn ngôn ngữ lập trình cho cuộc phỏng vấn](#chọn-ngôn-ngữ-lập-trình-cho-cuộc-phỏng-vấn)
- [Sách về Cấu Trúc Dữ Liệu và Thuật Toán](#sách-về-cấu-trúc-dữ-liệu-và-thuật-toán)
- [Sách Chuẩn Bị Phỏng Vấn](#sách-chuẩn-bị-phỏng-vấn)
- [Đừng phạm sai lầm của tôi](#đừng-phạm-sai-lầm-của-tôi)
- [Những phần không được đề cập](#những-phần-không-được-đề-cập)
- [Kế hoạch hằng ngày](#Kế-hoạch-hàng-ngày)
- [Luyện tập các câu hỏi coding](#luyện-tập-các-câu-hỏi-coding)
- [Giải bài toán lập trình](#giải-bài-toán-lập-trình)

### Nội dung học tập

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
    - [Mẫu thiết kế](#mẫu-thiết-kế)
    - [Tổ hợp và Xác Suất](#tổ-hợp-và-xác-suất)
    - [NP, NP-Complete và thuật toán xấp xỉ gần đúng](#np-np-complete-và-thuật-toán-xấp-xỉ-gần-đúng)
    - [Cách máy tính xử lý một chương trình](#Cách-máy-tính-xử-lý-một-chương-trình)
    - [Bộ nhớ cache](#bộ-nhớ-cache)
    - [Process và Thread](#process-và-thread)
    - [Kiểm thử phần mềm](#kiểm-thử-phần-mềm)
    - [Tìm kiếm và xử lý chuỗi](#tìm-kiếm-và-xử-lý-chuỗi)
    - [Tries](#tries)
    - [Cách biểu diễn số thực](#cách-biểu-diễn-số-thực)
    - [Unicode](#unicode)
    - [Endianness](#endianness)
    - [Mạng máy tính](#mạng-máy-tính)
- [Tống kết](#tổng-kết)


### Tìm việc

- [Lý lịch (Resume) của bạn](#lý-lịch-resume-của-bạn)
- [Khi bạn tiến gần đến kỳ phỏng vấn](#khi-bạn-tiến-gần-đến-kỳ-phỏng-vấn)
- [Quy trình phỏng vấn & các bước chuẩn bị tổng quát](#quy-trình-phỏng-vấn--các-bước-chuẩn-bị-tổng-quát)
- [Hãy nghĩ đến những thứ bạn sẽ được hỏi](#hãy-nghĩ-đến-những-thứ-bạn-sẽ-được-hỏi)
- [Chuẩn bị câu hỏi dành cho phỏng vấn viên](#chuẩn-bị-câu-hỏi-dành-cho-phỏng-vấn-viên)
- [Khi bạn được nhận việc](#khi-bạn-được-nhận-việc)

**---------------- Những mục dưới đây là tuỳ chọn  ----------------**

### Optional Extra Topics & Resources

- [Sách bổ sung](#sách-bổ-sung)
- [Thiết kế hệ thống, Khả năng mở rộng, Xử lý dữ liệu](#thiết-kế-hệ-thống-khả-năng-mở-rộng-xử-lý-dữ-liệu) (Nếu bạn có hơn 4 năm kinh nghiệm)
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
- [Đọc thêm về một số đề tài](#đọc-thêm-về-một-số-đề-tài)
- [Các chuỗi Video](#các-chuỗi-video)
- [Các khóa học khoa học máy tính](#các-khóa-học-khoa-học-máy-tính)

---

## Vì sao tôi cần tài liệu này?

Nếu bạn muốn làm kỹ sư phần mềm cho một công ty lớn, đây là những điều bạn phải biết.

Nếu bạn đã bỏ lỡ cơ hội để có được bằng cử nhân khoa học máy tính, giống như tôi, điều này sẽ giúp bạn bắt kịp và tiết kiệm bốn năm cuộc đời của bạn.

Khi tôi bắt đầu dự án này, tôi không phân biệt được stack và heap, không biết về Big-O, không có khái niệm gì về cây (`tree`) hay việc duyệt đồ thị (`graph traversal`). Và nếu buộc phải viết code cho một thuật toán sắp xếp, tôi đảm bảo rằng nó sẽ không chạy tốt.

Tất cả các cấu trúc dữ liệu tôi từng sử dụng đều được cài đặt sẵn trong ngôn ngữ lập trình và tôi không nhất thiết phải biết chúng làm việc như thế nào. Tôi chưa từng phải tự quản lý vùng nhớ, trừ khi một Process đang chạy ném lỗi "hết bộ nhớ" (`out of memory`), và sau đó tôi phải tìm một cách giải quyết khác. Tồi từng sử dụng mảng nhiều chiều vài lần trong đời, và hàng ngàn mảng kết hợp (`associate arrays`). Nhưng thực sự tôi chưa từng tự mình xây dựng một cấu trúc dữ liệu nào.

Đây là một kế hoạch dài hơi, sẽ tốn của bạn vài tháng. Nếu bạn đã quen với nhiều nội dung trong này, bạn sẽ mất ít thời gian hơn.

## Sử dụng tài liệu này như thế nào?

Tất cả những gì dưới đây là một bản phác thảo, và bạn nên tiếp cận các mục theo thứ tự từ trên xuống dưới.

> Phần này được viết lại khá nhiều để thuận tiện cho các bạn tiếp cận. Dựa theo bản gốc, tác giả có vẻ như cũng đang cố hướng dẫn cho người mới dùng git.

Bạn có thể bỏ qua mục này nếu đã có kiến thức về Git, Github và [Github Flavored Markdown](https://guides.github.com/features/mastering-markdown/#GitHub-flavored-markdown)

Nếu bạn chưa biết về [git](https://git-scm.com) thì vui lòng tham khảo các bài hướng dẫn sau để nắm cách sử dụng:

- Tiếng Anh: [git - the simple guide](http://rogerdudler.github.io/git-guide/)
- Tiếng Việt: [Sổ tay git cho người mới bắt đầu](http://rogerdudler.github.io/git-guide/index.vi.html) (Việt hóa từ nội dung với link trên)

### Nếu bạn không muốn sử dụng git

Trên trang này, nhấp vào nút Code gần phía trên, sau đó nhấp vào "Download ZIP". Giải nén file và bạn có thể làm việc với các file văn bản.

Nếu bạn mở trong một trình soạn thảo code hiểu markdown, bạn sẽ thấy mọi thứ được định dạng đẹp mắt.

![Cách tải repo dưới dạng tệp zip](https://d3j2pkmjtin6ou.cloudfront.net/how-to-download-as-zip.png)

### Nếu bạn muốn làm quen với git

Tiếp theo, bạn cần biết cách gắp (fork) một repo trên github:

1. ***Fork GitHub repo:*** `https://github.com/jwasham/coding-interview-university` bằng cách clicking vào nút Fork.

    ![Fork the GitHub repo](https://d3j2pkmjtin6ou.cloudfront.net/fork-button.png)

- Tiếng Việt: [Cách gắp (fork) một repo trên github](https://techynovice.wordpress.com/2017/03/19/cach-gap-fork-mot-repository-tren-github/) (Việt hoá từ nội dung với link trên)

1. Clone bản fork của bạn về máy tính cá nhân.

    ```bash
    git clone https://github.com/<YOUR_GITHUB_USERNAME>/coding-interview-university.git
    cd coding-interview-university
    git remote add upstream https://github.com/jwasham/coding-interview-university.git
    git remote set-url --push upstream DISABLE  # để bạn không đẩy Process cá nhân của mình trở lại repo gốc
    ```

- Chạy các dòng lệnh sau
- Tạo một branch mới để đánh dấu tiến độ của bạn:
    ```
    git checkout -b progress
    ```
1. Check các phần đã hoàn thành bằng cách thêm `x` vào giữa cặp ngoặc vuông (`[ ]`), như thế này: `[x]`.
- Chạy `git add .` để bắt đầu lưu lại các thay đổi.
- Chạy `git commit -m "commit message" `. Thay `commit message` với ghi chú của bạn cho sự thay đổi đó.
- Đồng bộ thay đổi với bản fork trên Github của bạn bằng `git push origin main`.


## Đừng nghĩ rằng bạn không đủ thông minh

- Các kỹ sư phần mềm thành công thì thông minh, nhưng nhiều người lại tự ti rằng họ không đủ thông minh.
- Những video sau đây có thể giúp bạn vượt qua nỗi tự ti này:
    - [Bí mật của của Thiên Tài Lập Trình  (The myth of the Genius Programmer) - video](https://www.youtube.com/watch?v=0SARbwvhupQ)
    - [ulie Pagano: Đi một mình rất nguy hiểm - Cuộc chiến với con quái vật vô hình trong công nghệ](https://www.youtube.com/watch?v=1i8ylq4j_EY)
    - [Hãy tin bạn có thể thay đổi](http://www.aaronsw.com/weblog/dweck)


## Về nguồn video

Một vài video chỉ xem được khi bạn tham gia vào các lớp học online trên Coursera, EdX, hay Lynda.com. Các lớp đó được gọi là MOOC.
Đôi khi các lớp chưa mở, và bạn phải đợi một vài tháng đến khi chúng được mở lại, do đó bạn không thể truy cập vào video được.
Lynda.com thì không miễn phí.

Tôi sẽ rất cảm kích sự hỗ trợ của các bạn trong việc thêm các nguồn video miễn phí và luôn sẵn có, ví dụ như Youtube, để hỗ trợ nguồn video từ các khóa học online.
Tôi cũng rất thích xem các bài giảng của các trường đại học.


## Chọn ngôn ngữ lập trình cho cuộc phỏng vấn

Bạn sẽ cần phải chọn một ngôn ngữ lập trình cho các cuộc phỏng vấn lập trình mà bạn tham gia,
nhưng bạn cũng cần tìm một ngôn ngữ mà bạn có thể sử dụng để nghiên cứu các khái niệm khoa học máy tính.

Ưu tiên là ngôn ngữ đó sẽ giống nhau, để bạn chỉ cần thành thạo một ngôn ngữ.

### Đối với Kế Hoạch Học Tập này

Khi tôi thực hiện kế hoạch học tập, tôi đã sử dụng 2 ngôn ngữ cho hầu hết phần này: C và Python

* C: Ngôn ngữ bậc thấp. Cho phép bạn làm việc với con trỏ và cấp phát/giải phóng bộ nhớ, vì vậy bạn cảm nhận được cấu trúc dữ liệu
    và thuật toán trong tâm can của mình. Trong các ngôn ngữ cấp cao hơn như Python hoặc Java, những điều này được ẩn đi. Trong công việc hàng ngày, điều đó thật khủng khiếp,
    nhưng khi bạn đang học cách xây dựng những cấu trúc dữ liệu cấp thấp này, thật tuyệt vời khi cảm thấy gần với phần cứng.
    - C có mặt ở khắp mọi nơi. Bạn sẽ thấy các ví dụ trong sách, bài giảng, video, *ở khắp mọi nơi* trong khi bạn đang học.
    - [Ngôn ngữ lập trình C, Ấn bản thứ 2](https://www.amazon.com/Programming-Language-Brian-W-Kernighan/dp/0131103628)
        - Đây là một cuốn sách ngắn, nhưng nó sẽ giúp bạn hiểu rõ về ngôn ngữ C và nếu bạn thực hành một chút
            bạn sẽ nhanh chóng trở nên thành thạo. Hiểu C giúp bạn hiểu cách hoạt động của chương trình và bộ nhớ.
        - Bạn không cần phải đi sâu quá vào cuốn sách (hoặc thậm chí hoàn thành nó). Chỉ cần học cho đến khi bạn cảm thấy thoải mái khi đọc và viết bằng C.
* Python: Hiện đại và rất biểu cảm, tôi học nó vì nó chỉ đơn giản là rất hữu ích và cũng cho phép tôi viết ít code hơn trong một cuộc phỏng vấn.

Đây là các khuyến nghị của tôi. Tất nhiên bạn có thể làm những gì bạn thích.

Có thể bạn không cần, nhưng dưới đây là một số trang web để học một ngôn ngữ mới:
- [Exercism](https://exercism.org/tracks)
- [Codewars](http://www.codewars.com)
- [HackerEarth](https://www.hackerearth.com/for-developers/)
- [Scaler Topics (Java, C++)](https://www.scaler.com/topics/)

### Cho Cuộc Phỏng Vấn Lập Trình của bạn

Bạn có thể sử dụng một ngôn ngữ mà bạn quen thuộc để làm phần lập trình trong cuộc phỏng vấn, nhưng đối với các công ty lớn, những ngôn ngữ sau đây là thích hợp nhất:

- C++
- Java
- Python

Bạn cũng có thể sử dụng các ngôn ngữ sau đây, nhưng hãy tìm hiểu thêm trước. Chúng có thể có bất lợi:

- JavaScript
- Ruby

Dưới đây là một bài viết mà tôi đã viết về việc chọn ngôn ngữ cho cuộc phỏng vấn:
[Chọn Một Ngôn Ngữ cho Cuộc Phỏng Vấn Lập Trình](https://startupnextdoor.com/important-pick-one-language-for-the-coding-interview/).
Đây là bài viết gốc mà bài đăng của tôi dựa trên: [Chọn Một Ngôn Ngữ Lập Trình cho Cuộc Phỏng Vấn](https://web.archive.org/web/20210516054124/http://blog.codingforinterviews.com/best-programming-language-jobs/)

Bạn cần phải quen thuộc với ngôn ngữ và có kiến thức về nó.

Xem thêm về các sự lựa chọn:

- [Chọn ngôn ngữ đúng cho cuộc phỏng vấn lập trình](http://www.byte-by-byte.com/)choose-the-right-language-for-your-coding-interview/

[Xem tài liệu về các ngôn ngữ ở đây](/programming-language-resources.md)

## Sách về Cấu Trúc Dữ Liệu và Thuật Toán

Cuốn sách này sẽ tạo nền tảng cho khoa học máy tính của bạn.

Chỉ cần chọn một cuốn, bằng một ngôn ngữ mà bạn quen thuộc. Bạn sẽ đọc và code rất nhiều.

### C
- [Algorithms in C, Parts 1-5 (Bundle), 3rd Edition](https://www.amazon.com/Algorithms-Parts-1-5-Bundle-Fundamentals/dp/0201756080)
    - Cơ bản, Cấu trúc dữ liệu, Sắp xếp, Tìm kiếm, và Thuật toán đồ thị

### Python

- [Data Structures and Algorithms in Python](https://www.amazon.com/Structures-Algorithms-Python-Michael-Goodrich/dp/1118290275/)
    - của Goodrich, Tamassia, Goldwasser
    - Tôi thích cuốn này. Nó bao gồm mọi thứ cần thiết và hơn thế nữa.
    - Pythonic code (code theo đúng phong cách Python)
    - Cảm nhận của tôi: https://startupnextdoor.com/book-report-data-structures-and-algorithms-in-python/

### Java

Lựa chọn ở bạn:

- Goodrich, Tamassia, Goldwasser
    - [Data Structures and Algorithms in Java](https://www.amazon.com/Data-Structures-Algorithms-Michael-Goodrich/dp/1118771338/)
- Sedgewick và Wayne:
    - [Algorithms](https://www.amazon.com/Algorithms-4th-Robert-Sedgewick/dp/032157351X/)
    - Khóa học Coursera miễn phí bao gồm cuốn sách (do các tác giả giảng dạy!):
        - [Algorithms I](https://www.coursera.org/learn/algorithms-part1)
        - [Algorithms II](https://www.coursera.org/learn/algorithms-part2)

### C++

Lựa chọn ở bạn:

- Goodrich, Tamassia, and Mount
    - [Data Structures and Algorithms in C++, 2nd Edition](https://www.amazon.com/Data-Structures-Algorithms-Michael-Goodrich/dp/0470383275)
- Sedgewick và Wayne
    - [Algorithms in C++, Parts 1-4: Fundamentals, Data Structure, Sorting, Searching](https://www.amazon.com/Algorithms-Parts-1-4-Fundamentals-Structure/dp/0201350882/)
    - [Algorithms in C++ Part 5: Graph Algorithms](https://www.amazon.com/Algorithms-Part-Graph-3rd-Pt-5/dp/0201361183/)

## Sách chuẩn bị phỏng vấn

Bạn không cần phải mua nhiều sách như thế này. Thực sự "Cracking the Coding Interview" có lẽ đã đủ,
nhưng tôi đã mua thêm để tạo thêm cơ hội thực hành cho bản thân. Nhưng tôi luôn luôn làm quá mức.

Tôi đã mua cả hai. Chúng đã cho tôi rất nhiều bài tập thực hành.


- [ ] [Programming Interviews Exposed: Coding Your Way Through the Interview, 4nd Edition](https://www.amazon.com/Programming-Interviews-Exposed-Through-Interview/dp/111941847X/)
    - Có câu trả lời bằng C++ và Java
    - Được khuyến khích bởi các khóa hướng dẫn của Google.
    - Đây là một phần luyện tập tốt trước khi bắt đầu với quyển Cracking the Coding Interview
    - Không quá khó, phần lớn các bài toán có lẽ dễ hơn nhiều so với những gì bạn thường thấy trong một buổi phỏng vấn (dựa theo những gì tôi đọc được)
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - Trả lời bằng Java
    - Được khuyến nghị trên [Google Careers site](https://www.google.com/about/careers/how-we-hire/interview/)
    - Nếu bạn thấy mọi người trích dẫn "The Google Resume", đó là một cuốn sách được thay thế bởi "Cracking the Coding Interview".

### Nếu bạn có nhiều thời gian hơn nữa:

Chọn 1:

- [Elements of Programming Interviews (C++ version)](https://www.amazon.com/Elements-Programming-Interviews-Insiders-Guide/dp/1479274836)
- [Elements of Programming Interviews in Python](https://www.amazon.com/Elements-Programming-Interviews-Python-Insiders/dp/1537713949/)
- [Elements of Programming Interviews (Java version)](https://www.amazon.com/Elements-Programming-Interviews-Java-Insiders/dp/1517435803/)
        - [Companion Project - Method Stub and Test Cases for Every Problem in the Book](https://github.com/gardncl/elements-of-programming-interviews)

## Đừng phạm sai lầm của tôi

Danh sách này ngày càng dài theo năm tháng và tôi phải thừa nhận là nó ngoài tầm kiểm soát.

Sau đây là 1 vài lỗi tôi đã mắc phải, hy vọng rằng có thể mang lại cho bạn một chút kinh nghiệm.

### 1. Bạn sẽ không nhớ được tất cả

Tôi đã xem hàng giờ video và viết rất nhiều ghi chú, và chỉ sau vài tháng không còn nhớ chút gì. Tôi đã bỏ ra 3 ngày đọc lại các ghi chú và làm thẻ ghi nhớ để có thể đọc dễ dàng hơn.

Hãy đọc để tránh phạm phải sai lầm tương tự:

[Retaining Computer Science Knowledge](https://googleyasheck.com/retaining-computer-science-knowledge/)

### 2. Sử dụng flash card

Để giải quyết vấn đề, tôi đã viết 1 trang web nhỏ về flash card để thêm các thẻ mới với 2 dạng chính: kiến thức chung và code.
Mỗi loại có định dạng riêng.

Tôi đã làm một trang mobile-first (lấy mobile là trọng tâm phát triển trang web) để có thể xem trên điện thoại và máy tính bảng, ở bất cứ đâu.

Tự tạo cho mình hoàn toàn miễn phí:

- [Repo của flash card site](https://github.com/jwasham/computer-science-flash-cards)

**TÔI KHÔNG KHUYẾN NGHỊ sử dụng bộ flash card của tôi.** Có quá nhiều và hầu hết chúng là những thông tin vặt không cần thiết.

Nhưng nếu bạn không muốn nghe lời tôi, đây là những gì bạn cần:
- [Cơ sở dữ liệu flash card của tôi (1200 thẻ)](https://github.com/jwasham/computer-science-flash-cards/blob/main/cards-jwasham.db):
- [Cơ sở dữ liệu flash card của tôi (quá nhiều - 1800 thẻ)](https://github.com/jwasham/computer-science-flash-cards/blob/main/cards-jwasham-extreme.db):

Hãy nhớ rằng tôi đã làm quá mức và các flash card có thể bao gồm cả assembly (ngôn ngữ máy) và Python cho đến cả máy học (machine learning) và thống kê.
Như thế là quá nhiều so với những gì cần thiết.

**Ghi chú dành cho các flash card:** Lần đầu tiên bạn nhận ra bạn biết câu trả lời, đừng đánh dấu là đã biết.Bạn phải xem thẻ tương tự và đưa ra câu trả lời chính xác vài lần trước khi bạn thực sự khẳng định đã nắm được vấn đề. Lặp đi lặp lại việc này sẽ giúp kiến thức được khắc sâu vào não bạn.

Có thể thay thế thẻ ghi nhớ với [Anki](http://ankisrs.net/), đây là ứng dụng mà bạn sẽ thấy tôi khuyến khích sử dụng rất nhiều lần. Nó sử dụng một hệ thống lặp để giúp bạn có thể ghi nhớ được kiến thức.

Đây là ứng dụng cực kì thân thiện với người dùng, có mặt trên tất cả các hệ điều hành, và có hệ thống lưu trữ đồng bộ đám mây. Tốn khoản 25$ cho iOS nhưng miễn phí trên các hệ điều hành khác.

Cơ sở dữ liệu thẻ ghi nhớ của tôi tuân theo chuẩn định dạng của Anki: https://ankiweb.net/shared/info/25173560 (cảm ơn [@xiewenya](https://github.com/xiewenya))

Một số sinh viên đã đề cập đến vấn đề định dạng với khoảng trắng có thể được sửa bằng cách thực hiện như sau: mở bộ thẻ, chỉnh sửa thẻ, nhấp vào thẻ, chọn nút "styling", và thêm  "white-space: pre;" vào class thẻ.

Tôi giữ một danh sách xem nhanh các mã của ASCII, OSI stack, định nghĩa về Big-O, và nhiều hơn nữa. Tôi đọc bất cứ khi nào rảnh rỗi.

Khi gặp vấn đề trong lúc code, nghỉ ngơi chừng nửa giờ và đọc lại các thẻ ghi nhớ.

### 3. Làm Câu Hỏi Phỏng Vấn Lập Trình Trong Khi Bạn Đang Học

ĐIỀU NÀY RẤT QUAN TRỌNG.

Bắt đầu làm câu hỏi phỏng vấn lập trình trong khi bạn đang học cấu trúc dữ liệu và thuật toán.

Bạn cần áp dụng những gì bạn đang học để giải quyết vấn đề, nếu không bạn sẽ quên. Tôi đã mắc phải lỗi này.

Một khi bạn đã học một chủ đề, và cảm thấy khá quen thuộc với nó, ví dụ, **danh sách liên kết**:
1. Mở một trong những [Sách chuẩn bị phỏng vấn](#sách-chuẩn-bị-phỏng-vấn) (hoặc trang web về vấn đề lập trình, được liệt kê dưới đây)
1. Làm 2 hoặc 3 câu hỏi liên quan đến danh sách liên kết.
1. Chuyển sang chủ đề học tiếp theo.
1. Sau đó, quay lại và làm thêm 2 hoặc 3 vấn đề về danh sách liên kết.
1. Làm như vậy với mỗi chủ đề mới bạn học.

**Tiếp tục làm các vấn đề trong khi bạn đang học tất cả những điều này, không phải sau này.**

Bạn không được tuyển dụng vì kiến thức, mà là cách bạn áp dụng kiến thức.

Có rất nhiều nguồn lực cho điều này, được liệt kê dưới đây. Hãy tiếp tục.

### 4. Tập trung

Có rất nhiều thứ lấy đi sự tập trung của ta, việc này tốn rất nhiều thời gian. Tập trung và toàn tâm toàn ý rất khó. Bật vài bản nhạc không lời và bạn có thể tập trung hơn.

## Những phần không được đề cập

Có vài công nghệ đang thịnh hành nhưng không được đề cập đến, ví dụ:

- Javascript
- HTML, CSS, và các công nghệ thiết kế giao diện người dùng ("front-end").
- SQL


## Kế hoạch hàng ngày

Khóa học này bao gồm rất nhiều chủ đề. Mỗi chủ đề có thể mất của bạn vài ngày, hoặc thậm chí hơn một tuần. Điều này phụ thuộc vào lịch trình của bạn.

Mỗi ngày, hãy chọn chủ đề tiếp theo trong danh sách, xem một số video về chủ đề đó, sau đó viết code về
cấu trúc dữ liệu hoặc thuật toán đó bằng ngôn ngữ bạn đã chọn cho khóa học này.

Bạn có thể xem code của tôi tại đây:
 - [C](https://github.com/jwasham/practice-c)
 - [C++](https://github.com/jwasham/practice-cpp)
 - [Python](https://github.com/jwasham/practice-python)

Bạn không cần phải ghi nhớ mọi thuật toán. Bạn chỉ cần hiểu đủ để có thể viết cài đặt của riêng bạn.

## Luyện tập các câu hỏi coding

    Tại sao cái này lại ở đây? Tôi chưa sẵn sàng để phỏng vấn.

[Then go back and read this.](#3-làm-câu-hỏi-phỏng-vấn-lập-trình-trong-khi-bạn-đang-học)

Lý do bạn cần thực hành giải các bài toán lập trình:
- Nhận diện vấn đề, lựa chọn cấu trúc dữ liệu và thuật toán phù hợp
- Xác định các yêu cầu của vấn đề
- Trình bày cách suy nghĩ của bạn như thể bạn đang trong buổi phỏng vấn
- Lập trình trên bảng trắng hoặc trên giấy, không phải với máy tính
- Đưa ra được tính toán độ phức tạp về thời gian và không gian thực thi của giải pháp của bạn (xem Big-O phía dưới)
- Kiểm tra giải pháp của bạn

Có một lời giới thiệu tuyệt vời về việc giải quyết vấn đề một cách có phương pháp và giao tiếp trong một cuộc phỏng vấn.
Bạn cũng sẽ nhận được điều này từ các sách phỏng vấn lập trình, nhưng tôi thấy điều này xuất sắc::
[Thuật toán thiết kế canvas](http://www.hiredintech.com/algorithm-design/)

Viết code trên bảng trắng hoặc giấy, không phải máy tính. Kiểm tra với một số đầu vào mẫu. Sau đó gõ nó và kiểm tra nó trên máy tính.

Nếu bạn không có bảng trắng ở nhà, hãy mua một tờ giấy vẽ lớn từ cửa hàng mỹ thuật. Bạn có thể ngồi trên ghế sofa và thực hành.
Đây là "bảng trắng sofa" của tôi. Tôi đã thêm bút vào ảnh chỉ để đo lường. Nếu bạn sử dụng bút, bạn sẽ ước gì mình có thể tẩy.
Nhanh chóng trở nên lộn xộn. **Tôi sử dụng 1 chiếc bút chì và 1 cục gôm.**

![bảng trắng sofa của tôi](https://d3j2pkmjtin6ou.cloudfront.net/art_board_sm_2.jpg)

**Việc luyện tập giải các bài toán lập trình không phải là việc học thuộc lòng các câu trả lời cho các vấn đề lập trình.**

## Giải bài toán lập trình

Đừng quên các sách phỏng vấn lập trình quan trọng của bạn [ở đây](#sách-chuẩn-bị-phỏng-vấn).

Giải quyết vấn đề:
- [Cách tìm ra một giải pháp](https://www.topcoder.com/thrive/articles/How%20To%20Find%20a%20Solution)
- [Cách phân tích một bài toán Topcoder](https://www.topcoder.com/thrive/articles/How%20To%20Dissect%20a%20Topcoder%20Problem%20Statement%20Content)

Video Câu Hỏi Phỏng Vấn Lập Trình:
- [IDeserve (88 videos)](https://www.youtube.com/playlist?list=PLamzFoFxwoNjPfxzaWqs7cZGsPYy0x_gI)
- [Tushar Roy (5 playlists)](https://www.youtube.com/user/tusharroy2525/playlists?shelf_id=2&view=50&sort=dd)
    - Super for walkthroughs of problem solutions
- [Nick White - Giải pháp LeetCode (187 Videos)](https://www.youtube.com/playlist?list=PLU_sdQYzUj2keVENTP0a5rdykRSgg9Wp-)
    - Giải thích tốt về giải pháp và  code
    - Bạn có thể xem nhiều video trong một thời gian ngắn
- [FisherCoder - Giải pháp LeetCode](https://youtube.com/FisherCoder)

Trang web Thử thách/Thực hành:
- [LeetCode](https://leetcode.com/)
    - Trang web bài toán lập trình yêu thích của tôi. Đáng giá số tiền đăng ký cho 1-2 tháng bạn có thể chuẩn bị.
    - Xem video của Nick White và FisherCoder ở trên để xem hướng dẫn code.
- [HackerRank](https://www.hackerrank.com/)
- [TopCoder](https://www.topcoder.com/)
- [Codeforces](https://codeforces.com/)
- [Codility](https://codility.com/programmers/)
- [Geeks for Geeks](https://practice.geeksforgeeks.org/explore/?page=1)
- [AlgoExpert](https://www.algoexpert.io/product)
    - Được tạo bởi các kỹ sư của Google, đây cũng là một nguồn tài nguyên tuyệt vời để trau dồi kỹ năng của bạn.
- [Project Euler](https://projecteuler.net/)
    - Rất tập trung vào toán học và không thực sự phù hợp với các cuộc phỏng vấn viết code

## Bắt Đầu Nào

Được rồi, nói đủ nhiều rồi, hãy cùng học nào!

Nhưng đừng quên làm các bài toán lập trình ở phía trên trong khi bạn đang học!

## Độ phức tạp của thuật toán / Big-O / Phân tích tiệm cận

- Ở đây không có gì phải code, bạn chỉ xem video và ghi chép thôi!
- Có rất nhiều video. Chỉ cần xem đủ cho đến khi bạn hiểu nó. Bạn luôn có thể quay lại và kiểm tra kiến thức.
- Đừng lo lắng nếu bạn không hiểu hết phép toán đằng sau nó.
- Bạn chỉ cần hiểu cách thể hiện độ phức tạp của một thuật toán bằng Big-O.
- [ ] [Harvard CS50 - Asymptotic Notation (video)](https://www.youtube.com/watch?v=iOq5kSKqeR4)
- [ ] [Big O Notations (general quick tutorial) (video)](https://www.youtube.com/watch?v=V6mKVRU1evU)
- [ ] [Big O Notation (and Omega and Theta) - best mathematical explanation (video)](https://www.youtube.com/watch?v=ei-A_wy5Yxw&index=2&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [ ] [Skiena (video)](https://www.youtube.com/watch?v=z1mkCe3kVUA)
- [ ] [UC Berkeley Big O (video)](https://archive.org/details/ucberkeley_webcast_VIS4YDpuP98)
- [ ] [Amortized Analysis (video)](https://www.youtube.com/watch?v=B3SpQZaAZP4&index=10&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [ ] TopCoder (includes recurrence relations and master theorem):
    - [Computational Complexity: Section 1](https://www.topcoder.com/thrive/articles/Computational%20Complexity%20part%20one)
    - [Computational Complexity: Section 2](https://www.topcoder.com/thrive/articles/Computational%20Complexity%20part%20two)
- [ ] [Cheat sheet](http://bigocheatsheet.com/)
- [ ] [[Review] Analyzing Algorithms (playlist) in 18 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZMxejjIyFHWa-4nKg6sdoIv)

Ồ, chắc cũng đủ rồi.

Khi bạn đọc "Cracking the Coding Interview", có một chương về điều này, và cuối chương có một bài kiểm tra để xem
nếu bạn có thể xác định độ phức tạp thời gian chạy của các thuật toán khác nhau. Đó là một bài ôn tập và kiểm tra tuyệt vời.

## Cấu trúc dữ liệu

- ### Arrays
    - [ ] Về Arrays:
    	- [Arrays CS50 Harvard University](https://www.youtube.com/watch?v=tI_tIZFyKBw&t=3009s)
        - [Arrays (video)](https://www.coursera.org/lecture/data-structures/arrays-OsBSF)
        - [UC Berkeley CS61B - Linear and Multi-Dim Arrays - Mảng tuyến tính và mảng đa chiều(video)](https://archive.org/details/ucberkeley_webcast_Wp8oiO_CZZE) (Start watching from 15m 32s)
        - [Dynamic Arrays - Mảng tùy biến (video)](https://www.coursera.org/lecture/data-structures/dynamic-arrays-EwbnV)
        - [Jagged Arrays - Mảng trong mảng (video)](https://www.youtube.com/watch?v=1jtrQqYpt7g)
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

- ### Danh sách liên kết (Linked Lists)
    - [ ] Miêu tả:
    	- [ ] [Linked Lists CS50 Harvard University](https://www.youtube.com/watch?v=2T-A_GFuoTo&t=650s) - this builds the intuition.
        - [ ] [Singly Linked Lists (video)](https://www.coursera.org/lecture/data-structures/singly-linked-lists-kHhgK)
        - [ ] [CS 61B - Linked Lists 1 (video)](https://archive.org/details/ucberkeley_webcast_htzJdKoEmO0)
        - [ ] [CS 61B - Linked Lists 2 (video)](https://archive.org/details/ucberkeley_webcast_-c4I3gFYe3w)
        - [ ] [[Review] Linked lists in 4 minutes (video)](https://youtu.be/F8AbOfQwl1c)
    - [ ] [C Code (video)](https://www.youtube.com/watch?v=QN6FPiD0Gzo)
            - Không cần xem toàn bộ video, chỉ phần cấu trúc Node và cấp phát vùng nhớ.
    - [ ] Danh sách liên kết so sánh với Mảng:
        - [Core Linked Lists Vs Arrays - Danh sách liên kết Vs Mảng (video)](https://www.coursera.org/lecture/data-structures-optimizing-performance/core-linked-lists-vs-arrays-rjBs9)
        - [In The Real World Linked Lists Vs Arrays - Trong thực tế, Danh sách liên kết Vs Mảng (video)](https://www.coursera.org/lecture/data-structures-optimizing-performance/in-the-real-world-lists-vs-arrays-QUaUd)
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
    - [ ] [Stacks (video)](https://www.coursera.org/lecture/data-structures/stacks-UdKzQ)
    - [ ] [[Review] Stacks in 3 minutes (video)](https://youtu.be/KcT3aVgrrpU)
    - [ ] Sẽ không cài đặt. Cài đặt với mảng là điều hiển nhiên.

- ### Queue
    - [ ] [Queue (video)](https://www.coursera.org/lecture/data-structures/queues-EShpq)
    - [ ] [Circular buffer/FIFO](https://en.wikipedia.org/wiki/Circular_buffer)
    - [ ] [[Review] Queues in 3 minutes (video)](https://youtu.be/D6gu-_tmEpQ)
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
        - [ ] [PyCon 2017: The Dictionary Even Mightier (video)](https://www.youtube.com/watch?v=66P5FMkWoVU)
        - [ ] [(Advanced) Randomization: Universal & Perfect Hashing (video)](https://www.youtube.com/watch?v=z0lJ2k0sl1g&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=11)
        - [ ] [(Advanced) Perfect hashing (video)](https://www.youtube.com/watch?v=N0COwN14gt0&list=PL2B4EEwhKD-NbwZ4ezj7gyc_3yNrojKM9&index=4)
        - [ ] [[Review] Hash tables in 4 minutes (video)](https://youtu.be/knV86FlSXJ8)

    - [ ] Các khóa học online:
        - [ ] [Core Hash Tables - Cơ bản về bảng băm (video)](https://www.coursera.org/lecture/data-structures-optimizing-performance/core-hash-tables-m7UuP)
        - [ ] [Data Structures - Cấu trúc dữ liệu (video)](https://www.coursera.org/learn/data-structures/home/week/4)
        - [ ] [Phone Book Problem - Vấn đề sổ điện thoại (video)](https://www.coursera.org/lecture/data-structures/phone-book-problem-NYZZP)
        - [ ] distributed hash tables:
            - [Instant Uploads And Storage Optimization In Dropbox - Tải nhanh và tối ưu lưu trữ trong Dropbox (video)](https://www.coursera.org/lecture/data-structures/instant-uploads-and-storage-optimization-in-dropbox-DvaIb)
            - [Distributed Hash Tables - Phân phối bảng băm(video)](https://www.coursera.org/lecture/data-structures/distributed-hash-tables-tvH8H)

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
    - [ ] [giải thích chi tiết](https://www.topcoder.com/thrive/articles/Binary%20Search)
    - [ ] [blueprint](https://leetcode.com/discuss/general-discussion/786126/python-powerful-ultimate-binary-search-template-solved-many-problems)
    - [ ] [[Review] Binary search in 4 minutes (video)](https://youtu.be/fDKIpRe8GW4)
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
		- [ ] [Practice Operations](https://pconrad.github.io/old_pconrad_cs16/topics/bitOps/)
    - [ ] Phần bù 2 và phần bù 1 (2s and 1s complement)
        - [Nhị phân: Cộng và trừ (Tại sao chúng ta sử dụng phần bù 2) - video](https://www.youtube.com/watch?v=lKTsv6iVxV4)
        - [Phần bù 1 (1s Complement)](https://en.wikipedia.org/wiki/Ones%27_complement)
        - [Phần bù 2 (2s Complement)](https://en.wikipedia.org/wiki/Two%27s_complement)
    - [ ] Đếm tập hợp của các bit
        - [4 cách đê đếm các bit trong một byte - video](https://youtu.be/Hzuzo9NJrlc)
        - [Đếm bit](https://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetKernighan)
        - [Làm thế nào để đếm số lượng các bit 1 trong một số 32 bit](http://stackoverflow.com/questions/109023/how-to-count-the-number-of-set-bits-in-a-32-bit-integer)
    - [ ] Đôi giá trị:
        - [Swap](http://bits.stephan-brumme.com/swap.html)
    - [ ] Giá trị tuyệt đối:
        - [Giá trị tuyết đối của số nguyên](http://bits.stephan-brumme.com/absInteger.html)

## Cây

- ### Cây - Ghi chú và kiến thức nền
    - [ ] [Chuỗi bài giảng: Cây](https://www.coursera.org/lecture/data-structures/trees-95qda)
    - [ ] [Tree Traversal (video)](https://www.coursera.org/lecture/data-structures/tree-traversal-fr51b)
    - [ ] [BFS(breadth-first search) and DFS(depth-first search) (video)](https://www.youtube.com/watch?v=uWL6FJhq5fM)
        - BFS - Tìm kiếm ưu tiên chiều rộng (breadth-first search):
           - Các thứ tự duyệt (BFS, sử dụng queue)
           - Độ phức tạp thời gian: O(n)
           - Độ phức tạp không gian: tốt nhất: O(1), tệ nhất: O(n/2)=O(n)
        - DFS - Tìm kiếm ưu tiên chiều sâu (depth-first search)
            - Độ phức tạp thời gian: O(n)
            - Độ phức tạp không gian:
                tốt nhất: O(log n) - trung bình: bằng chiều cao của cây
                tệ nhất: O(n)
            - theo thứ tự (inorder) - (DFS: left, self, right)
            - nhánh con trước (postorder) - (DFS: left, right, self)
            - nhánh con sau (preorder) - (DFS: self, left, right)
    - [ ] [[Review] Breadth-first search in 4 minutes (video)](https://youtu.be/HZ5YTanv5QE)
    - [ ] [[Review] Depth-first search in 4 minutes (video)](https://youtu.be/Urx87-NMm6c)
    - [ ] [[Review] Tree Traversal (playlist) in 11 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZO1JC2RgEi04nLy6D-rKk6b)

- ### Cây tìm kiếm nhị phân: BST
    BST: Binary search tree - cây tìm kiếm nhị phân.
    - [ ] [Ôn lại cây tìm kiếm nhị phân - video](https://www.youtube.com/watch?v=x6At0nzX92o&index=1&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
    - [ ] [Dẫn nhập - video](https://www.coursera.org/learn/data-structures/lecture/E7cXP/introduction)
    - [ ] [MIT (video)](https://www.youtube.com/watch?v=76dhtgZt38A&ab_channel=MITOpenCourseWare)
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

        - [ ] [`insert` // thêm giá trị vào cây](https://leetcode.com/problems/insert-into-a-binary-search-tree/submissions/987660183/)
        - [ ] `get_node_count` // lấy số lượng nút trong cây
        - [ ] `print_values` // In ra gíá trị trong cây, từ nhỏ nhất đến lớn nhất
        - [ ] `delete_tree` // Xóa cây
        - [ ] `is_in_tree` // cho biết giá trị cho trước có tồn tại trong cây hay không
        - [ ] [ `get_height` // cho biết chiều cao của cây(chiều cao của node đơn là 1)](https://www.geeksforgeeks.org/find-the-maximum-depth-or-height-of-a-tree/)
        - [ ] `get_min` // cho biết giá trị nhỏ nhất trong cây
        - [ ] `get_max` // cho biết giá trị lớn nhất trong cây
        - [ ] [`is_binary_search_tree` // kiểm tra xem cây cho trước có thỏa mãn điều kiện của một BST không](https://leetcode.com/problems/validate-binary-search-tree/)
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
    - [ ] [Heap Sort - bắt đầu (video)](https://youtu.be/odNJmw5TOEE?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3291)
    - [ ] [Heap Sort (video)](https://www.coursera.org/lecture/data-structures/heap-sort-hSzMO)
    - [ ] [Xây dựng một heap - video](https://www.coursera.org/lecture/data-structures/building-a-heap-dwrOS)
    - [ ] [MIT: Heaps and Heap Sort (video)](https://www.youtube.com/watch?v=B7hVxCmfPtM&index=4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [CS 61B Lecture 24: Priority Queues (video)](https://archive.org/details/ucberkeley_webcast_yIUFT6AKBGE)
    - [ ] [Xây dựng Heap với thời gian tuyến tính `O(n)`](https://www.youtube.com/watch?v=MiyLo8adrWw)
    - [ ] [[Review] Heap (playlist) in 13 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZNsyqgPW-DNwUeT8F8uhWc6)
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
        - Bỏ qua sắp xếp nổi bọt (bubble sort) - nó rất tệ - O(n^2), trừ khi n <= 16
    - [ ] Tính ổn định của các thuật toán sắp xếp ("Sắp xếp nhanh (Quicksort) có ổn định không?")
        - [Tính ổn định của các thuật toán sắp xếp](https://en.wikipedia.org/wiki/Sorting_algorithm#Stability) (wiki)
        - [Tính ổn định trong các thuật toán sắp xếp](http://stackoverflow.com/questions/1517793/stability-in-sorting-algorithms) (stackoverflow)
        - [Tính ổn định trong các thuật toán sắp xếp](http://www.geeksforgeeks.org/stability-in-sorting-algorithms/) (geeksforgeeks)
        - [Các thuật toán sắp xếp - Tính ổn định](http://homepages.math.uic.edu/~leon/cs-mcs401-s08/handouts/stability.pdf) (pdf)
    - [ ] Các thuật toán nào có thể được sử dụng trên danh sách liên kết? mảng? cả hai?
        - Tôi không khuyến khích sắp xếp một danh sách liên kết, nhưng sắp xếp trộn (Merge Sort) có vẻ hữu dụng trong trường hợp đó.
        - [Sắp xếp trộn trên danh sách liên kết](http://www.geeksforgeeks.org/merge-sort-for-linked-list/)

- Với sắp xếp vun đống (Heapsort), xem lại cấu trúc Heap ở trên. Sắp xếp vun đống tốt, nhưng không ổn định.

- [ ] [Sedgewick - Mergesort (5 videos)](https://www.coursera.org/learn/algorithms-part1/home/week/3)
    - [ ] [1. Sắp xếp trộn (Merge Sort)](https://www.coursera.org/lecture/algorithms-part1/mergesort-ARWDq)
    - [ ] [2. Bottom-up Mergesort](https://www.coursera.org/learn/algorithms-part1/lecture/PWNEl/bottom-up-mergesort)
    - [ ] [3. Sorting Complexity](https://www.coursera.org/lecture/algorithms-part1/sorting-complexity-xAltF)
    - [ ] [4. Comparators](https://www.coursera.org/lecture/algorithms-part1/comparators-9FYhS)
    - [ ] [5. Stability](https://www.coursera.org/learn/algorithms-part1/lecture/pvvLZ/stability)

- [ ] [Sedgewick - Quicksort (4 videos)](https://www.coursera.org/learn/algorithms-part1/home/week/3)
    - [ ] [1. Quicksort](https://www.coursera.org/lecture/algorithms-part1/quicksort-vjvnC)
    - [ ] [2. Selection](https://www.coursera.org/lecture/algorithms-part1/selection-UQxFT)
    - [ ] [3. Duplicate Keys](https://www.coursera.org/lecture/algorithms-part1/duplicate-keys-XvjPd)
    - [ ] [4. System Sorts](https://www.coursera.org/lecture/algorithms-part1/system-sorts-QBNZ7)

- [ ] UC Berkeley:
    - [ ] [CS 61B Lecture 29: Sorting I (video)](https://archive.org/details/ucberkeley_webcast_EiUvYS2DT6I)
    - [ ] [CS 61B Lecture 30: Sorting II (video)](https://archive.org/details/ucberkeley_webcast_2hTY3t80Qsk)
    - [ ] [CS 61B Lecture 32: Sorting III (video)](https://archive.org/details/ucberkeley_webcast_Y6LOLpxg6Dc)
    - [ ] [CS 61B Lecture 33: Sorting V (video)](https://archive.org/details/ucberkeley_webcast_qNMQ4ly43p4)
    - [ ] [CS 61B 2014-04-21: Radix Sort(video)](https://archive.org/details/ucberkeley_webcast_pvbBMd-3NoI)


- [ ] [Sắp xếp nổi bọt (Bubble Sort) - video](https://www.youtube.com/watch?v=P00xJgWzz2c&index=1&list=PL89B61F78B552C1AB)
- [ ] [Phân tích thuật toán sắp xếp nổi bọt (Analyzing Bubble Sort) - video](https://www.youtube.com/watch?v=ni_zk257Nqo&index=7&list=PL89B61F78B552C1AB)
- [ ] [Sắp xếp chèn và sắp xếp trộn (Insertion Sort, Merge Sort) - video](https://www.youtube.com/watch?v=Kg4bqzAqRBM&index=3&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
- [ ] [Sắp xếp chèn (Insertion Sort) - video](https://www.youtube.com/watch?v=c4BRHC7kTaQ&index=2&list=PL89B61F78B552C1AB)
- [ ] [Sắp xếp trộn (Merge Sort) - video](https://www.youtube.com/watch?v=GCae1WNvnZM&index=3&list=PL89B61F78B552C1AB)
- [ ] [Sắp xếp nhanh (Quicksort) - video](https://www.youtube.com/watch?v=y_G9BkAm6B8&index=4&list=PL89B61F78B552C1AB)
- [ ] [Sắp xếp chọn (Selection Sort) - video](https://www.youtube.com/watch?v=6nDMgr0-Yyo&index=8&list=PL89B61F78B552C1AB)

- [ ] Code cho sắp xếp trộn (Merge sort):
    - [ ] [Sử dụng mảng đệm (C)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/sorting/mergesort.c)
    - [ ] [Sử dụng mảng đệm (Python)](https://github.com/jwasham/practice-python/blob/master/merge_sort/merge_sort.py)
    - [ ] [Sắp xếp tại chỗ, không dùng mảng đệm (C++)](https://github.com/jwasham/practice-cpp/blob/master/merge_sort/merge_sort.cc)
- [ ] Cài đặt cho sắp xếp nhanh (Quick sor):
    - [ ] [C](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/randomization/quick.c)
    - [ ] [Cài đặt khác dùng C](https://github.com/jwasham/practice-c/blob/master/quick_sort/quick_sort.c)
    - [ ] [Python](https://github.com/jwasham/practice-python/blob/master/quick_sort/quick_sort.py)

- [ ] [[Review] Sorting (playlist) in 18 minutes](https://www.youtube.com/playlist?list=PL9xmBV_5YoZOZSbGAXAPIq1BeUf4j20pl)
    - [ ] [Quick sort in 4 minutes (video)](https://youtu.be/Hoixgm4-P4M)
    - [ ] [Heap sort in 4 minutes (video)](https://youtu.be/2DmK_H7IdTo)
    - [ ] [Merge sort in 3 minutes (video)](https://youtu.be/4VqmGXwpLqc)
    - [ ] [Bubble sort in 2 minutes (video)](https://youtu.be/xli_FI7CuzA)
    - [ ] [Selection sort in 3 minutes (video)](https://youtu.be/g-PGLbMth_g)
    - [ ] [Insertion sort in 2 minutes (video)](https://youtu.be/JU767SDMDvA)

- [ ] Bài tập cài đặt:
    - [ ] Sắp xếp trộn: O(n log n) trường hợp trung bình và xấu nhất
    - [ ] Sắp xếp nhanh O(n log n) trường hợp trung bình
    - Sắp xếp chọn và sắp xếp chèn đều là O(n^2) cho trường hợp trung bình và xấu nhất.
    - Với sắp xếp vun đống, xem lại cấu trúc Heap ở trên.

- [ ] Không nhất thiết, nhưng tôi khuyến khích xem các phần sau:
    - [ ] [Sedgewick - Sắp xếp theo cơ số (Radix Sorts) (6 videos)](https://www.coursera.org/learn/algorithms-part2/home/week/3)
        - [ ] [1. Chuỗi trong Java (Strings in Java)](https://www.coursera.org/learn/algorithms-part2/lecture/vGHvb/strings-in-java)
        - [ ] [2. Đếm các khóa đã được lập chỉ mục (Key Indexed Counting)](https://www.coursera.org/lecture/algorithms-part2/key-indexed-counting-2pi1Z)
        - [ ] [3. Sắp xếp cơ số ưu tiên chữ số thấp nhất (Least Significant Digit First String Radix Sort)](https://www.coursera.org/learn/algorithms-part2/lecture/c1U7L/lsd-radix-sort)
        - [ ] [4. Sắp xếp cơ số ưu tiên chữ số cao nhất (Most Significant Digit First String Radix Sort)](https://www.coursera.org/learn/algorithms-part2/lecture/gFxwG/msd-radix-sort)
        - [ ] [5. 3-way Radix Quicksort](https://www.coursera.org/lecture/algorithms-part2/3-way-radix-quicksort-crkd5):  Sắp xếp cơ số kết hợp sắp xếp nhanh, trong đó, chỉ chia mảng ban đầu thành 3 nhóm (thay vì chia theo R nhóm trong sắp xếp cơ số thông thường).
        - [ ] [6. Mảng hậu tố (Suffix Arrays)](https://www.coursera.org/learn/algorithms-part2/lecture/TH18W/suffix-arrays)
    - [ ] [Sắp xếp cơ số (Radix Sort)](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#radixSort)
    - [ ] [Sắp xếp cơ số (Radix Sort)(video)](https://www.youtube.com/watch?v=xhr26ia4k38)
    - [ ] [Sắp xếp cơ số, sắp xếp đếm (Counting Sort, thực thi thời gian tuyến tính, nhưng có nhiều giới hạn đối với dự liệu)- video](https://www.youtube.com/watch?v=Nz1KZXbghj8&index=7&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [Sự ngẫu nhiên: Phép nhân ma trận, Sắp xếp nhanh và thuật toán của Freivalds - video](https://www.youtube.com/watch?v=cNB2lADK3_s&index=8&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [Sắp xếp trong thời gian tuyến tính (Sorting in Linear Time) - video](https://www.youtube.com/watch?v=pOKy3RZbSws&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=14)

Tóm lại, dưới đây là biểu đồ trực quan của [15 thuật toán sắp xếp](https://www.youtube.com/watch?v=kPRA0W1kECg).
Nếu bạn cần thêm chi tiết về chủ đề này, xem qua phần "Sắp xếp" trong [Đọc thêm về một số đề tài](#đọc-thêm-về-một-số-đề-tài)

## Đồ thị

Đồ thị có thể được sử dụng để miêu tả nhiều bài toán trong khoa học máy tính, vậy nên phần này cũng khá dài, tương đương với [Cây](#cây) và [Sắp xếp](#sắp-xếp).

- Ghi chú:
    - Có 4 cách cơ bản để biểu diễn một đồ thị trong bộ nhớ:
        - Các đối tượng (objects) và con trỏ (pointers)
        - ma trận kề
        - Danh sách kề (adjacency list)
        - bản đồ kề
    - Hãy làm quen với mỗi cách thể hiện và nắm vững ưu, nhược của nó.
    - BFS và DFS - biết về độ phức tạp tính toán của chúng, ước lượng những sự được và mất khi sử dụng, và cài đặt chúng như thế nào
    - Khi được trao cho một bài toán, hãy thử tìm một giải thuật sử dụng đồ thị trước khi nghĩ đến các hướng giải quyết khác.

- [ ] MIT(videos):
    - [ ] [Breadth-First Search](https://www.youtube.com/watch?v=oFVYVzlvk9c&t=14s&ab_channel=MITOpenCourseWare)
    - [ ] [Depth-First Search](https://www.youtube.com/watch?v=IBfWDYSffUU&t=32s&ab_channel=MITOpenCourseWare)

- [ ] Các bài giảng của giáo sư Skiena, tốt để dẫn nhập:
    - [ ] [CSE373 2020 - Lecture 10 - Graph Data Structures (video)](https://www.youtube.com/watch?v=Sjk0xqWWPCc&list=PLOtl7M3yp-DX6ic0HGT0PUX_wiNmkWkXx&index=10)
    - [ ] [CSE373 2020 - Lecture 11 - Graph Traversal (video)](https://www.youtube.com/watch?v=ZTwjXj81NVY&list=PLOtl7M3yp-DX6ic0HGT0PUX_wiNmkWkXx&index=11)
    - [ ] [CSE373 2020 - Lecture 12 - Depth First Search (video)](https://www.youtube.com/watch?v=KyordYB3BOs&list=PLOtl7M3yp-DX6ic0HGT0PUX_wiNmkWkXx&index=12)
    - [ ] [CSE373 2020 - Lecture 13 - Minimum Spanning Trees (video)](https://www.youtube.com/watch?v=oolm2VnJUKw&list=PLOtl7M3yp-DX6ic0HGT0PUX_wiNmkWkXx&index=13)
    - [ ] [CSE373 2020 - Lecture 14 - Minimum Spanning Trees (con't) (video)](https://www.youtube.com/watch?v=RktgPx0MarY&list=PLOtl7M3yp-DX6ic0HGT0PUX_wiNmkWkXx&index=14)
    - [ ] [CSE373 2020 - Lecture 15 - Graph Algorithms (con't 2) (video)](https://www.youtube.com/watch?v=MUe5DXRhyAo&list=PLOtl7M3yp-DX6ic0HGT0PUX_wiNmkWkXx&index=15)

- [ ] Đồ thị (ôn tập và mở rộng) (tên video được giữ nguyên vì có quá nhiều thuật ngữ và viết tắt):

    - [ ] [6.006 Single-Source Shortest Paths Problem (video)](https://www.youtube.com/watch?v=Aa2sqUhIn-E&index=15&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [6.006 Dijkstra (video)](https://www.youtube.com/watch?v=NSHizBK9JD8&t=1731s&ab_channel=MITOpenCourseWare)
    - [ ] [6.006 Bellman-Ford (video)](https://www.youtube.com/watch?v=f9cVS_URPc0&ab_channel=MITOpenCourseWare)
    - [ ] [6.006 Speeding Up Dijkstra (video)](https://www.youtube.com/watch?v=CHvQ3q_gJ7E&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=18)
    - [ ] [Aduni: Graph Algorithms I - Topological Sorting, Minimum Spanning Trees, Prim's Algorithm -  Lecture 6 (video)]( https://www.youtube.com/watch?v=i_AQT_XfvD8&index=6&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
    - [ ] [Aduni: Graph Algorithms II - DFS, BFS, Kruskal's Algorithm, Union Find Data Structure - Lecture 7 (video)]( https://www.youtube.com/watch?v=ufj5_bppBsA&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=7)
    - [ ] [Aduni: Graph Algorithms III: Shortest Path - Lecture 8 (video)](https://www.youtube.com/watch?v=DiedsPsMKXc&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=8)
    - [ ] [Aduni: Graph Alg. IV: Intro to geometric algorithms - Lecture 9 (video)](https://www.youtube.com/watch?v=XIAQRlNkJAw&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=9)
    - [ ] [CS 61B 2014: Weighted graphs (video)](https://archive.org/details/ucberkeley_webcast_zFbq8vOZ_0k)
    - [ ] [Greedy Algorithms: Minimum Spanning Tree (video)](https://www.youtube.com/watch?v=tKwnms5iRBU&index=16&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [Strongly Connected Components Kosaraju's Algorithm Graph Algorithm (video)](https://www.youtube.com/watch?v=RpgcYiky7uw)
    - [ ] [[Review] Shortest Path Algorithms (playlist) in 16 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZO-Y-H3xIC9DGSfVYJng9Yw)
    - [ ] [[Review] Minimum Spanning Trees (playlist) in 4 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZObEi3Hf6lmyW-CBfs7nkOV)

- Khóa học đầy đủ về đồ thị trên Coursera:
    - [ ] [Các thuật toán trên đồ thị (video)](https://www.coursera.org/learn/algorithms-on-graphs/home/welcome)

- Yegge: Nếu bạn có cơ hội, hãy thử nghiên cứu các thuật toán đẹp hơn:
    - [ ] Thuật toán tìm đường đi ngắn nhất của Dijkstra - xem phần trên - 6.006
    - [ ] A*
        - [ ] [Thuật toán tìm kiếm A sao (A*)](https://en.wikipedia.org/wiki/A*_search_algorithm)
        - [ ] [Hướng dẫn cài đặt thuật toán tìm đường đi A* - video](https://www.youtube.com/watch?v=KNXfSOx4eEE)
        - [ ] [Thuật toán tìm đường A* (E01: giải thích thuật toán) - video](https://www.youtube.com/watch?v=-L-WgKMFuhE)

- Tôi sẽ viết code cài đặt:
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
        - [ ] [Đệ quy đuôi (Tail Recursion) (video)](https://www.coursera.org/lecture/programming-languages/tail-recursion-YZic1)
    - [ ] [5 bước đơn giản để giải quyết bất kỳ vấn đề đệ quy(video)](https://youtu.be/ngCos392W4w)

	Backtracking Blueprint: [Java](https://leetcode.com/problems/combination-sum/discuss/16502/A-general-approach-to-backtracking-questions-in-Java-(Subsets-Permutations-Combination-Sum-Palindrome-Partitioning))
	[Python](https://leetcode.com/problems/combination-sum/discuss/429538/General-Backtracking-questions-solutions-in-Python-for-reference-%3A)

- ### Quy hoạch động
    - Có thể bạn sẽ không gặp bất kỳ vấn đề lập trình động nào trong cuộc phỏng vấn của mình, nhưng đáng giá để nhận biết một
    vấn đề có thể là ứng cử viên cho lập trình động.
    - Chủ đề này có thể khá khó khăn, vì mỗi vấn đề có thể giải quyết bằng DP (Dynamic Programming) phải được định rõ là một mối quan hệ đệ quy, và việc đưa ra nó có thể khá khó khăn.
    - Tôi đề nghị xem nhiều ví dụ về các vấn đề DP cho đến khi bạn có sự hiểu biết vững chắc về mô hình liên quan.

    - [ ] Video:
        - [ ] [Skiena: CSE373 2020 - Lecture 19 - Introduction to Dynamic Programming (video)](https://www.youtube.com/watch?v=wAA0AMfcJHQ&list=PLOtl7M3yp-DX6ic0HGT0PUX_wiNmkWkXx&index=18)
        - [ ] [Skiena: CSE373 2020 - Lecture 20 - Edit Distance (video)](https://www.youtube.com/watch?v=T3A4jlHlhtA&list=PLOtl7M3yp-DX6ic0HGT0PUX_wiNmkWkXx&index=19)
        - [ ] [Skiena: CSE373 2020 - Lecture 20 - Edit Distance (continued) (video)](https://www.youtube.com/watch?v=iPnPVcZmRbE&list=PLOtl7M3yp-DX6ic0HGT0PUX_wiNmkWkXx&index=20)
        - [ ] [Skiena: CSE373 2020 - Lecture 21 - Dynamic Programming (video)](https://www.youtube.com/watch?v=2xPE4Wq8coQ&list=PLOtl7M3yp-DX6ic0HGT0PUX_wiNmkWkXx&index=21)
        - [ ] [Skiena: CSE373 2020 - Lecture 22 - Dynamic Programming and Review (video)](https://www.youtube.com/watch?v=Yh3RzqQGsyI&list=PLOtl7M3yp-DX6ic0HGT0PUX_wiNmkWkXx&index=22)
        - [ ] [Simonson: Dynamic Programming 0 (starts at 59:18) (video)](https://youtu.be/J5aJEcOr6Eo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3558)
        - [ ] [Simonson: Dynamic Programming I - Lecture 11 (video)](https://www.youtube.com/watch?v=0EzHjQ_SOeU&index=11&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [Simonson: Dynamic programming II - Lecture 12 (video)](https://www.youtube.com/watch?v=v1qiRwuJU7g&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=12)
        - [ ] List of individual DP problems (each is short):
            [Dynamic Programming (video)](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)
    - [ ] Ghi chú cho các bài giảng của đại học Yale:
        - [ ] [Dynamic Programming](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#dynamicProgramming)
    - [ ] Coursera:
        - [ ] [The RNA secondary structure problem (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/80RrW/the-rna-secondary-structure-problem)
        - [ ] [A dynamic programming algorithm (video)](https://www.coursera.org/lecture/algorithmic-thinking-2/a-dynamic-programming-algorithm-PSonq)
        - [ ] [Illustrating the DP algorithm (video)](https://www.coursera.org/lecture/algorithmic-thinking-2/illustrating-the-dp-algorithm-oUEK2)
        - [ ] [Running time of the DP algorithm (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/nfK2r/running-time-of-the-dp-algorithm)
        - [ ] [DP vs. recursive implementation (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/M999a/dp-vs-recursive-implementation)
        - [ ] [Global pairwise sequence alignment (video)](https://www.coursera.org/lecture/algorithmic-thinking-2/global-pairwise-sequence-alignment-UZ7o6)
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
    - [ ] [Series of videos (27 videos)](https://www.youtube.com/playlist?list=PLF206E906175C7E07)
    - [ ] [Book: Head First Design Patterns](https://www.amazon.com/Head-First-Design-Patterns-Freeman/dp/0596007124)
        - Tôi biết có một cuốn sách kinh điển là "Design Patterns: Elements of Reusable Object-Oriented Software" nhưng cuốn Bắt đầu với thiết kế mẫu(Head First Design Patterns) là một lựa chọn tuyệt vời cho người mới bắt đầu với OO.
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
    - Hiểu được NP-complete nghĩa là gì.
    - [ ] [Tính toán độ phức tạp (Computational Complexity) (video)](https://www.youtube.com/watch?v=moPtwq_cVH8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=23)
    - [ ] Simonson:
        - [ ] [Thuật toán tham lam và giới thiệu NP-complete (Greedy Algs. II & Intro to NP Completeness) (video)](https://youtu.be/qcGnJ47Smlo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=2939)
        - [ ] [NP Completeness II & Reductions (video)](https://www.youtube.com/watch?v=e0tGC6ZQdQE&index=16&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [NP Completeness III (Video)](https://www.youtube.com/watch?v=fCX1BGT3wjE&index=17&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [NP Completeness IV (video)](https://www.youtube.com/watch?v=NKLDp3Rch3M&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=18)
    - [ ] Skiena:
        - [ ] [CSE373 2020 - Lecture 23 - NP-Completeness (video)](https://www.youtube.com/watch?v=ItHp5laE1VE&list=PLOtl7M3yp-DX6ic0HGT0PUX_wiNmkWkXx&index=23)
        - [ ] [CSE373 2020 - Lecture 24 - Satisfiability (video)](https://www.youtube.com/watch?v=inaFJeCzGxU&list=PLOtl7M3yp-DX6ic0HGT0PUX_wiNmkWkXx&index=24)
        - [ ] [CSE373 2020 - Lecture 25 - More NP-Completeness (video)](https://www.youtube.com/watch?v=B-bhKxjZLlc&list=PLOtl7M3yp-DX6ic0HGT0PUX_wiNmkWkXx&index=25)
        - [ ] [CSE373 2020 - Lecture 26 - NP-Completeness Challenge (video)](https://www.youtube.com/watch?v=_EzetTkG_Cc&list=PLOtl7M3yp-DX6ic0HGT0PUX_wiNmkWkXx&index=26)
    - [ ] [Độ phức tạp: P, NP, NP-completeness, giảm (Complexity: P, NP, NP-completeness, Reductions) (video)](https://www.youtube.com/watch?v=eHZifpgyH_4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=22)
    - [ ] [Độ phức tạp: Thuật toán gần đúng (Complexity: Approximation Algorithms) (video)](https://www.youtube.com/watch?v=MEz1J9wY2iM&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=24)
    - [ ] [Độ phức tạp: Thuật toán cố định tham số (Complexity: Fixed-Parameter Algorithms) (video)](https://www.youtube.com/watch?v=4q-jmGrmxKs&index=25&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - Peter Norvig đã trình bày thuật toán gần tối ưu cho vấn đề di chuyển của doanh nhân:
        - [Jupyter Notebook](http://nbviewer.jupyter.org/url/norvig.com/ipython/TSP.ipynb)
    - Trang 1048 - 1140 trong CLRS nếu bạn có nó.

- ### Cách máy tính xử lý một chương trình

    - [ ] [Cách CPU thực thi một chương trình (video)](https://www.youtube.com/watch?v=XM4lGflQFvA)
    - [ ] [Cách máy tính tính toán - ALU (video)](https://youtu.be/1I5ZMmrOfnA)
    - [ ] [Các thanh ghi và RAM (video)](https://youtu.be/fpnE6UAfbtU)
    - [ ] [Bộ xử lý trung tâm (CPU) (video)](https://youtu.be/FZGugFqdr60)
    - [ ] [Hướng dẫn và Chương trình (video)](https://youtu.be/zltgXvg6r3k)

- ### Bộ nhớ cache
    - [ ] LRU cache:
        - [ ] [Điều kì diệu của LRU cache (100 ngày Google Dev) (The Magic of LRU Cache (100 Days of Google Dev)) (video)](https://www.youtube.com/watch?v=R5ON3iwx78M)
        - [ ] [Triển khai LRU(Implementing LRU) (video)](https://www.youtube.com/watch?v=bq6N7Ym81iI)
        - [ ] [LeetCode - 146 LRU Cache (C++) (video)](https://www.youtube.com/watch?v=8-FZRAjR7qU)
    - [ ] CPU cache:
        - [ ] [MIT 6.004 L15: Phân cấp bộ nhớ (The Memory Hierarchy) (video)](https://www.youtube.com/watch?v=vjYF_fAZI5E&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-&index=24)
        - [ ] [MIT 6.004 L16: Các vấn đề với bộ nhớ cache (Cache Issues) (video)](https://www.youtube.com/watch?v=ajgC3-pyGlk&index=25&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-)

- ### Process và Thread
    - [ ] Khóa học "Khoa học máy tính 162 - Hệ điều hành" (25 video):
        - Về Process và Thread, xem video 1-11
        - [Hệ điều hành và lập trình hệ thống (video)](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iBDyz-ba4yDskqMDY6A1w_c)
    - [Sự khác nhau giữa một Process và một Thread?](https://www.quora.com/What-is-the-difference-between-a-process-and-a-thread)
    - Học các chủ đề dưới đây:
        - Các vấn đề của Process, Thread và xử lý đồng thời
            - Sự khác nhau giữa Process và Thread
            - Process
            - Thread
            - Locks
            - Mutexes
            - Semaphores
            - Monitors
            - Cách chúng hoạt động
            - Deadlock
            - Livelock
        - Hoạt động của CPU, ngắt, chuyển ngữ cảnh
        - Các kiến trúc xử lý đồng thời được sử dụng cùng với các bộ xử lý đa lõi
        - [Paging, segmentation, và virtual memory (video)](https://youtu.be/O4nwUqQodAg)
        - [Interrupts (video)](https://youtu.be/iKlAWIKEyuw)
        - Tài nguyên mà Process cần: (bộ nhớ: các đoạn code, bộ lưu trữ tĩnh, stack, heap cũng như các mô tả của tập tin, nhập/xuất)
        - Tài nguyên mà Thread cần: (chia sẻ các tài nguyên được liệt kê ở trên (trừ stack) với các Thread khác trong cùng Process nhưng mỗi Thread có program counter, stack counter, thanh ghi (registers) và stack của riêng chúng)
        - Forking thực ra là [copy on write](https://en.wikipedia.org/wiki/Copy-on-write) cho đến khi Process mới ghi vào bộ nhớ, sau đó nó thực hiện hành đồng full copy.
        - Chuyển ngữ cảnh
            - [Chuyển ngữ cảnh được bắt đầu như thế nào bởi hệ điều hành và phần cứng bên dưới](https://www.javatpoint.com/what-is-the-context-switching-in-the-operating-system)
    - [ ] [Thread trong C++ (danh sách 10 video)](https://www.youtube.com/playlist?list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M)
    - [ ] [CS 377 Spring '14: Operating Systems from University of Massachusetts](https://www.youtube.com/playlist?list=PLacuG5pysFbDQU8kKxbUh4K5c1iL5_k7k)
    - [ ] Xử lý đồng thời trong Python (video):
        - [ ] [Danh sách ngắn các video về Thread (Short series on threads)](https://www.youtube.com/playlist?list=PL1H1sBF1VAKVMONJWJkmUh6_p8g4F2oy1)
        - [ ] [Thread của Python (Python Threads)](https://www.youtube.com/watch?v=Bs7vPNbB9JM)
        - [ ] [Hiểu rõ về Python GIL (Understanding the Python GIL (2010))](https://www.youtube.com/watch?v=Obt-vMVdM8s)
            - [Tham khảo](http://www.dabeaz.com/GIL)
        - [ ] [David Beazley - Căn bản về xử lý đồng thời trong Python: TRỰC TIẾP! - PyCon 2015 (David Beazley - Python Concurrency From the Ground Up: LIVE! - PyCon 2015)](https://www.youtube.com/watch?v=MCs5OvhV9S4)
        - [ ] [Các điểm chính trong phần trình bày của David Beazley - Các vấn đề thú vị (Python Asyncio) (Keynote David Beazley - Topics of Interest (Python Asyncio))](https://www.youtube.com/watch?v=ZzfHjytDceU)
        - [ ] [Mutex trong Python (Mutex in Python)](https://www.youtube.com/watch?v=0zaPs8OtyKY)

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
    - [ ] Dependency injection:
        - [ ] [video](https://www.youtube.com/watch?v=IKD2-MAkXyQ)
        - [ ] [Đạo trong kiểm tra (Tao Of Testing)](http://jasonpolites.github.io/tao-of-testing/ch3-1.1.html)
    - [ ] [Viết test thế nào(How to write tests)](http://jasonpolites.github.io/tao-of-testing/ch4-1.1.html)


- ### Tìm kiếm và xử lý chuỗi
    - [ ] [Sedgewick - Mảng tiền tố (Suffix Arrays) (video)](https://www.coursera.org/learn/algorithms-part2/lecture/TH18W/suffix-arrays)
    - [ ] [Sedgewick - Tìm và thay chuỗi (Substring Search) (videos)](https://www.coursera.org/learn/algorithms-part2/home/week/4)
        - [ ] [1. Giới thiệu tìm và thay chuỗi (Introduction to Substring Search)](https://www.coursera.org/lecture/algorithms-part2/introduction-to-substring-search-n3ZpG)
        - [ ] [2. Tìm và thay chuỗi theo Brute-Force (Brute-Force Substring Search)](https://www.coursera.org/learn/algorithms-part2/lecture/2Kn5i/brute-force-substring-search)
        - [ ] [3. Knuth-Morris Pratt](https://www.coursera.org/learn/algorithms-part2/lecture/TAtDr/knuth-morris-pratt)
        - [ ] [4. Boyer-Moore](https://www.coursera.org/learn/algorithms-part2/lecture/CYxOT/boyer-moore)
        - [ ] [5. Rabin-Karp](https://www.coursera.org/lecture/algorithms-part2/rabin-karp-3KiqT)
    - [ ] [Tìm kiếm mẫu trong văn bản (Search pattern in text) (video)](https://www.coursera.org/learn/data-structures/lecture/tAfHI/search-pattern-in-text)

    Nếu bạn cần thêm thông tin chi tiết, hãy đọc qua phần "So khớp chuỗi" trong các mục đọc thêm [Đọc thêm về một số đề tài](#đọc-thêm-về-một-số-đề-tài)

- ### Tries
    > Tries: cấu trúc dữ liệu dạng cây cho phép _chèn_ và _tìm kiếm_ một chuỗi con nhanh (`O(L)`) và một vài lợi thế khác, thích hợp cho một số dạng toán xử lý chuỗi.
    - Chú ý rằng có những loại _trie_ khác nhau. Một vài có tiền tố (prefix), một vài loại thì không, và một số thì sử dụng chuỗi thay vì bit để lưu trử các con đường (từ gốc đến lá).
    - Tôi đã đọc qua code, nhưng sẽ không thực hiện

    - [ ] [Sedgewick - Tries (3 videos)](https://www.coursera.org/learn/algorithms-part2/home/week/4)
        - [ ] [1. R Way Tries](https://www.coursera.org/learn/algorithms-part2/lecture/CPVdr/r-way-tries)
        - [ ] [2. Ternary Search Tries](https://www.coursera.org/learn/algorithms-part2/lecture/yQM8K/ternary-search-tries)
        - [ ] [3. Character Based Operations](https://www.coursera.org/learn/algorithms-part2/lecture/jwNmV/character-based-operations)
    - [ ] [Notes on Data Structures and Programming Techniques](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Tries)
    - [ ] Các khóa video ngắn:
        - [ ] [Introduction To Tries (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/08Xyf/core-introduction-to-tries)
        - [ ] [Performance Of Tries (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/PvlZW/core-performance-of-tries)
        - [ ] [Implementing A Trie (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/DFvd3/core-implementing-a-trie)
    - [ ] [The Trie: A Neglected Data Structure](https://www.toptal.com/java/the-trie-a-neglected-data-structure)
    - [ ] [TopCoder - Using Tries](https://www.topcoder.com/thrive/articles/Using%20Tries)
    - [ ] [Stanford Lecture (real-world use case) (video)](https://www.youtube.com/watch?v=TJ8SkcUSdbU)
    - [ ] [MIT, Advanced Data Structures, Strings (can get pretty obscure about halfway through)](https://www.youtube.com/watch?v=NinWEPPrkDQ&index=16&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf)

- ### Cách biểu diễn số thực
    - [ ] Dạng 8-bit đơn giản: [Representation of Floating Point Numbers - 1 (video - có một lỗi nhỏ trong phần tính toán, xem thêm ở bên dưới video)](https://www.youtube.com/watch?v=ji3SfClm8TU)

- ### Unicode
    - [ ] [Điểu tối thiểu nhất mà mọi lập trình viên bắt buộc phải biết về Unicode và các tập ký tự.]( http://www.joelonsoftware.com/articles/Unicode.html)
    - [ ] [Điều mà mọi lập trình viên nên biết về mã hóa ký tự và tập ký tự để làm việc với văn bản](http://kunststube.net/encoding/)

- ### Endianness

    > Endianness: thứ tự phiên dịch các byte của một chuỗi byte trong bộ nhớ máy tính sang dạng số (4 byte với `int` hoặc 8 byte với `double`). Ví dụ như với 2 byte `0x00` và `0x01` lưu trên bộ nhớ, đọc theo Big-Endian ta được số 1 (0x00001. Đọc theo Little-Endia ta được 256 (0x100). Xem thêm ở các đường link bên duới.

    - [ ] [Big And Little Endian](https://web.archive.org/web/20180107141940/http://www.cs.umd.edu:80/class/sum2003/cmsc311/Notes/Data/endian.html)
    - [ ] [Big Endian Vs Little Endian (video)](https://www.youtube.com/watch?v=JrNF0KRAlyo)
    - [ ] [Big And Little Endian Inside/Out (video)](https://www.youtube.com/watch?v=oBSuXP-1Tc0)
        - Rất nặng về mặt kỹ thuật, dành cho các lập trình viên làm việc với nhân Linux (kernels).
        - Đừng quá bận tâm nếu phần lớn video vượt quá khả năng của bạn. Chỉ cần đoạn nửa đầu video là đủ.

- ### Mạng máy tính
    - **Nếu bạn có kinh nghiệm với mạng máy tính hoặc muốn trở thành một kỹ sư hệ thống, sẽ có các câu hỏi về chúng**
    - còn nếu không, biết thêm cũng tốt
    - [ ] [Khan Academy](https://www.khanacademy.org/computing/code-org/computers-and-the-internet)
    - [ ] [UDP and TCP: Comparison of Transport Protocols (video)](https://www.youtube.com/watch?v=Vdc8TCESIg8)
    - [ ] [TCP/IP and the OSI Model Explained! (video)](https://www.youtube.com/watch?v=e5DEVa9eSN0)
    - [ ] [Packet Transmission across the Internet. Networking & TCP/IP tutorial. (video)](https://www.youtube.com/watch?v=nomyRJehhnM)
    - [ ] [HTTP (video)](https://www.youtube.com/watch?v=WGJrLqtX7As)
    - [ ] [SSL and HTTPS (video)](https://www.youtube.com/watch?v=S2iBR2ZlZf0)
    - [ ] [SSL/TLS (video)](https://www.youtube.com/watch?v=Rp3iZUvXWlM)
    - [ ] [HTTP 2.0 (video)](https://www.youtube.com/watch?v=E9FxNzv1Tr8)
    - [ ] [Video Series (21 videos) (video)](https://www.youtube.com/playlist?list=PLEbnTDJUr_IegfoqO4iPnPYQui46QqT0j)
    - [ ] [Subnetting Demystified - Part 5 CIDR Notation (video)](https://www.youtube.com/watch?v=t5xYI0jzOf4)
    - [ ] Sockets:
        - [ ] [Java - Sockets - Introduction (video)](https://www.youtube.com/watch?v=6G_W54zuadg&t=6s)
        - [ ] [Socket Programming (video)](https://www.youtube.com/watch?v=G75vN2mnJeQ)

---

## Tổng kết

    Phần này sẽ là các video ngắn đề bạn ôn tập lại hầu hết các khái niệm quan trọng.
    Cũng tốt nếu như bạn muốn bồi dưỡng thường xuyên.

- [ ] Các video ngắn 2-3 phút (23 video)
    - [Videos](https://www.youtube.com/watch?v=r4r1DZcx1cM&list=PLmVb1OknmNJuC5POdcDv5oCS7_OUkDgpj&index=22)
- [ ] Các video ngắn 2-5 phút - Michael Sambol (48 video)
    - [Videos](https://www.youtube.com/@MichaelSambol)
    - [Code Examples](https://github.com/msambol/dsa)
- [ ] [Sedgewick Videos - Algorithms I](https://www.coursera.org/learn/algorithms-part1)
- [ ] [Sedgewick Videos - Algorithms II](https://www.coursera.org/learn/algorithms-part2)

---


## Lý lịch (Resume) của bạn

- Xem thông tin chuẩn bị CV trong các sách: "Cracking The Coding Interview" và "Programming Interviews Exposed"
- ["Đây là những gì một CV TỐT nên có" của Gayle McDowell (tác giả của Cracking the Coding Interview)](https://www.careercup.com/resume),
    - Lưu ý của tác giả: "Đây là cho một CV tập trung cho nước Mỹ. CV cho Ấn Độ và các quốc gia khác có những kỳ vọng khác nhau, mặc dù nhiều điểm sẽ giống nhau."
- ["Hướng dẫn từng bước để tạo CV" của Tech Interview Handbook](https://www.techinterviewhandbook.org/resume/guide)
    - Hướng dẫn chi tiết về cách thiết lập CV của bạn từ đầu, viết nội dung CV hiệu quả, tối ưu hóa nó, và kiểm tra CV của bạn

## Khi bạn tiến gần đến kỳ phỏng vấn

- [ ] Cracking The Coding Interview, Phần 2 (video):
    - [Cracking The Code Interview](https://www.youtube.com/watch?v=4NIb9l3imAo)
    - [Cracking the Coding Interview - Fullstack Speaker Series](https://www.youtube.com/watch?v=Eg5-tdAwclo)


## Quy trình phỏng vấn & các bước chuẩn bị tổng quát

- [ ] [Cách vượt qua cuộc phỏng vấn kỹ thuật năm 2021](https://davidbyttow.medium.com/how-to-pass-the-engineering-interview-in-2021-45f1b389a1)
- [ ] [Làm rõ việc tuyển dụng kỹ thuật](https://www.youtube.com/watch?v=N233T0epWTs)
- [ ] Cách nhận việc tại Big 4:
    - [ ] [Cách nhận việc tại Big 4 - Amazon, Facebook, Google & Microsoft (video)](https://www.youtube.com/watch?v=YJZCUhxNCv8)
    - [ ] [Cách nhận việc tại Big 4.1 (Video tiếp theo)](https://www.youtube.com/watch?v=6790FVXWBw8&feature=youtu.be)
- [ ] Bộ Cracking The Coding Interview 1:
    - [ ] [Gayle L McDowell - Cracking The Coding Interview (video)](https://www.youtube.com/watch?v=rEJzOhC5ZtQ)
    - [ ] [Cracking the Coding Interview với tác giả Gayle Laakmann McDowell (video)](https://www.youtube.com/watch?v=aClxtDcdpsQ)
- [ ] Cracking the Facebook Coding Interview:
    - [ ] [Phương pháp tiếp cận](https://www.youtube.com/watch?v=wCl9kvQGHPI)
    - [ ] [Hướng dẫn giải quyết vấn đề](https://www.youtube.com/watch?v=4UWDyJq8jZg)

- Các khóa học chuẩn bị:
    - [Python cho Cấu trúc dữ liệu, Thuật toán, và Phỏng vấn (khóa học trả phí)](https://www.udemy.com/python-for-data-structures-algorithms-and-interviews/):
        - Một khóa học chuẩn bị phỏng vấn tập trung vào Python, bao gồm cấu trúc dữ liệu, thuật toán, phỏng vấn giả lập, và nhiều hơn nữa.
    - [Giới thiệu về Cấu trúc dữ liệu và Thuật toán sử dụng Python (khóa học miễn phí của Udacity)](https://www.udacity.com/course/data-structures-and-algorithms-in-python--ud513):
        - Một khóa học miễn phí tập trung vào Python về cấu trúc dữ liệu và thuật toán.
    - [Nanodegree Cấu trúc dữ liệu và Thuật toán! (Nanodegree trả phí của Udacity)](https://www.udacity.com/course/data-structures-and-algorithms-nanodegree--nd256):
        - Nhận thực hành trực tiếp với hơn 100 bài tập về cấu trúc dữ liệu và thuật toán và hướng dẫn từ một người hướng dẫn chuyên dụng để giúp bạn chuẩn bị cho phỏng vấn và tình huống trong công việc.
    - [Hiểu rõ Phỏng vấn Hành vi (khóa học miễn phí của Educative)](https://www.educative.io/courses/grokking-the-behavioral-interview):
        - Nhiều lần, không phải năng lực kỹ thuật của bạn ngăn bạn không nhận được công việc mơ ước, mà là cách bạn thể hiện hành vi trong phỏng vấn.
    - [AlgoMonster (khóa học trả phí với nội dung miễn phí)](https://algo.monster/?utm_campaign=jwasham&utm_medium=referral&utm_content=coding-interview-university&utm_source=github):
      - Khóa học tóm tắt cho LeetCode. Bao gồm tất cả các mô hình được tóm gọn từ hàng nghìn câu hỏi.

Phỏng vấn mô phỏng:
- [Gainlo.co: Người phỏng vấn mô phỏng từ các công ty lớn](http://www.gainlo.co/#!/) - Tôi đã sử dụng dịch vụ này và nó giúp tôi thư giãn cho phần phỏng vấn qua điện thoại và phỏng vấn trực tiếp
- [Pramp: Phỏng vấn mô phỏng từ/ với đồng nghiệp](https://www.pramp.com/) - một mô hình ngang hàng để thực hành phỏng vấn
- [interviewing.io: Thực hành phỏng vấn mô phỏng với các kỹ sư hàng đầu](https://interviewing.io) - phỏng vấn mô phỏng về thiết kế thuật toán/hệ thống với các kỹ sư hàng đầu từ FAANG một cách ẩn danh
- [Meetapro: Phỏng vấn mô phỏng với những người phỏng vấn hàng đầu từ FAANG](https://meetapro.com/?utm_source=ciu) - một nền tảng phỏng vấn mô phỏng/phỏng vấn theo phong cách Airbnb.
- [Hello Interview: Phỏng vấn mô phỏng với các huấn luyện viên chuyên nghiệp và AI](https://www.hellointerview.com/?utm_source=ciu) - phỏng vấn trực tiếp với AI hoặc với các kỹ sư và quản lý từ FAANG.

## Hãy nghĩ đến những thứ bạn sẽ được hỏi

Nghĩ sẵn 20 câu hỏi kỹ thuật bạn có thể gặp phải, cùng với danh sách bên dưới.
Chuẩn bị 2 đến 3 câu trả lời cho mỗi câu hỏi. Hãy chuẩn bị cả câu chuyện (từ chính kinh nghiệm của bạn), chứ không chỉ một câu trả lời suông.

- Tại sao bạn lại muốn ứng tuyển vị trí này?
- Vấn đề khó chịu nhất bạn từng giải quyết là gì?
- Thử thách lớn nhất bạn từng đối mặt?
- Thiết kế (hệ thống) tốt nhất/tồi nhất bạn từng gặp?
- Những ý tưởng để cải thiện các sản phẩm hiện có.
- Bạn sẽ làm việc như thế nào để đạt hiệu quả tốt nhất, trong trường hợp làm việc một mình và làm theo team?
- Kỹ năng hay kinh nghiệm nào của bạn thích hợp cho công việc này, và tại sao?
- Bạn thích điều gì nhất ở [công việc X/ dự án Y]?
- Thách thức lớn nhất bạn từng gặp phải ở [công việc X/ dự án Y]?
- Lỗi lớn nhất bạn từng gặp phải ở [công việc X/ dự án Y]?
- Bạn học được những gì ở [công việc X/ dự án Y]?
- Những gì bạn cho rằng mình đã có thể làm tốt hơn ở [công việc X/ dự án Y]?

## Chuẩn bị câu hỏi dành cho phỏng vấn viên

Một vài câu hỏi của tôi (Tôi có thể đã tìm hiểu trước rồi, nhưng vẫn muốn được nghe ý kiến từ góc nhìn của người phỏng vấn):

- Quy mô của team thế nào?
- Quy trình phát triển của bạn? Waterfall/sprints/agile?
- Áp lực deadline có phổ biến không? Liệu có sự linh hoạt nào không?
- Các quyết định của team được xây dựng như thế nào?
- Khoảng bao nhiêu cuộc họp hàng tuần?
- Bạn có cảm thấy môi trường làm việc của bạn giúp bạn tập trung không?
- Hiện tại bạn đang làm gì?
- Bạn thích gì ở công việc này?
- Cuộc sống làm việc như thế nào?
- Sự cân bằng giữa công việc và cuộc sống của bạn ra sao?

## Khi bạn được nhận việc

Chúc mừng!

Hãy tiếp tục rèn luyện.

Bạn không bao giờ thực sự học xong!


---

    *****************************************************************************************************
    *****************************************************************************************************

    Mọi thứ dưới đây là tùy chọn. Nó không cần thiết cho một cuộc phỏng vấn ở cấp độ mới vào nghề.
    Tuy nhiên, bằng cách nghiên cứu những điều này, bạn sẽ tiếp xúc nhiều hơn với các khái niệm CS và sẽ được chuẩn bị tốt hơn
    cho bất kỳ công việc kỹ sư phần mềm nào. Bạn sẽ trở thành một kỹ sư phần mềm toàn diện hơn.

    *****************************************************************************************************
    *****************************************************************************************************

---

## Sách bổ sung

    Đây là nơi bạn có thể đào sâu vào các chủ đề bạn thấy hứng thú

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
            - Đây là lý do thực sự bạn mua cuốn sách này.
            - Cuốn sách này tốt hơn khi được sử dụng như một tài liệu tham khảo về thuật toán, chứ không phải là một thứ bạn đọc từ đầu đến cuối.
    - Trích dẫn từ Yegge: "Hơn hẳn những quyến sách khác, cuốn này giúp tôi hiểu rõ các bài toán về Graph phổ biến một cách đáng kinh ngạc và quan trọng như thế nào - chúng nên là một phần trong các công cụ của bất kỳ lập trình viên nào. Quyển sách đồng thời cũng bao phủ các cấu trúc dữ liệu cơ bản, các thuật toán sắp xếp. Đó là một điểm cộng. Nhưng phần quý giá thật sự nằm ở nửa sau, chính là bách khoa toàn thư ngắn gọn về hàng triệu bài toán hữu dụng và vô số cách để giải quyết chúng, trình bày sơ lược. Mỗi trang đều có một hình minh họa, giúp người đọc dễ ghi nhớ hơn. Đó là một cách tốt đề định dạng và phân loại các bài toán".
    - Có thể thuê quyển sách này trên Kindle
    - Câu trả lời cho các bài tập trong sách:
        - [Solutions](https://web.archive.org/web/20150404194210/http://www.algorithm.cs.sunysb.edu/algowiki/index.php/The_Algorithms_Design_Manual_(Second_Edition))
    - [Errata](http://www3.cs.stonybrook.edu/~skiena/algorist/book/errata)
- [Algorithm](http://jeffe.cs.illinois.edu/teaching/algorithms/) (Jeff Erickson)

- [ ] [Write Great Code: Volume 1: Understanding the Machine](https://www.amazon.com/Write-Great-Code-Understanding-Machine/dp/1593270038)
    - Quyển này được xuất bản năm 2004, phần nào đã lỗi thời, nhưng nó vẫn là một tài liệu tuyệt vời để tìm hiểu về máy tính một cách ngắn gọn.
    - Tác giả phát minh ra HLA (High Level Assembly), vậy nên hãy hãy chú ý một chút về các ví dụ và định nghĩa trong sách. Tuy không được sử dụng rộng rãi, nhưng đó là một ví dụ hiện đại về hợp ngữ (assembly).
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

- [ ] [Introduction to Algorithms](https://www.amazon.com/Introduction-Algorithms-fourth-Thomas-Cormen/dp/026204630X)
    - **Chú ý:** Đọc cuốn này chỉ có một ít giá trị. Đây là một tổng hợp xuất sắc về giải thuật và cấu trúc dữ liệu, nhưng nó không dạy cho bạn cách viết code xuất sắc. Để làm một lập trình viên giỏi, bạn đồng thời phải có khả năng phát triển một giải pháp một cách hiệu quả nữa.
    - Trích lời Yegge: "Nhưng nếu bạn muốn đến với buổi phỏng vấn một cách có chuẩn bị, vậy hãy hoãn đơn xin ứng tuyển lại cho đến khi bạn hoàn tất quyển sách này"
    - Half.com là một trang hữu dụng để tìm sách với giá tốt.
    - Đôi được gọi là CLR, hoặc là CLRS (trích chữ cái đầu trong tên của các tác giả), vì Stein (một trong 4 tác giả, S trong CLRS) nhập cuộc trễ
- [Kiến trúc Máy tính, Ấn bản thứ Sáu: Một cách tiếp cận định lượng](https://www.amazon.com/dp/0128119055)
    - Đối với một cách tiếp cận phong phú hơn, cập nhật hơn (2017), nhưng dài hơn

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
- [ ] **BÁT ĐẦU TỪ ĐÂY**: [The System Design Primer](https://github.com/donnemartin/system-design-primer)
- [ ] [System Design from HiredInTech - Thiết kế hệ thống bởi HiredInTech](http://www.hiredintech.com/system-design/)
- [ ] [Làm thế nào để trả lời các câu hỏi liên quan tới thiết kế trong phỏng vấn kỹ thuật? (How Do I Prepare To Answer Design Questions In A Technical Inverview)](https://www.quora.com/How-do-I-prepare-to-answer-design-questions-in-a-technical-interview?redirected_qid=1500023)
- [ ] [8 điều bạn nên biết trước khi bắt đầu một buổi phỏng vấn về Thiết kế hệ thống (8 Things You Need to Know Before a System Design Interview) ](https://javascript.plainenglish.io/8-steps-guide-to-ace-a-system-design-interview-7a5a797f4d7d)
- [ ] [Chuẩn hóa trong cơ sở dữ liệu (Database Normalization - 1NF, 2NF, 3NF and 4NF) (video)](https://www.youtube.com/watch?v=UrYLYV7WSHM)
- [ ] [Phỏng vấn về thiết kế hệ thống (System Design Interview)](https://github.com/checkcheckzz/system-design-interview) - Có rất nhiều tài liệu trong link nay. Hãy đọc qua các bài viết và các ví dụ. Tôi có liệt kê sau đây:
- [ ] [Làm thế nào để dẫn đầu trong cuộc phỏng vấn về thiết kế hệ thống (How to ace a systems design interview) ](https://web.archive.org/web/20120716060051/http://www.palantir.com/2011/10/how-to-rock-a-systems-design-interview/)
- [ ] [Những con số ai cũng nên biết (Numbers Everyone Should Know)](http://everythingisdata.wordpress.com/2009/10/17/numbers-everyone-should-know/)
- [ ] [Mất bao lâu để làm một chuyển đổi ngữ cảnh? (How long does it take to make a context switch) ](http://blog.tsunanet.net/2010/11/how-long-does-it-take-to-make-context.html)
- [ ] [Các luồng xử lý trong trung tâm dữ liệu (Transactions Across Datacenters)(video)](https://www.youtube.com/watch?v=srOgpXECblk)
- [ ] [Một hướng dẫn đơn giản về lý thuyết CAP (A plain English introduction to CAP Theorem)](http://ksat.me/a-plain-english-introduction-to-cap-theorem/)
- [ ] [MIT 6.824: Distributed Systems, Spring 2020 (20 videos)](https://www.youtube.com/watch?v=cQP8WApzIQQ&list=PLrw6a1wE39_tb2fErI4-WkMbsvGQk9_UB)
- [ ] Thuật toán đồng thuận:
    - [ ] Paxos - [Paxos Agreement - Computerphile (video)](https://www.youtube.com/watch?v=s8JqcZtvnsM)
    - [ ] Raft - [An Introduction to the Raft Distributed Consensus Algorithm (video)](https://www.youtube.com/watch?v=P9Ydif5_qvE)
        - [ ] [Easy-to-read paper](https://raft.github.io/)
        - [ ] [Infographic](http://thesecretlivesofdata.com/raft/)
- [ ] [Consistent Hashing](http://www.tom-e-white.com/2007/11/consistent-hashing.html)
- [ ] [NoSQL Patterns](http://horicky.blogspot.com/2009/11/nosql-patterns.html)
- [ ] Khả năng mở rộng:
    - Bạn không cần tất cả chúng. Chỉ cần chọn 1 vài cái bạn có hứng thú
    - [ ] [Tầm nhìn chung (Great overview)(video)](https://www.youtube.com/watch?v=-W9F__D3oY4)
    - [ ] Các seri ngắn:
        - [Nhân bản (Clones)](http://www.lecloud.net/post/7295452622/scalability-for-dummies-part-1-clones)
        - [Cơ sỡ dữ liệu (Database)](http://www.lecloud.net/post/7994751381/scalability-for-dummies-part-2-database)
        - [Cache](http://www.lecloud.net/post/9246290032/scalability-for-dummies-part-3-cache)
        - [Bất đồng bộ (Asynchronism)](http://www.lecloud.net/post/9699762917/scalability-for-dummies-part-4-asynchronism)
    - [ ] [Kiến trúc web và hệ thống phân tán có khả năng mở rộng (Scalable Web Architecture and Distributed Systems)](http://www.aosabook.org/en/distsys.html)
    - [ ] [Fallacies of Distributed Computing Explained](https://pages.cs.wisc.edu/~zuyu/files/fallacies.pdf)
    - [ ] [Jeff Dean - Xây dựng hệ thống phần mềm tại Google và các bài học rút ra được (Jeff Dean - Building Software Systems At Google and Lessons Learned)(video)](https://www.youtube.com/watch?v=modXC5IWTJI)
    - [ ] [Giới thiệu về kiến trúc hệ thống có thể mở rộng (Introduction to Architecting Systems for Scale)](http://lethain.com/introduction-to-architecting-systems-for-scale/)
    - [ ] [Mở rộng game trên di động nhắm tới khách hàng trên toàn thế giới sử dụng App Engine và Cloud Datastore (Scaling mobile games to a global audience using App Engine and Cloud Datastore)(video)](https://www.youtube.com/watch?v=9nWyWwY2Onc)
    - [ ] [How Google Does Planet-Scale Engineering for Planet-Scale Infra (video)](https://www.youtube.com/watch?v=H4vMcD7zKM0)
    - [ ] [Sự quan trọng của thuật toán (The Importance of Algorithms)](https://www.topcoder.com/thrive/articles/The%20Importance%20of%20Algorithms)
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
    - [ ] [Trong trường hợp nào truy vấn phỏng đoán được thực thi? (When Should Approximate Query Processing Be Used?)](http://highscalability.com/blog/2016/2/25/when-should-approximate-query-processing-be-used.html)
    - [ ] [Google's Transition From Single Datacenter, To Failover, To A Native Multihomed Architecture]( http://highscalability.com/blog/2016/2/23/googles-transition-from-single-datacenter-to-failover-to-a-n.html)
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
    - [ ] [Kiến trúc của Salesforce - Làm thế nào để xử lý 1.3 tỷ giao dịch mỗi ngày (Salesforce Architecture - How They Handle 1.3 Billion Transactions A Day)](http://highscalability.com/blog/2013/9/23/salesforce-architecture-how-they-handle-13-billion-transacti.html)
    - [ ] [Kiến trúc của ESPN khi mở rộng - Xử lý 100000 thông tin mỗi giây (ESPN's Architecture At Scale - Operating At 100,000 Duh Nuh Nuhs Per Second)](http://highscalability.com/blog/2013/11/4/espns-architecture-at-scale-operating-at-100000-duh-nuh-nuhs.html)
    - [ ] Xem qua "Messaging, Serialization, and Queueing Systems" phía dưới để hiểu các công nghệ có thể kết nối các dịch vụ cùng lúc thế nào.
    - [ ] Twitter:
        - [O'Reilly MySQL CE 2011: Jeremy Cole, "Big and Small Data at @Twitter" (video)](https://www.youtube.com/watch?v=5cKTP36HVgI)
        - [Timelines at Scale](https://www.infoq.com/presentations/Twitter-Timeline-Scalability)
    - Để có thêm thông tin, xem seri "Mining Massive Datasets" trong [seri video](#Các-chuỗi-Video).
- [ ] Thực hành thêm về thiết kế hệ thống: Sau đây là vài ý tưởng có thể thực hiện trên giấy, mỗi ý tưởng đều có tư liệu đi cùng để hiểu rõ nó thực thi thế nào trong thế giới thực.
    - review: [The System Design Primer](https://github.com/donnemartin/system-design-primer)
    - [Thiết kế hệ thống bới HiredInTech (System Design from HiredInTech)](http://www.hiredintech.com/system-design/)
    - [cheat sheet](https://github.com/jwasham/coding-interview-university/blob/main/extras/cheat%20sheets/system-design.pdf)
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
        - [Thiết kê một hệ thống cung cấp ID ngẫu nhiên (Design a random unique ID generation system)](https://blog.twitter.com/2010/announcing-snowflake)
        - [Thiết kế một cơ sở dữ liệu khóa-giá trị (Design a key-value database)](http://www.slideshare.net/dvirsky/introduction-to-redis)
        - [Thiết kế một hệ thống chia sẻ ảnh (Design a picture sharing system) ](http://highscalability.com/blog/2011/12/6/instagram-architecture-14-million-users-terabytes-of-photos.html)
        - [Thiết kế một hệ thống hổ trợ ra quyết định (Design a recommendation system)](http://ijcai13.org/files/tutorial_slides/td3.pdf)
        - [Thiết kế một hệ thống làm ngắn URL (Design a URL-shortener system: copied from above)](http://www.hiredintech.com/system-design/the-system-design-process/)
        - [Thiết kế một hệ thống cache (Design a cache system)](https://web.archive.org/web/20220217064329/https://adayinthelifeof.nl/2011/02/06/memcache-internals/)

## Học thêm

>  Tiêu đề của các video, các thuật ngữ cao cấp xin được giữ nguyên. Một số thuật ngữ có thể dịch được, nhưng người dịch không đủ vốn từ đề diễn đạt chúng một cách ngắn gọn như trong tiếng Anh, nên cũng xin phép cho qua.

    Tôi đã thêm chúng để giúp bạn trở thành một kỹ sư phần mềm toàn diện và để bạn biết về một số
    công nghệ và thuật toán, vì vậy bạn sẽ có một bộ công cụ lớn hơn.

- ### Trình biên dịch
    - [How a Compiler Works in ~1 minute (video)](https://www.youtube.com/watch?v=IhC7sdYe-Jg)
    - [Harvard CS50 - Compilers (video)](https://www.youtube.com/watch?v=CSZLNYF4Klo)
    - [C++ (video)](https://www.youtube.com/watch?v=twodd1KFfGk)
    - [Understanding Compiler Optimization (C++) (video)](https://www.youtube.com/watch?v=FnGCDLhaxKU)

- ### Emacs và vi(m)
    - Phải nắm vững một trình chỉnh sửa văn bản thông dụng trên Unix.
    - vi(m):
        - [Editing With Vim 01 - Installation, Setup, and The Modes (video)](https://www.youtube.com/watch?v=5givLEMcINQ&index=1&list=PL13bz4SHGmRxlZVmWQ9DvXo1fEg4UdGkr)
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
            - [Emacs Tutorial (Beginners) -Part 3- Expressions, Statements, ~/.emacs file, and packages](https://www.youtube.com/watch?v=paSgzPso-yc)
        - [Evil Mode: Or, How I Learned to Stop Worrying and Love Emacs (video)](https://www.youtube.com/watch?v=JWD1Fpdd4Pc)
        - [Writing C Programs With Emacs](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Writing_C_programs_with_Emacs)
	- [The Absolute Beginner's Guide to Emacs (video by David Wilson)](https://www.youtube.com/watch?v=48JlgiBpw_I&t=0s)
	- [The Absolute Beginner's Guide to Emacs (notes by David Wilson)](https://systemcrafters.net/emacs-essentials/absolute-beginners-guide-to-emacs/)

- ### Các công cụ chạy trên dòng lệnh của Unix
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

- ### Lý thuyết thông tin
    - [Khan Academy](https://www.khanacademy.org/computing/computer-science/informationtheory)
    - [ ] Hiểu thêm về chuỗi Markov:
        - [Core Markov Text Generation](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/waxgx/core-markov-text-generation)
        - [Core Implementing Markov Text Generation](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/gZhiC/core-implementing-markov-text-generation)
        - [Project = Markov Text Generation Walk Through](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/EUjrq/project-markov-text-generation-walk-through)
    - Xem thêm ở chuỗi bài từ đại học MIT 6.050J Information và Entropy bên dưới.

- ### Parity & Hamming Code (videos)
    - [Intro](https://www.youtube.com/watch?v=q-3BctoUpHE)
    - [Parity](https://www.youtube.com/watch?v=DdMcAUlxh1M)
    - Hamming Code:
        - [Error detection](https://www.youtube.com/watch?v=1A_NcXxdoCc)
        - [Error correction](https://www.youtube.com/watch?v=JAMLuxdHH8o)
    - [Error Checking](https://www.youtube.com/watch?v=wbH2VxzmoZk)

- ### Mã hóa
    - Xem các video bên dưới.
    - Hãy chăc chắn đã xem qua các video đề lý thuyết thông tin trước.
    - [Khan Academy Series](https://www.khanacademy.org/computing/computer-science/cryptography)
    - [Cryptography: Hash Functions](https://www.youtube.com/watch?v=KqqOXndnvic&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=30)
    - [Cryptography: Encryption](https://www.youtube.com/watch?v=9TNI2wHmaeI&index=31&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

- ### Thuật toán nén
    - Hãy chăc chắn đã xem qua các video đề lý thuyết thông tin trước.
    - [ ] Computerphile (videos):
        - [Compression](https://www.youtube.com/watch?v=Lto-ajuqW3w)
        - [Entropy in Compression](https://www.youtube.com/watch?v=M5c_RFKVkko)
        - [Upside Down Trees (Huffman Trees)](https://www.youtube.com/watch?v=umTbivyJoiI)
        - [EXTRA BITS/TRITS - Huffman Trees](https://www.youtube.com/watch?v=DV8efuB3h2g)
        - [Elegant Compression in Text (The LZ 77 Method)](https://www.youtube.com/watch?v=goOa3DGezUA)
        - [Text Compression Meets Probabilities](https://www.youtube.com/watch?v=cCDCfoHTsaU)
    - [Compressor Head videos](https://www.youtube.com/playlist?list=PLOU2XLYxmsIJGErt5rrCqaSGTMyyqNt2H)
    - [(optional) Google Developers Live: GZIP is not enough!](https://www.youtube.com/watch?v=whGwm0Lky2s)


- ### Bảo mật
    - [MIT (23 videos)](https://www.youtube.com/playlist?list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
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

- ### Trình dọn rác
    > Trình dọn rác (garbage collection) là một tính năng của các ngôn ngữ lập trình cấp cao, trong đó hệ thông tự động thu hồi vùng nhớ của các data (biến, đối tượng) không còn được sử dụng nữa, và cấp phát chúng cho các data mới. Trước khi có tính năng này, lập trình viên phải quản lý vùng nhớ thủ công, tự xin cấp phát và tự giải phóng.
    - [GC in Python (video)](https://www.youtube.com/watch?v=iHVs_HkjdmI)
    - [Deep Dive Java: Garbage Collection is Good!](https://www.infoq.com/presentations/garbage-collection-benefits)
    - [Deep Dive Python: Garbage Collection in CPython (video)](https://www.youtube.com/watch?v=P-8Z0-MhdQs&list=PLdzf4Clw0VbOEWOS_sLhT_9zaiQDrS5AR&index=3)

- ### Lập trình song song
    - [Coursera (Scala)](https://www.coursera.org/learn/parprog1/home/week/1)
    - [Efficient Python for High-Performance Parallel Computing (video)](https://www.youtube.com/watch?v=uY85GkaYzBk)

- ### Messaging, Serialization, và Queueing Systems
    - [Thrift](https://thrift.apache.org/)
        - [Tutorial](http://thrift-tutorial.readthedocs.io/en/latest/intro.html)
    - [Protocol Buffers](https://developers.google.com/protocol-buffers/)
        - [Tutorials](https://developers.google.com/protocol-buffers/docs/tutorials)
    - [gRPC](http://www.grpc.io/)
        - [gRPC 101 for Java Developers (video)](https://www.youtube.com/watch?v=5tmPvSe7xXQ&list=PLcTqM9n_dieN0k1nSeN36Z_ppKnvMJoly&index=1)
    - [Redis](http://redis.io/)
        - [Tutorial](http://try.redis.io/)
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

- ### A*
    - [A Search Algorithm](https://en.wikipedia.org/wiki/A*_search_algorithm)
    - [A* Pathfinding (E01: algorithm explanation) (video)](https://www.youtube.com/watch?v=-L-WgKMFuhE)

- ### Fast Fourier Transform
    - [An Interactive Guide To The Fourier Transform](https://betterexplained.com/articles/an-interactive-guide-to-the-fourier-transform/)
    - [What is a Fourier transform? What is it used for?](http://www.askamathematician.com/2012/09/q-what-is-a-fourier-transform-what-is-it-used-for/)
    - [What is the Fourier Transform? (video)](https://www.youtube.com/watch?v=Xxut2PN-V8Q)
    - [Divide & Conquer: FFT (video)](https://www.youtube.com/watch?v=iTMn0Kt18tg&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=4)
    - [Understanding The FFT](http://jakevdp.github.io/blog/2013/08/28/understanding-the-fft/)

- ### Bloom Filter
    - Cho một bộ lọc Bloom với m bit và k hàm băm, cả việc chèn và kiểm tra thành viên đều là O(k)
    - [Bloom Filters (video)](https://www.youtube.com/watch?v=-SuTGoFYjZs)
    - [Bloom Filters | Mining of Massive Datasets | Stanford University (video)](https://www.youtube.com/watch?v=qBTdukbzc78)
    - [Tutorial](http://billmill.org/bloomfilter-tutorial/)
    - [How To Write A Bloom Filter App](http://blog.michaelschmatz.com/2016/04/11/how-to-write-a-bloom-filter-cpp/)

- ### HyperLogLog
    - [How To Count A Billion Distinct Objects Using Only 1.5KB Of Memory](http://highscalability.com/blog/2012/4/5/big-data-counting-how-to-count-a-billion-distinct-objects-us.html)

- ### Locality-Sensitive Hashing
    - Được sử dụng để kiểm tra tính tương đồng của các tài liệu.
    - Trái ngược lại với MD5 và SHA, chúng vốn được dùng để xác định chăc chắn rằng 2 tài liệu hoàn toàn trùng khớp với nhau.
    - [Simhashing (hopefully) made simple](http://ferd.ca/simhashing-hopefully-made-simple.html)

- ### van Emde Boas Trees
    - [Divide & Conquer: van Emde Boas Trees (video)](https://www.youtube.com/watch?v=hmReJCupbNU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=6)
    - [MIT Lecture Notes](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-046j-design-and-analysis-of-algorithms-spring-2012/lecture-notes/MIT6_046JS12_lec15.pdf)

- ### Augmented Data Structures
    - [CS 61B Lecture 39: Augmenting Data Structures](https://archive.org/details/ucberkeley_webcast_zksIj9O8_jc)

- ### Balanced search trees
    - Biết ít nhất một dạng cây nhị phân tìm kiếm cân bằng (và biết cách cài đặt nó)
    - "Trong các loại cây nhị phân cân bằng, cây AVL và 2/3 đã "ra đi", và cây đỏ-đen (red-black) có vẻ khá phổ biến. Một dạng cây tự quản khá thú vị là _splay tree_, sử dụng phép xoay nút để chuyển bất kỳ nút nào lên trên gốc" - Skiena
    - Do đó, tôi quyết định cài đặt splay tree. Từ những gì tôi đọc được, bạn không cần phải cài đặt một cây nhị phân trong cuộc phỏng vấn. Nhưng tôi muốn chắc chắn về kiến thức của mình, và cũng phải đối diện với sự thật rằng splay tree khá khó.
        - splay tree: insert, search, delete functions
        - Nếu bạn muốn cài đặt cây đỏ-đen thì có thể thử sức các phép toán này: search and insertion functions, skipping delete
    - Tôi muốn học nhiều hơn về B-Tree, bởi vì nó được sử dụng rộng rãi với các tập dữ liệu rất lớn.
    - [Self-balancing binary search tree](https://en.wikipedia.org/wiki/Self-balancing_binary_search_tree)

    - [ ] **AVL trees**
        - Trong thực tế:
            Từ những gì mà tôi đọc được, chúng không được sử dụng nhiều, nhưng tôi có thể nghĩ đến vài ứng dụng: cây AVL hỗ trợ O(log n) cho tìm kiếm, chèn và xóa nút. Nó được cân bằng một cách chặt chẽ hơn so với cây đỏ-đen, dẫn đến việc chèn và xóa chậm hơn, nhưng tìm kiếm sẽ nhanh hơn. Điều đó khiến nó thích hơp với các bộ dữ liệu được xây dựng một lần và tái sử dụng nhiều lần, ví dụ như từ diển trong ngôn ngữ thông thường (hoặc các bộ từ vựng trong lập trình, biên dịch)
        - [MIT AVL Trees / AVL Sort (video)](https://www.youtube.com/watch?v=FNeL18KsWPc&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=6)
        - [AVL Trees (video)](https://www.coursera.org/learn/data-structures/lecture/Qq5E0/avl-trees)
        - [AVL Tree Implementation (video)](https://www.coursera.org/learn/data-structures/lecture/PKEBC/avl-tree-implementation)
        - [Split And Merge](https://www.coursera.org/learn/data-structures/lecture/22BgE/split-and-merge)
        - [[Review] AVL Trees (playlist) in 19 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZOUFgdIeOPuH6cfSnNRMau-)

    - [ ] **Splay trees**
        - Trong thực tế:
            Splay tree được sử dụng để cài đặt cache, bộ cấp phát bộ nhớ, định tuyến, bộ dọn rác, trình nén dữ liệu, ropes (thay thế hoặc đại diện cho một chuỗi lớn), trong Windows NT (bộ nhớ ảo, mạng và hệ thống file.)
        - [CS 61B: Splay Trees (video)](https://archive.org/details/ucberkeley_webcast_G5QIXywcJlY)
        - MIT Lecture: Splay Trees:
            - Gets very mathy, but watch the last 10 minutes for sure.
            - [Video](https://www.youtube.com/watch?v=QnPl_Y6EqMo)

    - [ ] **Red/black trees**
        - Đây là một biến thể của cây 2/3 tree (xem bên dưới)
        - Trong thực tế:
            Cây Đỏ-đen đảm bảo tốc độ thực thi ok trong trường hợp xấu nhất cho các phép toán: chèn, xóa, tìm kiếm. Điều đó không chỉ khiến nó có giá trị trong các ứng dụng thời gian thực, mà còn là phần cơ bản đề xây dựng nhiều dạng cấu trúc dữ liệu nâng cao, ví dụ như, trong tính toán địa lý, nhiều cấu trúc dữ liệu được xây dựng dựa trên cây đỏ-đen, thuật toán Lập lịch tuyệt đối công bằng (Completely Fair Scheduler) sử dụng trong nhân Linux cũng dùng cây đỏ-đen. Trên Java 8, HashMap cũng được điều chỉnh lại, thay vi dùng LinkedList để chứa các phần tử giống nhau (trùng hashcode), nguời ta dùng một cây đỏ-đen.
        - [Aduni - Algorithms - Lecture 4 (link jumps to the starting point) (video)](https://youtu.be/1W3x0f_RmUo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3871)
        - [Aduni - Algorithms - Lecture 5 (video)](https://www.youtube.com/watch?v=hm2GHwyKF1o&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=5)
        - [Red-Black Tree](https://en.wikipedia.org/wiki/Red%E2%80%93black_tree)
        - [An Introduction To Binary Search And Red Black Tree](https://www.topcoder.com/thrive/articles/An%20Introduction%20to%20Binary%20Search%20and%20Red-Black%20Trees)
        - [[Review] Red-Black Trees (playlist) in 30 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZNqDI8qfOZgzbqahCUmUEin)

    - [ ] **2-3 search trees**
        - Trong thực tế:
            cây 2-3 chèn nhanh hơn, nhưng tìm kiếm chậm hơn (chiều cao của cây cao hơn so với AVL)
        - Bạn sẽ hiếm khi sử dụng cây 2-3, vì cài đặt của chúng sử dụng các dạng nút khác nhau. Vì vậy, người ta dùng cây đỏ-đen nhiều hơn.
        - [23-Tree Intuition and Definition (video)](https://www.youtube.com/watch?v=C3SsdUqasD4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=2)
        - [Binary View of 23-Tree](https://www.youtube.com/watch?v=iYvBtGKsqSg&index=3&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [2-3 Trees (student recitation) (video)](https://www.youtube.com/watch?v=TOb1tuEZ2X4&index=5&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

    - [ ] **2-3-4 Trees (aka 2-4 trees)**
        - Trong thực tế:
            Với mỗi cây 2-4, có nhiều cây đỏ-đen tương ứng với cùng thứ tự nút. Phép chèn và xóa trên cây 2-4 cũng tương đương với phép đổi màu và xoay trên cây đỏ-đen. Nó khiến cho cây 2-4 trở thành một công cụ hiệu quả để hiểu được logic phía sau cây đỏ-đen, và đó là tại sao nhiều sách dẫn nhập thuật toán lại giới thiệu cây 2-4 trước cây đỏ-đen. **cây 2-4 không thường được dùng trong thực tế**
        - [CS 61B Lecture 26: Balanced Search Trees (video)](https://archive.org/details/ucberkeley_webcast_zqrqYXkth6Q)
        - [Bottom Up 234-Trees (video)](https://www.youtube.com/watch?v=DQdMYevEyE4&index=4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [Top Down 234-Trees (video)](https://www.youtube.com/watch?v=2679VQ26Fp4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=5)

    - [ ] **N-ary (K-ary, M-ary) trees**
        - chú ý: N hay K chính là yếu tố cho phân nhánh (số nhánh tối đa)
        - Cây nhị phân là 2-ary, trong đó, số nhánh tối đa (branching factor) là 2
        - Cây 2-3 là 3-ary
        - [K-Ary Tree](https://en.wikipedia.org/wiki/K-ary_tree)

    - [ ] **B-Trees**
        - fun fact: điều đó vẫn còn là một bí ẩn, nhưng B ở đây có thể là Boeing, Balanced (được cân bằng) hoặc Bayer (người đồng sáng tạo)
        - Trong thực tế:
            B-tree được sử dụng rộng rãi trong các cơ sở dữ liệu. Hầu hết các hệ thống file sử dụng B-tree (hoặc biến thể của nó). Thêm vào đó, loại cấu trúc cho phép truy cập ngẫu nhiên nhanh chóng vào một file bất kỳ. Vấn đề còn lại là điều chỉnh địa chỉ khổi vùng nhớ của file thành địa chỉ vật lý của ổ đĩa (hoặc địa chỉ _cylinder-head-sector_).
            (or perhaps to a cylinder-head-sector) address.
        - [B-Tree](https://en.wikipedia.org/wiki/B-tree)
        - [B-Tree Datastructure](http://btechsmartclass.com/data_structures/b-trees.html)
        - [Introduction to B-Trees (video)](https://www.youtube.com/watch?v=I22wEC1tTGo&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=6)
        - [B-Tree Definition and Insertion (video)](https://www.youtube.com/watch?v=s3bCdZGrgpA&index=7&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [B-Tree Deletion (video)](https://www.youtube.com/watch?v=svfnVhJOfMc&index=8&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [MIT 6.851 - Memory Hierarchy Models (video)](https://www.youtube.com/watch?v=V3omVLzI0WE&index=7&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf)
                - giải thích cache mau quên (cache-oblivious) B-Trees, một cấu trúc dữ liệu rất thú vị.
                - 37 phút đầu tiên rất nặng kỹ thuật, có thể bỏ qua
        - [[Review] B-Trees (playlist) in 26 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZNFPPv98DjTdD9X6UI9KMHz)


- ### k-D Trees
    - Tốt đề tìm số điểm nằm trong một hình chữ nhật hoặc một đối tượng đa chiều.
    - Rất thích hợp cho thuật toán tìm láng giềng gần nhất (k-nearest neighbors, một thuật toán trong khai thác dữ liệu)
    - [kNN K-d tree algorithm (video)](https://www.youtube.com/watch?v=Y4ZgLlDfKDg)

- ### Skip lists
    - "Đó là một dạng cấu trúc dữ liệu được sùng bái" - Skiena
    - [Randomization: Skip Lists (video)](https://www.youtube.com/watch?v=2g9OSRKJuzM&index=10&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [For animations and a little more detail](https://en.wikipedia.org/wiki/Skip_list)

- ### Network Flows
    - [Ford-Fulkerson in 5 minutes — Step by step example (video)](https://www.youtube.com/watch?v=Tl90tNtKvxs)
    - [Ford-Fulkerson Algorithm (video)](https://www.youtube.com/watch?v=v1VgJmkEJW0)
    - [Network Flows (video)](https://www.youtube.com/watch?v=2vhN4Ice5jI)

- ### Disjoint Sets & Union Find
    - [UCB 61B - Disjoint Sets; Sorting & selection (video)](https://archive.org/details/ucberkeley_webcast_MAEGXTwmUsI)
    - [Sedgewick Algorithms - Union-Find (6 videos)](https://www.coursera.org/learn/algorithms-part1/home/week/1)

- ### Math for Fast Processing
    - [Integer Arithmetic, Karatsuba Multiplication (video)](https://www.youtube.com/watch?v=eCaXlAaN2uE&index=11&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [The Chinese Remainder Theorem (used in cryptography) (video)](https://www.youtube.com/watch?v=ru7mWZJlRQg)

- ### Treap
    - Sự kết hợp giữa cây nhị phân và heap.
    - [Treap](https://en.wikipedia.org/wiki/Treap)
    - [Data Structures: Treaps explained (video)](https://www.youtube.com/watch?v=6podLUYinH8)
    - [Applications in set operations](https://www.cs.cmu.edu/~scandal/papers/treaps-spaa98.pdf)

- ### Linear Programming (videos)
    - [Linear Programming](https://www.youtube.com/watch?v=M4K6HYLHREQ)
    - [Finding minimum cost](https://www.youtube.com/watch?v=2ACJ9ewUC6U)
    - [Finding maximum value](https://www.youtube.com/watch?v=8AA_81xI3ik)
    - [Solve Linear Equations with Python - Simplex Algorithm](https://www.youtube.com/watch?v=44pAWI7v5Zk)

- ### Geometry, Convex hull (videos)
    - [Graph Alg. IV: Intro to geometric algorithms - Lecture 9](https://youtu.be/XIAQRlNkJAw?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3164)
    - [Geometric Algorithms: Graham & Jarvis - Lecture 10](https://www.youtube.com/watch?v=J5aJEcOr6Eo&index=10&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
    - [Divide & Conquer: Convex Hull, Median Finding](https://www.youtube.com/watch?v=EzeYI7p9MjU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=2)

- ### Discrete math
    - [Computer Science 70, 001 - Spring 2015 - Discrete Mathematics and Probability Theory](http://www.infocobuild.com/education/audio-video-courses/computer-science/cs70-spring2015-berkeley.html)
    - [Discrete Mathematics by Shai Simonson (19 videos)](https://www.youtube.com/playlist?list=PLWX710qNZo_sNlSWRMVIh6kfTjolNaZ8t)
    - [Discrete Mathematics By IIT Ropar NPTEL](https://nptel.ac.in/courses/106/106/106106183/)

---

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
    - Tài nguyên:
        - Sách:
            - [Python Machine Learning](https://www.amazon.com/Python-Machine-Learning-Sebastian-Raschka/dp/1783555130/)
            - [Data Science from Scratch: First Principles with Python](https://www.amazon.com/Data-Science-Scratch-Principles-Python/dp/149190142X)
            - [Introduction to Machine Learning with Python](https://www.amazon.com/Introduction-Machine-Learning-Python-Scientists/dp/1449369413/)
        - [Machine Learning for Software Engineers](https://github.com/ZuzooVn/machine-learning-for-software-engineers)
        - Data School: http://www.dataschool.io/

--

## Đọc thêm về một số đề tài

    Tôi thêm những phần này để củng cố các kiến thức đã được trình bày ở trên, nhưng không muốn đưa chúng vào danh sách trên, vì đã quá nhiều rồi. Cũng có hơi vượt mức cần thiết. Nhưng dù sao, bạn muốn trúng tuyển mà phải không?

- **SOLID**
    - [ ] [Bob Martin SOLID Principles of Object Oriented and Agile Design (video)](https://www.youtube.com/watch?v=TMuno5RZNeE)
    - [ ] S - [Single Responsibility Principle](http://www.oodesign.com/single-responsibility-principle.html) | [Single responsibility to each Object](http://www.javacodegeeks.com/2011/11/solid-single-responsibility-principle.html)
        - [more flavor](https://docs.google.com/open?id=0ByOwmqah_nuGNHEtcU5OekdDMkk)
    - [ ] O - [Open/Closed Principle](http://www.oodesign.com/open-close-principle.html)  | [On production level Objects are ready for extension but not for modification](https://en.wikipedia.org/wiki/Open/closed_principle)
        - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgN2M5MTkwM2EtNWFkZC00ZTI3LWFjZTUtNTFhZGZiYmUzODc1&hl=en)
    - [ ] L - [Liskov Substitution Principle](http://www.oodesign.com/liskov-s-substitution-principle.html) | [Base Class and Derived class follow ‘IS A’ Principle](http://stackoverflow.com/questions/56860/what-is-the-liskov-substitution-principle)
        - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgNzAzZjA5ZmItNjU3NS00MzQ5LTkwYjMtMDJhNDU5ZTM0MTlh&hl=en)
    - [ ] I - [Interface segregation principle](http://www.oodesign.com/interface-segregation-principle.html) | Clients should not be forced to implement interfaces they don't use
        - [Interface Segregation Principle in 5 minutes (video)](https://www.youtube.com/watch?v=3CtAfl7aXAQ)
        - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgOTViYjJhYzMtMzYxMC00MzFjLWJjMzYtOGJiMDc5N2JkYmJi&hl=en)
    - [ ] D -[Dependency Inversion principle](http://www.oodesign.com/dependency-inversion-principle.html) | Reduce the dependency In composition of objects.
        - [Why Is The Dependency Inversion Principle And Why Is It Important](http://stackoverflow.com/questions/62539/what-is-the-dependency-inversion-principle-and-why-is-it-important)
        - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgMjdlMWIzNGUtZTQ0NC00ZjQ5LTkwYzQtZjRhMDRlNTQ3ZGMz&hl=en)


- **Union-Find**
    - [Overview](https://www.coursera.org/learn/data-structures/lecture/JssSY/overview)
    - [Naive Implementation](https://www.coursera.org/learn/data-structures/lecture/EM5D0/naive-implementations)
    - [Trees](https://www.coursera.org/learn/data-structures/lecture/Mxu0w/trees)
    - [Union By Rank](https://www.coursera.org/learn/data-structures/lecture/qb4c2/union-by-rank)
    - [Path Compression](https://www.coursera.org/learn/data-structures/lecture/Q9CVI/path-compression)
    - [Analysis Options](https://www.coursera.org/learn/data-structures/lecture/GQQLN/analysis-optional)

- **Đi sâu hơn vào quy hoạch động** (videos)
    - [6.006: Dynamic Programming I: Fibonacci, Shortest Paths](https://www.youtube.com/watch?v=r4-cftqTcdI&ab_channel=MITOpenCourseWare)
    - [6.006: Dynamic Programming II: Text Justification, Blackjack](https://www.youtube.com/watch?v=KLBCUx1is2c&ab_channel=MITOpenCourseWare)
    - [6.006: DP III: Parenthesization, Edit Distance, Knapsack](https://www.youtube.com/watch?v=TDo3r5M1LNo&ab_channel=MITOpenCourseWare)
    - [6.006: DP IV: Guitar Fingering, Tetris, Super Mario Bros.](https://www.youtube.com/watch?v=i9OAOk0CUQE&ab_channel=MITOpenCourseWare)
    - [6.046: Dynamic Programming & Advanced DP](https://www.youtube.com/watch?v=Tw1k46ywN6E&index=14&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [6.046: Dynamic Programming: All-Pairs Shortest Paths](https://www.youtube.com/watch?v=NzgFUwOaoIw&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=15)
    - [6.046: Dynamic Programming (student recitation)](https://www.youtube.com/watch?v=krZI60lKPek&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=12)

- **Xử lý đồ thị nâng cao** (videos)
    - [Synchronous Distributed Algorithms: Symmetry-Breaking. Shortest-Paths Spanning Trees](https://www.youtube.com/watch?v=mUBmcbbJNf4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=27)
    - [Asynchronous Distributed Algorithms: Shortest-Paths Spanning Trees](https://www.youtube.com/watch?v=kQ-UQAzcnzA&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=28)

- MIT **Xác suất** (nặng toán học, và hãy đi chậm chậm, sẽ tốt cho các vấn đề toán học khác) (videos):
    - [MIT 6.042J - Probability Introduction](https://www.youtube.com/watch?v=SmFwFdESMHI&index=18&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Conditional Probability](https://www.youtube.com/watch?v=E6FbvM-FGZ8&index=19&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Independence](https://www.youtube.com/watch?v=l1BCv3qqW4A&index=20&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Random Variables](https://www.youtube.com/watch?v=MOfhhFaQdjw&list=PLB7540DEDD482705B&index=21)
    - [MIT 6.042J - Expectation I](https://www.youtube.com/watch?v=gGlMSe7uEkA&index=22&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Expectation II](https://www.youtube.com/watch?v=oI9fMUqgfxY&index=23&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Large Deviations](https://www.youtube.com/watch?v=q4mwO2qS2z4&index=24&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Random Walks](https://www.youtube.com/watch?v=56iFMY8QW2k&list=PLB7540DEDD482705B&index=25)

- [Simonson: Approximation Algorithms (video)](https://www.youtube.com/watch?v=oDniZCmNmNw&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=19)

- **So khớp chuỗi**
    - Rabin-Karp (videos):
        - [Rabin Karps Algorithm](https://www.coursera.org/lecture/data-structures/rabin-karps-algorithm-c0Qkw)
        - [Precomputing](https://www.coursera.org/learn/data-structures/lecture/nYrc8/optimization-precomputation)
        - [Optimization: Implementation and Analysis](https://www.coursera.org/learn/data-structures/lecture/h4ZLc/optimization-implementation-and-analysis)
        - [Table Doubling, Karp-Rabin](https://www.youtube.com/watch?v=BRO7mVIFt08&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=9)
        - [Rolling Hashes, Amortized Analysis](https://www.youtube.com/watch?v=w6nuXg0BISo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=32)
    - Knuth-Morris-Pratt (KMP):
        - [TThe Knuth-Morris-Pratt (KMP) String Matching Algorithm](https://www.youtube.com/watch?v=5i7oKodCRJo)
    - Boyer–Moore string search algorithm
        - [Boyer-Moore String Search Algorithm](https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_string_search_algorithm)
        - [Advanced String Searching Boyer-Moore-Horspool Algorithms (video)](https://www.youtube.com/watch?v=QDZpzctPf10)
    - [Coursera: Algorithms on Strings](https://www.coursera.org/learn/algorithms-on-strings/home/week/1)
        - Khởi đầu khá tốt. Nhưng theo thời gian, khóa học đi qua thuật toán KMP, và trở nên phức tạp hơn mức cần thiết.
        - Trình bày về trie rất hay.
        - Có thể bỏ qua.

- **Sắp xếp**

    - Bài giảng của Stanford về sắp xếp:
        - [Lecture 15 | Programming Abstractions (video)](https://www.youtube.com/watch?v=ENp00xylP7c&index=15&list=PLFE6E58F856038C69)
        - [Lecture 16 | Programming Abstractions (video)](https://www.youtube.com/watch?v=y4M9IVgrVKo&index=16&list=PLFE6E58F856038C69)
    - Shai Simonson:
        - [Algorithms - Sorting - Lecture 2 (video)](https://www.youtube.com/watch?v=odNJmw5TOEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=2)
        - [Algorithms - Sorting II - Lecture 3 (video)](https://www.youtube.com/watch?v=hj8YKFTFKEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=3)
    - Steven Skiena lectures on sorting:
        - [CSE373 2020 - Mergesort/Quicksort (video)](https://www.youtube.com/watch?v=jUf-UQ3a0kg&list=PLOtl7M3yp-DX6ic0HGT0PUX_wiNmkWkXx&index=8)
        - [CSE373 2020 - Linear Sorting (video)](https://www.youtube.com/watch?v=0ksyQKmre84&list=PLOtl7M3yp-DX6ic0HGT0PUX_wiNmkWkXx&index=9)

- NAND To Tetris: [Build a Modern Computer from First Principles](https://www.coursera.org/learn/build-a-computer)

## Các chuỗi Video

Hãy ngồi xuống và thưởng thức.

- [List of individual Dynamic Programming problems (each is short)](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)

- [x86 Architecture, Assembly, Applications (11 videos)](https://www.youtube.com/playlist?list=PL038BE01D3BAEFDB0)

- [MIT 18.06 Linear Algebra, Spring 2005 (35 videos)](https://www.youtube.com/playlist?list=PLE7DDD91010BC51F8)

- [Excellent - MIT Calculus Revisited: Single Variable Calculus](https://www.youtube.com/playlist?list=PL3B08AE665AB9002A)

- [Skiena lectures from Algorithm Design Manual - CSE373 2020 - Analysis of Algorithms (26 videos)](https://www.youtube.com/watch?v=22hwcnXIGgk&list=PLOtl7M3yp-DX6ic0HGT0PUX_wiNmkWkXx&index=1)

- [UC Berkeley 61B (Spring 2014): Data Structures (25 videos)](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd)

- [UC Berkeley 61B (Fall 2006): Data Structures (39 videos)](https://archive.org/details/ucberkeley-webcast-PL4BBB74C7D2A1049C)

- [UC Berkeley 61C: Machine Structures (26 videos)](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iCl2-D-FS5mk0jFF6cYSJs_)

- [OOSE: Software Dev Using UML and Java (21 videos)](https://www.youtube.com/playlist?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)

- [MIT 6.004: Computation Structures (49 videos)](https://www.youtube.com/playlist?list=PLDSlqjcPpoL64CJdF0Qee5oWqGS6we_Yu)

- [Carnegie Mellon - Computer Architecture Lectures (39 videos)](https://www.youtube.com/playlist?list=PL5PHm2jkkXmi5CxxI7b3JCL1TWybTDtKq)

- [MIT 6.006: Intro to Algorithms (47 videos)](https://www.youtube.com/watch?v=HtSuA80QTyo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&nohtml5=False)

- [MIT 6.033: Computer System Engineering (22 videos)](https://www.youtube.com/watch?v=zm2VP0kHl1M&list=PL6535748F59DCA484)

- [MIT 6.034 Artificial Intelligence, Fall 2010 (30 videos)](https://www.youtube.com/playlist?list=PLUl4u3cNGP63gFHB6xb-kVBiQHYe_4hSi)

- [MIT 6.042J: Mathematics for Computer Science, Fall 2010 (25 videos)](https://www.youtube.com/watch?v=L3LMbpZIKhQ&list=PLB7540DEDD482705B)

- [MIT 6.046: Design and Analysis of Algorithms (34 videos)](https://www.youtube.com/watch?v=2P-yW7LQr08&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

- [MIT 6.824: Distributed Systems, Spring 2020 (20 videos)](https://www.youtube.com/watch?v=cQP8WApzIQQ&list=PLrw6a1wE39_tb2fErI4-WkMbsvGQk9_UB)

- [MIT 6.851: Advanced Data Structures (22 videos)](https://www.youtube.com/watch?v=T0yzrZL1py0&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=1)

- [MIT 6.854: Advanced Algorithms, Spring 2016 (24 videos)](https://www.youtube.com/playlist?list=PL6ogFv-ieghdoGKGg2Bik3Gl1glBTEu8c)

- [Harvard COMPSCI 224: Advanced Algorithms (25 videos)](https://www.youtube.com/playlist?list=PL2SOU6wwxB0uP4rJgf5ayhHWgw7akUWSf)

- [MIT 6.858 Computer Systems Security, Fall 2014](https://www.youtube.com/watch?v=GqmQg-cszw4&index=1&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)

- [Stanford: Programming Paradigms (27 videos)](https://www.youtube.com/playlist?list=PL9D558D49CA734A02)

- [Introduction to Cryptography by Christof Paar](https://www.youtube.com/playlist?list=PL6N5qY2nvvJE8X75VkXglSrVhLv1tVcfy)
    - [Course Website along with Slides and Problem Sets](http://www.crypto-textbook.com/)

- [Mining Massive Datasets - Stanford University (94 videos)](https://www.youtube.com/playlist?list=PLLssT5z_DsK9JDLcT8T62VtzwyW9LNepV)

- [Graph Theory by Sarada Herke (67 videos)](https://www.youtube.com/user/DrSaradaHerke/playlists?shelf_id=5&view=50&sort=dd)

## Các khóa học khoa học máy tính

- [Directory of Online CS Courses](https://github.com/open-source-society/computer-science)
- [Directory of CS Courses (many with online lectures)](https://github.com/prakhar1989/awesome-courses)

## Algorithms implementation

- [Multiple Algorithms implementation by Princeton University](https://algs4.cs.princeton.edu/code)


- ## Các bài nghiên cứu
    - Có nhiều bài nghiên cứu của Google và các bài nghiên cứu rất nổi tiếng.
    - Đọc hết các bài nghiên cứu tốn rất nhiều thời gian, tôi khuyên bạn nên chọn lọc theo đề tài cụ thể.

- [Love classic papers?](https://www.cs.cmu.edu/~crary/819-f09/)
- [1978: Process giao tiếp tuần tự (1978: Communicating Sequential Processes)](http://spinroot.com/courses/summer/Papers/hoare_1978.pdf)
    - [Triển khai với Go (implemented in Go)](https://godoc.org/github.com/thomas11/csp)
- [2003: Hệ thống tập tin của Google (2003: The Google File System)](http://static.googleusercontent.com/media/research.google.com/en//archive/gfs-sosp2003.pdf)
    - thay thế bởi Colossus năm 2012
- [2004: MapReduce: Đơn giản hóa xử lý dữ liệu trên phân vùng lớn (Simplified Data Processing on Large Clusters)]( http://static.googleusercontent.com/media/research.google.com/en//archive/mapreduce-osdi04.pdf)
    - gần như bị thay thế bởi Cloud Dataflow?
- [2006: Bigtable: Một Hệ thống Lưu trữ Phân tán cho Dữ liệu Cấu trúc](https://static.googleusercontent.com/media/research.google.com/en//archive/bigtable-osdi06.pdf)
- [2006: Dịch vụ Khóa Chubby cho Hệ thống Phân tán Kết nối Lỏng lẻo](https://research.google.com/archive/chubby-osdi06.pdf)
- [2007: Dynamo: Key-value store Có khả năng Sẵn sàng cao của Amazon](http://s3.amazonaws.com/AllThingsDistributed/sosp/amazon-dynamo-sosp2007.pdf)
    - Bài báo Dynamo đã khởi đầu cho cuộc cách mạng NoSQL
- [2007: Những gì mà lập trình viên nên biết về bộ nhớ (rất dài, ngay cả tác giả cũng khuyến khích bỏ qua vài phần) (What Every Programmer Should Know About Memory (very long, and the author encourages skipping of some sections))](https://www.akkadia.org/drepper/cpumemory.pdf)
    - 2012: AddressSanitizer: Kiểm tra nhanh tính đúng đắn của địa chỉ (A Fast Address Sanity Checker):
        - [Bài nghiên cứu](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/37752.pdf)
        - [video](https://www.usenix.org/conference/atc12/technical-sessions/presentation/serebryany)
    - 2013: Spanner: Google’s Globally-Distributed Database:
        - [Bài nghiên cứu](http://static.googleusercontent.com/media/research.google.com/en//archive/spanner-osdi2012.pdf)
        - [video](https://www.usenix.org/node/170855)
- [2014: Máy học: Lợi ích và những vấn đề cần tránh (Machine Learning: The High-Interest Credit Card of Technical Debt)](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43146.pdf)
- [2015: Continuous Pipelines at Google](http://static.googleusercontent.com/media/research.google.com/en/pubs/archive/43790.pdf)
- [2015: Sẵn sàng cho thay đổi lớn: Xây dựng hạ tầng dữ liệu của Google dành cho quảng cáo (High-Availability at Massive Scale: Building Google’s Data Infrastructure for Ads)](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44686.pdf)
- [2015: Tensorflow: Áp dụng máy học với dữ liệu lớn trên hệ thống phân tán tính toán song song (Large-Scale Machine Learning on Heterogeneous Distributed Systems)](http://download.tensorflow.org/paper/whitepaper2015.pdf )
- [2015: Lập trình viên tìm code như thế nào: Một trường hợp điển hình (How Developers Search for Code: A Case Study)](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43835.pdf)
- [2016: Borg, Omega, and Kubernetes](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44843.pdf)
- More papers: [1,000 papers](https://github.com/0voice/computer_expert_paper)
