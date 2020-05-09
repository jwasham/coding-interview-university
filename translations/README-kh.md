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

- [] [ABC: តែងតែសរសេរកូដ](https://medium.com/always-be-coding/abc-always-be-coding-d5f8051afce2#.4heg8zvm4)
- [] [ការប្រេីប្រាស់ក្តារខៀន](https://medium.com/@dpup/whiteboarding-4df873dbba2e#.hf6jn45g1)
- [] [ការប្រេីប្រាស់ក្តារខៀនមានប្រសិទ្ធិភាពក្នុងពេលសម្ភាសន៍កម្មវិធី](http://www.coderust.com/blog/2014/04/10/effective-whiteboarding-during-programming-interviews/)
- [] [ជ្រើសរើសបុគ្គលិកជំនាញបច្ចេកវិទ្យា](https://www.youtube.com/watch?v=N233T0epWTs)
- [] វិធីរកការងារនៅក្រុមហ៊ុនធំ ៤៖
    - [] [របៀបរកការងារធ្វើនៅក្រុមហ៊ុនធំ ៤ - Amazon, Facebook, Google និង Microsoft (មានវីដេអូ)](https://www.youtube.com/watch?v=YJZCUhxNCv8)
- [បំបែកការសម្ភាសន៍ការសរសេរកូដ ១៖
    - [] [ហ្គេលឡេអិលម៉ាកឌូវែល (Gayle L McDowell) - បំបែកការសម្ភាសន៍ការសរសេរកូដ (វីដេអូ)](https://www.youtube.com/watch?v=rEJzOhC5ZtQ)
    - [] [បំបែកបទសម្ភាសន៍នៃការសរសេរកូដជាមួយអ្នកនិពន្ធហ្គេលឡាឡាក់មែនម៉ាកម៉ាកឌូវែល (Gayle Laakmann McDowell)  (វីដេអូ)](https://www.youtube.com/watch?v=aClxtDcdpsQ)
- [] បំបែកបទសម្ភាសន៍កូដហ្វេសប៊ុក
    - [] [វិធីសាស្រ្ត](https://www.youtube.com/watch?v=wCl9kvQGHPI)
    - [] [ពន្យល់ពីបញ្ហា](https://www.youtube.com/watch?v=4UWDyJq8jZg)
- [] វគ្គសិក្សាត្រៀម:
    - [] [សំភាសន៍វិស្វករអភិវឌ្ឍន៍កម្មវិធី (មិនបានបង់ប្រាក់)](https://www.udemy.com/software-engineer-interview-unleashed)៖
        - រៀនពីរបៀបដើម្បីត្រៀមខ្លួនសម្រាប់ការសម្ភាសន៍វិស្វករអភិវឌ្ឍន៍កម្មវិធីពីអ្នកសំភាសន៍របស់ហ្គូហ្គោល (Google) ។
    - [] [Python សម្រាប់រចនាសម្ព័ន្ធទិន្នន័យក្បួនដោះស្រាយនិងសំភាសន៍ (វគ្គសិក្សាបង់លុយ)](https://www.udemy.com/python-for-data-structures-algorithms-and-interviews/)៖
        - វគ្គសិក្សាសំភាសន៍ Python ដែលផ្តោតលើរចនាសម្ព័ន្ធទិន្នន័យក្បួនដោះស្រាយ ការសំភាសន៍សាកល្បងនិងច្រើនទៀត។
    - [] [ការណែនាំអំពីរចនាសម្ព័ន្ធទិន្នន័យនិងក្បួនដោះស្រាយដោយប្រើ Python (វគ្គសិក្សាឥតគិតថ្លៃរបស់ Udacity)](https://www.udacity.com/course/data-structures-and-algorithms-in-python--ud513)៖
        - រចនាសម្ព័នធ័រណេតនិងអ័រហ្គ្រែនដោយឥតគិតថ្លៃ។
    - [] [រចនាសម្ព័នទិន្នន័យនិងក្បួនដោះស្រាយ! (Udacity បង់ Nanodegree)](https://www.udacity.com/course/data-structures-and-algorithms-nanodegree--nd256)៖
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

- [] [សំភាសន៍ការសរសេរកម្មវិធីបង្ហាញ: ការសរសេរកូដវិធីរបស់អ្នកតាមរយៈការសំភាសន៍, បោះពុម្ពលើកទី ៤](https://www.amazon.com/Programming-Interviews-Exposed-Through-Interview/dp/111941847X/)
    - ចម្លើយសរសេរ C++ និង Java
    - នេះគឺជាសមដ៏ល្អសម្រាប់ការបំបែកសំភាសន៍កូដ
    - មិនពិបាកពេកទេ បញ្ហាភាគច្រើនប្រហែលជាងាយស្រួលជាងអ្វីដែលអ្នកបានឃើញក្នុងបទសម្ភាសន៍ (ពីអ្វីដែលខ្ញុំបានអាន)
- [] [ការសំភាសន៍ការសរសេរកូដការបោះពុម្ពលើកទី ៦](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - ចម្លើយនសរសេរជា Java
    
---

### If you have tons of extra time:
## ប្រសិនបើអ្នកមានពេលវេលាបន្ថែមច្រេីន

ជ្រើសរើសមួយ:

- [] [ធាតុផ្សំនៃបទសម្ភាសន៍សរសេរកម្មវិធី (កំណែ C ++)](https://www.amazon.com/Elements-Programming-Interviews-Insiders-Guide/dp/1479274836)
- [] [ធាតុផ្សំនៃការសំភាសន៍សរសេរកម្មវិធីក្នុង Python](https://www.amazon.com/Elements-Programming-Interviews-Python-Insiders/dp/1537713949/)
- [] ធាតុនៃការសំភាសន៍សរសេរកម្មវិធី (កំណែ Java)
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

- [] [វិធីដោះស្រាយក្នុង C++, ផ្នែក ១-៤៖ មូលដ្ឋានគ្រឹះរចនាសម្ព័ន្ធទិន្នន័យ (Data Structure) តម្រៀប (Sort) ស្វែងរក (Searching)](https://www.amazon.com/Algorithms-Parts-1-4-Fundamentals-Structure/dp/0201350882/)
- [] [វិធីដោះស្រាយក្នុង C++ ភាគ ៥៖ ក្បួនដោះស្រាយក្រាហ្វិច](https://www.amazon.com/Algorithms-Part-Graph-3rd-Pt-5/dp/0201361183/)

ប្រសិនបើអ្នកមានអនុសាសន៍ល្អប្រសើរសម្រាប់ C++ សូមប្រាប់ខ្ញុំឱ្យដឹង។ រកមើលធនធានទូលំទូលាយ។

---

## Java

- [] [វិធីដោះស្រាយ (Sedgewick និង Wayne)](https://www.amazon.com/Algorithms-4th-Robert-Sedgewick/dp/032157351X/)
    - វីដេអូដែលមានមាតិកាសៀវភៅ (និង Sedgewick!) លើវគ្គសិក្សា៖
        - [ក្បួនដោះស្រាយ I](https://www.coursera.org/learn/algorithms-part1)
        - [ក្បួនដោះស្រាយទី ២](https://www.coursera.org/learn/algorithms-part2)

រឺ៖

- [] [រចនាសម្ព័ន្ធទិន្នន័យ (Data Structure) និងក្បួនដោះស្រាយ Java](https://www.amazon.com/Data-Structures-Algorithms-Michael-Goodrich/dp/1118771338/)
    - ដោយហ្គ្រីដល (Goodrich), តាតសាសៀ (Tamassia), ហ្គោវីស (Goldwasser)
    - អត្ថបទសម្រាប់វគ្គសិក្សាសំរាប់ថ្នាក់ដំបូងរបស់វិទ្យាសាស្ត្រកុំព្យូទ័រនៅឯ UC Berkeley
    - សូមមើលរបាយការណ៍សៀវភៅរបស់ខ្ញុំស្តីពីកំណែ Python ខាងក្រោម។ សៀវភៅនេះមានប្រធានបទដូចគ្នា។

---

## Python
- [] [រចនាសម្ព័ន្ធទិន្នន័យ (Data Structure) និងក្បួនដោះស្រាយ (Algorithm) ក្នុង Python](https://www.amazon.com/Structures-Algorithms-Python-Michael-Goodrich/dp/1118290275/)
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

- [] **រៀន C**
    - C គឺនៅគ្រប់ទីកន្លែង។ អ្នកនឹងឃើញឧទាហរណ៍នៅក្នុងសៀវភៅការបង្រៀនវីដេអូ *នៅគ្រប់ទីកន្លែង* ពេលអ្នកកំពុងសិក្សា។
    
    - [] [ភាសាសរសេរកម្មវិធី C, ភាគ ២](https://www.amazon.com/Programming-Language-Brian-W-Kernighan/dp/0131103628)
        
        - នេះគឺជាសៀវភៅខ្លីមួយប៉ុន្តែវានឹងផ្តល់ឱ្យអ្នកនូវភាសា C យ៉ាងល្អហើយប្រសិនបើអ្នកអនុវត្តវាបន្តិច អ្នកនឹងឆាប់ស្ទាត់ជំនាញ។ ការយល់ដឹង C ជួយអ្នកឱ្យយល់ពីរបៀបដែលកម្មវិធីនិងការចងចាំដំណើរការ។
        
        - [ចម្លើយចំពោះសំណួរ](https://github.com/lekkas/c-algorithms)

- [] **របៀបដែលកុំព្យូទ័រដំណើរការកម្មវិធី:**
    - [] [តើស៊ីភីយូប្រតិបត្តិកម្មវិធីមួយយ៉ាងដូចម្តេច? (វីដេអូ)](https://www.youtube.com/watch?v=XM4lGflQFvA)
    - [] [របៀបគណនាកុំព្យូទ័រ - ALU (វីដេអូ)](https://youtu.be/1I5ZMmrOfnA)
    - [] [ចុះបញ្ជី (Registers) និង រ៉េម (RAM) (វីដេអូ)](https://youtu.be/fpnE6UAfbtU)
    - [] [អង្គភាពកែច្នៃកណ្តាល (ស៊ីភីយូ) (The Central Processing Unit) (វីដេអូ)](https://youtu.be/FZGugFqdr60)
    - [] [សេចក្តីណែនាំនិងកម្មវិធី (វីដេអូ)](https://youtu.be/zltgXvg6r3k)

---

### Algorithmic complexity / Big-O / Asymptotic analysis
## ភាពស្មុគស្មាញនៃក្បួនដោះស្រាយ / ការវិភាគ Big-O

- គ្មានអ្វីត្រូវអនុវត្តទេ
- មានវីដេអូជាច្រើននៅទីនេះ។ គ្រាន់តែមើលឱ្យបានគ្រប់គ្រាន់រហូតដល់អ្នកយល់។ អ្នកអាចត្រលប់មកពិនិត្យឡើងវិញជានិច្ច។
- ប្រសិនបើការបង្រៀនមួយចំនួនមានភាពស្រងូតស្រងាត់អ្នកអាចរំលងដល់ក្រោមហើយមើលវីដេអូគណិតវិទ្យាដែលដាច់ពីគ្នាដើម្បីទទួលបានចំណេះដឹងជាមូលដ្ឋាន។
- [] [Harvard CS50 - Asymptotic Notation (វីដេអូ)](https://www.youtube.com/watch?v=iOq5kSKqeR4)
- [] [កំណត់ចំណាំ Big-O (ការបង្រៀនរហ័សទូទៅ) (វីដេអូ)](https://www.youtube.com/watch?v=V6mKVRU1evU)
- [] [Big O Notation (និង Omega និង Theta) - ការពន្យល់គណិតវិទ្យាល្អបំផុត (វីដេអូ)](https://www.youtube.com/watch?v=ei-A_wy5Yxw&index=2&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [] Skiena៖
    - [វីដេអូ](https://www.youtube.com/watch?v=gSyDMtdPNpU&index=2&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ស្លាយ](http://www3.cs.stonybrook.edu/~algorith/video-lectures/2007/lecture2.pdf)
- [] [ការណែនាំមួយចំពោះការវិភាគស្មុគស្មាញនៃគណិតវិទ្យា](http://discrete.gr/complexity/)
- [] [លំដាប់នៃការលូតលាស់ (វីដេអូ)](https://www.coursera.org/lecture/algorithmic-thinking-1/orders-of-growth-6PKkX)
- [] [ការវិភាគអាមីស្តូតូទិក (Amortized) (វីដេអូ)](https://www.coursera.org/lecture/algorithmic-thinking-1/asymptotics-bXAtM)
- [] [UC Berkeley Big O (មានវីដេអូ)](https://archive.org/details/ucberkeley_webcast_VIS4YDpuP98)
- [] [UC Berkeley Big Omega (វីដេអូ)](https://archive.org/details/ucberkeley_webcast_ca3e7UVmeUc)
- [] [ការវិភាគរំលោះ (Amortized) (វីដេអូ)](https://www.youtube.com/watch?v=B3SpQZaAZP4&index=10&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [] [បង្ហាញរូបភាព "Big-O" (វីដេអូ)](https://www.coursera.org/lecture/alacticmic-thinking-1/illustrating-big-o-YVqzv)
- [] TopCoder (រួមបញ្ចូលទាំងទំនាក់ទំនងកើតឡើងវិញនិងទ្រឹស្តីបទមេ)៖
    - [ភាពស្មុគស្មាញនៃការគណនា៖ ផ្នែកទី ១](https://www.topcoder.com/community/competitive-programming/tutorials/computational-complexity-section-1/)
    - [ភាពស្មុគស្មាញនៃការគណនា៖ ផ្នែកទី ២](https://www.topcoder.com/community/competitive-programming/tutorials/computational-complexity-section-2/)
- [] [សន្លឹកជំនួយ](http://bigocheatsheet.com/)

---

### Data Structures
## រចនាសម្ព័ន្ធទិន្នន័យ

- ### Arrays
    - អនុវត្តវ៉ិចទ័រប្តូរទំហំដោយស្វ័យប្រវត្តិ។
    - [] ការពិពណ៌នា៖
        - [Arrays (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/OsBSF/arrays)
        -[UC Berkeley CS61B - អារេ លីនែអ៊ែរ និង ពហុវិមាត្រ (វីដេអូ)](https://archive.org/details/ucberkeley_webcast_Wp8oiO_CZZE) (ចាប់ផ្តើមមើលចាប់ពី ១៥នាទី ៣២វិនាទី)
        - [Arrays មូលដ្ឋាន (វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/02_04-basicArrays.mp4)
        - [ពហុវិមាត្រ (វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/02_05-multidimensionalArrays.mp4)
        - [Arrays ឌីណាមិចេ (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/EwbnV/dynamic-arrays)
        - [Jagged Arrays (វីដេអូ)](https://www.youtube.com/watch?v=1jtrQqYpt7g)
        - [Jagged Arrays (វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/02_06-jaggedArrays.mp4)
        - [ការប្តូរទំហំ Arrays (វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/03_01-resizableArrays.mp4)
    - [] អនុវត្តវ៉ិចទ័រ (បំលែង Arrays ដោយប្តូរទំហំស្វ័យប្រវត្តិ)៖
        - [] អនុវត្តការសរសេរកូដដោយប្រើArrays និង ទ្រនិចចង្អុល និង គណិតទ្រនិចដើម្បីលោតទៅសន្ទស្សន៍មួយ។
        - [] Arrays ទិន្នន័យថ្មីដែលមានអង្គចងចាំបម្រុងទុក
            - អាចបែងចែកArraysនៅក្រោមក្រណាត់ដោយគ្រាន់តែមិនប្រើលក្ខណៈពិសេសរបស់វា
            - ចាប់ផ្តើមជាមួយលេខ ១៦ ឬបើលេខចាប់ផ្តើមធំជាងប្រើថាមពល ២ - ១៦, ៣២, ៦៤, ១២៨
        - [] size() - ចំនួនធាតុ
        - [] capacity() - ចំនួនធាតុដែលវាអាចផ្ទុកបាន
        - [] is_empty()
        - [] at(index) - ត្រឡប់ធាតុនៅទីតាំងដែលបានផ្តល់ឱ្យ បេីទីតាំងនៅក្រៅព្រំដែន វានឹង មានកុំហស
        - [] push(item)
        - [] insert(index, item) - បញ្ចូលធាតុនៅទីតាំង ប្តូរតម្លៃទីតាំង និងធាតុនៅខាងក្រោមទៅខាងស្តាំ
        - [] prepend (item) - អាចប្រើបញ្ចូលខាងលើនៅទីតាំង ០
        - [] pop() - ដកចេញពីចុងបញ្ចប់តម្លៃត្រឡប់មកវិញ
        - [] delete(index) - លុបធាតុនៅទីតាំងដែលអោយ ផ្លាស់ប្តូរធាតុនៅពីក្រោយទាំងអស់
        - [] remove(item) - រកមើលតម្លៃនិងយកទីតាំងចេញដែលផ្ទុកវាចេញ (ទោះបីជានៅកន្លែងច្រើនក៏ដោយ)
        - [] find(item) - រកមើលតម្លៃហើយត្រឡប់វិញនៅទីតាំងដំបូងជាមួយតម្លៃនោះ បើរកមិនឃើញត្រលប់វិញ -1
        - [] resize(new_capacity) // មុខងារឯកជន
            - ពេលទំហំ Array ដល់កំណត់, ផ្លាស់ប្តូរទំហំទ្វេដងទំហំ
            - នៅពេលដែលចាប់យកវត្ថុមួយ ប្រសិនបើទំហំគឺ 1/4 នៃទំហំសរុប, ផ្លាស់ប្តូរទំហំដល់ពាក់កណ្តាល
    - [] ពេលវេលា
        - O(១) ត្រូវបន្ថែម / ដកចេញនៅចុងបញ្ចប់ (សងវិញសម្រាប់ការបែងចែកសម្រាប់ទំហំបន្ថែម) ទីតាំង
        - O(n) ដើម្បីបញ្ចូល / ដកចេញនៅកន្លែងផ្សេងទៀត
    - [] លំហ
        - ជាប់ទាក់ទងនឹងការចងចាំដូច្នេះភាពជិតស្និទ្ធជួយដល់ការអនុវត្ត
        - ទំហំត្រូវការ = (ទំហំ Array, ដែល >= n) * ទំហំនៃធាតុ, ប៉ុន្តែបើទោះបីជា 2n, នៅតែ O (n)

---

- ### Linked Lists
    - [] ការពិពណ៌នា៖
        - [] [Singly Linked Lists (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/kHhgK/singly-linked-lists)
        - [] [CS 61B - Linked Lists ១ (វីដេអូ)](https://archive.org/details/ucberkeley_webcast_htzJdKoEmO0)
        - [] [CS 61B - Linked Lists ២ (វីដេអូ)](https://archive.org/details/ucberkeley_webcast_-c4I3gFYe3w)
    - [] [កូដ C (វីដេអូ)](https://www.youtube.com/watch?v=QN6FPiD0Gzo)
        - មិនមែនវីដេអូទាំងមូលទេគឺគ្រាន់តែជាផ្នែកអំពីរចនាសម្ព័ន្ធ (Data Structure) និងការបែងចែក Memory ។
    - [] Linked List vs Arrays:
        - [Core Linked Lists Vs Arrays (វីដេអូ)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/rjBs9/core-linked-lists-vs-arrays)
        - [នៅក្នុងពិភពពិត Linked Lists Vs Arrays (វីដេអូ)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/QUaUd/in-the-real-world-lists-vs-arrays)
    - [] [ហេតុអ្វីអ្នកគួរចៀសវាង linked lists (វីដេអូ)](https://www.youtube.com/watch?v=YQs6IC-vgmo)
    - [] Gotcha: you need pointer to pointer knowledge:
        (សម្រាប់ពេលអ្នកហុច pointer ទៅមុខងារមួយដែលអាចផ្លាស់ប្តូរអាស័យដ្ឋានដែលព្រួញចង្អុល)
        ទំព័រនេះគ្រាន់តែដើម្បីស្វែងយល់ពី pointer ទៅ pointer ។ ខ្ញុំមិនណែនាំបញ្ជីឈ្មោះបែបត្រាប់តាមនេះទេ។ ភាពងាយស្រួលក្នុងការអាននិងរក្សាបាននូវភាពលំបាកដោយសារតែភាពឆ្លាតវៃ។
        - [Pointer ទៅ pointer](https://www.eskimo.com/~scs/cclass/int/sx8.html)
    - [] អនុវត្ត (ខ្ញុំបានធ្វើដោយប្រើទ្រនិចកន្ទុយនិងដោយគ្មាន)៖
        - [] size() - ត្រឡប់ចំនួនធាតុទិន្នន័យក្នុងបញ្ជី
        - [] empty() - bool ត្រឡប់ពិតបើទទេ
        - [] value_at(index) - ត្រឡប់តម្លៃនៃធាតុទី (ចាប់ផ្តើមពីលេខ ០ ដំបូង)
        - [] push_front(តម្លៃ) - បន្ថែមធាតុនៅខាងមុខបញ្ជី
        - [] pop_front() - យកធាតុខាងមុខចេញហើយប្រគល់តម្លៃរបស់វាមកវិញ
        - [] push_back(តម្លៃ) - បន្ថែមធាតុនៅចុងបញ្ចប់
        - [] pop_back() - យកធាតុបញ្ចប់ហើយត្រឡប់តម្លៃរបស់វា
        - [] front() - ទទួលបានតម្លៃនៃធាតុខាងមុខ
        - [] back() - ទទួលបានតម្លៃនៃធាតុបញ្ចប់
        - [] insert(index, តម្លៃ) - បញ្ចូលតម្លៃនៅindex ដូច្នេះធាតុបច្ចុប្បន្ននៅindexនោះត្រូវបានចង្អុលទៅធាតុថ្មីនៅindex។
        - [] erase(index) - យក Node ចេញនៅ index ដែលបានផ្តល់ឱ្យ
        - [] value_n_from_end(n) - ត្រឡប់តម្លៃ Node ទីពីខាងចុងបញ្ជី
        - [] reverse() - បញ្ច្រាស់បញ្ជី
        - [] remove_value(តម្លៃ) - លុបធាតុដំបូងក្នុងបញ្ជីជាមួយតម្លៃនេះ
    - [] Doubly-linked List
        - [ការពិពណ៌នា (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/jpGKD/doubly-linked-lists)
        - មិនចាំបាច់អនុវត្តទេ

---

- ### Stack
    - [] [Stack (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/UdKzQ/stacks)
    - [] [ការប្រើ Stack ចូលមុនចេញក្រោយ (វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/05_01-usingStacksForLast-inFirst-out.mp4)
    - [] នឹងមិនអនុវត្តទេ។ ការអនុវត្តជាមួយ Array គឺមិនសំខាន់។

- ### Queue
    - [] [ការប្រើ Queue ចូលមុនចេញមុន(វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/05_03-usingQueuesForFirst-inFirst-out.mp4)
    - [] [Queue (វីដេអូ)](https://www.coursera.org/lecture/data-structures/queues-EShpq)
    - [] [Circular buffer/FIFO](https://en.wikipedia.org/wiki/Circular_buffer)
    - [] [Queue អាទិភាព (វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/05_04-priorityQueuesAndDeques.mp4)
    - [] ប្រើ linked-list ដែលមានភ្ជាប់ជាមួយទ្រនិចនៅកន្ទុយ៖
        - enqueue(តម្លៃ) - បន្ថែមតម្លៃនៅទីតាំងនៅកន្ទុយ
        - dequeue() - ត្រឡប់តម្លៃនិងយកធាតុដែលបានបន្ថែមថ្មីៗចេញ (ផ្នែកខាងមុខ)
        - empty()
    - [] អនុវត្តដោយប្រើអារេ Array ទំហំថេរ៖
        - enqueue(តម្លៃ) - បន្ថែមធាតុនៅចុងបញ្ចប់នៃការផ្ទុកដែលមាន
        - dequeue() - ត្រឡប់តម្លៃនិងយកធាតុដែលបានបន្ថែមថ្មីៗចេញ
        - empty()
        - full()
    - [] ថ្លៃ៖
        - ការអនុវត្តមិនល្អដោយប្រើlinked listដែលអ្នករៀបជាជួរនៅនឹងក្បាលនិងដេស្កាយនៅកន្ទុយប្រហែលជា O(n)
            ដោយសារតែអ្នកត្រូវការនៅជាប់នឹងធាតុចុងក្រោយ, បណ្តាលឱ្យ dequeue គ្នាឆ្លងកាត់ពេញលេញ
        - enqueue: O(1) (amortized, linked list and array [probing])
        - dequeue: O(1) (linked list and array)
        - empty: O(1) (linked list and array)

- ### តារាងហាស (Hash table)
    - [] វីដេអូ៖
        - [] [Hashing with Chaining (វីដេអូ)](https://www.youtube.com/watch?v=0M_kIqwbFo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=8)
        - [] [Table Doubling, Karp-Rabin (វីដេអូ)](https://www.youtube.com/watch?v=BRO7mVIFt08&index=9&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [] [Open Addressing, Cryptographic Hashing (វីដេអូ)](https://www.youtube.com/watch?v=rvdJDijO2Ro&index=10&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [] [PyCon 2010: វចនានុក្រមដ៏អស្ចារ្យ (វីដេអូ)](https://www.youtube.com/watch?v=C4Kc8xzcA68)
        - [] [(កម្រិតខ្ពស់) Randomization: Universal & Perfect Hashing (វីដេអូ)](https://www.youtube.com/watch?v=z0lJ2k0sl1g&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=11)
        - [] [(ជឿនលឿន) Perfect hashing (វីដេអូ)](https://www.youtube.com/watch?v=N0COwN14gt0&list=PL2B4EEwhKD-NbwZ4ezj7gyc_3yNrojKM9&index=4)

    - [] វគ្គសិក្សាអនឡាញ៖
        - [] [ស្វែងយល់អំពីមុខងារ Hash (វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/06_02-understandingHashFunctions.mp4)
        - [] [ការប្រើតារាងHash (វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/06_03-usingHashTables.mp4)
        - [] [គាំទ្រ Hash (វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/06_04- ឧបត្ថម្ភគាំទ្រហាន់ឌ្រី)
        - [] [តារាងជំនួយភាសា Hash(វីដេអូ)](https://archive.org/details/0102WhatYouShouldKnow/06_05-languageSupportForHashTables.mp4)
        - [] [Core Hash Tables (វីដេអូ)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/m7UuP/core-hash-tables)
        - [] [រចនាសម្ព័ន្ធទិន្នន័យ (វីដេអូ)](https://www.coursera.org/learn/data-structures/home/week/4)
        - [] [បញ្ហាសៀវភៅទូរស័ព្ទ (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/NYZZP/phone-book-problem)
        - [តារាងចែកចាយ]
            - [ការផ្ទុកឡើងភ្លាមៗនិងការបង្កើនប្រសិទ្ធភាពផ្ទុកនៅក្នុងប្រអប់ឯកសារ (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/DvaIb/instant-uploads-and-storage-optimization-in-dropbox)
            - [តារាងហាសចែកចាយ (វីដេអូ)](https://www.coursera.org/learn/data-structures/lecture/tvH8H/distributed-hash-tables)

    - [] អនុវត្តជាមួយអារេដោយប្រើការស៊ើបអង្កេតលីនេអ៊ែរ
        - hash(k, m) - m គឺជាទំហំនៃតារាង hash
        - add(key, value) - ប្រសិនបើមានកូនសោររួចហើយ, ធ្វើបច្ចុប្បន្នភាពតម្លៃ
        - exists(key)
        - get(key)
        - remove(key)

---

### More Knowledge
## ចំណេះដឹងបន្ថែម

- ### Binary search
    - [] [Binary search (វីដេអូ)](https://www.youtube.com/watch?v=D5SrAga1pno)
    - [] [Binary search (វីដេអូ)](https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search)
    - [] [លម្អិត](https://www.topcoder.com/community/competitive-programming/tutorials/binary-search/)
    - [] អនុវត្ត៖
        - Binary search (នៅលើជួរអារេនៃចំនួនគត់)
        - Binary search ដោយប្រើការហៅខ្លួនឯង

- ### ប្រតិបតិ្តការ Bitwise
    - [] [សន្លឹកជំនួយ Bits](https://github.com/jwasham/coding-interview-university/blob/master/extras/cheat%20sheets/bits-cheat-sheet.pdf) 
        - អ្នកគួរតែស្គាល់ អំណាច ២ ពី (២ ^ ១ ដល់ ២ ^ ១៦ និង ២ ^ ៣២)
    - [] ទទួលបានការយល់ដឹងដ៏ល្អអំពីការរៀបចំBitsជាមួយ៖ &, |, ^, ~, >>, <<
        - [] [ពាក្យ](https://en.wikipedia.org/wiki/Word_ (computer_architecture))
        - [] ការណែនាំល្អ៖
            ការធ្វើចលនាBits (វីដេអូ)](https://www.youtube.com/watch?v=7jkIUgLC29I)
        - [] [C ការបង្រៀនសរសេរកម្មវិធី ២-១០: ប្រតិបត្តិការ Bitwise (វីដេអូ)](https://www.youtube.com/watch?v=d0AwjSpNXR0)
        - [] [ការរៀបចំBits](https://en.wikipedia.org/wiki/Bit_manipulation)
        - [] [ប្រតិបតិ្តការ Bitwise](https://en.wikipedia.org/wiki/Bitwise_operation)
        - [] [Bithacks](https://graphics.stanford.edu/~seander/bithacks.html)
        - [] [The Bit Twiddler](https://bits.stephan-brumme.com/)
        - [] [The Bit Twiddler Interactive](https://bits.stephan-brumme.com/interactive.html)
        - [] [Bit Hacks (វីដេអូ)](https://www.youtube.com/watch?v=ZusiKXcz_ac)
    - [] 2s និង 1s បំពេញបន្ថែម
        - [Binary: Plusses & Minuses (ហេតុអ្វីយើងប្រើសមពីរ) (វីដេអូ)](https://www.youtube.com/watch?v=lKTsv6iVxV4)
        - [១s បំពេញ](https://en.wikipedia.org/wiki/Ones%27_complement)
        - [២ វិនាទីបំពេញ](https://en.wikipedia.org/wiki/Two%27s_complement)
    - [] រាប់សំណុំ bits
        - [វិធី ៤ យ៉ាងដើម្បីរាប់ប៊ីតជាសាមសិបប៊ីត (វីដេអូ)](https://youtu.be/Hzuzo9NJrlc)
        - [រាប់ប៊ីត](https://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetKernighan)
        - [របៀបរាប់ចំនួនសំណុំប៊ីតក្នុងចំនួនគត់ ៣២ ប៊ីត](http://stackoverflow.com/questions/109023/how-to-count-the-number-of-set-bits-in-a-32-bit- ចំនួនគត់)
    - [] ប្តូរតម្លៃ
        - [ប្តូរ](https://bits.stephan-brumme.com/swap.html)
    - [] តម្លៃដាច់ខាត:
        - [អាំងតេក្រាលពេញលេញ](https://bits.stephan-brumme.com/absInteger.html)
