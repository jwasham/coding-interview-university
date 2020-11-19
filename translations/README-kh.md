# មហាវិទ្យាល័យការសរសេរកូដសំរាប់ការសម្ភាសន៍ (Coding Interview University)


### បង្កើតដោយ: [@John Washam](https://github.com/jwasham)
### បកប្រែជាភាសារខ្មែរដោយ: [@Vortana Say](https://github.com/vsay01)

> ពីដំបូងខ្ញុំបង្កើតនេះជាបញ្ជីប្រធានបទត្រូវធ្វើខ្លីដើម្បីក្លាយជាវិស្វករអភិវឌ្ឍន៍កម្មវិធី ប៉ុន្តែវាបានកើនឡើងដល់បញ្ជីធំដែលអ្នកបានឃើញសព្វថ្ងៃនេះ។ បន្ទាប់ពីឆ្លងកាត់គំរោងសិក្សានេះ    [ ខ្ញុំបានក្លាយ ជាវិស្វករអភិវឌ្ឍន៍កម្មវិធីនៅអាមាហ្សូន (Amazon)](https://startupnextdoor.com/ive-been-acquired-by-amazon/?src=ciu)
> អ្នកប្រហែលជាមិនចាំបាច់សិក្សាច្រេីនដូចខ្ញុំទេ។ ទោះយ៉ាងណាក៏ដោយអ្វីគ្រប់យ៉ាងដែលអ្នកត្រូវការគឺនៅទីនេះ។
>
> ខ្ញុំបានសិក្សាប្រហែលជា ៨ ទៅ ១២ ម៉ោងក្នុងមួយថ្ងៃអស់រយៈពេលជាច្រើនខែ។ អ្នកអាចអានារឿងរបស់ខ្ញុំ៖ [ហេតុអ្វីខ្ញុំសិក្សាពេញម៉ោងរយៈពេល ៨ ខែសំរាប់ការសំភាសន៍ហ្គូហ្គល](https://medium.freecodecamp.org/why-i-studied-full-time-for-8-months-for-a-google-interview-cc662ce9bb13)
>
> ចំណុចដែលបានរាយនៅទីនេះនឹងជួយអ្នករៀបចំការសំភាសន៍បច្ចេកទេសនៅក្រុមហ៊ុនកម្មវិធីណាមួយ។
> រាប់បញ្ចូលទាំងក្រុមហ៊ុនធំៗដូចជា Amazon, Facebook, Google និង Microsoft ។
>
> សូមសំណាងល្អដល់អ្នក!

<details>
<summary>ការបកប្រែ៖</summary>

- [ភាសារចិន - 中文版本](translations/README-cn.md)
- [ភាសារវៀតណាម - Tiếng Việt - Vietnamese](translations/README-vi.md)
- [ភាសារអេស្ប៉ាញ - Español](translations/README-es.md)
- [ភាសារព័រទុយហ្កាល់ - Português Brasileiro](translations/README-ptbr.md)
- [ភាសារប៉ូឡូញ - Polish](translations/README-pl.md)

</details>

<details>
<summary>ភាសារដែលកំពុងបកប្រែ:</summary>

- [हिन्दी](https://github.com/jwasham/coding-interview-university/issues/81)
- [עברית](https://github.com/jwasham/coding-interview-university/issues/82)
- [Bahasa Indonesia](https://github.com/jwasham/coding-interview-university/issues/101)
- [Arabic](https://github.com/jwasham/coding-interview-university/issues/98)
- [Turkish](https://github.com/jwasham/coding-interview-university/issues/90)
- [French](https://github.com/jwasham/coding-interview-university/issues/89)
- [Russian](https://github.com/jwasham/coding-interview-university/issues/87)
- [Ukrainian](https://github.com/jwasham/coding-interview-university/issues/106)
- [Korean(한국어)](https://github.com/jwasham/coding-interview-university/issues/118)
- [Telugu](https://github.com/jwasham/coding-interview-university/issues/117)
- [Urdu](https://github.com/jwasham/coding-interview-university/issues/140)
- [Thai](https://github.com/jwasham/coding-interview-university/issues/156)
- [Greek](https://github.com/jwasham/coding-interview-university/issues/166)
- [Italian](https://github.com/jwasham/coding-interview-university/issues/170)
- [Malayalam](https://github.com/jwasham/coding-interview-university/issues/239)
- [Japanese (日本語)](https://github.com/jwasham/coding-interview-university/issues/257)

</details>

---

## តារាងមាតិកា

- [តើវាគឺជាអ្វី?](#what-is-it)
- [ហេតុអ្វីប្រើវា?](#why-use-it)
- [របៀបប្រើវា](#how-to-use-it)
- [កុំមានអារម្មណ៍ថាអ្នកមិនឆ្លាតគ្រប់គ្រាន់](#dont-feel-you-arent-smart-enough)
- [ធនធានវីដេអូ](#about-video-resources)
- [ដំណើរការសម្ភាសន៍ និង ការត្រៀមសម្ភាសន៍ទូទៅ](#interview-process--general-interview-prep)
- [ជ្រើសរើសភាសាមួយសម្រាប់ការសម្ភាសន៍](#pick-one-language-for-the-interview)
- [បញ្ជីសៀវភៅ](#book-list)
- [មុនពេលអ្នកចាប់ផ្តើម](#before-you-get-started)
- [អ្វីដែលអ្នកនឹងមិនឃើញ](#what-you-wont-see-covered)
- [ចំណេះដឹងជាមុនដែលគួរមាន](#prerequisite-knowledge)
- [ផែនការប្រចាំថ្ងៃ](#the-daily-plan)
- [ភាពស្មុគស្មាញនៃក្បួនដោះស្រាយ / Big-O / ការវិភាគ អាសុីមតុតិច (Asymptotic analysis)](#algorithmic-complexity--big-o--asymptotic-analysis)
- [Data Structures](#data-structures)
    - [Arrays](#arrays)
    - [Linked Lists](#linked-lists)
    - [Stack](#stack)
    - [Queue](#queue)
    - [Hash table](#hash-table)
- [ចំណេះដឹងបន្ថែម](#more-knowledge)
    - [Binary search](#binary-search)
    - [Bitwise operations](#bitwise-operations)
- [Trees](#trees)
    - [Trees - កំណត់សំគាល់ និង ប្រវត្តិ](#trees---notes--background)
    - [Binary search trees: BSTs](#binary-search-trees-bsts)
    - [Heap / Priority Queue / Binary Heap](#heap--priority-queue--binary-heap)
    - balanced search trees (គំនិតទូទៅ តែពុំមែនព័ត៌មានលម្អិតទេ)
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
- [ចំណេះដឹងបន្ថែមទៀត](#even-more-knowledge)
    - [Recursion](#recursion)
    - [Dynamic Programming](#dynamic-programming)
    - [Object-Oriented Programming](#object-oriented-programming)
    - [Design Patterns](#design-patterns)
    - [Combinatorics (n choose k) & Probability](#combinatorics-n-choose-k--probability)
    - [NP, NP-Complete and Approximation Algorithms](#np-np-complete-and-approximation-algorithms)
    - [Caches](#caches)
    - [Processes and Threads](#processes-and-threads)
    - [Testing](#testing)
    - [Scheduling](#scheduling)
    - [String searching & manipulations](#string-searching--manipulations)
    - [Tries](#tries)
    - [Floating Point Numbers](#floating-point-numbers)
    - [Unicode](#unicode)
    - [Endianness](#endianness)
    - [Networking](#networking)
- [System Design, Scalability, Data Handling](#system-design-scalability-data-handling) (if you have 4+ years experience)
- [ពិនិត្យចុងក្រោយ](#final-review)
- [អនុវត្តសំណួរសរសេរកូដ](#coding-question-practice)
- [លំហាត់សរសេរកូដ / បញ្ហា](#coding-exerciseschallenges)
- [នៅពេលអ្នកជិតដល់ការសំភាសន៍](#once-youre-closer-to-the-interview)
- [ប្រវត្តិរូបសង្ខេបរបស់អ្នក](#your-resume)
- [ត្រូវគិតអំពីពេលសម្ភាសន៍មកដល់](#be-thinking-of-for-when-the-interview-comes)
- [មានសំណួរសម្រាប់អ្នកសម្ភាសន៍យេីង](#have-questions-for-the-interviewer)
- [នៅពេលដែលទទួលបានការងារធ្វើ](#once-youve-got-the-job)

---

## What is it? 
## តើវាគឺជាអ្វី?

នេះគឺជាគំរោងសិក្សារបស់ខ្ញុំដែលមានរយៈពេលជាច្រើនខែសំរាប់ការរៀនក្លាយពីអ្នកបង្កើតគេហទំព័រ (បង្រៀនដោយខ្លួនឯង និង មិនមានសញ្ញាប័ត្រ
វិទ្យាសាស្ត្រកុំព្យូទ័រ) រហូតដល់ក្លាយជាវិស្វករអភិវឌ្ឍន៍កម្មវិធីសំរាប់ក្រុមហ៊ុនធំ។!

![ការសរសេរកូដនៅលើក្ដារខៀន - ពីតំបន់ Silicon Valley របស់ HBO](https://d3j2pkmjtin6ou.cloudfront.net/coding-at-the-whiteboard-silicon-valley.png)

នេះមានន័យថាសម្រាប់ "វិស្វករអភិវឌ្ឍន៍កម្មវិធីថ្មី" ឬអ្នកដែលប្តូរពី
ការអភិវឌ្ឍន៍កម្មវិធី / អ្នកបង្កេីតវេបសាយ (ដែលត្រូវការចំណេះដឹងផ្នែកវិទ្យាសាស្ត្រកុំព្យូទ័រ) ។ ប្រសិនបើអ្នកមាន
បទពិសោធជាច្រើនឆ្នាំក្នុងការអភិវឌ្ឍន៍កម្មវិធី នោះអ្នកអាចនឹងរំពឹងថាមានបទសម្ភាសន៍ពិបាក។

ប្រសិនបើអ្នកមានបទពិសោធន៍អភិវឌ្ឍន៍កម្មវិធី ឬ វេបសាយច្រើនឆ្នាំ សូមកត់សម្គាល់ថាក្រុមហ៊ុនធំ ៗ ដូចជាហ្គូហ្គោល(Google) អាម៉ាហ្សូន (Amazon)
ហ្វេសប៊ុក (Facebook) និង ម៉ៃក្រូសូហ្វ (Microsoft) មានទស្សនៈថាវិស្វករអភិវឌ្ឍន៍កម្មវិធី ខុសគ្នាពីអ្នកបង្កេីតកម្មវិធី ឬ ការអភិវឌ្ឍន៍គេហទំព័រវេបសាយ ហើយពួកគេត្រូវការចំណេះដឹងផ្នែកវិទ្យាសាស្ត្រកុំព្យូទ័រ។

ប្រសិនបើអ្នកចង់ក្លាយជាវិស្វករដែលអាចទុកចិត្តបានឬវិស្វករប្រតិបត្តិការសូមសិក្សាបន្ថែមពីបញ្ជីជម្រើស (បណ្តាញ និង សុវត្ថិភាព) ។

---

### Why use it? 
## ហេតុអ្វីប្រើវា?

នៅពេលដែលខ្ញុំចាប់ផ្តើមគំរោងនេះ ខ្ញុំមិនដឹងពី stack, heap, Big-O, trees និង មិនដឹងរបៀបឆ្លងកាត់ក្រាហ្វ។ ប្រសិនបើខ្ញុំត្រូវសរសេរកូដដោះស្រាយ Sort ខ្ញុំអាចប្រាប់អ្នកថាវានឹងមិនល្អទេ។

Data Structure ទាំងអស់ដែលខ្ញុំធ្លាប់បានប្រើត្រូវបានបង្កើតឡើងមកជាមួយភាសា ហើយខ្ញុំមិនដឹងពីរបៀប និង ដំណេីរការដែល Data Structure។ ខ្ញុំមិនដែលត្រូវគ្រប់គ្រង Programming Memory ទេលុះត្រាតែកម្មវិធីខ្ញុំសរសេរមានបញ្ហា "អស់ Memory" ហើយបន្ទាប់មកខ្ញុំត្រូវរកដំណោះស្រាយបណ្តោះអាសន្ន។ ខ្ញុំបានប្រើ Multidiemsional arrays ពីរបីនៅក្នុងជីវិតរបស់ខ្ញុំ និង រាប់ពាន់នៃ Associate arrays ប៉ុន្តែខ្ញុំមិនដែលបង្កើត Data Structure ពីដំបូងឡើយ។

វាជាផែនការវែង។ វាអាចចំណាយពេលច្រើនខែ។ ប្រសិនបើអ្នកធ្លាប់ស្គាល់រឿងនេះរួចហើយវានឹងនាំអ្នកចំណាយពេលតិចជាងមុន។

---

### How to use it?
## របៀបប្រើវា


អ្វីគ្រប់យ៉ាងខាងក្រោមគឺជាគ្រោង អ្នកគួរតែដោះស្រាយតាមលំដាប់ពីលើចុះក្រោម។

ខ្ញុំកំពុងប្រើសញ្ញាសម្គាល់ពិសេសរបស់ GitHub រួមទាំងបញ្ជីភារកិច្ចដើម្បីពិនិត្យមើលវឌ្ឍនភាពការងារខ្ញុំ។

**បង្កើតសាខាថ្មី ដូច្នេះអ្នកអាចពិនិត្យមើលដូចនេះគ្រាន់តែដាក់សញ្ញា x ក្នុងតង្កៀប៖ [x]**


ដាក់សាខាមួយ ហើយធ្វើតាមពាក្យបញ្ជាខាងក្រោម

`git checkout -b progress`

`git remote add jwasham https://github.com/jwasham/coding-interview-university`

`git fetch --all`

គូសសញ្ញា X ក្នុងប្រអប់ទាំងអស់បន្ទាប់ពីអ្នកបានបញ្ចប់ការកែសម្រួល
`git add .`

`git commit -m "Marked x"`

`git rebase jwasham/master`

`git push --force`

[ព័ត៌មានបន្ថែមអំពីសញ្ញាសម្គាល់ Github]](https://guides.github.com/features/mastering-markdown/#GitHub-flavored-markdown)

---

### Don't feel you aren't smart enough
## កុំមានអារម្មណ៍ថាអ្នកមិនឆ្លាតគ្រប់គ្រាន់

- វិស្វករអភិវឌ្ឍន៍កម្មវិធីដែលទទួលបានជោគជ័យគឺឆ្លាត ប៉ុន្តែមនុស្សជាច្រើនមានអារម្មណ៍ដែលពួកគេមិនឆ្លាតគ្រប់គ្រាន់។
- [រឿងរបស់អ្នកសរសេរកម្មវិធីដែលមានទេពកោសល្យ](https://www.youtube.com/watch?v=0SARbwvhupQ)
- [វាមានគ្រោះថ្នាក់ក្នុងការទៅតែម្នាក់ឯង: ការប្រយុទ្ធនឹងសត្វចម្លែកដែលចេះបំបាំងកាយនៅក្នុងបច្ចេកវិទ្យា](https://www.youtube.com/watch?v=1i8ylq4j_EY)

---

### About Video Resources
## ធនធានវីដេអូ

វីដេអូខ្លះអាចប្រើបានតែតាមរយៈការចុះឈ្មោះចូលរៀនវគ្គ Coursera ឬ EdX ប៉ុណ្ណោះ។ ទាំងនេះត្រូវបានគេហៅថា MOOCs ។
ពេលខ្លះថ្នាក់រៀនមិននៅក្នុងវគ្គដូច្នេះអ្នកត្រូវរង់ចាំពីរបីខែសិន។

ខ្ញុំសូមកោតសរសើរចំពោះជំនួយរបស់អ្នកក្នុងការបន្ថែមប្រភពសាធារណៈដែលអាចរកបានដោយឥតគិតថ្លៃជានិច្ចដូចជាវីដេអូយូធ្យូប (YouTube) ដើម្បីភ្ជាប់វីដេអូវគ្គសិក្សាតាមអ៊ីនធឺណិត។

ខ្ញុំចូលចិត្តប្រើការបង្រៀនសាកលវិទ្យាល័យ។
    
---

### Interview Process & General Interview Prep
## ដំណើរការសំភាសន៍និងកម្មវិធីសម្ភាសន៍ទូទៅ

- [ ] [ABC: តែងតែសរសេរកូដ](https://medium.com/always-be-coding/abc-always-be-coding-d5f8051afce2#.4heg8zvm4)
- [ ] [ការប្រេីប្រាស់ក្តារខៀន](https://medium.com/@dpup/whiteboarding-4df873dbba2e#.hf6jn45g1)
- [ ] [ការប្រេីប្រាស់ក្តារខៀនមានប្រសិទ្ធិភាពក្នុងពេលសម្ភាសន៍កម្មវិធី](http://www.coderust.com/blog/2014/04/10/effective-whiteboarding-during-programming-interviews/)
- [ ] [ជ្រើសរើសបុគ្គលិកជំនាញបច្ចេកវិទ្យា](https://www.youtube.com/watch?v=N233T0epWTs)
- [ ] វិធីរកការងារនៅក្រុមហ៊ុនធំ ៤៖
    - [ ] [របៀបរកការងារធ្វើនៅក្រុមហ៊ុនធំ ៤ - Amazon, Facebook, Google និង Microsoft (មានវីដេអូ)](https://www.youtube.com/watch?v=YJZCUhxNCv8)
- [បំបែកការសម្ភាសន៍ការសរសេរកូដ ១៖
    - [ ] [ហ្គេលឡេអិលម៉ាកឌូវែល (Gayle L McDowell) - បំបែកការសម្ភាសន៍ការសរសេរកូដ (វីដេអូ)](https://www.youtube.com/watch?v=rEJzOhC5ZtQ)
    - [ ] [បំបែកបទសម្ភាសន៍នៃការសរសេរកូដជាមួយអ្នកនិពន្ធហ្គេលឡាឡាក់មែនម៉ាកម៉ាកឌូវែល (Gayle Laakmann McDowell)  (វីដេអូ)](https://www.youtube.com/watch?v=aClxtDcdpsQ)
- [ ] បំបែកបទសម្ភាសន៍កូដហ្វេសប៊ុក
    - [ ] [វិធីសាស្រ្ត](https://www.youtube.com/watch?v=wCl9kvQGHPI)
    - [ ] [ពន្យល់ពីបញ្ហា](https://www.youtube.com/watch?v=4UWDyJq8jZg)
- [ ] វគ្គសិក្សាត្រៀម:
    - [ ] [សំភាសន៍វិស្វករអភិវឌ្ឍន៍កម្មវិធី (មិនបានបង់ប្រាក់)](https://www.udemy.com/software-engineer-interview-unleashed)៖
        - រៀនពីរបៀបដើម្បីត្រៀមខ្លួនសម្រាប់ការសម្ភាសន៍វិស្វករអភិវឌ្ឍន៍កម្មវិធីពីអ្នកសំភាសន៍របស់ហ្គូហ្គោល (Google) ។
    - [ ] [Python សម្រាប់រចនាសម្ព័ន្ធទិន្នន័យក្បួនដោះស្រាយនិងសំភាសន៍ (វគ្គសិក្សាបង់លុយ)](https://www.udemy.com/python-for-data-structures-algorithms-and-interviews/)៖
        - វគ្គសិក្សាសំភាសន៍ Python ដែលផ្តោតលើរចនាសម្ព័ន្ធទិន្នន័យក្បួនដោះស្រាយ ការសំភាសន៍សាកល្បងនិងច្រើនទៀត។
    - [ ] [ការណែនាំអំពីរចនាសម្ព័ន្ធទិន្នន័យនិងក្បួនដោះស្រាយដោយប្រើ Python (វគ្គសិក្សាឥតគិតថ្លៃរបស់ Udacity)](https://www.udacity.com/course/data-structures-and-algorithms-in-python--ud513)៖
        - រចនាសម្ព័នធ័រណេតនិងអ័រហ្គ្រែនដោយឥតគិតថ្លៃ។
    - [ ] [រចនាសម្ព័នទិន្នន័យនិងក្បួនដោះស្រាយ! (Udacity បង់ Nanodegree)](https://www.udacity.com/course/data-structures-and-algorithms-nanodegree--nd256)៖
        - ទទួលបានការអនុវត្តជាក់ស្តែងជាមួយនឹងរចនាសម្ព័ន្ធទិន្នន័យជាង ១០០ លំហាត់ និងការណែនាំពីអ្នកបងៀនដើម្បីជួយរៀបចំអ្នកសម្រាប់ការសម្ភាសន៍ និង ដាក់ការងារ។
        
---

### Pick One Language for the Interview
## ជ្រើសរើសភាសាមួយសម្រាប់ការសម្ភាសន៍

អ្នកអាចប្រើភាសាដែលអ្នកមានភាពងាយស្រួលក្នុងការសរសេរកូដសំភាសន៍ប៉ុន្តែសម្រាប់ក្រុមហ៊ុនធំ ៗ ទាំងនេះគឺជាជំរើសដ៏រឹងមាំ៖

- C ++
- Java
- Python

អ្នកក៏អាចប្រើរបស់ទាំងនេះដែរប៉ុន្តែត្រូវអានជាមុនសិន។ វាអាចមានការនិយាយតៗគ្នា៖

- JavaScript
- Ruby

នេះគឺជាអត្ថបទមួយដែលខ្ញុំបានសរសេរអំពីការជ្រើសរើសភាសាសម្រាប់ការសម្ភាសន៍៖ [ជ្រើសរើសយកភាសាមួយសម្រាប់ការសម្ភាសន៍សរសេរកូដ](https://startupnextdoor.com/important-pick-one-language-for-the-coding-interview/)

អ្នកគួររេីសភាសាដែលអ្នកទំលាប់ជាមួយ និង មានចំណេះដឹង។

សូមអានបន្ថែមអំពីជំរើស៖
- http://www.byte-by-byte.com/choose-the-right-language-for-your-coding-interview/
- http://blog.codingforinterviews.com/best-programming-language-jobs/

[មើលធនធានភាសានៅទីនេះ](programming-language-resources.md)

អ្នកនឹងឃើញការរៀន C, C ++ និង Python ខាងក្រោមព្រោះខ្ញុំកំពុងរៀន។ មានសៀវភៅពីរបីដែលពាក់ព័ន្ធសូមមើលនៅខាងក្រោម។
        
---

### Book List
## បញ្ជីសៀវភៅ

នេះគឺជាបញ្ជីខ្លីជាងអ្វីដែលខ្ញុំបានប្រើ។ នេះត្រូវបានសង្ខេបដើម្បីជួយសន្សំសំចៃពេលវេលារបស់អ្នក។

---

### Interview Prep
## ត្រៀមការសម្ភាសន៍

- [ ] [សំភាសន៍ការសរសេរកម្មវិធីបង្ហាញ: ការសរសេរកូដវិធីរបស់អ្នកតាមរយៈការសំភាសន៍, បោះពុម្ពលើកទី ៤](https://www.amazon.com/Programming-Interviews-Exposed-Through-Interview/dp/111941847X/)
    - ចម្លើយសរសេរ C++ និង Java
    - នេះគឺជាសមដ៏ល្អសម្រាប់ការបំបែកសំភាសន៍កូដ
    - មិនពិបាកពេកទេ បញ្ហាភាគច្រើនប្រហែលជាងាយស្រួលជាងអ្វីដែលអ្នកបានឃើញក្នុងបទសម្ភាសន៍ (ពីអ្វីដែលខ្ញុំបានអាន)
- [ ] [ការសំភាសន៍ការសរសេរកូដការបោះពុម្ពលើកទី ៦](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - ចម្លើយនសរសេរជា Java
    
---

### If you have tons of extra time:
## ប្រសិនបើអ្នកមានពេលវេលាបន្ថែមច្រេីន

ជ្រើសរើសមួយ:

- [ ] [ធាតុផ្សំនៃបទសម្ភាសន៍សរសេរកម្មវិធី (កំណែ C ++)](https://www.amazon.com/Elements-Programming-Interviews-Insiders-Guide/dp/1479274836)
- [ ] [ធាតុផ្សំនៃការសំភាសន៍សរសេរកម្មវិធីក្នុង Python](https://www.amazon.com/Elements-Programming-Interviews-Python-Insiders/dp/1537713949/)
- [ ] ធាតុនៃការសំភាសន៍សរសេរកម្មវិធី (កំណែ Java)
    - [សៀវភៅ](https://www.amazon.com/Elements-Programming-Interviews-Java-Insiders/dp/1517435803/)
    - [គម្រោង - វិធីសាស្រ្ត Stub និងករណីតេស្តិ៍សម្រាប់រាល់បញ្ហាក្នុងសៀវភៅ](https://github.com/gardncl/elements-of-programming-interviews)

---

### Language Specific
## ភាសាជាក់លាក់

**អ្នកត្រូវជ្រើសរើសភាសាសំរាប់សំភាសន៍ (សូមមើលខាងលើ) ។**

នេះជាអ្នីដែលខ្ញុំគិតថាអ្នកគួរមេីល។ ខ្ញុំមិនមានធនធានសម្រាប់ភាសាទាំងអស់ទេ។ ខ្ញុំស្វាគមន៍ការដាក់បន្ថែមពីអ្នក។

ប្រសិនបើអ្នកអានចំណុចមួយក្នុងចំណោមចំណុចទាំងនេះអ្នកគួរតែមានចំនេះដឹង Data Structure និងចំណេះដឹងអំពីក្បួនដោះស្រាយ (Algorithm) ដែលអ្នកត្រូវចាប់ផ្តើមធ្វើបញ្ហាសរសេរកូដ។

**អ្នកអាចរំលងការបង្រៀនវីដេអូទាំងអស់នៅក្នុងគម្រោងនេះ** លើកលែងតែអ្នកចង់ពិនិត្យឡើងវិញ។

[ធនធានភាសាជាក់លាក់នៅទីនេះ។](programming-language-resources.md)

---

## C++

ខ្ញុំមិនបានអានទាំងពីរនេះទេ ប៉ុន្តែវាត្រូវបានវាយតម្លៃនិងសរសេរយ៉ាងខ្ពស់ដោយ Sedgewick ។ គាត់អស្ចារ្យណាស់។

- [ ] [វិធីដោះស្រាយក្នុង C++, ផ្នែក ១-៤៖ មូលដ្ឋានគ្រឹះរចនាសម្ព័ន្ធទិន្នន័យ (Data Structure) តម្រៀប (Sort) ស្វែងរក (Searching)](https://www.amazon.com/Algorithms-Parts-1-4-Fundamentals-Structure/dp/0201350882/)
- [ ] [វិធីដោះស្រាយក្នុង C++ ភាគ ៥៖ ក្បួនដោះស្រាយក្រាហ្វិច](https://www.amazon.com/Algorithms-Part-Graph-3rd-Pt-5/dp/0201361183/)

ប្រសិនបើអ្នកមានអនុសាសន៍ល្អប្រសើរសម្រាប់ C++ សូមប្រាប់ខ្ញុំឱ្យដឹង។ រកមើលធនធានទូលំទូលាយ។

---

## Java

- [ ] [វិធីដោះស្រាយ (Sedgewick និង Wayne)](https://www.amazon.com/Algorithms-4th-Robert-Sedgewick/dp/032157351X/)
    - វីដេអូដែលមានមាតិកាសៀវភៅ (និង Sedgewick!) លើវគ្គសិក្សា៖
        - [ក្បួនដោះស្រាយ I](https://www.coursera.org/learn/algorithms-part1)
        - [ក្បួនដោះស្រាយទី ២](https://www.coursera.org/learn/algorithms-part2)

រឺ៖

- [ ] [រចនាសម្ព័ន្ធទិន្នន័យ (Data Structure) និងក្បួនដោះស្រាយ Java](https://www.amazon.com/Data-Structures-Algorithms-Michael-Goodrich/dp/1118771338/)
    - ដោយហ្គ្រីដល (Goodrich), តាតសាសៀ (Tamassia), ហ្គោវីស (Goldwasser)
    - អត្ថបទសម្រាប់វគ្គសិក្សាសំរាប់ថ្នាក់ដំបូងរបស់វិទ្យាសាស្ត្រកុំព្យូទ័រនៅឯ UC Berkeley
    - សូមមើលរបាយការណ៍សៀវភៅរបស់ខ្ញុំស្តីពីកំណែ Python ខាងក្រោម។ សៀវភៅនេះមានប្រធានបទដូចគ្នា។

---

## Python
- [ ] [រចនាសម្ព័ន្ធទិន្នន័យ (Data Structure) និងក្បួនដោះស្រាយ (Algorithm) ក្នុង Python](https://www.amazon.com/Structures-Algorithms-Python-Michael-Goodrich/dp/1118290275/)
    - ដោយហ្គ្រីដល (Goodrich), តាតសាសៀ (Tamassia), ហ្គោវីស (Goldwasser)
    - ខ្ញុំចូលចិត្តសៀវភៅនេះ។ វាគ្របដណ្តប់អ្វីៗគ្រប់យ៉ាងនិងច្រើនទៀត។
    - លេខកូដព្យញ្ជនៈ
    - របាយការណ៍សៀវភៅរបស់ខ្ញុំ៖ https://startupnextdoor.com/book-report-data-structures-and-al algorithms-in-python/
    
---

### Before you Get Started
## មុនពេលអ្នកចាប់ផ្តើម

បញ្ជីនេះបានកើនឡើងអស់រយៈពេលជាច្រើនខែហើយ ។

នេះគឺជាកំហុសមួយចំនួនដែលខ្ញុំបានធ្វើដូច្នេះអ្នកនឹងមានបទពិសោធប្រសើរជាងមុន។

### 1. អ្នកនឹងមិនចងចាំវាទាំងអស់

ខ្ញុំបានមើលវីដេអូជាច្រើនម៉ោងនិងកត់ចំណាំគួរអោយចង់សើច ហើយប៉ុន្មានខែក្រោយមកមានរឿងជាច្រើនដែលខ្ញុំមិនចាំ។ ខ្ញុំចំណាយពេល ៣ ថ្ងៃទៀត
តាមរយៈកំណត់ចំណាំរបស់ខ្ញុំនិងធ្វើប័ណ្ណបញ្ជាក់ដូច្នេះខ្ញុំអាចពិនិត្យមើលឡើងវិញ។

សូមមេត្តាអានដូច្នេះអ្នកនឹងមិនធ្វើឱ្យខ្ញុំខុសទេ។

[រក្សាចំណេះដឹងវិទ្យាសាស្ត្រកុំព្យូទ័រ](https://startupnextdoor.com/retaining-computer-science-knowledge/) ។

វគ្គសិក្សាដែលបានណែនាំដល់ខ្ញុំ (មិនបានសិក្សាវាទេ)៖ [ការរៀនពីរបៀបរៀន](https://www.coursera.org/learn/learning-how-to-learn)

### 2. ប្រើកាតបង្ហាញ

ដើម្បីដោះស្រាយបញ្ហា ខ្ញុំបានបង្កើតវេបសាយកាតតូចមួយដែលខ្ញុំអាចបន្ថែមកាតចំនួន ២ ប្រភេទគឺទូទៅនិងលេខកូដ។
កាតនីមួយៗមានទ្រង់ទ្រាយខុសៗគ្នា។

ខ្ញុំបានបង្កើតវេបសាយសំរាប់ទូរស័ព្ទដំបូងមួយ ដូច្នេះខ្ញុំអាចពិនិត្យមើលឡើងវិញនៅលើទូរស័ព្ទ និង ថេប្លេតរបស់ខ្ញុំទោះបីខ្ញុំនៅទីណាក៏ដោយ។

អ្នកអាចបង្កេីតដោយឥតគិតថ្លៃ៖

- [បណ្តាញឃ្លាំងផ្ទុកកាតឡើងវិញ](https://github.com/jwasham/computer-science-flash-cards)
- [មូលដ្ឋានទិន្នន័យកាតរបស់ខ្ញុំ (កាតចាស់ - ១២០០ កាត)](https://github.com/jwasham/computer-science-flash-cards/blob/master/cards-jwasham.db)៖
- [ប្រព័ន្ធទិន្នន័យកាតរបស់ខ្ញុំ (កាតថ្មី - ១៨០០)](https://github.com/jwasham/computer-science-flash-cards/blob/master/cards-jwasham-extreme.db)៖

សូមចងចាំថាខ្ញុំបានឡើងលើក្តារហើយមានកាតគ្របដណ្តប់លើអ្វីៗទាំងអស់ចាប់ពីភាសាការជួបប្រជុំគ្នា និង សំនួរទាក់ទងនឹង Python រហូតដល់ការរៀនម៉ាស៊ីននិងស្ថិតិ។ វាជាវិធីច្រើនពេកសម្រាប់អ្វីដែលត្រូវការ។

**កំណត់ចំណាំនៅលើបណ្ណបង្ហាញ៖** ជាលើកដំបូងដែលអ្នកទទួលស្គាល់អ្នកដឹងពីចម្លើយ សូមកុំសម្គាល់វាថាត្រូវបានគេស្គាល់។ អ្នកត្រូវតែមើល
កាតដូចគ្នានិងឆ្លើយវាច្រើនដងឱ្យបានត្រឹមត្រូវមុនពេលដែលអ្នកពិតជាដឹង។ ពាក្យដដែលៗនឹងធ្វើឱ្យចំណេះដឹងនោះកាន់តែស៊ីជម្រៅ
ខួរក្បាលរបស់អ្នក។

ជំរើសមួយផ្សេងទៀតក្នុងការប្រើប្រាស់បណ្តាញកាតរបស់ខ្ញុំគឺ [Anki](http://ankisrs.net/) ដែលត្រូវបានណែនាំអោយខ្ញុំច្រើនដង។ វាប្រើប្រព័ន្ធពាក្យដដែលៗដើម្បីជួយអ្នកចងចាំ។
វាមានភាពងាយស្រួលសម្រាប់អ្នកប្រើដែលមាននៅលើគ្រប់វេទិកាទាំងអស់និងមានប្រព័ន្ធធ្វើសមកាលកម្មពពក។ វាមានតម្លៃ ២៥ ដុល្លារលើប្រព័ន្ធប្រតិបត្តិការ iOS ប៉ុន្តែមិនគិតថ្លៃនៅលើវេទិកាផ្សេងទៀតទេ។

មូលដ្ឋានទិន្នន័យបណ្ណបង្ហាញរបស់ខ្ញុំក្នុងទំរង់អាគី (Anki) ៖ https://ankiweb.net/shared/info/25173560 (សូមអរគុណ [@xiewenya](https://github.com/xiewenya)

### ៣. ចាប់ផ្តើមធ្វើសំណួរសម្ភាសន៍សរសេរកូដខណៈពេលដែលអ្នកកំពុងរៀនរចនាសម្ព័ន្ធទិន្នន័យ (Data Structure) និង ក្បួនដោះស្រាយ (Algorithm)

អ្នកត្រូវអនុវត្តអ្វីដែលអ្នកកំពុងរៀនដើម្បីដោះស្រាយបញ្ហាឬអ្នកនឹងភ្លេច។ ខ្ញុំបានធ្វើកំហុសនេះ។ នៅពេលដែលអ្នកបានរៀនប្រធានបទមួយ
ហើយមានអារម្មណ៍ស្រួលជាមួយវាដូចជាបញ្ជីភ្ជាប់បើកសៀវភៅសម្ភាសន៍កូដសរសេរមួយហើយធ្វើសំណួរពីរបីទាក់ទងនឹង
បញ្ជីដែលបានភ្ជាប់។ បន្ទាប់មកបន្តទៅប្រធានបទសិក្សាបន្ទាប់។ បន្ទាប់មកពេលក្រោយ ត្រលប់ក្រោយហើយធ្វើបញ្ហាបញ្ជីដែលបានភ្ជាប់ផ្សេងទៀត
ឬបញ្ហាការហៅឡើងវិញឬអ្វីផ្សេងទៀត។ ប៉ុន្តែនៅតែធ្វើបញ្ហានៅពេលអ្នកកំពុងរៀន។ អ្នកមិនត្រូវបានគេជួលដើម្បីចំណេះដឹងទេ
ប៉ុន្តែរបៀបដែលអ្នកអនុវត្តចំណេះដឹង។ មានសៀវភៅនិងគេហទំព័រជាច្រើនដែលខ្ញុំសូមណែនាំ។
សូមមើលនៅទីនេះសម្រាប់ព័ត៌មានបន្ថែម: [ការអនុវត្តសំណួរសំណួរសរសេរកូដ](#coding-question-practice)

### 4. ពិនិត្យឡើងវិញ ពិនិត្យឡើងវិញ ពិនិត្យឡើងវិញ

ខ្ញុំរក្សាទុកសន្លឹកបន្លំមួយសន្លឹកនៅលើ ASCII, OSI stack, សញ្ញាណសំគាល់ធំ ៗ (Big-O) និងច្រើនទៀត។ ខ្ញុំសិក្សាវានៅពេលខ្ញុំមានពេលទំនេរខ្លះ។

សម្រាកពីបញ្ហាសរសេរកម្មវិធីរយៈពេលកន្លះម៉ោង ហើយអានកាតរបស់អ្នក។

### 5. ផ្តោតអារម្មណ៍

មានការរំខានជាច្រើនដែលអាចចំណាយពេលដ៏មានតម្លៃ។ ការផ្តោតអារម្មណ៍គឺពិបាក។ បើកតន្ត្រីមួយចំនួនដែលគ្មានទំនុកច្រៀងទេអ្នកនឹងអាចផ្តោតអារម្មណ៍បានល្អ។

---

### What you won't see covered
## អ្វីដែលអ្នកនឹងមិនឃើញគ្របដណ្តប់

ទាំងនេះជាបច្ចេកវិទ្យាដែលមានជាទូទៅប៉ុន្តែមិនមែនជាផ្នែកនៃផែនការសិក្សានេះទេ៖

- SQL
- Javascript
- HTML, CSS និងបច្ចេកវិទ្យាផ្នែក front-end

---

### The Daily Plan
## ផែនការប្រចាំថ្ងៃ

មុខវិជ្ជាខ្លះចំណាយពេលមួយថ្ងៃហើយ មុខវិជ្ជាខ្លះនឹងចំណាយពេលច្រើនថ្ងៃ។ អ្នកខ្លះរៀនតែគ្មានអ្វីអនុវត្ត។

ជារៀងរាល់ថ្ងៃខ្ញុំយកប្រធានបទមួយចេញពីបញ្ជីខាងក្រោមមើលវីដេអូអំពីប្រធានបទនោះហើយសរសេរកូតនៅក្នុង៖
- C - ប្រើរចនាសម្ព័ន្ធ និង មុខងារដែលយករចនាសម្ព័ន្ធ * និង អ្វីផ្សេងទៀតជា Arguments។
- C++ - ដោយមិនប្រើមុខងារដែលភ្ជាប់មកជាមួយនឹង ភាសា
- C++ - ប្រើប្រភេទដែលមានស្រាប់ដូចជា STL's::list សម្រាប់បញ្ជីភ្ជាប់ (Linked list)
- Python - ប្រើប្រភេទដែលមានស្រាប់ (ដើម្បីរំលឹក Python)
- និងសរសេរការធ្វើតេស្តដើម្បីធានាថាខ្ញុំធ្វើវាបានត្រឹមត្រូវពេលខ្លះគ្រាន់តែប្រើសេចក្តីថ្លែងអះអាងសាមញ្ញ assert()
- អ្នកអាចធ្វើ Jav ឬ អ្វីផ្សេងទៀតនេះគ្រាន់តែជារឿងរបស់ខ្ញុំប៉ុណ្ណោះ។

អ្នកមិនត្រូវការរបស់ទាំងអស់នេះទេ។ អ្នកត្រូវការតែ [ភាសាមួយសម្រាប់ការសម្ភាសន៍](#pick-one-language-for-the-interview) ។

ហេតុអ្វីត្រូវកូដទាំងអស់នេះ?
- អនុវត្ត អនុវត្ត អនុវត្តរហូតដល់ខ្ញុំច្បាស់ហើយអាចធ្វើវាដោយគ្មានបញ្ហា (អ្នកខ្លះមានករណីកំរច្រើន និង ព័ត៌មានលំអិតនៃការរក្សាទុកសៀវភៅដើម្បីចងចាំ)
- ធ្វើការនៅក្នុងឧបសគ្គ (បែងចែក / លុបចេញអង្គចងចាំ (Memory) ដោយគ្មានជំនួយពីការប្រមូលសំរាម (Gabage Collection) (លើកលែងតែ Python ឬ Java))
- ប្រើប្រភេទដែលមានស្រាប់ដូច្នេះខ្ញុំមានបទពិសោធន៍ប្រើឧបករណ៍ដែលមានស្រាប់សម្រាប់ការប្រើប្រាស់ដូចពេលធ្វេីការ (មិនមែនថាសរសេរការអនុវត្តន៍បញ្ជី (Linked List) របស់ខ្ញុំផ្ទាល់ក្នុងពេលធ្វេីការ)

ខ្ញុំប្រហែលជាមិនមានពេលវេលាដើម្បីធ្វើការទាំងអស់សម្រាប់មុខវិជ្ជាទាំងអស់នោះទេប៉ុន្តែខ្ញុំនឹងព្យាយាម។

អ្នកអាចឃើញកូដរបស់ខ្ញុំនៅទីនេះ៖

- [C](https://github.com/jwasham/practice-c)
- [C++](https://github.com/jwasham/practice-cpp)
- [Python](https://github.com/jwasham/practice-python)

អ្នកមិនចាំបាច់ទន្ទេញចាំគ្រប់ក្បួនដោះស្រាយទាំងអស់។

សរសេរកូដនៅលើក្ដារខៀនឬក្រដាស មិនមែនកុំព្យូទ័រទេ។ សាកល្បងជាមួយធាតុចូលគំរូមួយចំនួន។ បន្ទាប់មកសាកល្បងវានៅលើកុំព្យូទ័រ។

## ចំណេះដឹងចាំបាច់

- [ ] **រៀន C**
    - C គឺនៅគ្រប់ទីកន្លែង។ អ្នកនឹងឃើញឧទាហរណ៍នៅក្នុងសៀវភៅការបង្រៀនវីដេអូ *នៅគ្រប់ទីកន្លែង* ពេលអ្នកកំពុងសិក្សា។
    
    - [ ] [ភាសាសរសេរកម្មវិធី C, ភាគ ២](https://www.amazon.com/Programming-Language-Brian-W-Kernighan/dp/0131103628)
        
        - នេះគឺជាសៀវភៅខ្លីមួយប៉ុន្តែវានឹងផ្តល់ឱ្យអ្នកនូវភាសា C យ៉ាងល្អហើយប្រសិនបើអ្នកអនុវត្តវាបន្តិច អ្នកនឹងឆាប់ស្ទាត់ជំនាញ។ ការយល់ដឹង C ជួយអ្នកឱ្យយល់ពីរបៀបដែលកម្មវិធីនិងការចងចាំដំណើរការ។
        
        - [ចម្លើយចំពោះសំណួរ](https://github.com/lekkas/c-algorithms)

- [ ] **របៀបដែលកុំព្យូទ័រដំណើរការកម្មវិធី:**
    - [ ] [តើស៊ីភីយូប្រតិបត្តិកម្មវិធីមួយយ៉ាងដូចម្តេច? (វីដេអូ)](https://www.youtube.com/watch?v=XM4lGflQFvA)
    - [ ] [របៀបគណនាកុំព្យូទ័រ - ALU (វីដេអូ)](https://youtu.be/1I5ZMmrOfnA)
    - [ ] [ចុះបញ្ជី (Registers) និង រ៉េម (RAM) (វីដេអូ)](https://youtu.be/fpnE6UAfbtU)
    - [ ] [អង្គភាពកែច្នៃកណ្តាល (ស៊ីភីយូ) (The Central Processing Unit) (វីដេអូ)](https://youtu.be/FZGugFqdr60)
    - [ ] [សេចក្តីណែនាំនិងកម្មវិធី (វីដេអូ)](https://youtu.be/zltgXvg6r3k)

---

### Algorithmic complexity / Big-O / Asymptotic analysis
## ភាពស្មុគស្មាញនៃក្បួនដោះស្រាយ / ការវិភាគ Big-O

- គ្មានអ្វីត្រូវអនុវត្តទេ
- មានវីដេអូជាច្រើននៅទីនេះ។ គ្រាន់តែមើលឱ្យបានគ្រប់គ្រាន់រហូតដល់អ្នកយល់។ អ្នកអាចត្រលប់មកពិនិត្យឡើងវិញជានិច្ច។
- ប្រសិនបើការបង្រៀនមួយចំនួនមានភាពស្រងូតស្រងាត់អ្នកអាចរំលងដល់ក្រោមហើយមើលវីដេអូគណិតវិទ្យាដែលដាច់ពីគ្នាដើម្បីទទួលបានចំណេះដឹងជាមូលដ្ឋាន។
- [ ] [Harvard CS50 - Asymptotic Notation (វីដេអូ)](https://www.youtube.com/watch?v=iOq5kSKqeR4)
- [ ] [កំណត់ចំណាំ Big-O (ការបង្រៀនរហ័សទូទៅ) (វីដេអូ)](https://www.youtube.com/watch?v=V6mKVRU1evU)
- [ ] [Big O Notation (និង Omega និង Theta) - ការពន្យល់គណិតវិទ្យាល្អបំផុត (វីដេអូ)](https://www.youtube.com/watch?v=ei-A_wy5Yxw&index=2&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [ ] Skiena៖
    - [វីដេអូ](https://www.youtube.com/watch?v=gSyDMtdPNpU&index=2&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ស្លាយ](http://www3.cs.stonybrook.edu/~algorith/video-lectures/2007/lecture2.pdf)
- [ ] [ការណែនាំមួយចំពោះការវិភាគស្មុគស្មាញនៃគណិតវិទ្យា](http://discrete.gr/complexity/)
- [ ] [លំដាប់នៃការលូតលាស់ (វីដេអូ)](https://www.coursera.org/lecture/algorithmic-thinking-1/orders-of-growth-6PKkX)
- [ ] [ការវិភាគអាមីស្តូតូទិក (Amortized) (វីដេអូ)](https://www.coursera.org/lecture/algorithmic-thinking-1/asymptotics-bXAtM)
- [ ] [UC Berkeley Big O (មានវីដេអូ)](https://archive.org/details/ucberkeley_webcast_VIS4YDpuP98)
- [ ] [UC Berkeley Big Omega (វីដេអូ)](https://archive.org/details/ucberkeley_webcast_ca3e7UVmeUc)
- [ ] [ការវិភាគរំលោះ (Amortized) (វីដេអូ)](https://www.youtube.com/watch?v=B3SpQZaAZP4&index=10&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [ ] [បង្ហាញរូបភាព "Big-O" (វីដេអូ)](https://www.coursera.org/lecture/alacticmic-thinking-1/illustrating-big-o-YVqzv)
- [ ] TopCoder (រួមបញ្ចូលទាំងទំនាក់ទំនងកើតឡើងវិញនិងទ្រឹស្តីបទមេ)៖
    - [ភាពស្មុគស្មាញនៃការគណនា៖ ផ្នែកទី ១](https://www.topcoder.com/community/competitive-programming/tutorials/computational-complexity-section-1/)
    - [ភាពស្មុគស្មាញនៃការគណនា៖ ផ្នែកទី ២](https://www.topcoder.com/community/competitive-programming/tutorials/computational-complexity-section-2/)
- [ ] [សន្លឹកជំនួយ](http://bigocheatsheet.com/)

---

### Data Structures
## រចនាសម្ព័ន្ធទិន្នន័យ

- ### Arrays
    - អនុវត្តវ៉ិចទ័រប្តូរទំហំដោយស្វ័យប្រវត្តិ។
    - [ ] ការពិពណ៌នា៖
        - [Arrays (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/OsBSF/arrays)
        -[UC Berkeley CS61B - អារេ លីនែអ៊ែរ និង ពហុវិមាត្រ (វីដេអូ)](https://archive.org/details/ucberkeley_webcast_Wp8oiO_CZZE) (ចាប់ផ្តើមមើលចាប់ពី ១៥នាទី ៣២វិនាទី)
        - [Arrays មូលដ្ឋាន (វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/02_04-basicArrays.mp4)
        - [ពហុវិមាត្រ (វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/02_05-multidimensionalArrays.mp4)
        - [Arrays ឌីណាមិចេ (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/EwbnV/dynamic-arrays)
        - [Jagged Arrays (វីដេអូ)](https://www.youtube.com/watch?v=1jtrQqYpt7g)
        - [Jagged Arrays (វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/02_06-jaggedArrays.mp4)
        - [ការប្តូរទំហំ Arrays (វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/03_01-resizableArrays.mp4)
    - [ ] អនុវត្តវ៉ិចទ័រ (បំលែង Arrays ដោយប្តូរទំហំស្វ័យប្រវត្តិ)៖
        - [ ] អនុវត្តការសរសេរកូដដោយប្រើArrays និង ទ្រនិចចង្អុល និង គណិតទ្រនិចដើម្បីលោតទៅសន្ទស្សន៍មួយ។
        - [ ] Arrays ទិន្នន័យថ្មីដែលមានអង្គចងចាំបម្រុងទុក
            - អាចបែងចែកArraysនៅក្រោមក្រណាត់ដោយគ្រាន់តែមិនប្រើលក្ខណៈពិសេសរបស់វា
            - ចាប់ផ្តើមជាមួយលេខ ១៦ ឬបើលេខចាប់ផ្តើមធំជាងប្រើថាមពល ២ - ១៦, ៣២, ៦៤, ១២៨
        - [ ] size() - ចំនួនធាតុ
        - [ ] capacity() - ចំនួនធាតុដែលវាអាចផ្ទុកបាន
        - [ ] is_empty()
        - [ ] at(index) - ត្រឡប់ធាតុនៅទីតាំងដែលបានផ្តល់ឱ្យ បេីទីតាំងនៅក្រៅព្រំដែន វានឹង មានកុំហស
        - [ ] push(item)
        - [ ] insert(index, item) - បញ្ចូលធាតុនៅទីតាំង ប្តូរតម្លៃទីតាំង និងធាតុនៅខាងក្រោមទៅខាងស្តាំ
        - [ ] prepend (item) - អាចប្រើបញ្ចូលខាងលើនៅទីតាំង ០
        - [ ] pop() - ដកចេញពីចុងបញ្ចប់តម្លៃត្រឡប់មកវិញ
        - [ ] delete(index) - លុបធាតុនៅទីតាំងដែលអោយ ផ្លាស់ប្តូរធាតុនៅពីក្រោយទាំងអស់
        - [ ] remove(item) - រកមើលតម្លៃនិងយកទីតាំងចេញដែលផ្ទុកវាចេញ (ទោះបីជានៅកន្លែងច្រើនក៏ដោយ)
        - [ ] find(item) - រកមើលតម្លៃហើយត្រឡប់វិញនៅទីតាំងដំបូងជាមួយតម្លៃនោះ បើរកមិនឃើញត្រលប់វិញ -1
        - [ ] resize(new_capacity) // មុខងារឯកជន
            - ពេលទំហំ Array ដល់កំណត់, ផ្លាស់ប្តូរទំហំទ្វេដងទំហំ
            - នៅពេលដែលចាប់យកវត្ថុមួយ ប្រសិនបើទំហំគឺ 1/4 នៃទំហំសរុប, ផ្លាស់ប្តូរទំហំដល់ពាក់កណ្តាល
    - [ ] ពេលវេលា
        - O(១) ត្រូវបន្ថែម / ដកចេញនៅចុងបញ្ចប់ (សងវិញសម្រាប់ការបែងចែកសម្រាប់ទំហំបន្ថែម) ទីតាំង
        - O(n) ដើម្បីបញ្ចូល / ដកចេញនៅកន្លែងផ្សេងទៀត
    - [ ] លំហ
        - ជាប់ទាក់ទងនឹងការចងចាំដូច្នេះភាពជិតស្និទ្ធជួយដល់ការអនុវត្ត
        - ទំហំត្រូវការ = (ទំហំ Array, ដែល >= n) * ទំហំនៃធាតុ, ប៉ុន្តែបើទោះបីជា 2n, នៅតែ O (n)

---

- ### Linked Lists
    - [ ] ការពិពណ៌នា៖
        - [ ] [Singly Linked Lists (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/kHhgK/singly-linked-lists)
        - [ ] [CS 61B - Linked Lists ១ (វីដេអូ)](https://archive.org/details/ucberkeley_webcast_htzJdKoEmO0)
        - [ ] [CS 61B - Linked Lists ២ (វីដេអូ)](https://archive.org/details/ucberkeley_webcast_-c4I3gFYe3w)
    - [ ] [កូដ C (វីដេអូ)](https://www.youtube.com/watch?v=QN6FPiD0Gzo)
        - មិនមែនវីដេអូទាំងមូលទេគឺគ្រាន់តែជាផ្នែកអំពីរចនាសម្ព័ន្ធ (Data Structure) និងការបែងចែក Memory ។
    - [ ] Linked List vs Arrays:
        - [Core Linked Lists Vs Arrays (វីដេអូ)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/rjBs9/core-linked-lists-vs-arrays)
        - [នៅក្នុងពិភពពិត Linked Lists Vs Arrays (វីដេអូ)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/QUaUd/in-the-real-world-lists-vs-arrays)
    - [ ] [ហេតុអ្វីអ្នកគួរចៀសវាង linked lists (វីដេអូ)](https://www.youtube.com/watch?v=YQs6IC-vgmo)
    - [ ] Gotcha: you need pointer to pointer knowledge:
        (សម្រាប់ពេលអ្នកហុច pointer ទៅមុខងារមួយដែលអាចផ្លាស់ប្តូរអាស័យដ្ឋានដែលព្រួញចង្អុល)
        ទំព័រនេះគ្រាន់តែដើម្បីស្វែងយល់ពី pointer ទៅ pointer ។ ខ្ញុំមិនណែនាំបញ្ជីឈ្មោះបែបត្រាប់តាមនេះទេ។ ភាពងាយស្រួលក្នុងការអាននិងរក្សាបាននូវភាពលំបាកដោយសារតែភាពឆ្លាតវៃ។
        - [Pointer ទៅ pointer](https://www.eskimo.com/~scs/cclass/int/sx8.html)
    - [ ] អនុវត្ត (ខ្ញុំបានធ្វើដោយប្រើទ្រនិចកន្ទុយនិងដោយគ្មាន)៖
        - [ ] size() - ត្រឡប់ចំនួនធាតុទិន្នន័យក្នុងបញ្ជី
        - [ ] empty() - bool ត្រឡប់ពិតបើទទេ
        - [ ] value_at(index) - ត្រឡប់តម្លៃនៃធាតុទី (ចាប់ផ្តើមពីលេខ ០ ដំបូង)
        - [ ] push_front(តម្លៃ) - បន្ថែមធាតុនៅខាងមុខបញ្ជី
        - [ ] pop_front() - យកធាតុខាងមុខចេញហើយប្រគល់តម្លៃរបស់វាមកវិញ
        - [ ] push_back(តម្លៃ) - បន្ថែមធាតុនៅចុងបញ្ចប់
        - [ ] pop_back() - យកធាតុបញ្ចប់ហើយត្រឡប់តម្លៃរបស់វា
        - [ ] front() - ទទួលបានតម្លៃនៃធាតុខាងមុខ
        - [ ] back() - ទទួលបានតម្លៃនៃធាតុបញ្ចប់
        - [ ] insert(index, តម្លៃ) - បញ្ចូលតម្លៃនៅindex ដូច្នេះធាតុបច្ចុប្បន្ននៅindexនោះត្រូវបានចង្អុលទៅធាតុថ្មីនៅindex។
        - [ ] erase(index) - យក Node ចេញនៅ index ដែលបានផ្តល់ឱ្យ
        - [ ] value_n_from_end(n) - ត្រឡប់តម្លៃ Node ទីពីខាងចុងបញ្ជី
        - [ ] reverse() - បញ្ច្រាស់បញ្ជី
        - [ ] remove_value(តម្លៃ) - លុបធាតុដំបូងក្នុងបញ្ជីជាមួយតម្លៃនេះ
    - [ ] Doubly-linked List
        - [ការពិពណ៌នា (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/jpGKD/doubly-linked-lists)
        - មិនចាំបាច់អនុវត្តទេ

---

- ### Stack
    - [ ] [Stack (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/UdKzQ/stacks)
    - [ ] [ការប្រើ Stack ចូលមុនចេញក្រោយ (វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/05_01-usingStacksForLast-inFirst-out.mp4)
    - [ ] នឹងមិនអនុវត្តទេ។ ការអនុវត្តជាមួយ Array គឺមិនសំខាន់។

- ### Queue
    - [ ] [ការប្រើ Queue ចូលមុនចេញមុន(វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/05_03-usingQueuesForFirst-inFirst-out.mp4)
    - [ ] [Queue (វីដេអូ)](https://www.coursera.org/lecture/data-structures/queues-EShpq)
    - [ ] [Circular buffer/FIFO](https://en.wikipedia.org/wiki/Circular_buffer)
    - [ ] [Queue អាទិភាព (វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/05_04-priorityQueuesAndDeques.mp4)
    - [ ] ប្រើ linked-list ដែលមានភ្ជាប់ជាមួយទ្រនិចនៅកន្ទុយ៖
        - enqueue(តម្លៃ) - បន្ថែមតម្លៃនៅទីតាំងនៅកន្ទុយ
        - dequeue() - ត្រឡប់តម្លៃនិងយកធាតុដែលបានបន្ថែមថ្មីៗចេញ (ផ្នែកខាងមុខ)
        - empty()
    - [ ] អនុវត្តដោយប្រើអារេ Array ទំហំថេរ៖
        - enqueue(តម្លៃ) - បន្ថែមធាតុនៅចុងបញ្ចប់នៃការផ្ទុកដែលមាន
        - dequeue() - ត្រឡប់តម្លៃនិងយកធាតុដែលបានបន្ថែមថ្មីៗចេញ
        - empty()
        - full()
    - [ ] ថ្លៃ៖
        - ការអនុវត្តមិនល្អដោយប្រើlinked listដែលអ្នករៀបជាជួរនៅនឹងក្បាលនិងដេស្កាយនៅកន្ទុយប្រហែលជា O(n)
            ដោយសារតែអ្នកត្រូវការនៅជាប់នឹងធាតុចុងក្រោយ, បណ្តាលឱ្យ dequeue គ្នាឆ្លងកាត់ពេញលេញ
        - enqueue: O(1) (amortized, linked list and array [probing])
        - dequeue: O(1) (linked list and array)
        - empty: O(1) (linked list and array)

- ### តារាងហាស (Hash table)
    - [ ] វីដេអូ៖
        - [ ] [Hashing with Chaining (វីដេអូ)](https://www.youtube.com/watch?v=0M_kIqwbFo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=8)
        - [ ] [Table Doubling, Karp-Rabin (វីដេអូ)](https://www.youtube.com/watch?v=BRO7mVIFt08&index=9&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [ ] [Open Addressing, Cryptographic Hashing (វីដេអូ)](https://www.youtube.com/watch?v=rvdJDijO2Ro&index=10&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [ ] [PyCon 2010: វចនានុក្រមដ៏អស្ចារ្យ (វីដេអូ)](https://www.youtube.com/watch?v=C4Kc8xzcA68)
        - [ ] [(កម្រិតខ្ពស់) Randomization: Universal & Perfect Hashing (វីដេអូ)](https://www.youtube.com/watch?v=z0lJ2k0sl1g&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=11)
        - [ ] [(ជឿនលឿន) Perfect hashing (វីដេអូ)](https://www.youtube.com/watch?v=N0COwN14gt0&list=PL2B4EEwhKD-NbwZ4ezj7gyc_3yNrojKM9&index=4)

    - [ ] វគ្គសិក្សាអនឡាញ៖
        - [ ] [ស្វែងយល់អំពីមុខងារ Hash (វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/06_02-understandingHashFunctions.mp4)
        - [ ] [ការប្រើតារាងHash (វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/06_03-usingHashTables.mp4)
        - [ ] [គាំទ្រ Hash (វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/06_04- ឧបត្ថម្ភគាំទ្រហាន់ឌ្រី)
        - [ ] [តារាងជំនួយភាសា Hash(វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/06_05-languageSupportForHashTables.mp4)
        - [ ] [Core Hash Tables (វីដេអូ)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/m7UuP/core-hash-tables)
        - [ ] [រចនាសម្ព័ន្ធទិន្នន័យ (វីដេអូ)](https://www.coursera.org/learn/data-structures/home/week/4)
        - [ ] [បញ្ហាសៀវភៅទូរស័ព្ទ (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/NYZZP/phone-book-problem)
        - [តារាងចែកចាយ]
            - [ការផ្ទុកឡើងភ្លាមៗនិងការបង្កើនប្រសិទ្ធភាពផ្ទុកនៅក្នុងប្រអប់ឯកសារ (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/DvaIb/instant-uploads-and-storage-optimization-in-dropbox)
            - [តារាងហាសចែកចាយ (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/tvH8H/distributed-hash-tables)

    - [ ] អនុវត្តជាមួយអារេដោយប្រើការស៊ើបអង្កេតលីនេអ៊ែរ
        - hash(k, m) - m គឺជាទំហំនៃតារាង hash
        - add(key, value) - ប្រសិនបើមានកូនសោររួចហើយ, ធ្វើបច្ចុប្បន្នភាពតម្លៃ
        - exists(key)
        - get(key)
        - remove(key)

---

### More Knowledge
## ចំណេះដឹងបន្ថែម

- ### Binary search
    - [ ] [Binary search (វីដេអូ)](https://www.youtube.com/watch?v=D5SrAga1pno)
    - [ ] [Binary search (វីដេអូ)](https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search)
    - [ ] [លម្អិត](https://www.topcoder.com/community/competitive-programming/tutorials/binary-search/)
    - [ ] អនុវត្ត៖
        - Binary search (នៅលើជួរអារេនៃចំនួនគត់)
        - Binary search ដោយប្រើការហៅខ្លួនឯង

- ### ប្រតិបតិ្តការ Bitwise
    - [ ] [សន្លឹកជំនួយ Bits](https://github.com/jwasham/coding-interview-university/blob/master/extras/cheat%20sheets/bits-cheat-sheet.pdf) 
        - អ្នកគួរតែស្គាល់ អំណាច ២ ពី (២ ^ ១ ដល់ ២ ^ ១៦ និង ២ ^ ៣២)
    - [ ] ទទួលបានការយល់ដឹងដ៏ល្អអំពីការរៀបចំBitsជាមួយ៖ &, |, ^, ~, >>, <<
        - [ ] [ពាក្យ](https://en.wikipedia.org/wiki/Word_ (computer_architecture))
        - [ ] ការណែនាំល្អ៖
            ការធ្វើចលនាBits (វីដេអូ)](https://www.youtube.com/watch?v=7jkIUgLC29I)
        - [ ] [C ការបង្រៀនសរសេរកម្មវិធី ២-១០: ប្រតិបត្តិការ Bitwise (វីដេអូ)](https://www.youtube.com/watch?v=d0AwjSpNXR0)
        - [ ] [ការរៀបចំBits](https://en.wikipedia.org/wiki/Bit_manipulation)
        - [ ] [ប្រតិបតិ្តការ Bitwise](https://en.wikipedia.org/wiki/Bitwise_operation)
        - [ ] [Bithacks](https://graphics.stanford.edu/~seander/bithacks.html)
        - [ ] [The Bit Twiddler](https://bits.stephan-brumme.com/)
        - [ ] [The Bit Twiddler Interactive](https://bits.stephan-brumme.com/interactive.html)
        - [ ] [Bit Hacks (វីដេអូ)](https://www.youtube.com/watch?v=ZusiKXcz_ac)
    - [ ] 2s និង 1s បំពេញបន្ថែម
        - [Binary: Plusses & Minuses (ហេតុអ្វីយើងប្រើសមពីរ) (វីដេអូ)](https://www.youtube.com/watch?v=lKTsv6iVxV4)
        - [១s បំពេញ](https://en.wikipedia.org/wiki/Ones%27_complement)
        - [២ វិនាទីបំពេញ](https://en.wikipedia.org/wiki/Two%27s_complement)
    - [ ] រាប់សំណុំ bits
        - [វិធី ៤ យ៉ាងដើម្បីរាប់ប៊ីតជាសាមសិបប៊ីត (វីដេអូ)](https://youtu.be/Hzuzo9NJrlc)
        - [រាប់ប៊ីត](https://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetKernighan)
        - [របៀបរាប់ចំនួនសំណុំប៊ីតក្នុងចំនួនគត់ ៣២ ប៊ីត](http://stackoverflow.com/questions/109023/how-to-count-the-number-of-set-bits-in-a-32-bit- ចំនួនគត់)
    - [ ] ប្តូរតម្លៃ
        - [ប្តូរ](https://bits.stephan-brumme.com/swap.html)
    - [ ] តម្លៃដាច់ខាត:
        - [អាំងតេក្រាលពេញលេញ](https://bits.stephan-brumme.com/absInteger.html)

---

## Trees

- ### Trees - កំណត់ត្រា និង ព័ត៌មាន
    - [ ] [ស៊េរី៖ ចំនុចសំខាន់ Trees (វីដេអូ)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/ovovP/core-trees)
    - [ ] [ស៊េរី៖ Trees (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/95qda/trees)
    - ការសាងសង់ tree
    - ការឆ្លងកាត់ tree
    - ក្បួនដោះស្រាយ
    - [ ] [BFS(breadth-first search) និង DFS(depth-first search) (វីដេអូ)](https://www.youtube.com/watch?v=uWL6FJhq5fM)
        - កំណត់សំគាល់របស់ BFS:
           - level order (BFS, ដោយប្រេី queue)
           - ភាពស្មុគស្មាញពេលវេលា: O(n)
           - ភាពស្មុគស្មាញនៃលំហ: ល្អបំផុត៖ O(1), អាក្រក់បំផុត៖ O(n/2)=O(n)
        - DFS notes:
            - ភាពស្មុគស្មាញពេលវេលា: O(n)
            - ភាពស្មុគស្មាញនៃលំហ:
                ល្អបំផុត៖ O(log n) - មធ្យមកម្ពស់ tree
                អាក្រក់បំផុត៖ O(n)
            - inorder (DFS: ឆ្វេង, ខ្លួនឯង, ស្តាំ)
            - postorder (DFS: ឆ្វេង, ស្តាំ, ខ្លួនឯង)
            - preorder (DFS: self, left, right)
 
- ### Binary search trees: BSTs
    - [ ] [ការពិនិត្យឡើងវិញ Binary Search Tree (វីដេអូ)](https://www.youtube.com/watch?v=x6At0nzX92o&index=1&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
    - [ ] [ស៊េរី (វីដេអូ)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/p82sw/core-introduction-to-binary-search-trees)
        - ចាប់ផ្តើមជាមួយតារាងនិមិត្តសញ្ញាហើយឆ្លងកាត់ការអនុវត្ត BST
    - [ ] [សេចក្តីផ្តើម (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/E7cXP/introduction)
    - [ ] [MIT (វីដេអូ)](https://www.youtube.com/watch?v=9Jry5-82I68)
    - C/C++:
        - [ ] [Binary search tree - ការអនុវត្តក្នុង C/C++ (វីដេអូ)](https://www.youtube.com/watch?v=COZK7NATh4k&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=28)
        - [ ] [BST ការអនុវត្តក្នុង - ការបែងចែក memory ក្នុង stack និង heap (វីដេអូ)](https://www.youtube.com/watch?v=hWokyBoo0aI&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=29)
        - [ ] [ស្វែងរកធាតុតូចបំផុត និង ធំបំផុតនៅក្នុង binary search tree (វីដេអូ)](https://www.youtube.com/watch?v=Ut90klNN264&index=30&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [រកកំពស់ binary tree (វីដេអូ)](https://www.youtube.com/watch?v=_pnqMz5nrRs&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=31)
        - [ ] [Binary tree traversal - យុទ្ធសាស្ត្រ breadth-first និង depth-first (វីដេអូ)](https://www.youtube.com/watch?v=9RHO6jU--GU&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=32)
        - [ ] [Binary tree: Level Order Traversal (វីដេអូ)](https://www.youtube.com/watch?v=86g8jAQug04&index=33&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [Binary tree traversal: Preorder, Inorder, Postorder (វីដេអូ)](https://www.youtube.com/watch?v=gm8DUJJhmY4&index=34&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [ពិនិត្យមើលថាតើ binary tree គឺ binary search tree រឺទេ (វីដេអូ)](https://www.youtube.com/watch?v=yEwSGhSsT0U&index=35&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [លុបធាតុពី Binary Search Tree (វីដេអូ)](https://www.youtube.com/watch?v=gcULXE7ViZw&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=36)
        - [ ] [Inorder Successor ក្នុង binary search tree មួយ (video)](https://www.youtube.com/watch?v=5cPbNCrdotA&index=37&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
    - [ ] ការអនុវត្ត:
        - [ ] insert    // ដាក់ធាតុក្នុង tree
        - [ ] get_node_count // ទទួលចំនួនធាតុដែលផ្ទុក
        - [ ] print_values // បង្ហាញតម្លៃក្នុង tree, ពី តូច ទៅ ធំ
        - [ ] delete_tree
        - [ ] is_in_tree // ត្រឡប់វិញ ពិត ប្រសិនបេីតម្លៃក្នុង tree
        - [ ] get_height // ត្រឡប់វិញ កំពស់ក្នុង nodes (កំពស់ single node គឺ 1)
        - [ ] get_min   // ត្រឡប់វិញ ធាតុតូចជាងគេ
        - [ ] get_max   // ត្រឡប់វិញ ធាតុធំជាងគេ
        - [ ] is_binary_search_tree
        - [ ] delete_value
        - [ ] get_successor // ត្រឡប់តម្លៃខ្ពស់បំផុតបន្ទាប់នៅក្នុងtreeបន្ទាប់ពីតម្លៃដែលបានផ្ដល់ ៕ បើគ្មានត្រឡប់ -1
        
- ### Heap / Priority Queue / Binary Heap
    - visualized as a tree, but is usually linear in storage (array, linked list)
    - [ ] [Heap](https://en.wikipedia.org/wiki/Heap_(data_structure))
    - [ ] [សេចក្តីផ្តើម (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/2OpTs/introduction)
    - [ ] [ការអនុវត្តដំបូង (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/z3l9N/naive-implementations)
    - [ ] [Binary Trees (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/GRV2q/binary-trees)
    - [ ] [កំពស់ Tree (វីដេអូ)](https://www.coursera.org/learn/data-structures/supplement/S5xxz/tree-height-remark)
    - [ ] [ប្រតិបត្តិការមូលដ្ឋាន (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/0g1dl/basic-operations)
    - [ ] [Binary Trees ពេញលេញ (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/gl5Ni/complete-binary-trees)
    - [ ] [Pseudocode (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/HxQo9/pseudocode)
    - [ ] [Heap Sort - លោតដើម្បីចាប់ផ្ដើម (វីដេអូ)](https://youtu.be/odNJmw5TOEE?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3291)
    - [ ] [Heap Sort (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/hSzMO/heap-sort)
    - [ ] [ការកសាង heap (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/dwrOS/building-a-heap)
    - [ ] [MIT: Heaps និង Heap Sort (វីដេអូ)](https://www.youtube.com/watch?v=B7hVxCmfPtM&index=4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [CS 61B មេរៀន 24: Priority Queues (វីដេអូ)](https://archive.org/details/ucberkeley_webcast_yIUFT6AKBGE)
    - [ ] [Linear Time BuildHeap (max-heap)](https://www.youtube.com/watch?v=MiyLo8adrWw)
    - [ ] ការអនុវត្ត max-heap:
        - [ ] insert
        - [ ] sift_up - ត្រូវការសំរាប់បញ្ចូល
        - [ ] get_max - ត្រឡប់ធាតុអតិបរិមាដោយមិនយកវាចេញ
        - [ ] get_size() - ត្រឡប់ចំនួននៃធាតុដែលបានរក្សាទុក
        - [ ] is_empty() - ត្រឡប់ពិតប្រសិនបើ heap មិនមានធាតុ
        - [ ] extract_max - ត្រឡប់ធាតុអតិបរិមាយកវាចេញ
        - [ ] sift_down - ត្រូវការសំរាប់ extract_max
        - [ ] remove(i) - យកធាតុចេញនៅ index x
        - [ ] heapify - បង្កើតheap ពីធាតុជាច្រើនដែលត្រូវការសម្រាប់ heap_sort
        - [ ] heap_sort() - យកarray ដែលមិនបានតម្រៀបហើយប្រែក្លាយវាទៅជាកន្លែងដែលបានតម្រៀបតាមកន្លែងដោយប្រើheapអតិបរមា។ t
            - ចំណាំ៖ ការប្រើ heap តូច ជំនួសនឹងជួយសន្សំប្រតិបត្តិការ ប៉ុន្តែត្រូវការទំហំទ្វេដង (មិនអាចធ្វើនៅនឹងកន្លែង) ។

---

## Sorting

- [ ] កំណត់សំគាល់:
    - អនុវត្ត sorts និងដឹងពីករណីដែលល្អ និង ដែលអាក្រក់, ភាពស្មុគស្មាញជាមធ្យមនីមួយៗ:
        - កុំប្រេី bubble sort - វាមិនល្អ - O(n^2), លុះត្រាតែ n <= 16
    - [ ] ស្ថេរភាពក្នុងក្បួនដោះស្រាយ sorting ("តើ Quicksort មានស្ថេរភាពឬ?")
        - [ស្ថេរភាពក្នុងក្បួនដោះស្រាយ Sorting](https://en.wikipedia.org/wiki/Sorting_algorithm#Stability)
        - [ស្ថេរភាពក្នុងក្បួនដោះស្រាយ Sorting](http://stackoverflow.com/questions/1517793/stability-in-sorting-algorithms)
        - [ស្ថេរភាពក្នុងក្បួនដោះស្រាយ Sorting](http://www.geeksforgeeks.org/stability-in-sorting-algorithms/)
        - [ស្ថេរភាពក្នុងក្បួនដោះស្រាយ Sorting](http://homepages.math.uic.edu/~leon/cs-mcs401-s08/handouts/stability.pdf)
    - [ ] តើក្បួនដោះស្រាយអ្វីខ្លះអាចត្រូវបានប្រើ linked lists? អាចត្រូវបានប្រើ arrays? អាចត្រូវបានប្រើទាំងពីរ?
        - ខ្ញុំនឹងមិនណែនាំឱ្យ Sort ជាមួយ linked list ប៉ុន្តែអាចប្រេី Merge Sort។
        - [Merge Sort សំរាប់ Linked List](http://www.geeksforgeeks.org/merge-sort-for-linked-list/)

- សំរាប់ heapsort, សូមមេីល Heap data structure ខាងលេី. Heap sort គឺល្អ, ប៉ុន្តែមិនមានស្ថេរភាពទេ.

- [ ] [Sedgewick - Mergesort (5 វីដេអូ)](https://www.coursera.org/learn/algorithms-part1/home/week/3)
    - [ ] [1. Mergesort](https://www.coursera.org/learn/algorithms-part1/lecture/ARWDq/mergesort)
    - [ ] [2. Bottom up Mergesort](https://www.coursera.org/learn/algorithms-part1/lecture/PWNEl/bottom-up-mergesort)
    - [ ] [3. ភាពស្មុគស្មាញ Sorting](https://www.coursera.org/learn/algorithms-part1/lecture/xAltF/sorting-complexity)
    - [ ] [4. ប្រៀបធៀប](https://www.coursera.org/learn/algorithms-part1/lecture/9FYhS/comparators)
    - [ ] [5. ស្ថេរភាព](https://www.coursera.org/learn/algorithms-part1/lecture/pvvLZ/stability)

- [ ] [Sedgewick - Quicksort (4 វីដេអូរ)](https://www.coursera.org/learn/algorithms-part1/home/week/3)
    - [ ] [1. Quicksort](https://www.coursera.org/learn/algorithms-part1/lecture/vjvnC/quicksort)
    - [ ] [2. Selection](https://www.coursera.org/learn/algorithms-part1/lecture/UQxFT/selection)
    - [ ] [3. Keys ស្ទួន](https://www.coursera.org/learn/algorithms-part1/lecture/XvjPd/duplicate-keys)
    - [ ] [4. Sorts ជាប្រព័ន្ធ](https://www.coursera.org/learn/algorithms-part1/lecture/QBNZ7/system-sorts)

- [ ] UC Berkeley:
    - [ ] [CS 61B មេរៀនទី 29: Sorting I (វីដេអូរ)](https://archive.org/details/ucberkeley_webcast_EiUvYS2DT6I)
    - [ ] [CS 61B មេរៀនទី 30: Sorting II (វីដេអូរ)](https://archive.org/details/ucberkeley_webcast_2hTY3t80Qsk)
    - [ ] [CS 61B មេរៀនទី 32: Sorting III (វីដេអូរ)](https://archive.org/details/ucberkeley_webcast_Y6LOLpxg6Dc)
    - [ ] [CS 61B មេរៀនទី 33: Sorting V (វីដេអូរ)](https://archive.org/details/ucberkeley_webcast_qNMQ4ly43p4)

- [ ] [Bubble Sort (វីដេអូរ)](https://www.youtube.com/watch?v=P00xJgWzz2c&index=1&list=PL89B61F78B552C1AB)
- [ ] [វិភាគ Bubble Sort (វីដេអូរ)](https://www.youtube.com/watch?v=ni_zk257Nqo&index=7&list=PL89B61F78B552C1AB)
- [ ] [Insertion Sort, Merge Sort (វីដេអូរ)](https://www.youtube.com/watch?v=Kg4bqzAqRBM&index=3&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
- [ ] [Insertion Sort (វីដេអូរ)](https://www.youtube.com/watch?v=c4BRHC7kTaQ&index=2&list=PL89B61F78B552C1AB)
- [ ] [Merge Sort (វីដេអូរ)](https://www.youtube.com/watch?v=GCae1WNvnZM&index=3&list=PL89B61F78B552C1AB)
- [ ] [Quicksort (វីដេអូរ)](https://www.youtube.com/watch?v=y_G9BkAm6B8&index=4&list=PL89B61F78B552C1AB)
- [ ] [Selection Sort (វីដេអូរ)](https://www.youtube.com/watch?v=6nDMgr0-Yyo&index=8&list=PL89B61F78B552C1AB)

- [ ] កូដ Merge sort:
    - [ ] [ការប្រើប្រាស់ output array (C)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/sorting/mergesort.c)
    - [ ] [ការប្រើប្រាស់ output array (Python)](https://github.com/jwasham/practice-python/blob/master/merge_sort/merge_sort.py)
    - [ ] [In-place (C++)](https://github.com/jwasham/practice-cpp/blob/master/merge_sort/merge_sort.cc)
- [ ] កូដ Quick sort:
    - [ ] [Implementation (C)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/randomization/quick.c)
    - [ ] [Implementation (C)](https://github.com/jwasham/practice-c/blob/master/quick_sort/quick_sort.c)
    - [ ] [Implementation (Python)](https://github.com/jwasham/practice-python/blob/master/quick_sort/quick_sort.py)

- [ ] អនុវត្ត:
    - [ ] Mergesort: O(n log n) ករណីមធ្យម និង អាក្រក់បំផុត
    - [ ] Quicksort O(n log n) ករណីមធ្យម
    - Selection sort និង insertion sort ទាំងពីរគឺ O(n^2) សំរាប់ករណីមធ្យម និង អាក្រក់បំផុត
    - ចំពោះ heapsort, សូមមេីល Heap data structure ខាងលេី.

- [ ] មិនចាំបាច់ទេ ប៉ុន្តែខ្ញុំសូមណែនាំពួកគេ:
    - [ ] [Sedgewick - Radix Sorts (6 វីដេអូរ)](https://www.coursera.org/learn/algorithms-part2/home/week/3)
        - [ ] [1. Strings ក្នុង Java](https://www.coursera.org/learn/algorithms-part2/lecture/vGHvb/strings-in-java)
        - [ ] [2. ការរាប់ Key Indexed](https://www.coursera.org/learn/algorithms-part2/lecture/2pi1Z/key-indexed-counting)
        - [ ] [3. តម្រៀបខ្ទង់អក្សរដំបូងដែលមានខ្ទង់តិចបំផុត Radix Sort](https://www.coursera.org/learn/algorithms-part2/lecture/c1U7L/lsd-radix-sort)
        - [ ] [4. Most Significant Digit First String Radix Sort](https://www.coursera.org/learn/algorithms-part2/lecture/gFxwG/msd-radix-sort)
        - [ ] [5. វិធី ៣ Radix Quicksort](https://www.coursera.org/learn/algorithms-part2/lecture/crkd5/3-way-radix-quicksort)
        - [ ] [6. Suffix Arrays](https://www.coursera.org/learn/algorithms-part2/lecture/TH18W/suffix-arrays)
    - [ ] [Radix Sort](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#radixSort)
    - [ ] [Radix Sort (វីដេអូរ)](https://www.youtube.com/watch?v=xhr26ia4k38)
    - [ ] [Radix Sort, Counting Sort (linear time given constraints) (វីដេអូរ)](https://www.youtube.com/watch?v=Nz1KZXbghj8&index=7&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [Randomization: Matrix Multiply, Quicksort, Freivalds' algorithm (វីដេអូរ)](https://www.youtube.com/watch?v=cNB2lADK3_s&index=8&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [Sorting in Linear Time (វីដេអូរ)](https://www.youtube.com/watch?v=pOKy3RZbSws&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=14)

ជាការសង្ខេបនេះគឺជាការបង្ហាញជាក់ស្តែងនៃ [១៥ វិធីដោះស្រាយ Sorting](https://www.youtube.com/watch?v=kPRA0W1kECg) ។
ប្រសិនបើអ្នកត្រូវការព័ត៌មានលម្អិតបន្ថែមលើប្រធានបទនេះសូមមើលផ្នែក "Sorting" នៅក្នុង [ព័ត៌មានលំអិតលើប្រធានបទមួយចំនួន](#additional-detail-on-some-subjects)

---

## Graphs

Graphs អាចត្រូវបានប្រើដើម្បីបង្ហាញពីបញ្ហាជាច្រើននៅក្នុងវិទ្យាសាស្ត្រកុំព្យូទ័រ ដូចជា Trees និង Sorting។

- កំណត់ចំណាំ:
    -  មានវិធីជាមូលដ្ឋានចំនួន ៤ ដើម្បីតំណាង graph ក្នុង memory:
        - objects និង pointers
        - adjacency matrix
        - adjacency list
        - adjacency map
    - ស្គាល់ខ្លួនឯងជាមួយនឹង Graphs និង គុណសម្បត្តិនិងគុណវិបត្តិរបស់វា
    - BFS និង DFS - ដឹងពីភាពស្មុគស្មាញក្នុងការគណនាការជួញដូររបស់ពួកគេ និង វិធីអនុវត្តកូដពិតប្រាកដ
    - នៅពេលសួរសំណួរសូមស្វែងរកដំណោះស្រាយដែលមានមូលដ្ឋានលើ Graphs ជាមុនសិនបន្ទាប់មកបន្តទៅមុខទៀតប្រសិនបើគ្មាន។ 

- [ ] MIT(វីដេអូ):
    - [ ] [ការស្វែងរក Breadth-First Search](https://www.youtube.com/watch?v=s-CYnVz-uh4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=13)
    - [ ] [ការស្វែងរក Depth-First Search](https://www.youtube.com/watch?v=AfSk24UTFS8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=14)

- [ ] ការបង្រៀន Skiena - ការណែនាំ:
    - [ ] [CSE373 2012 - មេរៀនទី 11 - Graph Data Structures (វីដេអូ)](https://www.youtube.com/watch?v=OiXxhDrFruw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=11)
    - [ ] [CSE373 2012 - មេរៀនទី 12 - Breadth-First Search (វីដេអូ)](https://www.youtube.com/watch?v=g5vF8jscteo&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=12)
    - [ ] [CSE373 2012 - មេរៀនទី 13 - Graph Algorithms (វីដេអូ)](https://www.youtube.com/watch?v=S23W6eTcqdY&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=13)
    - [ ] [CSE373 2012 - មេរៀនទី 14 - Graph Algorithms (បន្ត) (វីដេអូ)](https://www.youtube.com/watch?v=WitPBKGV0HY&index=14&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [CSE373 2012 - មេរៀនទី 15 - Graph Algorithms (បន្ត 2) (វីដេអូ)](https://www.youtube.com/watch?v=ia1L30l7OIg&index=15&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [CSE373 2012 - មេរៀនទី 16 - Graph Algorithms (បន្ត 3) (វីដេអូ)](https://www.youtube.com/watch?v=jgDOQq6iWy8&index=16&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)

- [ ] Graphs (ពិនិត្យឡើងវិញ និង ច្រើនទៀត):

    - [ ] [6.006 Single-Source Shortest Paths Problem (វីដេអូ)](https://www.youtube.com/watch?v=Aa2sqUhIn-E&index=15&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [6.006 Dijkstra (វីដេអូ)](https://www.youtube.com/watch?v=2E7MmKv0Y24&index=16&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [6.006 Bellman-Ford (វីដេអូ)](https://www.youtube.com/watch?v=ozsuci5pIso&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=17)
    - [ ] [6.006 Speeding Up Dijkstra (វីដេអូ)](https://www.youtube.com/watch?v=CHvQ3q_gJ7E&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=18)
    - [ ] [Aduni: Graph Algorithms I - Topological Sorting, Minimum Spanning Trees, Prim's Algorithm -  មេរៀនទី 6 (វីដេអូ)]( https://www.youtube.com/watch?v=i_AQT_XfvD8&index=6&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
    - [ ] [Aduni: Graph Algorithms II - DFS, BFS, Kruskal's Algorithm, Union Find Data Structure - មេរៀនទី 7 (វីដេអូ)]( https://www.youtube.com/watch?v=ufj5_bppBsA&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=7)
    - [ ] [Aduni: Graph Algorithms III: Shortest Path - មេរៀនទី 8 (វីដេអូ)](https://www.youtube.com/watch?v=DiedsPsMKXc&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=8)
    - [ ] [Aduni: Graph Alg. IV: Intro to geometric algorithms - មេរៀនទី 9 (វីដេអូ)](https://www.youtube.com/watch?v=XIAQRlNkJAw&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=9)
    - [ ] ~~[CS 61B 2014 (starting at 58:09) (វីដេអូ)](https://youtu.be/dgjX4HdMI-Q?list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&t=3489)~~
    - [ ] [CS 61B 2014: Weighted graphs (វីដេអូ)](https://archive.org/details/ucberkeley_webcast_zFbq8vOZ_0k)
    - [ ] [Greedy Algorithms: Minimum Spanning Tree (វីដេអូ)](https://www.youtube.com/watch?v=tKwnms5iRBU&index=16&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [Strongly Connected Components Kosaraju's Algorithm Graph Algorithm (វីដេអូ)](https://www.youtube.com/watch?v=RpgcYiky7uw)

- វគ្គសិក្សា Coursera:
    - [ ] [Algorithms on Graphs (វីដេអូ)](https://www.coursera.org/learn/algorithms-on-graphs/home/welcome)

- ខ្ញុំនឹងអនុវត្ត:
    - [ ] DFS ជាមួយ adjacency list (recursive)
    - [ ] DFS ជាមួយ adjacency list (iterative with stack)
    - [ ] DFS ជាមួយ adjacency matrix (recursive)
    - [ ] DFS ជាមួយ adjacency matrix (iterative with stack)
    - [ ] BFS ជាមួយ adjacency list
    - [ ] BFS ជាមួយ adjacency matrix
    - [ ] single-source shortest path (Dijkstra)
    - [ ] minimum spanning tree
    - DFS-based algorithms (សូមមេីល Aduni វីដេអូ ខាងលេី):
        - [ ] ពិនិត្យ cycle (ត្រូវការសំរាប់ topological sort ព្រោះយើងនឹងពិនិត្យមើលវដ្តមុនពេលចាប់ផ្តើម)
        - [ ] topological sort
        - [ ] រាប់សមាសធាតុដែលបានភ្ជាប់នៅក្នុងក្រាហ្វ
        - [ ] រាយសមាសធាតុដែលភ្ជាប់គ្នាយ៉ាងខ្លាំង
        - [ ] ពិនិត្យក្រាហ្វិច bipartite

---

## Even More Knowledge
## ចំណេះដឹងបន្ធែម

- ### Recursion
    - [ ] ការបង្រៀនរបស់ Stanford លេី recursion និង backtracking:
        - [ ] [មេរៀនទី 8 | Programming Abstractions (វីដេអូ)](https://www.youtube.com/watch?v=gl3emqCuueQ&list=PLFE6E58F856038C69&index=8)
        - [ ] [មេរៀនទី 9 | Programming Abstractions (វីដេអូ)](https://www.youtube.com/watch?v=uFJhEPrbycQ&list=PLFE6E58F856038C69&index=9)
        - [ ] [មេរៀនទី 10 | Programming Abstractions (វីដេអូ)](https://www.youtube.com/watch?v=NdF1QDTRkck&index=10&list=PLFE6E58F856038C69)
        - [ ] [មេរៀនទី 11 | Programming Abstractions (វីដេអូ)](https://www.youtube.com/watch?v=p-gpaIGRCQI&list=PLFE6E58F856038C69&index=11)
    - នៅពេលដែលសមរម្យដើម្បីប្រើវា
    - តេី tail recursion ប្រសើរជាងអត់?
        - [ ] [អ្វីជា Tail Recursion និង ហេតុអ្វីបានជាវាអាក្រក់?](https://www.quora.com/What-is-tail-recursion-Why-is-it-so-bad)
        - [ ] [Tail Recursion (វីដេអូ)](https://www.youtube.com/watch?v=L1jjXGfxozc)

- ### Dynamic Programming
    - អ្នកប្រហែលជាមិនឃើញមានបញ្ហានៃការសរសេរកម្មវិធី dynamic programming នៅក្នុងបទសម្ភាសន៍របស់អ្នកទេ ប៉ុន្តែវាសមនឹងទទួលបានការទទួលស្គាល់នូវបញ្ហាមួយក្នុងនាមជាបេក្ខជនសម្រាប់ការសរសេរកម្មវិធី dynamic programming។
    - ប្រធានបទនេះអាចជាការពិបាកណាស់, ព្រោះថាបញ្ហារបស់ DP នីមួយៗត្រូវបានកំណត់ថាជាការទាក់ទងគ្នា
    - ខ្ញុំស្នើឱ្យក្រឡេកមើលឧទាហរណ៍ជាច្រើននៃបញ្ហា DP រហូតទាល់តែអ្នកមានការយល់ដឹងច្បាស់អំពីគំរូដែលពាក់ព័ន្ធ។
    - [ ] វីដេអូ:
        - វីដេអូ Skiena អាចពិបាកធ្វើតាមព្រោះពេលខ្លះគាត់ប្រើក្តារខៀនដែលវាមើលមិនឃើញ
        - [ ] [Skiena: CSE373 2012 - មេរៀនទី 19 - ការណែនាំអំពី Dynamic Programming (វីដេអូ)](https://youtu.be/Qc2ieXRgR0k?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1718)
        - [ ] [Skiena: CSE373 2012 - មេរៀនទី 20 - Edit Distance (video)](https://youtu.be/IsmMhMdyeGY?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=2749)
        - [ ] [Skiena: CSE373 2012 - មេរៀនទី 21 - ឧទាហរណ៍ Dynamic Programming (វីដេអូ)](https://youtu.be/o0V9eYF4UI8?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=406)
        - [ ] [Skiena: CSE373 2012 - មេរៀនទី 22 - ការអនុវត្តកម្មវិធី Dynamic Programming (វីដេអូ)](https://www.youtube.com/watch?v=dRbMC1Ltl3A&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=22)
        - [ ] [Simonson: Dynamic Programming 0 (ចាប់ផ្តេីមពី 59:18) (វីដេអូ)](https://youtu.be/J5aJEcOr6Eo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3558)
        - [ ] [Simonson: Dynamic Programming I - មេរៀនទី 11 (វីដេអូ)](https://www.youtube.com/watch?v=0EzHjQ_SOeU&index=11&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [Simonson: Dynamic programming II - មេរៀនទី 12 (វីដេអូ)](https://www.youtube.com/watch?v=v1qiRwuJU7g&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=12)
        - [ ] បញ្ជីបញ្ហារបស់ DP (នីមួយៗខ្លី):
            [Dynamic Programming (វីដេអូ)](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)
    - [ ] Yale Lecture notes:
        - [ ] [Dynamic Programming](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#dynamicProgramming)
    - [ ] Coursera:
        - [ ] [បញ្ហា RNA secondary structure (វីដេអូ)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/80RrW/the-rna-secondary-structure-problem)
        - [ ] [A dynamic programming algorithm (វីដេអូ)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/PSonq/a-dynamic-programming-algorithm)
        - [ ] [បង្ហាញរូបភាពពីវិធីដោះស្រាយ DP (វីដេអូ)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/oUEK2/illustrating-the-dp-algorithm)
        - [ ] [ពេលវេលាដំណើរការនៃ DP algorithm (វីដេអូ)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/nfK2r/running-time-of-the-dp-algorithm)
        - [ ] [DP vs. recursive implementation (វីដេអូ)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/M999a/dp-vs-recursive-implementation)
        - [ ] [Global pairwise sequence alignment (វីដេអូ)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/UZ7o6/global-pairwise-sequence-alignment)
        - [ ] [Local pairwise sequence alignment (វីដេអូ)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/WnNau/local-pairwise-sequence-alignment)

- ### Object-Oriented Programming
    - [ ] [Optional: UML 2.0 Series (វីដេអូ)](https://www.youtube.com/watch?v=OkC7HKtiZC0&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc)
    - [ ] គោលការណ៍ SOLID OOP: [គោលការណ៍ SOLID (វីដេអូ)](https://www.youtube.com/playlist?list=PL4CE9F710017EA77A)

- ### Design patterns
    - [ ] [ការពិនិត្យ Quick UML (វីដេអូ)](https://www.youtube.com/watch?v=3cmzqZzwNDM&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc&index=3)
    - [ ] រៀនគំរូទាំងនេះ:
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
    - [ ] [ជំពូកទី ៦ (ភាគ ១) - Patterns (វីដេអូ)](https://youtu.be/LAP2A80Ajrg?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO&t=3344)
    - [ ] [ជំពូកទី ៦ (ភាគ ២) - Abstraction-Occurrence, General Hierarchy, Player-Role, Singleton, Observer, Delegation (វីដេអូ)](https://www.youtube.com/watch?v=U8-PGsjvZc4&index=12&list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)
    - [ ] [ជំពូកទី ៦ (ភាគ ៣) - Adapter, Facade, Immutable, Read-Only Interface, Proxy (video)](https://www.youtube.com/watch?v=7sduBHuex4c&index=13&list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)
    - [ ] [ស៊េរីវីដេអូ (២៧ វីដេអូ)](https://www.youtube.com/playlist?list=PLF206E906175C7E07)
    - [ ] [Head First Design Patterns](https://www.amazon.com/Head-First-Design-Patterns-Freeman/dp/0596007124)
        - ខ្ញុំដឹងថាសៀវភៅបទបញ្ញត្តិគឺ“ លំនាំរចនា៖ ធាតុផ្សំនៃកម្មវិធីដែលអាចប្រើឡើងវិញបាន” ប៉ុន្តែក្បាលទីមួយគឺល្អសម្រាប់អ្នកចាប់ផ្តើមដំបូង Object-Oriented ។
    - [ ] [Handy reference: 101 Design Patterns & Tips for Developers](https://sourcemaking.com/design-patterns-and-tips)
    - [ ] [Design patterns សម្រាប់មនុស្ស](https://github.com/kamranahmedse/design-patterns-for-humans#structural-design-patterns)

- ### Combinatorics (n choose k) & Probability
    - [ ] [ជំនាញគណិតវិទ្យា៖ វិធីស្វែងរក Factorial, Permutation និង Combination (ជ្រើសរើស) (វីដេអូ)](https://www.youtube.com/watch?v=8RRo6Ti9d0U)
    - [ ] [Make School: Probability (វីដេអូ)](https://www.youtube.com/watch?v=sZkAAk9Wwa4)
    - [ ] [Make School: បន្ថែមលេី Probability និង Markov Chains (វីដេអូ)](https://www.youtube.com/watch?v=dNaJg-mLobQ)
    - [ ] Khan Academy:
        - ប្លង់វគ្គសិក្សា:
            - [ ] [ទ្រឹស្តីប្រូបាបដំបូង](https://www.khanacademy.org/math/probability/probability-and-combinatorics-topic)
        - គ្រាន់តែវីដេអូ - ៤១ (វីដេអូនីមួយៗមានលក្ខណៈសាមញ្ញហើយវីដេអូនីមួយៗខ្លី)៖
            - [ ] [ពន្យល់អំពីប្រូបាប (វីដេអូ)](https://www.youtube.com/watch?v=uzkc-qNVoOk&list=PLC58778F28211FA19)

- ### NP, NP-Complete និង Approximation Algorithms
    - ដឹងពីបញ្ហាល្បីរបស់ NP-complete, ដូចជាអ្នកលក់ធ្វើដំណើរ និង បញ្ហា knapsack, ហើយអាចស្គាល់ពួកគេនៅពេលអ្នកសម្ភាសសួរអ្នកដោយក្លែងបន្លំ។.
    - ដឹងថាអ្វីជា NP-complete.
    - [ ] [Computational Complexity (វីដេអូ)](https://www.youtube.com/watch?v=moPtwq_cVH8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=23)
    - [ ] Simonson:
        - [ ] [Greedy Algs. II & Intro to NP Completeness (វីដេអូ)](https://youtu.be/qcGnJ47Smlo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=2939)
        - [ ] [NP Completeness II & Reductions (វីដេអូ)](https://www.youtube.com/watch?v=e0tGC6ZQdQE&index=16&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [NP Completeness III (វីដេអូ)](https://www.youtube.com/watch?v=fCX1BGT3wjE&index=17&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [NP Completeness IV (វីដេអូ)](https://www.youtube.com/watch?v=NKLDp3Rch3M&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=18)
    - [ ] Skiena:
        - [ ] [CSE373 2012 - មេរៀនទី 23 - Introduction to NP-Completeness (វីដេអូ)](https://youtu.be/KiK5TVgXbFg?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1508)
        - [ ] [CSE373 2012 - មេរៀនទី 24 - NP-Completeness Proofs (វីដេអូ)](https://www.youtube.com/watch?v=27Al52X3hd4&index=24&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [ ] [CSE373 2012 - មេរៀនទី 25 - NP-Completeness Challenge (វីដេអូ)](https://www.youtube.com/watch?v=xCPH4gwIIXM&index=25&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [Complexity: P, NP, NP-completeness, Reductions (វីដេអូ)](https://www.youtube.com/watch?v=eHZifpgyH_4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=22)
    - [ ] [Complexity: Approximation Algorithms (វីដេអូ)](https://www.youtube.com/watch?v=MEz1J9wY2iM&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=24)
    - [ ] [Complexity: Fixed-Parameter Algorithms (វីដេអូ)](https://www.youtube.com/watch?v=4q-jmGrmxKs&index=25&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - Peter Norvig ពិភាក្សាអំពីដំណោះស្រាយដែលល្អប្រសើរបំផុតចំពោះបញ្ហាអ្នកលក់ធ្វើដំណើរ៖
        - [Jupyter Notebook](http://nbviewer.jupyter.org/url/norvig.com/ipython/TSP.ipynb)
    - ទំព័រ 1048 - 1140 ក្នុង CLRS ប្រសិនបើអ្នកមានវា.

- ### Caches
    - [ ] LRU cache:
        - [ ] [The Magic of LRU Cache (100 Days of Google Dev) (វីដេអូ)](https://www.youtube.com/watch?v=R5ON3iwx78M)
        - [ ] [Implementing LRU (វីដេអូ)](https://www.youtube.com/watch?v=bq6N7Ym81iI)
        - [ ] [LeetCode - 146 LRU Cache (C++) (វីដេអូ)](https://www.youtube.com/watch?v=8-FZRAjR7qU)
    - [ ] CPU cache:
        - [ ] [MIT 6.004 L15: The Memory Hierarchy (វីដេអូ)](https://www.youtube.com/watch?v=vjYF_fAZI5E&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-&index=24)
        - [ ] [MIT 6.004 L16: Cache Issues (វីដេអូ)](https://www.youtube.com/watch?v=ajgC3-pyGlk&index=25&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-)

- ### Processes and Threads
    - [ ] Computer Science 162 - Operating Systems (25 វីដេអូ):
        - សំរាប់ processes និង threads សូមមេីល វីដេអូ 1-11
        - [Operating Systems and System Programming (វីដេអូ)](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iBDyz-ba4yDskqMDY6A1w_c)
    - [តេី Process និង Thread ខុសគ្នាដូចម្តេច?](https://www.quora.com/What-is-the-difference-between-a-process-and-a-thread)
    - មាន:
        - Processes, Threads, Concurrency issues
            - តេី Process និង Thread ខុសគ្នាដូចម្តេច
            - Processes
            - Threads
            - Locks
            - Mutexes
            - Semaphores
            - Monitors
            - តើពួកគេធ្វើការយ៉ាងដូចម្តេច?
            - Deadlock
            - Livelock
        - CPU activity, interrupts, context switching
        - Modern concurrency constructs with multicore processors
        - [Paging, segmentation and virtual memory (វីដេអូ)](https://www.youtube.com/watch?v=LKe7xK0bF7o&list=PLCiOXwirraUCBE9i_ukL8_Kfg6XNv7Se8&index=2)
        - [Interrupts (វីដេអូ)](https://www.youtube.com/watch?v=uFKi2-J-6II&list=PLCiOXwirraUCBE9i_ukL8_Kfg6XNv7Se8&index=3)
        - Process resource needs (memory: code, static storage, stack, heap, and also file descriptors, i/o)
        - Thread resource needs (shares above (minus stack) with other threads in the same process but each has its own pc, stack counter, registers, and stack)
        - Forking is really copy on write (read-only) until the new process writes to memory, then it does a full copy.
        - Context switching
            - How context switching is initiated by the operating system and underlying hardware?
    - [ ] [threads in C++ (series - 10 វីដេអូ)](https://www.youtube.com/playlist?list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M)
    - [ ] concurrency ក្នុង Python (វីដេអូ):
        - [ ] [Short series on threads](https://www.youtube.com/playlist?list=PL1H1sBF1VAKVMONJWJkmUh6_p8g4F2oy1)
        - [ ] [Python Threads](https://www.youtube.com/watch?v=Bs7vPNbB9JM)
        - [ ] [Understanding the Python GIL (2010)](https://www.youtube.com/watch?v=Obt-vMVdM8s)
            - [reference](http://www.dabeaz.com/GIL)
        - [ ] [David Beazley - Python Concurrency From the Ground Up: LIVE! - PyCon 2015](https://www.youtube.com/watch?v=MCs5OvhV9S4)
        - [ ] [Keynote David Beazley - Topics of Interest (Python Asyncio)](https://www.youtube.com/watch?v=ZzfHjytDceU)
        - [ ] [Mutex in Python](https://www.youtube.com/watch?v=0zaPs8OtyKY)

- ### Testing
    - To cover:
        - តេី unit testing ដំណេីរការយ៉ាងដូចម្តេច ?
        - អ្វីជា mock objects ?
        - អ្វីជា integration testing ?
        - អ្វីជា dependency injection ?
    - [ ] [Agile Software Testing with James Bach (វីដេអូ)](https://www.youtube.com/watch?v=SAhJf36_u5U)
    - [ ] [Open Lecture by James Bach on Software Testing (វីដេអូ)](https://www.youtube.com/watch?v=ILkT_HV9DVU)
    - [ ] [Steve Freeman - Test-Driven Development (that’s not what we meant) (វីដេអូ)](https://vimeo.com/83960706)
        - [slides](http://gotocon.com/dl/goto-berlin-2013/slides/SteveFreeman_TestDrivenDevelopmentThatsNotWhatWeMeant.pdf)
    - [ ] Dependency injection:
        - [ ] [slides](https://www.youtube.com/watch?v=IKD2-MAkXyQ)
        - [ ] [Tao Of Testing](http://jasonpolites.github.io/tao-of-testing/ch3-1.1.html)
    - [ ] [How to write tests](http://jasonpolites.github.io/tao-of-testing/ch4-1.1.html)

- ### Scheduling (ការរៀបចំកាលវិភាគ)
    - នៅក្នុង OS, តេីវាដំណេីរការយ៉ាងដូចម្តេច ?
    - អាចប្រមូលបាន Operating System videos

- ### String searching & manipulations
    - [ ] [Sedgewick - Suffix Arrays (វីដេអូ)](https://www.coursera.org/learn/algorithms-part2/lecture/TH18W/suffix-arrays)
    - [ ] [Sedgewick - Substring Search (វីដេអូ)](https://www.coursera.org/learn/algorithms-part2/home/week/4)
        - [ ] [1. Introduction to Substring Search](https://www.coursera.org/learn/algorithms-part2/lecture/n3ZpG/introduction-to-substring-search)
        - [ ] [2. Brute-Force Substring Search](https://www.coursera.org/learn/algorithms-part2/lecture/2Kn5i/brute-force-substring-search)
        - [ ] [3. Knuth-Morris Pratt](https://www.coursera.org/learn/algorithms-part2/lecture/TAtDr/knuth-morris-pratt)
        - [ ] [4. Boyer-Moore](https://www.coursera.org/learn/algorithms-part2/lecture/CYxOT/boyer-moore)
        - [ ] [5. Rabin-Karp](https://www.coursera.org/learn/algorithms-part2/lecture/3KiqT/rabin-karp)
    - [ ] [Search pattern in text (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/tAfHI/search-pattern-in-text)

    ប្រសិនបើអ្នកត្រូវការព័ត៌មានលម្អិតបន្ថែមលើប្រធានបទនេះសូមមើលផ្នែក [Additional Detail on Some Subjects](#additional-detail-on-some-subjects).

- ### Tries
    - ចំណាំ មានការ Tries ផ្សេងៗគ្នា។ អ្នកខ្លះមានprefixes អ្នកខ្លះមិនមាន ហើយអ្នកខ្លះប្រើstring ជំនួសឱ្យbits ដើម្បីតាមដានផ្លូវ
    - ខ្ញុំបានអានកូដប៉ុន្តែនឹងមិនអនុវត្តឡើយ
    - [ ] [Sedgewick - Tries (3 វីដេអូ)](https://www.coursera.org/learn/algorithms-part2/home/week/4)
        - [ ] [1. R Way Tries](https://www.coursera.org/learn/algorithms-part2/lecture/CPVdr/r-way-tries)
        - [ ] [2. Ternary Search Tries](https://www.coursera.org/learn/algorithms-part2/lecture/yQM8K/ternary-search-tries)
        - [ ] [3. Character Based Operations](https://www.coursera.org/learn/algorithms-part2/lecture/jwNmV/character-based-operations)
    - [ ] [Notes on Data Structures and Programming Techniques](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Tries)
    - [ ] វីដេអូខ្លីៗ:
        - [ ] [Introduction To Tries (វីដេអូ)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/08Xyf/core-introduction-to-tries)
        - [ ] [Performance Of Tries (វីដេអូ)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/PvlZW/core-performance-of-tries)
        - [ ] [Implementing A Trie (វីដេអូ)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/DFvd3/core-implementing-a-trie)
    - [ ] [The Trie: A Neglected Data Structure](https://www.toptal.com/java/the-trie-a-neglected-data-structure)
    - [ ] [TopCoder - Using Tries](https://www.topcoder.com/community/competitive-programming/tutorials/using-tries/)
    - [ ] [Stanford Lecture (real world use case) (វីដេអូ)](https://www.youtube.com/watch?v=TJ8SkcUSdbU)
    - [ ] [MIT, Advanced Data Structures, Strings (can get pretty obscure about halfway through) (វីដេអូ)](https://www.youtube.com/watch?v=NinWEPPrkDQ&index=16&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf)

- ### Floating Point Numbers
    - [ ] simple 8-bit: [Representation of Floating Point Numbers - 1 (វីដេអូ - មានកំហុសក្នុងការគណនា - សូមមើលការពិពណ៌នាជាវីដេអូ)](https://www.youtube.com/watch?v=ji3SfClm8TU)
    - [ ] 32 bit: [IEEE754 32-bit floating point binary (វីដេអូ)](https://www.youtube.com/watch?v=50ZYcZebIec)

- ### Unicode
    - [ ] [The Absolute Minimum Every Software Developer Absolutely, Positively Must Know About Unicode and Character Sets]( http://www.joelonsoftware.com/articles/Unicode.html)
    - [ ] [What Every Programmer Absolutely, Positively Needs To Know About Encodings And Character Sets To Work With Text](http://kunststube.net/encoding/)

- ### Endianness
    - [ ] [Big And Little Endian](https://web.archive.org/web/20180107141940/http://www.cs.umd.edu:80/class/sum2003/cmsc311/Notes/Data/endian.html)
    - [ ] [Big Endian Vs Little Endian (វីដេអូ)](https://www.youtube.com/watch?v=JrNF0KRAlyo)
    - [ ] [Big And Little Endian Inside/Out (វីដេអូ)](https://www.youtube.com/watch?v=oBSuXP-1Tc0)
        - និយាយបច្ចេកទេសខ្លាំងណាស់សម្រាប់ kernel devs. កុំបារម្ភប្រសិនបេីមិនយល់ទាំងស្រុង
        - ពាក់កណ្តាលទីមួយគឺគ្រប់គ្រាន់ហើយ

- ### Networking (បណ្តាញ)
    - ** ប្រសិនបើអ្នកមានបទពិសោធបណ្តាញឬចង់ក្លាយជាវិស្វករដែលអាចជឿជាក់បានឬវិស្វករប្រតិបត្តិការរំពឹងថានឹងមានសំណួរ **
    - បើមិនដូច្នោះទេនេះគ្រាន់តែជាការល្អដើម្បីដឹង
    - [ ] [Khan Academy](https://www.khanacademy.org/computing/computer-science/computers-and-internet-code-org)
    - [ ] [UDP and TCP: Comparison of Transport Protocols (វីដេអូ)](https://www.youtube.com/watch?v=Vdc8TCESIg8)
    - [ ] [TCP/IP and the OSI Model Explained! (វីដេអូ)](https://www.youtube.com/watch?v=e5DEVa9eSN0)
    - [ ] [Packet Transmission across the Internet. Networking & TCP/IP tutorial. (វីដេអូ)](https://www.youtube.com/watch?v=nomyRJehhnM)
    - [ ] [HTTP (វីដេអូ)](https://www.youtube.com/watch?v=WGJrLqtX7As)
    - [ ] [SSL and HTTPS (វីដេអូ)](https://www.youtube.com/watch?v=S2iBR2ZlZf0)
    - [ ] [SSL/TLS (វីដេអូ)](https://www.youtube.com/watch?v=Rp3iZUvXWlM)
    - [ ] [HTTP 2.0 (វីដេអូ)](https://www.youtube.com/watch?v=E9FxNzv1Tr8)
    - [ ] [Video Series (21 វីដេអូ) (វីដេអូ)](https://www.youtube.com/playlist?list=PLEbnTDJUr_IegfoqO4iPnPYQui46QqT0j)
    - [ ] [Subnetting Demystified - Part 5 CIDR Notation (វីដេអូ)](https://www.youtube.com/watch?v=t5xYI0jzOf4)
    - [ ] Sockets:
        - [ ] [Java - Sockets - Introduction (វីដេអូ)](https://www.youtube.com/watch?v=6G_W54zuadg&t=6s)
        - [ ] [Socket Programming (វីដេអូ)](https://www.youtube.com/watch?v=G75vN2mnJeQ)

## System Design, Scalability, Data Handling

** អ្នកអាចរំពឹងថានឹងមានសំណួររចនាប្រព័ន្ធប្រសិនបើអ្នកមានបទពិសោធ 4+ ឆ្នាំ។ **

- Scalability និង System Designគឺជាប្រធានបទដែលមានប្រធានបទជាច្រេីន និង ធនធានជាច្រើន ដោយសារវាត្រូវការគិតច្រេីនពេលបង្កេីតប្រព័ន្ធដែលល្អ
  រំពឹងថានឹងចំណាយពេលបន្តិចលើរឿងនេះ
- ការពិចារណា:
    - Scalability
        - Distill large data sets to single values
        - Transform one data set to another
        - Handling obscenely large amounts of data
    - System design
        - features sets
        - interfaces
        - class hierarchies
        - designing a system under certain constraints
        - simplicity and robustness
        - tradeoffs
        - performance analysis and optimization
- [ ] **ចាប់ផ្តើមនៅទីនេះ**: [The System Design Primer](https://github.com/donnemartin/system-design-primer)
- [ ] [System Design from HiredInTech](http://www.hiredintech.com/system-design/)
- [ ] [How Do I Prepare To Answer Design Questions In A Technical Inverview?](https://www.quora.com/How-do-I-prepare-to-answer-design-questions-in-a-technical-interview?redirected_qid=1500023)
- [ ] [8 Things You Need to Know Before a System Design Interview](http://blog.gainlo.co/index.php/2015/10/22/8-things-you-need-to-know-before-system-design-interviews/)
- [ ] [Algorithm design](http://www.hiredintech.com/algorithm-design/)
- [ ] [Database Normalization - 1NF, 2NF, 3NF and 4NF (វីដេអូ)](https://www.youtube.com/watch?v=UrYLYV7WSHM)
- [ ] [System Design Interview](https://github.com/checkcheckzz/system-design-interview) - There are a lot of resources in this one. Look through the articles and examples. I put some of them below
- [ ] [How to ace a systems design interview](http://www.palantir.com/2011/10/how-to-rock-a-systems-design-interview/)
- [ ] [Numbers Everyone Should Know](http://everythingisdata.wordpress.com/2009/10/17/numbers-everyone-should-know/)
- [ ] [How long does it take to make a context switch?](http://blog.tsunanet.net/2010/11/how-long-does-it-take-to-make-context.html)
- [ ] [Transactions Across Datacenters (វីដេអូ)](https://www.youtube.com/watch?v=srOgpXECblk)
- [ ] [A plain English introduction to CAP Theorem](http://ksat.me/a-plain-english-introduction-to-cap-theorem/)
- [ ] Consensus Algorithms:
    - [ ] Paxos - [Paxos Agreement - Computerphile (វីដេអូ)](https://www.youtube.com/watch?v=s8JqcZtvnsM)
    - [ ] Raft - [An Introduction to the Raft Distributed Consensus Algorithm (វីដេអូ)](https://www.youtube.com/watch?v=P9Ydif5_qvE)
        - [ ] [Easy-to-read paper](https://raft.github.io/)
        - [ ] [Infographic](http://thesecretlivesofdata.com/raft/)
- [ ] [Consistent Hashing](http://www.tom-e-white.com/2007/11/consistent-hashing.html)
- [ ] [NoSQL Patterns](http://horicky.blogspot.com/2009/11/nosql-patterns.html)
- [ ] Scalability:
    - អ្នកមិនត្រូវការរបស់ទាំងអស់នេះទេ។ គ្រាន់តែជ្រើសរើសយកចំណាប់អារម្មណ៍មួយចំនួនដែលអ្នកចាប់អារម្មណ៍។
    - [ ] [Great overview (វីដេអូ)](https://www.youtube.com/watch?v=-W9F__D3oY4)
    - [ ] ស៊េរីខ្លីៗ:
        - [Clones](http://www.lecloud.net/post/7295452622/scalability-for-dummies-part-1-clones)
        - [Database](http://www.lecloud.net/post/7994751381/scalability-for-dummies-part-2-database)
        - [Cache](http://www.lecloud.net/post/9246290032/scalability-for-dummies-part-3-cache)
        - [Asynchronism](http://www.lecloud.net/post/9699762917/scalability-for-dummies-part-4-asynchronism)
    - [ ] [Scalable Web Architecture and Distributed Systems](http://www.aosabook.org/en/distsys.html)
    - [ ] [Fallacies of Distributed Computing Explained](https://pages.cs.wisc.edu/~zuyu/files/fallacies.pdf)
    - [ ] [Pragmatic Programming Techniques](http://horicky.blogspot.com/2010/10/scalable-system-design-patterns.html)
        - [extra: Google Pregel Graph Processing](http://horicky.blogspot.com/2010/07/google-pregel-graph-processing.html)
    - [ ] [Jeff Dean - Building Software Systems At Google and Lessons Learned (វីដេអូ)](https://www.youtube.com/watch?v=modXC5IWTJI)
    - [ ] [Introduction to Architecting Systems for Scale](http://lethain.com/introduction-to-architecting-systems-for-scale/)
    - [ ] [Scaling mobile games to a global audience using App Engine and Cloud Datastore (វីដេអូ)](https://www.youtube.com/watch?v=9nWyWwY2Onc)
    - [ ] [How Google Does Planet-Scale Engineering for Planet-Scale Infra (វីដេអូ)](https://www.youtube.com/watch?v=H4vMcD7zKM0)
    - [ ] [The Importance of Algorithms](https://www.topcoder.com/community/competitive-programming/tutorials/the-importance-of-algorithms/)
    - [ ] [Sharding](http://highscalability.com/blog/2009/8/6/an-unorthodox-approach-to-database-design-the-coming-of-the.html)
    - [ ] [Scale at Facebook (2012), "Building for a Billion Users" (វីដេអូ)](https://www.youtube.com/watch?v=oodS71YtkGU)
    - [ ] [Engineering for the Long Game - Astrid Atkinson Keynote(វីដេអូ)](https://www.youtube.com/watch?v=p0jGmgIrf_M&list=PLRXxvay_m8gqVlExPC5DG3TGWJTaBgqSA&index=4)
    - [ ] [7 Years Of YouTube Scalability Lessons In 30 Minutes](http://highscalability.com/blog/2012/3/26/7-years-of-youtube-scalability-lessons-in-30-minutes.html)
        - [វីដេអូ](https://www.youtube.com/watch?v=G-lGCC4KKok)
    - [ ] [How PayPal Scaled To Billions Of Transactions Daily Using Just 8VMs](http://highscalability.com/blog/2016/8/15/how-paypal-scaled-to-billions-of-transactions-daily-using-ju.html)
    - [ ] [How to Remove Duplicates in Large Datasets](https://blog.clevertap.com/how-to-remove-duplicates-in-large-datasets/)
    - [ ] [A look inside Etsy's scale and engineering culture with Jon Cowie (វីដេអូ)](https://www.youtube.com/watch?v=3vV4YiqKm1o)
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
        - [O'Reilly MySQL CE 2011: Jeremy Cole, "Big and Small Data at @Twitter" (វីដេអូ)](https://www.youtube.com/watch?v=5cKTP36HVgI)
        - [Timelines at Scale](https://www.infoq.com/presentations/Twitter-Timeline-Scalability)
    - មេីលបន្ធែម "Mining Massive Datasets" video series in the [វីដេអូ](#video-series) section
- [ ] ការអនុវត្តដំណើរការរចនាប្រព័ន្ធ៖ នេះគឺជាគំនិតមួយចំនួនដើម្បីព្យាយាមធ្វើការលើក្រដាសនីមួយៗដោយមានឯកសារមួយចំនួនស្តីពីវិធីដែលត្រូវបានដោះស្រាយនៅក្នុងពិភពពិត៖ 
    - ពិនិត្យឡើងវិញ: [The System Design Primer](https://github.com/donnemartin/system-design-primer)
    - [System Design from HiredInTech](http://www.hiredintech.com/system-design/)
    - [cheat sheet](https://github.com/jwasham/coding-interview-university/blob/master/extras/cheat%20sheets/system-design.pdf)
    - flow:
        1. ស្វែងយល់ពីបញ្ហានិងវិសាលភាព
            - កំណត់ករណីប្រើប្រាស់ដោយមានជំនួយពីអ្នកសម្ភាសន៍
            - ស្នើលក្ខណៈបន្ថែម
            - ដកចេញលក្ខណៈដែលអ្នកសម្ភាសន៍គិតថាលើស
            - សន្មតថាភាពអាចរកបានខ្ពស់ត្រូវបានទាមទារបន្ថែមជាករណីប្រើប្រាស់
        2. គិតអំពីឧបសគ្គ៖
             - សួរថាតើមានប៉ុន្មានសំណើរប៉ុន្មានក្នុងមួយខែ
             - សួរថាតើមានសំណូមពរប៉ុន្មានក្នុងមួយវិនាទី (ពួកគេអាចស្ម័គ្រចិត្តឬធ្វើឱ្យអ្នកធ្វើគណនា)
             - ប៉ាន់ស្មានអាននឹងសរសេរជាភាគរយ
             - ចងចាំបទបញ្ជា ៨០/២០ ក្នុងពេលធ្វើការប៉ាន់ស្មាន
             - តើទិន្នន័យប៉ុន្មានត្រូវបានសរសេរក្នុងមួយវិនាទី
             - ការផ្ទុកសរុបត្រូវការក្នុងរយៈពេល ៥ ឆ្នាំ
             - តើទិន្នន័យត្រូវអានប៉ុន្មានដងក្នុងមួយវិនាទី
        3. ការរចនាអរូបី៖
             - ស្រទាប់ (សេវាកម្ម ទិន្នន័យ ឃ្លាំងសម្ងាត់ (cache) )
             - ហេដ្ឋារចនាសម្ព័ន្ធ៖ ផ្ទុកតុល្យភាព(load balacing),  សារ             
             - ទិដ្ឋភាពទូទៅរដុបនៃក្បួនដោះស្រាយគន្លឹះណាមួយដែលជំរុញសេវាកម្ម
             - ពិចារណាការរាំងស្ទះនិងកំណត់ដំណោះស្រាយ
    - លំហាត់:
        - [Design a CDN network: old article](https://kilthub.cmu.edu/articles/Globally_distributed_content_delivery/6605972)
        - [Design a random unique ID generation system](https://blog.twitter.com/2010/announcing-snowflake)
        - [Design an online multiplayer card game](http://www.indieflashblog.com/how-to-create-an-asynchronous-multiplayer-game.html)
        - [Design a key-value database](http://www.slideshare.net/dvirsky/introduction-to-redis)
        - [Design a picture sharing system](http://highscalability.com/blog/2011/12/6/instagram-architecture-14-million-users-terabytes-of-photos.html)
        - [Design a recommendation system](http://ijcai13.org/files/tutorial_slides/td3.pdf)
        - [Design a URL-shortener system: copied from above](http://www.hiredintech.com/system-design/the-system-design-process/)
        - [Design a cache system](https://www.adayinthelifeof.nl/2011/02/06/memcache-internals/)

---

## Final Review (ការពិនិត្យចុងក្រោយ)

    ផ្នែកនេះនឹងមានវីដេអូខ្លីៗដែលអ្នកអាចមើលបានយ៉ាងរហ័សដើម្បីពិនិត្យឡើងវិញនូវគោលគំនិតសំខាន់ៗ។ វាល្អណាស់ប្រសិនបើអ្នកចង់ធ្វើឱ្យស្រស់ជាងមុន។

- [ ] Series of 2-3 minutes short subject videos (23 វីដេអូ)
    - [វីដេអូ](https://www.youtube.com/watch?v=r4r1DZcx1cM&list=PLmVb1OknmNJuC5POdcDv5oCS7_OUkDgpj&index=22)
- [ ] Series of 2-5 minutes short subject videos - Michael Sambol (18 វីដេអូ):
    - [វីដេអូ](https://www.youtube.com/channel/UCzDJwLWoYCUQowF_nG3m5OQ)
- [ ] [វីដេអូ Sedgewick - Algorithms I](https://www.coursera.org/learn/algorithms-part1)
- [ ] [វីដេអូ Sedgewick - Algorithms II](https://www.coursera.org/learn/algorithms-part2)

---

## Coding Question Practice (ការអនុវត្តសំណួរសរសេរកូដ)

ឥឡូវអ្នកដឹងពីប្រធានបទវិទ្យាសាស្ត្រកុំព្យូទ័រទាំងអស់ខាងលើ វាដល់ពេលត្រូវអនុវត្តការឆ្លើយសំនួរបញ្ហា។ 

**ការអនុវត្តសំណួរសរសេរកូដមិនមែនអំពីការទន្ទេញចម្លើយចំពោះបញ្ហាសរសេរកម្មវិធីទេ។**

មូលហេតុដែលអ្នកត្រូវអនុវត្តធ្វើបញ្ហាសរសេរកម្មវិធី៖
- ការទទួលស្គាល់បញ្ហានិងកន្លែងដែលរចនាសម្ព័ន្ធទិន្នន័យត្រឹមត្រូវនិងក្បួនដោះស្រាយត្រូវគ្នា
- ការប្រមូលផ្តុំតម្រូវការសម្រាប់បញ្ហា
- និយាយពីបញ្ហាដូចជាអ្នកនឹងជួបអ្នកសម្ភាសន៍ដែរ
- សរសេរកូដនៅលើក្តារខៀនឬក្រដាសមិនមែនកុំព្យូទ័រទេ
- មានពេលវេលានិងចន្លោះស្មុគស្មាញសម្រាប់ដំណោះស្រាយរបស់អ្នក
- សាកល្បងតេសដំណោះស្រាយរបស់អ្នក

មានការណែនាំដ៏ល្អសំរាប់វិធីសាស្រ្តដោះស្រាយបញ្ហាដែលមានលក្ខណៈជាបញ្ហាក្នុងការសំភាសន៍។ អ្នកនឹងទទួលបានពីកម្មវិធីសៀវភៅសំភាសន៍ផងដែរប៉ុន្តែខ្ញុំបានរកឃើញថាលេចធ្លោនេះ៖
[Algorithm design canvas](http://www.hiredintech.com/algorithm-design/)

គ្មានក្តារខៀននៅផ្ទះទេ? ខ្ញុំជាមនុស្សចំលែកនិងមានក្តារខៀនធំ។ ជំនួសឱ្យក្តារខៀន សូមរើសយកផ្ទាំងគំនូរធំ ៗ ពីហាងសិល្បៈ។ អ្នកអាចអង្គុយលើសាឡុងនិងអនុវត្តបាន។ នេះគឺជា "សាឡុងក្តារចុច" របស់ខ្ញុំ។
ខ្ញុំបានបន្ថែមប៊ិចនៅក្នុងរូបថតសម្រាប់ខ្នាត។ ប្រសិនបើអ្នកប្រើប៊ិចអ្នកនឹងចង់លុបចោល។ ឆាប់រញ៉េរញ៉ៃ។ ខ្ញុំប្រើខ្មៅដៃនិងជ័រលុប។

![my sofa whiteboard](https://d3j2pkmjtin6ou.cloudfront.net/art_board_sm_2.jpg)

បន្ថែម:

- [Mathematics for Topcoders](https://www.topcoder.com/community/competitive-programming/tutorials/mathematics-for-topcoders/)
- [Dynamic Programming – From Novice to Advanced](https://www.topcoder.com/community/competitive-programming/tutorials/dynamic-programming-from-novice-to-advanced/)
- [MIT Interview Materials](https://web.archive.org/web/20160906124824/http://courses.csail.mit.edu/iap/interview/materials.php)
- [Exercises for getting better at a given language](http://exercism.io/languages)

**អាននិងធ្វើបញ្ហាកម្មវិធី (តាមលំដាប់លំដោយ):**

- [ ] [Programming Interviews Exposed: Secrets to Landing Your Next Job, 2nd Edition](http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html)
    - ចម្លើយជា C, C++ និង Java
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - ចម្លើយជា Java

មេីលសៀភៅ [Book List above](#book-list)


## Coding exercises/challenges

នៅពេលដែលអ្នកបានរៀនខួរក្បាលរបស់អ្នកហើយ សូមដាក់ខួរក្បាលទាំងនោះឱ្យដំណើរការ។
យកបញ្ហាប្រឈមនៃការសរសេរកូដជារៀងរាល់ថ្ងៃតាមដែលអ្នកអាចធ្វើបាន។

- [How to Find a Solution](https://www.topcoder.com/community/competitive-programming/tutorials/how-to-find-a-solution/)
- [How to Dissect a Topcoder Problem Statement](https://www.topcoder.com/community/competitive-programming/tutorials/how-to-dissect-a-topcoder-problem-statement/)

វីឌីអូសំភាសន៍ការសរសេរកូដ:
- [IDeserve (88 វីដេអូ)](https://www.youtube.com/watch?v=NBcqBddFbZw&list=PLamzFoFxwoNjPfxzaWqs7cZGsPYy0x_gI)
- [Tushar Roy (5 playlists)](https://www.youtube.com/user/tusharroy2525/playlists?shelf_id=2&view=50&sort=dd)
    - Super for walkthroughs of problem solutions
- [Nick White - LeetCode Solutions (187 វីដេអូ)](https://www.youtube.com/playlist?list=PLU_sdQYzUj2keVENTP0a5rdykRSgg9Wp-)
    - ការពន្យល់ល្អអំពីដំណោះស្រាយនិងលេខកូដ
    - អ្នកអាចមើលបានច្រើនក្នុងរយៈពេលដ៏ខ្លី
- [FisherCoder - LeetCode Solutions](https://youtube.com/FisherCoder)

គេហទំព័រប្រកួតប្រជែង:
- [LeetCode](https://leetcode.com/)
    - គេហទំព័របញ្ហាសរសេរកូដដែលខ្ញុំចូលចិត្តបំផុត។ វាមានតម្លៃសម្រាប់ការជាវប្រាក់សម្រាប់រយៈពេល 1-2 ខែដែលអ្នកទំនងជានឹងរៀបចំ
    - [LeetCode solutions from FisherCoder](https://github.com/fishercoder1534/Leetcode) 
    - សូមមើលវីដេអូស Nick ខាងលើសម្រាប់លេខកូដខ្លី
- [HackerRank](https://www.hackerrank.com/)
- [TopCoder](https://www.topcoder.com/)
- [InterviewCake](https://www.interviewcake.com/)
- [Geeks for Geeks](http://www.geeksforgeeks.org/)
- [InterviewBit](https://www.interviewbit.com/invite/icjf)
- [Project Euler (math-focused)](https://projecteuler.net/index.php?section=problems)
- [Code Exercises](https://code-exercises.com)

គេហទំព័រសិក្សាភាសាដែលមានបញ្ហាប្រឈម៖
- [Codewars](http://www.codewars.com)
- [Codility](https://codility.com/programmers/)
- [HackerEarth](https://www.hackerearth.com/)
- [Sphere Online Judge (spoj)](http://www.spoj.com/)
- [Codechef](https://www.codechef.com/)

Challenge repos:
- [Interactive Coding Interview Challenges in Python](https://github.com/donnemartin/interactive-coding-challenges)

Mock Interviews:
- [Gainlo.co: Mock interviewers from big companies](http://www.gainlo.co/) - I used this and it helped me relax for the phone screen and on-site interview
- [Pramp: Mock interviews from/with peers](https://www.pramp.com/) - peer-to-peer model of practice interviews
- [Refdash: Mock interviews and expedited interviews](https://refdash.com/) - also help candidates fast track by skipping multiple interviews with tech companies
- [interviewing.io: Practice mock interview with senior engineers](https://interviewing.io) - anonymous algorithmic/systems design interviews with senior engineers from FAANG anonymously. 


## នៅពេលអ្នកជិតដល់ការសម្ភាសន៍

- Cracking The Coding Interview Set 2 (វីដេអូ):
    - [Cracking The Code Interview](https://www.youtube.com/watch?v=4NIb9l3imAo)
    - [Cracking the Coding Interview - Fullstack Speaker Series](https://www.youtube.com/watch?v=Eg5-tdAwclo)

## ប្រវត្តិរូបសង្ខេបរបស់អ្នក

- មើលបន្តការរៀបចំរបស់នៅក្នុង Cracking The Coding Interview និង back of Programming Interviews Exposed


## ត្រូវគិតអំពីពេលសម្ភាសន៍មកដល់

គិតអំពីសំណួរសំភាសន៍ចំនួន 20 ដែលអ្នកនឹងទទួលបានរួមជាមួយធាតុខាងក្រោម។ មានចម្លើយ ២-៣ សម្រាប់ចម្លើយនីមួយៗ។
មានរឿងរ៉ាវមិនមែនគ្រាន់តែទិន្នន័យអំពីអ្វីដែលអ្នកបានសំរេចនោះទេ។

- ហេតុអ្វីបានជាអ្នកចង់បានការងារនេះ?
- តើអ្វីជាបញ្ហាដ៏លំបាកដែលអ្នកបានដោះស្រាយ?
- បញ្ហាធំ ៗ ដែលប្រឈមមុខ?
- ការរចនាម៉ូដណាដែលល្អបំផុត / អាក្រក់បំផុត?
- គំនិតសម្រាប់កែលម្អផលិតផលដែលមានស្រាប់
- តើអ្នកធ្វើការបានល្អបំផុតដោយរបៀបណាក្នុងនាមជាបុគ្គលនិងជាក្រុម?
- ជំនាញឬបទពិសោធន៍ណាមួយរបស់អ្នកដែលជាទ្រព្យសម្បត្តិនៅក្នុងតួនាទីហើយហេតុអ្វី?
- តើអ្វីដែលអ្នកពេញចិត្តបំផុតនៅ [ការងារ x / គម្រោង y]?
- តើអ្វីជាបញ្ហាប្រឈមដ៏ធំបំផុតដែលអ្នកបានប្រឈមនៅ [ការងារ x / គម្រោង y]?
- តើអ្វីទៅជាកំហុសដ៏លំបាកបំផុតដែលអ្នកបានជួបប្រទះនៅ [ការងារ x / គម្រោង y]?
- តើអ្នកបានរៀនអ្វីខ្លះនៅ [ការងារ x / គំរោង y]?
តើអ្នកនឹងធ្វើអ្វីបានល្អជាងនៅ [ការងារ x / គំរោង y]?

## Have questions for the interviewer (មានសំណួរសម្រាប់អ្នកសម្ភាសន៍)

    សំនួរខ្លះរបស់ខ្ញុំ (ខ្ញុំប្រហែលជាដឹងចម្លើយរួចហើយប៉ុន្តែចង់បានយោបល់ឬទស្សនៈក្រុមរបស់ពួកគេ)
    
- តើក្រុមរបស់អ្នកមានទំហំប៉ុនណា?
- តើវដ្ដ dev របស់អ្នកមើលទៅដូចអ្វី? តើអ្នកធ្វើទឹកជ្រោះទឹកពន្លក / ឆាប់រហ័សទេ?
- តើប្រញាប់ប្រញាល់ដល់ពេលវេលាកំណត់ទេ? ឬមានភាពបត់បែន?
- តើការសម្រេចចិត្តត្រូវបានធ្វើឡើងនៅក្នុងក្រុមរបស់អ្នកយ៉ាងដូចម្តេច?
- តើអ្នកមានការប្រជុំប៉ុន្មានដងក្នុងមួយសប្តាហ៍?
- តើអ្នកមានអារម្មណ៍ថាបរិយាកាសការងាររបស់អ្នកជួយអ្នកក្នុងការផ្តោតអារម្មណ៍ទេ?
- តើអ្នកកំពុងធ្វើអ្វី?
- តើអ្នកចូលចិត្តអ្វី?
- ជីវិតការងារដូចជាអ្វី?
- តើការងារ / ជីវិតមានតុល្យភាពយ៉ាងដូចម្តេច?

## Once You've Got The Job (នៅពេលដែលអ្នកមានការងារធ្វើ)

សូមអបអរសាទរ!

បន្តរៀន។

រៀនមិនចេះចប់។

---

    *****************************************************************************************************
    *****************************************************************************************************

    អ្វីគ្រប់យ៉ាងនៅខាងក្រោមចំណុចនេះគឺស្រេចចិត្តបេីចង់មេីល។
    តាមរយៈការសិក្សាទាំងនេះ អ្នកនឹងទទួលបានការយល់ដឹងកាន់តែច្រើនពីគំនិតវិទ្យាសាស្ត្រកុំព្យូទ័រ ហើយអ្នកនឹងត្រូវបានរៀបចំខ្លួនឱ្យកាន់តែប្រសើរ
    ការងារវិស្វកម្មផ្នែកទន់ណាមួយ។ អ្នកនឹងក្លាយជាវិស្វករផ្នែកទន់ដែលមានចំេនះពេញលេញ។

    *****************************************************************************************************
    *****************************************************************************************************

---

## Additional Books (សៀវភៅបន្ថែម)

    ទាំងនេះគឺនៅទីនេះដូច្នេះអ្នកអាចចូលទៅក្នុងប្រធានបទដែលអ្នកចាប់អារម្មណ៍។ 

- [The Unix Programming Environment](https://www.amazon.com/dp/013937681X)
    - ចាស់តែល្អ
- [The Linux Command Line: A Complete Introduction](https://www.amazon.com/dp/1593273894/)
    - ជម្រើសទំនើប
- [TCP/IP Illustrated Series](https://en.wikipedia.org/wiki/TCP/IP_Illustrated)
- [Head First Design Patterns](https://www.amazon.com/gp/product/0596007124/)
    - ការណែនាំ design patterns
- [Design Patterns: Elements of Reusable Object-Oriente​d Software](https://www.amazon.com/Design-Patterns-Elements-Reusable-Object-Oriented/dp/0201633612)
    - AKA the "Gang Of Four" book, or GOF
    - The canonical design patterns book
- [UNIX and Linux System Administration Handbook, 5th Edition](https://www.amazon.com/UNIX-Linux-System-Administration-Handbook/dp/0134277554/)
- [Algorithm Design Manual](http://www.amazon.com/Algorithm-Design-Manual-Steven-Skiena/dp/1849967202) (Skiena)
    - ជាការពិនិត្យឡើងវិញនិងការទទួលស្គាល់បញ្ហា
    - ផ្នែកកាតាឡុកក្បួនដោះស្រាយគឺហួសពីវិសាលភាពនៃការពិបាកដែលអ្នកនឹងជួបសម្ភាសន៍
    - សៀវភៅនេះមានពីរផ្នែក៖
        - សៀវភៅសិក្សាថ្នាក់ស្តីពីរចនាសម្ព័ន្ធទិន្នន័យនិងក្បួនដោះស្រាយ
            - គុណសម្បត្តិ:
                - គឺជាការពិនិត្យឡើងវិញដ៏ល្អមួយដែលជាសៀវភៅក្បួនដោះស្រាយណាមួយ
                - រឿងល្អ ៗ ពីបទពិសោធន៍របស់គាត់ដោះស្រាយបញ្ហានៅក្នុងឧស្សាហកម្មនិងបណ្ឌិតសភា
                - ឧទាហរណ៍កូដនៅក្នុង C
            - គុណវិបត្តិ:
                - Can be as dense or impenetrable as CLRS, and in some cases, CLRS may be a better alternative for some subjects
                - Chapters 7, 8, 9 can be painful to try to follow, as some items are not explained well or require more brain than I have
                - Don't get me wrong: I like Skiena, his teaching style, and mannerisms, but I may not be Stony Brook material
        - Algorithm catalog:
           - នេះជាហេតុផលពិតប្រាកដដែលអ្នកទិញសៀវភៅនេះ
            - ហៀបនឹងចូលដល់ផ្នែកនេះ។ នឹងធ្វើបច្ចុប្បន្នភាពនៅទីនេះនៅពេលដែលខ្ញុំបានឆ្លងកាត់វា
    - អាចជួលវានៅលើ Kindle
    - ចម្លើយ:
        - [ដំណោះស្រាយ](http://www.algorithm.cs.sunysb.edu/algowiki/index.php/The_Algorithms_Design_Manual_(Second_Edition))
        - [ដំណោះស្រាយ](http://blog.panictank.net/category/algorithmndesignmanualsolutions/page/2/)
    - [Errata](http://www3.cs.stonybrook.edu/~skiena/algorist/book/errata)
- [Write Great Code: Volume 1: Understanding the Machine](https://www.amazon.com/Write-Great-Code-Understanding-Machine/dp/1593270038)
    - សៀវភៅនេះត្រូវបានបោះពុម្ពផ្សាយក្នុងឆ្នាំ ២០០៤ ហើយវាហួសសម័យបន្តិចប៉ុន្តែវាជាធនធានដ៏អស្ចារ្យសម្រាប់ការស្វែងយល់អំពីកុំព្យូទ័រដោយសង្ខេប
    - The author invented [HLA](https://en.wikipedia.org/wiki/High_Level_Assembly), so take mentions and examples in HLA with a grain of salt. Not widely used, but decent examples of what assembly looks like
    - ជំពូកទាំងនេះពិតជាមានប្រយោជន៍ក្នុងការអានដើម្បីផ្តល់ឱ្យអ្នកនូវគ្រឹះដ៏ល្អមួយ:
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
    - **សំខាន់ៈ** ការអានសៀវភៅនេះនឹងមានតម្លៃតែប៉ុណ្ណោះ។ សៀវភៅនេះគឺជាការពិនិត្យឡើងវិញដ៏អស្ចារ្យនៃក្បួនដោះស្រាយនិងរចនាសម្ព័ន្ធទិន្នន័យប៉ុន្តែនឹងមិនបង្រៀនអ្នកពីរបៀបសរសេរកូដល្អទេ។ អ្នកត្រូវតែចេះសរសេរកូដដំណោះស្រាយប្រកបដោយប្រសិទ្ធភាព
    - AKA CLR, sometimes CLRS, because Stein was late to the game

- [Computer Architecture, Sixth Edition: A Quantitative Approach](https://www.amazon.com/dp/0128119055)
    - For a richer, more up-to-date (2017), but longer treatment

- [Programming Pearls](http://www.amazon.com/Programming-Pearls-2nd-Jon-Bentley/dp/0201657880)
    - ជំពូកដំបូង បង្ហាញនូវដំណោះស្រាយដ៏ឆ្លាតវៃចំពោះបញ្ហាសរសេរកម្មវិធី (ខ្លះចាស់ដោយប្រើខ្សែអាត់ទិន្នន័យ) ប៉ុន្តែនោះគ្រាន់តែជាការណែនាំប៉ុណ្ណោះ។ សៀវភៅណែនាំស្តីពីការរចនាកម្មវិធីនិងស្ថាបត្យកម្ម

## Additional Learning
    
    ខ្ញុំបានបន្ថែមពួកគេដើម្បីជួយអ្នកឱ្យក្លាយជាវិស្វករផ្នែកទន់ដែលមានមានចំេណះពេញលេញហើយត្រូវដឹងច្បាស់បច្ចេកវិទ្យានិងក្បួនដោះស្រាយដូច្នេះអ្នកនឹងមានប្រអប់ឧបករណ៍ធំជាងមុន។

- ### Compilers
    - [How a Compiler Works in ~1 minute (វីដេអូ)](https://www.youtube.com/watch?v=IhC7sdYe-Jg)
    - [Harvard CS50 - Compilers (វីដេអូ)](https://www.youtube.com/watch?v=CSZLNYF4Klo)
    - [C++ (វីដេអូ)](https://www.youtube.com/watch?v=twodd1KFfGk)
    - [Understanding Compiler Optimization (C++) (វីដេអូ)](https://www.youtube.com/watch?v=FnGCDLhaxKU)

- ### Emacs and vi(m)
    - រៀនពី unix-based code editor
    - vi(m):
        - [Editing With vim 01 - Installation, Setup, and The Modes (វីដេអូ)](https://www.youtube.com/watch?v=5givLEMcINQ&index=1&list=PL13bz4SHGmRxlZVmWQ9DvXo1fEg4UdGkr)
        - [VIM Adventures](http://vim-adventures.com/)
        - ឈុត ៤ (វីដេអូ):
            - [The vi/vim editor - មេរៀន 1](https://www.youtube.com/watch?v=SI8TeVMX8pk)
            - [The vi/vim editor - មេរៀន 2](https://www.youtube.com/watch?v=F3OO7ZIOaJE)
            - [The vi/vim editor - មេរៀន 3](https://www.youtube.com/watch?v=ZYEccA_nMaI)
            - [The vi/vim editor - មេរៀន 4](https://www.youtube.com/watch?v=1lYD5gwgZIA)
        - [Using Vi Instead of Emacs](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Using_Vi_instead_of_Emacs)
    - emacs:
        - [Basics Emacs Tutorial (វីដេអូ)](https://www.youtube.com/watch?v=hbmV1bnQ-i0)
        - ឈុត ៣ (វីដេអូ):
            - [Emacs Tutorial (Beginners) -Part 1- File commands, cut/copy/paste, cursor commands](https://www.youtube.com/watch?v=ujODL7MD04Q)
            - [Emacs Tutorial (Beginners) -Part 2- Buffer management, search, M-x grep and rgrep modes](https://www.youtube.com/watch?v=XWpsRupJ4II)
            - [Emacs Tutorial (Beginners) -Part 3- Expressions, Statements, ~/.emacs file and packages](https://www.youtube.com/watch?v=paSgzPso-yc)
        - [Evil Mode: Or, How I Learned to Stop Worrying and Love Emacs (វីដេអូ)](https://www.youtube.com/watch?v=JWD1Fpdd4Pc)
        - [Writing C Programs With Emacs](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Writing_C_programs_with_Emacs)
        - [(maybe) Org Mode In Depth: Managing Structure (វីដេអូ)](https://www.youtube.com/watch?v=nsGYet02bEk)

- ### Unix command line tools
    - ខ្ញុំបានបំពេញក្នុងបញ្ជីខាងក្រោមពីឧបករណ៍ល្អ ៗ.
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

- ### Information theory (វីដេអូ)
    - [Khan Academy](https://www.khanacademy.org/computing/computer-science/informationtheory)
    - បន្ថែមទៀតអំពី Markov processes:
        - [Core Markov Text Generation](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/waxgx/core-markov-text-generation)
        - [Core Implementing Markov Text Generation](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/gZhiC/core-implementing-markov-text-generation)
        - [Project = Markov Text Generation Walk Through](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/EUjrq/project-markov-text-generation-walk-through)
    - សូមមើលបន្ថែមនៅ MIT 6.050J Information និង Entropy series

- ### Parity & Hamming Code (វីដេអូ)
    - [Intro](https://www.youtube.com/watch?v=q-3BctoUpHE)
    - [Parity](https://www.youtube.com/watch?v=DdMcAUlxh1M)
    - Hamming Code:
        - [Error detection](https://www.youtube.com/watch?v=1A_NcXxdoCc)
        - [Error correction](https://www.youtube.com/watch?v=JAMLuxdHH8o)
    - [Error Checking](https://www.youtube.com/watch?v=wbH2VxzmoZk)

- ### Entropy
    - សូមមើលវីដេអូខាងក្រោមផង
    - ត្រូវប្រាកដថាមើលវីដេអូទ្រឹស្តីព័ត៌មានជាមុន
    - [Information Theory, Claude Shannon, Entropy, Redundancy, Data Compression & Bits (វីដេអូ)](https://youtu.be/JnJq3Py0dyM?t=176)

- ### Cryptography
    - សូមមើលវីដេអូខាងក្រោមផង
    - ត្រូវប្រាកដថាមើលវីដេអូទ្រឹស្តីព័ត៌មានជាមុន
    - [Khan Academy Series](https://www.khanacademy.org/computing/computer-science/cryptography)
    - [Cryptography: Hash Functions](https://www.youtube.com/watch?v=KqqOXndnvic&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=30)
    - [Cryptography: Encryption](https://www.youtube.com/watch?v=9TNI2wHmaeI&index=31&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

- ### Compression
    - ត្រូវប្រាកដថាមើលវីដេអូទ្រឹស្តីព័ត៌មានជាមុន
    - Computerphile (វីដេអូ):
        - [Compression](https://www.youtube.com/watch?v=Lto-ajuqW3w)
        - [Entropy in Compression](https://www.youtube.com/watch?v=M5c_RFKVkko)
        - [Upside Down Trees (Huffman Trees)](https://www.youtube.com/watch?v=umTbivyJoiI)
        - [EXTRA BITS/TRITS - Huffman Trees](https://www.youtube.com/watch?v=DV8efuB3h2g)
        - [Elegant Compression in Text (The LZ 77 Method)](https://www.youtube.com/watch?v=goOa3DGezUA)
        - [Text Compression Meets Probabilities](https://www.youtube.com/watch?v=cCDCfoHTsaU)
    - [វីដេអូ Compressor Head](https://www.youtube.com/playlist?list=PLOU2XLYxmsIJGErt5rrCqaSGTMyyqNt2H)
    - [(optional) Google Developers Live: GZIP is not enough!](https://www.youtube.com/watch?v=whGwm0Lky2s)

- ### Computer Security
    - [MIT (23 វីដេអូ)](https://www.youtube.com/playlist?list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
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
    - [GC in Python (វីដេអូ)](https://www.youtube.com/watch?v=iHVs_HkjdmI)
    - [Deep Dive Java: Garbage Collection is Good!](https://www.infoq.com/presentations/garbage-collection-benefits)
    - [Deep Dive Python: Garbage Collection in CPython (វីដេអូ)](https://www.youtube.com/watch?v=P-8Z0-MhdQs&list=PLdzf4Clw0VbOEWOS_sLhT_9zaiQDrS5AR&index=3)

- ### Parallel Programming
    - [Coursera (Scala)](https://www.coursera.org/learn/parprog1/home/week/1)
    - [Efficient Python for High Performance Parallel Computing (វីដេអូ)](https://www.youtube.com/watch?v=uY85GkaYzBk)

- ### Messaging, Serialization, and Queueing Systems
    - [Thrift](https://thrift.apache.org/)
        - [ការបង្រៀន](http://thrift-tutorial.readthedocs.io/en/latest/intro.html)
    - [Protocol Buffers](https://developers.google.com/protocol-buffers/)
        - [ការបង្រៀន](https://developers.google.com/protocol-buffers/docs/tutorials)
    - [gRPC](http://www.grpc.io/)
        - [gRPC 101 for Java Developers (វីដេអូ)](https://www.youtube.com/watch?v=5tmPvSe7xXQ&list=PLcTqM9n_dieN0k1nSeN36Z_ppKnvMJoly&index=1)
    - [Redis](http://redis.io/)
        - [ការបង្រៀន](http://try.redis.io/)
    - [Amazon SQS (queue)](https://aws.amazon.com/sqs/)
    - [Amazon SNS (pub-sub)](https://aws.amazon.com/sns/)
    - [RabbitMQ](https://www.rabbitmq.com/)
        - [ចាប់ផ្តើម](https://www.rabbitmq.com/getstarted.html)
    - [Celery](http://www.celeryproject.org/)
        - [ជំហានដំបូងជាមួយ Celery](http://docs.celeryproject.org/en/latest/getting-started/first-steps-with-celery.html)
    - [ZeroMQ](http://zeromq.org/)
        - [Intro - Read The Manual](http://zeromq.org/intro:read-the-manual)
    - [ActiveMQ](http://activemq.apache.org/)
    - [Kafka](http://kafka.apache.org/documentation.html#introduction)
    - [MessagePack](http://msgpack.org/index.html)
    - [Avro](https://avro.apache.org/)

- ### A*
    - [A Search Algorithm](https://en.wikipedia.org/wiki/A*_search_algorithm)
    - [A* Pathfinding Tutorial (វីដេអូ)](https://www.youtube.com/watch?v=KNXfSOx4eEE)
    - [A* Pathfinding (E01: algorithm explanation) (វីដេអូ)](https://www.youtube.com/watch?v=-L-WgKMFuhE)

- ### Fast Fourier Transform
    - [An Interactive Guide To The Fourier Transform](https://betterexplained.com/articles/an-interactive-guide-to-the-fourier-transform/)
    - [What is a Fourier transform? What is it used for?](http://www.askamathematician.com/2012/09/q-what-is-a-fourier-transform-what-is-it-used-for/)
    - [What is the Fourier Transform? (វីដេអូ)](https://www.youtube.com/watch?v=Xxut2PN-V8Q)
    - [Divide & Conquer: FFT (វីដេអូ)](https://www.youtube.com/watch?v=iTMn0Kt18tg&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=4)
    - [Understanding The FFT](http://jakevdp.github.io/blog/2013/08/28/understanding-the-fft/)

- ### Bloom Filter
    - ចំពោះBloom filterមួយដែលមាន m bits និង មុខងារhasing k, ទាំងការបញ្ចូលនិងការធ្វើតេស្តសមាជិកភាពគឺO(k)
    - [Bloom Filters (video)](https://www.youtube.com/watch?v=-SuTGoFYjZs)
    - [Bloom Filters | Mining of Massive Datasets | Stanford University (វីដេអូ)](https://www.youtube.com/watch?v=qBTdukbzc78)
    - [Tutorial](http://billmill.org/bloomfilter-tutorial/)
    - [How To Write A Bloom Filter App](http://blog.michaelschmatz.com/2016/04/11/how-to-write-a-bloom-filter-cpp/)

- ### HyperLogLog
    - [How To Count A Billion Distinct Objects Using Only 1.5KB Of Memory](http://highscalability.com/blog/2012/4/5/big-data-counting-how-to-count-a-billion-distinct-objects-us.html)

- ### Locality-Sensitive Hashing
    - ប្រើដើម្បីកំណត់ភាពស្រដៀងគ្នានៃឯកសារ
    - ការផ្ទុយមកពី MD5 ឬ SHA ដែលត្រូវបានប្រើដើម្បីកំណត់ថាតើឯកសារ ឬ ខ្សែអក្សរចំនួន ២ ពិតជាដូចគ្នា
    - [Simhashing (hopefully) made simple](http://ferd.ca/simhashing-hopefully-made-simple.html)

- ### van Emde Boas Trees
    - [Divide & Conquer: van Emde Boas Trees (វីដេអូ)](https://www.youtube.com/watch?v=hmReJCupbNU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=6)
    - [MIT Lecture Notes](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-046j-design-and-analysis-of-algorithms-spring-2012/lecture-notes/MIT6_046JS12_lec15.pdf)

- ### Augmented Data Structures
    - [CS 61B Lecture 39: Augmenting Data Structures](https://archive.org/details/ucberkeley_webcast_zksIj9O8_jc)

- ### Balanced search trees
    - ស្គាល់យ៉ាងហោចណាស់មែកធាងគោលពីរដែលមានតុល្យភាព (balanced binary tree) (និងដឹងពីរបៀបដែលវាត្រូវបានអនុវត្ត)៖ 
    - “ ក្នុងចំណោមដើមឈើស្វែងរកដែលមានតុល្យភាពដើម (balanced binary tree) AVL និងដើមឈើ ២/៣មិនពេញនិយមទេ៕ red-black trees ហាក់ដូចជាមានប្រជាប្រិយភាពជាង។
         រចនាសម្ពន្ធ័ទិន្នន័យរៀបចំដោយខ្លួនឯងដែលគួរឱ្យចាប់អារម្មណ៍ជាពិសេសគឺមែកឈើsplay tree ដែលប្រើការបង្វិល
         ដើម្បីផ្លាស់ទីកូនសោណាដែលបានចូលទៅកាន់ឬស។ "- ស្គីណា (Skiena)
    - ក្នុងចំណោមទាំងនេះខ្ញុំបានជ្រើសរើសអនុវត្តមែកឈើ splay tree ។ ពីអ្វីដែលខ្ញុំបានអានអ្នកនឹងមិនអនុវត្តទេនៅមែកធាងស្វែងរកមានតុល្យភាពនៅក្នុងបទសម្ភាសន៍របស់អ្នក។ ប៉ុន្តែខ្ញុំចង់បង្ហាញលេខកូដ
         ហើយប្រឈមមុខនឹងវា ។ ខ្ញុំបានអានលេខកូដred-black treeច្រើន
        - Splay tree: បញ្ចូល, ស្វែងរក, លុប
        ប្រសិនបើអ្នកអនុវត្តដើមឈើក្រហម / ខ្មៅសាកល្បងទាំងនេះ៖
        - មុខងារស្វែងរក និង ការបញ្ចូល ការរំលងលុប
    - ខ្ញុំចង់រៀនបន្ថែមទៀតអំពី B-Tree ចាប់តាំងពីវាត្រូវបានគេប្រើយ៉ាងទូលំទូលាយជាមួយសំណុំទិន្នន័យធំ ៗ
    - [Self-balancing binary search tree](https://en.wikipedia.org/wiki/Self-balancing_binary_search_tree)

    - **AVL trees**
        - ក្នុងការអនុវត្ត ៖
            តាមអ្វីដែលខ្ញុំអាចប្រាប់បាន អ្វីៗទាំងនេះមិនត្រូវបានគេប្រើច្រើនទេនៅក្នុងការអនុវត្តប៉ុន្តែខ្ញុំអាចមើលឃើញកន្លែងដែលពួកគេប្រីវា៖
             AVL Tree គឺជារចនាសម្ព័នមួយផ្សេងទៀតដែលគាំទ្រដល់ការស្វែងរក (បញ្ចូល n) ការបញ្ចូល និង ការដកយកចេញ។ វាកាន់តែម៉ឺងម៉ាត់
             មានតុល្យភាពជាងដើមឈើខ្មៅក្រហម (red-black tree) ដែលមានការបញ្ចូលយឺត និង ដកចេញយឺត ប៉ុន្តែការទាញមកវិញលឿនជាងមុន។ នេះធ្វើឱ្យវា
             មានភាពទាក់ទាញសម្រាប់រចនាសម្ព័ន្ធទិន្នន័យដែលអាចត្រូវបានសាងសង់ម្តងហើយផ្ទុកដោយមិនមានការកសាងឡើងវិញដូចជាភាសា
             វចនានុក្រម (ឬវចនានុក្រមកម្មវិធីដូចជា opcodes របស់ assembler ឬ interpreter)
         
        - [MIT AVL Trees / AVL Sort (វីដេអូ)](https://www.youtube.com/watch?v=FNeL18KsWPc&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=6)
        - [AVL Trees (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/Qq5E0/avl-trees)
        - [AVL Tree Implementation (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/PKEBC/avl-tree-implementation)
        - [Split And Merge](https://www.coursera.org/learn/data-structures/lecture/22BgE/split-and-merge)

    - **Splay trees**
        - ក្នុងការអនុវត្ត ៖
            Splay trees ត្រូវបានប្រើជាធម្មតាក្នុងការអនុវត្ត caches, memory allocators, routers, garbage collectors,
            data compression, ropes (ការជំនួស string ដែលប្រើសម្រាប់ long text strings), ក្នុង Windows NT (ក្នុង virtual memory,
            networking និង file system code) ជាដេីម
        - [CS 61B: Splay Trees (វីដេអូ)](https://archive.org/details/ucberkeley_webcast_G5QIXywcJlY)
        - MIT Lecture: Splay Trees:
            - វាមានគណិតច្រេីន តែអាចមេីល១០ នាទីចុងក្រោយបាន
            - [វីដេអូ](https://www.youtube.com/watch?v=QnPl_Y6EqMo)

    - **Red/black trees**
        - នេះជាការពិពណ៌នាអំពីដេីមឈេី 2-3 (មើលខាងក្រោម).
        - ក្នុងការអនុវត្ត ៖
            Red–black trees ផ្តល់ជូនការធានាករណីអាក្រក់បំផុតសម្រាប់ពេលវេលាបញ្ចូល ពេលវេលាលុប និង ពេលវេលាស្វែងរក។
            វាមិនត្រឹមតែធ្វើឱ្យពួកគេល្អនៅក្នុងកម្មវិធីដែលត្រូវការពេលវេលាប៉ុណ្ណោះទេ ដូចជាកម្មវិធីជាក់ស្តែង
            ប៉ុន្តែវាធ្វើឱ្យពួកគេប្លុកមានតម្លៃនៅក្នុងរចនាសម្ព័ន្ធទិន្នន័យផ្សេងទៀតដែលផ្តល់នូវការធានាករណីអាក្រក់បំផុត។
            ឧទាហរណ៍រចនាសម្ព័ន្ធទិន្នន័យជាច្រើនដែលត្រូវបានប្រើក្នុងធរណីមាត្រគណនាអាចផ្អែកលើដើមឈើ red–black និង Completely Fair Scheduler ដែលប្រើនៅក្នុងខឺណែលលីនុចបច្ចុប្បន្នប្រើដើមឈើred–black ។ 
            នៅក្នុងកំណែ ៨ នៃចាវ៉ា ការប្រមូលHashMapត្រូវបានកែប្រែហើយដើមឈើ Red-Black ត្រូវបានប្រើ ជំនួសឱ្យការប្រើLinkedListដើម្បីផ្ទុកធាតុដូចគ្នាបេះបិទទៅនឹងhashcodes មិនល្អ
        - [Aduni - Algorithms - Lecture 4 (តំណភ្ជាប់លោតទៅចំណុចចាប់ផ្តើម) (វីដេអូ)](https://youtu.be/1W3x0f_RmUo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3871)
        - [Aduni - Algorithms - Lecture 5 (វីដេអូ)](https://www.youtube.com/watch?v=hm2GHwyKF1o&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=5)
        - [Red-Black Tree](https://en.wikipedia.org/wiki/Red%E2%80%93black_tree)
        - [An Introduction To Binary Search And Red Black Tree](https://www.topcoder.com/community/competitive-programming/tutorials/an-introduction-to-binary-search-and-red-black-trees/)

    - **2-3 search trees**
        - ក្នុងការអនុវត្ត ៖
            2-3 trees មានការបញ្ចូលលឿនជាងមុននៅក្នុងការចំណាយនៃការស្វែងរកយឺត (ដោយសារកំពស់ខ្ពស់ជាងបេីប្រៀបទៅ AVL trees).
        - អ្នកអាចនឹងកំរប្រេី 2-3 tree ដោយសារតែការអនុវត្តរបស់វាទាក់ទងនឹងប្រភេទផ្សេងៗគ្នានៃថ្នាំង. ជំនួសវិញយេីងប្រេី Red Black trees.
        - [23-Tree Intuition និង និយមន័យ (វីដេអូ)](https://www.youtube.com/watch?v=C3SsdUqasD4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=2)
        - [Binary View of 23-Tree](https://www.youtube.com/watch?v=iYvBtGKsqSg&index=3&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [2-3 Trees (student recitation) (វីដេអូ)](https://www.youtube.com/watch?v=TOb1tuEZ2X4&index=5&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

    - **2-3-4 Trees (aka 2-4 trees)**
        - ក្នុងការអនុវត្ត៖
            សម្រាប់រាល់ 2-4 tree, វាមាន red–black trees ជាមួយ data elements ដែលមានលំដាប់ដូចគ្នា. ការបញ្ចូលនិងការលុប
             ប្រតិបត្ដិការនៅលើដើមឈើ 2-4 គឺស្មើទៅនឹងត្រឡប់ពណ៌និងការបង្វិលនៅក្នុងដើមឈើខ្មៅក្រហម. នេះធ្វើឱ្យដើមឈើ 2-4 ដើម
             ឧបករណ៍សំខាន់សម្រាប់ការស្វែងយល់ពីតក្កវិជ្ជានៅពីក្រោយដើមឈើក្រហម - ក្រហមហើយនេះជាមូលហេតុដែលអត្ថបទណែនាំជាច្រើននៃក្បួនដោះស្រាយណែនាំ
             ដើមឈើ ២-៤ ដើមមុនដើមឈើក្រហម - ក្រហមទោះបី ** ដើមឈើ ២-៤ ក៏មិនត្រូវបានប្រើក្នុងការអនុវត្តជាក់ស្តែងដែរ ** ។
        - [CS 61B មេរៀនទី 26: Balanced Search Trees (វីដេអូ)](https://archive.org/details/ucberkeley_webcast_zqrqYXkth6Q)
        - [Bottom Up 234-Trees (វីដេអូ)](https://www.youtube.com/watch?v=DQdMYevEyE4&index=4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [Top Down 234-Trees (វីដេអូ)](https://www.youtube.com/watch?v=2679VQ26Fp4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=5)

    - **N-ary (K-ary, M-ary) trees**
        - ចំណាំ: the N ឬ K ជា branching factor (max branches)
        - binary trees គឺជា 2-ary tree មួយ, ដែលមាន branching factor = 2
        - 2-3 trees គឺជា 3-ary
        - [K-Ary Tree](https://en.wikipedia.org/wiki/K-ary_tree)

    - **B-Trees**
        - ការពិត: វាជាអាថ៌កំបាំង, តែ B អាចជា Boeing, Balanced, ឬ Bayer (co-inventor).
        - ក្នុងការអនុវត្ត:
            B-Trees ត្រូវបានប្រើយ៉ាងទូលំទូលាយនៅក្នុង databases. filesystems ទំនើបបំផុតភាគច្រេីនប្រេី B-trees (ឬ Variants). បន្ថែមពីលើ
             ការប្រើប្រាស់របស់វានៅក្នុង databases, B-tree ក៏ត្រូវបានប្រើនៅក្នុង filesystems ដើម្បីអនុញ្ញាតឱ្យចូលទៅកាន់ quick random access ទៅ arbitrary
            block មួយ ក្នុងឯកសារជាក់លាក់មួយ. បញ្ហាមូលដ្ឋានគឺការប្រែក្លាយបណ្តុំឯកសារអាយទៅជាប្លុកឌីស (ឬ ប្រហែលជាអាសយដ្ឋាន cylinder-head-sector)
        - [B-Tree](https://en.wikipedia.org/wiki/B-tree)
        - [B-Tree Datastructure](http://btechsmartclass.com/data_structures/b-trees.html)
        - [សេចក្តីផ្តើមទៅ B-Trees (វីដេអូ)](https://www.youtube.com/watch?v=I22wEC1tTGo&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=6)
        - [និយមន័យ B-Tree និង Insertion (វីដេអូ)](https://www.youtube.com/watch?v=s3bCdZGrgpA&index=7&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [ការលុប B-Tree (វីដេអូ)](https://www.youtube.com/watch?v=svfnVhJOfMc&index=8&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [MIT 6.851 - Memory Hierarchy Models (វីដេអូ)](https://www.youtube.com/watch?v=V3omVLzI0WE&index=7&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf)
                - រៀនពី cache-oblivious B-Trees, data structures
                - ៣៧ នាទីដំបូងគឺបច្ចេកទេសហើយប្រហែលជាអាចរំលងចោល (B is block size, cache line size)


- ### k-D Trees
    - ល្អសម្រាប់ការស្វែងរកចំនួនចំនុចក្នុងចតុកោណកែងឬវត្ថុវិមាត្រខ្ពស់
    - ល្អសំរាប់ k-nearest neighbors
    - [Kd Trees (វីដេអូ)](https://www.youtube.com/watch?v=W94M9D_yXKk)
    - [kNN K-d tree algorithm (វីដេអូ)](https://www.youtube.com/watch?v=Y4ZgLlDfKDg)

- ### Skip lists
    - "These are somewhat of a cult data structure" - Skiena
    - [Randomization: Skip Lists (វីដេអូ)](https://www.youtube.com/watch?v=2g9OSRKJuzM&index=10&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [សម្រាប់ចលនានិងលម្អិតបន្ថែមទៀត](https://en.wikipedia.org/wiki/Skip_list)

- ### Network Flows
    - [Ford-Fulkerson in 5 minutes — Step by step example (វីដេអូ)](https://www.youtube.com/watch?v=Tl90tNtKvxs)
    - [Ford-Fulkerson Algorithm (វីដេអូ)](https://www.youtube.com/watch?v=v1VgJmkEJW0)
    - [Network Flows (វីដេអូ)](https://www.youtube.com/watch?v=2vhN4Ice5jI)

- ### Disjoint Sets & Union Find
    - [UCB 61B - Disjoint Sets; Sorting & selection (វីដេអូ)](https://archive.org/details/ucberkeley_webcast_MAEGXTwmUsI)
    - [Sedgewick Algorithms - Union-Find (6 videos)](https://www.coursera.org/learn/algorithms-part1/home/week/1)

- ### Math for Fast Processing
    - [Integer Arithmetic, Karatsuba Multiplication (វីដេអូ)](https://www.youtube.com/watch?v=eCaXlAaN2uE&index=11&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [The Chinese Remainder Theorem (ប្រេីក្នុង cryptography) (វីដេអូ)](https://www.youtube.com/watch?v=ru7mWZJlRQg)

- ### Treap
    - ការរួមបញ្ចូលគ្នានៃ binary search tree និង a heap
    - [Treap](https://en.wikipedia.org/wiki/Treap)
    - [Data Structures: Treaps explained (វីដេអូ)](https://www.youtube.com/watch?v=6podLUYinH8)
    - [Applications in set operations](https://www.cs.cmu.edu/~scandal/papers/treaps-spaa98.pdf)

- ### Linear Programming (វីដេអូ)
    - [Linear Programming](https://www.youtube.com/watch?v=M4K6HYLHREQ)
    - [Finding minimum cost](https://www.youtube.com/watch?v=2ACJ9ewUC6U)
    - [Finding maximum value](https://www.youtube.com/watch?v=8AA_81xI3ik)
    - [Solve Linear Equations with Python - Simplex Algorithm](https://www.youtube.com/watch?v=44pAWI7v5Zk)

- ### Geometry, Convex hull (វីដេអូ)
    - [Graph Alg. IV: Intro to geometric algorithms - មេរៀនទី 9](https://youtu.be/XIAQRlNkJAw?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3164)
    - [Geometric Algorithms: Graham & Jarvis - មេរៀនទី 10](https://www.youtube.com/watch?v=J5aJEcOr6Eo&index=10&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
    - [Divide & Conquer: Convex Hull, Median Finding](https://www.youtube.com/watch?v=EzeYI7p9MjU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=2)

- ### Discrete math
    - សូមមើលវីដេអូខាងក្រោម

- ### Machine Learning
    - ហេតុអ្វី ML?
        - [Google ធ្វេីខ្លួនជាក្រុមហ៊ុន Machine Learning ](https://backchannel.com/how-google-is-remaking-itself-as-a-machine-learning-first-company-ada63defcb70)
        - [Large-Scale Deep Learning for Intelligent Computer Systems (វីដេអូ)](https://www.youtube.com/watch?v=QSaZGT4-6EY)
        - [Deep Learning and Understandability versus Software Engineering and Verification ដោយ Peter Norvig](https://www.youtube.com/watch?v=X769cyzBNVw)
    - [Google's Cloud Machine learning tools (វីដេអូ)](https://www.youtube.com/watch?v=Ja2hxBAwG_0)
    - [Google Developers' Machine Learning Recipes (Scikit Learn & Tensorflow) (វីដេអូ)](https://www.youtube.com/playlist?list=PLOU2XLYxmsIIuiBfYad6rFYQU_jL2ryal)
    - [Tensorflow (វីដេអូ)](https://www.youtube.com/watch?v=oZikw5k_2FM)
    - [Tensorflow Tutorials](https://www.tensorflow.org/versions/r0.11/tutorials/index.html)
    - [Practical Guide to implementing Neural Networks in Python (using Theano)](http://www.analyticsvidhya.com/blog/2016/04/neural-networks-python-theano/)
    - វគ្គសិក្សា:
        - [វគ្គចាប់ផ្តើមដ៏អស្ចារ្យ: Machine Learning](https://www.coursera.org/learn/machine-learning)
              - [វីដេអូ](https://www.youtube.com/playlist?list=PLZ9qNFMHZ-A4rycgrgOYma6zxF4BZGGPW)
              - មេីលវីដេអូ 12-18 សំរាប់ linear algebra (14 និង 15 ដូចគ្នា)
        - [Neural Networks for Machine Learning](https://www.coursera.org/learn/neural-networks)
        - [Google's Deep Learning Nanodegree](https://www.udacity.com/course/deep-learning--ud730)
        - [Google/Kaggle Machine Learning Engineer Nanodegree](https://www.udacity.com/course/machine-learning-engineer-nanodegree-by-google--nd009)
        - [Self-Driving Car Engineer Nanodegree](https://www.udacity.com/drive)
        - [Metis Online Course ($99 សំរាប់ 2 ខែ)](http://www.thisismetis.com/explore-data-science)
    - ធនធាន:
        - សៀវភៅ:
            - [Python Machine Learning](https://www.amazon.com/Python-Machine-Learning-Sebastian-Raschka/dp/1783555130/)
            - [Data Science from Scratch: First Principles with Python](https://www.amazon.com/Data-Science-Scratch-Principles-Python/dp/149190142X)
            - [Introduction to Machine Learning with Python](https://www.amazon.com/Introduction-Machine-Learning-Python-Scientists/dp/1449369413/)
        - [Machine Learning សម្រាប់វិស្វករ Software](https://github.com/ZuzooVn/machine-learning-for-software-engineers)
        - Data School: http://www.dataschool.io/

---

## Additional Detail on Some Subjects
## ពត៌មានលំអិតបន្ថែមលើមុខវិជ្ជាមួយចំនួន

    ខ្ញុំបានបន្ថែមគំនិតទាំងនេះដើម្បីពង្រឹងគំនិតមួយចំនួនដែលបានបង្ហាញខាងលើប៉ុន្តែខ្ញុំមិនចង់បញ្ចូលវាខាងលើព្រោះវាច្រើនពេក។ វាងាយស្រួលក្នុងការធ្វើឱ្យវាហួសប្រមាណលើប្រធានបទ។
    អ្នកចង់ទទួលបានការងារនៅសតវត្សនេះមែនទេ? 
    
- **SOLID**   
    - [ ] [Bob Martin SOLID Principles of Object Oriented and Agile Design (វីដេអូ)](https://www.youtube.com/watch?v=TMuno5RZNeE)
    - [ ] S - [Single Responsibility Principle](http://www.oodesign.com/single-responsibility-principle.html) | [Single responsibility to each Object](http://www.javacodegeeks.com/2011/11/solid-single-responsibility-principle.html)
        - [ប្រភេទផ្សេងទៀត](https://docs.google.com/open?id=0ByOwmqah_nuGNHEtcU5OekdDMkk)
    - [ ] O - [Open/Closed Principal](http://www.oodesign.com/open-close-principle.html)  | [On production level Objects are ready for extension but not for modification](https://en.wikipedia.org/wiki/Open/closed_principle)
        - [ប្រភេទផ្សេងទៀត](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgN2M5MTkwM2EtNWFkZC00ZTI3LWFjZTUtNTFhZGZiYmUzODc1&hl=en)
    - [ ] L - [Liskov Substitution Principal](http://www.oodesign.com/liskov-s-substitution-principle.html) | [Base Class and Derived class follow ‘IS A’ principal](http://stackoverflow.com/questions/56860/what-is-the-liskov-substitution-principle)
        - [ប្រភេទផ្សេងទៀត](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgNzAzZjA5ZmItNjU3NS00MzQ5LTkwYjMtMDJhNDU5ZTM0MTlh&hl=en)
    - [ ] I - [Interface segregation principle](http://www.oodesign.com/interface-segregation-principle.html) | clients should not be forced to implement interfaces they don't use
        - [គោលការណ៍នៃ Interface Segregation ក្នុងរយៈពេល 5 នាទី (វីដេអូ)](https://www.youtube.com/watch?v=3CtAfl7aXAQ)
        - [ប្រភេទផ្សេងទៀត](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgOTViYjJhYzMtMzYxMC00MzFjLWJjMzYtOGJiMDc5N2JkYmJi&hl=en)
    - [ ] D -[Dependency Inversion principle](http://www.oodesign.com/dependency-inversion-principle.html) | Reduce the dependency In composition of objects.
        - [ហេតុអ្វីបានជា The Dependency Inversion Principle និងហេតុអ្វីវាសំខាន់](http://stackoverflow.com/questions/62539/what-is-the-dependency-inversion-principle-and-why-is-it-important)
        - [ប្រភេទផ្សេងទៀត](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgMjdlMWIzNGUtZTQ0NC00ZjQ5LTkwYzQtZjRhMDRlNTQ3ZGMz&hl=en)

- **Union-Find**
    - [Overview](https://www.coursera.org/learn/data-structures/lecture/JssSY/overview)
    - [Naive Implementation](https://www.coursera.org/learn/data-structures/lecture/EM5D0/naive-implementations)
    - [Trees](https://www.coursera.org/learn/data-structures/lecture/Mxu0w/trees)
    - [Union By Rank](https://www.coursera.org/learn/data-structures/lecture/qb4c2/union-by-rank)
    - [Path Compression](https://www.coursera.org/learn/data-structures/lecture/Q9CVI/path-compression)
    - [Analysis Options](https://www.coursera.org/learn/data-structures/lecture/GQQLN/analysis-optional)

- **More Dynamic Programming** (វីដេអូ)
    - [6.006: Dynamic Programming I: Fibonacci, Shortest Paths](https://www.youtube.com/watch?v=OQ5jsbhAv_M&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=19)
    - [6.006: Dynamic Programming II: Text Justification, Blackjack](https://www.youtube.com/watch?v=ENyox7kNKeY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=20)
    - [6.006: DP III: Parenthesization, Edit Distance, Knapsack](https://www.youtube.com/watch?v=ocZMDMZwhCY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=21)
    - [6.006: DP IV: Guitar Fingering, Tetris, Super Mario Bros.](https://www.youtube.com/watch?v=tp4_UXaVyx8&index=22&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [6.046: Dynamic Programming & Advanced DP](https://www.youtube.com/watch?v=Tw1k46ywN6E&index=14&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [6.046: Dynamic Programming: All-Pairs Shortest Paths](https://www.youtube.com/watch?v=NzgFUwOaoIw&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=15)
    - [6.046: Dynamic Programming (student recitation)](https://www.youtube.com/watch?v=krZI60lKPek&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=12)

- **Advanced Graph Processing** (វីដេអូ)
    - [Synchronous Distributed Algorithms: Symmetry-Breaking. Shortest-Paths Spanning Trees](https://www.youtube.com/watch?v=mUBmcbbJNf4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=27)
    - [Asynchronous Distributed Algorithms: Shortest-Paths Spanning Trees](https://www.youtube.com/watch?v=kQ-UQAzcnzA&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=28)

- MIT **Probability** ប្រូបាប (គណិតវិទ្យា បងៀនយឹតល្អ) (វីដេអូ):
    - [MIT 6.042J - Probability Introduction](https://www.youtube.com/watch?v=SmFwFdESMHI&index=18&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Conditional Probability](https://www.youtube.com/watch?v=E6FbvM-FGZ8&index=19&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Independence](https://www.youtube.com/watch?v=l1BCv3qqW4A&index=20&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Random Variables](https://www.youtube.com/watch?v=MOfhhFaQdjw&list=PLB7540DEDD482705B&index=21)
    - [MIT 6.042J - Expectation I](https://www.youtube.com/watch?v=gGlMSe7uEkA&index=22&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Expectation II](https://www.youtube.com/watch?v=oI9fMUqgfxY&index=23&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Large Deviations](https://www.youtube.com/watch?v=q4mwO2qS2z4&index=24&list=PLB7540DEDD482705B)
    - [MIT 6.042J - Random Walks](https://www.youtube.com/watch?v=56iFMY8QW2k&list=PLB7540DEDD482705B&index=25)

- [Simonson: Approximation Algorithms (video)](https://www.youtube.com/watch?v=oDniZCmNmNw&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=19)

- **String Matching**
    - Rabin-Karp (វីដេអូ):
        - [Rabin Karps Algorithm](https://www.coursera.org/learn/data-structures/lecture/c0Qkw/rabin-karps-algorithm)
        - [Precomputing](https://www.coursera.org/learn/data-structures/lecture/nYrc8/optimization-precomputation)
        - [Optimization: Implementation and Analysis](https://www.coursera.org/learn/data-structures/lecture/h4ZLc/optimization-implementation-and-analysis)
        - [Table Doubling, Karp-Rabin](https://www.youtube.com/watch?v=BRO7mVIFt08&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=9)
        - [Rolling Hashes, Amortized Analysis](https://www.youtube.com/watch?v=w6nuXg0BISo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=32)
    - Knuth-Morris-Pratt (KMP):
        - [TThe Knuth-Morris-Pratt (KMP) String Matching Algorithm](https://www.youtube.com/watch?v=5i7oKodCRJo)
    - Boyer–Moore string search algorithm
        - [Boyer-Moore String Search Algorithm](https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_string_search_algorithm)
        - [Advanced String Searching Boyer-Moore-Horspool Algorithms (វីដេអូ)](https://www.youtube.com/watch?v=QDZpzctPf10)
    - [Coursera: Algorithms អំពី Strings](https://www.coursera.org/learn/algorithms-on-strings/home/week/1)
        - ចាប់ផ្តើមល្អ ប៉ុន្តែដល់ពេលហួស KMP វាកាន់តែស្មុគស្មាញ
        - ការពន្យល់ដ៏ល្អនៃការព្យាយាម
        - អាចរំលងបាន

- **Sorting**

    - Stanford lectures on sorting:
        - [មេរៀនទី 15 | Programming Abstractions (វីដេអូ)](https://www.youtube.com/watch?v=ENp00xylP7c&index=15&list=PLFE6E58F856038C69)
        - [មេរៀនទី 16 | Programming Abstractions (វីដេអូ)](https://www.youtube.com/watch?v=y4M9IVgrVKo&index=16&list=PLFE6E58F856038C69)
    - Shai Simonson, [Aduni.org](http://www.aduni.org/):
        - [Algorithms - Sorting - មេរៀនទី 2 (វីដេអូ)](https://www.youtube.com/watch?v=odNJmw5TOEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=2)
        - [Algorithms - Sorting II - មេរៀនទី 3 (វីដេអូ)](https://www.youtube.com/watch?v=hj8YKFTFKEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=3)
    - ការបង្រៀនរបស់ Steven Skiena អំពី sorting:
        - [មេរៀនចាប់ផ្តេីមពី 26:46 (វីដេអូ)](https://youtu.be/ute-pmMkyuk?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1600)
        - [មេរៀនចាប់ផ្តេីមពី 27:40 (វីដេអូ)](https://www.youtube.com/watch?v=yLvp-pB8mak&index=8&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [មេរៀនចាប់ផ្តេីមពី 35:00 (វីដេអូ)](https://www.youtube.com/watch?v=q7K9otnzlfE&index=9&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [មេរៀនចាប់ផ្តេីមពី 23:50 (វីដេអូ)](https://www.youtube.com/watch?v=TvqIGu9Iupw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=10)

## Video Series
## ស៊េរីវីដេអូ

រីករាយជាមួយវិដេអូរខាងក្រោម

- [List of individual Dynamic Programming problems (each is short)](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)

- [x86 Architecture, Assembly, Applications (11 វីដេអូ)](https://www.youtube.com/playlist?list=PL038BE01D3BAEFDB0)

- [MIT 18.06 Linear Algebra, Spring 2005 (35 វីដេអូ)](https://www.youtube.com/playlist?list=PLE7DDD91010BC51F8)

- [Excellent - MIT Calculus Revisited: Single Variable Calculus](https://www.youtube.com/playlist?list=PL3B08AE665AB9002A)

- [Computer Science 70, 001 - Spring 2015 - Discrete Mathematics and Probability Theory](http://www.infocobuild.com/education/audio-video-courses/computer-science/cs70-spring2015-berkeley.html)

- [Discrete Mathematics ដោយ Shai Simonson (19 វីដេអូ)](https://www.youtube.com/playlist?list=PL3o9D4Dl2FJ9q0_gtFXPh_H4POI5dK0yG)

- [Discrete Mathematics Part 1 by Sarada Herke (5 វីដេអូ)](https://www.youtube.com/playlist?list=PLGxuz-nmYlQPOc4w1Kp2MZrdqOOm4Jxeo)

- CSE373 - Analysis of Algorithms (25 វីដេអូ)
    - [ការបង្រៀនរបស់ Skiena ពី Algorithm Design Manual](https://www.youtube.com/watch?v=ZFjhkohHdAA&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=1)

- [UC Berkeley 61B (Spring 2014): Data Structures (25 វីដេអូ)](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd)

- [UC Berkeley 61B (Fall 2006): Data Structures (39 វីដេអូ)](https://archive.org/details/ucberkeley-webcast-PL4BBB74C7D2A1049C)

- [UC Berkeley 61C: Machine Structures (26 វីដេអូ)](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iCl2-D-FS5mk0jFF6cYSJs_)

- [OOSE: Software Dev Using UML and Java (21 វីដេអូ)](https://www.youtube.com/playlist?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)

- ~~[UC Berkeley CS 152: Computer Architecture and Engineering (20 videos)](https://www.youtube.com/watch?v=UH0QYvtP7Rk&index=20&list=PLkFD6_40KJIwEiwQx1dACXwh-2Fuo32qr)~~

- [MIT 6.004: Computation Structures (49 វីដេអូ)](https://www.youtube.com/playlist?list=PLDSlqjcPpoL64CJdF0Qee5oWqGS6we_Yu)

- [Carnegie Mellon - Computer Architecture Lectures (39 វីដេអូ)](https://www.youtube.com/playlist?list=PL5PHm2jkkXmi5CxxI7b3JCL1TWybTDtKq)

- [MIT 6.006: Intro to Algorithms (47 វីដេអូ)](https://www.youtube.com/watch?v=HtSuA80QTyo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&nohtml5=False)

- [MIT 6.033: Computer System Engineering (22 វីដេអូ)](https://www.youtube.com/watch?v=zm2VP0kHl1M&list=PL6535748F59DCA484)

- [MIT 6.034 Artificial Intelligence, Fall 2010 (30 វីដេអូ)](https://www.youtube.com/playlist?list=PLUl4u3cNGP63gFHB6xb-kVBiQHYe_4hSi)

- [MIT 6.042J: Mathematics for Computer Science, Fall 2010 (25 វីដេអូ)](https://www.youtube.com/watch?v=L3LMbpZIKhQ&list=PLB7540DEDD482705B)

- [MIT 6.046: Design and Analysis of Algorithms (34 វីដេអូ)](https://www.youtube.com/watch?v=2P-yW7LQr08&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

- [MIT 6.050J: Information and Entropy, Spring 2008 (19 វីដេអូ)](https://www.youtube.com/watch?v=phxsQrZQupo&list=PL_2Bwul6T-A7OldmhGODImZL8KEVE38X7)

- [MIT 6.851: Advanced Data Structures (22 វីដេអូ)](https://www.youtube.com/watch?v=T0yzrZL1py0&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=1)

- [MIT 6.854: Advanced Algorithms, Spring 2016 (24 វីដេអូ)](https://www.youtube.com/playlist?list=PL6ogFv-ieghdoGKGg2Bik3Gl1glBTEu8c)

- [Harvard COMPSCI 224: Advanced Algorithms (25 វីដេអូ)](https://www.youtube.com/playlist?list=PL2SOU6wwxB0uP4rJgf5ayhHWgw7akUWSf)

- [MIT 6.858 Computer Systems Security, Fall 2014](https://www.youtube.com/watch?v=GqmQg-cszw4&index=1&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)

- [Stanford: Programming Paradigms (27 វីដេអូ)](https://www.youtube.com/view_play_list?p=9D558D49CA734A02)

- [Introduction to Cryptography by Christof Paar](https://www.youtube.com/playlist?list=PL6N5qY2nvvJE8X75VkXglSrVhLv1tVcfy)
    - [Course Website along with Slides and Problem Sets](http://www.crypto-textbook.com/)

- [Mining Massive Datasets - Stanford University (94 វីដេអូ)](https://www.youtube.com/playlist?list=PLLssT5z_DsK9JDLcT8T62VtzwyW9LNepV)

- [Graph Theory by Sarada Herke (67 វីដេអូ)](https://www.youtube.com/user/DrSaradaHerke/playlists?shelf_id=5&view=50&sort=dd)

## Computer Science Courses
## វគ្គសិក្សាវិទ្យាសាស្ត្រកុំព្យូទ័រ

- [Directory of Online CS Courses](https://github.com/open-source-society/computer-science)
- [Directory of CS Courses (ភាគច្រើនជាមួយការបង្រៀនតាមអ៊ិនធរណេត)](https://github.com/prakhar1989/awesome-courses)

## Papers
## អត្ថបទ

- [Love classic papers?](https://www.cs.cmu.edu/~crary/819-f09/)
- [1978: Communicating Sequential Processes](http://spinroot.com/courses/summer/Papers/hoare_1978.pdf)
    - [implemented in Go](https://godoc.org/github.com/thomas11/csp)
- [2003: The Google File System](http://static.googleusercontent.com/media/research.google.com/en//archive/gfs-sosp2003.pdf)
    - ជំនួសដោយ Colossus ក្នុងឆ្នាំ 2012
- [2004: MapReduce: Simplified Data Processing on Large Clusters]( http://static.googleusercontent.com/media/research.google.com/en//archive/mapreduce-osdi04.pdf)
    - ជំនួសដោយ Cloud Dataflow?
- [2006: Bigtable: A Distributed Storage System for Structured Data](https://static.googleusercontent.com/media/research.google.com/en//archive/bigtable-osdi06.pdf)
    - [An Inside Look at Google BigQuery](https://cloud.google.com/files/BigQueryTechnicalWP.pdf)
- [2006: The Chubby Lock Service for Loosely-Coupled Distributed Systems](https://research.google.com/archive/chubby-osdi06.pdf)
- [2007: Dynamo: Amazon’s Highly Available Key-value Store](http://s3.amazonaws.com/AllThingsDistributed/sosp/amazon-dynamo-sosp2007.pdf)
    - អត្ថបទ Dynamo ចាប់ផ្តេីមអោយមាន NoSQL 
- [2007: What Every Programmer Should Know About Memory (very long, and the author encourages skipping of some sections)](https://www.akkadia.org/drepper/cpumemory.pdf)
- [2010: Dapper, a Large-Scale Distributed Systems Tracing Infrastructure](https://research.google.com/pubs/archive/36356.pdf)
- [2010: Dremel: Interactive Analysis of Web-Scale Datasets](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/36632.pdf)
- [2012: Google's Colossus](https://www.wired.com/2012/07/google-colossus/)
    - មិនមាន អត្ថបទ
- 2012: AddressSanitizer: A Fast Address Sanity Checker:
    - [អត្ថបទ](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/37752.pdf)
    - [វីដេអូ](https://www.usenix.org/conference/atc12/technical-sessions/presentation/serebryany)
- 2013: Spanner: Google’s Globally-Distributed Database:
    - [អត្ថបទ](http://static.googleusercontent.com/media/research.google.com/en//archive/spanner-osdi2012.pdf)
    - [វីដេអូ](https://www.usenix.org/node/170855)
- [2014: Machine Learning: The High-Interest Credit Card of Technical Debt](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43146.pdf)
- [2015: Continuous Pipelines at Google](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43790.pdf)
- [2015: High-Availability at Massive Scale: Building Google’s Data Infrastructure for Ads](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44686.pdf)
- [2015: TensorFlow: Large-Scale Machine Learning on Heterogeneous Distributed Systems](http://download.tensorflow.org/paper/whitepaper2015.pdf )
- [2015: How Developers Search for Code: A Case Study](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43835.pdf)
- [2016: Borg, Omega, and Kubernetes](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44843.pdf)


## LICENSE
## សាលាកប័រត

[CC-BY-SA-4.0](./LICENSE.txt)
