# Coding Interview University

> Ursprünglich habe ich dies als eine kurze To-do Liste von Studienthemen angefangen, um Softwareingenieur zu werden,
> aber es ist zu der riesigen Liste herangewachsen, die man heute sehen kann. Nachdem ich diesen Lehrplan durchgezogen
> habe, [wurde ich als Software Entwickler bei Amazon eingestellt](https://startupnextdoor.com/ive-been-acquired-by-amazon/?src=ciu)!
> Wahrscheinlich wirst du nicht so viel lernen müssen wie ich. Aber egal, alles was man braucht, findest man hier.
>
> Ich habe ungefähr 8-12 Stunden am Tag gelernt, und das für mehrere Monate. Hier ist meine Geschichte: [Why I studied full-time for 8 months for a Google interview](https://medium.freecodecamp.org/why-i-studied-full-time-for-8-months-for-a-google-interview-cc662ce9bb13)
>
> Die Einträge in dieser Liste werden dich gut auf ein Vorstellungsgespräch bei so gut wie jeder Software Firma vorbereiten,
> so bei den Giganten: Amazon, Facebook, Google oder Microsoft.
>
> *Viel Glück!*

<details>
<summary>Übersetzungen:</summary>

- [中文版本](translations/README-cn.md)
- [Tiếng Việt - Vietnamese](translations/README-vi.md)
- [Español](translations/README-es.md)
- [Português Brasileiro](translations/README-ptbr.md)

</details>

<details>
<summary>Übersetzungen in Bearbeitung:</summary>

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
- [Polish](https://github.com/jwasham/coding-interview-university/issues/122)
- [Urdu](https://github.com/jwasham/coding-interview-university/issues/140)
- [Thai](https://github.com/jwasham/coding-interview-university/issues/156)
- [Greek](https://github.com/jwasham/coding-interview-university/issues/166)
- [Italian](https://github.com/jwasham/coding-interview-university/issues/170)
- [Malayalam](https://github.com/jwasham/coding-interview-university/issues/239)
- [Japanese (日本語)](https://github.com/jwasham/coding-interview-university/issues/257)

</details>

## Worum es geht

Das ist mein mehrmonatiger Lehrplan um sich vom Web Developer (Selbststudium, kein Abschluss in Informatik) zum Softwareingenieur bei einer großen Firma zu entwickeln.

![Coding at the whiteboard - from HBO's Silicon Valley](https://d3j2pkmjtin6ou.cloudfront.net/coding-at-the-whiteboard-silicon-valley.png)

Dies ist gedacht für **neue Softwareingenieure** oder solche die von der Software/Web Entwicklung zum Software 
Engineering wechseln wollen (wobei Informatikkenntnisse benötigt werden). Falls man behauptet mehrere Jahre an Erfahrung
als Softwareingenieur zu haben, erwartet einen ein hartes Vorstellungsgespräch.

Falls du schon mehrere Jahre Erfahrung in der Software/Webentwicklung hast, muss dir klar sein, dass große Software
Unternehmen wie Google, Amazon, Facebook oder Microsoft Software Engineering und Software Entwicklung 
als unterschiedliche Dinge ansehen, und sie setzen Informatikkenntnisse voraus.

Falls du ein Reliability Engineer oder Operations Engineer werden möchtest, solltest du dir besonders die optionale
Liste (Netzwerke, Sicherheit) ansehen.

---

## Inhaltsverzeichnis

- [Worum es geht](#what-is-it)
- [Warum solltest du das hier lesen?](#why-use-it)
- [Wie man dies hier benutzt](#how-to-use-it)
- [Halt dich nicht für dümmer als du bist](#dont-feel-you-arent-smart-enough)
- [Über Videoquellen](#about-video-resources)
- [Ablauf von Vorstellungsgesprächen und allgemeine Vorbereitung darauf](#interview-process--general-interview-prep)
- [Wähle eine Sprache für das Vorstellungsgespräch](#pick-one-language-for-the-interview)
- [Literaturliste](#book-list)
- [Bevor du anfängst](#before-you-get-started)
- [Was hier nicht behandelt wird](#what-you-wont-see-covered)
- [Voraussetzungen](#prerequisite-knowledge)
- [Der Tagesplan](#the-daily-plan)
- [Algorithmische Komplexität / Big-O (Groß-O Notation) / Asymptotische Analyse](#algorithmic-complexity--big-o--asymptotic-analysis)
- [Datenstrukturen](#data-structures)
    - [Arrays (Felder)](#arrays)
    - [Linked Lists (verkettete Listen)](#linked-lists)
    - [Stack (Stapel)](#stack)
    - [Queue (Wartenschlangen)](#queue)
    - [Hash table (Hashtabelle)](#hash-table)
- [Mehr](#more-knowledge)
    - [Binärsuche](#binary-search)
    - [Bitweise Operationen](#bitwise-operations)
- [Trees (Bäume)](#trees)
    - [Trees - Notizen und Hintergrund](#trees---notes--background)
    - [Binärer Suchbaum](#binary-search-trees-bsts)
    - [Heap / Vorrangwarteschlange / Binärer Heap](#heap--priority-queue--binary-heap)
    - balancierte Suchbäume (allgemeines Konzept, keine Details)
    - Traversierung: preorder, inorder, postorder, Breitensuche, Tiefensuche
- [Sortierung](#sorting)
    - Auswahl
    - Insertion Sort
    - Heap Sort
    - Quick Sort
    - Merge Sort
- [Graphen](#graphs)
    - gerichtet
    - ungerichtet
    - Adjazenzmatrix
    - Adjazenzliste
    - Traversierung: Breitensuche, Tiefensuche
- [Noch mehr](#even-more-knowledge)
    - [Rekursion](#recursion)
    - [Dynamische Programmierung](#dynamic-programming)
    - [Objektorientierte Programmierung](#object-oriented-programming)
    - [Design Patterns (Entwurfsmuster)](#design-patterns)
    - [Kombinatorik (n über k) und Wahrscheinlichkeiten](#combinatorics-n-choose-k--probability)
    - [NP, NP-Vollständig und Heuristiken](#np-np-complete-and-approximation-algorithms)
    - [Caches](#caches)
    - [Prozesse und Threads](#processes-and-threads)
    - [Testen](#testing)
    - [Scheduling](#scheduling)
    - [Stringsuche und -manipulationen](#string-searching--manipulations)
    - [Tries (Präfixbäume)](#tries)
    - [Fließkommazahlen](#floating-point-numbers)
    - [Unicode](#unicode)
    - [Endianness (Byte-Reihenfolge)](#endianness)
- [Netzwerke](#networking)
- [Systementwurf, Skalierbarkeit, Datenverarbeitung](#system-design-scalability-data-handling) (wenn du 4+ Jahre erfahrung hast)
- [Finaler Rückblick](#final-review)
- [Übungen zu Programmieraufgaben](#coding-question-practice)
- [Programmieraufgaben/Wettbewerbe](#coding-exerciseschallenges)
- [Wenn das Vorstellungsgespräch bald ansteht](#once-youre-closer-to-the-interview)
- [Dein Lebenslauf](#your-resume)
- [Denk dran wenn das Vorstellungsgespräch kommt](#be-thinking-of-for-when-the-interview-comes)
- [Stell Fragen an den Interviewer](#have-questions-for-the-interviewer)
- [Wenn du den Job bekommst](#once-youve-got-the-job)

---------------- Alles unter der Linie ist optional ----------------

<details>
<summary>Zusätzliche Materialien</summary>

- [Zusätzliche Bücher](#additional-books)
- [Zusätzliches Wissen](#additional-learning)
    - [Compiler (Übersetzer)](#compilers)
    - [Emacs und vi(m)](#emacs-and-vim)
    - [Unix Kommandozeilenwerkzeuge](#unix-command-line-tools)
    - [Informationstheorie](#information-theory-videos)
    - [Parität und Hamming Code](#parity--hamming-code-videos)
    - [Entropie](#entropy)
    - [Kryptographie](#cryptography)
    - [Kompression](#compression)
    - [Sicherheit](#computer-security)
    - [Garbage collection (automatische Speicherbereinigung)](#garbage-collection)
    - [Parallelisierung](#parallel-programming)
    - [Messaging, Serialisierung und Queueing Systeme](#messaging-serialization-and-queueing-systems)
    - [A*](#a)
    - [Fast Fourier Transform](#fast-fourier-transform)
    - [Bloom Filter](#bloom-filter)
    - [HyperLogLog](#hyperloglog)
    - [Locality-Sensitive Hashing](#locality-sensitive-hashing)
    - [van Emde Boas Trees](#van-emde-boas-trees)
    - [Augmentierte Datenstrukturen](#augmented-data-structures)
    - [Balanced search trees (Balancierte Suchbäume)](#balanced-search-trees)
        - AVL Bäume
        - Splay Bäume
        - Rot-Schwarz-Bäume
        - 2-3 Bäume
        - 2-3-4 Bäume (aka 2,4 Bäume)
        - N-fache (K-fache, M-fache) Bäume
        - B-Bäume
    - [k-D Bäume](#k-d-trees)
    - [Skip Listen](#skip-lists)
    - [Netzwerkflüsse](#network-flows)
    - [Disjunkte Mengen & Union Find](#disjoint-sets--union-find)
    - [Mathematik für schnelle Berechnungen](#math-for-fast-processing)
    - [Treap](#treap)
    - [Lineare Programmierung](#linear-programming-videos)
    - [Geometrie, Konvexe Hülle](#geometry-convex-hull-videos)
    - [Diskrete Mathematik](#discrete-math)
    - [Machine Learning (maschinelles Lernen)](#machine-learning)
- [Weitere Details zu ausgewählten Themen](#additional-detail-on-some-subjects)
- [Videoreihen](#video-series)
- [Infomatikkurse](#computer-science-courses)
- [Paper (Wissenschaftliche Veröffentlichtungen)](#papers)

</details>

---

## Warum solltest du das hier lesen?

Als ich dieses Projekt angefangen habe, konnte ich einen Stack nicht von einem Heap unterscheiden, wusste nichts von 
Groß-O, nichts über Bäume, oder wie man einen Graphen durchläuft. Wenn ich einen Sortieralgorithmus hätte schreiben sollen,
dann wäre der nicht besonders gut geworden, so viel kann ich dir sagen. Jede Datenstruktur die jemals benutzt habe war 
direkt in der Programmiersprache eingebaut, und ich hatte keine Ahnung wie sie funktioniert haben. Ich muss niemals 
Speichermanagement betreiben, außer einer der Prozesse, die ich ausgeführt hatte hat einen "out of memory" Fehler gehabt. 
Und wenn das passiert ist, musste ich einen Umweg finden. Ich habe ein paar mehrdimensionale Arrays in meinen Leben benutzt
und ein paar Tausend assoziative Arrays, aber ich habe nie selbst eine Datenstruktur von Grund auf neu geschrieben. 

Es ist ein großer Plan. Es könnte mehrere Monate dauern. Falls dir schon vieles von dem bekannt ist, wird es dich viel 
weniger Zeit kosten.

## Wie man dies hier benutzt

<details>
<summary>Wie man dies hier benutzt</summary>

Alles hier drunter ist ein Umriss, und du solltest die Aufgaben von oben nach untern abarbeiten.

Ich benutze GitHub's spezielle Version von Markdown, das beinhält Aufgabenliste, um den Fortschritt zu prüfen.

**Erstelle einen neuen Branch. Damit du Einträge abhaken kannst, füge einfach nur ein x in eckigen Klammern ein: [x]**


    Erstelle einen Fork dieses Projekts und gib die folgenden Kommandos ein

`git checkout -b progress`

`git remote add jwasham https://github.com/jwasham/coding-interview-university`

`git fetch --all`

    Hake alle Kästchen mit x ab, nachdem du die Änderungen vollzogen hast

`git add .`

`git commit -m "Marked x"`

`git rebase jwasham/master`

`git push --force`

[Mehr über die Markdown Version von GitHub](https://guides.github.com/features/mastering-markdown/#GitHub-flavored-markdown)

</details>

## Halt dich nicht für dümmer als du bist
- Erfolgreiche Softwareingenieure sind klug, aber viele sind sich unsicher, ob sie klug genug sind.
- [The myth of the Genius Programmer](https://www.youtube.com/watch?v=0SARbwvhupQ)
- [It's Dangerous to Go Alone: Battling the Invisible Monsters in Tech](https://www.youtube.com/watch?v=1i8ylq4j_EY)
- [Believe you can change](http://www.aaronsw.com/weblog/dweck)
- [Think you're not smart enough to work at Google? Well, think again](https://www.youtube.com/watch?v=uPOJ1PR50ag)

## Über Videoquellen

Auf manche Videos kann man nur zugreifen, indem man sich bei einem Coursera- oder EdX-Kurs einschreibt. Das sind so
genannte MOOCS. Manchmal werden die Kurse gerade nicht angeboten und man muss ein paar Monate warten. Man hat dann
keinen Zugriff darauf.

    Ich würde mich sehr freuen, wenn du mir dabei hilfst kostenlose und immer verfügbare öffentliche Quellen hinzuzufügen,
    wie z.B. YouTube Videos, um die Online Kurse zu ergänzen.
    Ich benutze gerne Vorlesungen von Hochschulen.

## Ablauf von Vorstellungsgesprächen und allgemeine Vorbereitung darauf

<details>
<summary>Ablauf von Vorstellungsgesprächen und allgemeine Vorbereitung darauf</summary>

- [ ] [ABC: Always Be Coding](https://medium.com/always-be-coding/abc-always-be-coding-d5f8051afce2#.4heg8zvm4)
- [ ] [Whiteboarding](https://medium.com/@dpup/whiteboarding-4df873dbba2e#.hf6jn45g1)
- [ ] [Effective Whiteboarding during Programming Interviews](http://www.coderust.com/blog/2014/04/10/effective-whiteboarding-during-programming-interviews/)
- [ ] [Demystifying Tech Recruiting](https://www.youtube.com/watch?v=N233T0epWTs)
- [ ] Cracking The Coding Interview Teil 1:
    - [ ] [Gayle L McDowell - Cracking The Coding Interview (video)](https://www.youtube.com/watch?v=rEJzOhC5ZtQ)
    - [ ] [Cracking the Coding Interview with Author Gayle Laakmann McDowell (video)](https://www.youtube.com/watch?v=aClxtDcdpsQ)
- [ ] Wie man einen Job bei den Großen 4 bekommt:
    - [ ] [How to Get a Job at the Big 4 - Amazon, Facebook, Google & Microsoft (video)](https://www.youtube.com/watch?v=YJZCUhxNCv8)

- [ ] Vorbereitungskurse:
    - [ ] [Software Engineer Interview Unleashed (kostenpflichtiger Kurs)](https://www.udemy.com/software-engineer-interview-unleashed):
        - Hier lernt von einem ehemaligen Google Interviewer wie man sich auf ein Vorstellungsgespräch als Software Engineer vorbereitet.
    - [ ] [Python for Data Structures, Algorithms, and Interviews! (kostenpflichtiger Kurs)](https://www.udemy.com/python-for-data-structures-algorithms-and-interviews/):
        - Ein auf Python zugeschnittener Kurs welcher Datenstrukturen, Algorithmen, Testinterviews und noch viel mehr behandelt.
    - [ ] [Intro to Data Structures and Algorithms using Python! (kostenloser Kurs auf Udacity)](https://www.udacity.com/course/data-structures-and-algorithms-in-python--ud513):
        - Ein kostenloser auf Python zentrierter Kurs über Datenstrukturen und Algorithmen.
    - [ ] [Data Structures and Algorithms Nanodegree! (kostenpflichtiges Nandegree Kurs auf Udacity)](https://www.udacity.com/course/data-structures-and-algorithms-nanodegree--nd256):
        - Hol dir praktische Erfahrungen im Umgang mit über 100 Datenstrukturen und Algorithmen unter der Führung eines engagierten Mentors der dir dabei hilft dich auf Vorstellungsgespräche und Beispiele aus den Berufsleben vorzubereiten.

</details>

## Wähle eine Sprache für das Vorstellungsgespräch

Man sollte eine Sprache wählen mit der man sich wohlfühlt beim Codingteil des Vorstellungsgesprächs.
Aber für große Firmen sind das valide Optionen:

- C++
- Java
- Python

Man könnte auch diese verwenden, aber pass auf. Es könnte einige Vorbehalte geben:

- JavaScript
- Ruby

Hier ist ein Artikel den ich über die Auswahl der Programmiersprache für das Vorstellungsgespräch geschrieben habe: [Pick One Language for the Coding Interview](https://startupnextdoor.com/important-pick-one-language-for-the-coding-interview/)

Du musst dich mit der Sprache wohlfühlen und auskennen.

Hier kannst du mehr über die Wahl lesen:
- http://www.byte-by-byte.com/choose-the-right-language-for-your-coding-interview/
- http://blog.codingforinterviews.com/best-programming-language-jobs/

[Siehe language resources](programming-language-resources.md)

Unten sind ein paar Materialien zu C, C++ und Python zu finden, weil ich das gerade lerne. Es gehören einige Bücher dazu, siehe unten.

## Literaturliste

Die Liste ist kürzer als die, die ich tatsächlich benutzt habe. Ich habe es etwas abgekürzt, um euch Zeit zu sparen.

### Vorbereitung auf das Vorstellungsgespräch

- [ ] [Programming Interviews Exposed: Coding Your Way Through the Interview, 4nd Edition](https://www.amazon.com/Programming-Interviews-Exposed-Through-Interview/dp/111941847X/)
    - Antworten in C++ und Java
    - eine gute Aufwärmübung für Cracking the Coding Interview
    - nicht allzu schwer, die meisten Probleme sind einfacher als das, was ihr in Vorstellungsgesprächen sehen werdet (von dem, was ich so gelesen habe)
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - Antworten in Java

<details>
<summary>Wenn man extrem viel Zeit hat:</summary>

Such dir eins aus:

- [ ] [Elements of Programming Interviews (C++ version)](https://www.amazon.com/Elements-Programming-Interviews-Insiders-Guide/dp/1479274836)
- [ ] Elements of Programming Interviews (Java version)
    - [Buch](https://www.amazon.com/Elements-Programming-Interviews-Java-Insiders/dp/1517435803/)
    - [Companion Project - Method Stub and Test Cases for Every Problem in the Book](https://github.com/gardncl/elements-of-programming-interviews)

</details>

### Rechnerarchitektur

- [ ] [Write Great Code: Volume 1: Understanding the Machine](https://www.amazon.com/Write-Great-Code-Understanding-Machine/dp/1593270038)
    - Das Buch wurde 2004 veröffentlicht und ist etwas veraltet, aber es ist eine hervorragende Quelle, um Computer in Kürze zu verstehen.
    - Der Autor hat [HLA](https://en.wikipedia.org/wiki/High_Level_Assembly) erfunden, also sollte man die Erwähnungen und Beispiele in HLA mit Vorsicht genießen. Nicht weit verbreitet, aber ein nettes Beispiel wie Assembly Code aussehen kann.
    - Diese Kapitel sind es wert zu lesen um euch eine gute Grundlage zu geben:
      <details>
      <summary>......</summary>

        - Kapitel 2 - Numeric Representation
        - Kapitel 3 - Binary Arithmetic and Bit Operations
        - Kapitel 4 - Floating-Point Representation
        - Kapitel 5 - Character Representation
        - Kapitel 6 - Memory Organization and Access
        - Kapitel 7 - Composite Data Types and Memory Objects
        - Kapitel 9 - CPU Architecture
        - Kapitel 10 - Instruction Set Architecture
        - Kapitel 11 - Memory Architecture and Organization

      </details>


### Sprachspezifisch

**Man muss sich für das Vorstellungsgespräch für eine Programmiersprache entschieden haben (siehe oben).**

Hier sind meine Empfehlungen geordnet nach Sprache. Ich habe nicht für alle Sprachen Material. Ich begrüße Ergänzungen.

Wenn du dich durch eins davon durchgelesen hast, solltest du genügende Wissen über Datenstrukturen und Algorithmen haben, um Coding Probleme lösen zu können.
**Man kann alle Videolektionen in diesem Projekt überspringen**, außer du willst eine Auffrischung.

[Zusätzliches sprachspezifisches Material hier.](programming-language-resources.md)

### C++

<details>
<summary>C++</summary>

Ich habe diese beiden zwar nicht gelesen, aber sie sind gut bewertet und von Sedgewick geschrieben. Er ist super.

- [ ] [Algorithms in C++, Parts 1-4: Fundamentals, Data Structure, Sorting, Searching](https://www.amazon.com/Algorithms-Parts-1-4-Fundamentals-Structure/dp/0201350882/)
- [ ] [Algorithms in C++ Part 5: Graph Algorithms](https://www.amazon.com/Algorithms-Part-Graph-3rd-Pt-5/dp/0201361183/)

Wenn du eine bessere Empfehlung für C++ hast, bitte lass es mich wissen. Ich suche nach umfassenden Material.

</details>

### Java

<details>
<summary>Java</summary>

- [ ] [Algorithms (Sedgewick und Wayne)](https://www.amazon.com/Algorithms-4th-Robert-Sedgewick/dp/032157351X/)
    - Videos mit Buchinhalt (und Sedgewick!) auf Coursera:
        - [Algorithms I](https://www.coursera.org/learn/algorithms-part1)
        - [Algorithms II](https://www.coursera.org/learn/algorithms-part2)

ODER:

- [ ] [Data Structures and Algorithms in Java](https://www.amazon.com/Data-Structures-Algorithms-Michael-Goodrich/dp/1118771338/)
    - von Goodrich, Tamassia, Goldwasser
    - wird bei der UC Berkeley als Zusatzmaterial für den Informatik Einstieg benutzt
    - siehe Zusammenfassung zur Python Version, dieses Buch behandelt dieselben Themen.

</details>

### Python

<details>
<summary>Python</summary>

- [ ] [Data Structures and Algorithms in Python](https://www.amazon.com/Structures-Algorithms-Python-Michael-Goodrich/dp/1118290275/)
    - von Goodrich, Tamassia, Goldwasser
    - Ich habe dieses Buch geliebt. Es hat alles behandelt und mehr.
    - Python-hafter Code
    - meine feurige Rezension: https://startupnextdoor.com/book-report-data-structures-and-algorithms-in-python/

</details>


## Bevor du anfängst

Diese Liste ist über mehrere Monate gewachsen. Und ja, sie ist etwas aus dem Ruder gelaufen.

Hier einige Fehler die ich gemacht habe, damit ihr ein besseres Erlebnis haben könnt.

### 1. Du wirst dich nicht an alles erinnern können

Ich habe stundenlang Videos gesehen und reichlich Notizen geschrieben. Monate später gab es viel, an das ich mich nicht mehr erinnern konnte.
Ich habe 3 Tage damit verbracht meine Notizen durchzugehen und daraus Lernkarten zu erstellen, damit ich alles noch mal wiederholen konnte.

Bitte lesen damit ihr nicht meine Fehler wiederholt:

[Retaining Computer Science Knowledge](https://startupnextdoor.com/retaining-computer-science-knowledge/)

### 2. Benutz Lernkarten

Um das Problem zu lösen, habe ich eine kleine Webseite erstellt, wo ich 2 Arten von Lernkarten anlegen kann: Allgemein und Code.
Jede Karte hat ihr eigenes Format.

Ich habe eine mobile-first Webseite gemacht, damit ich auf meinen Smartphone oder Tablet lernen kann, egal wo ich mich befinde.

Erstell kostenlos deine eigenen Lernkarten:

- [Lernkarten-Webseiten Repo](https://github.com/jwasham/computer-science-flash-cards)
- [Meine Lernkarten Databank (alt - 1200 Karten)](https://github.com/jwasham/computer-science-flash-cards/blob/master/cards-jwasham.db):
- [Meine Lernkarten Databank (neu - 1800 Karten)](https://github.com/jwasham/computer-science-flash-cards/blob/master/cards-jwasham-extreme.db):

Achtung, ich habe es übertrieben und Lernkarten über alles erstellt, von Assembly und Python Trivia bis hin zu Machine Learning und Statistik. Das ist viel mehr als eigentlich notwendig.

**Anmerkung zu Lernkarten:** Wenn man sich einmal an eine Antwort erinnert, sollte man das nicht als Wissen ansehen.
Man muss sich die Karte mehrmals ansehen und richtig beantworten, bevor man es tatsächlich weiß. Wiederholung wird das
Wissen tiefer in euren Verstand verankern.

Eine Alternative zu Lernkarten ist [Anki](http://ankisrs.net/), was mir schon öfters empfohlen wurde. 
Es benutzt ein Erinnerungssystem um einen dabei zu helfen sich zu erinnern.
Es ist benutzerfreundlich, auf allen Plattformen erhältlich und kann sich mit der Cloud synchronisieren.
Es kostet 25$ auf iOS, aber es ist kostenlos für andere Plattformen.  

Meine Lernkarten Sammlung im Anki Format: https://ankiweb.net/shared/info/25173560 (Danke [@xiewenya](https://github.com/xiewenya))

### 3. Wiederholen, wiederholen , wiederholen

Ich behalte eine Reihe von Spickzetteln über ASCII, OSI Stack, Groß-O Notation, und mehr. Ich lerne sie in meiner Freizeit.

Nimm dir eine Pause vom Programmieren für eine halbe Stunde und gehe deine Lernkarten durch.

### 4. Fokus

Es gibt eine Menge Ablenkungen, die deine kostbare Zeit stehlen können. Fokussiert und konzentriert zu bleiben ist schwer.

## Was hier nicht behandelt wird

Das sind weitverbreitete Technologien aber nicht Teil des Lehrplans:

- SQL
- Javascript
- HTML, CSS, und andere Front-end Technologien

## Der Tagesplan

Einige der Themen brauchen einen Tag, für andere braucht man mehrere Tage. Manche sind reines Lernen ohne das man was implementiert.

Jeden Tag nehme ich mir ein Thema aus der Liste unten vor, schaue Videos über das Thema, und schreibe eine Implementierung in:
- C - mit structs und Funktionen die ein struct Pointer und und etwas anderes als Argumente benutzen.
- C++ - ohne vorgefertigte Typen
- C++ - mit vorgefertigte Typen, wie STL's std::list für verkettete Listen
- Python - mit vorgefertigte Typen (um Python weiterhin zu üben)
- und ich schreibe Tests um sicherzugehen, dass ich richtig liege, manchmal sind das nur einfache assert() Statements
- Du könntest auch Java oder etwas anderes machen. Das ist nur das, was ich tue.

Man braucht nicht alles davon. Man braucht nur [eine Sprache für das Vorstellungsgespräch](#pick-one-language-for-the-interview).

Warum ich in all diesen Sprachen programmiere?
- Üben, üben, üben, bis ich kotzen muss und es im Schlaf beherrsche (manche Probleme haben viele Sonderfälle und Wissen, an das man sich erinnern muss)
- Unter erschwerten Voraussetzungen arbeiten können (Speicher allokieren/freigeben ohne die Hilfe einer Garbage Collection (Ausnahmen sind Python oder Java))
- Vorgefertigte Typen verwenden damit ich Erfahrung im Umgang für echte Anwendungsfälle haben (ich werde sich meine eigene verkettete Liste im Alltag implementieren)

Vielleicht habe ich nicht die Zeit, um das alles für jedes Thema zu machen, aber ich werde es versuchen.

Man findet meinen Code hier:
 - [C](https://github.com/jwasham/practice-c)
 - [C++](https://github.com/jwasham/practice-cpp)
 - [Python](https://github.com/jwasham/practice-python)

Man muss sich nicht bei jeden Algorithmus an alle Details erinnern können.

Schreib Code auf einer Tafel oder auf Papier, aber nicht am Computer. Teste mit ein paar einfachen Eingaben. Dann kannst du es am Computer testen.

## Voraussetzungen

<details>
<summary>Voraussetzungen</summary>

- [ ] **Lerne C**
    - C ist überall. Du wirst Beispiele in Büchern, Vorlesungen, Videos, und generell *überall* finden, während du lernst.
    - [ ] [C Programming Language, Vol 2](https://www.amazon.com/Programming-Language-Brian-W-Kernighan/dp/0131103628)
        - Das ist ein kurzes Buch, aber es wird dich viel über die C Sprache lehren und wenn du ein bisschen übst,
			wirst du schnell darin bewandert sein. C zu verstehen, hilft dir zu verstehen, wie Programme und Speicher funktionieren.
        - [Antworten auf Fragen](https://github.com/lekkas/c-algorithms)

- [ ] **Wie Computer einen Prozess ausführen:**
    - [ ] [Wie der Prozessor ein Programm ausführt (video)](https://www.youtube.com/watch?v=XM4lGflQFvA)
    - [ ] [How computers calculate - ALU (video)](https://youtu.be/1I5ZMmrOfnA)
    - [ ] [Registers and RAM (video)](https://youtu.be/fpnE6UAfbtU)
    - [ ] [The Central Processing Unit (CPU) (video)](https://youtu.be/FZGugFqdr60)
    - [ ] [Instructions and Programs (video)](https://youtu.be/zltgXvg6r3k)

</details>

## Algorithmische Komplexität / Big-O (Groß-O Notation) / Asymptotische Analyse

<details>
<summary>Algorithmische Komplexität / Big-O (Groß-O Notation) / Asymptotische Analyse</summary>

- nichts zum Implementieren
- Es sind eine Menge Videos hier aufgelistet. Schau dir einfach so viele an, bis du es verstanden hast. Man kann immer wieder zurückgehen und noch mal anschauen.
- Falls einige der Vorträge zu mathematisch sind, kann man ans untere Ende springen und sich Videos über diskrete Mathematik anschauen, um das notwendige Hintergrundwissen zu bekommen.
- [ ] [Harvard CS50 - Asymptotic Notation (video)](https://www.youtube.com/watch?v=iOq5kSKqeR4)
- [ ] [Big O Notations (kleines Tutorial) (video)](https://www.youtube.com/watch?v=V6mKVRU1evU)
- [ ] [Big O Notation (and Omega and Theta) - beste mathematische Erklärung (video)](https://www.youtube.com/watch?v=ei-A_wy5Yxw&index=2&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [ ] Skiena:
    - [Video](https://www.youtube.com/watch?v=gSyDMtdPNpU&index=2&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [Folien](http://www3.cs.stonybrook.edu/~algorith/video-lectures/2007/lecture2.pdf)
- [ ] [A Gentle Introduction to Algorithm Complexity Analysis](http://discrete.gr/complexity/)
- [ ] [Orders of Growth (video)](https://www.coursera.org/lecture/algorithmic-thinking-1/orders-of-growth-6PKkX)
- [ ] [Asymptotics (video)](https://www.coursera.org/lecture/algorithmic-thinking-1/asymptotics-bXAtM)
- [ ] [UC Berkeley Big O (video)](https://archive.org/details/ucberkeley_webcast_VIS4YDpuP98)
- [ ] [UC Berkeley Big Omega (video)](https://archive.org/details/ucberkeley_webcast_ca3e7UVmeUc)
- [ ] [Amortized Analysis (video)](https://www.youtube.com/watch?v=B3SpQZaAZP4&index=10&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)
- [ ] [Illustrating "Big O" (video)](https://www.coursera.org/lecture/algorithmic-thinking-1/illustrating-big-o-YVqzv)
- [ ] TopCoder (beinhält Differenzgleichungen und Master-Theorem)
    - [Computational Complexity: Section 1](https://www.topcoder.com/community/competitive-programming/tutorials/computational-complexity-section-1/)
    - [Computational Complexity: Section 2](https://www.topcoder.com/community/competitive-programming/tutorials/computational-complexity-section-2/)
- [ ] [Spickzettel](http://bigocheatsheet.com/)


</details>

## Datenstrukturen

<details>
<summary>Datenstrukturen</summary>

- ### Arrays (Felder)
	- implementiere einen automatisch mitwachsenden Vektor 
    - [ ] Beschreibung:
        - [Arrays (video)](https://www.coursera.org/learn/data-structures/lecture/OsBSF/arrays)
        - [UC Berkeley CS61B - Linear and Multi-Dim Arrays (video)](https://archive.org/details/ucberkeley_webcast_Wp8oiO_CZZE) (Start watching from 15m 32s)
        - [Basic Arrays (video)](https://archive.org/details/0102WhatYouShouldKnow/02_04-basicArrays.mp4)
        - [Multi-dim (video)](https://archive.org/details/0102WhatYouShouldKnow/02_05-multidimensionalArrays.mp4)
        - [Dynamic Arrays (video)](https://www.coursera.org/learn/data-structures/lecture/EwbnV/dynamic-arrays)
        - [Jagged Arrays (video)](https://www.youtube.com/watch?v=1jtrQqYpt7g)
        - [Jagged Arrays (video)](https://archive.org/details/0102WhatYouShouldKnow/02_06-jaggedArrays.mp4)
        - [Resizing arrays (video)](https://archive.org/details/0102WhatYouShouldKnow/03_01-resizableArrays.mp4)
    - [ ] Implementiere ein Vektor (veränderbares Array, das automatisch seine Größe verändert):
        - [ ] Übe Arrays und Pointer (Zeiger) zu coden, und benutze Pointerberechnung, um ein Element aus einem Array auszuwählen statt den Index zu benutzen.
        - [ ] neues Rohdaten-Array mit allokierten Speicher
            - man kann intern ein int Array dafür verwenden, aber nicht die Features davon
            - fang an mit der Größe 16, oder wenn die Startnummer schön größer ist, benutze Zweier-Potenzen - 16, 32, 64, 128
        - [ ] size() - Anzahl der Elemente
        - [ ] capacity() - Anzahl der Elemente die es enthalten kann
        - [ ] is_empty()
        - [ ] at(index) - gibt das Element an der gegebenen Index zurück, explodiert wenn der Index außerhalb der Grenzen ist
        - [ ] push(item)
        - [ ] insert(index, item) - fügt ein Element an der Index-Position ein, schiebt den ursprünglichen Wert vom Index und alle nachfolgenden Elemente eins nach rechts weiter
        - [ ] prepend(item) - ist dasselbe wie oben mit Index 0
        - [ ] pop() - entfernt das letzte Element und gibt dessen Wert zurück
        - [ ] delete(index) - lösche das Element an der Indexposition und verschiebe jedes Element danach eins nach links
        - [ ] remove(item) - sucht den Wert und entfernt den Index, der ihn enthält (auch wenn es mehrere Stellen sind)
        - [ ] find(item) - sucht den Wert und gibt den ersten Index mit diesen Wert, -1 wenn der Wert nicht gefunden wird
        - [ ] resize(new_capacity) // private Funktion
			- wenn man die Kapazität erreicht hat, verdopple die Kapazität
            - wenn du ein Element löscht und die Größe ist nur 1/4 der Kapazität, halbiere die Kapazität
    - [ ] Zeit
        - O(1) um am Ende etwas hinzuzufügen/zu löschen (amortisiert bei Verwendung von zusätzlichen Speicher), Indexzugriff, oder update
        - O(n) um an eine andere Stelle hinzuzufügen oder zu löschen
    - [ ] Speicher
        - zusammenhängend im Speicher, Nähe hilft der Performance
        - benötigter Speicher = (Array Kapazität, welche >= n ist) * Größe eines Elements, aber selbst bei 2n, immer noch O(n)

- ### Linked Lists (verkettete Listen)
    - [ ] Erklärung:
        - [ ] [Singly Linked Lists (video)](https://www.coursera.org/learn/data-structures/lecture/kHhgK/singly-linked-lists)
        - [ ] [CS 61B - Linked Lists 1 (video)](https://archive.org/details/ucberkeley_webcast_htzJdKoEmO0)
        - [ ] [CS 61B - Linked Lists 2 (video)](https://archive.org/details/ucberkeley_webcast_-c4I3gFYe3w)
    - [ ] [C Code (video)](https://www.youtube.com/watch?v=QN6FPiD0Gzo)
            - nicht das ganze Video nur die Teile über Knotenstruktur und Speicherverwaltung.
    - [ ] Linked Lists vs Arrays:
        - [Core Linked Lists Vs Arrays (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/rjBs9/core-linked-lists-vs-arrays)
        - [In The Real World Linked Lists Vs Arrays (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/QUaUd/in-the-real-world-lists-vs-arrays)
    - [ ] [why you should avoid linked lists (video)](https://www.youtube.com/watch?v=YQs6IC-vgmo)
    - [ ] Achtung:  du brauchst Wissen über Pointer auf Pointer:
        (für den Fall, dass man einen Pointer an eine Funktion übergibt und die Funktion die Adresse verändern kann, zu der der Pointer zeigt)
        Diese Seite ist dafür Pointer auf Pointer grob zu verstehen. Ich würde diese Art der Listentraversierung nicht empfehlen. Lesbarkeit und Wartbarkeit leiden darunter wenn man versucht clever zu sein.
        - [Pointers to Pointers](https://www.eskimo.com/~scs/cclass/int/sx8.html)
    - [ ] Implementierung (ich habe es mit Tail-Pointern gemacht und ohne):
        - [ ] size() - gibt Anzahl der Datenelemente in der Liste zurück
        - [ ] empty() - bool gibt true zurück wenn leer
        - [ ] value_at(index) - gibt den Wert an der Stelle index zurück (angefangen bei 0 für das erste Element)
        - [ ] push_front(value) - fügt ein Element an den Anfang der List ein
        - [ ] pop_front() - löscht das erste Element und gibt dessen Wert zurück
        - [ ] push_back(value) - fügt ein Element ans Ende ein
        - [ ] pop_back() - löscht das letzte Element und gibt dessen Wert zurück
        - [ ] front() - hole den Wert des ersten Elements
        - [ ] back() - hole den Wert des letzten Elements
        - [ ] insert(index, value) - fügt Wert an der Indexposition ein, das neue Element an der Stelle zeigt auf das aktuelle Element an der Stelle
        - [ ] erase(index) - löscht das Element an der gegebenen Stelle
        - [ ] value_n_from_end(n) - gibt den Wert an der n-ten Position von hinten zurück
        - [ ] reverse() - kehrt die Liste um
        - [ ] remove_value(value) - entfernt das erste Element aus der Liste mit diesen Wert
    - [ ] Doubly-linked List (doppelt verkettete Listen)
        - [Erklärung (Video)](https://www.coursera.org/learn/data-structures/lecture/jpGKD/doubly-linked-lists)
        - gibt keinen Grund das zu implementieren

- ### Stack (Stapel)
    - [ ] [Stacks (video)](https://www.coursera.org/learn/data-structures/lecture/UdKzQ/stacks)
    - [ ] [Using Stacks Last-In First-Out (video)](https://archive.org/details/0102WhatYouShouldKnow/05_01-usingStacksForLast-inFirst-out.mp4)
    - [ ] Werde ich nicht implementieren. Implementierung mittels Array ist trivial.

- ### Queue (Warteschlangen)
    - [ ] [Using Queues First-In First-Out(video)](https://archive.org/details/0102WhatYouShouldKnow/05_03-usingQueuesForFirst-inFirst-out.mp4)
    - [ ] [Queue (video)](https://www.coursera.org/lecture/data-structures/queues-EShpq)
    - [ ] [Circular buffer/FIFO](https://en.wikipedia.org/wiki/Circular_buffer)
    - [ ] [Priority Queues (video)](https://archive.org/details/0102WhatYouShouldKnow/05_04-priorityQueuesAndDeques.mp4)
    - [ ] Implementierung mittels verketteten Listen, mit Tail-Pointer:
        - enqueue(value) - fügt Wert am Ende ein
        - dequeue() - gibt das älteste Element (am Anfang der Liste) zurück und löscht es
        - empty()
    - [ ] Implementierung mittels Arrays fester Größe:
        - enqueue(value) - fügt ein Element am Ende des verfügbaren Speicherplatzes ein
        - dequeue() - gibt das älteste Element zurück und löscht es
        - empty()
        - full()
    - [ ] Kosten:
		- eine schlechte Implementierung wo man am Kopf einreiht und am Schwanz ausreiht wäre O(n)
			weil man das vorletzte Element braucht, wodurch man die Liste komplett durchgehen muss
        - enqueue: O(1) (amortisiert, verkettete Liste und Array)
        - dequeue: O(1) (verkettete Liste und Array)
        - empty: O(1) (verkettete Liste und Array)

- ### Hash table (Hash-Tabelle)
    - [ ] Videos:
        - [ ] [Hashing with Chaining (video)](https://www.youtube.com/watch?v=0M_kIqhwbFo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=8)
        - [ ] [Table Doubling, Karp-Rabin (video)](https://www.youtube.com/watch?v=BRO7mVIFt08&index=9&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [ ] [Open Addressing, Cryptographic Hashing (video)](https://www.youtube.com/watch?v=rvdJDijO2Ro&index=10&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [ ] [PyCon 2010: The Mighty Dictionary (video)](https://www.youtube.com/watch?v=C4Kc8xzcA68)
        - [ ] [(Advanced) Randomization: Universal & Perfect Hashing (video)](https://www.youtube.com/watch?v=z0lJ2k0sl1g&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=11)
        - [ ] [(Advanced) Perfect hashing (video)](https://www.youtube.com/watch?v=N0COwN14gt0&list=PL2B4EEwhKD-NbwZ4ezj7gyc_3yNrojKM9&index=4)

    - [ ] Online Kurse:
        - [ ] [Understanding Hash Functions (video)](https://archive.org/details/0102WhatYouShouldKnow/06_02-understandingHashFunctions.mp4)
        - [ ] [Using Hash Tables (video)](https://archive.org/details/0102WhatYouShouldKnow/06_03-usingHashTables.mp4)
        - [ ] [Supporting Hashing (video)](https://archive.org/details/0102WhatYouShouldKnow/06_04-supportingHashing.mp4)
        - [ ] [Language Support Hash Tables (video)](https://archive.org/details/0102WhatYouShouldKnow/06_05-languageSupportForHashTables.mp4)
        - [ ] [Core Hash Tables (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/m7UuP/core-hash-tables)
        - [ ] [Data Structures (video)](https://www.coursera.org/learn/data-structures/home/week/3)
        - [ ] [Phone Book Problem (video)](https://www.coursera.org/learn/data-structures/lecture/NYZZP/phone-book-problem)
        - [ ] verteilte Hash-Tabellen:
            - [Instant Uploads And Storage Optimization In Dropbox (video)](https://www.coursera.org/learn/data-structures/lecture/DvaIb/instant-uploads-and-storage-optimization-in-dropbox)
            - [Distributed Hash Tables (video)](https://www.coursera.org/learn/data-structures/lecture/tvH8H/distributed-hash-tables)

    - [ ] Implementierung mit Array und linear probing
        - hash(k, m) - m ist die Größe der Hash-Tabelle
        - add(key, value) - falls key schon existiert, wird Wert überschrieben
        - exists(key)
        - get(key)
        - remove(key)

</details>

## Mehr

<details>
<summary>Mehr</summary>

- ### Binärsuche
    - [ ] [Binary Search (video)](https://www.youtube.com/watch?v=D5SrAga1pno)
    - [ ] [Binary Search (video)](https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search)
    - [ ] [Details](https://www.topcoder.com/community/competitive-programming/tutorials/binary-search/)
    - [ ] Implementierung:
        - Binärsuche (auf einem sortierten Array von Ganzzahlen)
        - Binärsuche mittels Rekursion

- ### Bitweise Operationen
    - [ ] [Bits Spickzettel](https://github.com/jwasham/coding-interview-university/blob/master/extras/cheat%20sheets/bits-cheat-sheet.pdf) - man sollte viele der Zweierpotenzen kennen (von 2^1 über 2^16 und 2^32)
    - [ ] Erhalte sehr gutes Verständnis Bits zu manipulieren mit: &, |, ^, ~, >>, <<
        - [ ] [Wörter](https://en.wikipedia.org/wiki/Word_(computer_architecture))
        - [ ] Gute Einführung:
            [Bit Manipulation (video)](https://www.youtube.com/watch?v=7jkIUgLC29I)
        - [ ] [C Programming Tutorial 2-10: Bitwise Operators (video)](https://www.youtube.com/watch?v=d0AwjSpNXR0)
        - [ ] [Bit Manipulation](https://en.wikipedia.org/wiki/Bit_manipulation)
        - [ ] [Bitwise Operation](https://en.wikipedia.org/wiki/Bitwise_operation)
        - [ ] [Bithacks](https://graphics.stanford.edu/~seander/bithacks.html)
        - [ ] [The Bit Twiddler](https://bits.stephan-brumme.com/)
        - [ ] [The Bit Twiddler Interactive](https://bits.stephan-brumme.com/interactive.html)
    - [ ] Zweier- und Einerkomplement
        - [Binary: Plusses & Minuses (Why We Use Two's Complement) (video)](https://www.youtube.com/watch?v=lKTsv6iVxV4)
        - [1s Complement](https://en.wikipedia.org/wiki/Ones%27_complement)
        - [2s Complement](https://en.wikipedia.org/wiki/Two%27s_complement)
    - [ ] Bits zählen
        - [4 ways to count bits in a byte (video)](https://youtu.be/Hzuzo9NJrlc)
        - [Count Bits](https://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetKernighan)
        - [How To Count The Number Of Set Bits In a 32 Bit Integer](http://stackoverflow.com/questions/109023/how-to-count-the-number-of-set-bits-in-a-32-bit-integer)
    - [ ] zur nächsten Zweierpotenz aufrunden:
        - [Round Up To Next Power Of Two](https://bits.stephan-brumme.com/roundUpToNextPowerOfTwo.html)
    - [ ] Werte tauschen:
        - [Swap](https://bits.stephan-brumme.com/swap.html)
    - [ ] Absolutwert:
        - [Absolute Integer](https://bits.stephan-brumme.com/absInteger.html)

</details>

## Trees (Bäume)

<details>
<summary>Trees (Bäume)</summary>

- ### Trees - Notizen und Hintergrund
    - [ ] [Series: Core Trees (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/ovovP/core-trees)
    - [ ] [Series: Trees (video)](https://www.coursera.org/learn/data-structures/lecture/95qda/trees)
    - generell Baumerstellung
    - Traversieren (Durchlaufen)
    - Algorithmen zur Manipulation
    - [ ] [BFS(breadth-first search) and DFS(depth-first search) (video)](https://www.youtube.com/watch?v=uWL6FJhq5fM)
        - BFS (Breitensuche) Bemerkungen:
           - Ebenenreihenfolge (BFS, mittels Queue)
           - Zeitkomplexität: O(n)
           - Speicherkomplexität: beste: O(1), schlechteste: O(n/2)=O(n)
        - DFS (Tiefensuche) Bemerkungen:
            - Zeitkomplexität: O(n)
            - Speicherkomplexität:
                beste: O(log n) - durchschnittliche Höhe eines Baumes
                schlechteste: O(n)
            - inorder (DFS: links, selber, rechts)
            - postorder (DFS: links, rechts, selber)
            - preorder (DFS: selber, links, rechts)

- ### Binary search trees: BSTs (Binäre Suchbäume)
    - [ ] [Binary Search Tree Review (video)](https://www.youtube.com/watch?v=x6At0nzX92o&index=1&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
    - [ ] [Series (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/p82sw/core-introduction-to-binary-search-trees)
        - startet mit Symboltabelle und geht durch die Anwendungsgebiete für BST
    - [ ] [Introduction (video)](https://www.coursera.org/learn/data-structures/lecture/E7cXP/introduction)
    - [ ] [MIT (video)](https://www.youtube.com/watch?v=9Jry5-82I68)
    - C/C++:
        - [ ] [Binary search tree - Implementation in C/C++ (video)](https://www.youtube.com/watch?v=COZK7NATh4k&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=28)
        - [ ] [BST implementation - memory allocation in stack and heap (video)](https://www.youtube.com/watch?v=hWokyBoo0aI&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=29)
        - [ ] [Find min and max element in a binary search tree (video)](https://www.youtube.com/watch?v=Ut90klNN264&index=30&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [Find height of a binary tree (video)](https://www.youtube.com/watch?v=_pnqMz5nrRs&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=31)
        - [ ] [Binary tree traversal - breadth-first and depth-first strategies (video)](https://www.youtube.com/watch?v=9RHO6jU--GU&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=32)
        - [ ] [Binary tree: Level Order Traversal (video)](https://www.youtube.com/watch?v=86g8jAQug04&index=33&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [Binary tree traversal: Preorder, Inorder, Postorder (video)](https://www.youtube.com/watch?v=gm8DUJJhmY4&index=34&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [Check if a binary tree is binary search tree or not (video)](https://www.youtube.com/watch?v=yEwSGhSsT0U&index=35&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
        - [ ] [Delete a node from Binary Search Tree (video)](https://www.youtube.com/watch?v=gcULXE7ViZw&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=36)
        - [ ] [Inorder Successor in a binary search tree (video)](https://www.youtube.com/watch?v=5cPbNCrdotA&index=37&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
    - [ ] Implement:
        - [ ] insert    // füge Wert in Baum ein
        - [ ] get_node_count // gibt Anzahl gespeicherter Werte zurück
        - [ ] print_values // gibt die Werte im Baum aus, vom Minimum zum Maximum
        - [ ] delete_tree
        - [ ] is_in_tree // gibt true zurück wenn der gegebene Wert im Baum vorkommt
        - [ ] get_height // gibt die Höhe in Knoten zurück (Höhe eines einzelnen Knotens ist 1)
        - [ ] get_min   // gibt den kleinsten Wert zurück der im Baum gespeichert ist
        - [ ] get_max   // gibt den größten Wert zurück der im Baum gespeichert ist
        - [ ] is_binary_search_tree
        - [ ] delete_value
        - [ ] get_successor // gibt vom gegebenen Wert den nächstgrößeren Wert im Baum zurück, -1 wenn der nicht existiert

- ### Heap (Haufen) / Priority Queue (Prioritätswarteschlange) / Binary Heap (Binärer Haufen)
    - visualisiert als Baum, aber wächst üblicherweise linear im Speicher (Array, Linked List)
    - [ ] [Heap](https://en.wikipedia.org/wiki/Heap_(data_structure))
    - [ ] [Introduction (video)](https://www.coursera.org/learn/data-structures/lecture/2OpTs/introduction)
    - [ ] [Naive Implementations (video)](https://www.coursera.org/learn/data-structures/lecture/z3l9N/naive-implementations)
    - [ ] [Binary Trees (video)](https://www.coursera.org/learn/data-structures/lecture/GRV2q/binary-trees)
    - [ ] [Tree Height Remark (video)](https://www.coursera.org/learn/data-structures/supplement/S5xxz/tree-height-remark)
    - [ ] [Basic Operations (video)](https://www.coursera.org/learn/data-structures/lecture/0g1dl/basic-operations)
    - [ ] [Complete Binary Trees (video)](https://www.coursera.org/learn/data-structures/lecture/gl5Ni/complete-binary-trees)
    - [ ] [Pseudocode (video)](https://www.coursera.org/learn/data-structures/lecture/HxQo9/pseudocode)
    - [ ] [Heap Sort - jumps to start (video)](https://youtu.be/odNJmw5TOEE?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3291)
    - [ ] [Heap Sort (video)](https://www.coursera.org/learn/data-structures/lecture/hSzMO/heap-sort)
    - [ ] [Building a heap (video)](https://www.coursera.org/learn/data-structures/lecture/dwrOS/building-a-heap)
    - [ ] [MIT: Heaps and Heap Sort (video)](https://www.youtube.com/watch?v=B7hVxCmfPtM&index=4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [CS 61B Lecture 24: Priority Queues (video)](https://archive.org/details/ucberkeley_webcast_yIUFT6AKBGE)
    - [ ] [Linear Time BuildHeap (max-heap)](https://www.youtube.com/watch?v=MiyLo8adrWw)
    - [ ] Implementierung eines Max-Heap:
        - [ ] insert
        - [ ] sift_up - gebraucht fürs Einfügen
        - [ ] get_max - gibt den größten Wert zurück, ohne ihn zu löschen
        - [ ] get_size() - gibt Anzahl gespeicherter Element zurück
        - [ ] is_empty() - gibt true zurück wenn der Heap keine Elemente enthält
        - [ ] extract_max - gibt das Max-Element zurück, löscht es
        - [ ] sift_down - gebraucht für extract_max
        - [ ] remove(i) - entfernt Element an Position i
        - [ ] heapify - erstellt einen Heap aus einem Array, gebraucht für heap_sort
        - [ ] heap_sort() - nimmt ein unsortiertes Array und verwandelt es in ein sortiertes Array (in-place) mittles Max Heap
            - Bemerkung: stattdessen einen Min Heap zu verwenden, würde weniger Operationen brauchen, aber den Speicherbedarf verdoppeln (kann man nicht in-place machen).

</details>

## Sortierung

<details>
<summary>Sortierung</summary>

- [ ] Bemerkungen:
    - Implementiere Sortierungen und kenne best case/worst case, durchschnittliche Komplexität von jeden:
        - kein Bubble Sort - es ist furchtbar - O(n^2), außer wenn n <= 16
    - [ ] Stabilität in Sortieralgorithmen ("Ist Quicksort stabil?")
        - [Sorting Algorithm Stability](https://en.wikipedia.org/wiki/Sorting_algorithm#Stability)
        - [Stability In Sorting Algorithms](http://stackoverflow.com/questions/1517793/stability-in-sorting-algorithms)
        - [Stability In Sorting Algorithms](http://www.geeksforgeeks.org/stability-in-sorting-algorithms/)
        - [Sorting Algorithms - Stability](http://homepages.math.uic.edu/~leon/cs-mcs401-s08/handouts/stability.pdf)
    - [ ] Welche Algorithmen können mit verketteten Listen genutzt werden? Welche mit Arrays? Welche bei beiden?
        - Ich würde nicht empfehlen, verkettete Listen zu sortieren, aber Mergesort ist machbar.
        - [Merge Sort For Linked List](http://www.geeksforgeeks.org/merge-sort-for-linked-list/)

- Für Heap Sort, siehe Heap Datenstruktur oben. Heap Sort ist toll, aber nicht stabil.

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

- [ ] [Bubble Sort (video)](https://www.youtube.com/watch?v=P00xJgWzz2c&index=1&list=PL89B61F78B552C1AB)
- [ ] [Analyzing Bubble Sort (video)](https://www.youtube.com/watch?v=ni_zk257Nqo&index=7&list=PL89B61F78B552C1AB)
- [ ] [Insertion Sort, Merge Sort (video)](https://www.youtube.com/watch?v=Kg4bqzAqRBM&index=3&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
- [ ] [Insertion Sort (video)](https://www.youtube.com/watch?v=c4BRHC7kTaQ&index=2&list=PL89B61F78B552C1AB)
- [ ] [Merge Sort (video)](https://www.youtube.com/watch?v=GCae1WNvnZM&index=3&list=PL89B61F78B552C1AB)
- [ ] [Quicksort (video)](https://www.youtube.com/watch?v=y_G9BkAm6B8&index=4&list=PL89B61F78B552C1AB)
- [ ] [Selection Sort (video)](https://www.youtube.com/watch?v=6nDMgr0-Yyo&index=8&list=PL89B61F78B552C1AB)

- [ ] Mergesort Code:
    - [ ] [Using output array (C)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/sorting/mergesort.c)
    - [ ] [Using output array (Python)](https://github.com/jwasham/practice-python/blob/master/merge_sort/merge_sort.py)
    - [ ] [In-place (C++)](https://github.com/jwasham/practice-cpp/blob/master/merge_sort/merge_sort.cc)
- [ ] Quicksort Code:
    - [ ] [Implementation (C)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/randomization/quick.c)
    - [ ] [Implementation (C)](https://github.com/jwasham/practice-c/blob/master/quick_sort/quick_sort.c)
    - [ ] [Implementation (Python)](https://github.com/jwasham/practice-python/blob/master/quick_sort/quick_sort.py)

- [ ] Implementierung:
    - [ ] Mergesort: O(n log n) Durchschnitt und worst case
    - [ ] Quicksort O(n log n) Durchschnitt
    - Selection Sort und Insertion Ssort sind beide O(n^2) im Durchschnitt und worst case
    - Für Heap Sort, siehe Heap Datenstruktur oben.

- [ ] Nicht vorgeschrieben, aber würde ich empfehlen:
    - [ ] [Sedgewick - Radix Sorts (6 videos)](https://www.coursera.org/learn/algorithms-part2/home/week/3)
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

Als Zusammenfassung ist hier eine grafische Darstellung von [15 Sortieralgorithmen](https://www.youtube.com/watch?v=kPRA0W1kECg).
Falls du noch mehr zu dem Thema wissen willst, schau dir "Sortierung" unter [Weitere Details für ausgewählte Themen](#additional-detail-on-some-subjects) an

</details>

## Graphen

<details>
<summary>Graphen</summary>

Graphen können genutzt werden, um damit viele verschiedene Probleme in der Informatik darzustellen. Deswegen ist dieser Abschnitt so lang wie Bäume und Sortierung.

- Bemerkungen:
    - Es gibt 4 verschiedene Arten einen Graphen im Speicher zu repräsentieren:
        - Objekte und Pointer
        - Adjazenzmatrix
        - Adjazenzliste
        - adjacency map
    - bekanntmachen mit jeder dieser Repräsentationen und ihrer Vor- und Nachteile
    - BFS und DFS - kenne Komplexität, ihre Kompromisse, und wie man sie mit echten Code umsetzt
    - Wenn eine Frage gestellt wird, suche zuerst nach einer graphbasierten Lösung, dann geh weiter, wenn es keine gibt.

- [ ] MIT(videos):
    - [ ] [Breadth-First Search](https://www.youtube.com/watch?v=s-CYnVz-uh4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=13)
    - [ ] [Depth-First Search](https://www.youtube.com/watch?v=AfSk24UTFS8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=14)

- [ ] Skiena Vorlesungen - tolle Einführung:
    - [ ] [CSE373 2012 - Lecture 11 - Graph Data Structures (video)](https://www.youtube.com/watch?v=OiXxhDrFruw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=11)
    - [ ] [CSE373 2012 - Lecture 12 - Breadth-First Search (video)](https://www.youtube.com/watch?v=g5vF8jscteo&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=12)
    - [ ] [CSE373 2012 - Lecture 13 - Graph Algorithms (video)](https://www.youtube.com/watch?v=S23W6eTcqdY&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=13)
    - [ ] [CSE373 2012 - Lecture 14 - Graph Algorithms (con't) (video)](https://www.youtube.com/watch?v=WitPBKGV0HY&index=14&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [CSE373 2012 - Lecture 15 - Graph Algorithms (con't 2) (video)](https://www.youtube.com/watch?v=ia1L30l7OIg&index=15&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [CSE373 2012 - Lecture 16 - Graph Algorithms (con't 3) (video)](https://www.youtube.com/watch?v=jgDOQq6iWy8&index=16&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)

- [ ] Graphen (Besprechung und mehr):

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

- Kompletter Coursera Kurs:
    - [ ] [Algorithms on Graphs (video)](https://www.coursera.org/learn/algorithms-on-graphs/home/welcome)

- werde ich implementieren:
    - [ ] DFS mit Adjazenzliste (rekursiv)
    - [ ] DFS mit Adjazenzliste (iterativ mit Stack)
    - [ ] DFS mit Adjazenzmatrix (rekursiv)
    - [ ] DFS mit Adjazenzmatrix (iterativ mit Stack)
    - [ ] BFS mit Adjazenzliste
    - [ ] BFS mit Adjazenzmatrix
    - [ ] Kürzester Pfad (Dijkstra)
    - [ ] minimaler Spannbaum
    - DFS-basierte Algorithmen (siehe Aduni Videos oben):
        - [ ] auf Zyklus prüfen (für Topologische Sortierung benötigt, wir prüfen auf Zyklen bevor wir anfangen)
        - [ ] Topologische Sortierung
        - [ ] zähle Zusammenhangskomponenten in einen Graph
        - [ ] liste starke Zusammenhangskomponenten auf
        - [ ] prüfe ob es ein bipartiter Graph ist

</details>

## Noch mehr

<details>
<summary>Noch mehr</summary>

- ### Rekursion
    - [ ] Stanford Vorlesung über Rekursion und Backtracking:
        - [ ] [Lecture 8 | Programming Abstractions (video)](https://www.youtube.com/watch?v=gl3emqCuueQ&list=PLFE6E58F856038C69&index=8)
        - [ ] [Lecture 9 | Programming Abstractions (video)](https://www.youtube.com/watch?v=uFJhEPrbycQ&list=PLFE6E58F856038C69&index=9)
        - [ ] [Lecture 10 | Programming Abstractions (video)](https://www.youtube.com/watch?v=NdF1QDTRkck&index=10&list=PLFE6E58F856038C69)
        - [ ] [Lecture 11 | Programming Abstractions (video)](https://www.youtube.com/watch?v=p-gpaIGRCQI&list=PLFE6E58F856038C69&index=11)
    - wann sollte man es benutzen
    - Wann ist Endrekursion gut?
        - [ ] [What Is Tail Recursion Why Is It So Bad?](https://www.quora.com/What-is-tail-recursion-Why-is-it-so-bad)
        - [ ] [Tail Recursion (video)](https://www.youtube.com/watch?v=L1jjXGfxozc)

- ### Dynamische Programming
    - Wahrscheinlich wirst du im Vorstellungsgespräch nichts mit dynamischer Programmierung zu tun haben, aber es ist wert zu erkennen, wann ein Problem für dynamische Programmierung geeignet ist.
    - Dieses Thema kann ziemlich schwer sein. Jedes DP Problem muss als Rekursion dargestellt werden, und darauf zu kommen kann schwer sein.
    - Ich schlage vor, dass man sich viele DP Probleme ansieht bis man ein gutes Verständnis vom zugrunde liegenden Muster hat.
    - [ ] Videos:
        - die Skiena Videos kann man manchmal schwer folgen, weil er manchmal auf einer Tafel schreibt, was zu klein zum Lesen ist
        - [ ] [Skiena: CSE373 2012 - Lecture 19 - Introduction to Dynamic Programming (video)](https://youtu.be/Qc2ieXRgR0k?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1718)
        - [ ] [Skiena: CSE373 2012 - Lecture 20 - Edit Distance (video)](https://youtu.be/IsmMhMdyeGY?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=2749)
        - [ ] [Skiena: CSE373 2012 - Lecture 21 - Dynamic Programming Examples (video)](https://youtu.be/o0V9eYF4UI8?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=406)
        - [ ] [Skiena: CSE373 2012 - Lecture 22 - Applications of Dynamic Programming (video)](https://www.youtube.com/watch?v=dRbMC1Ltl3A&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=22)
        - [ ] [Simonson: Dynamic Programming 0 (fängt an bei 59:18) (video)](https://youtu.be/J5aJEcOr6Eo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3558)
        - [ ] [Simonson: Dynamic Programming I - Lecture 11 (video)](https://www.youtube.com/watch?v=0EzHjQ_SOeU&index=11&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [Simonson: Dynamic programming II - Lecture 12 (video)](https://www.youtube.com/watch?v=v1qiRwuJU7g&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=12)
        - [ ] Liste von einzelnen DP Problemen (jedes Problem ist klein):
            [Dynamic Programming (video)](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)
    - [ ] Yale Vorlesungsnotizen:
        - [ ] [Dynamic Programming](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#dynamicProgramming)
    - [ ] Coursera:
        - [ ] [The RNA secondary structure problem (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/80RrW/the-rna-secondary-structure-problem)
        - [ ] [A dynamic programming algorithm (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/PSonq/a-dynamic-programming-algorithm)
        - [ ] [Illustrating the DP algorithm (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/oUEK2/illustrating-the-dp-algorithm)
        - [ ] [Running time of the DP algorithm (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/nfK2r/running-time-of-the-dp-algorithm)
        - [ ] [DP vs. recursive implementation (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/M999a/dp-vs-recursive-implementation)
        - [ ] [Global pairwise sequence alignment (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/UZ7o6/global-pairwise-sequence-alignment)
        - [ ] [Local pairwise sequence alignment (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/WnNau/local-pairwise-sequence-alignment)

- ### Objekt-Orientierte Programmierung
    - [ ] [Optional: UML 2.0 Series (video)](https://www.youtube.com/watch?v=OkC7HKtiZC0&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc)
    - [ ] Object-Oriented Software Engineering: Software Dev Using UML and Java (21 videos):
        - kann man überspringen wenn man gutes Wissen über OO und OO Design Patterns hat
        - [OOSE: Software Dev Using UML and Java (video)](https://www.youtube.com/playlist?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)
    - [ ] SOLID OOP Prinzipien:
        - [ ] [Bob Martin SOLID Principles of Object Oriented and Agile Design (video)](https://www.youtube.com/watch?v=TMuno5RZNeE)
        - [ ] [SOLID Principles (video)](https://www.youtube.com/playlist?list=PL4CE9F710017EA77A)
        - [ ] S - [Single Responsibility Principle](http://www.oodesign.com/single-responsibility-principle.html) | [Eine einzige Zuständigkeit für jedes Objekt](http://www.javacodegeeks.com/2011/11/solid-single-responsibility-principle.html)
            - [mehr dazu](https://docs.google.com/open?id=0ByOwmqah_nuGNHEtcU5OekdDMkk)
        - [ ] O - [Open/Closed Principal](http://www.oodesign.com/open-close-principle.html)  | [Darüber dass Objekte bereit zur Erweiterung aber zur Veränderung sind](https://en.wikipedia.org/wiki/Open/closed_principle)
            - [mehr dazu](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgN2M5MTkwM2EtNWFkZC00ZTI3LWFjZTUtNTFhZGZiYmUzODc1&hl=en)
        - [ ] L - [Liskov Substitution Principal](http://www.oodesign.com/liskov-s-substitution-principle.html) | [Basisklasse und erbende Klasse folgen dem "IST EIN(E)"-Prinzip](http://stackoverflow.com/questions/56860/what-is-the-liskov-substitution-principle)
            - [mehr dazu](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgNzAzZjA5ZmItNjU3NS00MzQ5LTkwYjMtMDJhNDU5ZTM0MTlh&hl=en)
        - [ ] I - [Interface segregation principle](http://www.oodesign.com/interface-segregation-principle.html) | Verbraucher sollten nicht dazu gezwungen werden ein Interface zu implementieren, dass sie nicht benutzen
            - [Interface Segregation Principle in 5 minutes (video)](https://www.youtube.com/watch?v=3CtAfl7aXAQ)
            - [mehr dazu](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgOTViYjJhYzMtMzYxMC00MzFjLWJjMzYtOGJiMDc5N2JkYmJi&hl=en)
        - [ ] D -[Dependency Inversion principle](http://www.oodesign.com/dependency-inversion-principle.html) | Reduziere Abhängigkeiten beim Zusammenbau von Objekten.
            - [Why Is The Dependency Inversion Principle And Why Is It Important](http://stackoverflow.com/questions/62539/what-is-the-dependency-inversion-principle-and-why-is-it-important)
            - [mehr dazu](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgMjdlMWIzNGUtZTQ0NC00ZjQ5LTkwYzQtZjRhMDRlNTQ3ZGMz&hl=en)

- ### Design Patterns (Entwurfsmuster)
    - [ ] [Quick UML review (video)](https://www.youtube.com/watch?v=3cmzqZzwNDM&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc&index=3)
    - [ ] Lerne diese Muster:
        - [ ] Strategy
        - [ ] Singleton
        - [ ] Adapter
        - [ ] Prototype
        - [ ] Decorator
        - [ ] Visitor (Besucher)
        - [ ] Factory (Fabrik), abstract factory (abstrakte Fabrik)
        - [ ] Facade
        - [ ] Observer (Beobachter)
        - [ ] Proxy
        - [ ] Delegate
        - [ ] Command
        - [ ] State
        - [ ] Memento
        - [ ] Iterator
        - [ ] Composite
        - [ ] Flyweight (Fliegengewicht)
    - [ ] [Chapter 6 (Part 1) - Patterns (video)](https://youtu.be/LAP2A80Ajrg?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO&t=3344)
    - [ ] [Chapter 6 (Part 2) - Abstraction-Occurrence, General Hierarchy, Player-Role, Singleton, Observer, Delegation (video)](https://www.youtube.com/watch?v=U8-PGsjvZc4&index=12&list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)
    - [ ] [Chapter 6 (Part 3) - Adapter, Facade, Immutable, Read-Only Interface, Proxy (video)](https://www.youtube.com/watch?v=7sduBHuex4c&index=13&list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)
    - [ ] [Series of videos (27 videos)](https://www.youtube.com/playlist?list=PLF206E906175C7E07)
    - [ ] [Head First Design Patterns](https://www.amazon.com/Head-First-Design-Patterns-Freeman/dp/0596007124)
        - Ich weiß das legitime Buch ist "Design Patterns: Elements of Reusable Object-Oriented Software", aber Head First ist großartig wenn man mit OO einsteigt.
    - [ ] [Handy reference: 101 Design Patterns & Tips for Developers](https://sourcemaking.com/design-patterns-and-tips)
    - [ ] [Design patterns for humans](https://github.com/kamranahmedse/design-patterns-for-humans#structural-design-patterns)


- ### Kombinatorik (n über k) und Wahrscheinlichkeit
    - [ ] [Math Skills: How to find Factorial, Permutation and Combination (Choose) (video)](https://www.youtube.com/watch?v=8RRo6Ti9d0U)
    - [ ] [Make School: Probability (video)](https://www.youtube.com/watch?v=sZkAAk9Wwa4)
    - [ ] [Make School: More Probability and Markov Chains (video)](https://www.youtube.com/watch?v=dNaJg-mLobQ)
    - [ ] Khan Academy:
        - Kursstruktur:
            - [ ] [Basic Theoretical Probability](https://www.khanacademy.org/math/probability/probability-and-combinatorics-topic)
        - Nur die 41 Videos (jedes ist kurz und leicht zu verstehen):
            - [ ] [Probability Explained (video)](https://www.youtube.com/watch?v=uzkc-qNVoOk&list=PLC58778F28211FA19)

- ### NP, NP-vollständig und Heuristiken
    - Kenne die bekanntesten NP-vollständigen Probleme, wie z.B. Traveling Salesman und das Rucksackproblem,
        und sei in der Lage die zu erkennen, wenn ein Interviewer heimlich danach fragt.
    - Wissen was NP-vollständig bedeutet.
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
    - Peter Norvig beschreibt annähernd optimale Lösungen für das Traveling Salesman Problem:
        - [Jupyter Notebook](http://nbviewer.jupyter.org/url/norvig.com/ipython/TSP.ipynb)
    - Seite 1048 - 1140 in CLRS falls man es besitzt.

- ### Caches
    - [ ] LRU cache:
        - [ ] [The Magic of LRU Cache (100 Days of Google Dev) (video)](https://www.youtube.com/watch?v=R5ON3iwx78M)
        - [ ] [Implementing LRU (video)](https://www.youtube.com/watch?v=bq6N7Ym81iI)
        - [ ] [LeetCode - 146 LRU Cache (C++) (video)](https://www.youtube.com/watch?v=8-FZRAjR7qU)
    - [ ] CPU cache:
        - [ ] [MIT 6.004 L15: The Memory Hierarchy (video)](https://www.youtube.com/watch?v=vjYF_fAZI5E&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-&index=24)
        - [ ] [MIT 6.004 L16: Cache Issues (video)](https://www.youtube.com/watch?v=ajgC3-pyGlk&index=25&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-)

- ### Prozesse und Threads
    - [ ] Computer Science 162 - Operating Systems (25 videos):
        - für Prozesse und Threads siehe Videos 1-11
        - [Operating Systems and System Programming (video)](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iBDyz-ba4yDskqMDY6A1w_c)
    - [What Is The Difference Between A Process And A Thread?](https://www.quora.com/What-is-the-difference-between-a-process-and-a-thread)
    - behandelt:
        - Prozesse, Threads, Concurrency issues (Probleme von Parallelität)
            - Unterschied zwischen Prozessen und Threads
            - Prozesse
            - Threads
            - Locks
            - Mutexe
            - Semaphoren
            - Monitore
            - wie sie funtionieren
            - Deadlock
            - Livelock
        - CPU Äktivität, Interrupts, Kontextwechsel
        - Moderne Parallelität mit Multicore Prozessoren
        - [Paging, segmentation and virtual memory (video)](https://www.youtube.com/watch?v=LKe7xK0bF7o&list=PLCiOXwirraUCBE9i_ukL8_Kfg6XNv7Se8&index=2)
        - [Interrupts (video)](https://www.youtube.com/watch?v=uFKi2-J-6II&list=PLCiOXwirraUCBE9i_ukL8_Kfg6XNv7Se8&index=3)
        - [Scheduling (video)](https://www.youtube.com/watch?v=-Gu5mYdKbu4&index=4&list=PLCiOXwirraUCBE9i_ukL8_Kfg6XNv7Se8)
        - Prozess-Ressourcenverwaltung (Speicher: Code, statischer Speicher, Stack, Heap, und auch Datei-Handle, I/O)
        - Thread-Ressourcenverwaltung (teilt sich das obere (minus Stack) mit anderen Threads in selben Prozess aber jeder mit einzelnen Befehlszähler, Stackzähler, Registern, und Stack)
        - Forking ist einfach Copy on Write (nur lesend) bis der neue Prozess in den Speicher schreibt, dann wird eine komplette Kopie erstellt.
        - Kontextwechsel
            - Wie wird Kontextwechsel vom Betriebssystem und der zugrunde liegenden Hardware gehandhabt
    - [ ] [threads in C++ (series - 10 videos)](https://www.youtube.com/playlist?list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M)
    - [ ] Parallelität in Python (Videos):
        - [ ] [Short series on threads](https://www.youtube.com/playlist?list=PL1H1sBF1VAKVMONJWJkmUh6_p8g4F2oy1)
        - [ ] [Python Threads](https://www.youtube.com/watch?v=Bs7vPNbB9JM)
        - [ ] [Understanding the Python GIL (2010)](https://www.youtube.com/watch?v=Obt-vMVdM8s)
            - [Referenz](http://www.dabeaz.com/GIL)
        - [ ] [David Beazley - Python Concurrency From the Ground Up: LIVE! - PyCon 2015](https://www.youtube.com/watch?v=MCs5OvhV9S4)
        - [ ] [Keynote David Beazley - Topics of Interest (Python Asyncio)](https://www.youtube.com/watch?v=ZzfHjytDceU)
        - [ ] [Mutex in Python](https://www.youtube.com/watch?v=0zaPs8OtyKY)

- ### Testen
    - zu behandeln:
        - wie Unit Tests funktionieren
        - was sind Mockobjekte
        - was ist ein Integration Test
        - Was ist Dependency Injection
    - [ ] [Agile Software Testing with James Bach (video)](https://www.youtube.com/watch?v=SAhJf36_u5U)
    - [ ] [Open Lecture by James Bach on Software Testing (video)](https://www.youtube.com/watch?v=ILkT_HV9DVU)
    - [ ] [Steve Freeman - Test-Driven Development (that’s not what we meant) (video)](https://vimeo.com/83960706)
        - [Folien](http://gotocon.com/dl/goto-berlin-2013/slides/SteveFreeman_TestDrivenDevelopmentThatsNotWhatWeMeant.pdf)
    - [ ] [TDD is dead. Long live testing.](http://david.heinemeierhansson.com/2014/tdd-is-dead-long-live-testing.html)
    - [ ] [Is TDD dead? (video)](https://www.youtube.com/watch?v=z9quxZsLcfo)
    - [ ] [Video series (152 videos) - not all are needed (video)](https://www.youtube.com/watch?v=nzJapzxH_rE&list=PLAwxTw4SYaPkWVHeC_8aSIbSxE_NXI76g)
    - [ ] [Test-Driven Web Development with Python](http://www.obeythetestinggoat.com/pages/book.html#toc)
    - [ ] Dependency Injection:
        - [ ] [video](https://www.youtube.com/watch?v=IKD2-MAkXyQ)
        - [ ] [Tao Of Testing](http://jasonpolites.github.io/tao-of-testing/ch3-1.1.html)
    - [ ] [How to write tests](http://jasonpolites.github.io/tao-of-testing/ch4-1.1.html)

- ### Scheduling
    - in einem Betriebssystem, wie funktioniert es
    - kann von Betriebssystem Videos gelernt werden

- ### Stringsuche und -manipulation
    - [ ] [Sedgewick - Suffix Arrays (video)](https://www.coursera.org/learn/algorithms-part2/lecture/TH18W/suffix-arrays)
    - [ ] [Sedgewick - Substring Search (videos)](https://www.coursera.org/learn/algorithms-part2/home/week/4)
        - [ ] [1. Introduction to Substring Search](https://www.coursera.org/learn/algorithms-part2/lecture/n3ZpG/introduction-to-substring-search)
        - [ ] [2. Brute-Force Substring Search](https://www.coursera.org/learn/algorithms-part2/lecture/2Kn5i/brute-force-substring-search)
        - [ ] [3. Knuth-Morris Pratt](https://www.coursera.org/learn/algorithms-part2/lecture/TAtDr/knuth-morris-pratt)
        - [ ] [4. Boyer-Moore](https://www.coursera.org/learn/algorithms-part2/lecture/CYxOT/boyer-moore)
        - [ ] [5. Rabin-Karp](https://www.coursera.org/learn/algorithms-part2/lecture/3KiqT/rabin-karp)
    - [ ] [Search pattern in text (video)](https://www.coursera.org/learn/data-structures/lecture/tAfHI/search-pattern-in-text)

    Wer noch mehr Details zu diesem Thema erfahren möchte, sollte sich den "String Matching" Abschnitt unter [Weitere Details zu ausgewählten Themen](#additional-detail-on-some-subjects) ansehen

- ### Tries (Präfixbäume)
    - Achtung, es gibt mehrere Arten von Tries. Manche haben Präfixe, manche nicht, und manche benutzen Strings anstelle von Bits,
        um den Pfad zu markieren.
    - Ich habe mir den Code durchgelesen, aber werde es nicht selber implementieren.
    - [ ] [Sedgewick - Tries (3 Videos)](https://www.coursera.org/learn/algorithms-part2/home/week/4)
        - [ ] [1. R Way Tries](https://www.coursera.org/learn/algorithms-part2/lecture/CPVdr/r-way-tries)
        - [ ] [2. Ternary Search Tries](https://www.coursera.org/learn/algorithms-part2/lecture/yQM8K/ternary-search-tries)
        - [ ] [3. Character Based Operations](https://www.coursera.org/learn/algorithms-part2/lecture/jwNmV/character-based-operations)
    - [ ] [Notes on Data Structures and Programming Techniques](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Tries)
    - [ ] Kurze Kursvideos:
        - [ ] [Introduction To Tries (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/08Xyf/core-introduction-to-tries)
        - [ ] [Performance Of Tries (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/PvlZW/core-performance-of-tries)
        - [ ] [Implementing A Trie (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/DFvd3/core-implementing-a-trie)
    - [ ] [The Trie: A Neglected Data Structure](https://www.toptal.com/java/the-trie-a-neglected-data-structure)
    - [ ] [TopCoder - Using Tries](https://www.topcoder.com/community/competitive-programming/tutorials/using-tries/)
    - [ ] [Stanford Lecture (real world use case) (video)](https://www.youtube.com/watch?v=TJ8SkcUSdbU)
    - [ ] [MIT, Advanced Data Structures, Strings (can get pretty obscure about halfway through) (video)](https://www.youtube.com/watch?v=NinWEPPrkDQ&index=16&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf)

- ### Fließkommazahlen
    - [ ] 8 Bit: [Representation of Floating Point Numbers - 1 (Video - es gibt einen Fehler in den Berechnungen - siehe Videobeschreibung)](https://www.youtube.com/watch?v=ji3SfClm8TU)
    - [ ] 32 Bit: [IEEE754 32-bit floating point binary (video)](https://www.youtube.com/watch?v=50ZYcZebIec)

- ### Unicode
    - [ ] [The Absolute Minimum Every Software Developer Absolutely, Positively Must Know About Unicode and Character Sets]( http://www.joelonsoftware.com/articles/Unicode.html)
    - [ ] [What Every Programmer Absolutely, Positively Needs To Know About Encodings And Character Sets To Work With Text](http://kunststube.net/encoding/)

- ### Endianness (Byte-Reihenfolge)
    - [ ] [Big And Little Endian](https://web.archive.org/web/20180107141940/http://www.cs.umd.edu:80/class/sum2003/cmsc311/Notes/Data/endian.html)
    - [ ] [Big Endian Vs Little Endian (video)](https://www.youtube.com/watch?v=JrNF0KRAlyo)
    - [ ] [Big And Little Endian Inside/Out (video)](https://www.youtube.com/watch?v=oBSuXP-1Tc0)
        - Sehr technischer Vortrag für Kernel-Devs. Keine Sorge wenn du das meiste nicht verstehst.
        - Die erste Hälfte ist ausreichend.

- ### Netzwerke
    - **Wenn man Erfahrungen mit Netzwerken hat, oder Reliability Engineer oder Operations Engineer werden will, erwartet Fragen dazu**
    - ansonsten, ist es nur gut zu wissen
    - [ ] [Khan Academy](https://www.khanacademy.org/computing/computer-science/internet-intro)
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

</details>

## Systementwurf, Skalierbarkeit, Datenverarbeitung

<details>
<summary>Systementwurf, Skalierbarkeit, Datenverarbeitung</summary>

**Man kann mit Fragen über Systementwurf rechnen, falls man 4+ Erfahrung hat.**

- Skalierbarkeit und Systementwurf sind sehr große Themengebiete mit vielen verschiedenen Themen und Quellen, 
	  weil es so viel zu beachten gibt, wenn man eine Software/Hardware baut, die skalierbar ist.
	  Erwarte viel Zeit damit zu verbringen.
- Überlegungen:
    - Skalierbarkeit
        - vereinfache große Datenmengen zu Einzelwerten
        - Transformiere einen Datensatz in einen anderen
        - gehe mit absurd großen Datenmengen um
    - Systementwurf
        - Feature Sets
        - Schnittstellen
        - Klassenhierarchien
        - entwerfe System unter bestimmte Vorgaben
        - Einfachheit und Robustheit
        - Kompromisse
        - Performance Analyse und Optimierung
- [ ] **HIER ANFANGEN**: [The System Design Primer](https://github.com/donnemartin/system-design-primer)
- [ ] [System Design from HiredInTech](http://www.hiredintech.com/system-design/)
- [ ] [How Do I Prepare To Answer Design Questions In A Technical Inverview?](https://www.quora.com/How-do-I-prepare-to-answer-design-questions-in-a-technical-interview?redirected_qid=1500023)
- [ ] [8 Things You Need to Know Before a System Design Interview](http://blog.gainlo.co/index.php/2015/10/22/8-things-you-need-to-know-before-system-design-interviews/)
- [ ] [Algorithm design](http://www.hiredintech.com/algorithm-design/)
- [ ] [Database Normalization - 1NF, 2NF, 3NF and 4NF (video)](https://www.youtube.com/watch?v=UrYLYV7WSHM)
- [ ] [System Design Interview](https://github.com/checkcheckzz/system-design-interview) - Es gibt hier viele Quellen. Sieh dir Artikel und Beispiele an. Ich habe ein paar davon unten hingeschrieben.
- [ ] [How to ace a systems design interview](http://www.palantir.com/2011/10/how-to-rock-a-systems-design-interview/)
- [ ] [Numbers Everyone Should Know](http://everythingisdata.wordpress.com/2009/10/17/numbers-everyone-should-know/)
- [ ] [How long does it take to make a context switch?](http://blog.tsunanet.net/2010/11/how-long-does-it-take-to-make-context.html)
- [ ] [Transactions Across Datacenters (video)](https://www.youtube.com/watch?v=srOgpXECblk)
- [ ] [A plain English introduction to CAP Theorem](http://ksat.me/a-plain-english-introduction-to-cap-theorem/)
- [ ] Consensus Algorithmen:
    - [ ] Paxos - [Paxos Agreement - Computerphile (video)](https://www.youtube.com/watch?v=s8JqcZtvnsM)
    - [ ] Raft - [An Introduction to the Raft Distributed Consensus Algorithm (video)](https://www.youtube.com/watch?v=P9Ydif5_qvE)
        - [ ] [Easy-to-read paper](https://raft.github.io/)
        - [ ] [Infographic](http://thesecretlivesofdata.com/raft/)
- [ ] [Consistent Hashing](http://www.tom-e-white.com/2007/11/consistent-hashing.html)
- [ ] [NoSQL Patterns](http://horicky.blogspot.com/2009/11/nosql-patterns.html)
- [ ] Skalierbarkeit:
    - Das braucht man nicht alles. Sucht euch einfach die paar Themen raus, die euch interessieren.
    - [ ] [Great overview (video)](https://www.youtube.com/watch?v=-W9F__D3oY4)
    - [ ] Kurzreihen:
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
    - [ ] [Scale at Facebook (2012), "Building for a Billion Users" (video)](https://www.youtube.com/watch?v=oodS71YtkGU)
    - [ ] [Engineering for the Long Game - Astrid Atkinson Keynote(video)](https://www.youtube.com/watch?v=p0jGmgIrf_M&list=PLRXxvay_m8gqVlExPC5DG3TGWJTaBgqSA&index=4)
    - [ ] [7 Years Of YouTube Scalability Lessons In 30 Minutes](http://highscalability.com/blog/2012/3/26/7-years-of-youtube-scalability-lessons-in-30-minutes.html)
        - [Video](https://www.youtube.com/watch?v=G-lGCC4KKok)
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
    - [ ] Siehe "Messaging, Serialization und Queueing Systems" weiter unten für Infos über manche Technologien die Services miteinander verbinden können
    - [ ] Twitter:
        - [O'Reilly MySQL CE 2011: Jeremy Cole, "Big and Small Data at @Twitter" (video)](https://www.youtube.com/watch?v=5cKTP36HVgI)
        - [Timelines at Scale](https://www.infoq.com/presentations/Twitter-Timeline-Scalability)
    - Für sogar noch mehr, siehe "Mining Massive Datasets" Videoreihen im [Videoreihen](#video-series) Abschnitt.
- [ ] Übe den Prozess des Systementwurfs: Hier sind ein paar Ideen, die man auf Papier durchspielen kann, jede mit einer Dokumentation wie es in der echten Welt umgesetzt wurde:
    - Review: [The System Design Primer](https://github.com/donnemartin/system-design-primer)
    - [System Design from HiredInTech](http://www.hiredintech.com/system-design/)
    - [Spickzettel](https://github.com/jwasham/coding-interview-university/blob/master/extras/cheat%20sheets/system-design.pdf)
    - Ablauf:
        1. Verstehe das Problem und den Umfang:
            - definiere den Anwendungsfall, was dem Interviewer helfen wird
            - schlage zusätzliche Funktionen vor
            - entferne Elemente die laut Interviewer nicht zum Umfang passen
            - nimme an das hohe Erreichbarkeit gefordert ist, füge das zu den Anwendungsfällen hinzu
        2. Denke über Beschränkungen nach:
            - frag wie viele Anfragen im Monat es gibt
            - frag wie viele Anfragen in der Sekunde es gibt (sie sagen es entweder freiwillig oder du solltest es selbst ausrechnen)
            - schätze prozentuales Verhältnis zwischen Lese- und Schreibzugriffe
            - denk an die 80/20 Regel bei der Schätzung
            - wie viel Daten pro Sekunde geschrieben werden
            - absoluter Speicherverbrauch für 5 Jahre
            - wie viele Daten pro Sekunde gelesen werden
        3. Abstrakter Entwurf:
            - Ebenen (Service, Daten, Caching)
            - Infrastruktur: Load Balancing, Messaging
            - grobe Übersicht einiger Schlüsselalgorithmen die den Service antreiben
            - berücksichtige Flaschenhälse und finde Lösungen
    - Übungen:
        - [Entwerfe ein CDN Netzwerk: alter Artikel](http://repository.cmu.edu/cgi/viewcontent.cgi?article=2112&context=compsci)
        - [Entwerfe ein System um zufällige einmalige IDs zu generieren](https://blog.twitter.com/2010/announcing-snowflake)
        - [Entwerfe ein Online Multiplayer Kartenspiel](http://www.indieflashblog.com/how-to-create-an-asynchronous-multiplayer-game.html)
        - [Entwerfe eine Key-Value Datenbank](http://www.slideshare.net/dvirsky/introduction-to-redis)
        - [Entwerfe einen System um Bilder zu teilen](http://highscalability.com/blog/2011/12/6/instagram-architecture-14-million-users-terabytes-of-photos.html)
        - [Entwerfe ein Empfehlungssystem](http://ijcai13.org/files/tutorial_slides/td3.pdf)
        - [Entwerfe ein URL-Shortener System: von oben kopiert](http://www.hiredintech.com/system-design/the-system-design-process/)
        - [Entwerfe ein Cache System](https://www.adayinthelifeof.nl/2011/02/06/memcache-internals/)

</details>

---

## Finaler Rückblick

<details>
<summary>Finaler Rückblick</summary>

	Dieser Abschnitt enthält kürzere Videos, die man sich ziemlich schnell anschauen kann, um die wichtigsten Konzepte noch mal zu wiederholen.
    Das ist ganz gut, falls man sein Wissen öfter mal auffrischen möchte.

- [ ] Reihe mit kurzen 2-3 Minuten Videos (23 videos)
    - [Videos](https://www.youtube.com/watch?v=r4r1DZcx1cM&list=PLmVb1OknmNJuC5POdcDv5oCS7_OUkDgpj&index=22)
- [ ] Reihe mit kurzen 2-5 Minuten Videos - Michael Sambol (18 videos):
    - [Videos](https://www.youtube.com/channel/UCzDJwLWoYCUQowF_nG3m5OQ)
- [ ] [Sedgewick Videos - Algorithms I](https://www.coursera.org/learn/algorithms-part1)
- [ ] [Sedgewick Videos - Algorithms II](https://www.coursera.org/learn/algorithms-part2)

</details>

---

## Übungen zu Programmieraufgaben

<details>
<summary>Übungen zu Programmieraufgaben</summary>

Jetzt da ihr alle Informatikfragen von oben kennt, wird es Zeit Antworten auf Codingfragen zu üben.

**Bei den Übungen geht es nicht darum sich die Antworten zu merken.**

Warum du üben musst Programmieraufgaben zu lösen:
- Probleme wiedererkennen, und welche Datenstrukturen und Algorithmen sich dazu eignen
- Anforderungen an das Problem sammeln
- das Problem zu besprechen wie man es im Vorstellungsgespräch tun würde
- auf der Tafel oder dem Papier zu entwickeln, nicht auf den Computer
- die Zeit- und Speicherkomplexität zu ermitteln
- seine Lösung zu testen

Es gibt eine großartige Einführung für das methodische, kommunikative Problem lösen in einem Vorstellungsgespräch.
Das kann man auch von Büchern über Vorstellungsgespräche lernen, aber das fand ich herausragend:
[Algorithm Design Canvas](http://www.hiredintech.com/algorithm-design/)

Keine Tafel zu Hause? Macht Sinn. Ich bin ein Spinner und habe eine große Tafel.
Anstelle einer Tafel hol dir ein großes Zeichenbrett aus dem Kunstladen. Du kannst auf dem Sofa sitzen und üben.
Das ist meine "Sofatafel". Ich habe auf den Foto ein Stift dazu gelegt, um die Größenverhältnisse darzustellen.
Wenn man mit Stift schreibt, wünscht man sich, man könnte löschen. Wird schnell sehr unordentlich.

![meine Sofatafel](https://d3j2pkmjtin6ou.cloudfront.net/art_board_sm_2.jpg)

Zusatz:

- [Mathematics for Topcoders](https://www.topcoder.com/community/competitive-programming/tutorials/mathematics-for-topcoders/)
- [Dynamic Programming – From Novice to Advanced](https://www.topcoder.com/community/competitive-programming/tutorials/dynamic-programming-from-novice-to-advanced/)
- [MIT Interview Materials](https://web.archive.org/web/20160906124824/http://courses.csail.mit.edu/iap/interview/materials.php)
- [Exercises for getting better at a given language](http://exercism.io/languages)

**Lese und löse Programmieraufgaben (in dieser Reihenfolge):**

- [ ] [Programming Interviews Exposed: Secrets to Landing Your Next Job, 2nd Edition](http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html)
    - Antworten in C, C++ und Java
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - Antworten in Java

Siehe [Literaturliste oben](#book-list)

</details>

## Programmieraufgaben/Wettbewerbe

<details>
<summary>Programmieraufgaben/Wettbewerbe</summary>

Nachdem du dir die grauen Zellen weg gelernt hast, lass die grauen Zellen arbeiten.
Nimm jeden Tag eine Herausforderung an, so viele wie du kannst.

- [ ] [How to Find a Solution](https://www.topcoder.com/community/competitive-programming/tutorials/how-to-find-a-solution/)
- [ ] [How to Dissect a Topcoder Problem Statement](https://www.topcoder.com/community/competitive-programming/tutorials/how-to-dissect-a-topcoder-problem-statement/)

Videos über Codingfragen im Vorstellungsgespräch:
- [IDeserve (88 videos)](https://www.youtube.com/watch?v=NBcqBddFbZw&list=PLamzFoFxwoNjPfxzaWqs7cZGsPYy0x_gI)
- [Tushar Roy (5 playlists)](https://www.youtube.com/user/tusharroy2525/playlists?shelf_id=2&view=50&sort=dd)

Wettbewerbsseiten:
- [LeetCode](https://leetcode.com/)
- [TopCoder](https://www.topcoder.com/)
- [Project Euler (math-focused)](https://projecteuler.net/index.php?section=problems)
- [Codewars](http://www.codewars.com)
- [HackerEarth](https://www.hackerearth.com/)
- [HackerRank](https://www.hackerrank.com/)
- [Codility](https://codility.com/programmers/)
- [InterviewCake](https://www.interviewcake.com/)
- [Geeks for Geeks](http://www.geeksforgeeks.org/)
- [InterviewBit](https://www.interviewbit.com/invite/icjf)
- [Sphere Online Judge (spoj)](http://www.spoj.com/)
- [Codechef](https://www.codechef.com/)

Wettbewerbsrepos:
- [Interactive Coding Interview Challenges in Python](https://github.com/donnemartin/interactive-coding-challenges)

Mock Interviews:
- [Gainlo.co: Mock interviewers from big companies](http://www.gainlo.co/) - Das habe ich benutzt und es hat mir dabei geholfen vor den Telefon- und Vor-Ort-Gesprächen besser zu entspannen.
- [Pramp: Mock interviews from/with peers](https://www.pramp.com/) - peer-to-peer Modell um Vorstellungsgespräche zu üben
- [Refdash: Mock interviews and expedited interviews](https://refdash.com/) - hilft auch Kandidaten den Prozess zu beschleunigen indem mehrere Vorstellungsgespräche bei Techfirmen übersprungen werden.

</details>

## Wenn das Vorstellungsgespräch bald ansteht

- [ ] Cracking The Coding Interview Teil 2 (videos):
    - [Cracking The Code Interview](https://www.youtube.com/watch?v=4NIb9l3imAo)
    - [Cracking the Coding Interview - Fullstack Speaker Series](https://www.youtube.com/watch?v=Eg5-tdAwclo)

## Dein Lebenslauf

- Siehe Lebenslaufvorbereitung in Cracking The Coding Interview und den hinteren Teil von Programming Interviews Exposed


## Denk dran wenn das Vorstellungsgespräch kommt

Rechne mit 20 Interviewfragen die dir gestellt werden, zusammen mit den unteren Zeilen. Bereite 2 - 3 Antworten für jede vor.
Bereite eine Geschichte vor, nicht nur ein paar Infos, über etwas das du erreicht hast.

- Warum möchtest du den Job?
- Was ist ein schweres Problem das du gelöst hast?
- Die größte Herausforderung vor der du standest?
- Bester/schlechtester Entwurf den du gesehen hast?
- Ideen um ein bestehendes Produkt zu verbessern.
- Wie arbeitest du am Besten, als Individuum und als Teil eines Teams?
- Welche deiner Fertigkeiten und Erfahrungen würden dir in der Rolle helfen und warum?
- Was hat dir am meisten Spaß gemacht an [Job x / Projekt y]?
- Was war die größte Herausforderung im [Job x / Projekt y]?
- Was war der schwerste Bug den du bearbeitet hast in [Job x / Projekt y]?
- Was hast du in [Job x / Projekt y] gelernt?
- Was hättest du gerne besser gemacht in [Job x / Projekt y]?

## Stell Fragen an den Interviewer

	Einige von meinen (ich weiß vielleicht schon die Antwort aber möchte gerne ihre Meinung oder die Meinung des Teams hören):

- Wie groß ist das Team?
- Wie sieht der Entwicklungszyklus aus? Macht ihr Wasserfall/Sprints/agil?
- Wird oft zu Abgabeterminen gehetzt? Oder seid ihr flexibel?
- Wie werden Entscheidungen in eurem Team getroffen?
- Wie viele Meetings habt ihr pro Woche?
- Hilft dir die Arbeitsumgebung dich zu konzentrieren?
- Woran arbeitet ihr gerade?
- Was gefällt dir daran?
- Wie ist das Arbeitsleben so?

## Wenn du den Job bekommst

Gratulation!

Lerne weiter.

Man ist nie wirklich fertig.

---

    *****************************************************************************************************
    *****************************************************************************************************

    Alles unterhalb hiervon ist optional.
	Wenn man das studiert, bekommt man mehr Wissen zu Informatikkonzepten, und wird besser auf
	einen Softwareingenieur Job vorbereitet. 
	Man ist dann ein abgerundeterer Softwareingenieur.

    *****************************************************************************************************
    *****************************************************************************************************

---

## Zusätzliche Bücher

<details>
<summary>Zusätzliche Bücher</summary>

- [The Unix Programming Environment](https://www.amazon.com/dp/013937681X)
    - alt aber gut
- [The Linux Command Line: A Complete Introduction](https://www.amazon.com/dp/1593273894/)
    - eine moderne Variante
- [TCP/IP Illustrated Series](https://en.wikipedia.org/wiki/TCP/IP_Illustrated)
- [Head First Design Patterns](https://www.amazon.com/gp/product/0596007124/)
    - eine behutsame Einführung zu Design Patterns
- [Design Patterns: Elements of Reusable Object-Oriente​d Software](https://www.amazon.com/Design-Patterns-Elements-Reusable-Object-Oriented/dp/0201633612)
    - auch bekannt als das "Gang Of Four" Buch, oder GOF
    - das anerkannte Buch zu Design Patterns
- [UNIX and Linux System Administration Handbook, 5th Edition](https://www.amazon.com/UNIX-Linux-System-Administration-Handbook/dp/0134277554/)
- [Algorithm Design Manual](http://www.amazon.com/Algorithm-Design-Manual-Steven-Skiena/dp/1849967202) (Skiena)
    - Als ein Rückblick und zur Problemerkennung
    - Der Katalog an Algorithmen ist weit über den Schwierigkeitsgrad, den man in Vorstellungsgesprächen hat.
    - Dieses Buch besteht aus 2 Teilen:
        - Textbuch über Datenstrukturen und Algorithmen
            - Vorteile:
                - guter Rückblick wie jedes Algorithmen Textbuch es wäre
                - nette Erfahrungsberichte wie er Probleme gelöst hat aus der Industrie oder in der akademischen Welt
                - Codebeispiele in C
            - Nachteile:
                - kann so vollgestopft und unzugänglich sein wie CLRS, und bei einigen Themen wäre CLRS die bessere Wahl
                - Kapitel 7, 8, 9 sind extrem schwer zu folgen, weil einige Dinge nicht gut erklärt werden oder ich einfach zu dumm bin
                - versteh mich nicht falsch: Ich mag Skiena, seine Art zu unterrichten, seine Eigenheiten, aber ich mag nicht das Stony Brook Material.
        - Algorithmenkatalog:
            - Das ist der eigentliche Grund, weswegen ich dieses Buch gekauft habe.
            - muss mich noch einlesen. Werde das hier ergänzen, sobald ich durch bin.
    - kann man auf den Kindle ausleihen
    - Antworten:
        - [Lösungen](http://www.algorithm.cs.sunysb.edu/algowiki/index.php/The_Algorithms_Design_Manual_(Second_Edition))
        - [Lösungen](http://blog.panictank.net/category/algorithmndesignmanualsolutions/page/2/)
    - [Korrekturverzeichnis](http://www3.cs.stonybrook.edu/~skiena/algorist/book/errata)

- [Introduction to Algorithms](https://www.amazon.com/Introduction-Algorithms-3rd-MIT-Press/dp/0262033844)
    - **Wichtig:** Das Buch zu lesen ist nur eingeschränkt von Nutzen. Das Buch ist ein toller Rückblick auf Algorithmen und Datenstrukturen, aber man lernt dadurch nicht guten Code zu schreiben. Man muss in der Lage sein effizient vernünftigen Code zu schreiben.
    - aka CLR, manchmal CLRS, weil Stein erst später dazu kam

- [Computer Architecture, Sixth Edition: A Quantitative Approach](https://www.amazon.com/dp/0128119055)
    - Für eine tiefere, aktuellere (2017), aber auch längere Behandlung

- [Programming Pearls](http://www.amazon.com/Programming-Pearls-2nd-Jon-Bentley/dp/0201657880)
    - Die ersten paar Kapitel beinhalten clevere Lösungen auf Programmieraufgaben (einige sehr alte mit Datenkasetten) aber
      es reicht aus für eine Einführung. Das ist ein Ratgeber zu Programmentwurf und -architektur, vergleichbar mit Code Complete, aber viel kürzer.

</details>

</details>

## Zusätzliches Wissen

<details>
<summary>Zusätzliches Wissen</summary>

Diese Themen werden vermutlich nicht in einen Vorstellungsgespräch aufkommen, aber ich habe sie trotzdem hinzugefügt
um euch dabei zu helfen ein vollständiger Softwareingenieur zu werden und damit ihr über bestimmte Technologien und
Algorithmen Bescheid wisst, sodass ihr eine größere Auswahl an Werkzeugen habt.

- ### Compiler
    - [ ] [How a Compiler Works in ~1 minute (video)](https://www.youtube.com/watch?v=IhC7sdYe-Jg)
    - [ ] [Harvard CS50 - Compilers (video)](https://www.youtube.com/watch?v=CSZLNYF4Klo)
    - [ ] [C++ (video)](https://www.youtube.com/watch?v=twodd1KFfGk)
    - [ ] [Understanding Compiler Optimization (C++) (video)](https://www.youtube.com/watch?v=FnGCDLhaxKU)

- ### Emacs und vi(m)
    - macht euch bekannt mit Unix-basierten Code Editoren
    - vi(m):
        - [Editing With vim 01 - Installation, Setup, and The Modes (video)](https://www.youtube.com/watch?v=5givLEMcINQ&index=1&list=PL13bz4SHGmRxlZVmWQ9DvXo1fEg4UdGkr)
        - [VIM Adventures](http://vim-adventures.com/)
        - Reihe mit 4 Videos:
            - [The vi/vim editor - Lesson 1](https://www.youtube.com/watch?v=SI8TeVMX8pk)
            - [The vi/vim editor - Lesson 2](https://www.youtube.com/watch?v=F3OO7ZIOaJE)
            - [The vi/vim editor - Lesson 3](https://www.youtube.com/watch?v=ZYEccA_nMaI)
            - [The vi/vim editor - Lesson 4](https://www.youtube.com/watch?v=1lYD5gwgZIA)
        - [Using Vi Instead of Emacs](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Using_Vi_instead_of_Emacs)
    - emacs:
        - [Basics Emacs Tutorial (video)](https://www.youtube.com/watch?v=hbmV1bnQ-i0)
        - Reihe mit 3 Videos:
            - [Emacs Tutorial (Beginners) -Part 1- File commands, cut/copy/paste, cursor commands](https://www.youtube.com/watch?v=ujODL7MD04Q)
            - [Emacs Tutorial (Beginners) -Part 2- Buffer management, search, M-x grep and rgrep modes](https://www.youtube.com/watch?v=XWpsRupJ4II)
            - [Emacs Tutorial (Beginners) -Part 3- Expressions, Statements, ~/.emacs file and packages](https://www.youtube.com/watch?v=paSgzPso-yc)
        - [Evil Mode: Or, How I Learned to Stop Worrying and Love Emacs (video)](https://www.youtube.com/watch?v=JWD1Fpdd4Pc)
        - [Writing C Programs With Emacs](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Writing_C_programs_with_Emacs)
        - [(maybe) Org Mode In Depth: Managing Structure (video)](https://www.youtube.com/watch?v=nsGYet02bEk)

- ### Unix Kommandozeilenwerkzeuge
    - Ich habe in die Liste unten nützliche Werkzeuge gepackt.
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

- ### Informationstheorie (Videos)
    - [ ] [Khan Academy](https://www.khanacademy.org/computing/computer-science/informationtheory)
    - [ ] mehr über Markov-Prozesse:
        - [ ] [Core Markov Text Generation](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/waxgx/core-markov-text-generation)
        - [ ] [Core Implementing Markov Text Generation](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/gZhiC/core-implementing-markov-text-generation)
        - [ ] [Project = Markov Text Generation Walk Through](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/EUjrq/project-markov-text-generation-walk-through)
    - für mehr, siehe "MIT 6.050J: Information and Entropy" weiter unten.

- ### Parität und Hamming Code (videos)
    - [ ] [Intro](https://www.youtube.com/watch?v=q-3BctoUpHE)
    - [ ] [Parity](https://www.youtube.com/watch?v=DdMcAUlxh1M)
    - [ ] Hamming Code:
        - [Error detection](https://www.youtube.com/watch?v=1A_NcXxdoCc)
        - [Error correction](https://www.youtube.com/watch?v=JAMLuxdHH8o)
    - [ ] [Error Checking](https://www.youtube.com/watch?v=wbH2VxzmoZk)

- ### Entropie
    - siehe Videos unten
    - stell sicher, dass du zuerst die Informationstheorie Videos gesehen hast
    - [ ] [Information Theory, Claude Shannon, Entropy, Redundancy, Data Compression & Bits (video)](https://youtu.be/JnJq3Py0dyM?t=176)

- ### Kryptographie
    - siehe Videos unten
    - stell sicher, dass du zuerst die Informationstheorie Videos gesehen hast
    - [ ] [Khan Academy Series](https://www.khanacademy.org/computing/computer-science/cryptography)
    - [ ] [Cryptography: Hash Functions](https://www.youtube.com/watch?v=KqqOXndnvic&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=30)
    - [ ] [Cryptography: Encryption](https://www.youtube.com/watch?v=9TNI2wHmaeI&index=31&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

- ### Kompression
    - stell sicher, dass du zuerst die Informationstheorie Videos gesehen hast
    - [ ] Computerphile (videos):
        - [ ] [Compression](https://www.youtube.com/watch?v=Lto-ajuqW3w)
        - [ ] [Entropy in Compression](https://www.youtube.com/watch?v=M5c_RFKVkko)
        - [ ] [Upside Down Trees (Huffman Trees)](https://www.youtube.com/watch?v=umTbivyJoiI)
        - [ ] [EXTRA BITS/TRITS - Huffman Trees](https://www.youtube.com/watch?v=DV8efuB3h2g)
        - [ ] [Elegant Compression in Text (The LZ 77 Method)](https://www.youtube.com/watch?v=goOa3DGezUA)
        - [ ] [Text Compression Meets Probabilities](https://www.youtube.com/watch?v=cCDCfoHTsaU)
    - [ ] [Compressor Head videos](https://www.youtube.com/playlist?list=PLOU2XLYxmsIJGErt5rrCqaSGTMyyqNt2H)
    - [ ] [(optional) Google Developers Live: GZIP is not enough!](https://www.youtube.com/watch?v=whGwm0Lky2s)

- ### Sicherheit
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

- ### Garbage collection (automatische Speicherbereinigung)
    - [ ] [GC in Python (video)](https://www.youtube.com/watch?v=iHVs_HkjdmI)
    - [ ] [Deep Dive Java: Garbage Collection is Good!](https://www.infoq.com/presentations/garbage-collection-benefits)
    - [ ] [Deep Dive Python: Garbage Collection in CPython (video)](https://www.youtube.com/watch?v=P-8Z0-MhdQs&list=PLdzf4Clw0VbOEWOS_sLhT_9zaiQDrS5AR&index=3)

- ### Parallelisierung
    - [ ] [Coursera (Scala)](https://www.coursera.org/learn/parprog1/home/week/1)
    - [ ] [Efficient Python for High Performance Parallel Computing (video)](https://www.youtube.com/watch?v=uY85GkaYzBk)

- ### Messaging, Serialisierung und Queueing Systeme
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

- ### A*
    - [ ] [A Search Algorithm](https://en.wikipedia.org/wiki/A*_search_algorithm)
    - [ ] [A* Pathfinding Tutorial (video)](https://www.youtube.com/watch?v=KNXfSOx4eEE)
    - [ ] [A* Pathfinding (E01: algorithm explanation) (video)](https://www.youtube.com/watch?v=-L-WgKMFuhE)

- ### Fast Fourier Transform
    - [ ] [An Interactive Guide To The Fourier Transform](https://betterexplained.com/articles/an-interactive-guide-to-the-fourier-transform/)
    - [ ] [What is a Fourier transform? What is it used for?](http://www.askamathematician.com/2012/09/q-what-is-a-fourier-transform-what-is-it-used-for/)
    - [ ] [What is the Fourier Transform? (video)](https://www.youtube.com/watch?v=Xxut2PN-V8Q)
    - [ ] [Divide & Conquer: FFT (video)](https://www.youtube.com/watch?v=iTMn0Kt18tg&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=4)
    - [ ] [Understanding The FFT](http://jakevdp.github.io/blog/2013/08/28/understanding-the-fft/)

- ### Bloom Filter
	- Gegeben ein Bloom Filter mit m Bits und k Hashingfunktionen, beides insertion und membership-Tests sind O(k)
    - [Bloom Filters (video)](https://www.youtube.com/watch?v=-SuTGoFYjZs)
    - [Bloom Filters | Mining of Massive Datasets | Stanford University (video)](https://www.youtube.com/watch?v=qBTdukbzc78)
    - [Tutorial](http://billmill.org/bloomfilter-tutorial/)
    - [How To Write A Bloom Filter App](http://blog.michaelschmatz.com/2016/04/11/how-to-write-a-bloom-filter-cpp/)

- ### HyperLogLog
    - [How To Count A Billion Distinct Objects Using Only 1.5KB Of Memory](http://highscalability.com/blog/2012/4/5/big-data-counting-how-to-count-a-billion-distinct-objects-us.html)

- ### Locality-Sensitive Hashing
    - wird benutzt um die Ähnlichkeit von Dokumenten zu bestimmen
    - Das Gegenteil von MD5 oder SHA, die benutzt werden, um festzustellen ob 2 Dokumente/Strings genau gleich sind.
    - [Simhashing (hopefully) made simple](http://ferd.ca/simhashing-hopefully-made-simple.html)

- ### van Emde Boas Trees
    - [ ] [Divide & Conquer: van Emde Boas Trees (video)](https://www.youtube.com/watch?v=hmReJCupbNU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=6)
    - [ ] [MIT Lecture Notes](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-046j-design-and-analysis-of-algorithms-spring-2012/lecture-notes/MIT6_046JS12_lec15.pdf)

- ### Augmentierte Datenstrukturen
    - [ ] [CS 61B Lecture 39: Augmenting Data Structures](https://archive.org/details/ucberkeley_webcast_zksIj9O8_jc)

- ### Balanced search trees (Balancierte Suchbäume)
	- mind. 1 Art von Balancierten Suchbäumen kennen (und wissen wie es implementiert wird)
    - "Among balanced search trees, AVL and 2/3 trees are now passé, and red-black trees seem to be more popular.
        A particularly interesting self-organizing data structure is the splay tree, which uses rotations
        to move any accessed key to the root." - Skiena
    - Ich habe mich dazu entschieden einen Splay Tree zu implementieren. Von dem was ich gelesen habe, wird man kein
        balancierten Suchbaum in einem Vorstellungsgespräch implementieren. Aber ich wollte die Erfahrung machen selber einen zu coden
        und seien wir mal ehrlich, Splay Trees sind Alleskönner. Ich habe eine Menge Code für Rot-Schwarz Bäume gelesen.
        - Splay Tree: insert, search, delete Funktionen
		Falls man mit einen Rot-Schwarz Baum endet, versuch das:
        - search und insertion Funktionen, delete überspringen
    - Ich möchte mehr über B-Bäume lernen, da sie so weit verbreitet sind bei riesigen Datenmengen.
    - [ ] [Self-balancing binary search tree](https://en.wikipedia.org/wiki/Self-balancing_binary_search_tree)

    - [ ] **AVL Trees**
        - In der Praxis:
			Meines Wissens nach werden sie nicht so oft in der Praxis verwendet, aber ich könnte mir vorstellen wo sie verwendet werden:
            Der AVL Tree ist eine weitere Datenstruktur die O(log n) Suchen, Einfügen und Löschen unterstützt.
			Sie sind strenger balanciert als Rot-Schwarz Bäume, was das Einfügen und Löschen verlangsamt aber das Auslesen beschleunigt.
			Das macht sie attraktiv für Datenstrukturen die nur einmal aufgebaut und geladen werden ohne Umbau,
			so wie Wörterbücher für Sprachen (oder für Programme, wie z.B. der Opcode eines Assemblers oder Interpreters).
        - [ ] [MIT AVL Trees / AVL Sort (video)](https://www.youtube.com/watch?v=FNeL18KsWPc&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=6)
        - [ ] [AVL Trees (video)](https://www.coursera.org/learn/data-structures/lecture/Qq5E0/avl-trees)
        - [ ] [AVL Tree Implementation (video)](https://www.coursera.org/learn/data-structures/lecture/PKEBC/avl-tree-implementation)
        - [ ] [Split And Merge](https://www.coursera.org/learn/data-structures/lecture/22BgE/split-and-merge)

    - [ ] **Splay Trees**
        - In der Praxis:
			Splay Trees werden typischerweise bei der Implementierung von Caches, Speicherverwaltung, Routers, Garbage Collectoren,
			Datenkompression, Ropes (Ersatz für String, gebraucht für lange Texte), in Windows NT (im virtuellen Speicher,
			Netzwerk und Dateisystem Code) etc. verwendet
        - [ ] [CS 61B: Splay Trees (video)](https://archive.org/details/ucberkeley_webcast_G5QIXywcJlY)
        - [ ] MIT Vorlesung: Splay Trees:
            - Wird sehr mathematisch, aber man sollte sich auf jeden Fall die letzten 10 Minuten ansehen.
            - [Video](https://www.youtube.com/watch?v=QnPl_Y6EqMo)

    - [ ] **Red/black trees (Rot-Schwarz Bäume)**
        - sind eine umgewandelte Form von 2-3 Bäumen (siehe unten)
        - In der Praxis:
			Rot-Schwarz Bäume bieten eine worst-case Laufzeitgarantie für Einfügen, Löschen und suchen.
			Das macht sie nicht nur wertvoll für zeitkritische Anwendungen wie Echtzeitanwendungen,
			sondern es macht sie auch zu wertvollen Bausteinen in andere Datenstrukturen mit worst-case Garantien.
			Z.B. viele Datenstrukturen aus der algorithmischen Geometrie können auf Rot-Schwarz Bäumen basieren,
			und der Completely Fair Scheduler der in aktuellen Linux Kernels verwendet wird benutzt Rot-Schwaz Bäume.
			In Java 8 wurde die Collection Hashmap so angepasst, dass anstelle einer verketteten Listen ein Rot-Schwarz Baum
			benutzt wird, um identische Elemente mit schlechten Hashwerten zu speichern.
        - [ ] [Aduni - Algorithms - Lecture 4 (Link springt direkt zum Anfang) (video)](https://youtu.be/1W3x0f_RmUo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3871)
        - [ ] [Aduni - Algorithms - Lecture 5 (video)](https://www.youtube.com/watch?v=hm2GHwyKF1o&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=5)
        - [ ] [Red-Black Tree](https://en.wikipedia.org/wiki/Red%E2%80%93black_tree)
        - [ ] [An Introduction To Binary Search And Red Black Tree](https://www.topcoder.com/community/competitive-programming/tutorials/an-introduction-to-binary-search-and-red-black-trees/)

    - [ ] **2-3 Bäume**
        - In der Praxis:
            Bei 2-3 Suchbäumen kann man schneller einfügen zu Lasten von langsameren Suchen (weil die Höhe größer ist verglichen mit AVL Trees).
        - Man würde einen 2-3 Tree nur sehr selten verwenden, weil deren Implementierung mehrere verschiedene Arten von Knoten umfasst. Stattdessen benutzt man Rot-Schwarz Bäume.
        - [ ] [23-Tree Intuition and Definition (video)](https://www.youtube.com/watch?v=C3SsdUqasD4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=2)
        - [ ] [Binary View of 23-Tree](https://www.youtube.com/watch?v=iYvBtGKsqSg&index=3&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [ ] [2-3 Trees (student recitation) (video)](https://www.youtube.com/watch?v=TOb1tuEZ2X4&index=5&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

    - [ ] **2-3-4 Bäume (aka 2-4 Bäume)**
        - In der Praxis:
			Für jeden 2-4 Baum existiert ein Rot-Schwarz Baum mit Datenelementen in derselben Reihenfolge.
			Das Einfügen und Löschen auf 2-4 Bäumen ist äquivalent zum Farbwechsel und Rotation im Rot-Schwarz Baum.
			Das macht 2-4 Bäume zu einem wichtigen Werkzeug, um die Logik hinter Rot-Schwarz Bäumen zu verstehen.
			Und deswegen führen viele Algorithmen Bücher für Einsteiger 2-4 Bäume direkt vor Rot-Schwarz Bäumen ein
			selbst obwohl **2-4 Trees nicht oft in der Praxis benutzt werden**.
        - [ ] [CS 61B Lecture 26: Balanced Search Trees (video)](https://archive.org/details/ucberkeley_webcast_zqrqYXkth6Q)
        - [ ] [Bottom Up 234-Trees (video)](https://www.youtube.com/watch?v=DQdMYevEyE4&index=4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [ ] [Top Down 234-Trees (video)](https://www.youtube.com/watch?v=2679VQ26Fp4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=5)

    - [ ] **N-fache (K-fache, M-fache) Bäume**
        - Notiz: das N oder K ist der Verzweigungsgrad (max. Zweige)
        - Binärbäume sind 2-fache Bäume, mit Verzweigungsgrad = 2
        - 2-3 Trees sind 3-fache
        - [ ] [K-Ary Tree](https://en.wikipedia.org/wiki/K-ary_tree)

    - [ ] **B-Bäume**
        - Fun Fact: Es ist ein Mysterium, aber das B könnte für Boeing, Balanciert, oder Bayer (Co-Erfinder) stehen
        - In der Praxis:
			B-Bäume sind weit verbreitet in Datenbanken. Die meisten modernen Dateisysteme sind B-Bäume (oder Varianten davon).
            Zusätzlich zum Einsatz in Datenbanken werden B-Bäume auch in Dateisystemen benutzt, um schnellen Zugriff auf einen
			beliebigen Block in einer bestimmten Datei zu ermöglichen.
			Das Grundproblem ist es die Adresse eines Dateiblockes in die Adresse eines Diskblocks (oder eines Zylinder-Kopf-Sektors) zu verwandeln.
        - [ ] [B-Tree](https://en.wikipedia.org/wiki/B-tree)
        - [ ] [Introduction to B-Trees (video)](https://www.youtube.com/watch?v=I22wEC1tTGo&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=6)
        - [ ] [B-Tree Definition and Insertion (video)](https://www.youtube.com/watch?v=s3bCdZGrgpA&index=7&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [ ] [B-Tree Deletion (video)](https://www.youtube.com/watch?v=svfnVhJOfMc&index=8&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [ ] [MIT 6.851 - Memory Hierarchy Models (video)](https://www.youtube.com/watch?v=V3omVLzI0WE&index=7&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf)
                - behandelt cache-oblivious B-Bäume, sehr interessante Datenstrukturen
                - die ersten 37 Minuten sind sehr technisch, können übersprungen werden (B ist Blockgröße, Cache Zeilen Länge)


- ### k-D Bäume
    - großartig um mehrere Punkte in einem Rechteck oder höherdimensionalen Objekten zu finden
    - gut geeignet für k-nearest neighbors
    - [ ] [Kd Trees (video)](https://www.youtube.com/watch?v=W94M9D_yXKk)
    - [ ] [kNN K-d tree algorithm (video)](https://www.youtube.com/watch?v=Y4ZgLlDfKDg)

- ### Skip Listen
    - "These are somewhat of a cult data structure" - Skiena
    - [ ] [Randomization: Skip Lists (video)](https://www.youtube.com/watch?v=2g9OSRKJuzM&index=10&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [For animations and a little more detail](https://en.wikipedia.org/wiki/Skip_list)

- ### Netzwerkflüsse
    - [ ] [Ford-Fulkerson in 5 minutes — Step by step example (video)](https://www.youtube.com/watch?v=Tl90tNtKvxs)
    - [ ] [Ford-Fulkerson Algorithm (video)](https://www.youtube.com/watch?v=v1VgJmkEJW0)
    - [ ] [Network Flows (video)](https://www.youtube.com/watch?v=2vhN4Ice5jI)

- ### Disjunkte Mengen & Union Find
    - [ ] [UCB 61B - Disjoint Sets; Sorting & selection (video)](https://archive.org/details/ucberkeley_webcast_MAEGXTwmUsI)
    - [ ] [Sedgewick Algorithms - Union-Find (6 videos)](https://www.coursera.org/learn/algorithms-part1/home/week/1)

- ### Mathematik für schnelle Berechnungen
    - [ ] [Integer Arithmetic, Karatsuba Multiplication (video)](https://www.youtube.com/watch?v=eCaXlAaN2uE&index=11&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [The Chinese Remainder Theorem (used in cryptography) (video)](https://www.youtube.com/watch?v=ru7mWZJlRQg)

- ### Treap
    - Kombination eines binären Suchbaums mit einem Heap
    - [ ] [Treap](https://en.wikipedia.org/wiki/Treap)
    - [ ] [Data Structures: Treaps explained (video)](https://www.youtube.com/watch?v=6podLUYinH8)
    - [ ] [Applications in set operations](https://www.cs.cmu.edu/~scandal/papers/treaps-spaa98.pdf)

- ### Lineare Programmierung (videos)
    - [ ] [Linear Programming](https://www.youtube.com/watch?v=M4K6HYLHREQ)
    - [ ] [Finding minimum cost](https://www.youtube.com/watch?v=2ACJ9ewUC6U)
    - [ ] [Finding maximum value](https://www.youtube.com/watch?v=8AA_81xI3ik)
    - [ ] [Solve Linear Equations with Python - Simplex Algorithm](https://www.youtube.com/watch?v=44pAWI7v5Zk)

- ### Geometrie, Konvexe Hülle (videos)
    - [ ] [Graph Alg. IV: Intro to geometric algorithms - Lecture 9](https://youtu.be/XIAQRlNkJAw?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3164)
    - [ ] [Geometric Algorithms: Graham & Jarvis - Lecture 10](https://www.youtube.com/watch?v=J5aJEcOr6Eo&index=10&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
    - [ ] [Divide & Conquer: Convex Hull, Median Finding](https://www.youtube.com/watch?v=EzeYI7p9MjU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=2)

- ### Diskrete Mathematik
    - siehe Videos unten

- ### Machine Learning
    - [ ] Warum ML?
        - [ ] [How Google Is Remaking Itself As A Machine Learning First Company](https://backchannel.com/how-google-is-remaking-itself-as-a-machine-learning-first-company-ada63defcb70)
        - [ ] [Large-Scale Deep Learning for Intelligent Computer Systems (video)](https://www.youtube.com/watch?v=QSaZGT4-6EY)
        - [ ] [Deep Learning and Understandability versus Software Engineering and Verification by Peter Norvig](https://www.youtube.com/watch?v=X769cyzBNVw)
    - [ ] [Google's Cloud Machine learning tools (video)](https://www.youtube.com/watch?v=Ja2hxBAwG_0)
    - [ ] [Google Developers' Machine Learning Recipes (Scikit Learn & Tensorflow) (video)](https://www.youtube.com/playlist?list=PLOU2XLYxmsIIuiBfYad6rFYQU_jL2ryal)
    - [ ] [Tensorflow (video)](https://www.youtube.com/watch?v=oZikw5k_2FM)
    - [ ] [Tensorflow Tutorials](https://www.tensorflow.org/versions/r0.11/tutorials/index.html)
    - [ ] [Practical Guide to implementing Neural Networks in Python (using Theano)](http://www.analyticsvidhya.com/blog/2016/04/neural-networks-python-theano/)
    - Kurse:
        - [Great starter course: Machine Learning](https://www.coursera.org/learn/machine-learning)
              - [nur Videos](https://www.youtube.com/playlist?list=PLZ9qNFMHZ-A4rycgrgOYma6zxF4BZGGPW)
              - siehe Videos 12-18 für eine Auffrischung zu Linearer Algebra (14 und 15 sind Duplikate)
        - [Neural Networks for Machine Learning](https://www.coursera.org/learn/neural-networks)
        - [Google's Deep Learning Nanodegree](https://www.udacity.com/course/deep-learning--ud730)
        - [Google/Kaggle Machine Learning Engineer Nanodegree](https://www.udacity.com/course/machine-learning-engineer-nanodegree-by-google--nd009)
        - [Self-Driving Car Engineer Nanodegree](https://www.udacity.com/drive)
        - [Metis Online Course ($99 for 2 months)](http://www.thisismetis.com/explore-data-science)
    - Quellen:
        - Bücher:
            - [Python Machine Learning](https://www.amazon.com/Python-Machine-Learning-Sebastian-Raschka/dp/1783555130/)
            - [Data Science from Scratch: First Principles with Python](https://www.amazon.com/Data-Science-Scratch-Principles-Python/dp/149190142X)
            - [Introduction to Machine Learning with Python](https://www.amazon.com/Introduction-Machine-Learning-Python-Scientists/dp/1449369413/)
        - [Machine Learning for Software Engineers](https://github.com/ZuzooVn/machine-learning-for-software-engineers)
        - Data School: http://www.dataschool.io/

</details>

---

## Weitere Details zu ausgewählten Themen

<details>
<summary>Weitere Details zu ausgewählten Themen</summary>

	Ich habe das hinzugefügt, um einige Ideen weiter oben zu verstärken, aber ich wollte sie nicht 
	oben hinzufügen, weil es sonst zu viel wäre. Es ist leicht es mit einen Thema zu übertreiben.
	Ihr wollt doch noch in diesem Jahrhundert eingestellt werden, oder?

- [ ] **Union-Find**
    - [ ] [Overview](https://www.coursera.org/learn/data-structures/lecture/JssSY/overview)
    - [ ] [Naive Implementation](https://www.coursera.org/learn/data-structures/lecture/EM5D0/naive-implementations)
    - [ ] [Trees](https://www.coursera.org/learn/data-structures/lecture/Mxu0w/trees)
    - [ ] [Union By Rank](https://www.coursera.org/learn/data-structures/lecture/qb4c2/union-by-rank)
    - [ ] [Path Compression](https://www.coursera.org/learn/data-structures/lecture/Q9CVI/path-compression)
    - [ ] [Analysis Options](https://www.coursera.org/learn/data-structures/lecture/GQQLN/analysis-optional)

- [ ] **Mehr Dynamische Programmierung** (Videos)
    - [ ] [6.006: Dynamic Programming I: Fibonacci, Shortest Paths](https://www.youtube.com/watch?v=OQ5jsbhAv_M&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=19)
    - [ ] [6.006: Dynamic Programming II: Text Justification, Blackjack](https://www.youtube.com/watch?v=ENyox7kNKeY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=20)
    - [ ] [6.006: DP III: Parenthesization, Edit Distance, Knapsack](https://www.youtube.com/watch?v=ocZMDMZwhCY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=21)
    - [ ] [6.006: DP IV: Guitar Fingering, Tetris, Super Mario Bros.](https://www.youtube.com/watch?v=tp4_UXaVyx8&index=22&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [6.046: Dynamic Programming & Advanced DP](https://www.youtube.com/watch?v=Tw1k46ywN6E&index=14&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [6.046: Dynamic Programming: All-Pairs Shortest Paths](https://www.youtube.com/watch?v=NzgFUwOaoIw&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=15)
    - [ ] [6.046: Dynamic Programming (student recitation)](https://www.youtube.com/watch?v=krZI60lKPek&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=12)

- [ ] **Fortgeschrittene Graphbearbeitung** (Videos)
    - [ ] [Synchronous Distributed Algorithms: Symmetry-Breaking. Shortest-Paths Spanning Trees](https://www.youtube.com/watch?v=mUBmcbbJNf4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=27)
    - [ ] [Asynchronous Distributed Algorithms: Shortest-Paths Spanning Trees](https://www.youtube.com/watch?v=kQ-UQAzcnzA&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=28)

- [ ] MIT **Wahrscheinlichkeit** (mathematisch, es wird langsam angegangen, was gut bei Mathe ist) (Videos):
    - [ ] [MIT 6.042J - Probability Introduction](https://www.youtube.com/watch?v=SmFwFdESMHI&index=18&list=PLB7540DEDD482705B)
    - [ ] [MIT 6.042J - Conditional Probability](https://www.youtube.com/watch?v=E6FbvM-FGZ8&index=19&list=PLB7540DEDD482705B)
    - [ ] [MIT 6.042J - Independence](https://www.youtube.com/watch?v=l1BCv3qqW4A&index=20&list=PLB7540DEDD482705B)
    - [ ] [MIT 6.042J - Random Variables](https://www.youtube.com/watch?v=MOfhhFaQdjw&list=PLB7540DEDD482705B&index=21)
    - [ ] [MIT 6.042J - Expectation I](https://www.youtube.com/watch?v=gGlMSe7uEkA&index=22&list=PLB7540DEDD482705B)
    - [ ] [MIT 6.042J - Expectation II](https://www.youtube.com/watch?v=oI9fMUqgfxY&index=23&list=PLB7540DEDD482705B)
    - [ ] [MIT 6.042J - Large Deviations](https://www.youtube.com/watch?v=q4mwO2qS2z4&index=24&list=PLB7540DEDD482705B)
    - [ ] [MIT 6.042J - Random Walks](https://www.youtube.com/watch?v=56iFMY8QW2k&list=PLB7540DEDD482705B&index=25)

- [ ] [Simonson: Approximation Algorithms (video)](https://www.youtube.com/watch?v=oDniZCmNmNw&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=19)

- [ ] **String Matching**
    - [ ] Rabin-Karp (videos):
        - [Rabin Karps Algorithm](https://www.coursera.org/learn/data-structures/lecture/c0Qkw/rabin-karps-algorithm)
        - [Precomputing](https://www.coursera.org/learn/data-structures/lecture/nYrc8/optimization-precomputation)
        - [Optimization: Implementation and Analysis](https://www.coursera.org/learn/data-structures/lecture/h4ZLc/optimization-implementation-and-analysis)
        - [Table Doubling, Karp-Rabin](https://www.youtube.com/watch?v=BRO7mVIFt08&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=9)
        - [Rolling Hashes, Amortized Analysis](https://www.youtube.com/watch?v=w6nuXg0BISo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=32)
    - [ ] Knuth-Morris-Pratt (KMP):
        - [The Knuth-Morris-Pratt (KMP) String Matching Algorithm](https://www.youtube.com/watch?v=5i7oKodCRJo)
    - [ ] Boyer–Moore string search algorithm
        - [Boyer-Moore String Search Algorithm](https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_string_search_algorithm)
        - [Advanced String Searching Boyer-Moore-Horspool Algorithms (video)](https://www.youtube.com/watch?v=QDZpzctPf10)
    - [ ] [Coursera: Algorithms on Strings](https://www.coursera.org/learn/algorithms-on-strings/home/week/1)
        - fängt großartig an, wird aber nach KMP viel schwieriger als es sein müsste
        - gute Erklärung von Tries
        - kann übersprungen werden

- [ ] **Sortierung**

    - [ ] Stanford Vorlesungen über Sortierung:
        - [ ] [Lecture 15 | Programming Abstractions (video)](https://www.youtube.com/watch?v=ENp00xylP7c&index=15&list=PLFE6E58F856038C69)
        - [ ] [Lecture 16 | Programming Abstractions (video)](https://www.youtube.com/watch?v=y4M9IVgrVKo&index=16&list=PLFE6E58F856038C69)
    - [ ] Shai Simonson, [Aduni.org](http://www.aduni.org/):
        - [ ] [Algorithms - Sorting - Lecture 2 (video)](https://www.youtube.com/watch?v=odNJmw5TOEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=2)
        - [ ] [Algorithms - Sorting II - Lecture 3 (video)](https://www.youtube.com/watch?v=hj8YKFTFKEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=3)
    - [ ] Steven Skiena Vorlesungen über Sortierung:
        - [ ] [Vorlesung beginnt ab 26:46 (video)](https://youtu.be/ute-pmMkyuk?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1600)
        - [ ] [Vorlesung beginnt ab 27:40 (video)](https://www.youtube.com/watch?v=yLvp-pB8mak&index=8&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [ ] [Vorlesung beginnt ab 35:00 (video)](https://www.youtube.com/watch?v=q7K9otnzlfE&index=9&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [ ] [Vorlesung beginnt ab 23:50 (video)](https://www.youtube.com/watch?v=TvqIGu9Iupw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=10)

</details>

## Videoreihen

Zurücklehnen und genießen. "Netflix and skill" :P

<details>
<summary>Videoreihen</summary>

- [ ] [Liste einzelnen Dynamische Programmierung Probleme (jedes ist kurz)](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)

- [ ] [x86 Architecture, Assembly, Applications (11 videos)](https://www.youtube.com/playlist?list=PL038BE01D3BAEFDB0)

- [ ] [MIT 18.06 Linear Algebra, Spring 2005 (35 videos)](https://www.youtube.com/playlist?list=PLE7DDD91010BC51F8)

- [ ] [Excellent - MIT Calculus Revisited: Single Variable Calculus](https://www.youtube.com/playlist?list=PL3B08AE665AB9002A)

- [ ] [Computer Science 70, 001 - Spring 2015 - Discrete Mathematics and Probability Theory](http://www.infocobuild.com/education/audio-video-courses/computer-science/cs70-spring2015-berkeley.html)

- [ ] [Discrete Mathematics von Shai Simonson (19 videos)](https://www.youtube.com/playlist?list=PL3o9D4Dl2FJ9q0_gtFXPh_H4POI5dK0yG)

- [ ] [Discrete Mathematics Part 1 von Sarada Herke (5 videos)](https://www.youtube.com/playlist?list=PLGxuz-nmYlQPOc4w1Kp2MZrdqOOm4Jxeo)

- [ ] CSE373 - Analysis of Algorithms (25 videos)
    - [Skiena Vorlesungen vom Algorithm Design Manual](https://www.youtube.com/watch?v=ZFjhkohHdAA&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=1)

- [ ] [UC Berkeley 61B (Spring 2014): Data Structures (25 videos)](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd)

- [ ] [UC Berkeley 61B (Fall 2006): Data Structures (39 videos)](https://archive.org/details/ucberkeley-webcast-PL4BBB74C7D2A1049C)

- [ ] [UC Berkeley 61C: Machine Structures (26 videos)](https://archive.org/details/ucberkeley-webcast-PL-XXv-cvA_iCl2-D-FS5mk0jFF6cYSJs_)

- [ ] [OOSE: Software Dev Using UML and Java (21 videos)](https://www.youtube.com/playlist?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)

- [ ] ~~[UC Berkeley CS 152: Computer Architecture and Engineering (20 videos)](https://www.youtube.com/watch?v=UH0QYvtP7Rk&index=20&list=PLkFD6_40KJIwEiwQx1dACXwh-2Fuo32qr)~~

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

- [ ] [Stanford: Programming Paradigms (27 videos)](https://www.youtube.com/view_play_list?p=9D558D49CA734A02)

- [ ] [Introduction to Cryptography von Christof Paar](https://www.youtube.com/playlist?list=PL6N5qY2nvvJE8X75VkXglSrVhLv1tVcfy)
    - [KurswWebseite mit Folien und Problemstellungen](http://www.crypto-textbook.com/)

- [ ] [Mining Massive Datasets - Stanford University (94 videos)](https://www.youtube.com/playlist?list=PLLssT5z_DsK9JDLcT8T62VtzwyW9LNepV)

- [ ] [Graph Theory von Sarada Herke (67 videos)](https://www.youtube.com/user/DrSaradaHerke/playlists?shelf_id=5&view=50&sort=dd)

</details>

## Informatikkurse

- [Liste von Online Informatikkursen](https://github.com/open-source-society/computer-science)
- [Liste von Informatikkursen (viele mit Online Vorlesungen)](https://github.com/prakhar1989/awesome-courses)

## Paper (Wissenschaftliche Veröffentlichtungen)

<details>
<summary>Paper (Wissenschaftliche Veröffentlichtungen)</summary>

- [Liebst du klassische Paper?](https://www.cs.cmu.edu/~crary/819-f09/)
- [ ] [1978: Communicating Sequential Processes](http://spinroot.com/courses/summer/Papers/hoare_1978.pdf)
    - [implementiert in Go](https://godoc.org/github.com/thomas11/csp)
- [ ] [2003: The Google File System](http://static.googleusercontent.com/media/research.google.com/en//archive/gfs-sosp2003.pdf)
    - ersetzt durch Colossus in 2012
- [ ] [2004: MapReduce: Simplified Data Processing on Large Clusters]( http://static.googleusercontent.com/media/research.google.com/en//archive/mapreduce-osdi04.pdf)
    - größtenteils ersetzt durch Cloud Dataflow?
- [ ] [2006: Bigtable: A Distributed Storage System for Structured Data](https://static.googleusercontent.com/media/research.google.com/en//archive/bigtable-osdi06.pdf)
    - [An Inside Look at Google BigQuery](https://cloud.google.com/files/BigQueryTechnicalWP.pdf)
- [ ] [2006: The Chubby Lock Service for Loosely-Coupled Distributed Systems](https://research.google.com/archive/chubby-osdi06.pdf)
- [ ] [2007: Dynamo: Amazon’s Highly Available Key-value Store](http://s3.amazonaws.com/AllThingsDistributed/sosp/amazon-dynamo-sosp2007.pdf)
    - Das Dynamo Paper hat die NoSQL Revolution ausgelöst.
- [ ] [2007: What Every Programmer Should Know About Memory (very long, and the author encourages skipping of some sections)](https://www.akkadia.org/drepper/cpumemory.pdf)
- [ ] [2010: Dapper, a Large-Scale Distributed Systems Tracing Infrastructure](https://research.google.com/pubs/archive/36356.pdf)
- [ ] [2010: Dremel: Interactive Analysis of Web-Scale Datasets](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/36632.pdf)
- [ ] [2012: Google's Colossus](https://www.wired.com/2012/07/google-colossus/)
    - Paper nicht verfügbar
- [ ] 2012: AddressSanitizer: A Fast Address Sanity Checker:
    - [paper](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/37752.pdf)
    - [video](https://www.usenix.org/conference/atc12/technical-sessions/presentation/serebryany)
- [ ] 2013: Spanner: Google’s Globally-Distributed Database:
    - [paper](http://static.googleusercontent.com/media/research.google.com/en//archive/spanner-osdi2012.pdf)
    - [video](https://www.usenix.org/node/170855)
- [ ] [2014: Machine Learning: The High-Interest Credit Card of Technical Debt](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43146.pdf)
- [ ] [2015: Continuous Pipelines at Google](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43790.pdf)
- [ ] [2015: High-Availability at Massive Scale: Building Google’s Data Infrastructure for Ads](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44686.pdf)
- [ ] [2015: TensorFlow: Large-Scale Machine Learning on Heterogeneous Distributed Systems](http://download.tensorflow.org/paper/whitepaper2015.pdf )
- [ ] [2015: How Developers Search for Code: A Case Study](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43835.pdf)
- [ ] [2016: Borg, Omega, and Kubernetes](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44843.pdf)

</details>

## Lizenz

[CC-BY-SA-4.0](./LICENSE.txt)
