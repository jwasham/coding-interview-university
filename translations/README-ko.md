# 코딩 면접 대학(Coding Interview University)

> 이 글은 원래 제가 소프트웨어 엔지니어가 되기 위해 정리한 짧은 주제들이었습니다.
> 그러나 지금은 보다시피 주제들이 굉장히 많아졌습니다. 아래 내용을 모두 습득한 후,
> [저는 아마존에 소프트웨어 엔지니어로 채용되었습니다](https://startupnextdoor.com/ive-been-acquired-by-amazon/?src=ciu)!
> 여러분은 아마 아래 글들을 모두 다 공부할 없을 겁니다. 아무튼 여러분에게 필요한 모든 것은 여기에 있습니다.
>
> 몇 달 동안 저는 하루에 8-12시간 정도 공부했습니다. 다음 글에는 제 이야기를 적어놓았습니다. [Google 면접을 위해 8개월 동안 풀 타임으로 공부한 이유](https://medium.freecodecamp.org/why-i-studied-full-time-for-8-months-for-a-google-interview-cc662ce9bb13)
>
> **반드시 읽어주세요:** 다시 한번 말하지만, 여러분은 여기에 있는 글들을 모두 알 필요는 없습니다. 저는 제가 알지 않아도 될 것에 많은 시간을 뺏겼습니다. 여러분의 귀중한 시간을 잃지 않게 해당 파트에 더 자세하게 적어놓겠습니다.
>
>여기에 정리된 글들은 아마존, 페이스북, 구글, 마이크로소프트 같은 거대 기업을 포함한 거의 모든 소프트웨어 회사의 면접을 준비하는 데에 도움이 될 것입니다.
>
>
> *행운을 빕니다!*

<details>
<summary>완료된 번역:</summary>

- [중국어](translations/README-cn.md)
- [베트남어](translations/README-vi.md)
- [스페인어](translations/README-es.md)
- [브라질 포르투갈어](translations/README-ptbr.md)
- [폴란드어](translations/README-pl.md)
- [타이완어](translations/README-tw.md)
- [일본어](translations/README-ja.md)
- [러시아어](translations/README-ru.md)
- [독일어](translations/README-de.md)
- [인도네시아어](translations/README-id.md)
- [크메르어](translations/README-kh.md)
- [우즈베크어](translations/README-uz.md)

</details>

<details>
<summary>진행 중인 번역:</summary>

- [힌디어](https://github.com/jwasham/coding-interview-university/issues/81)
- [히브리어](https://github.com/jwasham/coding-interview-university/issues/82)
- [아랍어](https://github.com/jwasham/coding-interview-university/issues/98)
- [터키어](https://github.com/jwasham/coding-interview-university/issues/90)
- [프랑스어](https://github.com/jwasham/coding-interview-university/issues/89)
- [러시아어](https://github.com/jwasham/coding-interview-university/issues/87)
- [우크라이나어](https://github.com/jwasham/coding-interview-university/issues/106)
- [한국어](https://github.com/jwasham/coding-interview-university/issues/118)
- [텔루구어](https://github.com/jwasham/coding-interview-university/issues/117)
- [우르두어](https://github.com/jwasham/coding-interview-university/issues/140)
- [태국어](https://github.com/jwasham/coding-interview-university/issues/156)
- [그리스어](https://github.com/jwasham/coding-interview-university/issues/166)
- [말라얄람어](https://github.com/jwasham/coding-interview-university/issues/239)

</details>

<div align="center">
	<hr />
    <p>
        <a href="https://github.com/sponsors/jwasham"><strong>Become a sponsor</strong> and support Coding Interview University!</a>
    </p>
    <hr />
</div>

## 이건 대체 뭐하는 건가요?

![Coding at the whiteboard - from HBO's Silicon Valley](https://d3j2pkmjtin6ou.cloudfront.net/coding-at-the-whiteboard-silicon-valley.png)

이 글은 저의 대기업의 소프트웨어 엔지니어가 되기 위한 여러 달에 걸친 공부계획을 적어놓은 것입니다.

**필요한 것:**
* 조금이라도 코딩을 해본 경험 (변수, 반복문, 메서드/함수 등등)
* 인내심
* 시간

주의) 이 글은 **소프트웨어 엔지니어**가 되기 위한 계획이지 웹 개발을 배우기 위한 것이 아닙니다.구글, 아마존, 페이스북 그리고 마이크로소프트 같은 대기업은 소프트웨어 엔지니어링이랑 웹 개발을 서로 다른 것으로 봅니다. 예를 들어, 아마존에는 프론트엔드 엔지니어와 소프트웨어 개발 엔지니어가 있습니다. 이 두 역할은 서로 나뉘어져있으므로 면접 역시 같게 보진 않을 것이고, 갖추어야할 역량 역시 다릅니다. 위의 회사들은 소프트웨어 개발자/엔지니어 역할에 좀 더 전문적인 컴퓨터 과학 지식을 요구합니다.

---

## 목차

### 공부 계획

- [이건 대체 뭐하는 건가요?](#이건-대체-뭐하는-건가요)
- [이걸 왜 해야하죠?](#이걸-왜-해야하죠)
- [어떻게 하면 되나요?](#어떻게-하면-되나요)
- [머리가 나쁘다고 자책하지 마세요](#머리가-나쁘다고-자책하지-마세요)
- [영상 자료에 관하여](#영상-자료에-관하여)
- [프로그래밍 언어 선택하기](#프로그래밍-언어-선택하기)
- [자료구조와 알고리즘에 대한 도서](#자료구조와-알고리즘에-대한-도서)
- [면접 준비 관련 도서](#면접-준비-관련-도서)
- [저와 같은 실수는 하지마세요](#저와-같은-실수는-하지마세요)
- [다루지 않을 것](#다루지-않을-것)
- [하루하루의 계획](#하루하루의-계획)
- [코딩 질문 연습하기](#코딩-질문-연습하기)
- [코딩 문제들](#코딩-문제들)

### 공부 주제

- [알고리즘 복잡도 / Big-O / 점근적 분석](#알고리즘-복잡도--big-o--점근적-분석)
- [자료구조](#자료구조)
  - [배열](#배열)
  - [링크드 리스트](#링크드-리스트)
  - [스택](#스택)
  - [큐](#큐)
  - [해시 테이블](#해시-테이블)
- [추가 지식](#추가-지식)
  - [이진 탐색/이진 검색](#이진-탐색)
  - [비트 연산](#비트-연산)
- [트리](#트리)
  - [트리 - 배경 지식](#트리---배경-지식)
  - [이진 탐색 트리 (BST)](#이진-탐색-트리-BST)
  - [힙 / 우선순위 큐 / 이진 힙](#힙--우선순위-큐--이진-힙)
  - 균형 탐색 트리 (간단한 개념)
  - 트리 순회: 전위 순회, 중위 순회, 후위 순회, 너비 우선 탐색(BFS), 깊이 우선 탐색(DFS)
- [정렬](#정렬)
  - 선택 정렬
  - 삽입 정렬
  - 힙 정렬
  - 퀵 정렬
  - 병합 정렬
- [그래프](#그래프)
  - 방향 그래프
  - 무방향 그래프
  - 인접 행렬
  - 인접 리스트
  - 그래프 순회: 너비 우선 탐색(BFS), 깊이 우선 탐색(DFS)
- [더 많은 지식](#더-많은-지식)
  - [재귀 (recursion)](#재귀-recursion)
  - [동적 프로그래밍 (Dynamic Programming)](#동적-프로그래밍-Dynamic-Programming)
  - [디자인-패턴](#디자인-패턴)
  - [조합과 확률](#조합과-확률)
  - [NP, NP-완전, 근사 알고리즘](#NP-NP-완전-근사-알고리즘)
  - [컴퓨터가 프로그램을 처리하는 방식](#컴퓨터가-프로그램을-처리하는-방식)
  - [캐시](#캐시)
  - [프로세스와 쓰레드](#프로세스와-쓰레드)
  - [테스트](#테스트)
  - [문자열 검색 & 조작](#문자열-검색--조작)
  - [트라이](#트라이)
  - [부동 소수점](#부동-소수점)
  - [유니코드](#유니코드)
  - [엔디언(Endianness)](#endianness)
  - [네트워크](#네트워크)
- [최종 검토](#최종-검토)

### 구직 & 취업하기

- [면접이 얼마 남지 않았을 때](#면접이-얼마-남지-않았을-때)
- [이력서](#이력서)
- [인터뷰가 다가오면 생각해보기](#인터뷰가-다가오면-생각해보기)
- [면접관에게 받았던 질문들](#면접관에게-받았던-질문들)
- [취직했다면](#취직했다면)

**---------------- 이 아래로는 전부 선택사항입니다 ----------------**

- [추가 도서](#additional-books)
- [추가 주제](#additional-learning)
  - [컴파일러](#compilers)
  - [Emacs 와 vi(m)](#emacs-and-vim)
  - [유닉스 명령어 도구](#unix-command-line-tools)
  - [정보 이론](#information-theory-videos)
  - [패리티 & 해밍코드](#parity--hamming-code)
  - [엔트로피](#entropy)
  - [암호기법](#cryptography)
  - [압축](#compression)
  - [컴퓨터 보안](#computer-security)
  - [가비지 콜렉션](#garbage-collection)
  - [병렬 프로그래밍](#parallel-programming)
  - [메세징, 직렬화, 그리고 큐잉 시스템](#messaging-serialization-and-queueing-systems)
  - [A* 알고리즘](#a)
  - [고속 푸리에 변환(FFT)](#fast-fourier-transform)
  - [블룸 필터](#bloom-filter)
  - [HyperLogLog](#hyperloglog)
  - [Locality-Sensitive Hashing](#locality-sensitive-hashing)
  - [van Emde Boas 트리](#van-emde-boas-trees)
  - [Augmented Data Structures](#augmented-data-structures)
  - [균형 탐색 트리](#balanced-search-trees)
    - AVL 트리
    - Splay 트리
    - 레드블랙 트리(RBT)
    - 2-3 탐색 트리
    - 2-3-4 트리(aka 2-4 트리)
    - N-ary (K-ary, M-ary) 트리
    - B-트리
  - [k-D 트리](#k-d-trees)
  - [스킵 리스트](#skip-lists)
  - [네트워크 플로우(유량)](#network-flows)
  - [분리집합 & 유니온 파인드(Disjoint Sets & Union Find)](#disjoint-sets--union-find)
  - [빠른 프로세싱을 위한 수학](#math-for-fast-processing)
  - [트립](#treap)
  - [선형 계획법](#linear-programming)
  - [기하학, 볼록 껍질](#geometry-convex-hull)
  - [이산수학](#discrete-math)
  - [기계학습](#machine-learning)
- [몇몇 주제에 대한 세부사항](#몇몇-주제에-대한-세부사항)
- [영상 자료](#video-series)
- [컴퓨터 과학 강의들](#컴퓨터-과학-강의들)
- [논문들](#논문들)

---

## 이걸 왜 해야하죠?

대기업에서 소프트웨어 엔지니어로 일하기 위해서는 알아야 할 것들이 많습니다.

만약 여러분이 저처럼 컴퓨터 관련 전공이 아니라면 이 과정은 전공자들을 따라잡으면서도 4년이라는 시간을 절약하게 해줍니다.

제가 이 프로젝트를 시작했을 때, 저는 힙이나 스택, 시간 복잡도, 트리, 그래프 순회 등에 대하여 전혀 아는 바가 없었습니다. 만약 그 때의 제가 정렬 알고리즘을 직접 코딩해야 할 일이 있었다면, 아마 제 코드는 끔찍한 상태였을 겁니다.
제가 사용했던 모든 자료 구조는 이미 언어 안에서 구현되어 있던 것들이고, 저는 그것들이 보이지 않는 곳에서 어떻게 작동하고 있는지 몰랐습니다. 실행 중인 프로세스가 메모리 초과 에러를 메시지를 보내지 않는 이상 메모리를 관리할 필요조차 없었고, 에러가 발생하면 그제야 해결책을 찾곤 했습니다. 또한 저는 몇몇 다차원 배열이나 연관 배열을 사용한 적은 있지만, 자료구조를 완전 밑바닥부터 구현해 본 적은 없었습니다.

매우 긴 과정이고 몇 달이나 걸릴지 모릅니다. 그렇치만 여러분이 이런 분야에 익숙하다면 분명 훨씬 더 적은 시간이 걸릴 겁니다.

## 어떻게 하면 되나요?

아래에 있는 모든 것들은 대략적인 개요이며 여러분은 위에서 아래 순서대로 차근차근 진행해야 합니다.

이 글은 진행 상황 파악을 위해 목차를 만드는 등 Github 특유의 마크다운을 이용한 방식을 사용하고 있습니다.

**새 브랜치를 만들어서 중괄호에 x를 추가하는 식으로 항목을 체크하세요: [x]**

    브랜치를 포크(fork)하고 아래의 커맨드들을 입력하세요

포크 버튼을 눌러 Github <https://github.com/jwasham/coding-interview-university> 레포지토리를 포크하세요.

로컬 레포지토리에 클론(clone)하기:

    git clone git@github.com:<your_github_username>/coding-interview-university.git
    git checkout -b progress
    git remote add jwasham https://github.com/jwasham/coding-interview-university
    git fetch --all

끝났으면 박스를 x로 체크하기:

    git add .
    git commit -m "Marked x"
    git rebase jwasham/main
    git push --set-upstream origin progress
    git push --force

[Github식 마크다운에 대하여](https://guides.github.com/features/mastering-markdown/#GitHub-flavored-markdown)

## 머리가 나쁘다고 자책하지 마세요

- 성공한 소프트웨어 엔지니어들은 똑똑합니다. 하지만 그들조차도 자신들의 지적 능력에 대해서 불안감을 갖기 일쑤입니다.
- [천재 프로그래머에 대한 미신(迷信)](https://www.youtube.com/watch?v=0SARbwvhupQ)
- [위험한 홀로서기: 테크 산업의 보이지 않는 괴물들의 전쟁](https://www.youtube.com/watch?v=1i8ylq4j_EY)

## 영상 자료에 관하여

몇몇 영상들은 Cousera, Edx에 등록을 해야만 접근할 수 있습니다. 이들을 MOOCs라고 부르기도 합니다.
가끔씩 강의가 진행중이지 않아서 몇 달 동안 기다려야 할 수도 있습니다.

YouTube 온라인 강의 동영상과 같이 무료이고 항상 접근 가능한 동영상 소스들을 추가해주신다면 많은 분이 온라인 강의가 다시 시작할 때까지 기다리지 않고 언제나 공부할 수 있게 될 테니 정말 감사하겠습니다.

## 프로그래밍 언어 선택하기

여러분은 코딩 면접용 프로그래밍 언어도 선택해야하지만, 컴퓨터 과학을 배우기 위한 프로그래밍 언어 역시 선택해야합니다.

왠만하면 둘 다에 해당하는 언어를 골라서 일단 하나에 숙달되도록 하는 것을 추천합니다.

### 이 공부 계획을 위해서

제가 공부할 때에는 C와 Python이란 2가지의 언어를 주로 썼습니다.

* C: 굉장히 저급 언어입니다. 포인터와 메모리 할당 및 해제를 직접 다루어서 데이터 구조와 알고리즘을 뼈 속 깊이 새겨둘 수 있게 됩니다. Python이나 Java와 같은 고급 언어들은 이런 걸 알아서 처리하기 때문에 가려져 있습니다. 이는 일상 업무를 할 때에는 아주 훌륭하지만 만약 저급 수준 데이터 구조가 어떻게 짜여져있는지 자체를 배우는 중이라면 c 언어를 사용해 기계와 가까워 지는 것이 더 좋습니다. 
    - C 언어는 어디에나 있습니다. 여러분은 공부하는 내내 이 사실을 깨닫게 될겁니다.
    - [The C Programming Language, Vol 2](https://www.amazon.com/Programming-Language-Brian-W-Kernighan/dp/0131103628)
        - 이 책은 짧은 책이지만 여러분이 C 언어를 잘 다루게 만들어주고, 만약 조금씩 연습해본다면 더 빠르게 발전할 겁니다. C 언어를 이해하면 프로그램이 어떻게 돌아가고 메모리가 어떻게 작동하는지 이해하는데 도움을 줍니다.
        - 여러분은 이 책을 깊게 파고들 필요는 없습니다(심지어 다 안 읽으셔도 됩니다). 그저 여러분이 C 언어를 읽고 쓰는 데에 익숙해질 정도면 됩니다.
        - [이 책의 문제에 대한 정답들](https://github.com/lekkas/c-algorithms)

* Python: 현대적이고 굉장히 많은 것들을 할 수 있습니다. 저는 그냥 완전 유용하고 면접 때 써야할 코드를 줄여주기도 해서 배웠습니다.

이건 물론 제 취향일 뿐이고 여러분은 원하시는 걸 하시면 됩니다.

아마 필요없으실 수도 있지만, 새 언어를 배우기 위한 여러 사이트 주소들입니다.
- [Exercism](https://exercism.org/tracks)
- [Codewars](http://www.codewars.com)
- [Codility](https://codility.com/programmers/)
- [HackerEarth](https://www.hackerearth.com/)
- [Sphere Online Judge (spoj)](http://www.spoj.com/)
- [Codechef](https://www.codechef.com/)
- [Codeforces](https://codeforces.com/)

### 면접을 위해서

면접에서는 여러분이 쓰기에 편한 언어를 사용해도 되지만, 대기업들은 보통 다음과 같은 정해진 언어들을 사용합니다:

- C++
- Java
- Python

아래 언어들을 사용할 수도 있지만 제대로 확인하셔야합니다. 주의사항이 있을 수도 있습니다:

- JavaScript
- Ruby

코딩 면접를 위한 언어를 선택하는 것과 관련하여 제가 쓴 글입니다: [코딩 면접을 위한 언어 선택하기](https://startupnextdoor.com/important-pick-one-language-for-the-coding-interview/)
이 글은 제가 기반으로 사용한 원본 글입니다: http://blog.codingforinterviews.com/best-programming-language-jobs/

여러분은 여러분이 선택한 언어에 대해 매우 익숙하고 잘 알아야 합니다.

언어 선택에 도움이 될 만한 읽을 거리들
- [코딩 면접을 위해 맞는 언어 고르기](http://www.byte-by-byte.com/choose-the-right-language-for-your-coding-interview/)

[프로그래밍 언어 참고목록](programming-language-resources.md)

## 자료구조와 알고리즘에 대한 도서

이 책들은 여러분의 컴퓨터 과학에 대한 기반을 다져줄 책들입니다.

그냥 아무거나 하나 여러분이 편한 언어와 관련된 것으로 선택하세요. 엄청나게 많은 책 읽기와 코딩을 하게 될 겁니다.

### C

- [Algorithms in C, Parts 1-5 (Bundle), 3rd Edition](https://www.amazon.com/Algorithms-Parts-1-5-Bundle-Fundamentals/dp/0201756080)
    - 기본적인 것들, 데이터 구조들, 정렬, 탐색, 그리고 그래프와 관련된 알고리즘 등이 들어있습니다.

### Python

- [Data Structures and Algorithms in Python](https://www.amazon.com/Structures-Algorithms-Python-Michael-Goodrich/dp/1118290275/)
  - by Goodrich, Tamassia, Goldwasser
  - 저는 이 책이 좋습니다. Python에 대한 모든 것과 부가적인 것을 다룹니다.
  - Python적인 코드
  - 저의 열렬한 서적 보고서: https://startupnextdoor.com/book-report-data-structures-and-algorithms-in-python/

### Java

여러분이 선택하세요:

- Goodrich, Tamassia, Goldwasser
    - [Data Structures and Algorithms in Java](https://www.amazon.com/Data-Structures-Algorithms-Michael-Goodrich/dp/1118771338/)
- Sedgewick and Wayne:
    - [Algorithms](https://www.amazon.com/Algorithms-4th-Robert-Sedgewick/dp/032157351X/)
    - 책의 내용을 가르쳐주는 무료 Cousera 강의 (저자가 가르쳐줍니다!):
        - [Algorithms I](https://www.coursera.org/learn/algorithms-part1)
        - [Algorithms II](https://www.coursera.org/learn/algorithms-part2)


### C++

여러분이 선택하세요:

- Goodrich, Tamassia, and Mount
    - [Data Structures and Algorithms in C++, 2nd Edition](https://www.amazon.com/Data-Structures-Algorithms-Michael-Goodrich/dp/0470383275)
- Sedgewick and Wayne
    - [Algorithms in C++, Parts 1-4: Fundamentals, Data Structure, Sorting, Searching](https://www.amazon.com/Algorithms-Parts-1-4-Fundamentals-Structure/dp/0201350882/)
    - [Algorithms in C++ Part 5: Graph Algorithms](https://www.amazon.com/Algorithms-Part-Graph-3rd-Pt-5/dp/0201361183/).


## 면접 준비 관련 도서

여러분은 이 책 뭉터기들을 다 살 필요는 없습니다. 솔직하게 말해서 "Cracking the Coding Interview"라는 책 하나면 충분합니다. 하지만 저는 더 준비해보기 위해 많이 사보았습니다. 결국 항상 너무 과했지만 말이죠.

저는 이 책을 둘 다 샀습니다. 굉장히 많은 걸 준비하게 해주었습니다.

- [Programming Interviews Exposed: Coding Your Way Through the Interview, 4th Edition](https://www.amazon.com/Programming-Interviews-Exposed-Through-Interview/dp/111941847X/)
  - C++와 Java로 답변되어 있습니다.
  - Cracking the Coding Interview 책을 위한 좋은 사전학습용 책입니다.
  - 너무 어렵지 않습니다. 대부분의 문제가 여러분이 직접 겪게될 면접 문제보다 쉬울지도 모릅니다(제가 읽기로는)
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
  - JAVA로 답변되어 있습니다.

### 만일 당신이 시간이 넘쳐난다면

하나를 선택하세요:

- [Elements of Programming Interviews (C++ version)](https://www.amazon.com/Elements-Programming-Interviews-Insiders-Guide/dp/1479274836)
- [Elements of Programming Interviews in Python](https://www.amazon.com/Elements-Programming-Interviews-Python-Insiders/dp/1537713949/)
- [Elements of Programming Interviews (Java version)](https://www.amazon.com/Elements-Programming-Interviews-Java-Insiders/dp/1517435803/)
        - [Companion Project - Method Stub and Test Cases for Every Problem in the Book](https://github.com/gardncl/elements-of-programming-interviews)

## 저와 같은 실수는 하지마세요

이 문서는 많은 달에 걸쳐서 추가되고 있고, 맞습니다, 이미 제 손을 떠났습니다.

여기에 제가 저지른 몇 가지 실수들을 적어놓았으니 여러분은 참고하시고 더 나은 방향으로 나아가시길 바랍니다. 물론 몇 달의 시간도 절약하실 겁니다.

### 1. 당신은 이것을 다 기억하지 못할 것이다

저는 수 시간의 비디오를 보고 방대한 양의 노트를 작성했지만, 몇 달 뒤에는 대부분의 내용을 기억하지 못했습니다. 저는 3일에 걸쳐 제가 작성한 노트를 보고 flashcard를 제작해서 복습할 수 있게 만들었습니다. 그 많은 지식들까지는 사실 필요 없었습니다.

꼭 읽고 제가 한 실수들을 반복하지 않길 바랍니다:

[Retaining Computer Science Knowledge](https://startupnextdoor.com/retaining-computer-science-knowledge/)

### 2. 요약집(Flashcard)을 만들자

이 문제를 해결하기 위해 2가지 종류(일반적인 내용, 코드)의 요약집을 보관하고 추가할 수 있는 조그만 사이트를 만들었습니다.
각 정리본은 다른 형식을 가지고 있습니다. 저는 모바일 우선인 웹사이트를 만들어서 제 휴대폰이나 태블릿 등 어디서나 볼 수 있게 했습니다.

여러분만의 요약집을 무료로 만들어봅시다:

- [Flashcard 사이트 repo](https://github.com/jwasham/computer-science-flash-cards)

**제 요약집을 그대로 사용하시는 건 추천하지 않습니다.** 거기엔 너무 많은 것들이 있고 대부분은 여러분이 필요하지 않은 것들뿐입니다.

하지만 제 말을 듣고 싶지 않은 청개구리 같은 분들을 위해, 주소는 남겨두겠습니다:
- [내 flashcard 데이터베이스 (1200 cards)](https://github.com/jwasham/computer-science-flash-cards/blob/main/cards-jwasham.db):
- [내 flashcard 데이터베이스 (확장판 - 1800 cards)](https://github.com/jwasham/computer-science-flash-cards/blob/main/cards-jwasham-extreme.db):

앞에서도 언급했듯이 저는 불필요하게 많은 것을 공부하려고 했고, 카드의 내용들은 어셈블리 언어와 Python의 자잘한 지식들부터 기계 학습과 통계학까지 넘나들게 되었습니다. 이건 필요한 것에서 엇나가도 너무 엇나간 겁니다.

**flashcard에 대한 참고사항:** 한 번 답을 맞췄다고 해서 안다고 표시하지 맙시다. 정확히 알기 전까지는 같은 카드를 보고 여러 번 맞추어 보아야합니다.
반복 학습은 그 지식을 뇌에 깊이 각인시켜 줄 겁니다.

제 사이트를 사용하는 대신 [Anki](http://ankisrs.net/)를 사용해도 됩니다. 여러 번 추천받았던 사이트입니다. 이 사이트는 반복 시스템을 통해 여러분의 기억을 돕습니다. 사용자 친화적이며, 모든 플랫폼에서 사용 가능합니다. 또한 클라우드 동기화 시스템을 제공합니다. iOS에서는 2만 5천 원이지만 다른 플랫폼에서는 무료입니다.

Anki 형식의 내 요약집 데이터베이스: https://ankiweb.net/shared/info/25173560 ([@xiewenya](https://github.com/xiewenya)에게 감사의 말을 전합니다).

어떤 분들이 공백과 관련된 포맷팅 문제가 있다고 언급하셨는데 다음 방법으로 해결할 수 있습니다: open deck, edit card, click cards, select the "styling" radio button, add the member "white-space: pre;" to the card class.

### 3. 배우는 동안에 코딩 면접 질문들을 보기

굉장히 중요합니다!

코딩 면접 질문들을 여러분이 데이터 구조와 알고리즘을 배우는 동안에 봐두세요.

한 주제를 공부하고 충분히 익숙해졌다고 느낀다면(예를 들어 그것이 **연결 리스트**라면):
1. [코딩 면접 책들](#면접-준비-관련-도서)이나 더 밑에서 다룰 코딩 문제 사이트들을 준비합니다.
1. 연결 리스트에 관한 문제를 두세 문제 풀어봅니다.
1. 다음 배울 주제로 넘어갑니다.
1. 나중에, 다시 돌아와서 또 다른 두세 문제를 연결 리스트와 관련해서 풀어봅니다.
1. 이를 새 내용을 배울 때마다 반복합니다.

**반드시 여러분이 배우는 동안에 문제를 푸세요, 다 배우고 나서가 아니라.**

여러분은 지식 자체가 필요해서 고용되는 것이 아니라 그 지식을 활용하기 위해서 고용되는 것입니다.

이를 위한 엄청나게 많은 자료들이 아래에 있습니다. 계속 합시다.

### 4. 집중하기

주의를 산만하게 만드는 많은 것들이 우리의 귀중한 시간을 뺏어갑니다. 주의를 집중하는 일은 물론 힘듭니다. 가사 없는 음악을 듣다보면 좀 더 쉽게 집중하실 수 있습니다.

## 다루지 않을 것

이 기술들은 널리 퍼져 있는 기술이지만, 여기서 다루는 부분은 아닙니다:

- SQL
- Javascript
- HTML, CSS, 그리고 다른 프론트엔드 기술들

## 하루하루의 계획

이 과정에는 엄청나게 많은 주제가 있습니다. 어떤 주제들은 며칠이 걸리거나 심지어 아마 일주일이나 그 이상이 걸릴지도 모릅니다. 여러분의 일정에 달려있습니다.

매일매일, 다음 주제로 넘어가면서, 주제에 관한 동영상들을 보고, 그리고 실제로 선택한 언어의 데이터 구조나 알고리즘을 구현하세요.

여기서 제 코드들을 볼 수 있습니다:
- [C](https://github.com/jwasham/practice-c)
- [C++](https://github.com/jwasham/practice-cpp)
- [Python](https://github.com/jwasham/practice-python)

모든 알고리즘을 외울 필요는 없습니다. 그저 그걸 이해하고 나만의 방식으로 구현할 수 있으면 됩니다.

## 코딩 질문 연습하기

    왜 이게 여기 있죠? 전 아직 면접볼 준비가 안되어 있는데요.

[그렇다면 이걸 다시 읽어보세요](#3-배우는-동안에-코딩-면접-질문들을-보기)

왜 프로그래밍 문제들을 풀면서 연습히야하는가:
- 문제 인식, 그리고 어디에 어떤 데이터 구조와 알고리즘을 썼어야했는지 알 수 있음
- 문제의 요구사항이 뭐였는지 이해할 수 있음
- 실제 면접처럼 자신만의 방식으로 문제를 설명할 수 있음
- 컴퓨터가 아니라 화이트보드나 종이에 코딩함
- 시간과 공간 복잡도를 함께 생각하게 됨(아래의 Big-O를 볼 것)
- 코드가 맞나 확인하게 됨

면접에서 방법론적인, 양방향 소통인 문제 해결에 대한 훌륭한 소개글이 있습니다. 물론 프로그래밍 면접 책들에서도 배울 수 있겠지만 이 글이 더 미친 수준이라 봅니다: [Algorithm design canvas](http://www.hiredintech.com/algorithm-design/)

컴퓨터가 아니라 화이트보드나 종이에 직접 코드를 적어보세요. 그리고 여기에 값들을 넣어보면서 테스트해보세요. 그리고는 컴퓨터에 코드를 치고 테스트해보세요.

만약 화이트보드가 집에 없다면, 문방구에 가서 그림용 공책을 사서 거기서 연습해보세요.
이건 제 "소파 화이트보드"입니다. 크기 비교를 위해 사진에 펜을 추가해봤습니다. 펜을 쓰신다면 몇 분 후 지워지지 않는 펜을 원망하는 자신을 보게 될 겁니다.
엄청 빨리 더러워집니다. **저는 그래서 연필과 지우개를 썼습니다.**

![제 소파 화이트보드](https://d3j2pkmjtin6ou.cloudfront.net/art_board_sm_2.jpg)

**코딩 문제 연습은 프로그래밍 문제에 대한 답을 외우는 연습이 아니다.**

## 코딩 문제들
[여기 있는](#면접-준비-관련-도서) 코딩 면접 책들을 잊지마세요.

문제 푸는 법들:
- [해답을 찾는 법](https://www.topcoder.com/community/competitive-programming/tutorials/how-to-find-a-solution/)
- [탑코더 문제 상태 파헤치기](https://www.topcoder.com/community/competitive-programming/tutorials/how-to-dissect-a-topcoder-problem-statement/)

코딩 면접 질문 관련 동영상들:
- [IDeserve (동영상 88개)](https://www.youtube.com/playlist?list=PLamzFoFxwoNjPfxzaWqs7cZGsPYy0x_gI)
- [Tushar Roy (플레이리스트 5개)](https://www.youtube.com/user/tusharroy2525/playlists?shelf_id=2&view=50&sort=dd)
    - Super for walkthroughs of problem solutions
- [Nick White - 릿코드 해답 (동영상 187개)](https://www.youtube.com/playlist?list=PLU_sdQYzUj2keVENTP0a5rdykRSgg9Wp-)
    - Good explanations of solution and the code
    - You can watch several in a short time
- [FisherCoder - 릿코드 해답](https://youtube.com/FisherCoder)

도전 사이트들:
- [릿코드](https://leetcode.com/)
    - My favorite coding problem site. It's worth the subscription money for the 1-2 months you'll likely be preparing.
    - See Nick White and FisherCoder Videos above for code walk-throughs.
- [해커랭크](https://www.hackerrank.com/)
- [탑코더](https://www.topcoder.com/)
- [Geeks for Geeks](https://practice.geeksforgeeks.org/explore/?page=1)
- [InterviewBit](https://www.interviewbit.com/)
- [Project Euler](https://projecteuler.net/)

## 이제 시작해봅시다

네, 잡설은 그만하고, 배워봅시다!

하지만 위의 코딩 문제를 배우는 중에 같이 풀어보는 거 절대 잊지마세요!

## 알고리즘 복잡도 / Big-O / 점근적 분석

- 구현할 것은 없다.
- 여기에는 다양한 영상들이 있다. 이해할 때까지 충분히 보고 언제든지 다시 돌아와서 복습할 수 있다.
- 일부 강의가 너무 수학적이라면, 아래로 가서 이산 수학에 대한 동영상을 보며 배경 지식을 쌓아보세요.
- [ ] [Harvard CS50 - Asymptotic Notation (video)](https://www.youtube.com/watch?v=iOq5kSKqeR4)
- [ ] [Big O Notations (general quick tutorial) (video)](https://www.youtube.com/watch?v=V6mKVRU1evU)
- [ ] [Big O Notation (and Omega and Theta) - best mathematical explanation (video)](https://www.youtube.com/watch?v=ei-A_wy5Yxw&index=2&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [ ] Skiena:
  - [동영상](https://www.youtube.com/watch?v=gSyDMtdPNpU&index=2&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
  - [슬라이드 자료](http://www3.cs.stonybrook.edu/~algorith/video-lectures/2007/lecture2.pdf)
- [ ] [A Gentle Introduction to Algorithm Complexity Analysis](http://discrete.gr/complexity/)
- [ ] [Orders of Growth (video)](https://class.coursera.org/algorithmicthink1-004/lecture/59)
- [ ] [Asymptotics (video)](https://class.coursera.org/algorithmicthink1-004/lecture/61)
- [ ] [UC Berkeley Big O (video)](https://archive.org/details/ucberkeley_webcast_VIS4YDpuP98)
- [ ] [UC Berkeley Big Omega (video)](https://archive.org/details/ucberkeley_webcast_ca3e7UVmeUc)
- [ ] [Amortized Analysis (video)](https://www.youtube.com/watch?v=B3SpQZaAZP4&index=10&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [ ] [Illustrating "Big O" (video)](https://class.coursera.org/algorithmicthink1-004/lecture/63)
- [ ] TopCoder (includes recurrence relations and master theorem):
  - [Computational Complexity: Section 1](https://www.topcoder.com/community/competitive-programming/tutorials/computational-complexity-section-1/)
  - [Computational Complexity: Section 2](https://www.topcoder.com/community/competitive-programming/tutorials/computational-complexity-section-2/)
- [ ] [Cheat sheet](http://bigocheatsheet.com/)
- [ ] [[Review] Big-O notation in 5 minutes (video)](https://youtu.be/__vX2sjlpXU)

## 자료구조

- ### 배열
  - 자동 리사이징 벡터 구현하기
  - [ ] 설명:
    - [배열 (영상)](https://www.coursera.org/learn/data-structures/lecture/OsBSF/arrays)
    - [UCBerkley CS61B - 선형과 다차원 배열 (영상)](https://youtu.be/Wp8oiO_CZZE?t=15m32s)
    - [동적 배열 (영상)](https://www.coursera.org/learn/data-structures/lecture/EwbnV/dynamic-arrays)
    - [가변 배열 (영상)](https://www.youtube.com/watch?v=1jtrQqYpt7g)
  - [ ] 벡터 구현하기 (자동 리사이징을 포함한 동적 배열):
    - [ ] 배열, 포인터 및 인덱싱 대신하여 특정 인덱스에 접근하는 포인터 연산을 통한 코딩 연습
    - [ ] 메모리 할당을 포함한 새 배열
      - 배열 메소드 등의 기능을 활용하지 않으면서 정수 배열에 메모리를 할당할 수 있어야 함
      - 16으로 시작하거나 시작하는 숫자가 크다면 2의 제곱수(16, 32, 64, 128)로 시작
    - [ ] size() - 항목의 개수
    - [ ] capacity() - 들어갈 수 있는 항목의 최대 개수
    - [ ] is_empty()
    - [ ] at(index) - 인덱스에 있는 항목을 돌려주고, 인덱스가 범위 밖이면 에러를 냄
    - [ ] push(item)
    - [ ] insert(index, item) - index에 item을 삽입하고 기존 인덱스의 값부터 쭉 오른쪽으로 쉬프트
    - [ ] prepend(item) - 맨 앞에 원소를 삽입
    - [ ] pop() - 마지막 원소를 삭제하고 값을 돌려준다
    - [ ] delete(index) - delete item at index, shifting all trailing elements left
    - [ ] remove(item) - looks for value and removes index holding it (even if in multiple places)
    - [ ] find(item) - looks for value and returns first index with that value, -1 if not found
    - [ ] resize(new_capacity) // private 함수
      - 용량이 꽉 차면, 그 두배로 크기를 조정한다.
      - item을 하나 꺼낼 때, 용량이 1/4이라면, 용량을 절반으로 줄인다.
  - [ ] 시간 복잡도
    - 접근, 수정, 끝에 추가/삭제하는 데 O(1)
    - 다른 곳에 추가/삭제하는 데 O(n)
  - [ ] 공간 복잡도
    - 메모리에 연속적으로 있어서, 근접성이 성능을 향상시킨다.
    - 필요한 공간 = (n 이상인 배열의 용량) * item의 크기, 하지만 2n 크기에서는 여전히 O(n)

- ### 링크드 리스트
  - [ ] 설명:
    - [ ] [단일 연결 리스트 (영상)](https://www.coursera.org/learn/data-structures/lecture/kHhgK/singly-linked-lists)
    - [ ] [CS 61B - 연결 리스트 1 (영상)](https://archive.org/details/ucberkeley_webcast_htzJdKoEmO0)
    - [ ] [CS 61B - 연결 리스트 2 (영상)](https://archive.org/details/ucberkeley_webcast_-c4I3gFYe3w)
    - [ ] [[Review] Linked lists in 4 minutes (video)](https://youtu.be/F8AbOfQwl1c)
  - [ ] [C Code (video)](https://www.youtube.com/watch?v=QN6FPiD0Gzo)
            - 전체 영상은 아니고, 노드 구조와 메모리 할당에 대한 부분입니다.
  - [ ] 연결 리스트 vs 배열:
    - [Core Linked Lists Vs Arrays (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/rjBs9/core-linked-lists-vs-arrays)
    - [실세계에서의 연결 리스트 Vs 배열 (영상)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/QUaUd/in-the-real-world-lists-vs-arrays)
  - [ ] [왜 연결 리스트를 기피해야 하는지 (영상)](https://www.youtube.com/watch?v=YQs6IC-vgmo)
  - [ ] 짚고가기: 이중 포인터에 대한 지식이 필요하다면:
        (for when you pass a pointer to a function that may change the address where that pointer points)
        이 페이지는 포인터가 포인터를 가리키는 것을 파악하는 정도입니다. 저는 아래 목록을 순서대로 읽지 않기를 권장합니다. 가독성과 유지 보수성이 더 좋기 때문입니다.
    - [Pointers to Pointers](https://www.eskimo.com/~scs/cclass/int/sx8.html)
  - [ ] 구현 (저는 tail 포인터가 있는 것과 없는 것 모두 구현했었습니다.):
    - [ ] size() - 리스트 안의 데이터 개수를 반환한다.
    - [ ] empty() - 리스트가 비어있다면 true를 반환한다.
    - [ ] value_at(index) - index번째 위치의 value을 반환한다. (가장 앞은 0부터 시작한다.)
    - [ ] push_front(value) - 가장 앞에 value를 추가한다.
    - [ ] pop_front() - 가장 앞에 있는 것을 제거하고, 그 value를 반환한다.
    - [ ] push_back(value) - 가장 끝에 value을 추가한다.
    - [ ] pop_back() - 가장 끝에 있는 것을 제거하고, 그 value를 반환한다.
    - [ ] front() - 가장 앞에 있는 것의 value를 가져온다.
    - [ ] back() - 가장 끝에 있는 것의 value를 가져온다.
    - [ ] insert(index, value) - index번째 위치에 value를 추가한다. 즉, index번째에 새로 추가된 것이 기존의 index번째에 있던 것을 가리킨다.
    - [ ] erase(index) - index번째에 있는 노드를 삭제한다.
    - [ ] value_n_from_end(n) - 뒤에서부터 n번째에 있는 노드의 value를 반환한다.
    - [ ] reverse() - 리스트를 뒤집는다.
    - [ ] remove_value(value) - value와 같은 값을 가지는 첫 번째 노드를 제거한다.
  - [ ] 이중 연결 리스트
    - [설명 (영상)](https://www.coursera.org/learn/data-structures/lecture/jpGKD/doubly-linked-lists)
    - 구현할 필요는 없습니다.

- ### 스택
  - [ ] [Stacks (video)](https://www.coursera.org/learn/data-structures/lecture/UdKzQ/stacks)
  - [ ] [[Review] Stacks in 3 minutes (video)](https://youtu.be/KcT3aVgrrpU)
  - [ ] Will not implement. Implementing with array is trivial.

- ### 큐
  - [ ] [Queue (video)](https://www.coursera.org/lecture/data-structures/queues-EShpq)
  - [ ] [Circular buffer/FIFO](https://en.wikipedia.org/wiki/Circular_buffer)05_04-priorityQueuesAndDeques.mp4)
  - [ ] [[Review] Queues in 3 minutes (video)](https://youtu.be/D6gu-_tmEpQ)
  - [ ] tail 포인터가 있는 연결 리스트를 사용하여 구현하기:
    - enqueue(value) - tail이 가리키는 곳에 value를 추가한다
    - dequeue() - value를 반환하고 가장 최근에 추가된 원소(front)를 제거한다.
    - empty()
  - [ ] 고정 길이 배열을 사용하여 구현하기:
    - enqueue(value) - 사용 가능한 저장 공간의 끝에 item을 추가한다.
    - dequeue() - value를 반환하고 가장 최근에 추가된 원소를 제거한다.
    - empty()
    - full()
  - [ ] 비용:
    - a bad implementation using linked list where you enqueue at head and dequeue at tail would be O(n)
            because you'd need the next to last element, causing a full traversal each dequeue
    - enqueue: O(1) (amortized, linked list and array [probing])
    - dequeue: O(1) (linked list and array)
    - empty: O(1) (linked list and array)

- ### 해시 테이블
  - [ ] 동영상들:
    - [ ] [Hashing with Chaining (video)](https://www.youtube.com/watch?v=0M_kIqhwbFo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=8)
    - [ ] [Table Doubling, Karp-Rabin (video)](https://www.youtube.com/watch?v=BRO7mVIFt08&index=9&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [Open Addressing, Cryptographic Hashing (video)](https://www.youtube.com/watch?v=rvdJDijO2Ro&index=10&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [PyCon 2010: The Mighty Dictionary (video)](https://www.youtube.com/watch?v=C4Kc8xzcA68)
    - [ ] [(Advanced) Randomization: Universal & Perfect Hashing (video)](https://www.youtube.com/watch?v=z0lJ2k0sl1g&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=11)
    - [ ] [(Advanced) Perfect hashing (video)](https://www.youtube.com/watch?v=N0COwN14gt0&list=PL2B4EEwhKD-NbwZ4ezj7gyc_3yNrojKM9&index=4)
    - [ ] [[Review] Hash tables in 4 minutes (video)](https://youtu.be/knV86FlSXJ8)

  - [ ] 온라인 강의들:
    - [ ] [Core Hash Tables (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/m7UuP/core-hash-tables)
    - [ ] [Data Structures (video)](https://www.coursera.org/learn/data-structures/home/week/3)
    - [ ] [Phone Book Problem (video)](https://www.coursera.org/learn/data-structures/lecture/NYZZP/phone-book-problem)
    - [ ] distributed hash tables:
      - [Instant Uploads And Storage Optimization In Dropbox (video)](https://www.coursera.org/learn/data-structures/lecture/DvaIb/instant-uploads-and-storage-optimization-in-dropbox)
      - [Distributed Hash Tables (video)](https://www.coursera.org/learn/data-structures/lecture/tvH8H/distributed-hash-tables)

  - [ ] Linear probing을 사용하여 배열로 구현해보기
    - hash(k, m) - m은 해시 테이블의 크기
    - add(key, value) - 키가 이미 존재한다면, 값을 갱신한다.
    - exists(key)
    - get(key)
    - remove(key)

## 추가 지식

- ### 이진 탐색
  - [ ] [Binary Search (video)](https://www.youtube.com/watch?v=D5SrAga1pno)
  - [ ] [Binary Search (video)](https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search)
  - [ ] [자세한 내용](https://www.topcoder.com/community/competitive-programming/tutorials/binary-search/)
  - [ ] [[Review] Binary search in 4 minutes (video)](https://youtu.be/fDKIpRe8GW4)
  - [ ] 구현:
    - (정수가 정렬된 배열에서) 이진 탐색
    - 재귀를 사용한 이진 탐색

- ### 비트 연산
  - [ ] [Bits cheat sheet](https://github.com/jwasham/coding-interview-university/blob/main/extras/cheat%20sheets/bits-cheat-sheet.pdf) - you should know many of the powers of 2 from (2^1 to 2^16 and 2^32)
  - [ ] 비트 연산자(&, |, ^, ~, >>, <<) 제대로 이해하기
    - [ ] [워드](https://en.wikipedia.org/wiki/Word_(computer_architecture))
    - [ ] 시작하기 좋은 곳:
            [Bit Manipulation (video)](https://www.youtube.com/watch?v=7jkIUgLC29I)
    - [ ] [C Programming Tutorial 2-10: Bitwise Operators (video)](https://www.youtube.com/watch?v=d0AwjSpNXR0)
    - [ ] [Bit Manipulation](https://en.wikipedia.org/wiki/Bit_manipulation)
    - [ ] [Bitwise Operation](https://en.wikipedia.org/wiki/Bitwise_operation)
    - [ ] [Bithacks](https://graphics.stanford.edu/~seander/bithacks.html)
    - [ ] [The Bit Twiddler](https://bits.stephan-brumme.com/)
    - [ ] [The Bit Twiddler Interactive](https://bits.stephan-brumme.com/interactive.html)
    - [ ] [Bit Hacks (video)](https://www.youtube.com/watch?v=ZusiKXcz_ac)
  - [ ] 2의 보수와 1의 보수
    - [Binary: Plusses & Minuses (Why We Use Two's Complement) (video)](https://www.youtube.com/watch?v=lKTsv6iVxV4)
    - [1의 보수](https://ko.wikipedia.org/wiki/1의_보수)
    - [2의 보수](https://ko.wikipedia.org/wiki/2의_보수)
  - [ ] Count set bits
    - [4 ways to count bits in a byte (video)](https://youtu.be/Hzuzo9NJrlc)
    - [Count Bits](https://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetKernighan)
    - [How To Count The Number Of Set Bits In a 32 Bit Integer](http://stackoverflow.com/questions/109023/how-to-count-the-number-of-set-bits-in-a-32-bit-integer)
  - [ ] Swap values:
    - [Swap](https://bits.stephan-brumme.com/swap.html)
  - [ ] Absolute value:
    - [Absolute Integer](https://bits.stephan-brumme.com/absInteger.html)

## 트리

- ### 트리 - 배경 지식
  - [ ] [Series: Trees (video)](https://www.coursera.org/learn/data-structures/lecture/95qda/trees)
  - 트리 기초 형태 만들기
  - 순회
  - 알고리즘 다루기
  - [ ] [BFS(너비-우선 탐색;breadth-first search) and DFS(깊이-우선 탐색;depth-first search)](https://www.youtube.com/watch?v=uWL6FJhq5fM)
    - BFS 노트:
      - level order (BFS, 큐를 사용하여)
      - 시간 복잡도: O(n)
      - 공간 복잡도:
                최고: O(1)
                최악: O(n/2)=O(n)
    - DFS 노트:
      - 시간 복잡도: O(n)
      - 공간 복잡도:
                최고: O(log n) - 평균적으로, 트리의 높이이다.
                최악: O(n)
      - 중위(inorder) (DFS: 왼쪽, 자신, 오른쪽)
      - 후위(postorder) (DFS: 왼쪽, 오른쪽, 자신)
      - 전위(preorder) (DFS: 자신, 왼쪽, 오른쪽)
  - [ ] [[Review] Breadth-first search in 4 minutes (video)](https://youtu.be/HZ5YTanv5QE)
  - [ ] [[Review] Depth-first search in 4 minutes (video)](https://youtu.be/Urx87-NMm6c)
  - [ ] [[Review] Tree Traversal (playlist) in 11 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZO1JC2RgEi04nLy6D-rKk6b)

- ### 이진 탐색 트리 (BST)
  - [ ] [Binary Search Tree Review (video)](https://www.youtube.com/watch?v=x6At0nzX92o&index=1&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
  - [ ] [Introduction (video)](https://www.coursera.org/learn/data-structures/lecture/E7cXP/introduction)
  - [ ] [MIT (video)](https://www.youtube.com/watch?v=9Jry5-82I68)
  - C/C++:
    - [ ] [이진 탐색 트리 - C/C++로 구현하기 (영상)](https://www.youtube.com/watch?v=COZK7NATh4k&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=28)
    - [ ] [BST 구현 - 스택과 힙에 메모리 할당 (영상)](https://www.youtube.com/watch?v=hWokyBoo0aI&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=29)
    - [ ] [이진 탐색 트리에서 가장 작은 원소와 가장 큰 원소 찾기 (영상)](https://www.youtube.com/watch?v=Ut90klNN264&index=30&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
    - [ ] [이진 트리의 높이 구하기 (영상)](https://www.youtube.com/watch?v=_pnqMz5nrRs&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=31)
    - [ ] [이진 트리 순회 - 너비-우선과 깊이-우선 전략 (영상)](https://www.youtube.com/watch?v=9RHO6jU--GU&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=32)
    - [ ] [이진 트리: Level Order Traversal (video)](https://www.youtube.com/watch?v=86g8jAQug04&index=33&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
    - [ ] [이진 트리 순회: 전위, 중위, 후위 (영상)](https://www.youtube.com/watch?v=gm8DUJJhmY4&index=34&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
    - [ ] [이진 트리가 이진 탐색 트리인지 아닌 지 확인하기 (영상)](https://www.youtube.com/watch?v=yEwSGhSsT0U&index=35&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
    - [ ] [이진 탐색 트리에서 노드 삭제하기 (영상)](https://www.youtube.com/watch?v=gcULXE7ViZw&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=36)
    - [ ] [Inorder Successor in a binary search tree (video)](https://www.youtube.com/watch?v=5cPbNCrdotA&index=37&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
  - [ ] 구현:
    - [ ] insert    // 트리에 어떤 값을 삽입
    - [ ] get_node_count // 저장된 값들의 개수 세기
    - [ ] print_values // 트리 안의 값들을 최소부터 최대까지 출력
    - [ ] delete_tree
    - [ ] is_in_tree // 주어진 값이 트리 안에 있는 지를 반환
    - [ ] get_height // 어떤 노드의 높이를 반환 (노드 하나의 높이는 1이다.)
    - [ ] get_min   // 트리에 저장된 값 중 가장 작은 값을 반환
    - [ ] get_max   // 트리에 저장된 값 중 가장 큰 값을 반환
    - [ ] is_binary_search_tree
    - [ ] delete_value
    - [ ] get_successor // 값이 주어지면, 다음으로 가장 큰 값을, 없으면 -1을 반환

- ### 힙 / 우선순위 큐 / 이진 힙
  - 트리처럼 보여지지만, 보통은 선형으로 저장됩니다. (배열, 링크드리스트처럼)
  - [ ] [힙(Heap)](https://en.wikipedia.org/wiki/Heap_(data_structure))
  - [ ] [소개 (영상)](https://www.coursera.org/learn/data-structures/lecture/2OpTs/introduction)
  - [ ] [Naive한 구현들 (영상)](https://www.coursera.org/learn/data-structures/lecture/z3l9N/naive-implementations)
  - [ ] [이진 트리 (영상)](https://www.coursera.org/learn/data-structures/lecture/GRV2q/binary-trees)
  - [ ] [Tree Height Remark (video)](https://www.coursera.org/learn/data-structures/supplement/S5xxz/tree-height-remark)
  - [ ] [기본 연산들 (영상)](https://www.coursera.org/learn/data-structures/lecture/0g1dl/basic-operations)
  - [ ] [완전 이진 트리 (영상)](https://www.coursera.org/learn/data-structures/lecture/gl5Ni/complete-binary-trees)
  - [ ] [의사 코드(Pseudocode) (영상)](https://www.coursera.org/learn/data-structures/lecture/HxQo9/pseudocode)
  - [ ] [힙 정렬 - 시작하기 (영상)](https://youtu.be/odNJmw5TOEE?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3291)
  - [ ] [힙 정렬 (영상)](https://www.coursera.org/learn/data-structures/lecture/hSzMO/heap-sort)
  - [ ] [힙 만들기 (영상)](https://www.coursera.org/learn/data-structures/lecture/dwrOS/building-a-heap)
  - [ ] [MIT: 힙과 힙 정렬 (영상)](https://www.youtube.com/watch?v=B7hVxCmfPtM&index=4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
  - [ ] [CS 61B Lecture 24: 우선순위 큐 (영상)](https://archive.org/details/ucberkeley_webcast_yIUFT6AKBGE)
  - [ ] [선형 시간에 힙 만들기 (max-heap)](https://www.youtube.com/watch?v=MiyLo8adrWw)
  - [ ] [[Review] Heap (playlist) in 13 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZNsyqgPW-DNwUeT8F8uhWc6)
  - [ ] max-heap 구현하기:
    - [ ] insert
    - [ ] sift_up - `insert` 하려면 필요
    - [ ] get_max - 최대 원소를 반환하되, 삭제는 하지 않는다.
    - [ ] get_size() - 저장된 원소들의 개수를 반환
    - [ ] is_empty() - 힙에 원소를 하나도 없는 지 반환
    - [ ] extract_max - 최대 원소를 반환하고, 그걸 삭제한다.
    - [ ] sift_down - `extract_max` 하려면 필요하다
    - [ ] remove(x) - x번째 원소를 삭제
    - [ ] heapify - 배열에 있는 원소들로 힙을 만든다. `heap_sort` 하려면 필요
    - [ ] heap_sort() - 정렬되지 않은 배열을 받아서 정렬된 배열로 만든다. 추가 메모리 없이 제자리에서 max-heap을 사용한다.
      - 노트: min-heap을 사용하면 연산을 줄일 수 있지만, 공간이 두 배로 필요합니다. (제자리에서 못 하기 때문에)

## 정렬

- [ ] Notes:
  - 정렬들 구현 & 각 정렬의 최적의 경우/최악의 경우, 평균적인 복잡도를 알기:
    - 버블 소트 쓰지 마세요 - 끔찍하니까요 - n이 16이하 제외하고 O(n^2)
  - [ ] 정렬 알고리즘들의 안정성 ("퀵소트는 안정적인가?")
    - [정렬 알고리즘의 안정성](https://en.wikipedia.org/wiki/Sorting_algorithm#Stability)
    - [정렬 알고리즘들의 안정성](http://stackoverflow.com/questions/1517793/stability-in-sorting-algorithms)
    - [정렬 알고리즘들의 안정성](http://www.geeksforgeeks.org/stability-in-sorting-algorithms/)
    - [정렬 알고리즘들 - 안정성](http://homepages.math.uic.edu/~leon/cs-mcs401-s08/handouts/stability.pdf)
  - [ ] 어떤 알고리즘들에 연결 리스트를 쓸 수 있는가? 배열은? 둘 다는?
    - 연결 리스트를 정렬하는 것은 추천하지 않지만, 병합 정렬은 가능합니다.
    - [링크드 리스트로 병합 정렬](http://www.geeksforgeeks.org/merge-sort-for-linked-list/)

- 힙소트의 경우, 위의 힙 데이터 구조를 보세요. 힙 정렬은 훌륭하지만 안정적이지 못합니다.

- [ ] [Sedgewick - Mergesort (5 videos)](https://www.coursera.org/learn/algorithms-part1/home/week/3)
  - [ ] [1. Mergesort](https://www.coursera.org/learn/algorithms-part1/lecture/ARWDq/mergesort)
  - [ ] [2. Bottom up Mergesort](https://www.coursera.org/learn/algorithms-part1/lecture/PWNEl/bottom-up-mergesort)
  - [ ] [3. Sorting Complexity](https://www.coursera.org/learn/algorithms-part1/lecture/xAltF/sorting-complexity)
  - [ ] [4. Comparators](https://www.coursera.org/learn/algorithms-part1/lecture/9FYhS/comparators)
  - [ ] [5. Stability](https://www.coursera.org/learn/algorithms-part1/lecture/pvvLZ/stability)

- [ ] [Sedgewick - Quicksort (4 videos)](https://www.coursera.org/learn/algorithms-part1/home/week/3)
  - [ ] [1. Quicksort](https://www.coursera.org/learn/algorithms-part1/lecture/vjvnC/quicksort)
  - [ ] [2. Selection](https://www.coursera.org/learn/algorithms-part1/lecture/UQxFT/selection)
  - [ ] [3. Duplicate Keys](https://www.coursera.org/learn/algorithms-part1/lecture/XvjPd/duplicate-keys)
  - [ ] [4. System Sorts](https://www.coursera.org/learn/algorithms-part1/lecture/QBNZ7/system-sorts)

- [ ] UC Berkeley:
  - [ ] [CS 61B Lecture 29: Sorting I (video)](https://archive.org/details/ucberkeley_webcast_EiUvYS2DT6I)
  - [ ] [CS 61B Lecture 30: Sorting II (video)](https://archive.org/details/ucberkeley_webcast_2hTY3t80Qsk)
  - [ ] [CS 61B Lecture 32: Sorting III (video)](https://archive.org/details/ucberkeley_webcast_Y6LOLpxg6Dc)
  - [ ] [CS 61B Lecture 33: Sorting V (video)](https://archive.org/details/ucberkeley_webcast_qNMQ4ly43p4)

- [ ] [Bubble Sort (영상)](https://www.youtube.com/watch?v=P00xJgWzz2c&index=1&list=PL89B61F78B552C1AB)
- [ ] [Analyzing Bubble Sort (영상)](https://www.youtube.com/watch?v=ni_zk257Nqo&index=7&list=PL89B61F78B552C1AB)
- [ ] [삽입 정렬과 병합 정렬 (영상)](https://www.youtube.com/watch?v=Kg4bqzAqRBM&index=3&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
- [ ] [삽입 (영상)](https://www.youtube.com/watch?v=c4BRHC7kTaQ&index=2&list=PL89B61F78B552C1AB)
- [ ] [병합 정렬 (영상)](https://www.youtube.com/watch?v=GCae1WNvnZM&index=3&list=PL89B61F78B552C1AB)
- [ ] [퀵 정렬 (영상)](https://www.youtube.com/watch?v=y_G9BkAm6B8&index=4&list=PL89B61F78B552C1AB)
- [ ] [선택 정렬 (영상)](https://www.youtube.com/watch?v=6nDMgr0-Yyo&index=8&list=PL89B61F78B552C1AB)

- [ ] 병합 정렬 코드:
  - [ ] [Using output array (C)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/sorting/mergesort.c)
  - [ ] [Using output array (Python)](https://github.com/jwasham/practice-python/blob/master/merge_sort/merge_sort.py)
  - [ ] [In-place (C++)](https://github.com/jwasham/practice-cpp/blob/master/merge_sort/merge_sort.cc)
- [ ] 퀵 정렬 코드:
  - [ ] [구현 (C언어)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/randomization/quick.c)
  - [ ] [구현 (C언어)](https://github.com/jwasham/practice-c/blob/master/quick_sort/quick_sort.c)
  - [ ] [구현 (Python)](https://github.com/jwasham/practice-python/blob/master/quick_sort/quick_sort.py)

- [ ] [[Review] Sorting (playlist) in 18 minutes](https://www.youtube.com/playlist?list=PL9xmBV_5YoZOZSbGAXAPIq1BeUf4j20pl)
    - [ ] [Quick sort in 4 minutes (video)](https://youtu.be/Hoixgm4-P4M)
    - [ ] [Heap sort in 4 minutes (video)](https://youtu.be/2DmK_H7IdTo)
    - [ ] [Merge sort in 3 minutes (video)](https://youtu.be/4VqmGXwpLqc)
    - [ ] [Bubble sort in 2 minutes (video)](https://youtu.be/xli_FI7CuzA)
    - [ ] [Selection sort in 3 minutes (video)](https://youtu.be/g-PGLbMth_g)
    - [ ] [Insertion sort in 2 minutes (video)](https://youtu.be/JU767SDMDvA)

- [ ] 구현:
  - [ ] 병합 정렬: 평균과 최악의 경우 O(n log n)
  - [ ] 퀵 정렬: 평균적인 경우 O(n log n)
  - 선택 정렬과 삽입 정렬은 둘 다 평균과 최악의 경우에 O(n^2)
  - 힙 정렬의 경우, 위의 힙 데이터 구조를 보세요.

- [ ] 필요한 건 아니지만, 아래도 추천합니다:
  - [ ] [Sedgewick - 기수 정렬(Radix Sorts) (6 videos)](https://www.coursera.org/learn/algorithms-part2/home/week/3)
    - [ ] [1. Strings in Java](https://www.coursera.org/learn/algorithms-part2/lecture/vGHvb/strings-in-java)
    - [ ] [2. Key Indexed Counting](https://www.coursera.org/learn/algorithms-part2/lecture/2pi1Z/key-indexed-counting)
    - [ ] [3. Least Significant Digit First String Radix Sort](https://www.coursera.org/learn/algorithms-part2/lecture/c1U7L/lsd-radix-sort)
    - [ ] [4. Most Significant Digit First String Radix Sort](https://www.coursera.org/learn/algorithms-part2/lecture/gFxwG/msd-radix-sort)
    - [ ] [5. 3 Way Radix Quicksort](https://www.coursera.org/learn/algorithms-part2/lecture/crkd5/3-way-radix-quicksort)
    - [ ] [6. Suffix Arrays](https://www.coursera.org/learn/algorithms-part2/lecture/TH18W/suffix-arrays)
  - [ ] [Radix Sort](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#radixSort)
  - [ ] [Radix Sort (video)](https://www.youtube.com/watch?v=xhr26ia4k38)
  - [ ] [Radix Sort, Counting Sort (linear time given constraints) (video)](https://www.youtube.com/watch?v=Nz1KZXbghj8&index=7&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
  - [ ] [Randomization: Matrix Multiply, Quicksort, Freivalds' algorithm (video)](https://www.youtube.com/watch?v=cNB2lADK3_s&index=8&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
  - [ ] [Sorting in Linear Time (video)](https://www.youtube.com/watch?v=pOKy3RZbSws&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=14)

개략적으로 보자면, 여기에 시각적으로 나타낸 [15가지 정렬 알고리즘들](https://www.youtube.com/watch?v=kPRA0W1kECg)을 보세요.
이 주제에 대해서 더 자세히 알고 싶다면, [몇몇 주제에 대한 세부사항](#몇몇-주제에-대한-세부사항)에서 "정렬" 섹션를 보세요.

## 그래프

그래프는 컴퓨터 과학의 여러 문제들을 표현하는 데 사용할 수 있다. 때문에 이 섹션은 트리나 정렬 섹션처럼 길다.

- 노트:
  - 메모리에 그래프를 표시하는 네 가지 기본 방법이 있다:
    - 오브젝트와 포인터
    - 행렬
    - 인접 리스트
    - 인접 맵
  - 각각의 표현과 장단점을 숙지하라.
  - 넓이 우선 탐색(BFS)와 깊이 우선 탐색(DFS) - 계산상의 복잡성, 장단점, 실제 코드로 구현하는 방법을 알아야 한다.
  - 질문을 받을 시 먼저 그래프 기반 솔루션을 찾고, 없을 경우에 다른 솔루션으로 넘어가라.

- [ ] MIT(영상):
  - [ ] [너비 우선 탐색(BFS;Breadth-First Search)](https://www.youtube.com/watch?v=s-CYnVz-uh4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=13)
  - [ ] [깊이 우선 탐색(DFS;Depth-First Search)](https://www.youtube.com/watch?v=AfSk24UTFS8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=14)

- [ ] Skiena의 강좌 - 시작하기 아주 좋습니다:
  - [ ] [CSE373 2012 - Lecture 11 - Graph Data Structures (video)](https://www.youtube.com/watch?v=OiXxhDrFruw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=11)
  - [ ] [CSE373 2012 - Lecture 12 - Breadth-First Search (video)](https://www.youtube.com/watch?v=g5vF8jscteo&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=12)
  - [ ] [CSE373 2012 - Lecture 13 - Graph Algorithms (video)](https://www.youtube.com/watch?v=S23W6eTcqdY&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=13)
  - [ ] [CSE373 2012 - Lecture 14 - Graph Algorithms (con't) (video)](https://www.youtube.com/watch?v=WitPBKGV0HY&index=14&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
  - [ ] [CSE373 2012 - Lecture 15 - Graph Algorithms (con't 2) (video)](https://www.youtube.com/watch?v=ia1L30l7OIg&index=15&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
  - [ ] [CSE373 2012 - Lecture 16 - Graph Algorithms (con't 3) (video)](https://www.youtube.com/watch?v=jgDOQq6iWy8&index=16&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)

- [ ] 그래프 (검토, 그 외 여러가지):

  - [ ] [6.006 Single-Source Shortest Paths Problem (video)](https://www.youtube.com/watch?v=Aa2sqUhIn-E&index=15&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
  - [ ] [6.006 Dijkstra (video)](https://www.youtube.com/watch?v=2E7MmKv0Y24&index=16&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
  - [ ] [6.006 Bellman-Ford (video)](https://www.youtube.com/watch?v=ozsuci5pIso&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=17)
  - [ ] [6.006 Speeding Up Dijkstra (video)](https://www.youtube.com/watch?v=CHvQ3q_gJ7E&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=18)
  - [ ] [Aduni: Graph Algorithms I - Topological Sorting, Minimum Spanning Trees, Prim's Algorithm -  Lecture 6 (video)]( https://www.youtube.com/watch?v=i_AQT_XfvD8&index=6&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
  - [ ] [Aduni: Graph Algorithms II - DFS, BFS, Kruskal's Algorithm, Union Find Data Structure - Lecture 7 (video)]( https://www.youtube.com/watch?v=ufj5_bppBsA&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=7)
  - [ ] [Aduni: Graph Algorithms III: Shortest Path - Lecture 8 (video)](https://www.youtube.com/watch?v=DiedsPsMKXc&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=8)
  - [ ] [Aduni: Graph Alg. IV: Intro to geometric algorithms - Lecture 9 (video)](https://www.youtube.com/watch?v=XIAQRlNkJAw&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=9)
  - [ ] ~~[CS 61B 2014 (starting at 58:09) (video)](https://youtu.be/dgjX4HdMI-Q?list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&t=3489)~~
  - [ ] [CS 61B 2014: Weighted graphs (video)](https://archive.org/details/ucberkeley_webcast_zFbq8vOZ_0k)
  - [ ] [Greedy Algorithms: Minimum Spanning Tree (video)](https://www.youtube.com/watch?v=tKwnms5iRBU&index=16&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
  - [ ] [Strongly Connected Components Kosaraju's Algorithm Graph Algorithm (video)](https://www.youtube.com/watch?v=RpgcYiky7uw)
  - [ ] [[Review] Shortest Path Algorithms (playlist) in 16 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZO-Y-H3xIC9DGSfVYJng9Yw)
  - [ ] [[Review] Minimum Spanning Trees (playlist) in 4 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZObEi3Hf6lmyW-CBfs7nkOV)

- Full Coursera Course:
  - [ ] [Algorithms on Graphs (video)](https://www.coursera.org/learn/algorithms-on-graphs/home/welcome)

- 내가 구현할 것:
  - [ ] DFS with 인접 리스트 (재귀)
  - [ ] DFS with 인접 리스트 (스택을 쓴 비재귀)
  - [ ] DFS with 인접 행렬 (재귀)
  - [ ] DFS with 인접 행렬 (스택을 쓴 비재귀)
  - [ ] BFS with 인접 리스트
  - [ ] BFS with 인접 행렬
  - [ ] 단일 출발지 최단 경로 (다익스트라)
  - [ ] 최소 신장 트리 (MST;minimum spanning tree)
  - DFS-기반 알고리즘들 (위의 Aduni 영상들을 보세요):
    - [ ] 사이클 검사/확인 (위상 정렬할 때 필요합니다. 시작하기 전에 검사해야 하거든요.)
    - [ ] 위상 정렬
    - [ ] 그래프 내의 연결 요소(Connected Component)들 개수
    - [ ] 강연결요소(SCC;Strongly Connected Component)들 나열하기
    - [ ] 이분 그래프 확인하기

Skiena의 책(아래의 책 섹션 참조)과 인터뷰 책에서 더 많은 그래프 실습을 할 수 있습니다.

## 더 많은 지식

- ### 재귀 (recursion)
  - [ ] 재귀와 백트래킹에 대한 스탠포드 대학 강의:
    - [ ] [Lecture 8 | Programming Abstractions (video)](https://www.youtube.com/watch?v=gl3emqCuueQ&list=PLFE6E58F856038C69&index=8)
    - [ ] [Lecture 9 | Programming Abstractions (video)](https://www.youtube.com/watch?v=uFJhEPrbycQ&list=PLFE6E58F856038C69&index=9)
    - [ ] [Lecture 10 | Programming Abstractions (video)](https://www.youtube.com/watch?v=NdF1QDTRkck&index=10&list=PLFE6E58F856038C69)
    - [ ] [Lecture 11 | Programming Abstractions (video)](https://www.youtube.com/watch?v=p-gpaIGRCQI&list=PLFE6E58F856038C69&index=11)
  - 재귀는 언제 사용해야 하는 지
  - 꼬리 재귀를 사용하는 게 그렇지 않은 것보다 얼마나 나은가요?
    - [ ] [꼬리 재귀가 무엇이고 왜 그게 좋지 않은지에 대하여](https://www.quora.com/What-is-tail-recursion-Why-is-it-so-bad)
    - [ ] [꼬리 재귀 (영상)](https://www.coursera.org/lecture/programming-languages/tail-recursion-YZic1)

- ### 동적 프로그래밍 (Dynamic Programming)
  - 인터뷰에서 DP 문제를 접하지 않을 수도 있습니다. 하지만 알고 있는게 미뤄두는 것 보다 낫습니다.
  - 이 주제는 아주 어렵습니다. DP로 풀리는 각 문제마다 어떤 점화식을 정의해야 하는데 그게 까다롭습니다.
  - 얽혀있는 패턴들을 확실히 이해할 때까지, 많은 DP 예시 문제들을 찾아보기를 권합니다.
  - [ ] Videos:
    - Skiena씨의 영상들은 따라가기 힘듭니다. 가끔 화이트보드를 사용하시는 데 너무 작아서 보기가 힘들거든요.
    - [ ] [Skiena: CSE373 2012 - Lecture 19 - 동적 프로그래밍 소개 (영상)](https://youtu.be/Qc2ieXRgR0k?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1718)
    - [ ] [Skiena: CSE373 2012 - Lecture 20 - Edit Distance (video)](https://youtu.be/IsmMhMdyeGY?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=2749)
    - [ ] [Skiena: CSE373 2012 - Lecture 21 - 동적 프로그래밍 예제들 (영상)](https://youtu.be/o0V9eYF4UI8?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=406)
    - [ ] [Skiena: CSE373 2012 - Lecture 22 - 동적 프로그래밍의 활용 (영상)](https://www.youtube.com/watch?v=dRbMC1Ltl3A&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=22)
    - [ ] [Simonson: Dynamic Programming 0 (59:18부터 시작) (영상)](https://youtu.be/J5aJEcOr6Eo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3558)
    - [ ] [Simonson: Dynamic Programming I - Lecture 11 (영상)](https://www.youtube.com/watch?v=0EzHjQ_SOeU&index=11&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
    - [ ] [Simonson: Dynamic programming II - Lecture 12 (영상)](https://www.youtube.com/watch?v=v1qiRwuJU7g&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=12)
    - [ ] List of individual DP problems (each is short):
            [Dynamic Programming (video)](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)
  - [ ] Yale Lecture notes:
    - [ ] [Dynamic Programming](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#dynamicProgramming)
  - [ ] Coursera:
    - [ ] [The RNA secondary structure problem (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/80RrW/the-rna-secondary-structure-problem)
    - [ ] [A dynamic programming algorithm (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/PSonq/a-dynamic-programming-algorithm)
    - [ ] [Illustrating the DP algorithm (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/oUEK2/illustrating-the-dp-algorithm)
    - [ ] [Running time of the DP algorithm (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/nfK2r/running-time-of-the-dp-algorithm)
    - [ ] [DP vs. recursive implementation (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/M999a/dp-vs-recursive-implementation)
    - [ ] [Global pairwise sequence alignment (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/UZ7o6/global-pairwise-sequence-alignment)
    - [ ] [Local pairwise sequence alignment (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/WnNau/local-pairwise-sequence-alignment)

- ### 디자인 패턴
  - [ ] [Quick UML review (video)](https://www.youtube.com/watch?v=3cmzqZzwNDM&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc&index=3)
  - [ ] 아래 패턴들을 배워봅시다:
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
  - [ ] [Head First Design Patterns](https://www.amazon.com/Head-First-Design-Patterns-Freeman/dp/0596007124)
    - I know the canonical book is "Design Patterns: Elements of Reusable Object-Oriented Software", but Head First is great for beginners to OO.
  - [ ] [Handy reference: 101 Design Patterns & Tips for Developers](https://sourcemaking.com/design-patterns-and-tips)
  - [ ] [Design patterns for humans](https://github.com/kamranahmedse/design-patterns-for-humans#structural-design-patterns)

- ### 조합과 확률
  - [ ] [Math Skills: How to find Factorial, Permutation and Combination (Choose) (video)](https://www.youtube.com/watch?v=8RRo6Ti9d0U)
  - [ ] [Make School: Probability (video)](https://www.youtube.com/watch?v=sZkAAk9Wwa4)
  - [ ] [Make School: More Probability and Markov Chains (video)](https://www.youtube.com/watch?v=dNaJg-mLobQ)
  - [ ] Khan Academy:
    - Course layout:
      - [ ] [Basic Theoretical Probability](https://www.khanacademy.org/math/probability/probability-and-combinatorics-topic)
    - Just the videos - 41 (each are simple and each are short):
      - [ ] [Probability Explained (video)](https://www.youtube.com/watch?v=uzkc-qNVoOk&list=PLC58778F28211FA19)

- ### NP, NP-완전, 근사 알고리즘
  - Know about the most famous classes of NP-complete problems, such as traveling salesman and the knapsack problem,
        and be able to recognize them when an interviewer asks you them in disguise.
  - Know what NP-complete means.
  - [ ] [Computational Complexity (video)](https://www.youtube.com/watch?v=moPtwq_cVH8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=23)
  - [ ] Simonson:
    - [ ] [Greedy Algs. II & Intro to NP Completeness (video)](https://youtu.be/qcGnJ47Smlo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=2939)
    - [ ] [NP Completeness II & Reductions (video)](https://www.youtube.com/watch?v=e0tGC6ZQdQE&index=16&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
    - [ ] [NP Completeness III (Video)](https://www.youtube.com/watch?v=fCX1BGT3wjE&index=17&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
    - [ ] [NP Completeness IV (video)](https://www.youtube.com/watch?v=NKLDp3Rch3M&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=18)
  - [ ] Skiena:
    - [ ] [CSE373 2012 - Lecture 23 - Introduction to NP-Completeness (video)](https://youtu.be/KiK5TVgXbFg?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1508)
    - [ ] [CSE373 2012 - Lecture 24 - NP-Completeness Proofs (video)](https://www.youtube.com/watch?v=27Al52X3hd4&index=24&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [CSE373 2012 - Lecture 25 - NP-Completeness Challenge (video)](https://www.youtube.com/watch?v=xCPH4gwIIXM&index=25&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
  - [ ] [Complexity: P, NP, NP-completeness, Reductions (video)](https://www.youtube.com/watch?v=eHZifpgyH_4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=22)
  - [ ] [Complexity: Approximation Algorithms (video)](https://www.youtube.com/watch?v=MEz1J9wY2iM&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=24)
  - [ ] [Complexity: Fixed-Parameter Algorithms (video)](https://www.youtube.com/watch?v=4q-jmGrmxKs&index=25&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
  - Peter Norvig discusses near-optimal solutions to traveling salesman problem:
    - [Jupyter Notebook](http://nbviewer.jupyter.org/url/norvig.com/ipython/TSP.ipynb)
  - Pages 1048 - 1140 in CLRS if you have it.

- ### 컴퓨터가 프로그램을 처리하는 방식

    - [ ] [How CPU executes a program (video)](https://www.youtube.com/watch?v=XM4lGflQFvA)
    - [ ] [How computers calculate - ALU (video)](https://youtu.be/1I5ZMmrOfnA)
    - [ ] [Registers and RAM (video)](https://youtu.be/fpnE6UAfbtU)
    - [ ] [The Central Processing Unit (CPU) (video)](https://youtu.be/FZGugFqdr60)
    - [ ] [Instructions and Programs (video)](https://youtu.be/zltgXvg6r3k)

- ### 캐시
  - [ ] LRU cache:
    - [ ] [The Magic of LRU Cache (100 Days of Google Dev) (video)](https://www.youtube.com/watch?v=R5ON3iwx78M)
    - [ ] [Implementing LRU (video)](https://www.youtube.com/watch?v=bq6N7Ym81iI)
    - [ ] [LeetCode - 146 LRU Cache (C++) (video)](https://www.youtube.com/watch?v=8-FZRAjR7qU)
  - [ ] CPU cache:
    - [ ] [MIT 6.004 L15: The Memory Hierarchy (video)](https://www.youtube.com/watch?v=vjYF_fAZI5E&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-&index=24)
    - [ ] [MIT 6.004 L16: Cache Issues (video)](https://www.youtube.com/watch?v=ajgC3-pyGlk&index=25&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-)

- ### 프로세스와 쓰레드
  - [ ] Computer Science 162 - Operating Systems (25 videos):
    - for processes and threads see videos 1-11
    - [Operating Systems and System Programming (video)](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iBDyz-ba4yDskqMDY6A1w_c)
  - [What Is The Difference Between A Process And A Thread?](https://www.quora.com/What-is-the-difference-between-a-process-and-a-thread)
  - 알아 두어야 할 것:
    - 프로세스, 쓰레드, 동시성 문제들
      - 프로세스와 쓰레드의 차이점
      - 프로세스
      - 쓰레드
      - 락(Locks)
      - 뮤텍스(Mutexes)
      - 세마포어(Semaphores)
      - Monitors
      - 각각이 어떻게 동작하는지?
      - 데드락(Deadlock)
      - 라이브락(Livelock)
    - CPU activity, 인터럽트(interrupts), 문맥 교환(context switching)
    - Modern concurrency constructs with multicore processors
    - [Paging, segmentation and virtual memory (video)](https://www.youtube.com/watch?v=LKe7xK0bF7o&list=PLCiOXwirraUCBE9i_ukL8_Kfg6XNv7Se8&index=2)
    - [Interrupts (video)](https://www.youtube.com/watch?v=uFKi2-J-6II&list=PLCiOXwirraUCBE9i_ukL8_Kfg6XNv7Se8&index=3)
    - Process resource needs (memory: code, static storage, stack, heap, and also file descriptors, i/o)
    - Thread resource needs (shares above (minus stack) with other threads in the same process but each has its own pc, stack counter, registers, and stack)
    - Forking is really copy on write (read-only) until the new process writes to memory, then it does a full copy.
    - Context switching
      - How context switching is initiated by the operating system and underlying hardware?
  - [ ] [threads in C++ (series - 10 videos)](https://www.youtube.com/playlist?list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M)
  - [ ] [CS 377 Spring '14: Operating Systems from University of Massachusetts](https://www.youtube.com/playlist?list=PLacuG5pysFbDQU8kKxbUh4K5c1iL5_k7k)
  - [ ] concurrency in Python (videos):
    - [ ] [Short series on threads](https://www.youtube.com/playlist?list=PL1H1sBF1VAKVMONJWJkmUh6_p8g4F2oy1)
    - [ ] [Python Threads](https://www.youtube.com/watch?v=Bs7vPNbB9JM)
    - [ ] [Understanding the Python GIL (2010)](https://www.youtube.com/watch?v=Obt-vMVdM8s)
      - [reference](http://www.dabeaz.com/GIL)
    - [ ] [David Beazley - Python Concurrency From the Ground Up: LIVE! - PyCon 2015](https://www.youtube.com/watch?v=MCs5OvhV9S4)
    - [ ] [Keynote David Beazley - Topics of Interest (Python Asyncio)](https://www.youtube.com/watch?v=ZzfHjytDceU)
    - [ ] [Mutex in Python](https://www.youtube.com/watch?v=0zaPs8OtyKY)

- ### 테스트
  - 알아 두어야 할 것:
    - 유닛 테스트는 어떻게 작동하는지
    - mock object 는 무엇인지
    - 통합 테스트는 무엇인지
    - 의존성 주입은 무엇인지
  - [ ] [James Bach과 함께하는 애자일 소프트웨어 테스트 (비디오)](https://www.youtube.com/watch?v=SAhJf36_u5U)
  - [ ] [소프트웨어 테스트에 대한 James Bach의 무료 강의 (비디오)](https://www.youtube.com/watch?v=ILkT_HV9DVU)
  - [ ] [Steve Freeman - Test-Driven 개발 (이것은 우리가 의미하는 것은 아니다) (비디오)](https://vimeo.com/83960706)
    - [참고자료](http://gotocon.com/dl/goto-berlin-2013/slides/SteveFreeman_TestDrivenDevelopmentThatsNotWhatWeMeant.pdf)
  - [ ] 의존성 주입:
    - [ ] [비디오](https://www.youtube.com/watch?v=IKD2-MAkXyQ)
    - [ ] [Tao Of Testing](http://jasonpolites.github.io/tao-of-testing/ch3-1.1.html)
  - [ ] [테스트 어떻게 작성하는지](http://jasonpolites.github.io/tao-of-testing/ch4-1.1.html)

- ### 문자열 검색 & 조작
  - [ ] [Sedgewick - Suffix Arrays (video)](https://www.coursera.org/learn/algorithms-part2/lecture/TH18W/suffix-arrays)
  - [ ] [Sedgewick - Substring Search (videos)](https://www.coursera.org/learn/algorithms-part2/home/week/4)
    - [ ] [1. Introduction to Substring Search](https://www.coursera.org/learn/algorithms-part2/lecture/n3ZpG/introduction-to-substring-search)
    - [ ] [2. Brute-Force Substring Search](https://www.coursera.org/learn/algorithms-part2/lecture/2Kn5i/brute-force-substring-search)
    - [ ] [3. Knuth-Morris Pratt](https://www.coursera.org/learn/algorithms-part2/lecture/TAtDr/knuth-morris-pratt)
    - [ ] [4. Boyer-Moore](https://www.coursera.org/learn/algorithms-part2/lecture/CYxOT/boyer-moore)
    - [ ] [5. Rabin-Karp](https://www.coursera.org/learn/algorithms-part2/lecture/3KiqT/rabin-karp)
  - [ ] [Search pattern in text (video)](https://www.coursera.org/learn/data-structures/lecture/tAfHI/search-pattern-in-text)

    이 주제를 더 자세히 알고 싶으시다면, [몇몇 주제에 대한 세부사항](#몇몇-주제에-대한-세부사항)에서 "문자열 매칭" 섹션을 읽어보세요.

- ### 트라이
  - 트라이에는 여러 종류가 있다는 것을 유의하라. 어떤 건 접두사가 있는 데, 어떤 건 그렇지 않고 또 어떤 것은 경로 추적을 위해 비트 대신에 문자열을 사용한다.
  - 나는 코드만 읽었고, 구현은 안 했다.
  - [ ] [Sedgewick - Tries (3 videos)](https://www.coursera.org/learn/algorithms-part2/home/week/4)
    - [ ] [1. R Way Tries](https://www.coursera.org/learn/algorithms-part2/lecture/CPVdr/r-way-tries)
    - [ ] [2. Ternary Search Tries](https://www.coursera.org/learn/algorithms-part2/lecture/yQM8K/ternary-search-tries)
    - [ ] [3. Character Based Operations](https://www.coursera.org/learn/algorithms-part2/lecture/jwNmV/character-based-operations)
  - [ ] [Notes on Data Structures and Programming Techniques](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Tries)
  - [ ] Short course videos:
    - [ ] [Introduction To Tries (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/08Xyf/core-introduction-to-tries)
    - [ ] [Performance Of Tries (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/PvlZW/core-performance-of-tries)
    - [ ] [Implementing A Trie (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/DFvd3/core-implementing-a-trie)
  - [ ] [The Trie: A Neglected Data Structure](https://www.toptal.com/java/the-trie-a-neglected-data-structure)
  - [ ] [TopCoder - Using Tries](https://www.topcoder.com/community/competitive-programming/tutorials/using-tries/)
  - [ ] [Stanford Lecture (real world use case) (video)](https://www.youtube.com/watch?v=TJ8SkcUSdbU)
  - [ ] [MIT, Advanced Data Structures, Strings (can get pretty obscure about halfway through)](https://www.youtube.com/watch?v=NinWEPPrkDQ&index=16&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf)

- ### 부동 소수점
  - [ ] simple 8-bit: [Representation of Floating Point Numbers - 1 (video - there is an error in calculations - see video description)](https://www.youtube.com/watch?v=ji3SfClm8TU)
  - [ ] 32 bit: [IEEE754 32-bit floating point binary (video)](https://www.youtube.com/watch?v=50ZYcZebIec)

- ### 유니코드
  - [ ] [The Absolute Minimum Every Software Developer Absolutely, Positively Must Know About Unicode and Character Sets]( http://www.joelonsoftware.com/articles/Unicode.html)
  - [ ] [What Every Programmer Absolutely, Positively Needs To Know About Encodings And Character Sets To Work With Text](http://kunststube.net/encoding/)

- ### Endianness
  - [ ] [Big And Little Endian](https://www.cs.umd.edu/class/sum2003/cmsc311/Notes/Data/endian.html)
  - [ ] [Big Endian Vs Little Endian (video)](https://www.youtube.com/watch?v=JrNF0KRAlyo)
  - [ ] [Big And Little Endian Inside/Out (video)](https://www.youtube.com/watch?v=oBSuXP-1Tc0)
    - Very technical talk for kernel devs. Don't worry if most is over your head.
    - The first half is enough.

- ### 네트워크
  - **만약 당신이 네트워크에 대한 경험이 있거나 operations engineer 또는 믿음직한 엔지니어가 되고 싶다면 받을 수 있는 질문들**
  - 즉, 알면 좋은 것들이다.
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
  - [ ] 소켓:
    - [ ] [Java - Sockets - Introduction (video)](https://www.youtube.com/watch?v=6G_W54zuadg&t=6s)
    - [ ] [Socket Programming (video)](https://www.youtube.com/watch?v=G75vN2mnJeQ)

## 시스템 디자인, 확장성, 데이터 핸들링

- **4년 이상의 경력자라면 이런 시스템 디자인 질문들을 받을 수 있다.**
- Scalability and System Design are very large topics with many topics and resources, since
      there is a lot to consider when designing a software/hardware system that can scale.
      Expect to spend quite a bit of time on this.
- 고려사항:
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
- [ ] **여기서 시작하세요**: [The System Design Primer](https://github.com/donnemartin/system-design-primer)
- [ ] [System Design from HiredInTech](http://www.hiredintech.com/system-design/)
- [ ] [How Do I Prepare To Answer Design Questions In A Technical Inverview?](https://www.quora.com/How-do-I-prepare-to-answer-design-questions-in-a-technical-interview?redirected_qid=1500023)
- [ ] [8 Things You Need to Know Before a System Design Interview](http://blog.gainlo.co/index.php/2015/10/22/8-things-you-need-to-know-before-system-design-interviews/)
- [ ] [Algorithm design](http://www.hiredintech.com/algorithm-design/)
- [ ] [Database Normalization - 1NF, 2NF, 3NF and 4NF (video)](https://www.youtube.com/watch?v=UrYLYV7WSHM)
- [ ] [System Design Interview](https://github.com/checkcheckzz/system-design-interview) - 여기에 리소스가 정말 많이 있습니다. 글과 예제들을 살펴보세요. 일부는 아래에도 적어놓았습니다.
- [ ] [How to ace a systems design interview](http://www.palantir.com/2011/10/how-to-rock-a-systems-design-interview/)
- [ ] [Numbers Everyone Should Know](http://everythingisdata.wordpress.com/2009/10/17/numbers-everyone-should-know/)
- [ ] [How long does it take to make a context switch?](http://blog.tsunanet.net/2010/11/how-long-does-it-take-to-make-context.html)
- [ ] [Transactions Across Datacenters (video)](https://www.youtube.com/watch?v=srOgpXECblk)
- [ ] [A plain English introduction to CAP Theorem](http://ksat.me/a-plain-english-introduction-to-cap-theorem/)
- [ ] Consensus Algorithms:
  - [ ] Paxos - [Paxos Agreement - Computerphile (video)](https://www.youtube.com/watch?v=s8JqcZtvnsM)
  - [ ] Raft - [An Introduction to the Raft Distributed Consensus Algorithm (video)](https://www.youtube.com/watch?v=P9Ydif5_qvE)
    - [ ] [Easy-to-read paper](https://raft.github.io/)
    - [ ] [Infographic](http://thesecretlivesofdata.com/raft/)
- [ ] [Consistent Hashing](http://www.tom-e-white.com/2007/11/consistent-hashing.html)
- [ ] [NoSQL Patterns](http://horicky.blogspot.com/2009/11/nosql-patterns.html)
- [ ] Scalability:
  - [ ] [Great overview (video)](https://www.youtube.com/watch?v=-W9F__D3oY4)
  - [ ] Short series:
    - [Clones](http://www.lecloud.net/post/7295452622/scalability-for-dummies-part-1-clones)
    - [Database](http://www.lecloud.net/post/7994751381/scalability-for-dummies-part-2-database)
    - [Cache](http://www.lecloud.net/post/9246290032/scalability-for-dummies-part-3-cache)
    - [Asynchronism](http://www.lecloud.net/post/9699762917/scalability-for-dummies-part-4-asynchronism)
  - [ ] [Scalable Web Architecture and Distributed Systems](http://www.aosabook.org/en/distsys.html)
  - [ ] [Fallacies of Distributed Computing Explained](https://pages.cs.wisc.edu/~zuyu/files/fallacies.pdf)
  - [ ] [Pragmatic Programming Techniques](http://horicky.blogspot.com/2010/10/scalable-system-design-patterns.html)
    - [extra: Google Pregel Graph Processing](http://horicky.blogspot.com/2010/07/google-pregel-graph-processing.html)
  - [ ] [Jeff Dean - Building Software Systems At Google and Lessons Learned (video)](https://www.youtube.com/watch?v=modXC5IWTJI)
  - [ ] [Introduction to Architecting Systems for Scale](http://lethain.com/introduction-to-architecting-systems-for-scale/)
  - [ ] [Scaling mobile games to a global audience using App Engine and Cloud Datastore (video)](https://www.youtube.com/watch?v=9nWyWwY2Onc)
  - [ ] [How Google Does Planet-Scale Engineering for Planet-Scale Infra (video)](https://www.youtube.com/watch?v=H4vMcD7zKM0)
  - [ ] [The Importance of Algorithms](https://www.topcoder.com/community/competitive-programming/tutorials/the-importance-of-algorithms/)
  - [ ] [Sharding](http://highscalability.com/blog/2009/8/6/an-unorthodox-approach-to-database-design-the-coming-of-the.html)
  - [ ] [Scale at Facebook (2009)](https://www.infoq.com/presentations/Scale-at-Facebook)
  - [ ] [Scale at Facebook (2012), "Building for a Billion Users" (video)](https://www.youtube.com/watch?v=oodS71YtkGU)
  - [ ] [Engineering for the Long Game - Astrid Atkinson Keynote(video)](https://www.youtube.com/watch?v=p0jGmgIrf_M&list=PLRXxvay_m8gqVlExPC5DG3TGWJTaBgqSA&index=4)
  - [ ] [7 Years Of YouTube Scalability Lessons In 30 Minutes](http://highscalability.com/blog/2012/3/26/7-years-of-youtube-scalability-lessons-in-30-minutes.html)
    - [video](https://www.youtube.com/watch?v=G-lGCC4KKok)
  - [ ] [How PayPal Scaled To Billions Of Transactions Daily Using Just 8VMs](http://highscalability.com/blog/2016/8/15/how-paypal-scaled-to-billions-of-transactions-daily-using-ju.html)
  - [ ] [How to Remove Duplicates in Large Datasets](https://blog.clevertap.com/how-to-remove-duplicates-in-large-datasets/)
  - [ ] [A look inside Etsy's scale and engineering culture with Jon Cowie (video)](https://www.youtube.com/watch?v=3vV4YiqKm1o)
  - [ ] [What Led Amazon to its Own Microservices Architecture](http://thenewstack.io/led-amazon-microservices-architecture/)
  - [ ] [To Compress Or Not To Compress, That Was Uber's Question](https://eng.uber.com/trip-data-squeeze/)
  - [ ] [Asyncio Tarantool Queue, Get In The Queue](http://highscalability.com/blog/2016/3/3/asyncio-tarantool-queue-get-in-the-queue.html)
  - [ ] [When Should Approximate Query Processing Be Used?](http://highscalability.com/blog/2016/2/25/when-should-approximate-query-processing-be-used.html)
  - [ ] [Google's Transition From Single Datacenter, To Failover, To A Native Multihomed Architecture]( http://highscalability.com/blog/2016/2/23/googles-transition-from-single-datacenter-to-failover-to-a-n.html)
  - [ ] [Spanner](http://highscalability.com/blog/2012/9/24/google-spanners-most-surprising-revelation-nosql-is-out-and.html)
  - [ ] [Machine Learning Driven Programming: A New Programming For A New World](http://highscalability.com/blog/2016/7/6/machine-learning-driven-programming-a-new-programming-for-a.html)
  - [ ] [The Image Optimization Technology That Serves Millions Of Requests Per Day](http://highscalability.com/blog/2016/6/15/the-image-optimization-technology-that-serves-millions-of-re.html)
  - [ ] [A Patreon Architecture Short](http://highscalability.com/blog/2016/2/1/a-patreon-architecture-short.html)
  - [ ] [Tinder: How Does One Of The Largest Recommendation Engines Decide Who You'll See Next?](http://highscalability.com/blog/2016/1/27/tinder-how-does-one-of-the-largest-recommendation-engines-de.html)
  - [ ] [Design Of A Modern Cache](http://highscalability.com/blog/2016/1/25/design-of-a-modern-cache.html)
  - [ ] [Live Video Streaming At Facebook Scale](http://highscalability.com/blog/2016/1/13/live-video-streaming-at-facebook-scale.html)
  - [ ] [A Beginner's Guide To Scaling To 11 Million+ Users On Amazon's AWS](http://highscalability.com/blog/2016/1/11/a-beginners-guide-to-scaling-to-11-million-users-on-amazons.html)
  - [ ] [How Does The Use Of Docker Effect Latency?](http://highscalability.com/blog/2015/12/16/how-does-the-use-of-docker-effect-latency.html)
  - [ ] [A 360 Degree View Of The Entire Netflix Stack](http://highscalability.com/blog/2015/11/9/a-360-degree-view-of-the-entire-netflix-stack.html)
  - [ ] [Latency Is Everywhere And It Costs You Sales - How To Crush It](http://highscalability.com/latency-everywhere-and-it-costs-you-sales-how-crush-it)
  - [ ] [Serverless (very long, just need the gist)](http://martinfowler.com/articles/serverless.html)
  - [ ] [What Powers Instagram: Hundreds of Instances, Dozens of Technologies](http://instagram-engineering.tumblr.com/post/13649370142/what-powers-instagram-hundreds-of-instances)
  - [ ] [Cinchcast Architecture - Producing 1,500 Hours Of Audio Every Day](http://highscalability.com/blog/2012/7/16/cinchcast-architecture-producing-1500-hours-of-audio-every-d.html)
  - [ ] [Justin.Tv's Live Video Broadcasting Architecture](http://highscalability.com/blog/2010/3/16/justintvs-live-video-broadcasting-architecture.html)
  - [ ] [Playfish's Social Gaming Architecture - 50 Million Monthly Users And Growing](http://highscalability.com/blog/2010/9/21/playfishs-social-gaming-architecture-50-million-monthly-user.html)
  - [ ] [TripAdvisor Architecture - 40M Visitors, 200M Dynamic Page Views, 30TB Data](http://highscalability.com/blog/2011/6/27/tripadvisor-architecture-40m-visitors-200m-dynamic-page-view.html)
  - [ ] [PlentyOfFish Architecture](http://highscalability.com/plentyoffish-architecture)
  - [ ] [Salesforce Architecture - How They Handle 1.3 Billion Transactions A Day](http://highscalability.com/blog/2013/9/23/salesforce-architecture-how-they-handle-13-billion-transacti.html)
  - [ ] [ESPN's Architecture At Scale - Operating At 100,000 Duh Nuh Nuhs Per Second](http://highscalability.com/blog/2013/11/4/espns-architecture-at-scale-operating-at-100000-duh-nuh-nuhs.html)
  - [ ] See "Messaging, Serialization, and Queueing Systems" way below for info on some of the technologies that can glue services together
  - [ ] Twitter:
    - [O'Reilly MySQL CE 2011: Jeremy Cole, "Big and Small Data at @Twitter" (video)](https://www.youtube.com/watch?v=5cKTP36HVgI)
    - [Timelines at Scale](https://www.infoq.com/presentations/Twitter-Timeline-Scalability)
  - For even more, see "Mining Massive Datasets" video series in the [Video Series](#video-series) section.
- [ ] Practicing the system design process: Here are some ideas to try working through on paper, each with some documentation on how it was handled in the real world:
  - review: [The System Design Primer](https://github.com/donnemartin/system-design-primer)
  - [System Design from HiredInTech](http://www.hiredintech.com/system-design/)
  - [cheat sheet](https://github.com/jwasham/coding-interview-university/blob/main/extras/cheat%20sheets/system-design.pdf)
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
    - [Design a CDN network: old article](http://repository.cmu.edu/cgi/viewcontent.cgi?article=2112&context=compsci)
    - [Design a random unique ID generation system](https://blog.twitter.com/2010/announcing-snowflake)
    - [Design an online multiplayer card game](http://www.indieflashblog.com/how-to-create-an-asynchronous-multiplayer-game.html)
    - [Design a key-value database](http://www.slideshare.net/dvirsky/introduction-to-redis)
    - [Design a picture sharing system](http://highscalability.com/blog/2011/12/6/instagram-architecture-14-million-users-terabytes-of-photos.html)
    - [Design a recommendation system](http://ijcai13.org/files/tutorial_slides/td3.pdf)
    - [Design a URL-shortener system: copied from above](http://www.hiredintech.com/system-design/the-system-design-process/)
    - [Design a cache system](https://www.adayinthelifeof.nl/2011/02/06/memcache-internals/)

---

## 최종 검토

    이 섹션에는 중요한 개념들을 빠르게 검토할 수 있는 짧은 영상들이 포함되어 있다.
    복습을 하고자 한다면, 이 영상들이 도움이 될 것이다.

- [ ] 2-3분 분량의 주제별 짧은 영상 시리즈 (23 videos)
  - [Videos](https://www.youtube.com/watch?v=r4r1DZcx1cM&list=PLmVb1OknmNJuC5POdcDv5oCS7_OUkDgpj&index=22)
- [ ] 2-5분 분량의 주제별 짧은 영상 시리즈 - Michael Sambol (46 videos):
  - [Videos](https://www.youtube.com/@MichaelSambol)
  - [Code Examples](https://github.com/msambol/dsa)
- [ ] [Sedgewick Videos - Algorithms I](https://www.coursera.org/learn/algorithms-part1)
- [ ] [Sedgewick Videos - Algorithms II](https://www.coursera.org/learn/algorithms-part2)

---

## 코딩 문제 연습

이제 당신은 위의 컴퓨터 과학 주제들을 모두 알고 있으므로, 코딩 문제에 답하는 것을 연습할 차례이다.

**코딩 문제 연습은 프로그래밍 문제에 대한 답을 외우는 것이 아니다.**

당신에게 프로그래밍 문제를 푸는 연습이 필요한 이유:

- 문제 인식, 그리고 어떤 자료구조와 알고리즘이 언제 필요한지
- 문제의 조건을 모으기
- 인터뷰를 하듯 당신이 문제를 푸는 과정을 말하기
- 컴퓨터가 아닌 종이나 화이트보드에 코딩하기
- 당신의 풀이의 시간, 공간 복잡도를 제시하기
- 당신의 해답을 테스팅하기

체계적이고 소통하는 인터뷰에서의 문제풀이에 관한 좋은 시작점이 있다. 당신은 프로그래밍 인터뷰 책에서 이 서식을 얻을 수도 있지만, 나는 이 것이 가장 좋다고 본다: [Algorithm design canvas](http://www.hiredintech.com/algorithm-design/)

집에 화이트보드가 없는가? 그럴 수 있다. 나는 커다란 화이트보드를 가진 괴짜이다. 화이트보드 대신에 상점에서 큰 도화지를 사오자.
소파에 앉아서 연습할 수 있다. 이 것은 내 "소파 화이트보드"이다.
크기 비교를 위해 사진에 펜을 추가하였다. 펜을 쓰면, 곧 지우고 싶어질 것이다. 금방 지저분해 진다.

![my sofa whiteboard](https://camo.githubusercontent.com/880d361d19c21cf62d49846283c2742890b53905/68747470733a2f2f64336a32706b6d6a74696e366f752e636c6f756466726f6e742e6e65742f6172745f626f6172645f736d5f322e6a7067)

보충:

- [Mathematics for Topcoders](https://www.topcoder.com/community/competitive-programming/tutorials/mathematics-for-topcoders/)
- [Dynamic Programming – From Novice to Advanced](https://www.topcoder.com/community/competitive-programming/tutorials/dynamic-programming-from-novice-to-advanced/)
- [MIT Interview Materials](https://web.archive.org/web/20160906124824/http://courses.csail.mit.edu/iap/interview/materials.php)

**읽고 프로그래밍 문제 풀기 (순서대로):**

- [ ] [Programming Interviews Exposed: Secrets to Landing Your Next Job, 2nd Edition](http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html)
  - C, C++, Java로 답변
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
  - Java로 답변

[위의 도서 목록](#도서-목록)을 보세요.

## 코딩 연습/도전

공부하는 게 머리에 잘 안 들어올 때, 한번 해보세요.
가능한 한 매일 코딩 챌린지를 하는겁니다.

- [ ] [How to Find a Solution](https://www.topcoder.com/community/competitive-programming/tutorials/how-to-find-a-solution/)
- [ ] [How to Dissect a Topcoder Problem Statement](https://www.topcoder.com/community/competitive-programming/tutorials/how-to-dissect-a-topcoder-problem-statement/)

코딩 인터뷰 질문들 영상:

- [IDeserve (88 videos)](https://www.youtube.com/watch?v=NBcqBddFbZw&list=PLamzFoFxwoNjPfxzaWqs7cZGsPYy0x_gI)
- [Tushar Roy (5 playlists)](https://www.youtube.com/user/tusharroy2525/playlists?shelf_id=2&view=50&sort=dd)
- [Nick White - LeetCode Solutions (187 Videos)](https://www.youtube.com/playlist?list=PLU_sdQYzUj2keVENTP0a5rdykRSgg9Wp-)
  - Good explanations of solution and the code.
  - You can watch several in a short time.
- [FisherCoder - LeetCode Solutions](https://youtube.com/FisherCoder)

Challenge sites:

- [LeetCode](https://leetcode.com/)
  - My favorite coding problem site. It's worth the subscription money for the 1-2 months you'll likely be preparing.
  - [LeetCode solutions from FisherCoder](https://github.com/fishercoder1534/Leetcode)
  - See Nick White Videos above for short code-throughs
- [HackerRank](https://www.hackerrank.com/)
- [TopCoder](https://www.topcoder.com/)
- [InterviewCake](https://www.interviewcake.com/)
- [Geeks for Geeks](http://www.geeksforgeeks.org/)
- [InterviewBit](https://www.interviewbit.com)
- [Project Euler (math-focused)](https://projecteuler.net/index.php?section=problems)
- [Code Exercises](https://code-exercises.com)

Language-learning sites, with challenges:

- [Codewars](http://www.codewars.com)
- [Codility](https://codility.com/programmers/)
- [HackerEarth](https://www.hackerearth.com/)
- [Sphere Online Judge (spoj)](http://www.spoj.com/)
- [Codechef](https://www.codechef.com/)

Challenge repos:

- [Interactive Coding Interview Challenges in Python](https://github.com/donnemartin/interactive-coding-challenges)

모의 면접:

- [Gainlo.co: Mock interviewers from big companies](http://www.gainlo.co/#!/) - I used this and it helped me relax for the phone screen and on-site interview.
- [Pramp: Mock interviews from/with peers](https://www.pramp.com/) - peer-to-peer model of practice interviews
- [Refdash: Mock interviews and expedited interviews](https://refdash.com/) - also help candidates fast track by skipping multiple interviews with tech companies.
- [interviewing.io: Practice mock interview with senior engineers](https://interviewing.io) - anonymous algorithmic/systems design interviews with senior engineers from FAANG anonymously.

## 면접이 얼마 남지 않았을 때

- [ ] Cracking The Coding Interview Set 2 (videos):
  - [Cracking The Code Interview](https://www.youtube.com/watch?v=4NIb9l3imAo)
  - [Cracking the Coding Interview - Fullstack Speaker Series](https://www.youtube.com/watch?v=Eg5-tdAwclo)

## 이력서

- See Resume prep items in Cracking The Coding Interview and back of Programming Interviews Exposed

## 인터뷰가 다가오면 생각해보기

아래의 아이템들에 따른 너가 받을 20개의 인터뷰 질문에 대해 생각하라. 각각 2-3개의 대답을 준비해라.
당신이 성취한 것에 대해 데이터 뿐만 아니라 스토리를 만들어라.

- 왜 이 직업을 원합니까?
- 당신이 풀었던 문제 중 힘들었던 문제는?
- 큰 도전에 직면한 적은?
- 최고의/최악의 디자인을 본 적이 있는가?
- 현존하는 제품을 향상시킬 수 있는 아이디어
- 개인적으로 일할 때 가장 잘 일 하는가? 아니면 팀원으로서 있을 때?
- 어떤 기술과 경험들이 당신의 역할에서 자산이 되었으며 그 이유는?
- 어떤 것이 가장 즐거웠는가 [job x / project y]?
- 무엇이 가장 큰 도전이었는가 [job x / project y]?
- 무엇이 가장 힘들었던 버그였는가? [job x / project y]?
- 무엇을 배웠는가 [job x / project y]?
- 무엇이 향상되었는가 [job x / project y]?

## 면접관에게 받았던 질문들

    내 경우에는 이랬다. (I already may know answer to but want their opinion or team perspective):

- 얼마나 큰 팀에 있었나요?
- 당신의 개발 사이클은 어떤 모습인가요? 폭포수(워터폴)/스프린트/애자일인가요?
- 보통 마감까지 달리시는 편인가요? 아니면 여유롭게 하시는 편인가요?
- 팀 내에서 의사 결정은 어떻게 하나요?
- 당신은 한 주에 미팅을 얼마나 한다고 생각하나요?
- 업무 환경이 집중력에 도움이 된다고 생각하나요?
- 지금은 어떤 일을 하고 계신가요?
- What do you like about it?
- 어떤 Work life를 생각하시나요?
- 워라밸은 어떤게 좋나요?

## 취직했다면

축하드립니다!

꾸준히 공부하시길 바랍니다.

끝난게 아니니까요.

---

    *****************************************************************************************************
    *****************************************************************************************************

    아래의 모든 것들은 선택 사항이다.
    당신은 이것들을 공부함으로써 더 많은 CS 개념들에 대해 알 수 있을 것이며, 소프트웨어 엔지니어링 직업을 준비하는 데에도 도움이 될 것
    이다. 더불어 당신은 훨씬 더 균형 잡힌 소프트웨어 엔지니어가 될 것이다.

    *****************************************************************************************************
    *****************************************************************************************************

---

## Additional Books

    아래는 당신이 흥미로워하는 주제에 대해 공부할 수 있는 자료들입니다.

- [ ] [The Unix Programming Environment](https://www.amazon.com/dp/013937681X)
  - an oldie but a goodie
- [ ] [The Linux Command Line: A Complete Introduction](https://www.amazon.com/dp/1593273894/)
  - a modern option
- [ ] [TCP/IP Illustrated Series](https://en.wikipedia.org/wiki/TCP/IP_Illustrated)
- [ ] [Head First Design Patterns](https://www.amazon.com/gp/product/0596007124/)
  - a gentle introduction to design patterns
- [ ] [Design Patterns: Elements of Reusable Object-Oriente​d Software](https://www.amazon.com/Design-Patterns-Elements-Reusable-Object-Oriented/dp/0201633612)
  - aka the "Gang Of Four" book, or GOF
  - the canonical design patterns book
- [ ] [UNIX and Linux System Administration Handbook, 5th Edition](https://www.amazon.com/UNIX-Linux-System-Administration-Handbook/dp/0134277554/)
- [Algorithm Design Manual](http://www.amazon.com/Algorithm-Design-Manual-Steven-Skiena/dp/1849967202) (Skiena)
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
- [Write Great Code: Volume 1: Understanding the Machine](https://www.amazon.com/Write-Great-Code-Understanding-Machine/dp/1593270038)
  - The book was published in 2004, and is somewhat outdated, but it's a terrific resource for understanding a computer in brief.
  - The author invented [HLA](https://en.wikipedia.org/wiki/High_Level_Assembly), so take mentions and examples in HLA with a grain of salt. Not widely used, but decent examples of what assembly looks like.
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
- [Introduction to Algorithms](https://www.amazon.com/Introduction-Algorithms-3rd-MIT-Press/dp/0262033844)
  - **Important:** Reading this book will only have limited value. This book is a great review of algorithms and data structures, but won't teach you how to write good code. You have to be able to code a decent solution efficiently.
  - aka CLR, sometimes CLRS, because Stein was late to the game

- [Computer Architecture, Sixth Edition: A Quantitative Approach](https://www.amazon.com/dp/0128119055)
  - For a richer, more up-to-date (2017), but longer treatment

- [Programming Pearls](http://www.amazon.com/Programming-Pearls-2nd-Jon-Bentley/dp/0201657880)
  - The first couple of chapters present clever solutions to programming problems (some very old using data tape) but
      that is just an intro. This a guidebook on program design and architecture.

## Additional Learning

    두루 갖춘 소프트웨어 엔지니어가 되는데 도움이 될만한 것들을 추가했습니다. 이를 통해 더 큰 도구들을 다루실 수 있게 되실 겁니다.

- ### Compilers
  - [ ] [How a Compiler Works in ~1 minute (video)](https://www.youtube.com/watch?v=IhC7sdYe-Jg)
  - [ ] [Harvard CS50 - Compilers (video)](https://www.youtube.com/watch?v=CSZLNYF4Klo)
  - [ ] [C++ (video)](https://www.youtube.com/watch?v=twodd1KFfGk)
  - [ ] [Understanding Compiler Optimization (C++) (video)](https://www.youtube.com/watch?v=FnGCDLhaxKU)

- ### Emacs and vi(m)
  - Familiarize yourself with a unix-based code editor
  - vi(m):
    - [Editing With vim 01 - Installation, Setup, and The Modes (video)](https://www.youtube.com/watch?v=5givLEMcINQ&index=1&list=PL13bz4SHGmRxlZVmWQ9DvXo1fEg4UdGkr)
    - [VIM Adventures](http://vim-adventures.com/)
    - set of 4 videos:
      - [The vi/vim editor - Lesson 1](https://www.youtube.com/watch?v=SI8TeVMX8pk)
      - [The vi/vim editor - Lesson 2](https://www.youtube.com/watch?v=F3OO7ZIOaJE)
      - [The vi/vim editor - Lesson 3](https://www.youtube.com/watch?v=ZYEccA_nMaI)
      - [The vi/vim editor - Lesson 4](https://www.youtube.com/watch?v=1lYD5gwgZIA)
    - [Using Vi Instead of Emacs](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Using_Vi_instead_of_Emacs)
  - emacs:
    - [Basics Emacs Tutorial (video)](https://www.youtube.com/watch?v=hbmV1bnQ-i0)
    - set of 3 (videos):
      - [Emacs Tutorial (Beginners) -Part 1- File commands, cut/copy/paste, cursor commands](https://www.youtube.com/watch?v=ujODL7MD04Q)
      - [Emacs Tutorial (Beginners) -Part 2- Buffer management, search, M-x grep and rgrep modes](https://www.youtube.com/watch?v=XWpsRupJ4II)
      - [Emacs Tutorial (Beginners) -Part 3- Expressions, Statements, ~/.emacs file and packages](https://www.youtube.com/watch?v=paSgzPso-yc)
    - [Evil Mode: Or, How I Learned to Stop Worrying and Love Emacs (video)](https://www.youtube.com/watch?v=JWD1Fpdd4Pc)
    - [Writing C Programs With Emacs](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Writing_C_programs_with_Emacs)

- ### Unix command line tools
  - I filled in the list below from good tools.
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

- ### Information theory (videos)
  - [Khan Academy](https://www.khanacademy.org/computing/computer-science/informationtheory)
  - More about Markov processes:
    - [Core Markov Text Generation](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/waxgx/core-markov-text-generation)
    - [Core Implementing Markov Text Generation](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/gZhiC/core-implementing-markov-text-generation)
    - [Project = Markov Text Generation Walk Through](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/EUjrq/project-markov-text-generation-walk-through)
  - See more in MIT 6.050J Information and Entropy series below.

- ### Parity & Hamming Code (videos)
  - [Intro](https://www.youtube.com/watch?v=q-3BctoUpHE)
  - [Parity](https://www.youtube.com/watch?v=DdMcAUlxh1M)
  - Hamming Code:
    - [Error detection](https://www.youtube.com/watch?v=1A_NcXxdoCc)
    - [Error correction](https://www.youtube.com/watch?v=JAMLuxdHH8o)
  - [Error Checking](https://www.youtube.com/watch?v=wbH2VxzmoZk)

- ### Entropy
  - also see videos below
  - make sure to watch information theory videos first
  - [Information Theory, Claude Shannon, Entropy, Redundancy, Data Compression & Bits (video)](https://youtu.be/JnJq3Py0dyM?t=176)

- ### Cryptography
  - also see videos below
  - make sure to watch information theory videos first
  - [Khan Academy Series](https://www.khanacademy.org/computing/computer-science/cryptography)
  - [Cryptography: Hash Functions](https://www.youtube.com/watch?v=KqqOXndnvic&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=30)
  - [Cryptography: Encryption](https://www.youtube.com/watch?v=9TNI2wHmaeI&index=31&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

- ### Compression
  - make sure to watch information theory videos first
  - Computerphile (videos):
    - [Compression](https://www.youtube.com/watch?v=Lto-ajuqW3w)
    - [Entropy in Compression](https://www.youtube.com/watch?v=M5c_RFKVkko)
    - [Upside Down Trees (Huffman Trees)](https://www.youtube.com/watch?v=umTbivyJoiI)
    - [EXTRA BITS/TRITS - Huffman Trees](https://www.youtube.com/watch?v=DV8efuB3h2g)
    - [Elegant Compression in Text (The LZ 77 Method)](https://www.youtube.com/watch?v=goOa3DGezUA)
    - [Text Compression Meets Probabilities](https://www.youtube.com/watch?v=cCDCfoHTsaU)
  - [Compressor Head videos](https://www.youtube.com/playlist?list=PLOU2XLYxmsIJGErt5rrCqaSGTMyyqNt2H)
  - [(optional) Google Developers Live: GZIP is not enough!](https://www.youtube.com/watch?v=whGwm0Lky2s)

- ### Computer Security
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

- ### Garbage collection
  - [GC in Python (video)](https://www.youtube.com/watch?v=iHVs_HkjdmI)
  - [Deep Dive Java: Garbage Collection is Good!](https://www.infoq.com/presentations/garbage-collection-benefits)
  - [Deep Dive Python: Garbage Collection in CPython (video)](https://www.youtube.com/watch?v=P-8Z0-MhdQs&list=PLdzf4Clw0VbOEWOS_sLhT_9zaiQDrS5AR&index=3)

- ### Parallel Programming
  - [Coursera (Scala)](https://www.coursera.org/learn/parprog1/home/week/1)
  - [Efficient Python for High Performance Parallel Computing (video)](https://www.youtube.com/watch?v=uY85GkaYzBk)

- ### Messaging, Serialization, and Queueing Systems
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
  - [A* Pathfinding Tutorial (video)](https://www.youtube.com/watch?v=KNXfSOx4eEE)
  - [A* Pathfinding (E01: algorithm explanation) (video)](https://www.youtube.com/watch?v=-L-WgKMFuhE)

- ### Fast Fourier Transform
  - [An Interactive Guide To The Fourier Transform](https://betterexplained.com/articles/an-interactive-guide-to-the-fourier-transform/)
  - [What is a Fourier transform? What is it used for?](http://www.askamathematician.com/2012/09/q-what-is-a-fourier-transform-what-is-it-used-for/)
  - [What is the Fourier Transform? (video)](https://www.youtube.com/watch?v=Xxut2PN-V8Q)
  - [Divide & Conquer: FFT (video)](https://www.youtube.com/watch?v=iTMn0Kt18tg&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=4)
  - [Understanding The FFT](http://jakevdp.github.io/blog/2013/08/28/understanding-the-fft/)

- ### Bloom Filter
  - Given a Bloom filter with m bits and k hashing functions, both insertion and membership testing are O(k)
  - [Bloom Filters](https://www.youtube.com/watch?v=-SuTGoFYjZs)
  - [Bloom Filters | Mining of Massive Datasets | Stanford University](https://www.youtube.com/watch?v=qBTdukbzc78)
  - [Tutorial](http://billmill.org/bloomfilter-tutorial/)
  - [How To Write A Bloom Filter App](http://blog.michaelschmatz.com/2016/04/11/how-to-write-a-bloom-filter-cpp/)

- ### HyperLogLog
  - [How To Count A Billion Distinct Objects Using Only 1.5KB Of Memory](http://highscalability.com/blog/2012/4/5/big-data-counting-how-to-count-a-billion-distinct-objects-us.html)

- ### Locality-Sensitive Hashing
  - used to determine the similarity of documents
  - the opposite of MD5 or SHA which are used to determine if 2 documents/strings are exactly the same.
  - [Simhashing (hopefully) made simple](http://ferd.ca/simhashing-hopefully-made-simple.html)

- ### van Emde Boas Trees
  - [Divide & Conquer: van Emde Boas Trees (video)](https://www.youtube.com/watch?v=hmReJCupbNU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=6)
  - [MIT Lecture Notes](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-046j-design-and-analysis-of-algorithms-spring-2012/lecture-notes/MIT6_046JS12_lec15.pdf)

- ### Augmented Data Structures
  - [CS 61B Lecture 39: Augmenting Data Structures](https://archive.org/details/ucberkeley_webcast_zksIj9O8_jc)

- ### Balanced search trees
  - 적어도 하나의 타입의 균형 이진 트리에 대하여 알고 계시는 게 좋습니다 (그리고 어떻게 적용되는지까지요):
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
  - [Self-balancing binary search tree](https://en.wikipedia.org/wiki/Self-balancing_binary_search_tree)

  - **AVL trees**
    - In practice:
            From what I can tell, these aren't used much in practice, but I could see where they would be:
            The AVL tree is another structure supporting O(log n) search, insertion, and removal. It is more rigidly
            balanced than red–black trees, leading to slower insertion and removal but faster retrieval. This makes it
            attractive for data structures that may be built once and loaded without reconstruction, such as language
            dictionaries (or program dictionaries, such as the opcodes of an assembler or interpreter).
    - [MIT AVL Trees / AVL Sort (video)](https://www.youtube.com/watch?v=FNeL18KsWPc&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=6)
    - [AVL Trees (video)](https://www.coursera.org/learn/data-structures/lecture/Qq5E0/avl-trees)
    - [AVL Tree Implementation (video)](https://www.coursera.org/learn/data-structures/lecture/PKEBC/avl-tree-implementation)
    - [Split And Merge](https://www.coursera.org/learn/data-structures/lecture/22BgE/split-and-merge)
    - [[Review] AVL Trees (playlist) in 19 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZOUFgdIeOPuH6cfSnNRMau-)

  - **Splay trees**
    - In practice:
            Splay trees are typically used in the implementation of caches, memory allocators, routers, garbage collectors,
            data compression, ropes (replacement of string used for long text strings), in Windows NT (in the virtual memory,
            networking and file system code) etc.
    - [CS 61B: Splay Trees (video)](https://archive.org/details/ucberkeley_webcast_G5QIXywcJlY)
    - MIT Lecture: Splay Trees:
      - Gets very mathy, but watch the last 10 minutes for sure.
      - [Video](https://www.youtube.com/watch?v=QnPl_Y6EqMo)

  - **Red/black trees**
    - these are a translation of a 2-3 tree (see below)
    - In practice:
            Red–black trees offer worst-case guarantees for insertion time, deletion time, and search time.
            Not only does this make them valuable in time-sensitive applications such as real-time applications,
            but it makes them valuable building blocks in other data structures which provide worst-case guarantees;
            for example, many data structures used in computational geometry can be based on red–black trees, and
            the Completely Fair Scheduler used in current Linux kernels uses red–black trees. In the version 8 of Java,
            the Collection HashMap has been modified such that instead of using a LinkedList to store identical elements with poor
            hashcodes, a Red-Black tree is used.
    - [Aduni - Algorithms - Lecture 4 (link jumps to starting point) (video)](https://youtu.be/1W3x0f_RmUo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3871)
    - [Aduni - Algorithms - Lecture 5 (video)](https://www.youtube.com/watch?v=hm2GHwyKF1o&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=5)
    - [Red-Black Tree](https://en.wikipedia.org/wiki/Red%E2%80%93black_tree)
    - [An Introduction To Binary Search And Red Black Tree](https://www.topcoder.com/thrive/articles/An%20Introduction%20to%20Binary%20Search%20and%20Red-Black%20Trees)
    - [[Review] Red-Black Trees (playlist) in 30 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZNqDI8qfOZgzbqahCUmUEin)

  - **2-3 search trees**
    - In practice:
            2-3 trees have faster inserts at the expense of slower searches (since height is more compared to AVL trees).
    - You would use 2-3 tree very rarely because its implementation involves different types of nodes. Instead, people use Red Black trees.
    - [23-Tree Intuition and Definition (video)](https://www.youtube.com/watch?v=C3SsdUqasD4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=2)
    - [Binary View of 23-Tree](https://www.youtube.com/watch?v=iYvBtGKsqSg&index=3&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
    - [2-3 Trees (student recitation) (video)](https://www.youtube.com/watch?v=TOb1tuEZ2X4&index=5&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

  - **2-3-4 Trees (aka 2-4 trees)**
    - In practice:
            For every 2-4 tree, there are corresponding red–black trees with data elements in the same order. The insertion and deletion
            operations on 2-4 trees are also equivalent to color-flipping and rotations in red–black trees. This makes 2-4 trees an
            important tool for understanding the logic behind red–black trees, and this is why many introductory algorithm texts introduce
            2-4 trees just before red–black trees, even though **2-4 trees are not often used in practice**.
    - [CS 61B Lecture 26: Balanced Search Trees (video)](https://archive.org/details/ucberkeley_webcast_zqrqYXkth6Q)
    - [Bottom Up 234-Trees (video)](https://www.youtube.com/watch?v=DQdMYevEyE4&index=4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
    - [Top Down 234-Trees (video)](https://www.youtube.com/watch?v=2679VQ26Fp4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=5)

  - **N-ary (K-ary, M-ary) trees**
    - note: the N or K is the branching factor (max branches)
    - binary trees are a 2-ary tree, with branching factor = 2
    - 2-3 trees are 3-ary
    - [K-Ary Tree](https://en.wikipedia.org/wiki/K-ary_tree)

  - **B-Trees**
    - 재밌는 사실: it's a mystery, but the B could stand for Boeing, Balanced, or Bayer (co-inventor)
    - In Practice:
            B-트리는 데이터베이스에 광범위하게 사용됩니다. 가장 현대적인 파일시스템은 B-트리를 씁니다 (or Variants).
            데이터베이스에 사용될 뿐만 아니라, B-트리는 특정한 파일의 임의의 블록에 '빠른 무작위 탐색'을 가능하게 합니다.
            기본적인 문제는 파일블록 주소 i를 하나의 디스크 블록(또는 아마도 실린더-헤드-섹터) 주소로 바꾸는 것입니다.
    - [B-Tree](https://en.wikipedia.org/wiki/B-tree)
    - [B-Tree Definition and Insertion (video)](https://www.youtube.com/watch?v=s3bCdZGrgpA&index=7&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
    - [Introduction to B-Trees (video)](https://www.youtube.com/watch?v=I22wEC1tTGo&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=6)
    - [B-Tree Deletion (video)](https://www.youtube.com/watch?v=svfnVhJOfMc&index=8&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
    - [MIT 6.851 - Memory Hierarchy Models (video)](https://www.youtube.com/watch?v=V3omVLzI0WE&index=7&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf)
                - covers cache-oblivious B-Trees, very interesting data structures
                - the first 37 minutes are very technical, may be skipped (B is block size, cache line size)
    - [[Review] B-Trees (playlist) in 26 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZNFPPv98DjTdD9X6UI9KMHz)

- ### k-D Trees
  - great for finding number of points in a rectangle or higher dimension object
  - a good fit for k-nearest neighbors
  - [Kd Trees (video)](https://www.youtube.com/watch?v=W94M9D_yXKk)
  - [kNN K-d tree algorithm (video)](https://www.youtube.com/watch?v=Y4ZgLlDfKDg)

- ### Skip lists
  - "These are somewhat of a cult data structure" - Skiena
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
  - Combination of a binary search tree and a heap
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

- ### 이산수학
  - 아래에 있는 영상을 확인하세요.

- ### 기계학습
  - 왜 기계학습이 중요하죠?
    - [How Google Is Remaking Itself As A Machine Learning First Company](https://backchannel.com/how-google-is-remaking-itself-as-a-machine-learning-first-company-ada63defcb70)
    - [Large-Scale Deep Learning for Intelligent Computer Systems (video)](https://www.youtube.com/watch?v=QSaZGT4-6EY)
    - [Deep Learning and Understandability versus Software Engineering and Verification by Peter Norvig](https://www.youtube.com/watch?v=X769cyzBNVw)
  - [Google's Cloud Machine learning tools (video)](https://www.youtube.com/watch?v=Ja2hxBAwG_0)
  - [Google Developers' Machine Learning Recipes (Scikit Learn & Tensorflow) (video)](https://www.youtube.com/playlist?list=PLOU2XLYxmsIIuiBfYad6rFYQU_jL2ryal)
  - [Tensorflow (video)](https://www.youtube.com/watch?v=oZikw5k_2FM)
  - [Tensorflow Tutorials](https://www.tensorflow.org/versions/r0.11/tutorials/index.html)
  - [Practical Guide to implementing Neural Networks in Python (using Theano)](http://www.analyticsvidhya.com/blog/2016/04/neural-networks-python-theano/)
  - 강의들:
    - [Great starter course: Machine Learning](https://www.coursera.org/learn/machine-learning)
              - [videos only](https://www.youtube.com/playlist?list=PLZ9qNFMHZ-A4rycgrgOYma6zxF4BZGGPW)
              - see videos 12-18 for a review of linear algebra (14 and 15 are duplicates)
    - [Neural Networks for Machine Learning](https://www.coursera.org/learn/neural-networks)
    - [Google's Deep Learning Nanodegree](https://www.udacity.com/course/deep-learning--ud730)
    - [Google/Kaggle Machine Learning Engineer Nanodegree](https://www.udacity.com/course/machine-learning-engineer-nanodegree-by-google--nd009)
    - [Self-Driving Car Engineer Nanodegree](https://www.udacity.com/drive)
  - 자료들:
    - Books:
      - [Python Machine Learning](https://www.amazon.com/Python-Machine-Learning-Sebastian-Raschka/dp/1783555130/)
      - [Data Science from Scratch: First Principles with Python](https://www.amazon.com/Data-Science-Scratch-Principles-Python/dp/149190142X)
      - [Introduction to Machine Learning with Python](https://www.amazon.com/Introduction-Machine-Learning-Python-Scientists/dp/1449369413/)
    - [Machine Learning for Software Engineers](https://github.com/ZuzooVn/machine-learning-for-software-engineers)
    - Data School: <http://www.dataschool.io/>

---

## 몇몇 주제에 대한 세부사항

    이미 언급한 몇몇의 개념에 대한 설명을 좀 더 보강하기 위해서 적었습니다.
    하지만 더하길 원하지 않았어요. 왜냐면 그 양이 너무나 방대하기 때문이지요. 
    하나의 주제에 대하여 지나치게 깊게 파고드는 것은 쉬운 일입니다.
    이번 세기에 직장을 구하고 싶으시잖아요, 맞죠?

- **SOLID**
  - [ ] [Bob Martin SOLID Principles of Object Oriented and Agile Design (video)](https://www.youtube.com/watch?v=TMuno5RZNeE)
  - [ ] S - [Single Responsibility Principle](http://www.oodesign.com/single-responsibility-principle.html) | [Single responsibility to each Object](http://www.javacodegeeks.com/2011/11/solid-single-responsibility-principle.html)
    - [more flavor](https://docs.google.com/open?id=0ByOwmqah_nuGNHEtcU5OekdDMkk)
  - [ ] O - [Open/Closed Principal](http://www.oodesign.com/open-close-principle.html)  | [On production level Objects are ready for extension but not for modification](https://en.wikipedia.org/wiki/Open/closed_principle)
    - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgN2M5MTkwM2EtNWFkZC00ZTI3LWFjZTUtNTFhZGZiYmUzODc1&hl=en)
  - [ ] L - [Liskov Substitution Principal](http://www.oodesign.com/liskov-s-substitution-principle.html) | [Base Class and Derived class follow ‘IS A’ principal](http://stackoverflow.com/questions/56860/what-is-the-liskov-substitution-principle)
    - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgNzAzZjA5ZmItNjU3NS00MzQ5LTkwYjMtMDJhNDU5ZTM0MTlh&hl=en)
  - [ ] I - [Interface segregation principle](http://www.oodesign.com/interface-segregation-principle.html) | clients should not be forced to implement interfaces they don't use
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

- **More Dynamic Programming** (videos)
  - [6.006: Dynamic Programming I: Fibonacci, Shortest Paths](https://www.youtube.com/watch?v=OQ5jsbhAv_M&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=19)
  - [6.006: Dynamic Programming II: Text Justification, Blackjack](https://www.youtube.com/watch?v=ENyox7kNKeY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=20)
  - [6.006: DP III: Parenthesization, Edit Distance, Knapsack](https://www.youtube.com/watch?v=ocZMDMZwhCY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=21)
  - [6.006: DP IV: Guitar Fingering, Tetris, Super Mario Bros.](https://www.youtube.com/watch?v=tp4_UXaVyx8&index=22&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
  - [6.046: Dynamic Programming & Advanced DP](https://www.youtube.com/watch?v=Tw1k46ywN6E&index=14&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
  - [6.046: Dynamic Programming: All-Pairs Shortest Paths](https://www.youtube.com/watch?v=NzgFUwOaoIw&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=15)
  - [6.046: Dynamic Programming (student recitation)](https://www.youtube.com/watch?v=krZI60lKPek&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=12)

- **Advanced Graph Processing** (videos)
  - [Synchronous Distributed Algorithms: Symmetry-Breaking. Shortest-Paths Spanning Trees](https://www.youtube.com/watch?v=mUBmcbbJNf4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=27)
  - [Asynchronous Distributed Algorithms: Shortest-Paths Spanning Trees](https://www.youtube.com/watch?v=kQ-UQAzcnzA&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=28)

- MIT **Probability** (mathy, and go slowly, which is good for mathy things) (videos):
  - [MIT 6.042J - Probability Introduction](https://www.youtube.com/watch?v=SmFwFdESMHI&index=18&list=PLB7540DEDD482705B)
  - [MIT 6.042J - Conditional Probability](https://www.youtube.com/watch?v=E6FbvM-FGZ8&index=19&list=PLB7540DEDD482705B)
  - [MIT 6.042J - Independence](https://www.youtube.com/watch?v=l1BCv3qqW4A&index=20&list=PLB7540DEDD482705B)
  - [MIT 6.042J - Random Variables](https://www.youtube.com/watch?v=MOfhhFaQdjw&list=PLB7540DEDD482705B&index=21)
  - [MIT 6.042J - Expectation I](https://www.youtube.com/watch?v=gGlMSe7uEkA&index=22&list=PLB7540DEDD482705B)
  - [MIT 6.042J - Expectation II](https://www.youtube.com/watch?v=oI9fMUqgfxY&index=23&list=PLB7540DEDD482705B)
  - [MIT 6.042J - Large Deviations](https://www.youtube.com/watch?v=q4mwO2qS2z4&index=24&list=PLB7540DEDD482705B)
  - [MIT 6.042J - Random Walks](https://www.youtube.com/watch?v=56iFMY8QW2k&list=PLB7540DEDD482705B&index=25)

- [Simonson: Approximation Algorithms (video)](https://www.youtube.com/watch?v=oDniZCmNmNw&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=19)

- **문자열 매칭
  - 라빈-카프(Rabin-Karp) (동영상):
    - [라빈 카프 알고리즘](https://www.coursera.org/learn/data-structures/lecture/c0Qkw/rabin-karps-algorithm)
    - [Precomputing](https://www.coursera.org/learn/data-structures/lecture/nYrc8/optimization-precomputation)
    - [최적화: 구현과 분석](https://www.coursera.org/learn/data-structures/lecture/h4ZLc/optimization-implementation-and-analysis)
    - [Table Doubling, Karp-Rabin](https://www.youtube.com/watch?v=BRO7mVIFt08&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=9)
    - [Rolling Hashes, Amortized Analysis](https://www.youtube.com/watch?v=w6nuXg0BISo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=32)
  - Knuth-Morris-Pratt (KMP):
    - [The Knuth-Morris-Pratt (KMP) String Matching Algorithm](https://www.youtube.com/watch?v=5i7oKodCRJo)
  - 보이어-무어(Boyer–Moore) 문자열 검색 알고리즘
    - [Boyer-Moore String Search Algorithm](https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_string_search_algorithm)
    - [Advanced String Searching Boyer-Moore-Horspool Algorithms (video)](https://www.youtube.com/watch?v=QDZpzctPf10)
  - [Coursera: Algorithms on Strings](https://www.coursera.org/learn/algorithms-on-strings/home/week/1)
    - starts off great, but by the time it gets past KMP it gets more complicated than it needs to be
    - 트라이(tries)에 대해서 잘 설명하고 있다.
    - 이건 생략 가능

- **정렬**

  - 스탠포드 대학의 정렬 강의들:
    - [Lecture 15 | Programming Abstractions (video)](https://www.youtube.com/watch?v=ENp00xylP7c&index=15&list=PLFE6E58F856038C69)
    - [Lecture 16 | Programming Abstractions (video)](https://www.youtube.com/watch?v=y4M9IVgrVKo&index=16&list=PLFE6E58F856038C69)
  - Shai Simonson, [Aduni.org](http://www.aduni.org/):
    - [Algorithms - Sorting - Lecture 2 (video)](https://www.youtube.com/watch?v=odNJmw5TOEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=2)
    - [Algorithms - Sorting II - Lecture 3 (video)](https://www.youtube.com/watch?v=hj8YKFTFKEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=3)
  - Steven Skiena lectures on sorting:
    - [lecture begins at 26:46 (video)](https://youtu.be/ute-pmMkyuk?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1600)
    - [lecture begins at 27:40 (video)](https://www.youtube.com/watch?v=yLvp-pB8mak&index=8&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [lecture begins at 35:00 (video)](https://www.youtube.com/watch?v=q7K9otnzlfE&index=9&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [lecture begins at 23:50 (video)](https://www.youtube.com/watch?v=TvqIGu9Iupw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=10)

## Video Series

편하게 보세요. "Netflix and skill"이라니까요 :P

- [List of individual Dynamic Programming problems (each is short)](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)

- [x86 Architecture, Assembly, Applications (11 videos)](https://www.youtube.com/playlist?list=PL038BE01D3BAEFDB0)

- [MIT 18.06 Linear Algebra, Spring 2005 (35 videos)](https://www.youtube.com/playlist?list=PLE7DDD91010BC51F8)

- [Excellent - MIT Calculus Revisited: Single Variable Calculus](https://www.youtube.com/playlist?list=PL3B08AE665AB9002A)

- [Computer Science 70, 001 - Spring 2015 - Discrete Mathematics and Probability Theory](http://www.infocobuild.com/education/audio-video-courses/computer-science/cs70-spring2015-berkeley.html)

- [Discrete Mathematics by Shai Simonson (19 videos)](https://www.youtube.com/playlist?list=PLWX710qNZo_sNlSWRMVIh6kfTjolNaZ8t)

- [Discrete Mathematics Part 1 by Sarada Herke (5 videos)](https://www.youtube.com/playlist?list=PLGxuz-nmYlQPOc4w1Kp2MZrdqOOm4Jxeo)

- CSE373 - Analysis of Algorithms (25 videos)
  - [Skiena lectures from Algorithm Design Manual](https://www.youtube.com/watch?v=ZFjhkohHdAA&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=1)

- [UC Berkeley 61B (Spring 2014): Data Structures (25 videos)](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd)

- [UC Berkeley 61B (Fall 2006): Data Structures (39 videos)](https://archive.org/details/ucberkeley-webcast-PL4BBB74C7D2A1049C)

- [UC Berkeley 61C: Machine Structures (26 videos)](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iCl2-D-FS5mk0jFF6cYSJs_)

- [OOSE: Software Dev Using UML and Java (21 videos)](https://www.youtube.com/playlist?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)

- ~~[UC Berkeley CS 152: Computer Architecture and Engineering (20 videos)](https://www.youtube.com/watch?v=UH0QYvtP7Rk&index=20&list=PLkFD6_40KJIwEiwQx1dACXwh-2Fuo32qr)~~

- [MIT 6.004: Computation Structures (49 videos)](https://www.youtube.com/playlist?list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-)

- [Carnegie Mellon - Computer Architecture Lectures (39 videos)](https://www.youtube.com/playlist?list=PL5PHm2jkkXmi5CxxI7b3JCL1TWybTDtKq)

- [MIT 6.006: Intro to Algorithms (47 videos)](https://www.youtube.com/watch?v=HtSuA80QTyo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&nohtml5=False)

- [MIT 6.033: Computer System Engineering (22 videos)](https://www.youtube.com/watch?v=zm2VP0kHl1M&list=PL6535748F59DCA484)

- [MIT 6.034 Artificial Intelligence, Fall 2010 (30 videos)](https://www.youtube.com/playlist?list=PLUl4u3cNGP63gFHB6xb-kVBiQHYe_4hSi)

- [MIT 6.042J: Mathematics for Computer Science, Fall 2010 (25 videos)](https://www.youtube.com/watch?v=L3LMbpZIKhQ&list=PLB7540DEDD482705B)

- [MIT 6.046: Design and Analysis of Algorithms (34 videos)](https://www.youtube.com/watch?v=2P-yW7LQr08&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

- [MIT 6.050J: Information and Entropy, Spring 2008 (19 videos)](https://www.youtube.com/watch?v=phxsQrZQupo&list=PL_2Bwul6T-A7OldmhGODImZL8KEVE38X7)

- [MIT 6.851: Advanced Data Structures (22 videos)](https://www.youtube.com/watch?v=T0yzrZL1py0&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=1)

- [MIT 6.854: Advanced Algorithms, Spring 2016 (24 videos)](https://www.youtube.com/playlist?list=PL6ogFv-ieghdoGKGg2Bik3Gl1glBTEu8c)

- [Harvard COMPSCI 224: Advanced Algorithms (25 videos)](https://www.youtube.com/playlist?list=PL2SOU6wwxB0uP4rJgf5ayhHWgw7akUWSf)

- [MIT 6.858 Computer Systems Security, Fall 2014](https://www.youtube.com/watch?v=GqmQg-cszw4&index=1&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)

- [Stanford: Programming Paradigms (27 videos)](https://www.youtube.com/playlist?list=PL9D558D49CA734A02)

- [Introduction to Cryptography by Christof Paar](https://www.youtube.com/playlist?list=PL6N5qY2nvvJE8X75VkXglSrVhLv1tVcfy)
  - [Course Website along with Slides and Problem Sets](http://www.crypto-textbook.com/)

- [Mining Massive Datasets - Stanford University (94 videos)](https://www.youtube.com/playlist?list=PLLssT5z_DsK9JDLcT8T62VtzwyW9LNepV)

- [Graph Theory by Sarada Herke (67 videos)](https://www.youtube.com/user/DrSaradaHerke/playlists?shelf_id=5&view=50&sort=dd)

## 컴퓨터 과학 강의들

- [컴퓨터 과학 온라인 강의들](https://github.com/open-source-society/computer-science)
- [(많은 온라인 강의가 있는) 컴퓨터 과학 강의들](https://github.com/prakhar1989/awesome-courses)

## 학술 자료들

- [Love classic papers?](https://www.cs.cmu.edu/~crary/819-f09/)
- [1978: Communicating Sequential Processes](http://spinroot.com/courses/summer/Papers/hoare_1978.pdf)
  - [implemented in Go](https://godoc.org/github.com/thomas11/csp)
- [2003: The Google File System](http://static.googleusercontent.com/media/research.google.com/en//archive/gfs-sosp2003.pdf)
  - replaced by Colossus in 2012
- [2004: MapReduce: Simplified Data Processing on Large Clusters]( http://static.googleusercontent.com/media/research.google.com/en//archive/mapreduce-osdi04.pdf)
  - mostly replaced by Cloud Dataflow?
- [2006: Bigtable: A Distributed Storage System for Structured Data](https://static.googleusercontent.com/media/research.google.com/en//archive/bigtable-osdi06.pdf)
  - [An Inside Look at Google BigQuery](https://cloud.google.com/files/BigQueryTechnicalWP.pdf)
- [2006: The Chubby Lock Service for Loosely-Coupled Distributed Systems](https://research.google.com/archive/chubby-osdi06.pdf)
- [2007: Dynamo: Amazon’s Highly Available Key-value Store](http://s3.amazonaws.com/AllThingsDistributed/sosp/amazon-dynamo-sosp2007.pdf)
  - The Dynamo paper kicked off the NoSQL revolution
- [2007: What Every Programmer Should Know About Memory (very long, and the author encourages skipping of some sections)](https://www.akkadia.org/drepper/cpumemory.pdf)
- [2010: Dapper, a Large-Scale Distributed Systems Tracing Infrastructure](https://research.google.com/pubs/archive/36356.pdf)
- [2010: Dremel: Interactive Analysis of Web-Scale Datasets](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/36632.pdf)
- [2012: Google's Colossus](https://www.wired.com/2012/07/google-colossus/)
  - paper not available
- 2012: AddressSanitizer: A Fast Address Sanity Checker:
  - [paper](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/37752.pdf)
  - [video](https://www.usenix.org/conference/atc12/technical-sessions/presentation/serebryany)
- 2013: Spanner: Google’s Globally-Distributed Database:
  - [paper](http://static.googleusercontent.com/media/research.google.com/en//archive/spanner-osdi2012.pdf)
  - [video](https://www.usenix.org/node/170855)
- [2014: Machine Learning: The High-Interest Credit Card of Technical Debt](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43146.pdf)
- [2015: Continuous Pipelines at Google](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43790.pdf)
- [2015: High-Availability at Massive Scale: Building Google’s Data Infrastructure for Ads](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44686.pdf)
- [2015: TensorFlow: Large-Scale Machine Learning on Heterogeneous Distributed Systems](http://download.tensorflow.org/paper/whitepaper2015.pdf )
- [2015: How Developers Search for Code: A Case Study](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43835.pdf)
- [2016: Borg, Omega, and Kubernetes](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44843.pdf)

## 라이센스

[CC-BY-SA-4.0](./LICENSE.txt)
