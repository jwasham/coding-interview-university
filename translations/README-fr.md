# Coding Interview University

Traductions:
- [中文版本](README-cn.md)
- [Español (in progress)](README-es.md) [Issue #80](https://github.com/jwasham/coding-interview-university/issues/80)
- मानक हिन्दी (in progress) [Issue #81](https://github.com/jwasham/coding-interview-university/issues/81)

## C’est quoi

C'est un plan d'études de plusieurs mois pour aller d'un développeur web (Autodidacte, sans diplôme en informatique) à ingénieur logiciel google.

![Coding at the whiteboard - from HBO's Silicon Valley](https://d3j2pkmjtin6ou.cloudfront.net/coding-at-the-whiteboard-silicon-valley.png)

Cette longue liste a été extraite et étendue de **Google's coaching notes**, ce sont donc des choses que vous devez savoir.
En bas, j'ai rajouté des unités supplémentaires qui peuvent être soulevées pendant l'entretien, ou qui peuvent être utiles pour résoudre des problèmes. Plusieurs unités proviennent de
"[Get that job at Google](http://steve-yegge.blogspot.com/2008/03/get-that-job-at-google.html)" par Steve Yegge, et sont parfois reflétées mot pour mot dans les notes de coaching de google.

J'ai épuré ce que vous devez savoir de ce qui est recommandé par Yegge. J'ai modifié les prérequis de Yegge.
D'après les informations reçues de la part des contacts travaillant à Google. Ceci est destiné aux **new software engineers** ou aux développeurs logiciel/web qui souhaitent devenir des ingénieurs en génie logiciel (où la science de l'informatique est requise). Si vous avez plusieurs années d'expérience et vous déclarez plusieurs années d'expérience en génie logiciel attendez vous à un entretien plus dur.
[Read more here](https://googleyasheck.com/what-you-need-to-know-for-your-google-interview-and-what-you-dont/).

Si vous avez plusieurs années d'expérience en développement web/logiciel, notez que google font une distinction entre le développement logiciel et l'ingénierie en génie civil.

Si vous souhaitez devenir ingénieur de fiabilité, ou ingénieur systèmes, suivez plus de cours de la liste optionnelle (Réseau, sécurité)
---

## Table des matières

- [C’est quoi](#cest-quoi)
- [Pourquoi l'utiliser?](#pourquoi-lutiliser)
- [Comment s'en servir](#comment-sen-servir)
- [Se mettre dans l'humeur Googley](#se-mettre-dans-lhumeur-googley)
- [J'ai eu le job ?](#jai-eu-le-job)
- [Follow moi ailleurs](#follow-moi-ailleurs)
- [Ne vous sentez pas stupide](#ne-vous-sentez-pas-stupide)
- [A propos de Google](#a-propos-de-google)
- [Ressources video](#ressources-video)
- [Entretien et preparation](#entretien-et-preparation)
- [Choisis une langue pour l'entretien](#choisis-un-langage-pour-lentretien)
- [Liste de livres](#liste-de-livres)
- [Avant de commencer](#avant-de-commencer)
- [Points qui ne seront pas couverts](#points-qui-ne-seront-pas-couverts)
- [Condition requise](#condition-requise)
- [Plan quotidien](#plan-quotidien)
- [Complex algorithmique / Notation grand O / Analyse asymptotique](#complex-algorithmique--notation-grand-o--analyse-asymptotique)
- [Structures de donnee](#structures-de-donnees)
    - [Tableau](#tableau)
    - [Liste chainee](#liste-chainee)
    - [Pile](#pile)
    - [File](#file)
    - [Table de hachage](#table-de-hachage)
- [Plus de connaissance](#plus-de-connaissance)
    - [Recherche binaire](#recherche-binaire)
    - [Operations par bit](#operations-par-bit)
- [Arbres](#arbres)
    - [Arbres - Notes & Arriere plan](#arbres---notes--arriere-plan)
    - [Arbres binaires de recherche](#arbres-binaires-de-recherche)
    - [Tas / File de Priorite / Tas binaire](#tas--file-de-priorite--tas-binaire)
    - Arbre de recherche équilibré (concept general, non détaillé)
    - Parcours : Préfixe, infixe, postfixe, BFS, DFS
- [Tri](#tri)
    - Sélection
    - Insertion
    - Tri par tas
    - Tri rapide
    - Tri fusion
- [Graphes](#graphes)
    - Orienté
    - Non orienté
    - Matrice d'adjacence
    - Liste d'adjacence
    - Parcours : BFS, DFS
- [Encore plus de connaissances](#encore-plus-de-connaissances)
    - [Recursivite](#recursivite)
    - [Programmation Orientee Objet](#programmation-orientee-objet)
    - [Modeles de conception](#modeles-de-conception)
    - [Combinatoire k parmi n et probabilite](#combinatoire-k-parmi-n-et-probabilite)
    - [NP NP complet et les algorithmes approximatif](#np-np-complet-et-les-algorithmes-approximatif)
    - [Caches](#caches)
    - [Processus et threads](#processus-et-threads)
    - [Articles de recherche](#articles-de-recherche)
    - [Tests](#tests)
    - [Ordonnancement](#ordonnancement)
    - [Implementation des routines systeme](#implementation-des-routines-systeme)
    - [Recherche et manipulation de chaines](#recherche-et-manipulation-de-chaines)

- [Conception système, Scalabilité, Gestion des données](#system-design-scalability-data-handling) (si vous avez 4+ années d'expérience)
- [Révision finale](#final-review)
- [Exercices de codage](#coding-question-practice)
- [Défis/exercices de programmation](#coding-exerciseschallenges)
- [Une fois que vous serez proche de l'entretien](#once-youre-closer-to-the-interview)
- [Votre CV](#your-resume)
- [À garder en tête pour l'entretien](#be-thinking-of-for-when-the-interview-comes)
- [Préparez vos questions pour l'entretien](#have-questions-for-the-interviewer)
- [Quand vous aurez obtenu le poste :](#once-youve-got-the-job)

---------------- Tout ce qui suit est facultatif ----------------

- [Livres supplémentaires](#additional-books)
- [Apprentissage supplémentaire](#additional-learning)
    - [Programmation dynamique](#dynamic-programming)
    - [Compilateurs](#compilers)
    - [Nombres à virgule flottante](#floating-point-numbers)
    - [Unicode](#unicode)
    - [Endianness](#endianness)
    - [Emacs et vi(m)](#emacs-and-vim)
    - [Outils en ligne de commande Unix](#unix-command-line-tools)
    - [Théorie de l'information](#information-theory)
    - [Parité et code de Hamming](#parity--hamming-code)
    - [Entropie](#entropy)
    - [Cryptographie](#cryptography)
    - [Compression](#compression)
    - [Réseautique](#networking) (si vous avez de l’expérience réseau ou souhaitez devenir ingénieur systèmes, attendez-vous à des questions)
    - [Sécurité informatique](#computer-security)
    - [Ramassage de déchets (Garbage collection)](#garbage-collection)
    - [Programmation parallèle](#parallel-programming)
    - [Messagerie, sérialisation et systèmes de file d'attente](#messaging-serialization-and-queueing-systems)
    - [Transformée de Fourier rapide](#fast-fourier-transform)
    - [Filtre de Bloom](#bloom-filter)
    - [HyperLogLog](#hyperloglog)
    - [Hachage sensible à la localité](#locality-sensitive-hashing)
    - [Arbres de van Emde Boas](#van-emde-boas-trees)
    - [Structures de données augmentées](#augmented-data-structures)
    - [Tries (arbres préfixes)](#tries)
    - [Arbres N-aires (K-aires, M-aires)](#n-ary-k-ary-m-ary-trees)
    - [Arbres de recherche équilibrés](#balanced-search-trees)
        - Arbres AVL
        - Arbres Splay
        - Arbres rouge/noir
        - Arbres de recherche 2-3
        - Arbres 2-3-4 (ou arbres 2-4)
        - Arbres N-aires (K-aires, M-aires)
        - Arbres B
    - [Arbres k-D](#k-d-trees)
    - [Listes Skip (listes à sauts)](#skip-lists)
    - [Flots de réseau](#network-flows)
    - [Mathématiques pour le traitement rapide](#math-for-fast-processing)
    - [Treap](#treap)
    - [Programmation linéaire](#linear-programming)
    - [Géométrie, enveloppe convexe](#geometry-convex-hull)
    - [Mathématiques discrètes](#discrete-math)
    - [Apprentissage automatique](#machine-learning)
    - [Go](#go)
- [Détails supplémentaires sur certains sujets](#additional-detail-on-some-subjects)
- [Séries vidéo](#video-series)
- [Cours d'informatique](#computer-science-courses)


---

## Pourquoi l'utiliser?

Je suis ce plan pour préparer mon entretien chez Google. J'ai construit le web, construit des services, et lancé des startups depuis 1997. J'ai un diplôme en économie, non pas d'informatique. J'ai eu beaucoup de succès dans ma carrière , mais je veux travailler chez Google. Je veux progresser sur de larges systèmes, et avec une réelle compréhension des systèmes informatiques, de l'efficacité algorithmique, de la performance des structures de données, de langages bas-niveau, et de comment ça marche. Et si vous ne connaissez rien de tout cela, Google ne vous engagera pas.

Quand j'ai commencé ce projet, je ne savais pas distinguer une pile d'un tas, ne connaissais rien sur le Grand O, rien sur les arbres, ou comment traverser un graphe. Si je devais coder un algorithme, je peux vous dire que ça n'aurait pas été très bon. Chaque structure de données que j'ai utilisée était construite dans le langage, et je ne savais pas du tout comment elles fonctionnaient sous le capot. Je n'avais jamais eu à gérer de mémoire sauf si un processus que j'exécutais donnais une erreur "Out of memory", et je devais alors trouver une parade. J'ai utilisé quelques tableaux multidimensionnels dans ma vie et des milliers de tableaux associatifs, mais je n'ai jamais créé de structures de données de zéro.

Mais après avoir suivi ce plan d'études, je suis confiant que je serai embauché. C'est un long plan. cela me prendra des mois. Si vous êtes déjà familier avec beaucoup de points, cela vous prendra beaucoup moins de temps.

## Comment s'en servir?

Tout ce qui suit est très important et vous devriez attaquer ces points dans l'ordre de haut en bas.

J'utilise la typologie Markdown de GitHub, incluant les listes de tâches pour suivre les progrès.

- [x] Créez une nouvelle branche afin de vérifier les éléments comme ceci, mettez juste un "x" entre crochets : [x]

    Effectuez un fork d'une branche et suivez les commandes suivantes

`git checkout -b progress`

`git remote add jwasham https://github.com/jwasham/coding-interview-university`

`git fetch --all`

    Cochez toutes les cases avec un X après avoir terminé vos modifications

`git add . `

`git commit -m "Marked x" `

`git rebase jwasham/main `

`git push --force `

[Plus sur Markdown à la sauce Github](https://guides.github.com/features/mastering-markdown/#GitHub-flavored-markdown)

## Se mettre dans l'humeur Googley

Imprimez une affiche “[futur Googler](https://github.com/jwasham/coding-interview-university/blob/main/extras/future-googler.pdf)” (ou deux) et gardez les yeux sur l’objectif.

[![future Googler sign](https://dng5l3qzreal6.cloudfront.net/2016/Oct/Screen_Shot_2016_10_04_at_10_13_24_AM-1475601104364.png)](https://github.com/jwasham/coding-interview-university/blob/main/extras/future-googler.pdf)


## J’ai eu le job ?

Je suis en actuellement en Queue, j'espere decrocher un entretient bientot.

    Thanks for the referral, JP.

## Follow moi ailleurs

Ma story: [Why I Studied Full-Time for 8 Months for a Google Interview](https://medium.com/@googleyasheck/why-i-studied-full-time-for-8-months-for-a-google-interview-cc662ce9bb13)

Je suis egalement sur cette voie, suivez moi sur:

- **Blog**: [GoogleyAsHeck.com](https://googleyasheck.com/)
- Twitter: [@googleyasheck](https://twitter.com/googleyasheck)
- Twitter: [@StartupNextDoor](https://twitter.com/StartupNextDoor)
- Google+: [+Googleyasheck](https://plus.google.com/+Googleyasheck)
- LinkedIn: [johnawasham](https://www.linkedin.com/in/johnawasham)

![John Washam - Coding Interview University](https://dng5l3qzreal6.cloudfront.net/2016/Aug/book_stack_photo_resized_18_1469302751157-1472661280368.png)

## Ne vous sentez pas stupide

- Les ingénieurs de Google sont intelligents, mais beaucoup ont comme insécurité qu'ils ne sont pas suffisamment intelligents, même s'ils travaillent pour Google.
- [Le mythe du programmeur génie](https://www.youtube.com/watch?v=0SARbwvhupQ)
- [C'est dangereux de rester seul: Combattre les monstres invisibles dans la Tech](https://www.youtube.com/watch?v=1i8ylq4j_EY)

## A propos de Google

- [ ] Pour les étudiants - [Carrières Google: Guide de développement technique](https://www.google.com/about/careers/students/guide-to-technical-development.html)
- [ ] Comment marche la recherche:
    - [ ] [L'évolution de la recherche (video)](https://www.youtube.com/watch?v=mTBShTwCnD4)
    - [ ] [Comment la recherche fonctionne - l'histoire](https://www.google.com/insidesearch/howsearchworks/thestory/)
    - [ ] [Comment la recherche fonctionne](https://www.google.com/insidesearch/howsearchworks/)
    - [ ] [Comment la recherche fonctionne - Matt Cutts (video)](https://www.youtube.com/watch?v=BNHR6IQJGZs)
    - [ ] [Comment Google améliore son algorithme de recherche (video)](https://www.youtube.com/watch?v=J5RZOU6vK4Q)
- [ ] Séries:
    - [ ] [Comment la recherche Google Search fonctionne sur mobile](https://backchannel.com/how-google-search-dealt-with-mobile-33bc09852dc9)
    - [ ] [L'étude secrète de Google pour découvrir nos besoins](https://backchannel.com/googles-secret-study-to-find-out-our-needs-eba8700263bf)
    - [ ] [La recherche Google Search sera votre prochain cerveau](https://backchannel.com/google-search-will-be-your-next-brain-5207c26e4523)
    - [ ] [L'esprit profond de Demis Hassabis](https://backchannel.com/the-deep-mind-of-demis-hassabis-156112890d8a)
- [ ] [Livre: Comment Google fonctionne](https://www.amazon.com/How-Google-Works-Eric-Schmidt/dp/1455582344)
- [ ] [Annonce faite par Google - Oct 2016 (video)](https://www.youtube.com/watch?v=q4y0KOeXViI)

## Ressources video

Certaines vidéos sont disponibles uniquement en s'inscrivant à une classe Coursera, EdX ou Lynda.com. Ce sont des MOOC.
Parfois, les cours ne sont pas en session, alors vous devez attendre quelques mois, donc vous n'y avez pas accès. Les cours sur Lynda.com ne sont pas gratuits.

    J'apprécierais votre aide pour ajouter des sources publiques gratuites et toujours disponibles, telles que des vidéos YouTube pour accompagner les vidéos de cours en ligne.
    J'aime utiliser les cours universitaires.


## Entretien et preparation

- [ ] Vidéos:
    - [ ] [Comment travailler à Google: Prépare pour une interview d'ingénieur (vidéo)](https://www.youtube.com/watch?v=ko-KkSmp-Lk)
    - [ ] [Comment travailler à Google: Exemple pour une entrevue de coding/ingénieur (vidéo)](https://www.youtube.com/watch?v=XKu_SEDAykw)
    - [ ] [Comment travailler à Google: Préparation pour le candidat (vidéo)](https://www.youtube.com/watch?v=oWbUtlUhwa8&feature=youtu.be)
    - [ ] [Les conseils pour les interviews par les employés (vidéo)](https://www.youtube.com/watch?v=qc1owf2-220&feature=youtu.be)
    - [ ] [Comment travailler à Google: Préparation pour ton résumé (vidéo)](https://www.youtube.com/watch?v=8npJLXkcmu8)

- [ ] Articles:
    - [ ] [Comment être un Googler dans trois étapes](http://www.google.com/about/careers/lifeatgoogle/hiringprocess/)
    - [ ] [Reçoit cet emploi à Google](http://steve-yegge.blogspot.com/2008/03/get-that-job-at-google.html)
        - Toutes les choses mentionnent par lui est en forme de liste en dessous
    - [ ] _(très vieux)_ [Comment avoir un emploi à Google, Questions d'Interview, Processus d'Embauchement](http://dondodge.typepad.com/the_next_big_thing/2010/09/how-to-get-a-job-at-google-interview-questions-hiring-process.html)
    - [ ] [Questions pour l'appeler de sélection](http://sites.google.com/site/steveyegge2/five-essential-phone-screen-questions)

- [ ] Cours pour préparer:
    - [ ] [Comment réussir dans une interview d'ingénieur logiciel (besoin de payer)](https://www.udemy.com/software-engineer-interview-unleashed):
        - Apprends comment être prêt pour l'entrevue de quelqu'un qui était responsable de l'embauche pour Google.

- [ ] Supplémentaires (ne sont pas suggéré par Google, mais je l'ai ajouté):
    - [ ] [Toujours en train de faire le codage (Anglais ABC: Always Be Coding)](https://medium.com/always-be-coding/abc-always-be-coding-d5f8051afce2#.4heg8zvm4)
    - [ ] [Quatre étapes à Google, sans un diplôme](https://medium.com/always-be-coding/four-steps-to-google-without-a-degree-8f381aa6bd5e#.asalo1vfx)
    - [ ] [Tableau blanc](https://medium.com/@dpup/whiteboarding-4df873dbba2e#.hf6jn45g1)
    - [ ] [Comment Google pense à propos de l'embauche, gestion, et culture](http://www.kpcb.com/blog/lessons-learned-how-google-thinks-about-hiring-management-and-culture)
    - [ ] Réussis dans une entrevue de codage:
        - [ ] [Gayle L McDowell -  Réussi l'entretien de codage (vidéo)](https://www.youtube.com/watch?v=rEJzOhC5ZtQ)
        - [ ] [Réussi l'entretien de codage avec auteur Author Gayle Laakmann McDowell (vidéo)](https://www.youtube.com/watch?v=aClxtDcdpsQ)
    - [ ] Comment obtenir un emploi à Google, Microsoft, Amazon ou Facebook:
        - [ ] ['Comment obtenir un emploi aux grandes quatre - Amazon, Facebook, Google & Microsoft' (vidéo)](https://www.youtube.com/watch?v=YJZCUhxNCv8)
    - [ ] [Échouer à une entrevue de Google](http://alexbowe.com/failing-at-google-interviews/)

## Choisis un langage pour l'entretien

Je l'ai écrit cet article à propos de cela : [Important: Choisis une langue pour l'entrevue Google](https://googleyasheck.com/important-pick-one-language-for-the-google-interview/)

Tu peux choisir une langue avec laquelle vous êtes confortable pour faire la partie de codage, mais pour Google, celles-ci sont les bons choix:

- C++
- Java
- Python

Tu pourrais aussi faire celles-ci, mais fait de la recherche avant. Il y aurait peut-être des problèmes:

- JavaScript
- Ruby

Tu dois être très comfortable avec la langue et tu dois aussi savoir beaucoup à propos la langue.

Lis à propos vos choix:
- http://www.byte-by-byte.com/choose-the-right-language-for-your-coding-interview/
- http://blog.codingforinterviews.com/best-programming-language-jobs/
- https://www.quora.com/What-is-the-best-language-to-program-in-for-an-in-person-Google-interview

[Regarde les ressources pour chaque langue ici](programming-language-resources.md)

Vous voyez C, C++ et Python en dessous, parce que j'apprends. Il y a quelques livres qui vont t'aider, regarde en dessous.

## Liste de livres

Voici une liste que j'ai réduite afin de vous faire gagner du temps.

### Préparation de l'entretien

- [ ] [Entretien de développement dévoilé : Les secrets pour avoir votre prochain job, 2 ème édition](http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html)
    - réponses en c++ et java
    - recommandé par un candidat en coaching de Google
    - this is a good warm-up for Cracking the Coding Interview
    - c'est un bon échauffement pour cracker l'entretien de développement
    - pas trop difficile, la plupart des problèmes seront plus faciles que ceux que vous aurez dans l'entretien (de ce que j'ai lu)
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - réponses en java
    - recommandé sur le [Google Careers site](https://www.google.com/about/careers/how-we-hire/interview/)
    - Si vous voyez des personnes faire référence à "The Google Resume", c'était le livre remplacé par "Cracking the Coding Interview"

Si vous avez beaucoup de temps libre:

- [ ] [Elements of Programming Interviews](https://www.amazon.com/Elements-Programming-Interviews-Insiders-Guide/dp/1479274836)
    - Tout le code est en C++, très utile si vous cherchez à utiliser du C++ pendant l'entretien
    - Un très bon livre sur la résolution de problème dans son ensemble

### Architecture de l'ordinateur

Si vous n'avez pas beaucoup de temps :

- [ ] [Write Great Code: Volume 1: Understanding the Machine](https://www.amazon.com/Write-Great-Code-Understanding-Machine/dp/1593270038)
    - Le livre est un peu dépassé car il a été publié en 2004, mais il reste intéressant pour comprendre brièvement comment marche un ordinateur.
    - L'auteur a inventé HLA, prenez donc ses remarques et ses exemples sur le HLA avec scepticisme. Il n'est pas souvent cité mais propose de nombreux exemples sur ce à quoi un assembleur ressemble
    - Ces chapitres vous donneront des fondations :
        - Chapitre 2 - Représentation numérique
        - Chapitre 3 - Arithmétique binaire et les opérations bit à bit
        - Chapitre 4 - Floating-Point Representation
        - Chapitre 4 - La représentation de la virgule flottante
        - Chapitre 5 - Représentation caractérielle
        - Chapitre 6 - Organisation et accès de la mémoire
        - Chapitre 7 - Type de données composites et les objets de mémoire
        - Chapitre 9 - Architecture CPU
        - Chapitre 10 - Jeu d'instructions
        - Chapitre 11 - Organisation et architecture de la mémoire

Si vous avez plus de temps (Je veux ce livre):

- [ ] [Computer Architecture, Fifth Edition: A Quantitative Approach](https://www.amazon.com/dp/012383872X/)
    - Pour quelque chose de plus récent (2011) mais qui prendre plus de temps.

### Sur les langages

**Vous avez besoin de choisir un langage pour l'entretien (voir au-dessus).** Voici mes recommandations sur les différents langages. Je n'ai pas de ressources pour tous les langages alors n'hésitez pas à en rajouter.

Si vous lisez un d'eux, vous devez d'abord avoir toutes les connaissances sur les structures de données et les algorithmes pour pouvoir résoudre des problèmes de codage.
**Vous pouvez passer toutes les vidéos de cours de ce projet**, à moins que vous voulez un avis.

[Additional language-specific resources here.](programming-language-resources.md)

### C++

Je n'ai pas lu ces deux-là mais ils sont bien notées et écrit par Sedgewick. Il est incroyable.

- [ ] [Algorithms in C++, Parts 1-4: Fundamentals, Data Structure, Sorting, Searching](https://www.amazon.com/Algorithms-Parts-1-4-Fundamentals-Structure/dp/0201350882/)
- [ ] [Algorithms in C++ Part 5: Graph Algorithms](https://www.amazon.com/Algorithms-Part-Graph-3rd-Pt-5/dp/0201361183/)

Si vous avez une meilleure recommandation pour le C++, dites le moi. Je recherche des ressources plus compréhensives.

### Java

- [ ] [Algorithms (Sedgewick and Wayne)](https://www.amazon.com/Algorithms-4th-Robert-Sedgewick/dp/032157351X/)
    - les vidéos avec le contenu des livres (and Sedgewick!):
        - [Algorithms I](https://www.youtube.com/user/algorithmscourses/playlists?view=50&sort=dd&shelf_id=2)
        - [Algorithms II](https://www.youtube.com/user/algorithmscourses/playlists?shelf_id=3&view=50&sort=dd)

OU:

- [ ] [Data Structures and Algorithms in Java](https://www.amazon.com/Data-Structures-Algorithms-Michael-Goodrich/dp/1118771338/)
    - par Goodrich, Tamassia, Goldwasser
    - utilisé pour du texte optionnel dans les cours d'introduction à l'informatique à l'UC Berkeley
    - allez voir le rapport que j'ai fait sur le Python proposé en-dessous. Ce livre couvre les mêmes sujets.

### Python

- [ ] [Data Structures and Algorithms in Python](https://www.amazon.com/Structures-Algorithms-Python-Michael-Goodrich/dp/1118290275/)
    - par Goodrich, Tamassia, Goldwasser
    - I loved this book. It covered everything and more.
    - j'ai aimé ce livre, il couvrait tout voire plus.
    - Pythonic code
    - mon rapport : https://googleyasheck.com/book-report-data-structures-and-algorithms-in-python/


### Livres optionnels

**Plusieurs personnes en recommandes, cependant je pense qu'ils vont trop loin, à moins que vous ayez plusieurs années dans le développement logiciel and que vous vous attendez à un entretien bien plus difficile**

- [Algorithm Design Manual](http://www.amazon.com/Algorithm-Design-Manual-Steven-Skiena/dp/1849967202) (Skiena)
- En tant qu'examen et reconnaissance de problème  
- Le catalogue algorithmique est bien plus difficile que ce que vous aurez pendant l'entretien.  
- Ce livre est divisé en deux parties :  
    - manuel classique sur les structures de données et les algorithmes  
        - pour :  
            - est une bonne critique comme n'importe quel manuel le serait  
            - des histoires intéressantes venant de son expérience dans la résolution de problèmes dans l'industriel et l'académique  
            - des exemples de code en C  
        - contre :  
            - peut être aussi dense ou impénétrable que CLRS, et dans plusieurs cas, CLRS peut être une meilleure alternative sur certains sujets  
            - les chapitres 7, 8, 9 peuvent être pénibles à suivre, comme certains éléments ne sont pas bien expliqués ou nécessitent plus de réflexion que je n’en ai  
            - les chapitres 7, 8, 9 peuvent être difficiles à suivre, comme certains points ne sont pas bien expliqués ou requièrent une plus grande concentration pour comprendre  
            - ne vous méprenez pas, j'aime bien Skiena, sa pédagogie et ses manières mais je ne fais pas partie de Stony Brook  
    - catalogue d’algorithmes :  
        - c’est la vraie raison pour laquelle on achète ce livre.  
        - je suis sur le point d’attaquer cette partie. Je mettrai à jour ici une fois que je l’aurai parcourue.  
- Pour citer Yegge : "Plus que n'importe quel autre livre, il m'a aidé à comprendre à quel point les problèmes de graphes sont étonnamment courants (et importants) – ils devraient faire partie de la boîte à outils de tout programmeur. Le livre couvre aussi les structures de données de base et les algorithmes de tri, ce qui est un bon bonus. Mais le véritable trésor est la seconde moitié du livre, qui est une sorte d'encyclopédie de fiches d'une page sur des tas de problèmes utiles et différentes manières de les résoudre, sans trop de détails. Presque chaque fiche a une image simple, ce qui la rend facile à mémoriser. C’est une excellente manière d’apprendre à identifier des centaines de types de problèmes."  
- Peut être loué sur Kindle  
- Half.com est une excellente ressource pour des manuels à bon prix

    - Reponses:
        - [Solutions](http://www.algorithm.cs.sunysb.edu/algowiki/index.php/The_Algorithms_Design_Manual_(Second_Edition))
        - [Solutions](http://blog.panictank.net/category/algorithmndesignmanualsolutions/page/2/)
    - [Errata](http://www3.cs.stonybrook.edu/~skiena/algorist/book/errata)

- [ ] [Introduction to Algorithms](https://www.amazon.com/Introduction-Algorithms-3rd-MIT-Press/dp/0262033844)
    - **Important:** Lire ce livre n’aura qu’une valeur limitée. Ce livre est une excellente révision des algorithmes et des structures de données, mais ne vous apprendra pas à écrire du bon code. Vous devez être capable de coder une solution correcte efficacement.  
    - Pour citer Yegge : "Mais si vous voulez arriver à vos entretiens *préparé*, alors envisagez de reporter votre candidature jusqu’à ce que vous ayez parcouru ce livre."  
    - Half.com est une excellente ressource pour des manuels à bon prix.  
    - aussi connu sous le nom de CLR, parfois CLRS, car Stein est arrivé en retard dans l’aventure


- [ ] [Programming Pearls](http://www.amazon.com/Programming-Pearls-2nd-Jon-Bentley/dp/0201657880)
       - Les premiers chapitres présentent des solutions astucieuses à des problèmes de programmation (certains très anciens utilisant des bandes magnétiques), mais ce n’est qu’une introduction. Il s’agit d’un guide sur la conception de programmes et l’architecture logicielle, un peu comme *Code Complete*, mais beaucoup plus court.


- ~~"Algorithms and Programming: Problems and Solutions" by Shen~~
   - Un bon livre, mais après avoir travaillé sur plusieurs exercices, j’ai été frustré par le Pascal, les boucles *do while*, les tableaux indexés à partir de 1, et les résultats de post-conditions peu clairs.  
    x- Je préfère passer du temps sur des problèmes de code issus d’un autre livre ou de plateformes en ligne.

## Avant de commencer

Cette liste s’est agrandie au fil de plusieurs mois, et oui, elle est un peu devenue incontrôlable.

Voici quelques erreurs que j’ai faites pour que tu puisses avoir une meilleure expérience.

### 1. Vous n’allez pas tout retenir

J’ai regardé des heures de vidéos et pris énormément de notes, et des mois plus tard, il y avait beaucoup de choses que je ne me souvenais pas.  
J’ai passé 3 jours à relire mes notes et à créer des fiches pour pouvoir réviser.

Lisez ceci pour éviter mes erreurs :  
[Retaining Computer Science Knowledge](https://googleyasheck.com/retaining-computer-science-knowledge/)

### 2. Utilisez des fiches de révision (flashcards)

Pour résoudre ce problème, j’ai créé un petit site de flashcards où je pouvais ajouter deux types de cartes : générales et code.  
Chaque carte a un format différent.

J’ai créé un site mobile-first pour pouvoir réviser sur mon téléphone et ma tablette, peu importe où je suis.

Créez le vôtre gratuitement :

- [Dépôt du site de flashcards](https://github.com/jwasham/computer-science-flash-cards)  
- [Ma base de données de flashcards](https://github.com/jwasham/computer-science-flash-cards/blob/main/cards-jwasham.db) : Gardez à l’esprit que j’ai exagéré et que j’ai des cartes couvrant tout, du langage assembleur aux anecdotes Python, en passant par l’apprentissage automatique et les statistiques. C’est beaucoup trop pour ce qui est requis chez Google.

**Remarque sur les flashcards :** La première fois que vous reconnaissez connaître la réponse, **ne la marquez pas comme acquise**.  
Il faut voir la même carte et y répondre correctement plusieurs fois avant de vraiment la maîtriser. La répétition ancrera cette connaissance plus profondément dans votre cerveau.

Une alternative à mon site est [Anki](http://ankisrs.net/), qui m’a été recommandé plusieurs fois. Il utilise un système de répétition espacée pour aider à mémoriser.  
Il est simple d’utilisation, disponible sur toutes les plateformes et possède une synchronisation cloud. Il coûte 25 $ sur iOS mais est gratuit sur les autres plateformes.

Ma base de cartes en format Anki : https://ankiweb.net/shared/info/25173560 (merci [@xiewenya](https://github.com/xiewenya))

### 3. Réviser, réviser, réviser

Je garde un ensemble de fiches mémo sur l’ASCII, la pile OSI, les notations Big-O, etc.  
Je les étudie quand j’ai un moment de libre.

Faites une pause des problèmes de programmation pendant une demi-heure et passez en revue vos flashcards.

### 4. Se concentrer

Il existe beaucoup de distractions qui peuvent vous faire perdre un temps précieux. La concentration est difficile à maintenir.

## Points qui ne seront pas couverts

Cette grande liste a commencé comme une to-do liste personnelle issue de notes de coaching d’entretien chez Google.  
Ce sont des technologies courantes, mais qui **n’étaient pas mentionnées dans ces notes** :

- SQL  
- Javascript  
- HTML, CSS et autres technologies front-end


## Condition requise

- [ ] **Apprendre le C**  
    - Le langage C est partout. Vous verrez des exemples dans les livres, les cours, les vidéos, *partout* pendant votre apprentissage.  
    - [ ] [Langage de programmation C, Vol 2](https://www.amazon.com/Programming-Language-Brian-W-Kernighan/dp/0131103628)  
        - C’est un livre court, mais il vous donnera une excellente maîtrise du langage C, et avec un peu de pratique,  
          vous deviendrez rapidement compétent. Comprendre le C vous aide à comprendre comment les programmes et la mémoire fonctionnent.  
        - [réponses aux questions](https://github.com/lekkas/c-algorithms)  

- [ ] **Comment les ordinateurs traitent un programme :**  
    - [ ] [Comment le processeur exécute un programme (vidéo)](https://www.youtube.com/watch?v=42KTvGYQYnA)  
    - [ ] [Instructions en code machine (vidéo)](https://www.youtube.com/watch?v=Mv2XQgpbTNE)  



## Plan quotidien

Certains sujets prennent une journée, d'autres prendront plusieurs jours. Certains consistent simplement à apprendre sans rien implémenter.

Chaque jour, je prends un sujet de la liste ci-dessous, je regarde des vidéos sur ce sujet, puis j’écris une implémentation en :
- C – en utilisant des structs et des fonctions qui prennent un struct * et autre chose comme arguments.
- C++ – sans utiliser les types intégrés
- C++ – en utilisant les types intégrés, comme std::list de la STL pour une liste chaînée
- Python – en utilisant les types intégrés (pour continuer à pratiquer Python)
- et j’écris des tests pour m’assurer que je fais les choses correctement, parfois juste avec des appels simples à assert()
- Vous pouvez faire cela en Java ou dans un autre langage, c’est juste ma méthode.

Vous n’avez pas besoin de tout cela. Vous n’avez besoin que d’[un seul langage pour l’entretien](#pick-one-language-for-the-interview).

Pourquoi coder dans tous ces langages ?
- Pratique, pratique, pratique, jusqu’à en être malade, et pouvoir le faire sans effort (certains sujets ont de nombreux cas particuliers et des détails à mémoriser)
- Travailler dans des contraintes brutes (allocation/libération mémoire sans ramasse-miettes, sauf pour Python)
- Utiliser les types intégrés pour avoir de l’expérience avec les outils natifs en conditions réelles (je ne vais pas réécrire une liste chaînée maison en production)

Je n’aurai peut-être pas le temps de faire tout cela pour chaque sujet, mais je vais essayer.

Vous pouvez voir mon code ici :
 - [C] (https://github.com/jwasham/practice-c)
 - [C++] (https://github.com/jwasham/practice-cpp)
 - [Python] (https://github.com/jwasham/practice-python)

Vous n’avez pas besoin de mémoriser les entrailles de chaque algorithme.

Écrivez le code sur un tableau ou sur papier, pas sur un ordinateur. Testez avec quelques exemples d’entrée. Ensuite, testez-le sur un ordinateur.



## Complex algorithmique / Notation grand O / Analyse asymptotique

- rien à implémenter  
- [ ] [Harvard CS50 - Notation asymptotique (vidéo)](https://www.youtube.com/watch?v=iOq5kSKqeR4)  
- [ ] [Notations Big O (tutoriel rapide général) (vidéo)](https://www.youtube.com/watch?v=V6mKVRU1evU)  
- [ ] [Big O (et Omega et Theta) - meilleure explication mathématique (vidéo)](https://www.youtube.com/watch?v=ei-A_wy5Yxw&index=2&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)  
- [ ] Skiena :  
    - [vidéo](https://www.youtube.com/watch?v=gSyDMtdPNpU&index=2&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)  
    - [diapositives](http://www3.cs.stonybrook.edu/~algorith/video-lectures/2007/lecture2.pdf)  
- [ ] [Une introduction douce à l’analyse de complexité des algorithmes](http://discrete.gr/complexity/)  
- [ ] [Ordres de croissance (vidéo)](https://class.coursera.org/algorithmicthink1-004/lecture/59)  
- [ ] [Asymptotiques (vidéo)](https://class.coursera.org/algorithmicthink1-004/lecture/61)  
- [ ] [UC Berkeley - Big O (vidéo)](https://youtu.be/VIS4YDpuP98)  
- [ ] [UC Berkeley - Big Omega (vidéo)](https://youtu.be/ca3e7UVmeUc)  
- [ ] [Analyse amortie (vidéo)](https://www.youtube.com/watch?v=B3SpQZaAZP4&index=10&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN)  
- [ ] [Illustration du "Big O" (vidéo)](https://class.coursera.org/algorithmicthink1-004/lecture/63)  
- [ ] TopCoder (inclut les relations de récurrence et le théorème maître) :  
    - [Complexité computationnelle : Section 1](https://www.topcoder.com/community/data-science/data-science-tutorials/computational-complexity-section-1/)  
    - [Complexité computationnelle : Section 2](https://www.topcoder.com/community/data-science/data-science-tutorials/computational-complexity-section-2/)  
- [ ] [Fiche mémo](http://bigocheatsheet.com/)  
- [ ] [[Révision] Analyse d’algorithmes (playlist) en 18 minutes (vidéo)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZMxejjIyFHWa-4nKg6sdoIv)  

    Si certaines vidéos sont trop mathématiques, vous pouvez descendre tout en bas  
    et regarder les vidéos sur les mathématiques discrètes pour acquérir les bases.

## Structures de donnees

- ### Tableau

- Implémentez un vecteur redimensionnable automatiquement.
- [ ] Description :
    - [Tableaux (vidéo)](https://www.coursera.org/learn/data-structures/lecture/OsBSF/arrays)
    - [UCBerkley CS61B - Tableaux linéaires et multidimensionnels (vidéo)](https://youtu.be/Wp8oiO_CZZE?t=15m32s)
    - [Tableaux dynamiques (vidéo)](https://www.coursera.org/learn/data-structures/lecture/EwbnV/dynamic-arrays)
    - [Tableaux irréguliers (vidéo)](https://www.youtube.com/watch?v=1jtrQqYpt7g)
- [ ] Implémenter un vecteur (tableau mutable avec redimensionnement automatique) :
    - [ ] S'exercer à coder avec des tableaux et des pointeurs, et utiliser des calculs de pointeur pour sauter à un index au lieu d'utiliser l'indexation.
    - [ ] nouveau tableau de données brut avec mémoire allouée
        - peut allouer un tableau d'entiers en arrière-plan, mais sans utiliser ses fonctionnalités
        - commencer avec 16, ou si le nombre de départ est plus grand, utiliser une puissance de 2 - 16, 32, 64, 128
    - [ ] size() - nombre d'éléments
    - [ ] capacity() - nombre d'éléments qu'il peut contenir
    - [ ] is_empty()
    - [ ] at(index) - retourne l'élément à l'index donné, plante si l'index est hors limites
    - [ ] push(item)
    - [ ] insert(index, item) - insère l'élément à l'index, décale l'élément et les éléments suivants vers la droite
    - [ ] prepend(item) - peut utiliser insert ci-dessus à l'index 0
    - [ ] pop() - supprime le dernier élément, retourne la valeur
    - [ ] delete(index) - supprime l'élément à l'index, décale les éléments suivants vers la gauche
    - [ ] remove(item) - recherche la valeur et supprime l'index qui la contient (même si plusieurs occurrences)
    - [ ] find(item) - recherche la valeur et retourne le premier index avec cette valeur, -1 si non trouvé
    - [ ] resize(new_capacity) // fonction privée
        - lorsqu'on atteint la capacité, redimensionner à deux fois la taille
        - lors du retrait d'un élément, si la taille est 1/4 de la capacité, redimensionner à moitié
- [ ] Temps
    - O(1) pour ajouter/retirer à la fin (amorti pour les allocations), index ou mise à jour
    - O(n) pour insérer/retirer ailleurs
- [ ] Espace
    - contiguë en mémoire, donc la proximité améliore les performances
    - espace requis = (capacité du tableau, qui est >= n) * taille de l'élément, mais même si 2n, c'est toujours O(n)

- ### Liste Chainee

- [ ] Description :
    - [ ] [Listes chaînées simples (vidéo)](https://www.coursera.org/learn/data-structures/lecture/kHhgK/singly-linked-lists)
    - [ ] [CS 61B - Listes chaînées (vidéo)](https://www.youtube.com/watch?v=sJtJOtXCW_M&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&index=5)
    - [ ] [[Révision] Listes chaînées en 4 minutes (vidéo)](https://youtu.be/F8AbOfQwl1c)
- [ ] [Code C (vidéo)](https://www.youtube.com/watch?v=QN6FPiD0Gzo)
        - pas toute la vidéo, seulement les portions sur la struct Node et l’allocation mémoire.
- [ ] Liste chaînée vs Tableaux :
    - [Listes chaînées de base vs Tableaux (vidéo)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/rjBs9/core-linked-lists-vs-arrays)
    - [Dans le monde réel : Listes chaînées vs Tableaux (vidéo)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/QUaUd/in-the-real-world-lists-vs-arrays)
- [ ] [Pourquoi éviter les listes chaînées (vidéo)](https://www.youtube.com/watch?v=YQs6IC-vgmo)
- [ ] Attention : vous devez comprendre les pointeurs de pointeurs :
    (pour quand vous passez un pointeur à une fonction qui pourrait changer l’adresse vers laquelle ce pointeur pointe)
    Cette page sert juste à comprendre les pointeurs de pointeurs. Je ne recommande pas ce style de parcours de liste. La lisibilité et la maintenabilité en souffrent à cause de l'astuce.
    - [Pointeurs de pointeurs](https://www.eskimo.com/~scs/cclass/int/sx8.html)
- [ ] implémenter (je l’ai fait avec et sans pointeur de fin) :
    - [ ] size() - retourne le nombre d’éléments de données dans la liste
    - [ ] empty() - booléen, retourne vrai si vide
    - [ ] value_at(index) - retourne la valeur du nième élément (en commençant à 0)
    - [ ] push_front(value) - ajoute un élément au début de la liste
    - [ ] pop_front() - retire le premier élément et retourne sa valeur
    - [ ] push_back(value) - ajoute un élément à la fin
    - [ ] pop_back() - retire l’élément final et retourne sa valeur
    - [ ] front() - obtient la valeur du premier élément
    - [ ] back() - obtient la valeur du dernier élément
    - [ ] insert(index, value) - insère une valeur à l'index, donc l’élément actuel à cet index est pointé par le nouvel élément
    - [ ] erase(index) - supprime le nœud à l’index donné
    - [ ] value_n_from_end(n) - retourne la valeur du nœud à la nième position depuis la fin
    - [ ] reverse() - inverse la liste
    - [ ] remove_value(value) - supprime le premier élément ayant cette valeur
- [ ] Liste doublement chaînée
    - [Description (vidéo)](https://www.coursera.org/learn/data-structures/lecture/jpGKD/doubly-linked-lists)
    - Pas besoin d’implémenter

- ### Pile

- [ ] [Piles (vidéo)](https://www.coursera.org/learn/data-structures/lecture/UdKzQ/stacks)
- [ ] [[Révision] Piles en 3 minutes (vidéo)](https://youtu.be/KcT3aVgrrpU)
- [ ] Ne sera pas implémentée. L’implémentation avec un tableau est triviale.

- ### File

- [ ] [File (vidéo)](https://www.coursera.org/learn/data-structures/lecture/EShpq/queue)
- [ ] [Tampon circulaire/FIFO](https://en.wikipedia.org/wiki/Circular_buffer)
- [ ] [[Révision] Files en 3 minutes (vidéo)](https://youtu.be/D6gu-_tmEpQ)
- [ ] Implémenter avec liste chaînée, avec pointeur de fin :
    - enqueue(value) - ajoute la valeur en position de fin
    - dequeue() - retourne la valeur et supprime l’élément le plus ancien (début)
    - empty()
- [ ] Implémenter avec tableau de taille fixe :
    - enqueue(value) - ajoute l’élément à la fin de la zone de stockage disponible
    - dequeue() - retourne la valeur et supprime l’élément le plus ancien
    - empty()
    - full()
- [ ] Coût :
    - une mauvaise implémentation utilisant une liste chaînée où vous enfilez à la tête et défilez à la queue serait O(n)
        car vous auriez besoin de l’avant-dernier élément, ce qui provoquerait un parcours complet à chaque retrait
    - enqueue : O(1) (amorti, liste chaînée et tableau [sondage])
    - dequeue : O(1) (liste chaînée et tableau)
    - empty : O(1) (liste chaînée et tableau)

- ### Table de hachage

- [ ] Vidéos :
    - [ ] [Hachage avec chaînage (vidéo)](https://www.youtube.com/watch?v=0M_kIqhwbFo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=8)
    - [ ] [Doublement de table, Karp-Rabin (vidéo)](https://www.youtube.com/watch?v=BRO7mVIFt08&index=9&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [Adressage ouvert, hachage cryptographique (vidéo)](https://www.youtube.com/watch?v=rvdJDijO2Ro&index=10&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [PyCon 2010 : Le puissant dictionnaire (vidéo)](https://www.youtube.com/watch?v=C4Kc8xzcA68)
    - [ ] [(Avancé) Randomisation : Hachage universel & parfait (vidéo)](https://www.youtube.com/watch?v=z0lJ2k0sl1g&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=11)
    - [ ] [(Avancé) Hachage parfait (vidéo)](https://www.youtube.com/watch?v=N0COwN14gt0&list=PL2B4EEwhKD-NbwZ4ezj7gyc_3yNrojKM9&index=4)
    - [ ] [[Révision] Tables de hachage en 4 minutes (vidéo)](https://youtu.be/knV86FlSXJ8)

- [ ] Cours en ligne :
    - [ ] [Tables de hachage de base (vidéo)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/m7UuP/core-hash-tables)
    - [ ] [Structures de données (vidéo)](https://www.coursera.org/learn/data-structures/home/week/3)
    - [ ] [Problème du répertoire téléphonique (vidéo)](https://www.coursera.org/learn/data-structures/lecture/NYZZP/phone-book-problem)
    - [ ] Tables de hachage distribuées :
        - [Téléversements instantanés et optimisation du stockage chez Dropbox (vidéo)](https://www.coursera.org/learn/data-structures/lecture/DvaIb/instant-uploads-and-storage-optimization-in-dropbox)
        - [Tables de hachage distribuées (vidéo)](https://www.coursera.org/learn/data-structures/lecture/tvH8H/distributed-hash-tables)

- [ ] implémenter avec un tableau en utilisant le sondage linéaire
    - hash(k, m) - m est la taille de la table de hachage
    - add(key, value) - si la clé existe déjà, mettre à jour la valeur
    - exists(key)
    - get(key)
    - remove(key)


## Plus de connaissance

- ### Recherche binaire

- [ ] [Recherche binaire (vidéo)](https://www.youtube.com/watch?v=D5SrAga1pno)
- [ ] [Recherche binaire (vidéo)](https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search)
- [ ] [détail](https://www.topcoder.com/community/data-science/data-science-tutorials/binary-search/)
- [ ] [[Révision] Recherche binaire en 4 minutes (vidéo)](https://youtu.be/fDKIpRe8GW4)
- [ ] Implémenter :
    - recherche binaire (sur un tableau trié d'entiers)
    - recherche binaire en utilisant la récursion

- ### Operations par bit

- [ ] [Fiche mémo sur les bits](https://github.com/jwasham/coding-interview-university/blob/main/extras/cheat%20sheets/bits-cheat-sheet.pdf) - vous devriez connaître plusieurs puissances de 2 de (2^1 à 2^16 et 2^32)
- [ ] Bien comprendre la manipulation des bits avec : &, |, ^, ~, >>, <<
    - [ ] [mots](https://en.wikipedia.org/wiki/Word_(computer_architecture))
    - [ ] Bonne introduction :
        [Manipulation de bits (vidéo)](https://www.youtube.com/watch?v=7jkIUgLC29I)
    - [ ] [Tutoriel C Programmation 2-10 : Opérateurs bit à bit (vidéo)](https://www.youtube.com/watch?v=d0AwjSpNXR0)
    - [ ] [Manipulation de bits](https://en.wikipedia.org/wiki/Bit_manipulation)
    - [ ] [Opérations bit à bit](https://en.wikipedia.org/wiki/Bitwise_operation)
    - [ ] [Bithacks](https://graphics.stanford.edu/~seander/bithacks.html)
    - [ ] [The Bit Twiddler](http://bits.stephan-brumme.com/)
    - [ ] [The Bit Twiddler Interactive](http://bits.stephan-brumme.com/interactive.html)
- [ ] Complément à 2 et à 1
    - [Binaire : plus et moins (Pourquoi on utilise le complément à deux) (vidéo)](https://www.youtube.com/watch?v=lKTsv6iVxV4)
    - [Complément à 1](https://en.wikipedia.org/wiki/Ones%27_complement)
    - [Complément à 2](https://en.wikipedia.org/wiki/Two%27s_complement)
- [ ] compter les bits à 1
    - [4 façons de compter les bits dans un octet (vidéo)](https://youtu.be/Hzuzo9NJrlc)
    - [Compter les bits](https://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetKernighan)
    - [Comment compter le nombre de bits à 1 dans un entier 32 bits](http://stackoverflow.com/questions/109023/how-to-count-the-number-of-set-bits-in-a-32-bit-integer)
- [ ] arrondir à la puissance de 2 suivante :
    - [Arrondir à la prochaine puissance de deux](http://bits.stephan-brumme.com/roundUpToNextPowerOfTwo.html)
- [ ] échanger des valeurs :
    - [Échanger](http://bits.stephan-brumme.com/swap.html)
- [ ] valeur absolue :
    - [Valeur absolue d’un entier](http://bits.stephan-brumme.com/absInteger.html)


## Arbres

- ### Arbres - Notes & arriere plan

- [ ] [Série : Arbres (vidéo)](https://www.coursera.org/learn/data-structures/lecture/95qda/trees)
- construction de base d’un arbre
- parcours
- algorithmes de manipulation
- BFS (parcours en largeur)
    - [MIT (vidéo)](https://www.youtube.com/watch?v=s-CYnVz-uh4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=13)
    - ordre par niveau (BFS, utilisant une file)
        complexité temporelle : O(n)
        complexité spatiale : meilleur cas : O(1), pire cas : O(n/2)=O(n)
- DFS (parcours en profondeur)
    - [MIT (vidéo)](https://www.youtube.com/watch?v=AfSk24UTFS8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=14)
    - notes :
        complexité temporelle : O(n)
        complexité spatiale :
            meilleur cas : O(log n) - hauteur moyenne de l’arbre
            pire cas : O(n)
    - inorder (DFS : gauche, racine, droite)
    - postorder (DFS : gauche, droite, racine)
    - preorder (DFS : racine, gauche, droite)
- [ ] [[Révision] Parcours en largeur en 4 minutes (vidéo)](https://youtu.be/HZ5YTanv5QE)
- [ ] [[Révision] Parcours en profondeur en 4 minutes (vidéo)](https://youtu.be/Urx87-NMm6c)
- [ ] [[Révision] Parcours d’arbres (playlist) en 11 minutes (vidéo)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZO1JC2RgEi04nLy6D-rKk6b)

- ### Arbres binaires de recherche

- [ ] [Révision BST (vidéo)](https://www.youtube.com/watch?v=x6At0nzX92o&index=1&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
- [ ] [Série (vidéo)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/p82sw/core-introduction-to-binary-search-trees)
    - commence par les tables de symboles et applications du BST
- [ ] [Introduction (vidéo)](https://www.coursera.org/learn/data-structures/lecture/E7cXP/introduction)
- [ ] [MIT (vidéo)](https://www.youtube.com/watch?v=9Jry5-82I68)
- C/C++ :
    - [ ] [Implémentation BST en C/C++ (vidéo)](https://www.youtube.com/watch?v=COZK7NATh4k&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=28)
    - [ ] [Implémentation BST - allocation mémoire (vidéo)](https://www.youtube.com/watch?v=hWokyBoo0aI&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=29)
    - [ ] [Trouver min et max dans un BST (vidéo)](https://www.youtube.com/watch?v=Ut90klNN264&index=30&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
    - [ ] [Trouver la hauteur d’un arbre binaire (vidéo)](https://www.youtube.com/watch?v=_pnqMz5nrRs&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=31)
    - [ ] [Parcours arbre binaire - BFS et DFS (vidéo)](https://www.youtube.com/watch?v=9RHO6jU--GU&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=32)
    - [ ] [Parcours niveau (vidéo)](https://www.youtube.com/watch?v=86g8jAQug04&index=33&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
    - [ ] [Parcours Pre/In/Postorder (vidéo)](https://www.youtube.com/watch?v=gm8DUJJhmY4&index=34&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
    - [ ] [Vérifier si un arbre est un BST (vidéo)](https://www.youtube.com/watch?v=yEwSGhSsT0U&index=35&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
    - [ ] [Supprimer un nœud dans un BST (vidéo)](https://www.youtube.com/watch?v=gcULXE7ViZw&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=36)
    - [ ] [Successeur inorder (vidéo)](https://www.youtube.com/watch?v=5cPbNCrdotA&index=37&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P)
- [ ] Implémenter :
    - [ ] insert // insérer une valeur dans l’arbre
    - [ ] get_node_count // compter les valeurs stockées
    - [ ] print_values // affiche les valeurs de min à max
    - [ ] delete_tree
    - [ ] is_in_tree // renvoie true si la valeur existe dans l’arbre
    - [ ] get_height // renvoie la hauteur (un seul nœud a une hauteur de 1)
    - [ ] get_min // valeur minimale stockée
    - [ ] get_max // valeur maximale stockée
    - [ ] is_binary_search_tree
    - [ ] delete_value
    - [ ] get_successor // renvoie la valeur suivante la plus haute, -1 si aucune

- ### Tas / File de priorite / Tas binaire

    - visualisé comme un arbre, mais souvent stocké de façon linéaire (tableau, liste chaînée)
    - [ ] [Tas](https://en.wikipedia.org/wiki/Heap_(data_structure))
    - [ ] [Introduction (vidéo)](https://www.coursera.org/learn/data-structures/lecture/2OpTs/introduction)
    - [ ] [Implémentations naïves (vidéo)](https://www.coursera.org/learn/data-structures/lecture/z3l9N/naive-implementations)
    - [ ] [Arbres binaires (vidéo)](https://www.coursera.org/learn/data-structures/lecture/GRV2q/binary-trees)
    - [ ] [Remarque sur la hauteur (vidéo)](https://www.coursera.org/learn/data-structures/supplement/S5xxz/tree-height-remark)
    - [ ] [Opérations de base (vidéo)](https://www.coursera.org/learn/data-structures/lecture/0g1dl/basic-operations)
    - [ ] [Arbres binaires complets (vidéo)](https://www.coursera.org/learn/data-structures/lecture/gl5Ni/complete-binary-trees)
    - [ ] [Pseudocode (vidéo)](https://www.coursera.org/learn/data-structures/lecture/HxQo9/pseudocode)
    - [ ] [Tri par tas - début (vidéo)](https://youtu.be/odNJmw5TOEE?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3291)
    - [ ] [Tri par tas (vidéo)](https://www.coursera.org/learn/data-structures/lecture/hSzMO/heap-sort)
    - [ ] [Construire un tas (vidéo)](https://www.coursera.org/learn/data-structures/lecture/dwrOS/building-a-heap)
    - [ ] [MIT : Heaps et tri par tas (vidéo)](https://www.youtube.com/watch?v=B7hVxCmfPtM&index=4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [CS 61B Cours 24 : Files de priorité (vidéo)](https://www.youtube.com/watch?v=yIUFT6AKBGE&index=24&list=PL4BBB74C7D2A1049C)
    - [ ] [Construction linéaire d’un tas (max-heap)](https://www.youtube.com/watch?v=MiyLo8adrWw)
    - [ ] [[Révision] Tas (playlist) en 13 minutes (vidéo)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZNsyqgPW-DNwUeT8F8uhWc6)
    - [ ] Implémenter un max-heap :
        - [ ] insert
        - [ ] sift_up - nécessaire pour insert
        - [ ] get_max - renvoie l’élément max sans le retirer
        - [ ] get_size() - renvoie le nombre d’éléments
        - [ ] is_empty() - true si aucun élément
        - [ ] extract_max - renvoie et retire l’élément max
        - [ ] sift_down - nécessaire pour extract_max
        - [ ] remove(i) - retire l’élément à l’index i
        - [ ] heapify - créer un tas à partir d’un tableau, utilisé pour heap_sort
        - [ ] heap_sort() - trie un tableau non trié en place avec un max heap
        - remarque : utiliser un min heap au lieu d’un max heap économiserait des opérations, mais doublerait la mémoire requise (pas possible en place)


## Tri

- [ ] Notes :
    - Implémentez les algorithmes de tri & sachez les cas meilleur/pire et la complexité moyenne de chacun :
        - pas de tri à bulles – il est terrible – O(n^2), sauf quand n <= 16
    - [ ] stabilité des algorithmes de tri ("Quicksort est-il stable ?")
        - [Stabilité des algorithmes de tri](https://en.wikipedia.org/wiki/Sorting_algorithm#Stability)
        - [Stabilité dans les algorithmes de tri](http://stackoverflow.com/questions/1517793/stability-in-sorting-algorithms)
        - [Stabilité dans les algorithmes de tri](http://www.geeksforgeeks.org/stability-in-sorting-algorithms/)
        - [Algorithmes de tri – Stabilité](http://homepages.math.uic.edu/~leon/cs-mcs401-s08/handouts/stability.pdf)
    - [ ] Quels algorithmes peuvent être utilisés sur des listes chaînées ? Lesquels sur des tableaux ? Lesquels sur les deux ?
        - Je ne recommande pas de trier une liste chaînée, mais le tri fusion est faisable.
        - [Tri fusion pour liste chaînée](http://www.geeksforgeeks.org/merge-sort-for-linked-list/)

- Pour heapsort, voir la structure de tas ci-dessus. Le tri par tas est excellent, mais pas stable.

- [ ] [Tri à bulles (vidéo)](https://www.youtube.com/watch?v=P00xJgWzz2c&index=1&list=PL89B61F78B552C1AB)
- [ ] [Analyse du tri à bulles (vidéo)](https://www.youtube.com/watch?v=ni_zk257Nqo&index=7&list=PL89B61F78B552C1AB)
- [ ] [Tri par insertion, tri fusion (vidéo)](https://www.youtube.com/watch?v=Kg4bqzAqRBM&index=3&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
- [ ] [Tri par insertion (vidéo)](https://www.youtube.com/watch?v=c4BRHC7kTaQ&index=2&list=PL89B61F78B552C1AB)
- [ ] [Tri fusion (vidéo)](https://www.youtube.com/watch?v=GCae1WNvnZM&index=3&list=PL89B61F78B552C1AB)
- [ ] [Quicksort (vidéo)](https://www.youtube.com/watch?v=y_G9BkAm6B8&index=4&list=PL89B61F78B552C1AB)
- [ ] [Tri par sélection (vidéo)](https://www.youtube.com/watch?v=6nDMgr0-Yyo&index=8&list=PL89B61F78B552C1AB)

- [ ] Code tri fusion :
    - [ ] [Avec tableau de sortie (C)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/sorting/mergesort.c)
    - [ ] [Avec tableau de sortie (Python)](https://github.com/jwasham/practice-python/blob/master/merge_sort/merge_sort.py)
    - [ ] [In-place (C++)](https://github.com/jwasham/practice-cpp/blob/master/merge_sort/merge_sort.cc)
- [ ] Code tri rapide :
    - [ ] [Implémentation (C)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/randomization/quick.c)
    - [ ] [Implémentation (C)](https://github.com/jwasham/practice-c/blob/master/quick_sort/quick_sort.c)
    - [ ] [Implémentation (Python)](https://github.com/jwasham/practice-python/blob/master/quick_sort/quick_sort.py)

- [ ] [[Révision] Tri (playlist) en 18 minutes](https://www.youtube.com/playlist?list=PL9xmBV_5YoZOZSbGAXAPIq1BeUf4j20pl)
    - [ ] [Tri rapide en 4 minutes (vidéo)](https://youtu.be/Hoixgm4-P4M)
    - [ ] [Tri par tas en 4 minutes (vidéo)](https://youtu.be/2DmK_H7IdTo)
    - [ ] [Tri fusion en 3 minutes (vidéo)](https://youtu.be/4VqmGXwpLqc)
    - [ ] [Tri à bulles en 2 minutes (vidéo)](https://youtu.be/xli_FI7CuzA)
    - [ ] [Tri par sélection en 3 minutes (vidéo)](https://youtu.be/g-PGLbMth_g)
    - [ ] [Tri par insertion en 2 minutes (vidéo)](https://youtu.be/JU767SDMDvA)

- [ ] Implémenter :
    - [ ] Tri fusion : O(n log n) en moyenne et au pire des cas
    - [ ] Tri rapide : O(n log n) en moyenne
    - Tri par sélection et tri par insertion sont tous deux O(n^2) en moyenne et au pire des cas
    - Pour heapsort, voir la section Tas plus haut

- [ ] Non requis, mais recommandé :
    - [ ] [Sedgewick – Tris Radix (6 vidéos)](https://www.youtube.com/playlist?list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53)
    - [ ] [Radix Sort](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#radixSort)
    - [ ] [Tri Radix (vidéo)](https://www.youtube.com/watch?v=xhr26ia4k38)
    - [ ] [Radix Sort, Counting Sort (temps linéaire sous contraintes) (vidéo)](https://www.youtube.com/watch?v=Nz1KZXbghj8&index=7&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [Randomisation : multiplication matricielle, quicksort, algorithme de Freivalds (vidéo)](https://www.youtube.com/watch?v=cNB2lADK3_s&index=8&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [Tri en temps linéaire (vidéo)](https://www.youtube.com/watch?v=pOKy3RZbSws&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=14)

Si vous avez besoin de plus de détails, voir la section "Tri" dans [Détails supplémentaires sur certains sujets](#additional-detail-on-some-subjects)

## Graphes

Les graphes peuvent représenter de nombreux problèmes en informatique, donc cette section est longue, comme celle sur les arbres et le tri.

- Notes de Yegge :
    - Trois façons principales de représenter un graphe en mémoire :
        - objets et pointeurs
        - matrice
        - liste d’adjacence
    - Familiarisez-vous avec chaque représentation et ses avantages/inconvénients
    - BFS et DFS – comprenez leur complexité, avantages, et comment les implémenter en code
    - Si vous avez une question, pensez à une solution basée sur les graphes en premier

- [ ] Conférences de Skiena – excellente intro :
    - [ ] [CSE373 2012 – Graph Data Structures (vidéo)](https://www.youtube.com/watch?v=OiXxhDrFruw...)
    - ...

- [ ] Graphes (révision et plus) :
    - ...

- [ ] Cours complet sur Coursera :
    - [ ] [Algorithmes sur les graphes (vidéo)](https://www.coursera.org/learn/algorithms-on-graphs/home/welcome)

- Yegge : Si vous avez le temps, étudiez ces algorithmes avancés :
    - [ ] Algorithme de Dijkstra
    - [ ] A*
        - ...

- Je vais implémenter :
    - [ ] DFS avec liste d’adjacence (récursif)
    - ...
    - [ ] Vérifier si un graphe est biparti

Vous pratiquerez davantage avec les graphes dans le livre de Skiena (voir section Livres)


## Encore Plus De connaissances

- ### Recursivite

    - [ ] Cours de Stanford sur la récursivité & le backtracking :
        - [ ] [Cours 8 | Programming Abstractions (vidéo)](https://www.youtube.com/watch?v=gl3emqCuueQ&list=PLFE6E58F856038C69&index=8)
        - [ ] [Cours 9 | Programming Abstractions (vidéo)](https://www.youtube.com/watch?v=uFJhEPrbycQ&list=PLFE6E58F856038C69&index=9)
        - [ ] [Cours 10 | Programming Abstractions (vidéo)](https://www.youtube.com/watch?v=NdF1QDTRkck&index=10&list=PLFE6E58F856038C69)
        - [ ] [Cours 11 | Programming Abstractions (vidéo)](https://www.youtube.com/watch?v=p-gpaIGRCQI&list=PLFE6E58F856038C69&index=11)
    - quand l’utiliser de façon appropriée
    - en quoi la récursivité terminale est-elle meilleure ?
        - [ ] [Qu’est-ce que la récursivité terminale et pourquoi est-ce important ?](https://www.quora.com/What-is-tail-recursion-Why-is-it-so-bad)
        - [ ] [Récursivité terminale (vidéo)](https://www.coursera.org/lecture/programming-languages/tail-recursion-YZic1)

- ### Programmation Orientee Objet

    - [ ] [Optionnel : série UML 2.0 (vidéo)](https://www.youtube.com/watch?v=OkC7HKtiZC0&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc)
    - [ ] Ingénierie logicielle orientée objet : développement logiciel avec UML et Java (21 vidéos) :
        - Peut être ignoré si vous avez une bonne compréhension de la POO et des bonnes pratiques de conception.
        - [OOSE : Software Dev Using UML and Java](https://www.youtube.com/playlist?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)
    - [ ] Principes SOLID :
        - [ ] [Bob Martin - Principes SOLID de la conception orientée objet et agile (vidéo)](https://www.youtube.com/watch?v=TMuno5RZNeE)
        - [ ] [Patrons SOLID en C# (vidéo)](https://www.youtube.com/playlist?list=PL8m4NUhTQU48oiGCSgCP1FiJEcg_xJzyQ)
        - [ ] [Principes SOLID (vidéo)](https://www.youtube.com/playlist?list=PL4CE9F710017EA77A)
        - [ ] S - [Principe de Responsabilité Unique](http://www.oodesign.com/single-responsibility-principle.html) | [Une responsabilité par objet](http://www.javacodegeeks.com/2011/11/solid-single-responsibility-principle.html)
        - [ ] O - [Principe Open/Closed](http://www.oodesign.com/open-close-principle.html) | Les objets sont ouverts à l’extension mais fermés à la modification
        - [ ] L - [Principe de Substitution de Liskov](http://www.oodesign.com/liskov-s-substitution-principle.html) | Une classe dérivée peut remplacer sa classe de base
        - [ ] I - [Principe de Ségrégation d’Interface](http://www.oodesign.com/interface-segregation-principle.html) | Les clients ne doivent pas implémenter des interfaces qu’ils n’utilisent pas
        - [ ] D - [Principe d’Inversion de Dépendance](http://www.oodesign.com/dependency-inversion-principle.html) | Réduit la dépendance dans la composition des objets

- ### Modeles de conception

    - [ ] [Révision rapide UML (vidéo)](https://www.youtube.com/watch?v=3cmzqZzwNDM&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc&index=3)
    - [ ] Apprendre les modèles suivants :
        - [ ] stratégie
        - [ ] singleton
        - [ ] adaptateur
        - [ ] prototype
        - [ ] décorateur
        - [ ] visiteur
        - [ ] fabrique, fabrique abstraite
        - [ ] façade
        - [ ] observateur
        - [ ] proxy
        - [ ] délégué
        - [ ] commande
        - [ ] état
        - [ ] memento
        - [ ] itérateur
        - [ ] composite
        - [ ] poids mouche (flyweight)
    - [ ] [Chapitre 6 (Partie 1) – Modèles (vidéo)](https://youtu.be/LAP2A80Ajrg?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO&t=3344)
    - [ ] [Chapitre 6 (Partie 2) – Abstraction-Occurrence, Hiérarchie Générale, Rôle-Joueur, Singleton, Observateur, Délégation (vidéo)](https://www.youtube.com/watch?v=U8-PGsjvZc4&index=12&list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)
    - [ ] [Chapitre 6 (Partie 3) – Adaptateur, Façade, Immuable, Interface Lecture-Seule, Proxy (vidéo)](https://www.youtube.com/watch?v=7sduBHuex4c&index=13&list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)
    - [ ] [Série de vidéos (27 vidéos)](https://www.youtube.com/playlist?list=PLF206E906175C7E07)
    - [ ] [Head First Design Patterns](https://www.amazon.com/Head-First-Design-Patterns-Freeman/dp/0596007124)
    - [ ] [Référence utile : 101 modèles de conception et astuces pour développeurs](https://sourcemaking.com/design-patterns-and-tips)

- ### Combinatoire k parmi n et probabilite

    - [ ] [Compétences en maths : Factorielle, Permutation et Combinaison (vidéo)](https://www.youtube.com/watch?v=8RRo6Ti9d0U)
    - [ ] [Make School : Probabilité (vidéo)](https://www.youtube.com/watch?v=sZkAAk9Wwa4)
    - [ ] [Make School : Probabilités avancées et chaînes de Markov (vidéo)](https://www.youtube.com/watch?v=dNaJg-mLobQ)
    - [ ] Khan Academy :
        - Plan de cours :
            - [ ] [Probabilités théoriques de base](https://www.khanacademy.org/math/probability/probability-and-combinatorics-topic)
        - Juste les vidéos – 41 (chacune est courte et simple) :
            - [ ] [Explication des probabilités (vidéo)](https://www.youtube.com/watch?v=uzkc-qNVoOk&list=PLC58778F28211FA19)


- ### NP NP complet et les algorithmes approximatif

    - Comprendre les classes célèbres de problèmes NP-complets, comme le voyageur de commerce et le problème du sac à dos,
      et être capable de les reconnaître lorsqu’un recruteur vous les présente de manière déguisée.
    - Comprendre ce que signifie NP-complet.
    - [ ] [Complexité computationnelle (vidéo)](https://www.youtube.com/watch?v=moPtwq_cVH8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=23)
    - [ ] Simonson :
        - [ ] [Algorithmes gloutons II & Intro à la NP-Complétude (vidéo)](https://youtu.be/qcGnJ47Smlo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=2939)
        - [ ] [NP-Complétude II & Réductions (vidéo)](https://www.youtube.com/watch?v=e0tGC6ZQdQE&index=16&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [NP-Complétude III (vidéo)](https://www.youtube.com/watch?v=fCX1BGT3wjE&index=17&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [NP-Complétude IV (vidéo)](https://www.youtube.com/watch?v=NKLDp3Rch3M&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=18)
    - [ ] Skiena :
        - [ ] [CSE373 2012 - Cours 23 - Introduction à la NP-Complétude (vidéo)](https://youtu.be/KiK5TVgXbFg?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1508)
        - [ ] [Cours 24 - Démonstrations de NP-Complétude (vidéo)](https://www.youtube.com/watch?v=27Al52X3hd4&index=24&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [ ] [Cours 25 - Défis sur la NP-Complétude (vidéo)](https://www.youtube.com/watch?v=xCPH4gwIIXM&index=25&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [Complexité : P, NP, NP-complétude, Réductions (vidéo)](https://www.youtube.com/watch?v=eHZifpgyH_4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=22)
    - [ ] [Complexité : Algorithmes d’approximation (vidéo)](https://www.youtube.com/watch?v=MEz1J9wY2iM&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=24)
    - [ ] [Complexité : Algorithmes à paramètre fixe (vidéo)](https://www.youtube.com/watch?v=4q-jmGrmxKs&index=25&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - Peter Norvig discute de solutions quasi-optimales au problème du voyageur de commerce :
        - [Jupyter Notebook](http://nbviewer.jupyter.org/url/norvig.com/ipython/TSP.ipynb)
    - Voir pages 1048 à 1140 dans CLRS si vous l’avez.

- ### Caches

    - [ ] Cache LRU :
        - [ ] [La magie du cache LRU (vidéo)](https://www.youtube.com/watch?v=R5ON3iwx78M)
        - [ ] [Implémentation d’un LRU (vidéo)](https://www.youtube.com/watch?v=bq6N7Ym81iI)
        - [ ] [LeetCode - 146 LRU Cache (C++) (vidéo)](https://www.youtube.com/watch?v=8-FZRAjR7qU)
    - [ ] Cache CPU :
        - [ ] [MIT 6.004 L15 : La hiérarchie mémoire (vidéo)](https://www.youtube.com/watch?v=vjYF_fAZI5E&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-&index=24)
        - [ ] [MIT 6.004 L16 : Problèmes de cache (vidéo)](https://www.youtube.com/watch?v=ajgC3-pyGlk&index=25&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-)

- ### Processus et Threads

    - [ ] Computer Science 162 - Systèmes d’exploitation (25 vidéos) :
        - Voir les vidéos 1 à 11 pour les processus et threads
        - [Systèmes d’exploitation et programmation système (vidéo)](https://www.youtube.com/playlist?list=PL-XXv-cvA_iBDyz-ba4yDskqMDY6A1w_c)
    - [Quelle est la différence entre un processus et un thread ?](https://www.quora.com/What-is-the-difference-between-a-process-and-a-thread)
    - À couvrir :
        - Processus, threads, problèmes de concurrence :
            - Différences entre processus et threads
            - Processus
            - Threads
            - Locks, mutexes, sémaphores, moniteurs
            - Fonctionnement
            - Deadlock, livelock
        - Activité CPU, interruptions, changement de contexte
        - Structures modernes de concurrence avec processeurs multicœurs
        - Besoins en ressources mémoire pour un processus (code, pile, tas, fichiers, I/O)
        - Besoins en ressources pour un thread (registre, pile propre, mais partage le reste avec les autres threads du processus)
        - Forking est en fait un "copy-on-write"
        - Changement de contexte :
            - Initié par l’OS et le matériel
    - [ ] [Threads en C++ (série - 10 vidéos)](https://www.youtube.com/playlist?list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M)
    - [ ] Concurrence en Python :
        - [ ] [Série courte](https://www.youtube.com/playlist?list=PL1H1sBF1VAKVMONJWJkmUh6_p8g4F2oy1)
        - [ ] [Threads Python](https://www.youtube.com/watch?v=Bs7vPNbB9JM)
        - [ ] [Comprendre le GIL Python (vidéo)](https://www.youtube.com/watch?v=Obt-vMVdM8s)
            - [référence](http://www.dabeaz.com/GIL)
        - [ ] [David Beazley - Concurrence Python depuis la base (PyCon 2015)](https://www.youtube.com/watch?v=MCs5OvhV9S4)
        - [ ] [David Beazley - Asyncio (Keynote)](https://www.youtube.com/watch?v=ZzfHjytDceU)
        - [ ] [Mutex en Python (vidéo)](https://www.youtube.com/watch?v=0zaPs8OtyKY)

- ### Articles de recherche

    - Articles de Google et autres articles célèbres.
    - Lecture intégrale recommandée uniquement si le temps le permet. Soyez stratégique.
    - [ ] [1978 : Communicating Sequential Processes](http://spinroot.com/courses/summer/Papers/hoare_1978.pdf)
        - [implémenté en Go](https://godoc.org/github.com/thomas11/csp)
        - [Aimez les articles classiques ?](https://www.cs.cmu.edu/~crary/819-f09/)
    - [ ] [2003 : Google File System](http://static.googleusercontent.com/media/research.google.com/en//archive/gfs-sosp2003.pdf)
    - [ ] [2004 : MapReduce]( http://static.googleusercontent.com/media/research.google.com/en//archive/mapreduce-osdi04.pdf)
    - [ ] [2007 : Tout ce que vous devez savoir sur la mémoire](https://www.akkadia.org/drepper/cpumemory.pdf)
    - [ ] [2012 : Colossus de Google](https://www.wired.com/2012/07/google-colossus/)
    - [ ] 2012 : AddressSanitizer :
        - [article](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/37752.pdf)
        - [vidéo](https://www.usenix.org/conference/atc12/technical-sessions/presentation/serebryany)
    - [ ] 2013 : Spanner - base de données distribuée globale :
        - [article](http://static.googleusercontent.com/media/research.google.com/en//archive/spanner-osdi2012.pdf)
        - [vidéo](https://www.usenix.org/node/170855)
    - [ ] [2014 : Machine Learning et dette technique](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43146.pdf)
    - [ ] [2015 : Pipelines continus chez Google](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43790.pdf)
    - [ ] [2015 : Haute disponibilité à grande échelle](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44686.pdf)
    - [ ] [2015 : TensorFlow](http://download.tensorflow.org/paper/whitepaper2015.pdf)
    - [ ] [2015 : Comment les développeurs cherchent du code](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43835.pdf)
    - [ ] [2016 : Borg, Omega, Kubernetes](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44843.pdf)

- ### Tests

    - À couvrir :
        - Tests unitaires
        - Objets simulés (mocks)
        - Tests d’intégration
        - Injection de dépendances
    - [ ] [Tests agiles avec James Bach (vidéo)](https://www.youtube.com/watch?v=SAhJf36_u5U)
    - [ ] [Cours libre avec James Bach (vidéo)](https://www.youtube.com/watch?v=ILkT_HV9DVU)
    - [ ] [Steve Freeman - TDD (ce n’est pas ce qu’on voulait dire) (vidéo)](https://vimeo.com/83960706)
        - [diapositives](http://gotocon.com/dl/goto-berlin-2013/slides/SteveFreeman_TestDrivenDevelopmentThatsNotWhatWeMeant.pdf)
    - [ ] [TDD est mort. Vive les tests.](http://david.heinemeierhansson.com/2014/tdd-is-dead-long-live-testing.html)
    - [ ] [Est-ce que TDD est mort ? (vidéo)](https://www.youtube.com/watch?v=z9quxZsLcfo)
    - [ ] [Série de vidéos (152 vidéos)](https://www.youtube.com/watch?v=nzJapzxH_rE&list=PLAwxTw4SYaPkWVHeC_8aSIbSxE_NXI76g)
    - [ ] [Test-Driven Web Development with Python](http://www.obeythetestinggoat.com/pages/book.html#toc)
    - [ ] Injection de dépendance :
        - [ ] [vidéo](https://www.youtube.com/watch?v=IKD2-MAkXyQ)
        - [ ] [Tao Of Testing](http://jasonpolites.github.io/tao-of-testing/ch3-1.1.html)
    - [ ] [Comment écrire des tests](http://jasonpolites.github.io/tao-of-testing/ch4-1.1.html)

- ### Ordonnancement

    - Fonctionnement dans un système d’exploitation
    - Voir les vidéos sur les OS ci-dessus

- ### Implementation des routines systeme

    - Comprendre ce qui se passe sous les API
    - Sauriez-vous les implémenter vous-même ?

- ### Recherche et manipulation de chaines

    - [ ] [Sedgewick - Tableaux de suffixes (vidéo)](https://www.youtube.com/watch?v=HKPrVm5FWvg)
    - [ ] [Sedgewick - Recherche de sous-chaînes (playlist)](https://www.youtube.com/watch?v=2LvvVFCEIv8&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66&index=5)
        - [ ] [1. Introduction](https://www.youtube.com/watch?v=2LvvVFCEIv8)
        - [ ] [2. Recherche brute](https://www.youtube.com/watch?v=CcDXwIGEXYU)
        - [ ] [3. Knuth-Morris Pratt](https://www.youtube.com/watch?v=n-7n-FDEWzc)
        - [ ] [4. Boyer-Moore](https://www.youtube.com/watch?v=fI7Ch6pZXfM)
        - [ ] [5. Rabin-Karp](https://www.youtube.com/watch?v=QzI0p6zDjK4)
    - [ ] [Recherche de motif dans un texte (vidéo)](https://www.coursera.org/learn/data-structures/lecture/tAfHI/search-pattern-in-text)

    Si vous avez besoin de plus de détails, consultez la section « Recherche de chaînes » dans [Détails supplémentaires sur certains sujets](#additional-detail-on-some-subjects)


## System Design, Scalability, Data Handling
- **You can expect system design questions if you have 4+ years of experience.**
- Scalability and System Design are very large topics with many topics and resources, since
      there is a lot to consider when designing a software/hardware system that can scale.
      Expect to spend quite a bit of time on this.
- Considerations from Yegge:
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
- [ ] **START HERE**: [System Design from HiredInTech](http://www.hiredintech.com/system-design/)
- [ ] [How Do I Prepare To Answer Design Questions In A Technical Inverview?](https://www.quora.com/How-do-I-prepare-to-answer-design-questions-in-a-technical-interview?redirected_qid=1500023)
- [ ] [8 Things You Need to Know Before a System Design Interview](http://blog.gainlo.co/index.php/2015/10/22/8-things-you-need-to-know-before-system-design-interviews/)
- [ ] [Algorithm design](http://www.hiredintech.com/algorithm-design/)
- [ ] [Database Normalization - 1NF, 2NF, 3NF and 4NF (video)](https://www.youtube.com/watch?v=UrYLYV7WSHM)
- [ ] [System Design Interview](https://github.com/checkcheckzz/system-design-interview) - There are a lot of resources in this one. Look through the articles and examples. I put some of them below.
- [ ] [How to ace a systems design interview](http://www.palantir.com/2011/10/how-to-rock-a-systems-design-interview/)
- [ ] [Numbers Everyone Should Know](http://everythingisdata.wordpress.com/2009/10/17/numbers-everyone-should-know/)
- [ ] [How long does it take to make a context switch?](http://blog.tsunanet.net/2010/11/how-long-does-it-take-to-make-context.html)
- [ ] [Transactions Across Datacenters (video)](https://www.youtube.com/watch?v=srOgpXECblk)
- [ ] [A plain English introduction to CAP Theorem](http://ksat.me/a-plain-english-introduction-to-cap-theorem/)
- [ ] Paxos Consensus algorithm:
    - [short video](https://www.youtube.com/watch?v=s8JqcZtvnsM)
    - [extended video with use case and multi-paxos](https://www.youtube.com/watch?v=JEpsBg0AO6o)
    - [paper](http://research.microsoft.com/en-us/um/people/lamport/pubs/paxos-simple.pdf)
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
    - [ ] [The Importance of Algorithms](https://www.topcoder.com/community/data-science/data-science-tutorials/the-importance-of-algorithms/)
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
    - [ ] [Egnyte Architecture: Lessons Learned In Building And Scaling A Multi Petabyte Distributed System](http://highscalability.com/blog/2016/2/15/egnyte-architecture-lessons-learned-in-building-and-scaling.html)
    - [ ] [Machine Learning Driven Programming: A New Programming For A New World](http://highscalability.com/blog/2016/7/6/machine-learning-driven-programming-a-new-programming-for-a.html)
    - [ ] [The Image Optimization Technology That Serves Millions Of Requests Per Day](http://highscalability.com/blog/2016/6/15/the-image-optimization-technology-that-serves-millions-of-re.html)
    - [ ] [A Patreon Architecture Short](http://highscalability.com/blog/2016/2/1/a-patreon-architecture-short.html)
    - [ ] [Tinder: How Does One Of The Largest Recommendation Engines Decide Who You'll See Next?](http://highscalability.com/blog/2016/1/27/tinder-how-does-one-of-the-largest-recommendation-engines-de.html)
    - [ ] [Design Of A Modern Cache](http://highscalability.com/blog/2016/1/25/design-of-a-modern-cache.html)
    - [ ] [Live Video Streaming At Facebook Scale](http://highscalability.com/blog/2016/1/13/live-video-streaming-at-facebook-scale.html)
    - [ ] [A Beginner's Guide To Scaling To 11 Million+ Users On Amazon's AWS](http://highscalability.com/blog/2016/1/11/a-beginners-guide-to-scaling-to-11-million-users-on-amazons.html)
    - [ ] [How Does The Use Of Docker Effect Latency?](http://highscalability.com/blog/2015/12/16/how-does-the-use-of-docker-effect-latency.html)
    - [ ] [Does AMP Counter An Existential Threat To Google?](http://highscalability.com/blog/2015/12/14/does-amp-counter-an-existential-threat-to-google.html)
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
    - For even more, see "Mining Massive Datasets" video series in the Video Series section.
- [ ] Practicing the system design process: Here are some ideas to try working through on paper, each with some documentation on how it was handled in the real world:
    - review: [System Design from HiredInTech](http://www.hiredintech.com/system-design/)
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
        - [Design a function to return the top k requests during past time interval]( https://icmi.cs.ucsb.edu/research/tech_reports/reports/2005-23.pdf)
        - [Design a picture sharing system](http://highscalability.com/blog/2011/12/6/instagram-architecture-14-million-users-terabytes-of-photos.html)
        - [Design a recommendation system](http://ijcai13.org/files/tutorial_slides/td3.pdf)
        - [Design a URL-shortener system: copied from above](http://www.hiredintech.com/system-design/the-system-design-process/)
        - [Design a cache system](https://www.adayinthelifeof.nl/2011/02/06/memcache-internals/)

---

## Final Review

    This section will have shorter videos that can you watch pretty quickly to review most of the important concepts.
    It's nice if you want a refresher often.

- [ ] Series of 2-3 minutes short subject videos (23 videos)
    - [Videos](https://www.youtube.com/watch?v=r4r1DZcx1cM&list=PLmVb1OknmNJuC5POdcDv5oCS7_OUkDgpj&index=22)
- [ ] Series of 2-5 minutes short subject videos - Michael Sambol (48 videos):
    - [Videos](https://www.youtube.com/@MichaelSambol)
    - [Code Examples](https://github.com/msambol/dsa)

---

## Coding Question Practice

Now that you know all the computer science topics above, it's time to practice answering coding problems.

**Coding question practice is not about memorizing answers to programming problems.**

Why you need to practice doing programming problems:
- problem recognition, and where the right data structures and algorithms fit in
- gathering requirements for the problem
- talking your way through the problem like you will in the interview
- coding on a whiteboard or paper, not a computer
- coming up with time and space complexity for your solutions
- testing your solutions

There is a great intro for methodical, communicative problem solving in an interview. You'll get this from the programming
interview books, too, but I found this outstanding:
[Algorithm design canvas](http://www.hiredintech.com/algorithm-design/)

[My Process for Coding Interview (Book) Exercises](https://googleyasheck.com/my-process-for-coding-interview-exercises/)

No whiteboard at home? That makes sense. I'm a weirdo and have a big whiteboard. Instead of a whiteboard, pick up a
large drawing pad from an art store. You can sit on the couch and practice. This is my "sofa whiteboard".
I added the pen in the photo for scale. If you use a pen, you'll wish you could erase. Gets messy quick.

![my sofa whiteboard](https://dng5l3qzreal6.cloudfront.net/2016/Oct/art_board_sm_2-1476233630368.jpg)

Supplemental:

- [Mathematics for Topcoders](https://www.topcoder.com/community/data-science/data-science-tutorials/mathematics-for-topcoders/)
- [Dynamic Programming – From Novice to Advanced](https://www.topcoder.com/community/data-science/data-science-tutorials/dynamic-programming-from-novice-to-advanced/)
- [MIT Interview Materials](https://web.archive.org/web/20160906124824/http://courses.csail.mit.edu/iap/interview/materials.php)

**Read and Do Programming Problems (in this order):**

- [ ] [Programming Interviews Exposed: Secrets to Landing Your Next Job, 2nd Edition](http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html)
    - answers in C, C++ and Java
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - answers in Java

See [Book List above](#book-list)

## Coding exercises/challenges

Once you've learned your brains out, put those brains to work.
Take coding challenges every day, as many as you can.

- [ ] [How to Find a Solution](https://www.topcoder.com/community/data-science/data-science-tutorials/how-to-find-a-solution/)
- [ ] [How to Dissect a Topcoder Problem Statement](https://www.topcoder.com/community/data-science/data-science-tutorials/how-to-dissect-a-topcoder-problem-statement/)

Challenge sites:
- [LeetCode](https://leetcode.com/)
- [TopCoder](https://www.topcoder.com/)
- [Project Euler (math-focused)](https://projecteuler.net/index.php?section=problems)
- [Codewars](http://www.codewars.com)
- [HackerRank](https://www.hackerrank.com/)
- [Codility](https://codility.com/programmers/)
- [InterviewCake](https://www.interviewcake.com/)
- [Geeks for Geeks](http://www.geeksforgeeks.org/)
- [InterviewBit](https://www.interviewbit.com)

Maybe:
- [Mock interviewers from big companies](http://www.gainlo.co/#!/)

## Once you're closer to the interview

- [ ] Cracking The Coding Interview Set 2 (videos):
    - [Cracking The Code Interview](https://www.youtube.com/watch?v=4NIb9l3imAo)
    - [Cracking the Coding Interview - Fullstack Speaker Series](https://www.youtube.com/watch?v=Eg5-tdAwclo)
    - [Ask Me Anything: Gayle Laakmann McDowell (author of Cracking the Coding Interview)](https://www.youtube.com/watch?v=1fqxMuPmGak)

## Your Resume

- [Ten Tips for a (Slightly) Less Awful Resume](http://steve-yegge.blogspot.co.uk/2007_09_01_archive.html)
- See Resume prep items in Cracking The Coding Interview and back of Programming Interviews Exposed


## Be thinking of for when the interview comes

Think of about 20 interview questions you'll get, along with the lines of the items below. Have 2-3 answers for each.
Have a story, not just data, about something you accomplished.

- Why do you want this job?
- What's a tough problem you've solved?
- Biggest challenges faced?
- Best/worst designs seen?
- Ideas for improving an existing Google product.
- How do you work best, as an individual and as part of a team?
- Which of your skills or experiences would be assets in the role and why?
- What did you most enjoy at [job x / project y]?
- What was the biggest challenge you faced at [job x / project y]?
- What was the hardest bug you faced at [job x / project y]?
- What did you learn at [job x / project y]?
- What would you have done better at [job x / project y]?

## Have questions for the interviewer

    Some of mine (I already may know answer to but want their opinion or team perspective):

- How large is your team?
- What does your dev cycle look like? Do you do waterfall/sprints/agile?
- Are rushes to deadlines common? Or is there flexibility?
- How are decisions made in your team?
- How many meetings do you have per week?
- Do you feel your work environment helps you concentrate?
- What are you working on?
- What do you like about it?
- What is the work life like?

## Once You've Got The Job

Congratulations!

- [10 things I wish I knew on my first day at Google](https://medium.com/@moonstorming/10-things-i-wish-i-knew-on-my-first-day-at-google-107581d87286#.livxn7clw)

Keep learning.

You're never really done.

---

    *****************************************************************************************************
    *****************************************************************************************************

    Everything below this point is optional. These are my recommendations, not Google's.
    By studying these, you'll get greater exposure to more CS concepts, and will be better prepared for
    any software engineering job. You'll be a much more well-rounded software engineer.

    *****************************************************************************************************
    *****************************************************************************************************

---

## Additional Books

- [ ] [The Unix Programming Environment](http://product.half.ebay.com/The-UNIX-Programming-Environment-by-Brian-W-Kernighan-and-Rob-Pike-1983-Other/54385&tg=info)
    - an oldie but a goodie
- [ ] [The Linux Command Line: A Complete Introduction](https://www.amazon.com/dp/1593273894/)
    - a modern option
- [ ] [TCP/IP Illustrated Series](https://en.wikipedia.org/wiki/TCP/IP_Illustrated)
- [ ] [Head First Design Patterns](https://www.amazon.com/gp/product/0596007124/)
    - a gentle introduction to design patterns
- [ ] [Design Patterns: Elements of Reusable Object-Oriente​d Software](https://www.amazon.com/Design-Patterns-Elements-Reusable-Object-Oriented/dp/0201633612)
    - aka the "Gang Of Four" book, or GOF
    - the canonical design patterns book
- [ ] [Site Reliability Engineering](https://landing.google.com/sre/book.html)
    - [Site Reliability Engineering: How Google Runs Production Systems](https://landing.google.com/sre/)
- [ ] [UNIX and Linux System Administration Handbook, 4th Edition](https://www.amazon.com/UNIX-Linux-System-Administration-Handbook/dp/0131480057/)

## Additional Learning

- ### Dynamic Programming
    - This subject can be pretty difficult, as each DP soluble problem must be defined as a recursion relation, and coming up with it can be tricky.
    - I suggest looking at many examples of DP problems until you have a solid understanding of the pattern involved.
    - [ ] Videos:
        - the Skiena videos can be hard to follow since he sometimes uses the whiteboard, which is too small to see
        - [ ] [Skiena: CSE373 2012 - Lecture 19 - Introduction to Dynamic Programming (video)](https://youtu.be/Qc2ieXRgR0k?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1718)
        - [ ] [Skiena: CSE373 2012 - Lecture 20 - Edit Distance (video)](https://youtu.be/IsmMhMdyeGY?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=2749)
        - [ ] [Skiena: CSE373 2012 - Lecture 21 - Dynamic Programming Examples (video)](https://youtu.be/o0V9eYF4UI8?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=406)
        - [ ] [Skiena: CSE373 2012 - Lecture 22 - Applications of Dynamic Programming (video)](https://www.youtube.com/watch?v=dRbMC1Ltl3A&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=22)
        - [ ] [Simonson: Dynamic Programming 0 (starts at 59:18) (video)](https://youtu.be/J5aJEcOr6Eo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3558)
        - [ ] [Simonson: Dynamic Programming I - Lecture 11 (video)](https://www.youtube.com/watch?v=0EzHjQ_SOeU&index=11&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [Simonson: Dynamic programming II - Lecture 12 (video)](https://www.youtube.com/watch?v=v1qiRwuJU7g&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=12)
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

- ### Compilers
    - [ ] [How a Compiler Works in ~1 minute (video)](https://www.youtube.com/watch?v=IhC7sdYe-Jg)
    - [ ] [Harvard CS50 - Compilers (video)](https://www.youtube.com/watch?v=CSZLNYF4Klo)
    - [ ] [C++ (video)](https://www.youtube.com/watch?v=twodd1KFfGk)
    - [ ] [Understanding Compiler Optimization (C++) (video)](https://www.youtube.com/watch?v=FnGCDLhaxKU)

- ### Floating Point Numbers
    - [ ] simple 8-bit: [Representation of Floating Point Numbers - 1 (video - there is an error in calculations - see video description)](https://www.youtube.com/watch?v=ji3SfClm8TU)
    - [ ] 32 bit: [IEEE754 32-bit floating point binary (video)](https://www.youtube.com/watch?v=50ZYcZebIec)

- ### Unicode
    - [ ] [The Absolute Minimum Every Software Developer Absolutely, Positively Must Know About Unicode and Character Sets]( http://www.joelonsoftware.com/articles/Unicode.html)
    - [ ] [What Every Programmer Absolutely, Positively Needs To Know About Encodings And Character Sets To Work With Text](http://kunststube.net/encoding/)

- ### Endianness
    - [ ] [Big And Little Endian](https://www.cs.umd.edu/class/sum2003/cmsc311/Notes/Data/endian.html)
    - [ ] [Big Endian Vs Little Endian (video)](https://www.youtube.com/watch?v=JrNF0KRAlyo)
    - [ ] [Big And Little Endian Inside/Out (video)](https://www.youtube.com/watch?v=oBSuXP-1Tc0)
        - Very technical talk for kernel devs. Don't worry if most is over your head.
        - The first half is enough.

- ### Emacs and vi(m)
    - suggested by Yegge, from an old Amazon recruiting post: Familiarize yourself with a unix-based code editor
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
    - suggested by Yegge, from an old Amazon recruiting post. I filled in the list below from good tools.
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

- ### Information theory (videos)
    - [ ] [Khan Academy](https://www.khanacademy.org/computing/computer-science/informationtheory)
    - [ ] more about Markov processes:
        - [ ] [Core Markov Text Generation](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/waxgx/core-markov-text-generation)
        - [ ] [Core Implementing Markov Text Generation](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/gZhiC/core-implementing-markov-text-generation)
        - [ ] [Project = Markov Text Generation Walk Through](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/EUjrq/project-markov-text-generation-walk-through)
    - See more in MIT 6.050J Information and Entropy series below.

- ### Parity & Hamming Code (videos)
    - [ ] [Intro](https://www.youtube.com/watch?v=q-3BctoUpHE)
    - [ ] [Parity](https://www.youtube.com/watch?v=DdMcAUlxh1M)
    - [ ] Hamming Code:
        - [Error detection](https://www.youtube.com/watch?v=1A_NcXxdoCc)
        - [Error correction](https://www.youtube.com/watch?v=JAMLuxdHH8o)
    - [ ] [Error Checking](https://www.youtube.com/watch?v=wbH2VxzmoZk)

- ### Entropy
    - also see videos below
    - make sure to watch information theory videos first
    - [ ] [Information Theory, Claude Shannon, Entropy, Redundancy, Data Compression & Bits (video)](https://youtu.be/JnJq3Py0dyM?t=176)

- ### Cryptography
    - also see videos below
    - make sure to watch information theory videos first
    - [ ] [Khan Academy Series](https://www.khanacademy.org/computing/computer-science/cryptography)
    - [ ] [Cryptography: Hash Functions](https://www.youtube.com/watch?v=KqqOXndnvic&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=30)
    - [ ] [Cryptography: Encryption](https://www.youtube.com/watch?v=9TNI2wHmaeI&index=31&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

- ### Compression
    - make sure to watch information theory videos first
    - [ ] Computerphile (videos):
        - [ ] [Compression](https://www.youtube.com/watch?v=Lto-ajuqW3w)
        - [ ] [Entropy in Compression](https://www.youtube.com/watch?v=M5c_RFKVkko)
        - [ ] [Upside Down Trees (Huffman Trees)](https://www.youtube.com/watch?v=umTbivyJoiI)
        - [ ] [EXTRA BITS/TRITS - Huffman Trees](https://www.youtube.com/watch?v=DV8efuB3h2g)
        - [ ] [Elegant Compression in Text (The LZ 77 Method)](https://www.youtube.com/watch?v=goOa3DGezUA)
        - [ ] [Text Compression Meets Probabilities](https://www.youtube.com/watch?v=cCDCfoHTsaU)
    - [ ] [Compressor Head videos](https://www.youtube.com/playlist?list=PLOU2XLYxmsIJGErt5rrCqaSGTMyyqNt2H)
    - [ ] [(optional) Google Developers Live: GZIP is not enough!](https://www.youtube.com/watch?v=whGwm0Lky2s)

- ### Networking
    - **if you have networking experience or want to be a systems engineer, expect questions**
    - otherwise, this is just good to know
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

- ### Computer Security
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

- ### Garbage collection
    - [ ] [Compilers (video)](https://www.youtube.com/playlist?list=PLO9y7hOkmmSGTy5z6HZ-W4k2y8WXF7Bff)
    - [ ] [GC in Python (video)](https://www.youtube.com/watch?v=iHVs_HkjdmI)
    - [ ] [Deep Dive Java: Garbage Collection is Good!](https://www.infoq.com/presentations/garbage-collection-benefits)
    - [ ] [Deep Dive Python: Garbage Collection in CPython (video)](https://www.youtube.com/watch?v=P-8Z0-MhdQs&list=PLdzf4Clw0VbOEWOS_sLhT_9zaiQDrS5AR&index=3)

- ### Parallel Programming
    - [ ] [Coursera (Scala)](https://www.coursera.org/learn/parprog1/home/week/1)
    - [ ] [Efficient Python for High Performance Parallel Computing (video)](https://www.youtube.com/watch?v=uY85GkaYzBk)

- ### Messaging, Serialization, and Queueing Systems
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
    - used to determine the similarity of documents
    - the opposite of MD5 or SHA which are used to determine if 2 documents/strings are exactly the same.
    - [Simhashing (hopefully) made simple](http://ferd.ca/simhashing-hopefully-made-simple.html)

- ### van Emde Boas Trees
    - [ ] [Divide & Conquer: van Emde Boas Trees (video)](https://www.youtube.com/watch?v=hmReJCupbNU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=6)
    - [ ] [MIT Lecture Notes](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-046j-design-and-analysis-of-algorithms-spring-2012/lecture-notes/MIT6_046JS12_lec15.pdf)

- ### Augmented Data Structures
    - [ ] [CS 61B Lecture 39: Augmenting Data Structures](https://youtu.be/zksIj9O8_jc?list=PL4BBB74C7D2A1049C&t=950)

- ### Tries
    - Note there are different kinds of tries. Some have prefixes, some don't, and some use string instead of bits
        to track the path.
    - I read through code, but will not implement.
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

- ### Balanced search trees
    - Know least one type of balanced binary tree (and know how it's implemented):
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
    - [ ] [Self-balancing binary search tree](https://en.wikipedia.org/wiki/Self-balancing_binary_search_tree)

    - [ ] **AVL trees**
        - In practice:
            From what I can tell, these aren't used much in practice, but I could see where they would be:
            The AVL tree is another structure supporting O(log n) search, insertion, and removal. It is more rigidly
            balanced than red–black trees, leading to slower insertion and removal but faster retrieval. This makes it
            attractive for data structures that may be built once and loaded without reconstruction, such as language
            dictionaries (or program dictionaries, such as the opcodes of an assembler or interpreter).
        - [ ] [MIT AVL Trees / AVL Sort (video)](https://www.youtube.com/watch?v=FNeL18KsWPc&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=6)
        - [ ] [AVL Trees (video)](https://www.coursera.org/learn/data-structures/lecture/Qq5E0/avl-trees)
        - [ ] [AVL Tree Implementation (video)](https://www.coursera.org/learn/data-structures/lecture/PKEBC/avl-tree-implementation)
        - [ ] [Split And Merge](https://www.coursera.org/learn/data-structures/lecture/22BgE/split-and-merge)
        - [ ] [[Review] AVL Trees (playlist) in 19 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZOUFgdIeOPuH6cfSnNRMau-)

    - [ ] **Splay trees**
        - In practice:
            Splay trees are typically used in the implementation of caches, memory allocators, routers, garbage collectors,
            data compression, ropes (replacement of string used for long text strings), in Windows NT (in the virtual memory,
            networking and file system code) etc.
        - [ ] [CS 61B: Splay Trees (video)](https://www.youtube.com/watch?v=Najzh1rYQTo&index=23&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd)
        - [ ] MIT Lecture: Splay Trees:
            - Gets very mathy, but watch the last 10 minutes for sure.
            - [Video](https://www.youtube.com/watch?v=QnPl_Y6EqMo)

    - [ ] **Red/black trees**
        - these are a translation of a 2-3 tree (see below)
        - In practice:
            Red–black trees offer worst-case guarantees for insertion time, deletion time, and search time.
            Not only does this make them valuable in time-sensitive applications such as real-time applications,
            but it makes them valuable building blocks in other data structures which provide worst-case guarantees;
            for example, many data structures used in computational geometry can be based on red–black trees, and
            the Completely Fair Scheduler used in current Linux kernels uses red–black trees. In the version 8 of Java,
            the Collection HashMap has been modified such that instead of using a LinkedList to store identical elements with poor
            hashcodes, a Red-Black tree is used.
        - [ ] [Aduni - Algorithms - Lecture 4 (link jumps to starting point) (video)](https://youtu.be/1W3x0f_RmUo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3871)
        - [ ] [Aduni - Algorithms - Lecture 5 (video)](https://www.youtube.com/watch?v=hm2GHwyKF1o&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=5)
        - [ ] [Black Tree](https://en.wikipedia.org/wiki/Red%E2%80%93black_tree)
        - [ ] [An Introduction To Binary Search And Red Black Tree](https://www.topcoder.com/community/data-science/data-science-tutorials/an-introduction-to-binary-search-and-red-black-trees/)
        - [[Review] Red-Black Trees (playlist) in 30 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZNqDI8qfOZgzbqahCUmUEin)

    - [ ] **2-3 search trees**
        - In practice:
            2-3 trees have faster inserts at the expense of slower searches (since height is more compared to AVL trees).
        - You would use 2-3 tree very rarely because its implementation involves different types of nodes. Instead, people use Red Black trees.
        - [ ] [23-Tree Intuition and Definition (video)](https://www.youtube.com/watch?v=C3SsdUqasD4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=2)
        - [ ] [Binary View of 23-Tree](https://www.youtube.com/watch?v=iYvBtGKsqSg&index=3&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [ ] [2-3 Trees (student recitation) (video)](https://www.youtube.com/watch?v=TOb1tuEZ2X4&index=5&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

    - [ ] **2-3-4 Trees (aka 2-4 trees)**
        - In practice:
            For every 2-4 tree, there are corresponding red–black trees with data elements in the same order. The insertion and deletion
            operations on 2-4 trees are also equivalent to color-flipping and rotations in red–black trees. This makes 2-4 trees an
            important tool for understanding the logic behind red–black trees, and this is why many introductory algorithm texts introduce
            2-4 trees just before red–black trees, even though **2-4 trees are not often used in practice**.
        - [ ] [CS 61B Lecture 26: Balanced Search Trees (video)](https://www.youtube.com/watch?v=zqrqYXkth6Q&index=26&list=PL4BBB74C7D2A1049C)
        - [ ] [Bottom Up 234-Trees (video)](https://www.youtube.com/watch?v=DQdMYevEyE4&index=4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [ ] [Top Down 234-Trees (video)](https://www.youtube.com/watch?v=2679VQ26Fp4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=5)

    - [ ] **N-ary (K-ary, M-ary) trees**
        - note: the N or K is the branching factor (max branches)
        - binary trees are a 2-ary tree, with branching factor = 2
        - 2-3 trees are 3-ary
        - [ ] [K-Ary Tree](https://en.wikipedia.org/wiki/K-ary_tree)

    - [ ] **B-Trees**
        - fun fact: it's a mystery, but the B could stand for Boeing, Balanced, or Bayer (co-inventor)
        - In Practice:
            B-Trees are widely used in databases. Most modern filesystems use B-trees (or Variants). In addition to
            its use in databases, the B-tree is also used in filesystems to allow quick random access to an arbitrary
            block in a particular file. The basic problem is turning the file block i address into a disk block
            (or perhaps to a cylinder-head-sector) address.
        - [ ] [B-Tree](https://en.wikipedia.org/wiki/B-tree)
        - [ ] [Introduction to B-Trees (video)](https://www.youtube.com/watch?v=I22wEC1tTGo&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=6)
        - [ ] [B-Tree Definition and Insertion (video)](https://www.youtube.com/watch?v=s3bCdZGrgpA&index=7&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [ ] [B-Tree Deletion (video)](https://www.youtube.com/watch?v=svfnVhJOfMc&index=8&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [ ] [MIT 6.851 - Memory Hierarchy Models (video)](https://www.youtube.com/watch?v=V3omVLzI0WE&index=7&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf)
                - covers cache-oblivious B-Trees, very interesting data structures
                - the first 37 minutes are very technical, may be skipped (B is block size, cache line size)
        - [[Review] B-Trees (playlist) in 26 minutes (video)](https://www.youtube.com/playlist?list=PL9xmBV_5YoZNFPPv98DjTdD9X6UI9KMHz)


- ### k-D Trees
    - great for finding number of points in a rectangle or higher dimension object
    - a good fit for k-nearest neighbors
    - [ ] [Kd Trees (video)](https://www.youtube.com/watch?v=W94M9D_yXKk)
    - [ ] [kNN K-d tree algorithm (video)](https://www.youtube.com/watch?v=Y4ZgLlDfKDg)

- ### Skip lists
    - "These are somewhat of a cult data structure" - Skiena
    - [ ] [Randomization: Skip Lists (video)](https://www.youtube.com/watch?v=2g9OSRKJuzM&index=10&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [For animations and a little more detail](https://en.wikipedia.org/wiki/Skip_list)

- ### Network Flows
    - [ ] [Ford-Fulkerson in 5 minutes (video)](https://www.youtube.com/watch?v=v1VgJmkEJW0)
    - [ ] [Ford-Fulkerson Algorithm (video)](https://www.youtube.com/watch?v=v1VgJmkEJW0)
    - [ ] [Network Flows (video)](https://www.youtube.com/watch?v=2vhN4Ice5jI)

- ### Math for Fast Processing
    - [ ] [Integer Arithmetic, Karatsuba Multiplication (video)](https://www.youtube.com/watch?v=eCaXlAaN2uE&index=11&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [The Chinese Remainder Theorem (used in cryptography) (video)](https://www.youtube.com/watch?v=ru7mWZJlRQg)

- ### Treap
    - Combination of a binary search tree and a heap
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
    - see videos below

- ### Machine Learning
    - [ ] Why ML?
        - [ ] [How Google Is Remaking Itself As A Machine Learning First Company](https://backchannel.com/how-google-is-remaking-itself-as-a-machine-learning-first-company-ada63defcb70)
        - [ ] [Large-Scale Deep Learning for Intelligent Computer Systems (video)](https://www.youtube.com/watch?v=QSaZGT4-6EY)
        - [ ] [Deep Learning and Understandability versus Software Engineering and Verification by Peter Norvig](https://www.youtube.com/watch?v=X769cyzBNVw)
    - [ ] [Google's Cloud Machine learning tools (video)](https://www.youtube.com/watch?v=Ja2hxBAwG_0)
    - [ ] [Google Developers' Machine Learning Recipes (Scikit Learn & Tensorflow) (video)](https://www.youtube.com/playlist?list=PLOU2XLYxmsIIuiBfYad6rFYQU_jL2ryal)
    - [ ] [Tensorflow (video)](https://www.youtube.com/watch?v=oZikw5k_2FM)
    - [ ] [Tensorflow Tutorials](https://www.tensorflow.org/versions/r0.11/tutorials/index.html)
    - [ ] [Practical Guide to implementing Neural Networks in Python (using Theano)](http://www.analyticsvidhya.com/blog/2016/04/neural-networks-python-theano/)
    - Courses:
        - [Great starter course: Machine Learning](https://www.coursera.org/learn/machine-learning)
              - [videos only](https://www.youtube.com/playlist?list=PLZ9qNFMHZ-A4rycgrgOYma6zxF4BZGGPW)
              - see videos 12-18 for a review of linear algebra (14 and 15 are duplicates)
        - [Neural Networks for Machine Learning](https://www.coursera.org/learn/neural-networks)
        - [Google's Deep Learning Nanodegree](https://www.udacity.com/course/deep-learning--ud730)
        - [Google/Kaggle Machine Learning Engineer Nanodegree](https://www.udacity.com/course/machine-learning-engineer-nanodegree-by-google--nd009)
        - [Self-Driving Car Engineer Nanodegree](https://www.udacity.com/drive)
    - Resources:
        - Books:
            - [Python Machine Learning](https://www.amazon.com/Python-Machine-Learning-Sebastian-Raschka/dp/1783555130/)
            - [Data Science from Scratch: First Principles with Python](https://www.amazon.com/Data-Science-Scratch-Principles-Python/dp/149190142X)
            - [Introduction to Machine Learning with Python](https://www.amazon.com/Introduction-Machine-Learning-Python-Scientists/dp/1449369413/)
        - [Machine Learning for Software Engineers](https://github.com/ZuzooVn/machine-learning-for-software-engineers)
        - Data School: http://www.dataschool.io/

- ### Go
    - [ ] Videos:
        - [ ] [Why Learn Go?](https://www.youtube.com/watch?v=FTl0tl9BGdc)
        - [ ] [Go Programming](https://www.youtube.com/watch?v=CF9S4QZuV30)
        - [ ] [A Tour of Go](https://www.youtube.com/watch?v=ytEkHepK08c)
    - [ ] Books:
        - [ ] [An Introduction to Programming in Go (read free online)](https://www.golang-book.com/books/intro)
        - [ ] [The Go Programming Language (Donovan & Kernighan)](https://www.amazon.com/Programming-Language-Addison-Wesley-Professional-Computing/dp/0134190440)
    - [ ] [Bootcamp](https://www.golang-book.com/guides/bootcamp)

--

## Additional Detail on Some Subjects

    I added these to reinforce some ideas already presented above, but didn't want to include them
    above because it's just too much. It's easy to overdo it on a subject.
    You want to get hired in this century, right?

- [ ] **Union-Find**
    - [ ] [Overview](https://www.coursera.org/learn/data-structures/lecture/JssSY/overview)
    - [ ] [Naive Implementation](https://www.coursera.org/learn/data-structures/lecture/EM5D0/naive-implementations)
    - [ ] [Trees](https://www.coursera.org/learn/data-structures/lecture/Mxu0w/trees)
    - [ ] [Union By Rank](https://www.coursera.org/learn/data-structures/lecture/qb4c2/union-by-rank)
    - [ ] [Path Compression](https://www.coursera.org/learn/data-structures/lecture/Q9CVI/path-compression)
    - [ ] [Analysis Options](https://www.coursera.org/learn/data-structures/lecture/GQQLN/analysis-optional)

- [ ] **More Dynamic Programming** (videos)
    - [ ] [6.006: Dynamic Programming I: Fibonacci, Shortest Paths](https://www.youtube.com/watch?v=OQ5jsbhAv_M&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=19)
    - [ ] [6.006: Dynamic Programming II: Text Justification, Blackjack](https://www.youtube.com/watch?v=ENyox7kNKeY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=20)
    - [ ] [6.006: DP III: Parenthesization, Edit Distance, Knapsack](https://www.youtube.com/watch?v=ocZMDMZwhCY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=21)
    - [ ] [6.006: DP IV: Guitar Fingering, Tetris, Super Mario Bros.](https://www.youtube.com/watch?v=tp4_UXaVyx8&index=22&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [6.046: Dynamic Programming & Advanced DP](https://www.youtube.com/watch?v=Tw1k46ywN6E&index=14&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [6.046: Dynamic Programming: All-Pairs Shortest Paths](https://www.youtube.com/watch?v=NzgFUwOaoIw&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=15)
    - [ ] [6.046: Dynamic Programming (student recitation)](https://www.youtube.com/watch?v=krZI60lKPek&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=12)

- [ ] **Advanced Graph Processing** (videos)
    - [ ] [Synchronous Distributed Algorithms: Symmetry-Breaking. Shortest-Paths Spanning Trees](https://www.youtube.com/watch?v=mUBmcbbJNf4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=27)
    - [ ] [Asynchronous Distributed Algorithms: Shortest-Paths Spanning Trees](https://www.youtube.com/watch?v=kQ-UQAzcnzA&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=28)

- [ ] MIT **Probability** (mathy, and go slowly, which is good for mathy things) (videos):
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
        - [TThe Knuth-Morris-Pratt (KMP) String Matching Algorithm](https://www.youtube.com/watch?v=5i7oKodCRJo)
    - [ ] Boyer–Moore string search algorithm
        - [Boyer-Moore String Search Algorithm](https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_string_search_algorithm)
        - [Advanced String Searching Boyer-Moore-Horspool Algorithms (video)](https://www.youtube.com/watch?v=QDZpzctPf10)
    - [ ] [Coursera: Algorithms on Strings](https://www.coursera.org/learn/algorithms-on-strings/home/week/1)
        - starts off great, but by the time it gets past KMP it gets more complicated than it needs to be
        - nice explanation of tries
        - can be skipped

- [ ] **Sorting**

    - [ ] Stanford lectures on sorting:
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

## Video Series

Sit back and enjoy. "Netflix and skill" :P

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

## Computer Science Courses

- [Directory of Online CS Courses](https://github.com/open-source-society/computer-science)
- [Directory of CS Courses (many with online lectures)](https://github.com/prakhar1989/awesome-courses)
