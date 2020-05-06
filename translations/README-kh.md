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
