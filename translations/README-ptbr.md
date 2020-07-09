# Universidade de Entrevista de Programação

> Originalmente eu criei isso como uma pequena lista to-do de tópicos de estudo para se tornar um engenheiro de software, 
> mas isso cresceu para a grande lista que você vê hoje. Após passar por esse plano de estudo, [Eu fui contratado 
> como Engenheiro de Desenvolvimento de Software na Amazon](https://startupnextdoor.com/ive-been-acquired-by-amazon/?src=ciu)! 
> Você provavelmente não vai precisar estudar tanto quanto eu. De qualquer maneira, tudo que você precisa está aqui.
>
> Os itens listados aqui irão preparar você muito bem para uma entrevista em praticamente qualquer empresa de software, 
> incluindo as gigantes: Amazon, Facebook, Google ou Microsoft.
>
> *Boa sorte para todos vocês!*

**Original**: [Inglês](https://github.com/jwasham/coding-interview-university/blob/master/README.md)

- [Acompanhe o progresso da tradução aqui!](https://github.com/jwasham/coding-interview-university/pull/115)

**Tradutores**: [Marlon Aviz](https://github.com/avizmarlon) ([Contribuições](https://github.com/avizmarlon/coding-interview-university/commits/ptbr-translation/translations/README-ptbr.md?author=avizmarlon)), [marceloogeda](https://github.com/marceloogeda) ([Contribuições](https://github.com/avizmarlon/coding-interview-university/commits/ptbr-translation/translations/README-ptbr.md?author=marceloogeda)), [laris151](https://github.com/laris151) ([Contribuições](https://github.com/avizmarlon/coding-interview-university/commits/ptbr-translation/translations/README-ptbr.md?author=laris151))

Traduções:
- [中文版本](translations/README-cn.md)
- [Tiếng Việt - Vietnamese](translations/README-vi.md)
- [Español](translations/README-es.md)
- [Português Brasileiro](README-ptbr.md)

Traduções em progresso:
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
- [German](https://github.com/jwasham/coding-interview-university/issues/135)
- [Urdu](https://github.com/jwasham/coding-interview-university/issues/140)
- [Thai](https://github.com/jwasham/coding-interview-university/issues/156)
- [Greek](https://github.com/jwasham/coding-interview-university/issues/166)
- [Italian](https://github.com/jwasham/coding-interview-university/issues/170)
    
## O que é isso?

Esse é o meu plano de estudo mensal para ir de desenvolvedor web (autodidata, sem formação em Ciência da Computação) à engenheiro de software para uma grande empresa.

![Programando no quadro branco - do Vale do Silício da HBO](https://d3j2pkmjtin6ou.cloudfront.net/coding-at-the-whiteboard-silicon-valley.png)

Essa longa lista foi extraída e expandida a partir das **anotações de treinamento da Google**, então essas são as coisas que você precisa saber.
Eu adicionei alguns itens extras no final que podem aparecer na entrevista ou serem úteis para resolver um problema. Muitos itens são da obra “[Get that job at Google](http://steve-yegge.blogspot.com/2008/03/get-that-job-at-google.html)” (Consiga aquele trabalho na Google) de Steve Yegge's e às vezes são expressados palavra-por-palavra nas anotações de treinamento da Google.

Isso é direcionado à **engenheiros de software novos** ou àqueles que estão migrando de desenvolvimento de software/web para engenharia de software (onde conhecimento de ciência da computação é necessário). Se você tem vários anos de experiência e está alegando muitos anos de experiência com engenharia de software, pode esperar por uma entrevista mais difícil.

Se você tem vários anos de experiência com desenvolvimento de software/web, observe que grandes empresas como Google, Amazon, Facebook e Microsoft consideram engenharia de software como algo distinto de desenvolvimento de software/web e elas requerem conhecimento de ciência da computação.

Se você quer ser um engenheiro de confiabilidade ou engenheiro de sistemas, estude mais da lista opcional (rede, segurança).

---

## Índice

- [O que é isso?](#o-que-é-isso)
- [Por que usar?](#por-que-usar)
- [Como usar?](#como-usar)
- [Não ache que você não é inteligente o suficiente](#não-ache-que-você-não-é-inteligente-o-suficiente)
- [Sobre os recursos em vídeo](#sobre-os-recursos-em-vídeo)
- [Processo de Entrevista e Preparação Geral para a Entrevista](#processo-de-entrevista-e-preparação-geral-para-a-entrevista)
- [Escolha Uma Linguagem para a Entrevista](#escolha-uma-linguagem-para-a-entrevista)
- [Lista de Livros](#lista-de-livros)
- [Antes de começar](#antes-de-começar)
- [O que você não verá](#o-que-você-não-verá)
- [O Plano Diário](#o-plano-diário)
- [Conhecimento Prévio](#conhecimento-prévio)
- [Complexidade Algorítmica / Big-O / Análise assintótica](#complexidade-algorítmica--big-o--análise-assintótica)
- [Estrutura de Dados](#estrutura-de-dados)
    - [Arrays](#arrays)
    - [Listas Ligadas](#listas-ligadas)
    - [Stack](#stack)
    - [Queue (Fila)](#queue-fila)
    - [Tabela hash](#tabela-hash)
- [Mais Conhecimento](#mais-conhecimento)
    - [Busca binária](#busca-binária)
    - [Lógica binária](#lógica-binária)
- [Árvores](#Árvores)
    - [Árvores - Anotações e Fundamentos](#Árvores---anotações-e-fundamentos)
    - [Árvores binárias de busca: ABB](#Árvores-binárias-de-busca-abb)
    - [Memória Dinâmica (heap) / Filas Prioritárias / Memória Dinâmica Binária (heap binary)](#memória-dinâmica-heap--filas-prioritárias--memória-dinâmica-binária-heap-binary)
    - árvores de busca balanceadas (conceito geral, não detalhes)
    - transversais: pré-ordem, em-ordem (ordem simétrica), pós-ordem, busca em largura, busca em profundidade
- [Ordenação](#ordenação)
    - seleção
    - inserção
    - heapsort
    - quicksort
    - ordenação por mistura (merge sort)
- [Grafos](#grafos)
    - directed
    - undirected
    - matriz de adjacência
    - lista de adjacência
    - traversals: BFS, DFS
- [Ainda Mais Conhecimento](#ainda-mais-conhecimento)
    - [Recursão](#recursão)
    - [Programação Dinâmica](#programação-dinâmica)
    - [Programação Orientada a Objetos](#programação-orientada-a-objetos)
    - [Padrões de Design](#padrões-de-design)
    - [Combinatórias (n escolhe k) e Probabilidade](#combinatórias-n-escolhe-k-e-probabilidade)
    - [Algoritmos de Aproximação, NP-Completo e NP](#algoritmos-de-aproximação-np-completo-e-np)
    - [Caches](#caches)
    - [Processos e Threads](#processos-e-threads)
    - [Artigos](#artigos)
    - [Testes](#testes)
    - [Agendamento](#agendamento)
    - [Implementar rotinas de sistema](#implementar-rotinas-de-sistema)
    - [Busca de string e manipulações](#busca-de-string-e-manipulações)
    - [Tries (ou Árvore de Prefixos)](#tries-ou-Árvore-de-prefixos)
    - [Números de Ponto Flutuantes ("Floating Point Numbers")](#números-de-ponto-flutuantes-floating-point-numbers)
    - [Unicode](#unicode)
    - [Extremidade (ordenação) (ou "endianness" em Inglês)](#extremidade-ordenação-ou-endianness-em-inglês)
- [Redes](#redes)
- [Design de Sistema, Escalabilidade, Tratamento de Dados](#design-de-sistema-escalabilidade-tratamento-de-dados) (se você tem mais de 4 anos de experiência)
- [Revisão Final](#revisão-final)
- [Prática com Questões de Programação](#prática-com-questões-de-programação)
- [Exercícios/desafios de programação](#exercíciosdesafios-de-programação)
- [Quando a entrevista estiver se aproximando](#quando-a-entrevista-estiver-se-aproximando)
- [Seu Currículo](#seu-currículo)
- [Esteja pensando à respeito para quando a entrevista chegar](#esteja-pensando-à-respeito-para-quando-a-entrevista-chegar)
- [Tenha questões para o entrevistador](#tenha-questões-para-o-entrevistador)
- [Quando Você Conseguir O Trabalho](#quando-você-conseguir-o-trabalho)

---------------- Tudo abaixo é opcional ----------------

- [Livros Adicionais](#livros-adicionais)
- [Aprendizagem Adicional](#aprendizagem-adicional)
    - [Compiladores](#compiladores)
    - [Emacs e vi(m)](#emacs-e-vim)
    - [Ferramentas de linha de comando do Unix](#ferramentas-de-linha-de-comando-do-unix)
    - [Teoria da informação](#teoria-da-informação-vídeos)
    - [Paridade e Código de Hamming](#paridade-e-código-de-hamming-vídeos)
    - [Entropia](#entropia)
    - [Criptografia](#criptografia)
    - [Compressão](#compressão)
    - [Segurança de Computador](#segurança-de-computador)
    - [Coleta de lixo](#coleta-de-lixo)
    - [Programação Paralela](#programação-paralela)
    - [Envio de Mensagens, Serialização, e Sistemas de Enfileiramento](#envio-de-mensagens-serialização-e-sistemas-de-enfileiramento)
    - [A*](#a)
    - [Transformada de Fourier Rápida](#transformada-de-fourier-rápida)
    - [Filtro de Bloom](#filtro-de-bloom)
    - [HyperLogLog](#hyperloglog)
    - [Locality-Sensitive Hashing](#locality-sensitive-hashing)
    - [Árvores de van Emde Boas](#Árvores-de-van-emde-boas)
    - [Estruturas de Dados Incrementadas](#estruturas-de-dados-incrementadas)
    - [Árvores de busca balanceadas](#Árvores-de-busca-balanceadas)
        - Árvores AVL
        - Árvores Splay
        - Árvores rubro-negras
        - Árvores de busca 2-3
        - Árvores 2-3-4 (também conhecidas como árvores 2-4)
        - Árvores N-ary (K-ary, M-ary)
        - Árvores B
    - [Árvores k-D](#Árvores-k-d)
    - [Skiplists](#skiplists)
    - [Fluxos de Rede](#fluxos-de-rede)
    - [Conjuntos Disjuntos e Union-find](#conjuntos-disjuntos-e-union-find)
    - [Matemática para Processamento Rápido](#matemática-para-processamento-rápido)
    - [Treap](#treap)
    - [Programação Linear](#programação-linear-vídeos)
    - [Geometria, Envoltória convexa](#geometria-envoltória-convexa-vídeos)
    - [Matemática discreta](#matemática-discreta)
    - [Aprendizado de Máquina](#aprendizado-de-máquina)
- [Detalhes Adicionais Sobre Alguns Assuntos](#detalhes-adicionais-sobre-alguns-assuntos)
- [Séries de Vídeos](#séries-de-vídeos)
- [Cursos de Ciência da Computação](#cursos-de-ciência-da-computação)

---

## Por que usar?

Quando eu comecei esse projeto, eu não sabia diferenciar memória dinâmica de memória estática, não sabia notação Big-O, árvores, ou como percorrer um grafo. Se eu tivesse que escrever um algoritmo de ordenação, eu posso te dizer que ele não seria muito bom.
Todas as estruturas de dados que eu já usei eram construídas dentro da linguagem, e eu não sabia como elas funcionavam por debaixo dos panos. Eu nunca tive que gerenciar memória a não ser que um processo que eu estava rodando desse um erro de "memória insuficiente", nesse caso eu teria que dar um jeito. Eu já usei alguns arrays multidimensionais na minha vida e milhares de arrays associativos, mas eu nunca criei estruturas de dados do zero.

É um longo plano. Você vai levar meses. Se você já é familiarizado com muitas dessas coisas, você vai precisar de muito menos tempo. 

## Como usar

Tudo abaixo é um esboço, e você deve abordar os itens em ordem de cima para baixo.

Eu estou usando a sintaxe de markdown especial do Github, incluindo listas de tarefas para verificar o progresso.

**Crie um novo branch para você verificar itens assim, apenas coloque um x entre os colchetes: [x]**


    Bifurque (fork) um branch e siga os comandos abaixo

`git checkout -b progress`

`git remote add jwasham https://github.com/jwasham/coding-interview-university`

`git fetch --all`

    Marque todas as caixas com X depois que você completar suas alterações

`git add . `

`git commit -m "Marked x" `

`git rebase jwasham/master `

`git push --force `

[Mais sobre a sintaxe de markdown especial do Github](https://guides.github.com/features/mastering-markdown/#GitHub-flavored-markdown)

## Não ache que você não é inteligente o suficiente
- Engenheiros de software bem sucedidos são inteligentes, mas muitos são inseguros quanto à própria inteligência.
- [O mito do Programador Gênio](https://www.youtube.com/watch?v=0SARbwvhupQ)
- [É perigoso ir sozinho: Batalhando os monstros invisíveis na indústria de Tecnologia](https://www.youtube.com/watch?v=1i8ylq4j_EY)

## Sobre os recursos em vídeo

Alguns vídeos estão disponíveis somente ao ingressar em um curso no Coursera, EdX, ou Lynda.com. Esses são chamados de MOOCs (Curso Online Aberto e Massivo).
Às vezes as aulas não estão em sessão, nesse caso você terá que esperar alguns meses, portanto não terá acesso até lá. Os cursos da Lynda.com não são gratuitos.

    Eu agradeceria a ajuda de vocês em adicionar recursos públicos gratuitos que sempre estejam disponíveis, como vídeos do YouTube para acompanhar os vídeos de curso online.
    Eu gosto de usar palestras de universidades;


## Processo de Entrevista e Preparação Geral para a Entrevista

- [ ] [ABC: Always Be Coding](https://medium.com/always-be-coding/abc-always-be-coding-d5f8051afce2#.4heg8zvm4)
- [ ] [Whiteboarding](https://medium.com/@dpup/whiteboarding-4df873dbba2e#.hf6jn45g1) (Usando O Quadro Branco)
- [ ] [Effective Whiteboarding during Programming Interviews](http://www.coderust.com/blog/2014/04/10/effective-whiteboarding-during-programming-interviews/) (Usando o Quadro Branco Efetivamente durante Entrevistas de Programação)
- [ ] [Demystifying Tech Recruiting](https://www.youtube.com/watch?v=N233T0epWTs) (Desmistificando Recrutamento Técnico)
- [ ] Decifrando A Entrevista de Programação Série 1:
    - [ ] [Gayle L McDowell - Cracking The Coding Interview (video)](https://www.youtube.com/watch?v=rEJzOhC5ZtQ) (Gayle L McDowell - Decifrando A Entrevista de Programação - vídeo)
    - [ ] [Cracking the Coding Interview with Author Gayle Laakmann McDowell (video)](https://www.youtube.com/watch?v=aClxtDcdpsQ) (Decifrando a Entrevista de Programação com o Autor Gayle Laakmann McDowell - vídeo)
- [ ] Como Conseguir um Emprego em uma das 4 Gigantes:
    - [ ] [How to Get a Job at the Big 4 - Amazon, Facebook, Google & Microsoft (video)](https://www.youtube.com/watch?v=YJZCUhxNCv8) (Como Conseguir um Emprego em uma das 4 Gigantes - Amazon, Facebook, Google e Microsoft - vídeo)

- [ ] Cursos de Preparação:
    - [ ] [Software Engineer Interview Unleashed (paid course)](https://www.udemy.com/software-engineer-interview-unleashed) (Entrevista de Engenheiro de Software Unleashed - curso pago):
        - Aprenda com um ex-entrevistador da Google como se preparar para entrevistas de engenheiro de software.
    - [ ] [Python for Data Structures, Algorithms, and Interviews! (paid course)](https://www.udemy.com/python-for-data-structures-algorithms-and-interviews/): (Python para Estrutura de Dados, Algoritmos e Entrevistas! - curso pago) 
        - Um curso de preparação para entrevistas focado em Python, que cobre estrutura de dados, algoritmos, entrevistas simuladas e muito mais.

## Escolha Uma Linguagem para a Entrevista

Você pode escolher uma linguagem com a qual você esteja confortável para fazer a parte de programação (parte prática) da entrevista, mas para grandes empresas, essas são ótimas opções:

- C++
- Java
- Python

Você também poderia usar essas, mas dê uma lida por aí antes. Podem haver ressalvas:

- JavaScript
- Ruby

Você precisa estar confortável com a linguagem e ser bem informado.

Leia mais sobre as escolhas:
- http://www.byte-by-byte.com/choose-the-right-language-for-your-coding-interview/
- http://blog.codingforinterviews.com/best-programming-language-jobs/

[Veja recursos de linguagens aqui](programming-language-resources.md)

Você vai ver aprendizado de C, C++ e Python incluído abaixo, porque é o que estou aprendendo. Tem alguns livros envolvidos, veja no final.

## Lista de Livros

Essa é uma lista menor comparada à que eu usei. Está abreviada para economizar seu tempo.

### Preparação para a Entrevista

- [ ] [Programming Interviews Exposed: Secrets to Landing Your Next Job, 2nd Edition](http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html) (Entrevistas de Programação Expostas: Segredos para Conseguir Seu Próximo Emprego, 2ª Edição)
    - respostas em C++ e Java
    - esse é um bom aquecimento para o Cracking the Coding Interview (Decifrando a Entrevista de Programação)
    - não é muito difícil, a maioria dos problemas poderão ser mais fáceis que aqueles que você verá em uma entrevista (de acordo com o que li)
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/) (Decifrando a Entrevista de Programação).
    - respostas em Java

Se você tem muito tempo sobrando:

- [ ] [Elements of Programming Interviews (C++ version)](https://www.amazon.com/Elements-Programming-Interviews-Insiders-Guide/dp/1479274836) (Elementos de Entrevistas de Programação (Versão C++))
- [ ] Elementos de Entrevistas de Programação (Versão Java)
    - [livro](https://www.amazon.com/Elements-Programming-Interviews-Java-Insiders/dp/1517435803/)
    - [Projecto de Companheiro - Esboço de Método e Testes para Cada Problema no Livro](https://github.com/gardncl/elements-of-programming-interviews)

### Arquitetura de Computador

Se estiver com pouco tempo:

- [ ] [Write Great Code: Volume 1: Understanding the Machine](https://www.amazon.com/Write-Great-Code-Understanding-Machine/dp/1593270038) (Escreva um Excelente Código: Volume 1: Compreendendo a Máquina)
    - O livro foi publicado em 2004, e está meio desatualizado, mas é um recurso incrível para se compreender um computador resumidamente.
    - O autor inventou HLA (High-level Assembly ou, no português, Assembly de alto nível), então considere as menções e exemplos em HLA com cautela. Não é usado amplamente, mas contém exemplos decentes de como o assembly funciona.
    - Esses capítulos valem a pena serem lidos para lhe dar uma boa base:
        - Chapter 2 - Numeric Representation (Capítulo 2 - Representação Numérica)
        - Chapter 3 - Binary Arithmetic and Bit Operations (Capítulo 3 - Aritmética Binária e Operações Bit)
        - Chapter 4 - Floating-Point Representation (Representação em Ponto Flutuante)
        - Chapter 5 - Character Representation (Representação de Caractere)
        - Chapter 6 - Memory Organization and Access (Organização e Acesso de Memória)
        - Chapter 7 - Composite Data Types and Memory Objects (Tipos de Dados Compostos e Objetos de Memória)
        - Chapter 9 - CPU Architecture (Arquitetura de CPU)
        - Chapter 10 - Instruction Set Architecture (Arquitetura de Conjunto de Instruções)
        - Chapter 11 - Memory Architecture and Organization (Arquitetura e Organização de Memória) 

Se você tem mais tempo (eu quero esse livro):

- [ ] [Computer Architecture, Fifth Edition: A Quantitative Approach](https://www.amazon.com/dp/012383872X/) (Arquitetura de Computador, Quinta Edição: Uma Abordagem Quantitativa)
    - Se quiser uma versão mais rica e atualizada (2011), mas com um tratamento mais longo

### Específico de Linguagem

**Você precisa escolher uma linguagem para a entrevista (veja acima).** Aqui estão minhas recomendações por linguagem. Eu não tenho recursos para todas as linguagens. Contribuições são bem-vindas.

Se você ler um desses, você deverá ter todo conhecimento de estrutura de dados e algoritmos que precisará para começar a resolver problemas de programação. 
**Você pode pular todas as aulas em vídeo nesse projeto**, a não ser que você queira uma revisão.

[Recursos adicionais específicos a cada linguagem aqui.](programming-language-resources.md)

### C++

Eu não li esses dois, mas eles são muito bem avaliados e escritos por Sedgewick. Ele é incrível.

- [ ] [Algorithms in C++, Parts 1-4: Fundamentals, Data Structure, Sorting, Searching](https://www.amazon.com/Algorithms-Parts-1-4-Fundamentals-Structure/dp/0201350882/) (Algoritmos em C++, Partes 1-4: Fundamentos, Estrutura de Dados, Ordenação, Busca).
- [ ] [Algorithms in C++ Part 5: Graph Algorithms](https://www.amazon.com/Algorithms-Part-Graph-3rd-Pt-5/dp/0201361183/) (Algoritmos em C++ Parte 5: Algoritmos de Grafo)

Se você tiver uma recomendação melhor para C++, por favor me informe. Busco por recursos completos. 

### Java

- [ ] [Algorithms (Sedgewick and Wayne)](https://www.amazon.com/Algorithms-4th-Robert-Sedgewick/dp/032157351X/) (Algoritmos (Sedgewick e Wayne))
    - vídeos com conteúdo do livro (e Sedgewick!):
        - [Algorithms I](https://www.youtube.com/user/algorithmscourses/playlists?view=50&sort=dd&shelf_id=2) (Algoritmos I)
        - [Algorithms II](https://www.youtube.com/user/algorithmscourses/playlists?shelf_id=3&view=50&sort=dd) (Algoritmos II)

OU:

- [ ] [Data Structures and Algorithms in Java](https://www.amazon.com/Data-Structures-Algorithms-Michael-Goodrich/dp/1118771338/) (Estrutura de Dados e Algoritmos em Java)
    - por Goodrich, Tamassia, Goldwasser
    - usado como texo opcional para o curso introdutório de Ciência da Computação na Universidade da Califórnia em Berkeley
    - veja o meu resumo sobre a versão em Python abaixo. Esse livro abrange os mesmos tópicos.

### Python

- [ ] [Data Structures and Algorithms in Python](https://www.amazon.com/Structures-Algorithms-Python-Michael-Goodrich/dp/1118290275/) (Estrutura de Dados e Algoritmos em Python)
    - por Goodrich, Tamassia, Goldwasser
    - Eu adorei esse livro. Ele cobriu tudo e muito mais.
    - Código pythonico.
    - meu resumo brilhante do livro: https://startupnextdoor.com/book-report-data-structures-and-algorithms-in-python/


### Livros Opcionais

**Algumas pessoas recomendam esses, mas eu acho que está além do necessário, a não ser que você tenha muitos anos de experiência em engenharia de software e está esperando por uma entrevista muito mais difícil:**

- [ ] [Algorithm Design Manual](http://www.amazon.com/Algorithm-Design-Manual-Steven-Skiena/dp/1849967202) (Skiena) (Manual de Design de Algoritmo)
    - Como uma revisão e reconhecimento de problema
    - A parte de catálogos de algoritmos está muito além da margem de dificuldade que você terá em uma entrevista.
    - Esse livro tem 2 partes:
        - livro de aula sobre estrutura de dados e algoritmos
            - prós:
                - é uma boa revisão assim como qualquer texto de algoritmos seria
                - boas estórias da experiência dele resolvendo problemas na indústria e na universidade
                - exemplo de código em C
            - contras:
                - pode ser tão denso ou impenetrável quanto CLRS (Introdução a Algoritmos), e em alguns casos, CLRS pode ser uma alternativa melhor para alguns temas
                - capítulos 7, 8 e 9 podem ser sofridos para acompanhar, já que alguns itens não são bem explicados ou requerem mais cérebro do que eu tenho
                - não me entenda mal: Eu gosto de Skiena, do estilo de ensino dele, e maneirismos, mas pode não ser um material do tipo da universidade Stony Brook.
        - catálogo de algoritmos
            - essa é a verdadeira razão para você comprar esse livro.
            - prestes a chegar nessa parte. Vou atualizar aqui assim que eu terminar de ler essa parte.
    - Pode alugar no kindle
    - Half.com é um ótimo recurso para livros com bons preços.
    - Respostas:
        - [Solutions](http://www.algorithm.cs.sunysb.edu/algowiki/index.php/The_Algorithms_Design_Manual_(Second_Edition)) (Soluções)
        - [Solutions](http://blog.panictank.net/category/algorithmndesignmanualsolutions/page/2/) (Soluções)
    - [Errata](http://www3.cs.stonybrook.edu/~skiena/algorist/book/errata)

- [ ] [Introduction to Algorithms](https://www.amazon.com/Introduction-Algorithms-3rd-MIT-Press/dp/0262033844) (Introdução à Algoritmos)
    - **Importante:** Ler esse livro só terá um valor limitado. Esse livro é ótimo para revisão de algoritmos e estrutura de dados, mas não irá te ensinar a escrever um bom código. Você deve ser capaz de codificar uma solução decente eficientemente.
    - Half.com é um ótimo recurso para livros com bons preços.
    - também conhecido como CLR, às vezes CLRS, porque Stein estava atrasado para o negócio

- [ ] [Programming Pearls](http://www.amazon.com/Programming-Pearls-2nd-Jon-Bentley/dp/0201657880) (Pérolas de Programação)
    - Os primeiros capítulos apresentam soluções inteligentes para problemas de programação (alguns bem velhos usando suporte magnético)  
    mas isso é só uma introdução. Esse é um guia sobre design e arquitetura de programa, parecido com Code Complete, mas muito mais curto.

- ~~"Algorithms and Programming: Problems and Solutions" by Shen ("Algoritmos e Programação: Problemas e Soluções" por Shen)~~
    - Um bom livro, mas depois de trabalhar nos problemas em várias páginas eu fiquei frustrado com o Pascal, loops do...while, arrays de 1 índice (index), e resultados de satisfação pós-condição pouco claros.  
    - Prefiro gastar tempo em problemas de programação de outro livro ou problemas de programação online.


## Antes de começar

Essa lista cresceu por longos meses, e sim, ela meio que saiu do controle.

Aqui estão alguns erros que eu cometi para que você tenha uma experiência melhor.

### 1. Você não se lembrará de tudo

Assisti a horas de vídeos e fiz anotações e meses depois havia muito que eu não lembrava. Eu passei 3 dias revisando minhas anotaçes e fazendo flashcards para que eu pudesse relembrar.

Por favor, leia para que você não cometa os meus erros:

[Retaining Computer Science Knowledge](https://startupnextdoor.com/retaining-computer-science-knowledge/)

### 2. Use Flashcards

Para solucionar o problema, eu fiz um pequeno site de flashcards onde eu poderia adicionar dois tipos de flashcards: genérico e código.  
Cada cartão tem formatação diferente.

Eu fiz um website focado em mobile para que eu pudesse rever no meu celular, tablet, onde quer que eu esteja.

Faça o seu próprio, grátis:

- [Repositório de flashcards](https://github.com/jwasham/computer-science-flash-cards)
- [Minha base de dados de flashcards (antigo - 1200 cartões)](https://github.com/jwasham/computer-science-flash-cards/blob/master/cards-jwasham.db): 
- [Minha base de dados de flashcards (novo - 1800 cartões)](https://github.com/jwasham/computer-science-flash-cards/blob/master/cards-jwasham-extreme.db):

Tenha em mente que eu exagerei e tenho cartões abrangendo desde linguagem assembly e trivialidades de Python até aprendizado de máquina e estatísticas. É demais para o que é requerido. 

**Nota:** A primeira vez que você reconhece que sabe a resposta, não a marque como conhecida. Você tem que ver o mesmo cartão e respondê-lo várias vezes corretamente antes de realmente conhecê-lo. A repetição colocará esse conhecimento mais aprodundado em seu cérebro.

Uma alternativa ao uso do meu site de flashcards é [Anki](http://ankisrs.net/), que me foi recomendado várias vezes. Ele usa um sistema de repetição para ajuda-lo a se lembrar.
É fácil de usar, está disponível em todas as plataformas e possui um sistema de sincronização em nuvem. Ele custa 25 dólares no iOS, mas é gratuito em outras plataformas.

Meu banco de dados de flashcards em formato Anki: https://ankiweb.net/shared/info/25173560 (obrigado [@xiewenya](https://github.com/xiewenya))

### 3. Revise, Revise e Revise

Eu mantenho um conjunto de anotações em ASCII, OSI stack, Notações Big-O, e muito mais. Eu os estudo quando tenho algum tempo livre.

Faça uma pausa durante os problemas de programação por meia hora e passe por seus flashcards.

### 4. Foco

Há um monte de distrações que podem ocupar um tempo valioso. Foco e concentração são difíceis.

## O que você não verá 

Essas são tecnologias predominantes, mas não são partes desse plano de estudo:

- SQL
- Javascript
- HTML, CSS, e outras tecnologias de front-end

## O Plano Diário

Alguns temas levam um dia, e alguns vão levar vários dias. Alguns são apenas aprendizado sem nada para implementar.

A cada dia eu pego um tema da lista abaixo, assisto vídeos sobre aquele tema, e escrevo uma implementação em:
- C - usando structs e funções que usam struct * e alguma outra coisa como argumentos.
- C++ - sem usar types internos.
- C++ - usando types internos, como std::list da STL para uma lista ligada
- Python - usando types internos (para continuar praticando Python)
- e escrevo testes para garantir que estou fazendo certo, às vezes uso apenas declarações simples de asser()
- Você pode fazer com Java também ou alguma outra linguagem, eu apenas prefiro essas cima.

Você não precisa de todas essas linguagens. Você precisa de apenas [uma linguagem para a entrevista](#escolha-uma-linguagem-para-a-entrevista).

Por que programar em todas essas linguagens?
- Prática, prática, prática, até eu enjoar e poder implementar sem problemas (algumas tem muitos casos com valores de entrada extremos, ou seja, muito pequenos ou muito grandes, e também têm muitos detalhes de escrituração para lembrar)
- Trabalhar dentro das restrições básicas (alocar/liberar memória sem ajuda de um coletor de lixo (com exceção de Python))
- Fazer uso de types internos para que eu possa ter experiência em usar ferramentas internas para problemas do mundo real (não vou escrever minha própria implementação de lista ligada durante a etapa de produção)

Talvez eu não tenha tempo para fazer tudo isso para cada tema, mas eu vou tentar.

Você pode ver meu código aqui:
 - [C] (https://github.com/jwasham/practice-c)
 - [C++] (https://github.com/jwasham/practice-cpp)
 - [Python] (https://github.com/jwasham/practice-python)

Você não precisa memorizar os detalhes intrínsecos de cada algoritmo.

Escreva código em um quadro branco ou papel, não em um computador. Teste com umas amostras de valores de entrada (input). Depois teste em um computador.

## Conhecimento Prévio

- [ ] **Aprenda C**
    - C está em todo lugar. Você vai ver exemplos em livros, aulas, vídeos, em todo lugar enquanto você estiver estudando.
    - [ ] [C Programming Language, Vol 2](https://www.amazon.com/Programming-Language-Brian-W-Kernighan/dp/0131103628) (Linguagem de Programação C, Vol 2)
        - Esse é um livro curto, mas vai te ajudar a ter um ótimo domínio da linguagem C e se você praticar um pouco 
            você irá se tornar proficiente rapidamente. Entender C te ajuda a entender como os programas e a memória funcionam.
        - [answers to questions](https://github.com/lekkas/c-algorithms) (respostas para as questões) 

- [ ] **Como computadores processam um programa:**
    - [ ] [How does CPU execute program (video)](https://www.youtube.com/watch?v=42KTvGYQYnA) (Como uma CPU executa um programa - vídeo)
    - [ ] [Machine Code Instructions (video)](https://www.youtube.com/watch?v=Mv2XQgpbTNE) (Instruções de Código de Máquina - vídeo)

## Complexidade Algorítmica / Big-O / Análise assintótica
- nada para implementar
- [ ] [Harvard CS50 - Asymptotic Notation (video)](https://www.youtube.com/watch?v=iOq5kSKqeR4) (Harvard CS50 - Notação Assintótica - vídeo)
- [ ] [Big O Notations (general quick tutorial) (video)](https://www.youtube.com/watch?v=V6mKVRU1evU) (Notações Big-O (rápido tutorial geral) - vídeo)
- [ ] [Big O Notation (and Omega and Theta) - best mathematical explanation (video)](https://www.youtube.com/watch?v=ei-A_wy5Yxw&index=2&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN) (Notação Big-O (e Omega e Theta) - melhor explicação matemática - vídeo)
- [ ] Skiena:
    - [video](https://www.youtube.com/watch?v=gSyDMtdPNpU&index=2&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [slides](http://www3.cs.stonybrook.edu/~algorith/video-lectures/2007/lecture2.pdf)
- [ ] [A Gentle Introduction to Algorithm Complexity Analysis](http://discrete.gr/complexity/) (Uma Introdução Gentil a Análise de Complexidade Algoritmica)
- [ ] [Orders of Growth (video)](https://class.coursera.org/algorithmicthink1-004/lecture/59) (Ordens de Crescimento - vídeo)
- [ ] [Asymptotics (video)](https://class.coursera.org/algorithmicthink1-004/lecture/61) (Assintóticas - vídeo)
- [ ] [UC Berkeley Big O (video)](https://youtu.be/VIS4YDpuP98) (Big-O - Universidade da Califórnia em Berkeley - vídeo)
- [ ] [UC Berkeley Big Omega (video)](https://youtu.be/ca3e7UVmeUc) (Grande Omega - Universidade da Califórnia em Berkeley - vídeo)
- [ ] [Amortized Analysis (video)](https://www.youtube.com/watch?v=B3SpQZaAZP4&index=10&list=PL1BaGV1cIH4UhkL8a9bJGG356covJ76qN) (Análise Amortizada - vídeo)
- [ ] [Illustrating "Big O" (video)](https://class.coursera.org/algorithmicthink1-004/lecture/63) (Ilustrando "Big-O" - vídeo)
- [ ] TopCoder (inclui relações de recorrência e teorema mestre):
    - [Computational Complexity: Section 1](https://www.topcoder.com/community/data-science/data-science-tutorials/computational-complexity-section-1/) (Complexidade Computacional: Seção 1)
    - [Computational Complexity: Section 2](https://www.topcoder.com/community/data-science/data-science-tutorials/computational-complexity-section-2/) (Complexidade Computacional: Seção 2)
- [ ] [Cheat sheet](http://bigocheatsheet.com/) (Folha de Consultas)


    Se alguma das aulas forem muito "matemáticas", você pode pular para o final e 
    ver o vídeo de matemática discreta para ganhar um conhecimento base.

## Estrutura de Dados

- ### Arrays
    - Implementar um vetor de redimensionamento automático.
    - [ ] Descrição:
        - [Arrays (video)](https://www.coursera.org/learn/data-structures/lecture/OsBSF/arrays)
        - [UCBerkley CS61B - Linear and Multi-Dim Arrays (video)](https://youtu.be/Wp8oiO_CZZE?t=15m32s) (Arrays lineares e multidimensionais - vídeo)
        - [Basic Arrays (video)](https://archive.org/details/0102WhatYouShouldKnow/02_04-basicArrays.mp4) (Arrays básicos - vídeo)
        - [Multi-dim (video)](https://archive.org/details/0102WhatYouShouldKnow/02_05-multidimensionalArrays.mp4) (Multidimensionais - vídeo)
        - [Dynamic Arrays (video)](https://www.coursera.org/learn/data-structures/lecture/EwbnV/dynamic-arrays) (Arrays Dinâmicos - vídeo)
        - [Jagged Arrays (video)](https://www.youtube.com/watch?v=1jtrQqYpt7g) (Arrays Multidimensionais - vídeo)
        - [Jagged Arrays (video)](https://archive.org/details/0102WhatYouShouldKnow/02_06-jaggedArrays.mp4) (Arrays Multidimensionais - vídeo)
        - [Resizing arrays (video)](https://archive.org/details/0102WhatYouShouldKnow/03_01-resizableArrays.mp4) (Arrays Dinâmicos)
    - [ ] Implementar um vetor (array mutável com redimensionamento automático):
        - [ ] Praticar programação usando arrays e ponteiros, e matemática de ponteiros para pular para um índice ao invés de usar indexação.
        - [ ] novo array de dados brutos com memória alocada
            - pode alocar array de números inteiros por de baixo dos panos, só não pode usar seus recursos
            - começa com 16, ou se o número inicial for maior, usar potência de 2 - 16, 32, 64, 128
        - [ ] size() - número de itens
        - [ ] capacity() - número de itens que pode conter
        - [ ] is_empty()
        - [ ] at(index) - retorna o item que está no índice fornecido, dá erro se o índice estiver fora da capacidade do array
        - [ ] push(item)
        - [ ] insert(índice, item) - insere "item" no "índice", muda o valor daquele índice e move os elementos excedentes para a direita
        - [ ] prepend(item) - pode usar o insert acima no índice 0
        - [ ] pop() - remove do final, retorna o valor
        - [ ] delete(índice) - deleta o item no índice fornecido, deslocando todos os elementos excedentes para a esquerda
        - [ ] remove(item) - busca pelo valor e remove o índice contendo ele (mesmo que esteja em múltiplos lugares)
        - [ ] find(item) - busca pelo valor e retorna o primeiro índice com aquele valor, -1 se não encontrar
        - [ ] resize(nova_capacidade) // função privada
            - quando você atinge o limite da capacidade, redimensone para dobrar a capacidade
            - quando estiver usando pop() em um item, se o tamanho for 1/4 da capacidade, redimensionar para a metade da capacidade
    - [ ] Tempo
        - O(1) para adicionar/remover no final (amortizado para alocações para mais espaço), índice ou atualização
        - O(n) para inserir/remover em algum outro lugar
    - [ ] Espaço
        - contíguo na memória, então proximidade ajuda no desempenho
        - espaço necessário = (capacidade do array, a qual é >= n) * tamanho do item, mas mesmo que seja 2n, ainda será O(n)

- ### Listas Ligadas
    - [ ] Descrição:
        - [ ] [Singly Linked Lists (video)](https://www.coursera.org/learn/data-structures/lecture/kHhgK/singly-linked-lists) (listas ligadas individualmente - vídeo)
        - [ ] [CS 61B - Linked Lists 1 (video)](https://www.youtube.com/watch?v=htzJdKoEmO0&list=PL4BBB74C7D2A1049C&index=7) (CS 61B - Listas Ligadas 1 - vídeo)
        - [ ] [CS 61B - Linked Lists 2 (video)](https://www.youtube.com/watch?v=-c4I3gFYe3w&index=8&list=PL4BBB74C7D2A1049C) (CS 61B - Listas Ligadas 2 - vídeo)
    - [ ] [C Code (video)](https://www.youtube.com/watch?v=QN6FPiD0Gzo) (Código em C - vídeo)
            - não o vídeo inteiro, apenas as partes sobre estrutura de nodes (nós) e alocação de memória.
    - [ ] Listas Ligadas vs Arrays:
        - [Core Linked Lists Vs Arrays (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/rjBs9/core-linked-lists-vs-arrays) (Fundamentos de Listas Ligadas vs Arrays - vídeo)
        - [In The Real World Linked Lists Vs Arrays (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/QUaUd/in-the-real-world-lists-vs-arrays) (No Mundo Real: Listas Ligadas vs Arrays - vídeo)
    - [ ] [why you should avoid linked lists (video)](https://www.youtube.com/watch?v=YQs6IC-vgmo) (por que você deve evitar listas ligadas - vídeo)
    - [ ] Peguei vocês: você precisa de conhecimento de ponteiro para ponteiro:
        (para quando você passar um ponteiro para uma funcção que poderá mudar o endereço para o qual o ponteiro aponta)
        Essa página é só para ter uma noção sobre ponteiro para ponteiro. Eu não recomendo o estilo transversal dessa lista. Legibilidade e manutenção sofrem devido à engenhosidade.
        - [Pointers to Pointers](https://www.eskimo.com/~scs/cclass/int/sx8.html) (Ponteiros para Ponteiros)
    - [ ] implementar (eu fiz com e sem ponteiro de cauda, ponteiro que aponta para o último node (nó) da lista):
        - [ ] size() - retorna o número de elementos de dados na lista
        - [ ] empty() - boleano retorna verdadeiro se estiver vazio
        - [ ] value_at(índice) - retorna o valor do item n (começando no 0 para o primeiro)
        - [ ] push_front(valor) - adiciona um item no início da lista, logo antes do seu atual primeiro elemento
        - [ ] pop_front() - remove o item do início da lista e retorna o seu valor
        - [ ] push_back(valor) - adiciona um item no final da lista
        - [ ] pop_back() - remove um item do final e retorna seu valor
        - [ ] front() - obtém valor do item que está no início da lista
        - [ ] back() - obtém valor do item que está no final da lista
        - [ ] insert(índice, valor) - insere "valor" no "índice", e depois o item atual naquele índice é apontado pelo novo item no "índice"
        - [ ] erase(índice) - remove o node (nó) no índice fornecido
        - [ ] value_n_from_end(n) - retorna o valor do node (nó) na posição n a partir do final da lista
        - [ ] reverse() - reverte a lista
        - [ ] remove_value(valor) - remove o primeiro item na lista com esse valor
    - [ ] Listas Ligadas Duplamente
        - [Description (video)](https://www.coursera.org/learn/data-structures/lecture/jpGKD/doubly-linked-lists) (Descrição - vídeo)
        - Não há necessidade de implementar

- ### Stack
    - [ ] [Stacks (video)](https://www.coursera.org/learn/data-structures/lecture/UdKzQ/stacks)
    - [ ] [Using Stacks Last-In First-Out (video)](https://archive.org/details/0102WhatYouShouldKnow/05_01-usingStacksForLast-inFirst-out.mp4) (Usando Stacks Último a Entrar Primeiro a Sair - vídeo)
    - [ ] Não implementarei. Implementar com array é trivial.

- ### Queue (Fila)
    - [ ] [Using Queues First-In First-Out(video)](https://archive.org/details/0102WhatYouShouldKnow/05_03-usingQueuesForFirst-inFirst-out.mp4) (Usando queues FIFO(Primeiro a entrar, último a sair) - vídeo)
    - [ ] [Queue (video)](https://www.coursera.org/learn/data-structures/lecture/EShpq/queue)
    - [ ] [Circular buffer/FIFO](https://en.wikipedia.org/wiki/Circular_buffer) (Buffer circular/Primeiro a entrar, último a sair)
    - [ ] [Priority Queues (video)](https://archive.org/details/0102WhatYouShouldKnow/05_04-priorityQueuesAndDeques.mp4) (Queues com Prioridade - vídeo)
    - [ ] Implementar usando lista ligada, com ponteiro de cauda (aponta para o último elemento de uma lista):
        - enqueue(valor) - adiciona "valor" na posição na cauda (final da lista)
        - dequeue() - retorna um valor e remove o elemento menos recentemente adicionado (início da lista))
        - empty()
    - [ ] Implementar usando arrays de tamanho-fixo:
        - enqueue(valor) - adiciona um item no final do armazenamento disponível
        - dequeue() - retorna um valor e remove um elemento menos recentemente adicionado 
        - empty()
        - full()
    - [ ] Custo:
        - uma implementação ruim usando lista ligada na qual você coloca na fila (enqueue) no head (cabeça/início da lista) e tira da fila (dequeue) no tail (cauda/final da lista) seria O(n)
            porque você precisaria do penúltimo elemento, causando uma transversal completa a cada dequeue 
        - enqueue: O(1) (amortizado, lista ligada e array [sondagem])
        - dequeue: O(1) (lista ligada e array)
        - empty (vazio): O(1) (lista ligada e array)

- ### Tabela hash
    - [ ] vídeos:
        - [ ] [Hashing with Chaining (video)](https://www.youtube.com/watch?v=0M_kIqhwbFo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=8) (Hashing com Encadeamento - vídeo)
        - [ ] [Table Doubling, Karp-Rabin (video)](https://www.youtube.com/watch?v=BRO7mVIFt08&index=9&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb) (Duplicação de Tabela, Karp-Rabin - vídeo)
        - [ ] [Open Addressing, Cryptographic Hashing (video)](https://www.youtube.com/watch?v=rvdJDijO2Ro&index=10&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb) (Endereçamento Aberto, Hashing Criptográfico - vídeo)
        - [ ] [PyCon 2010: The Mighty Dictionary (video)](https://www.youtube.com/watch?v=C4Kc8xzcA68) (PyCon 2010: O Poderoso Dicionário (vídeo)
        - [ ] [(Advanced) Randomization: Universal & Perfect Hashing (video)](https://www.youtube.com/watch?v=z0lJ2k0sl1g&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=11) ((Avançado) Randomização: Hashing Perfeito & Universal - vídeo)
        - [ ] [(Advanced) Perfect hashing (video)](https://www.youtube.com/watch?v=N0COwN14gt0&list=PL2B4EEwhKD-NbwZ4ezj7gyc_3yNrojKM9&index=4) ((Avançado) Hashing perfeito - vídeo)

    - [ ] Cursos Online:
        - [ ] [Understanding Hash Functions (video)](https://archive.org/details/0102WhatYouShouldKnow/06_02-understandingHashFunctions.mp4) (Compreendendo Funções Hash - vídeo)
        - [ ] [Using Hash Tables (video)](https://archive.org/details/0102WhatYouShouldKnow/06_03-usingHashTables.mp4) (Usando Tabelas Hash - vídeo)
        - [ ] [Supporting Hashing (video)](https://archive.org/details/0102WhatYouShouldKnow/06_04-supportingHashing.mp4) (Hashing de Suporte - vídeo)
        - [ ] [Language Support Hash Tables (video)](https://archive.org/details/0102WhatYouShouldKnow/06_05-languageSupportForHashTables.mp4) (Tabelas Hash de Suporte de Linguagem - vídeo)
        - [ ] [Core Hash Tables (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/m7UuP/core-hash-tables) (Fundamentos de Tabelas Hash - vídeo)
        - [ ] [Data Structures (video)](https://www.coursera.org/learn/data-structures/home/week/3) (Estruturas de Dados - vídeo)
        - [ ] [Phone Book Problem (video)](https://www.coursera.org/learn/data-structures/lecture/NYZZP/phone-book-problem) (Problema da Lista Telefônica (vídeo) )
        - [ ] tabelas hash distribuídas:
            - [Instant Uploads And Storage Optimization In Dropbox (video)](https://www.coursera.org/learn/data-structures/lecture/DvaIb/instant-uploads-and-storage-optimization-in-dropbox) (Uploads Instantâneos E Otimização de Armazenamento no Dropbox - vídeo)
            - [Distributed Hash Tables (video)](https://www.coursera.org/learn/data-structures/lecture/tvH8H/distributed-hash-tables) (Tabelas Hash Distribuídas - vídeo)

    - [ ] implementar com array usando sondagem linear
        - hash(k, m) - m é o tamanho da tabela hash
        - add(chave, valor) - se a chave já existe, atualizar o valor
        - exists(chave)
        - get(chave)
        - remove(chave)

## Mais Conhecimento

- ### Busca binária
    - [ ] [Binary Search (video)](https://www.youtube.com/watch?v=D5SrAga1pno) (Busca Binária - vídeo)
    - [ ] [Binary Search (video)](https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search) (Busca Binária - vídeo)
    - [ ] [detail](https://www.topcoder.com/community/data-science/data-science-tutorials/binary-search/) (detalhes)
    - [ ] Implementar:
        - busca binária (em um array ordenado de números inteiros)
        - busca binária usando recursividade

- ### Lógica binária 
    - [ ] [Bits cheat sheet](https://github.com/jwasham/coding-interview-university/blob/master/extras/cheat%20sheets/bits-cheat-sheet.pdf) (Folha de consultas sobre Bits) - você deve conhecer várias das potências de 2 de (2^1 até 2^16 e 2^32)
    - [ ] Consiga um bom entendimento sobre manipulação de bits com: &, |, ^, ~, >>, <<
        - [ ] [words](https://en.wikipedia.org/wiki/Word_(computer_architecture)) (palavras)
        - [ ] Boa introdução:
            [Bit Manipulation (video)](https://www.youtube.com/watch?v=7jkIUgLC29I) (Manipulação de Bit - vídeo)
        - [ ] [C Programming Tutorial 2-10: Bitwise Operators (video)](https://www.youtube.com/watch?v=d0AwjSpNXR0) (Tutorial de Programação em C 2-10: Operadores Binários - vídeo)
        - [ ] [Bit Manipulation](https://en.wikipedia.org/wiki/Bit_manipulation) (Manipulação de Bit)
        - [ ] [Bitwise Operation](https://en.wikipedia.org/wiki/Bitwise_operation) (Lógica Binária)
        - [ ] [Bithacks](https://graphics.stanford.edu/~seander/bithacks.html) (Snippets/Fragmentos de código, um tipo de cheatsheet (folha de consultas))
        - [ ] [The Bit Twiddler](http://bits.stephan-brumme.com/)
        - [ ] [The Bit Twiddler Interactive](http://bits.stephan-brumme.com/interactive.html) (Interativo)
    - [ ] Complemento de 2 e 1
        - [Binary: Plusses & Minuses (Why We Use Two's Complement) (video)](https://www.youtube.com/watch?v=lKTsv6iVxV4) (Binário: Vantagens & Desvantagens (Por Que Usamos Complemento de 2) - vídeo)
        - [1s Complement](https://en.wikipedia.org/wiki/Ones%27_complement) (Complemento de 1)
        - [2s Complement](https://en.wikipedia.org/wiki/Two%27s_complement) (Complemento de 2)
    - [ ] contagem de bits fixos
        - [4 ways to count bits in a byte (video)](https://youtu.be/Hzuzo9NJrlc) (4 maneiras de contar bits em um byte - vídeo)
        - [Count Bits](https://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetKernighan) (Contagem de Bits)
        - [How To Count The Number Of Set Bits In a 32 Bit Integer](http://stackoverflow.com/questions/109023/how-to-count-the-number-of-set-bits-in-a-32-bit-integer) (Como Contar O Número De Bits Fixos Em um Número inteiro de 32 bits)
    - [ ] arredondar para a próxima potência de 2:
        - [Round Up To Next Power Of Two](http://bits.stephan-brumme.com/roundUpToNextPowerOfTwo.html) (Arredondar Para Cima Para A Próxima Potência De Dois)
    - [ ] trocar valores:
        - [Swap](http://bits.stephan-brumme.com/swap.html) (Trocar)
    - [ ] valor absoluto:
        - [Absolute Integer](http://bits.stephan-brumme.com/absInteger.html) (Número Inteiro Absoluto)

## Árvores

- ### Árvores - Anotações e Fundamentos
    - [ ] [Series: Core Trees (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/ovovP/core-trees) (Série: Fundamentos de Árvores - vídeo)
    - [ ] [Series: Trees (video)](https://www.coursera.org/learn/data-structures/lecture/95qda/trees) (Série: Árvores - vídeo)
    - contrução básica de árvore
    - transversal
    - algorítmos de manipulação
    - Busca em largura (conhecido no Inglês como BFS ou breadth-first search)
        - [MIT (vídeo)](https://www.youtube.com/watch?v=s-CYnVz-uh4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=13)
        - ordem de nível (busca em largura, usando filas)
            complexidade de tempo: O(n)
            complexidade de espaço: melhor: O(1), pior: O(n/2)=O(n)
    - Busca em profundidade (conhecido no Inglês como DFS ou depth-first search)
        - [MIT (vídeo)](https://www.youtube.com/watch?v=AfSk24UTFS8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=14)
        - anotações:
            complexidade de tempo: O(n)
            space complexity:
                melhor: O(log n) - altura média da árvore
                pior: O(n)
        - em-ordem ou ordem simétrica(na busca em profundidade (ou DFS): percorre subárvore esquerda em ordem simétrica (em-ordem), visita a raiz, percorre subárvore direita em ordem simétrica)
        - pós-ordem (na busca em profundidade (ou DFS): percorre subárvore esquerda em pós-ordem, percorre subárvore direita em pós-ordem, visita a raiz)
        - pré-ordem (na busca em profundidade (ou DFS): visita a raiz, percorre subárvore esquerda em pré-ordem, percorre subárvore direita em pré-ordem)

- ### Árvores binárias de busca: ABB
    - [ ] [Binary Search Tree Review (video)](https://www.youtube.com/watch?v=x6At0nzX92o&index=1&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6) (Revisão de Árvores Binárias de Busca - vídeo)
    - [ ] [Série (vídeo)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/p82sw/core-introduction-to-binary-search-trees)
        - começa com tabela de símbolos e passa por aplicações de ABB
    - [ ] [Introduction (video)](https://www.coursera.org/learn/data-structures/lecture/E7cXP/introduction) (Introdução - vídeo)
    - [ ] [MIT (vídeo)](https://www.youtube.com/watch?v=9Jry5-82I68)
    - C/C++:
        - [ ] [Binary search tree - Implementation in C/C++ (video)](https://www.youtube.com/watch?v=COZK7NATh4k&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=28) (Árvore binária de busca - Implementação em C/C++ - vídeo)
        - [ ] [BST implementation - memory allocation in stack and heap (video)](https://www.youtube.com/watch?v=hWokyBoo0aI&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=29) (Implementação de ABB - alocação de memória estática (stack) e dinâmica (heap) - vídeo)
        - [ ] [Find min and max element in a binary search tree (video)](https://www.youtube.com/watch?v=Ut90klNN264&index=30&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P) (Encontrar elementos min e max em uma árvore binária de busca - vídeo)
        - [ ] [Find height of a binary tree (video)](https://www.youtube.com/watch?v=_pnqMz5nrRs&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=31) (Encontrar altura de uma árvore binária - vídeo)
        - [ ] [Binary tree traversal - breadth-first and depth-first strategies (video)](https://www.youtube.com/watch?v=9RHO6jU--GU&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=32) (Percurso de uma árvore binária - estratégias de busca em largura e busca em profundidade - vídeo)
        - [ ] [Binary tree: Level Order Traversal (video)](https://www.youtube.com/watch?v=86g8jAQug04&index=33&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P) (Árvore binária: Percurso de Ordens de Níveis - vídeo)
        - [ ] [Binary tree traversal: Preorder, Inorder, Postorder (video)](https://www.youtube.com/watch?v=gm8DUJJhmY4&index=34&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P) (Percurso de árvore binária: Pré-ordem, Em-ordem (ordem simétrica), Pós-ordem - vídeo)
        - [ ] [Check if a binary tree is binary search tree or not (video)](https://www.youtube.com/watch?v=yEwSGhSsT0U&index=35&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P) (Verificar se uma árvore binária é uma árvore binária de busca ou não - vídeo)
        - [ ] [Delete a node from Binary Search Tree (video)](https://www.youtube.com/watch?v=gcULXE7ViZw&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=36) (Deletar um nó de uma Árvore Binária de Busca - vídeo)
        - [ ] [Inorder Successor in a binary search tree (video)](https://www.youtube.com/watch?v=5cPbNCrdotA&index=37&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P) (Sucessor Em-ordem em uma árvore binária de busca - vídeo)
    - [ ] Implementar:
        - [ ] insert    // insere um valor na árvore
        - [ ] get_node_count // obtém contagem de valores armazenados
        - [ ] print_values // exibe os valores na árvore, do min até o max
        - [ ] delete_tree
        - [ ] is_in_tree // retorna "true" se tal valor existir na árvore
        - [ ] get_height // retorna a altura nos nós (altura de nó único é 1)
        - [ ] get_min   // retorna o valor mínimo armazenado na árvore
        - [ ] get_max   // retorna o valor máximo armazenado na árvore
        - [ ] is_binary_search_tree
        - [ ] delete_value
        - [ ] get_successor // retorna o próximo maior valor na árvore após dado valor, -1 se não houver nenhum

- ### Memória Dinâmica (heap) / Filas Prioritárias / Memória Dinâmica Binária (heap binary)
    - visualizada como uma árvore, mas geralmente é linear no armazenamento (array, lista ligada)
    - [ ] [Heap](https://en.wikipedia.org/wiki/Heap_(data_structure)) (Memória DInâmica)
    - [ ] [Introduction (video)](https://www.coursera.org/learn/data-structures/lecture/2OpTs/introduction) (Introdução - vídeo)
    - [ ] [Naive Implementations (video)](https://www.coursera.org/learn/data-structures/lecture/z3l9N/naive-implementations) (Implementações Ingênuas - vídeo)
    - [ ] [Binary Trees (video)](https://www.coursera.org/learn/data-structures/lecture/GRV2q/binary-trees) (Árvores Binárias - vídeo)
    - [ ] [Tree Height Remark (video)](https://www.coursera.org/learn/data-structures/supplement/S5xxz/tree-height-remark) (Observações sobre Altura de Árvore - vídeo)
    - [ ] [Basic Operations (video)](https://www.coursera.org/learn/data-structures/lecture/0g1dl/basic-operations) (Operações Básicas - vídeo)
    - [ ] [Complete Binary Trees (video)](https://www.coursera.org/learn/data-structures/lecture/gl5Ni/complete-binary-trees) (Árvores Binárias Completas - vídeo)
    - [ ] [Pseudocode (video)](https://www.coursera.org/learn/data-structures/lecture/HxQo9/pseudocode) (Pseudocódigo - vídeo)
    - [ ] [Heap Sort - jumps to start (video)](https://youtu.be/odNJmw5TOEE?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3291) (Algoritmo de Ordenação heapsort - pula para o começo - vídeo)
    - [ ] [Heap Sort (video)](https://www.coursera.org/learn/data-structures/lecture/hSzMO/heap-sort) (Algoritmo de Ordenação heapsort - vídeo)
    - [ ] [Building a heap (video)](https://www.coursera.org/learn/data-structures/lecture/dwrOS/building-a-heap) (Construindo uma memória dinâmica (heap) - vídeo)
    - [ ] [MIT: Heaps and Heap Sort (video)](https://www.youtube.com/watch?v=B7hVxCmfPtM&index=4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb) (MIT: Memórias Dinâmias e heapsort - vídeo)
    - [ ] [CS 61B Lecture 24: Priority Queues (video)](https://www.youtube.com/watch?v=yIUFT6AKBGE&index=24&list=PL4BBB74C7D2A1049C) (CS (Ciência da Computação) 61B Aula 24: Filas Prioritárias - vídeo)
    - [ ] [Linear Time BuildHeap (max-heap)](https://www.youtube.com/watch?v=MiyLo8adrWw) (BuildHeap em Tempo Linear (heap máxima))
    - [ ] Implementar uma heap máxima (max-heap):
        - [ ] insert
        - [ ] sift_up - necessário insert
        - [ ] get_max - retorna o item max (maior item), sem removê-lo
        - [ ] get_size() - retorna o número de elementos armazenados
        - [ ] is_empty() - retorna "true" se o heap não contém elementos
        - [ ] extract_max - retorna o item max (maior item), removendo ele
        - [ ] sift_down - necessário para extract_max
        - [ ] remove(i) - remove o item no índice x
        - [ ] heapify - cria um heap a partir de um array de elementos, necessário para heap_sort
        - [ ] heap_sort() - pega um array não-ordenado e o transforma em um array ordenado "in-place" (sem gerar um novo array) usando uma heap máxima (max-heap)
            - nota: usando uma heap mínima (min-heap) ao invés de uma heap máxima (max-heap) poderia salvar operações, mas duplicar o espaço necessário (não é possível fazer "in-place")

## Ordenação

- [ ] Anotações:
    - Implementar ordenações e saber melhor/pior cenário, complexidade média de cada um:
        - sem ordenação por bolha - é terrível - O(n^2), exceto quando n <= 16
    - [ ] estabilidade em algoritmos de ordenação ("O algoritmo de ordenação quicksort é estável?")
        - [Sorting Algorithm Stability](https://en.wikipedia.org/wiki/Sorting_algorithm#Stability) (Artigo da Wikipédia em Inglês sobre Estabilidade de Algoritmo de Ordenação, infelizmente a versão em Português não é tão informativa)
        - [Stability In Sorting Algorithms](http://stackoverflow.com/questions/1517793/stability-in-sorting-algorithms) (Estabilidade em Algoritmos de Ordenação)
        - [Stability In Sorting Algorithms](http://www.geeksforgeeks.org/stability-in-sorting-algorithms/) (Estabilidade em Algoritmos de Ordenação)
        - [Sorting Algorithms - Stability](http://homepages.math.uic.edu/~leon/cs-mcs401-s08/handouts/stability.pdf) (Algoritmos de Ordenação - Estabilidade)
    - [ ] Quais algoritmos podem ser usados em listas ligadas? Quais em arrays? Quais em ambos?
        - Eu não recomendaria ordenar uma lista ligada, mas ordenação por mistura (merge sort) é possível de se fazer.
        - [Merge Sort For Linked List](http://www.geeksforgeeks.org/merge-sort-for-linked-list/) (Merge Sort Para Listas Ligadas)

- Para heapsort, veja estrutura de dados heap acima. Heapsort é ótimo, mas não é estável.

- [ ] [Sedgewick - Mergesort (5 vídeos)](https://www.youtube.com/watch?v=4nKwesx_c8E&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9)
    - [ ] [1. Mergesort](https://www.youtube.com/watch?v=4nKwesx_c8E&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9&index=1)
    - [ ] [2. Bottom up Mergesort](https://www.youtube.com/watch?v=HGOIGUYjeyk&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9&index=2) (Mergesort de baixo para cima)
    - [ ] [3. Sorting Complexity](https://www.youtube.com/watch?v=WvU_mIWo0Ac&index=3&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9) (Complexidade de Ordenação)
    - [ ] [4. Comparators](https://www.youtube.com/watch?v=7MvC1kmBza0&index=4&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9) (Comparadores)
    - [ ] [5. Stability](https://www.youtube.com/watch?v=XD_5iINB5GI&index=5&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9) (Estabilidade)

- [ ] [Sedgewick - Quicksort (4 vídeos)](https://www.youtube.com/playlist?list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1)
    - [ ] [1. Quicksort](https://www.youtube.com/watch?v=5M5A7qPWk84&index=1&list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1)
    - [ ] [2. Selection](https://www.youtube.com/watch?v=CgVYfSyct_M&index=2&list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1) (Seleção)
    - [ ] [3. Duplicate Keys](https://www.youtube.com/watch?v=WBFzOYJ5ybM&index=3&list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1) (Chaves Duplicadas)
    - [ ] [4. System Sorts](https://www.youtube.com/watch?v=rejpZ2htBjE&index=4&list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1) (Ordenações de Sistema)

- [ ] Universidade da Califórnia em Berkeley:
    - [ ] [CS 61B Lecture 29: Sorting I (video)](https://www.youtube.com/watch?v=EiUvYS2DT6I&list=PL4BBB74C7D2A1049C&index=29) (Ciência da Computação 61B Aula 29: Ordenação I - vídeo)
    - [ ] [CS 61B Lecture 30: Sorting II (video)](https://www.youtube.com/watch?v=2hTY3t80Qsk&list=PL4BBB74C7D2A1049C&index=30) (Ciência da Computação 61B Aula 30: Ordenação II - vídeo)
    - [ ] [CS 61B Lecture 32: Sorting III (video)](https://www.youtube.com/watch?v=Y6LOLpxg6Dc&index=32&list=PL4BBB74C7D2A1049C) (Ciência da Computação 61B Aula 32: Ordenação III - vídeo)
    - [ ] [CS 61B Lecture 33: Sorting V (video)](https://www.youtube.com/watch?v=qNMQ4ly43p4&index=33&list=PL4BBB74C7D2A1049C) (Ciência da Computação 61B Aula 33: Ordenação V - vídeo)

- [ ] [Bubble Sort (video)](https://www.youtube.com/watch?v=P00xJgWzz2c&index=1&list=PL89B61F78B552C1AB) (Ordenação por Bolha - vídeo)
- [ ] [Analyzing Bubble Sort (video)](https://www.youtube.com/watch?v=ni_zk257Nqo&index=7&list=PL89B61F78B552C1AB) (Analisando Ordenação por Bolha - vídeo)
- [ ] [Insertion Sort, Merge Sort (video)](https://www.youtube.com/watch?v=Kg4bqzAqRBM&index=3&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb) (Ordenação por Inserção, Ordenação por Mistura - vídeo)
- [ ] [Insertion Sort (video)](https://www.youtube.com/watch?v=c4BRHC7kTaQ&index=2&list=PL89B61F78B552C1AB) (Ordenação por Inserção - vídeo)
- [ ] [Merge Sort (video)](https://www.youtube.com/watch?v=GCae1WNvnZM&index=3&list=PL89B61F78B552C1AB) (Ordenação por Mistura - vídeo)
- [ ] [Quicksort (vídeo)](https://www.youtube.com/watch?v=y_G9BkAm6B8&index=4&list=PL89B61F78B552C1AB)
- [ ] [Selection Sort (video)](https://www.youtube.com/watch?v=6nDMgr0-Yyo&index=8&list=PL89B61F78B552C1AB) (Ordenação por Seleção - vídeo)

- [ ] Código de ordenação por mistura:
    - [ ] [Using output array (C)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/sorting/mergesort.c) (Usando array de saída (C))
    - [ ] [Using output array (Python)](https://github.com/jwasham/practice-python/blob/master/merge_sort/merge_sort.py) (Usando array de saída (Python))
    - [ ] [In-place (C++)](https://github.com/jwasham/practice-cpp/blob/master/merge_sort/merge_sort.cc)
- [ ] Código de algoritmo de ordenação quicksort:
    - [ ] [Implementation (C)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/randomization/quick.c) (Implementação em C)
    - [ ] [Implementation (C)](https://github.com/jwasham/practice-c/blob/master/quick_sort/quick_sort.c) (Implementação em C)
    - [ ] [Implementation (Python)](https://github.com/jwasham/practice-python/blob/master/quick_sort/quick_sort.py) (Implementação em Python)

- [ ] Implementar:
    - [ ] Mergesort: O(n log n) caso comum e pior caso
    - [ ] Quicksort O(n log n) caso comum
    - Ordenação por seleção e inserção são ambos O(n^2) caso comum e pior caso
    - Para heapsort, veja estrutura de dados heap acima.

- [ ] Não é requisitado, mas eu recomendo esses:
    - [ ] [Sedgewick - Radix Sorts (6 vídeos)](https://www.youtube.com/playlist?list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53)
        - [ ] [1. Strings em Java](https://www.youtube.com/watch?v=zRzU-FWsjNU&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53&index=6)
        - [ ] [2. Key Indexed Counting](https://www.youtube.com/watch?v=CtgKYmXs62w&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53&index=5) (Contagem Indexada por Chaves)
        - [ ] [3. Least Significant Digit First String Radix Sort](https://www.youtube.com/watch?v=2pGVq_BwPKs&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53&index=4) (Radix sort de string de Dígito-Menos-Significativo-Primeiro)
        - [ ] [4. Most Significant Digit First String Radix Sort](https://www.youtube.com/watch?v=M3cYNY90R6c&index=3&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53) (Radix sort de string de Dígito-Mais-Significativo-Primeiro)
        - [ ] [5. 3 Way Radix Quicksort](https://www.youtube.com/watch?v=YVl58kfE6i8&index=2&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53) (Quicksort Radix de 3 vias)
        - [ ] [6. Suffix Arrays](https://www.youtube.com/watch?v=HKPrVm5FWvg&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53&index=1) (Arrays de Sufixos)
    - [ ] [Radix Sort](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#radixSort) (Radix Sort)
    - [ ] [Radix Sort (vídeo)](https://www.youtube.com/watch?v=xhr26ia4k38)
    - [ ] [Radix Sort, Counting Sort (linear time given constraints) (video)](https://www.youtube.com/watch?v=Nz1KZXbghj8&index=7&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb) (Radix Sort, Ordenação por Contagem (tempo linear dadas restrições))
    - [ ] [Randomization: Matrix Multiply, Quicksort, Freivalds' algorithm (video)](https://www.youtube.com/watch?v=cNB2lADK3_s&index=8&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp) (Randomização: Multiplicação de Matriz, Quicksort, Algoritmo de Freivalds - vídeo)
    - [ ] [Sorting in Linear Time (video)](https://www.youtube.com/watch?v=pOKy3RZbSws&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=14) (Ordenando em Tempo Linear - vídeo)

Como um resumo, aqui está uma representação visual de [15 algoritmos de ordenação](https://www.youtube.com/watch?v=kPRA0W1kECg).
Se você precisa de mais detalhes sobre o assunto, veja a seção "Ordenação" em [Detalhes Adicionais Sobre Alguns Assuntos](#detalhes-adicionais-sobre-alguns-assuntos)

## Grafos

Grafos podem ser usados para representar muitos problemas na Ciência da Computação, então essa seção é longa, assim como árvores e ordenação também foram.

- Anotações:
    - Há 4 maneiras básicas de representar um grafo na memória:
        - objetos e apontadores
        - matriz de adjacência
        - lista de adjacência
        - mapa de adjacência
    - Famialirize-se com cada representação e seus prós e contras.
    - Busca em Largura (BFS) e Busca em Profundidade (DFS) - saiba a complexidade computacional deles, seus perde-e-ganhas (tradeoffs), e como implementar eles em código real.
    - Quando for perguntado uma questão, busque por uma solução baseada em grafos primeiro, depois se não houver nenhuma, siga em frente.

- [ ] Aulas do Skiena - ótima introdução:
    - [ ] [CSE373 2012 - Lecture 11 - Graph Data Structures (video)](https://www.youtube.com/watch?v=OiXxhDrFruw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=11) (CSE373 2012 - Aula 11 - Estrutura de Dados de Grafos - vídeo)
    - [ ] [CSE373 2012 - Lecture 12 - Breadth-First Search (video)](https://www.youtube.com/watch?v=g5vF8jscteo&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=12) (CSE373 2012 - Aula 12 - Busca em Largura - vídeo)
    - [ ] [CSE373 2012 - Lecture 13 - Graph Algorithms (video)](https://www.youtube.com/watch?v=S23W6eTcqdY&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=13) (CSE373 2012 - Aula 13 - Algoritmos de Grafos - vídeo)
    - [ ] [CSE373 2012 - Lecture 14 - Graph Algorithms (con't) (video)](https://www.youtube.com/watch?v=WitPBKGV0HY&index=14&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b) (CSE373 2012 - Aula 11 - Algoritmos de Grafos (parte 1) - vídeo)
    - [ ] [CSE373 2012 - Lecture 15 - Graph Algorithms (con't 2) (video)](https://www.youtube.com/watch?v=ia1L30l7OIg&index=15&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b) (CSE373 2012 - Aula 11 - Algoritmos de Grafos (parte 2) - vídeo)
    - [ ] [CSE373 2012 - Lecture 16 - Graph Algorithms (con't 3) (video)](https://www.youtube.com/watch?v=jgDOQq6iWy8&index=16&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b) (CSE373 2012 - Aula 11 - Algoritmos de Grafos (parte 3) - vídeo)

- [ ] Grafos (revisão e mais):

    - [ ] [6.006 Single-Source Shortest Paths Problem (video)](https://www.youtube.com/watch?v=Aa2sqUhIn-E&index=15&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb) (6.006 Problema do Menor Caminho de Fonte-Única - vídeo)
    - [ ] [6.006 Dijkstra (vídeo)](https://www.youtube.com/watch?v=2E7MmKv0Y24&index=16&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [6.006 Bellman-Ford (vídeo)](https://www.youtube.com/watch?v=ozsuci5pIso&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=17)
    - [ ] [6.006 Speeding Up Dijkstra (video)](https://www.youtube.com/watch?v=CHvQ3q_gJ7E&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=18) (6.006 acelerando Dijkstra - vídeo)
    - [ ] [Aduni: Graph Algorithms I - Topological Sorting, Minimum Spanning Trees, Prim's Algorithm -  Lecture 6 (video)](https://www.youtube.com/watch?v=i_AQT_XfvD8&index=6&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm) (Aduni: Algoritmos de Grafos I - Ordenação Topológica, Árvores de Extensão Mínima, Algoritmo de Prim - Aula 6 - vídeo)
    - [ ] [Aduni: Graph Algorithms II - DFS, BFS, Kruskal's Algorithm, Union-find Data Structure - Lecture 7 (video)]( https://www.youtube.com/watch?v=ufj5_bppBsA&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=7) (Aduni: Algoritmos de Grafos II - Busca em Profundidade (DFS), Busca em Largura (BFS), Algoritmo de Kruskal, Estrutura de Dados Union-Find - Aula 7 - vídeo)
    - [ ] [Aduni: Graph Algorithms III: Shortest Path - Lecture 8 (video)](https://www.youtube.com/watch?v=DiedsPsMKXc&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=8) (Aduni: Algoritmos de Grafos III: Menor Caminhno - Aula 8 - vídeo)
    - [ ] [Aduni: Graph Alg. IV: Intro to geometric algorithms - Lecture 9 (video)](https://www.youtube.com/watch?v=XIAQRlNkJAw&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=9) (Algoritmos de Grafos IV: Introdução à algoritmos geométricos - Aual 9 - vídeo)
    - [ ] [CS 61B 2014 (starting at 58:09) (video)](https://youtu.be/dgjX4HdMI-Q?list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&t=3489) (CS 61B 2014 (começando em 58:09) - vídeo)
    - [ ] [CS 61B 2014: Weighted graphs (video)](https://www.youtube.com/watch?v=aJjlQCFwylA&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&index=19) (CS 61B 2014: Grafos Ponderados - vídeo)
    - [ ] [Greedy Algorithms: Minimum Spanning Tree (video)](https://www.youtube.com/watch?v=tKwnms5iRBU&index=16&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp) (Algoritmos Gulosos: Árvore de Extensão Mínima - vídeo)
    - [ ] [Strongly Connected Components Kosaraju's Algorithm Graph Algorithm (video)](https://www.youtube.com/watch?v=RpgcYiky7uw) (Componentes Fortemente Conectados, Algoritmo de Kosaraju, Algoritmo de Grafo - vídeo)

- Curso Completo do Coursera:
    - [ ] [Algorithms on Graphs (video)](https://www.coursera.org/learn/algorithms-on-graphs/home/welcome) (Algoritmos em Grafos - vídeo)

- Irei implementar:
    - [ ] Busca em Profundidade (DFS) com lista de adjacência (recursivo)
    - [ ] Busca em Profundidade (DFS) com lista de adjacência (iterativo com memória estática (stack))
    - [ ] Busca em Profundidade (DFS) com matriz de adjacência (recursivo)
    - [ ] Busca em Profundidade (DFS) com matriz de adjacência (iterativo com memória estática (stack))
    - [ ] Busca em Largura (BFS) com lista de adjacência
    - [ ] Busca em Largura (BFS) com matriz de adjacência
    - [ ] menor caminho de fonte-única (Dijkstra)
    - [ ] árvore de extensão mínima
    - Algoritmos baseados em busca em profundidade (DFS) (ver vídeos da Aduni acima):
        - [ ] checar por ciclos (necessário para ordenação topológica, já que nós iremos checar por ciclos antes de começar)
        - [ ] ordenação topológica
        - [ ] contar componentes conectados em um grafo
        - [ ] listar componentes fortemente conectados
        - [ ] checar por grafos bipartidos

Você ganhará mais prática com grafos no livro do Skiena (veja a seção de livros abaixo) e os livros da entrevista

## Ainda Mais Conhecimento

- ### Recursão
    - [ ] Aulas de Stanford sobre recursão e backtracking:
        - [ ] [Lecture 8 | Programming Abstractions (video)](https://www.youtube.com/watch?v=gl3emqCuueQ&list=PLFE6E58F856038C69&index=8) (Aula 8 | Abstrações de Programação - vídeo)
        - [ ] [Lecture 9 | Programming Abstractions (video)](https://www.youtube.com/watch?v=uFJhEPrbycQ&list=PLFE6E58F856038C69&index=9) (Aula 9 | Abstrações de Programação - vídeo)
        - [ ] [Lecture 10 | Programming Abstractions (video)](https://www.youtube.com/watch?v=NdF1QDTRkck&index=10&list=PLFE6E58F856038C69) (Aula 10 | Abstrações de Programação - vídeo)
        - [ ] [Lecture 11 | Programming Abstractions (video)](https://www.youtube.com/watch?v=p-gpaIGRCQI&list=PLFE6E58F856038C69&index=11) (Aula 11 | Abstrações de Programação - vídeo)
    - quando é apropriado usá-la
    - como a recursão de cauda é melhor do que nada?
        - [ ] [What Is Tail Recursion Why Is It So Bad?](https://www.quora.com/What-is-tail-recursion-Why-is-it-so-bad) (O Que É Recursão de Cauda E Por Que Ela É Tão Ruim?)
        - [ ] [Tail Recursion (video)](https://www.youtube.com/watch?v=L1jjXGfxozc) (Recursão de Cauda - vídeo)

- ### Programação Dinâmica
    - Esse assunto pode ser bem difícil, já que cada problema solúvel de PD deve ser definido como uma relação de recursão, e isso pode ser complicado.
    - Eu sugiro olhar vários exemplos de problemas de PD até que você tenha um bom entendimento do padrão envolvido.
    - [ ] vídeos:
        - os vídeos do Skiena podem ser difíceis de acompanhar já que ele às vezes usa o quadro branco, o qual é pequeno para enxergar
        - [ ] [Skiena: CSE373 2012 - Lecture 19 - Introduction to Dynamic Programming (video)](https://youtu.be/Qc2ieXRgR0k?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1718) (Skiena: CSE373 2012 - Aula 19 - Introdução à Programação Dinâmica - vídeo)
        - [ ] [Skiena: CSE373 2012 - Lecture 20 - Edit Distance (video)](https://youtu.be/IsmMhMdyeGY?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=2749) (Skiena: CSE373 2012 - Aula 20 - Editar Distância - vídeo)
        - [ ] [Skiena: CSE373 2012 - Lecture 21 - Dynamic Programming Examples (video)](https://youtu.be/o0V9eYF4UI8?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=406) (Skiena: CSE373 2012 - Aula 21 - Exemplos de Programação Dinâmica - vídeo)
        - [ ] [Skiena: CSE373 2012 - Lecture 22 - Applications of Dynamic Programming (video)](https://www.youtube.com/watch?v=dRbMC1Ltl3A&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=22) (Skiena: CSE373 2012 - Aula 22 - Aplicações de Programação Dinâmica - vídeo)
        - [ ] [Simonson: Dynamic Programming 0 (starts at 59:18) (video)](https://youtu.be/J5aJEcOr6Eo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3558) (Simonson: Programação Dinâmica 0 (começa em 59:18) - vídeo)
        - [ ] [Simonson: Dynamic Programming I - Lecture 11 (video)](https://www.youtube.com/watch?v=0EzHjQ_SOeU&index=11&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm) (Simonson: Programação Dinâmica I - Aula 11 - vídeo)
        - [ ] [Simonson: Dynamic programming II - Lecture 12 (video)](https://www.youtube.com/watch?v=v1qiRwuJU7g&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=12) (Simonson: Programação Dinâmica II - Aula 12 - vídeo)
        - [ ] Lista de problemas individuais de PD (cada um é curto):
            [Dynamic Programming (video)](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr) (Programação Dinâmica - vídeo)
    - [ ] Anotações de Aulas da Yale
        - [ ] [Dynamic Programming](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#dynamicProgramming) (Programação Dinâmica)
    - [ ] Coursera:
        - [ ] [The RNA secondary structure problem (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/80RrW/the-rna-secondary-structure-problem) (O problema da estrutura secundária de RNA - vídeo)
        - [ ] [A dynamic programming algorithm (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/PSonq/a-dynamic-programming-algorithm) (Um algoritmo de programação dinâmica - vídeo)
        - [ ] [Illustrating the DP algorithm (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/oUEK2/illustrating-the-dp-algorithm) (Ilustrando o algorítmo de PD - vídeo)
        - [ ] [Running time of the DP algorithm (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/nfK2r/running-time-of-the-dp-algorithm) (Tempo de execução do algoritmo de PD - vídeo)
        - [ ] [DP vs. recursive implementation (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/M999a/dp-vs-recursive-implementation) (PD vs. implementação recursiva - vídeo)
        - [ ] [Global pairwise sequence alignment (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/UZ7o6/global-pairwise-sequence-alignment) (Alinhamento de sequência em pares global - vídeo)
        - [ ] [Local pairwise sequence alignment (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/WnNau/local-pairwise-sequence-alignment) (Alinhamento de sequência em pares local - vídeo)

- ### Programação Orientada a Objetos
    - [ ] [Optional: UML 2.0 Series (video)](https://www.youtube.com/watch?v=OkC7HKtiZC0&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc) (Opcional: Série UML 2.0 - vídeo)
    - [ ] Engenharia de Software Orientada a Objetos: Desenvolvedor de Software Usando UML e Java - 21 vídeo):
        - Pode pular isso se você tem uma boa compreensão de OO e práticas de design em OO.
        - [OOSE: Software Dev Using UML and Java](https://www.youtube.com/playlist?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO) (Engenharia de Software Orientada a Objetos: Desenvolvedor de Software usando UML e Java)
    - [ ] Princípios de SOLID de POO:
        - [ ] [Bob Martin SOLID Principles of Object Oriented and Agile Design (video)](https://www.youtube.com/watch?v=TMuno5RZNeE) (Princípios de SOLID de Orientação a Objetos e Design Ágil por Bob Martin)
        - [ ] [SOLID Design Patterns in C# (video)](https://www.youtube.com/playlist?list=PL8m4NUhTQU48oiGCSgCP1FiJEcg_xJzyQ) (Padrões de Design de SOLID em C# - vídeo)
        - [ ] [SOLID Principles (video)](https://www.youtube.com/playlist?list=PL4CE9F710017EA77A) (Princípios de SOLID - vídeo)
        - [ ] S - [Single Responsibility Principle](http://www.oodesign.com/single-responsibility-principle.html) | [Single responsibility to each Object](http://www.javacodegeeks.com/2011/11/solid-single-responsibility-principle.html) (S - Princípio da Responsabilidade Única)
            - [more flavor](https://docs.google.com/open?id=0ByOwmqah_nuGNHEtcU5OekdDMkk) (mais informações)
        - [ ] O - [Open/Closed Principal](http://www.oodesign.com/open-close-principle.html) | [On production level Objects are ready for extension for not for modification](https://en.wikipedia.org/wiki/Open/closed_principle) (O - Princípio Aberto/Fechado)
            - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgN2M5MTkwM2EtNWFkZC00ZTI3LWFjZTUtNTFhZGZiYmUzODc1&hl=en) (mais informações)
        - [ ] L - [Liskov Substitution Principal](http://www.oodesign.com/liskov-s-substitution-principle.html) | [Base Class and Derived class follow ‘IS A’ principal](http://stackoverflow.com/questions/56860/what-is-the-liskov-substitution-principle) (L - Princípio de Substituição de Liskov)
            - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgNzAzZjA5ZmItNjU3NS00MzQ5LTkwYjMtMDJhNDU5ZTM0MTlh&hl=en) (mais informações)
        - [ ] I - [Interface segregation principle](http://www.oodesign.com/interface-segregation-principle.html) | clientes não devem ser forçados a implementar interfaces que eles não usam (Princípio da segregação de Interface)
            - [Interface Segregation Principle in 5 minutes (video)](https://www.youtube.com/watch?v=3CtAfl7aXAQ) (Princípio da Segregação de Interface em 5 minutos - vídeo)
            - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgOTViYjJhYzMtMzYxMC00MzFjLWJjMzYtOGJiMDc5N2JkYmJi&hl=en) (mais informações)
        - [ ] D -[Dependency Inversion principle](http://www.oodesign.com/dependency-inversion-principle.html) | Reduce the dependency In composition of objects. (D - Princípio da Inversão de Dependência)
            - [Why Is The Dependency Inversion Principle And Why Is It Important](http://stackoverflow.com/questions/62539/what-is-the-dependency-inversion-principle-and-why-is-it-important) (O Que É O Princípio da Inversão de Dependência E Por Que Ele É Importante)
            - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgMjdlMWIzNGUtZTQ0NC00ZjQ5LTkwYzQtZjRhMDRlNTQ3ZGMz&hl=en) (mais informações)

- ### Padrões de design
    - [ ] [Quick UML review (video)](https://www.youtube.com/watch?v=3cmzqZzwNDM&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc&index=3) (Revisão rápida de UML - vídeo)
    - [ ] Aprenda esses padrões:
        - [ ] estratégia
        - [ ] singleton (único)
        - [ ] adaptador
        - [ ] protótipo
        - [ ] decorador
        - [ ] visitante
        - [ ] fábrica, fábrica abstrata
        - [ ] fachada
        - [ ] observador
        - [ ] proxy
        - [ ] delegar
        - [ ] comandar
        - [ ] estado
        - [ ] memento
        - [ ] iterador
        - [ ] composto
        - [ ] flyweight (peso-mosca)
    - [ ] [Chapter 6 (Part 1) - Patterns (video)](https://youtu.be/LAP2A80Ajrg?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO&t=3344) (Capítulo 6 (Parte 1) - Padrões - vídeo)
    - [ ] [Chapter 6 (Part 2) - Abstraction-Occurrence, General Hierarchy, Player-Role, Singleton, Observer, Delegation (video)](https://www.youtube.com/watch?v=U8-PGsjvZc4&index=12&list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO) (Capítulo 6 (Parte 2) - Abstração-Ocorrência, Hierarquia Geral, Função-Jogador, Singleton, Observador, Delegação - vídeo)
    - [ ] [Chapter 6 (Part 3) - Adapter, Facade, Immutable, Read-Only Interface, Proxy (video)](https://www.youtube.com/watch?v=7sduBHuex4c&index=13&list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO) (Capítulo 6 (Parte 3) - Adaptador, Fachada, Imutável, Interface Somente Leitura, Proxy - vídeo )
    - [ ] [Série de vídeos (27 vídeos)](https://www.youtube.com/playlist?list=PLF206E906175C7E07)
    - [ ] [Head First Design Patterns](https://www.amazon.com/Head-First-Design-Patterns-Freeman/dp/0596007124) (Padrões de Design "Head First" ou "cabeça primeiro" numa tradução literal)
        - Eu sei que o livro canônico é "Design Patterns: Elements of Reusable Object-Oriented Software (Padrões de Design: Elementos de Software Orientado a Objetos reutilizável), mas "Head First" é ótimo para iniciantes em POO.
    - [ ] [Handy reference: 101 Design Patterns & Tips for Developers](https://sourcemaking.com/design-patterns-and-tips) (Referência Útil: 101 Dicas e Padrões de Design para Desenvolvedores)
    - [ ] [Design patterns for humans](https://github.com/kamranahmedse/design-patterns-for-humans#structural-design-patterns) (Padrões de design para humanos)

- ### Combinatórias (n escolhe k) e Probabilidade
    - [ ] [Math Skills: How to find Factorial, Permutation and Combination (Choose) (video)](https://www.youtube.com/watch?v=8RRo6Ti9d0U) (Habilidades Matemáticas: Como encontrar Fatorial, Permutação e Combinação (Escolha) - vídeo)
    - [ ] [Make School: Probability (video)](https://www.youtube.com/watch?v=sZkAAk9Wwa4) (Make School: Probabilidade - vídeo)
    - [ ] [Make School: More Probability and Markov Chains (video)](https://www.youtube.com/watch?v=dNaJg-mLobQ) (Make School: Mais Probabilidade e Cadeias de Markov - vídeo)
    - [ ] Khan Academy:
        - Layout do curso
            - [ ] [Basic Theoretical Probability](https://www.khanacademy.org/math/probability/probability-and-combinatorics-topic) (Probabilidade Teorética Básica)
        - Apenas os vídeos - 41 (cada um é simples e curto):
            - [ ] [Probability Explained (video)](https://www.youtube.com/watch?v=uzkc-qNVoOk&list=PLC58778F28211FA19) (Probabilidade Explicada - vídeo)

- ### Algoritmos de Aproximação, NP-Completo e NP
    - Saiba sobre as classes mais famosas de problemas NP-completo, como o problema do vendedor viajante e o problema da mochila,
        e seja capaz de reconhecê-los quando um entrevistador lhe perguntar disfarçado.
    - Saiba o que NP-completo significa.
    - [ ] [Computational Complexity (video)](https://www.youtube.com/watch?v=moPtwq_cVH8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=23) (Complexidade Computacional - vídeo)
    - [ ] Simonson:
        - [ ] [Greedy Algs. II & Intro to NP Completeness (video)](https://youtu.be/qcGnJ47Smlo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=2939) (Algoritmos Gulosos II e Introdução à Completude NP - vídeo)
        - [ ] [NP Completeness II & Reductions (video)](https://www.youtube.com/watch?v=e0tGC6ZQdQE&index=16&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm) (Completude NP II e Reduções - vídeo)
        - [ ] [NP Completeness III (video)](https://www.youtube.com/watch?v=fCX1BGT3wjE&index=17&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm) (Completude NP III - vídeo)
        - [ ] [NP Completeness IV (video)](https://www.youtube.com/watch?v=NKLDp3Rch3M&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=18) (Completude NP IV - vídeo)
    - [ ] Skiena:
        - [ ] [CSE373 2012 - Lecture 23 - Introduction to NP-Completeness (video)](https://youtu.be/KiK5TVgXbFg?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1508) (CSE373 2012 - Aula 23 - Introdução à Completude-NP - vídeo)
        - [ ] [CSE373 2012 - Lecture 24 - NP-Completeness Proofs (video)](https://www.youtube.com/watch?v=27Al52X3hd4&index=24&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b) (CSE373 2012 - Aula 24 - Provas de Completude-NP - vídeo)
        - [ ] [CSE373 2012 - Lecture 25 - NP-Completeness Challenge (video)](https://www.youtube.com/watch?v=xCPH4gwIIXM&index=25&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b) (CSE373 2012 - Aula 25 - Desafio de Completude-NP - vídeo)
    - [ ] [Complexity: P, NP, NP-completeness, Reductions (video)](https://www.youtube.com/watch?v=eHZifpgyH_4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=22) (Complexidade: P, NP, Completude-NP, Reduções - vídeo)
    - [ ] [Complexity: Approximation Algorithms (video)](https://www.youtube.com/watch?v=MEz1J9wY2iM&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=24) (Complexidade: Algoritmos de Aproximação - vídeo)
    - [ ] [Complexity: Fixed-Parameter Algorithms (video)](https://www.youtube.com/watch?v=4q-jmGrmxKs&index=25&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp) (Complexidade: Algorítmos de Parâmetro-Fixado - vídeo)
    - Peter Norvig debate soluções tão boas quanto possível para o problema do vendedor viajante:
        - [Jupyter Notebook](http://nbviewer.jupyter.org/url/norvig.com/ipython/TSP.ipynb) (Caderno de Júpiter)
    - Páginas 1048 - 1140 em CLRS (livro Introdução à Algoritmos) se você o tive.r

- ### Caches
    - [ ] Cache LRU:
        - [ ] [The Magic of LRU Cache (100 Days of Google Dev) (video)](https://www.youtube.com/watch?v=R5ON3iwx78M) (A Mágica do Cache LRU (100 dias de Google Dev) - vídeo)
        - [ ] [Implementing LRU (video)](https://www.youtube.com/watch?v=bq6N7Ym81iI) (Implementando LRU - vídeo)
        - [ ] [LeetCode - 146 Cache LRU (C++) (vídeo)](https://www.youtube.com/watch?v=8-FZRAjR7qU))
    - [ ] cache CPU:
        - [ ] [MIT 6.004 L15: The Memory Hierarchy (video)](https://www.youtube.com/watch?v=vjYF_fAZI5E&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-&index=24) (MIT 6.004 L15: A Hierarquia de Memória - vídeo)
        - [ ] [MIT 6.004 L16: Cache Issues (video)](https://www.youtube.com/watch?v=ajgC3-pyGlk&index=25&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-) (MIT 6.004 L16: Problemas de Cache - vídeo)

- ### Processos e Threads
    - [ ] Ciência da Computação 162 - Sistemas Operacionais (25 vídeos):
        - para processos e threads veja os vídeos 1-11
        - [Operating Systems and System Programming (video)](https://www.youtube.com/playlist?list=PL-XXv-cvA_iBDyz-ba4yDskqMDY6A1w_c) (Sistemas Operacionais e Programação de Sistema - vídeo)
    - [What Is The Difference Between A Process And A Thread?](https://www.quora.com/What-is-the-difference-between-a-process-and-a-thread) (Qual É A Diferença Entre Um Processo E Uma Thread)
    - Cobre:
        - Processos, Threads, Problemas de Simultaneidade
            - diferença entre processos e threads
            - processos
            - threads
            - locks
            - mutexes
            - semáforos
            - monitores
            - como eles funcionam
            - deadlock
            - livelock
        - atividade, interrupções e troca de contexto de CPU
        - Construtos de simultaneidade modernos com processadores de múltiplos núcleos.
        - [Paging, segmentation and virtual memory (video)](https://www.youtube.com/watch?v=LKe7xK0bF7o&list=PLCiOXwirraUCBE9i_ukL8_Kfg6XNv7Se8&index=2) (Paginação, segmentação e memória virtual - vídeo)
        - [Interrupts (video)](https://www.youtube.com/watch?v=uFKi2-J-6II&list=PLCiOXwirraUCBE9i_ukL8_Kfg6XNv7Se8&index=3) (Interruoções - vídeo)
        - [Scheduling (video)](https://www.youtube.com/watch?v=-Gu5mYdKbu4&index=4&list=PLCiOXwirraUCBE9i_ukL8_Kfg6XNv7Se8) (Agendamento - vídeo)
        - Necessidades de recurso de processos (memória: código, armazenamento estático, memória estática (stack), memória dinâmica (heap), e também descritores de arquivo, i/o
        - Necessidades de recurso de threads (o mesmo que acima (menos stack) com outras threads no mesmo processo, mas cada um tem seu próprio pc, contador de stack, registros, e stack)
        - Bifurcação nada mais é que COW (copy-on-write) (somente leitura) até que o novo processo escreva na memória, depois ela faz uma cópia completa.
        - Troca de contexto
            - Como a troca de contexto é iniciada pelo sistema operacional e componentes de hardware subjacentes
    - [ ] [threads em C++ (série- 10 vídeos)](https://www.youtube.com/playlist?list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M)
    - [ ] simultaneidade (ou concorrência) em Python (vídeos):
        - [ ] [Short series on threads](https://www.youtube.com/playlist?list=PL1H1sBF1VAKVMONJWJkmUh6_p8g4F2oy1) (Pequena série sobre threads)
        - [ ] [Threads em Python](https://www.youtube.com/watch?v=Bs7vPNbB9JM)
        - [ ] [Understanding the Python GIL (2010)](https://www.youtube.com/watch?v=Obt-vMVdM8s) (Entendendo o GIL de Python)
            - [referência](http://www.dabeaz.com/GIL)
        - [ ] [David Beazley - Python Concurrency From the Ground Up: LIVE! - PyCon 2015](https://www.youtube.com/watch?v=MCs5OvhV9S4) (David Beazley - Simultaneidade (ou concorrência) Em Python Do Zero: AO VIVO!)
        - [ ] [Keynote David Beazley - Topics of Interest (Python Asyncio)](https://www.youtube.com/watch?v=ZzfHjytDceU) (Ideia Central de David Beazley - Tópicos de Interesse - Python Asyncio)
        - [ ] [Mutex em Python](https://www.youtube.com/watch?v=0zaPs8OtyKY)

- ### Artigos
    - Ler tudo de ponta a ponta com total compreensão irá provavelmente levar mais tempo do que você tem. Eu recomendo ser seletivo com os artigos e suas seções.
    - [Adora artigos clássicos?](https://www.cs.cmu.edu/~crary/819-f09/)
    - [ ] [1978: Communicating Sequential Processes](http://spinroot.com/courses/summer/Papers/hoare_1978.pdf) (1978: Comunicando Processos Sequenciais)
        - [implementado em Go](https://godoc.org/github.com/thomas11/csp)
    - [ ] [2003: The Google File System](http://static.googleusercontent.com/media/research.google.com/en//archive/gfs-sosp2003.pdf) (2003: O Sistema de Arquivos da Google)
        - substituído por Colossus em 2012
    - [ ] [2004: MapReduce: Simplified Data Processing on Large Clusters]( http://static.googleusercontent.com/media/research.google.com/en//archive/mapreduce-osdi04.pdf) (2004: MapReduce: Processamento de Dados Simplificado em Grandes Aglomerados)
        - substituído, na sua maior parte, por Cloud Dataflow?
    - [ ] [2006: Bigtable: A Distributed Storage System for Structured Data](https://static.googleusercontent.com/media/research.google.com/en//archive/bigtable-osdi06.pdf) (2006: Bigtable: Um Sistema de Armazenamento Distribuído para Data Estruturada)
        - [An Inside Look at Google BigQuery](https://cloud.google.com/files/BigQueryTechnicalWP.pdf) (Uma Olhada Por Dentro no BigQuery da Google)
    - [ ] [2006: The Chubby Lock Service for Loosely-Coupled Distributed Systems](https://research.google.com/archive/chubby-osdi06.pdf) (2006: O Serviço de Lock Gordo para Sistemas Distribuídos Frouxamente Acoplados)
    - [ ] [2007: Dynamo: Amazon’s Highly Available Key-value Store](https://www.akkadia.org/drepper/cpumemory.pdf) (2007: Dynamo: Loja Chave-valor Altamente Disponível da Amazon)
        - O artigo da Dynamo iniciou a revolução NoSQL
    - [ ] [2007: What Every Programmer Should Know About Memory (very long, and the author encourages skipping of some sections)](https://www.akkadia.org/drepper/cpumemory.pdf) (2007: O Que Todo Programador Deve Saber Sobre Memória - bem longo, e o autor encoraja pular algumas seções)
    - [ ] [2010: Dapper, a Large-Scale Distributed Systems Tracing Infrastructure](https://research.google.com/pubs/archive/36356.pdf) (2010: Dapper, Uma Infraestrutura de Rastreamento de Sistemas Distribuídos de Grande Escala)
    - [ ] [2010: Dremel: Interactive Analysis of Web-Scale Datasets](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/36632.pdf) (2010: Dremel: Análise Interativa de Conjunto de Dados da Web)
    - [ ] [2012: Colossus da Google](https://www.wired.com/2012/07/google-colossus/)
        - artigo não disponível
    - [ ] 2012: AddressSanitizer: Um Veloz Verificador de Sanidade de Endereço:
        - [artigo](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/37752.pdf)
        - [vídeo](https://www.usenix.org/conference/atc12/technical-sessions/presentation/serebryany)
    - [ ] 2013: Spanner: Banco de Dados Globalmente Distribuído da Google
        - [artigo](http://static.googleusercontent.com/media/research.google.com/en//archive/spanner-osdi2012.pdf)
        - [vídeo](https://www.usenix.org/node/170855)
    - [ ] [2014: Machine Learning: The High-Interest Credit Card of Technical Debt](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43146.pdf) (2014: Aprendizado de Máquina: O Cartão de Crédito de Alta Taxa de Juros de Débito Técnico)
    - [ ] [2015: Continuous Pipelines at Google](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43790.pdf) (2015: Pipelines Contínuas na Google)
    - [ ] [2015: High-Availability at Massive Scale: Building Google’s Data Infrastructure for Ads](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44686.pdf) (2015: Alta Disponibilidade em Escalas Massivas: Construindo a Infraestrutura de Dados da Google para Anúncios)
    - [ ] [2015: TensorFlow: Large-Scale Machine Learning on Heterogeneous Distributed Systems](http://download.tensorflow.org/paper/whitepaper2015.pdf ) (2015: TensorFlow: Aprendizado de Máquina de Grande Escala em Sistemas Distribuídos Heterogêneos)
    - [ ] [2015: How Developers Search for Code: A Case Study](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/43835.pdf) (2015: Como Desenvolvedores Buscam por Código: Um Estudo de Caso)
    - [ ] [2016: Borg, Omega, e Kubernetes](http://static.googleusercontent.com/media/research.google.com/en//pubs/archive/44843.pdf)

- ### Testes
    - Cobrir:
        - como teste de unidade funciona
        - o que são objetos mock
        - o que é teste de integração
        - o que é injeção de dependência
    - [ ] [Agile Software Testing with James Bach (video)](https://www.youtube.com/watch?v=SAhJf36_u5U) (Teste Ágil de Software com James Bach - vídeo)
    - [ ] [Open Lecture by James Bach on Software Testing (video)](https://www.youtube.com/watch?v=ILkT_HV9DVU) (Aula Aberta por James Bach sobre Teste de Software - vídeo)
    - [ ] [Steve Freeman - Test-Driven Development (that’s not what we meant) (video)](https://vimeo.com/83960706) (Steve Freeman - Desenvolvimento Guiado Por Testes (isso não é o que a gente quis dizer) - vídeo)
        - [slides](http://gotocon.com/dl/goto-berlin-2013/slides/SteveFreeman_TestDrivenDevelopmentThatsNotWhatWeMeant.pdf)
    - [ ] [TDD is dead. Long live testing.](http://david.heinemeierhansson.com/2014/tdd-is-dead-long-live-testing.html) (Desenvolvimento Guiado Por Testes (ou a sigla TDD em Inglês, que significa Test-Driven Development) está morto. Longa vida aos testes.
    - [ ] [Is TDD dead? (video)](https://www.youtube.com/watch?v=z9quxZsLcfo) (TDD está morto? - vídeo)
    - [ ] [Série de Vídeos (152 vídeos) - nem todos são necessários (vídeo)](https://www.youtube.com/watch?v=nzJapzxH_rE&list=PLAwxTw4SYaPkWVHeC_8aSIbSxE_NXI76g)
    - [ ] [Test-Driven Web Development with Python](http://www.obeythetestinggoat.com/pages/book.html#toc) (Desenvolvimento Web Guiado Por Testes com Python)
    - [ ] Injeção de dependência:
        - [ ] [vídeo](https://www.youtube.com/watch?v=IKD2-MAkXyQ)
        - [ ] [Tao Of Testing](http://jasonpolites.github.io/tao-of-testing/ch3-1.1.html) (O Tao Dos Testes)
    - [ ] [How to write tests](http://jasonpolites.github.io/tao-of-testing/ch4-1.1.html) (Como escrever testes)

- ### Agendamento
    - em um SO, como funciona
    - pode ser adquirido a partir de vídeos de Sistemas Operacionais

- ### Implementar rotinas de sistema
    - entenda o que tem por baixo das APIs de programação que você usa
    - você pode as implementar?

- ### Busca de string e manipulações
    - [ ] [Sedgewick - Suffix Arrays (video)](https://www.youtube.com/watch?v=HKPrVm5FWvg) (Sedgewick - Arrays de Sufixo - vídeo)
    - [ ] [Sedgewick - Substring Search (videos)](https://www.youtube.com/watch?v=2LvvVFCEIv8&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66&index=5) (Sedgewick - Busca de Substring - vídeos)
        - [ ] [1. Introduction to Substring Search](https://www.youtube.com/watch?v=2LvvVFCEIv8&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66&index=5) (1. Introdução à Busca de Substring)
        - [ ] [2. Brute-Force Substring Search](https://www.youtube.com/watch?v=CcDXwIGEXYU&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66&index=4) (Busca de Substring por Força Bruta)
        - [ ] [3. Knuth-Morris Pratt](https://www.youtube.com/watch?v=n-7n-FDEWzc&index=3&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66)
        - [ ] [4. Boyer-Moore](https://www.youtube.com/watch?v=fI7Ch6pZXfM&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66&index=2)
        - [ ] [5. Rabin-Karp](https://www.youtube.com/watch?v=QzI0p6zDjK4&index=1&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66)
    - [ ] [Search pattern in text (video)](https://www.coursera.org/learn/data-structures/lecture/tAfHI/search-pattern-in-text) (Buscar padrão em um texto - vídeo)

    Se você precisa de mais detalhes sobre esse assunto, veja a seção "String Matching" em [Detalhes Adicionais Sobre Alguns Assuntos](#detalhes-adicionais-sobre-alguns-assuntos)

- ### Tries (ou Árvore de Prefixos)
    - Note que há tipos diferentes de tries. Alguns tem prefixos, alguns não, e alguns usam string ao invés de bits
        para rastrear o caminho.
    - Eu li todo o código, mas não irei implementar.
    - [ ] [Sedgewick - Tries (3 vídeos)](https://www.youtube.com/playlist?list=PLe-ggMe31CTe9IyG9MB8vt5xUJeYgOYRQ)
        - [ ] [1. Tries R-Way](https://www.youtube.com/watch?v=buq2bn8x3Vo&index=3&list=PLe-ggMe31CTe9IyG9MB8vt5xUJeYgOYRQ)
        - [ ] [2. Ternary Search Tries](https://www.youtube.com/watch?v=LelV-kkYMIg&index=2&list=PLe-ggMe31CTe9IyG9MB8vt5xUJeYgOYRQ) (Tries de Busca Ternária)
        - [ ] [3. Character Based Operations](https://www.youtube.com/watch?v=00YaFPcC65g&list=PLe-ggMe31CTe9IyG9MB8vt5xUJeYgOYRQ&index=1) (Operações Baseadas Em Caracteres)
    - [ ] [Notes on Data Structures and Programming Techniques](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Tries) (Anotações sobre Estruturas de Dados e Técnicas de Programação)
    - [ ] Vídeos de cursos curtos:
        - [ ] [Introduction To Tries (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/08Xyf/core-introduction-to-tries) (Introdução À Tries - vídeo)
        - [ ] [Performance Of Tries (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/PvlZW/core-performance-of-tries) (Desempenho De Tries - vídeo)
        - [ ] [Implementing A Trie (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/DFvd3/core-implementing-a-trie) (Implementando Uma Trie - vídeo)
    - [ ] [The Trie: A Neglected Data Structure](https://www.toptal.com/java/the-trie-a-neglected-data-structure) (A Trie: Uma Estrutura de Dados Negligenciada)
    - [ ] [TopCoder - Using Tries](https://www.topcoder.com/community/data-science/data-science-tutorials/using-tries/) (TopCoder - Usando Tries)
    - [ ] [Stanford Lecture (real world use case) (video)](https://www.youtube.com/watch?v=TJ8SkcUSdbU) (Aula de Stanfort (caso de uso no mundo real) - vídeo)
    - [ ] [MIT, Advanced Data Structures, Strings (pode ficar bem obscuro pela metade)](https://www.youtube.com/watch?v=NinWEPPrkDQ&index=16&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf) (MIT, Estruturas De Dados Avançadas, Strings)

- ### Números de Ponto Flutuantes ("Floating Point Numbers")
    - [ ] simples 8-bit: [Representation of Floating Point Numbers - 1 (video - tem um erro nos cálculos - veja a descrição do vídeo)](https://www.youtube.com/watch?v=ji3SfClm8TU) (Representação de Número de Ponto Flutuantes - 1 - vídeo)
    - [ ] 32 bit: [IEEE754 32-bit floating point binary (video)](https://www.youtube.com/watch?v=50ZYcZebIec) (IEEE754 Binário de Ponto Flutuante 32-bit - vídeo)

- ### Unicode
    - [ ] [The Absolute Minimum Every Software Developer Absolutely, Positively Must Know About Unicode and Character Sets]( http://www.joelonsoftware.com/articles/Unicode.html) (O Mínimo Absoluto Que Cada Desenvolvedor de Software Deve Absolutamente, Certamente Saber Sobre Unicode e Conjuntos de Caracteres)
    - [ ] [What Every Programmer Absolutely, Positively Needs To Know About Encodings And Character Sets To Work With Text](http://kunststube.net/encoding/) (O Que Cada Programador Deve Absolutamente, Certamente Saber Sobre Codificações E Conjuntos de Caracteres Para Trabalhar Com Texto)

- ### Extremidade (ordenação) (ou "endianness" em Inglês)
    - [ ] [Big And Little Endian](https://www.cs.umd.edu/class/sum2003/cmsc311/Notes/Data/endian.html) (Grande E Pequeno Extremo)
    - [ ] [Big Endian Vs Little Endian (video)](https://www.youtube.com/watch?v=JrNF0KRAlyo) (Grande Extremo Vs Pequeno Extremo - vídeo)
    - [ ] [Big And Little Endian Inside/Out (video)](https://www.youtube.com/watch?v=oBSuXP-1Tc0) (Explicando Grande e Pequeno Extremos - vídeo)
        - Palestra bem técnica para desenvolvedores de kernel. Não se preocupe se grande parte disso for demais para sua cabeça.
        - A primeira metade é suficiente.

- ### Redes
    - **se você tem experiência com redes ou quer se tornar um engenheiro de sistemas, se prepare para questões desse gênero**
    - caso contrário, isso é no mínimo bom de saber
    - [ ] [Khan Academy](https://www.khanacademy.org/computing/computer-science/internet-intro)
    - [ ] [UDP and TCP: Comparison of Transport Protocols](https://www.youtube.com/watch?v=Vdc8TCESIg8) (UDP e TCP: Comparação de Protocolos de Transporte)
    - [ ] [TCP/IP and the OSI Model Explained!](https://www.youtube.com/watch?v=e5DEVa9eSN0) (TCP/IP e o Modelo OSI Explicado)
    - [ ] [Packet Transmission across the Internet. Networking & TCP/IP tutorial.](https://www.youtube.com/watch?v=nomyRJehhnM) (Transmissão de Pacote pela Internet. Tutorial de Redes e TCP/IP.)
    - [ ] [HTTP](https://www.youtube.com/watch?v=WGJrLqtX7As)
    - [ ] [SSL e HTTPS](https://www.youtube.com/watch?v=S2iBR2ZlZf0)
    - [ ] [SSL/TLS](https://www.youtube.com/watch?v=Rp3iZUvXWlM)
    - [ ] [HTTP 2.0](https://www.youtube.com/watch?v=E9FxNzv1Tr8)
    - [ ] [Série de Vídeos (21 vídeos)](https://www.youtube.com/playlist?list=PLEbnTDJUr_IegfoqO4iPnPYQui46QqT0j)
    - [ ] [Subnetting Demystified - Part 5 CIDR Notation](https://www.youtube.com/watch?v=t5xYI0jzOf4) (Desmistificando Subnetting (ou subdivisão de redes, ou ainda sub-endereçamento IP))
    - [ ] Sockets:
        - [ ] [Java - Sockets - Introduction (video)](https://www.youtube.com/watch?v=6G_W54zuadg&t=6s) (Java - Sockets - Introdução - vídeo)
        - [ ] [Socket Programming (video)](https://www.youtube.com/watch?v=G75vN2mnJeQ) (Programação de Socket - vídeo)

## Design de Sistema, Escalabilidade, Tratamento de Dados
- **Você pode presumir que façam perguntas à respeito de design de sistema se você tem mais de 4 anos de experiência.**
- Escalabilidade e Design de Sistema são temas bem grandes com muitos tópicos e recursos, já que
      há muito a se considerar quando se projeta um sistema de software/hardware que pode escalar.
      Se prepare para gastar um bom tempo nisso.
- Considerações:
    - escalabilidade
        - Refinar grandes conjuntos de dados para valores únicos
        - Transformar um conjunto de dados em outro
        - Tratar quantidades incrivelmente grande de dados
    - design de sistema
        - conjuntos de características
        - interfaces
        - hierarquias de classes
        - projetar um sistema sob certas restrições
        - simplicidade e robustez
        - perde-e-ganhas (tradeoffs)
        - otimização e análise de desempenho
- [ ] **COMEÇE AQUI**: [The System Design Primer]https://github.com/donnemartin/system-design-primer) (A Base de Design de Sistema)
- [ ] [System Design from HiredInTech](http://www.hiredintech.com/system-design/) (Design de Sistema, por HiredInTech)
- [ ] [How Do I Prepare To Answer Design Questions In A Technical Inverview?](https://www.quora.com/How-do-I-prepare-to-answer-design-questions-in-a-technical-interview?redirected_qid=1500023) (Como Eu Me Preparo Para Responder Questõs De Design De Sistemas Em Uma Entrevista Técnica)
- [ ] [8 Things You Need to Know Before a System Design Interview](http://blog.gainlo.co/index.php/2015/10/22/8-things-you-need-to-know-before-system-design-interviews/) (8 Coisas Que Você Precisa Saber Antes De Uma Entrevista De Design De Sistema)
- [ ] [Algorithm design](http://www.hiredintech.com/algorithm-design/) (Design de algoritmo)
- [ ] [Database Normalization - 1NF, 2NF, 3NF and 4NF (video)](https://www.youtube.com/watch?v=UrYLYV7WSHM) (Normalização de Banco de Dados - 1NF, 2NF, 3NF e 4NF - vídeo)
- [ ] [System Design Interview](https://github.com/checkcheckzz/system-design-interview) (Entrevista de Design de Sistema) - Tem vários recursos nesse aqui. Olhe os artigos e exemplos. Eu coloquei alguns deles abaixo.
- [ ] [How to ace a systems design interview](http://www.palantir.com/2011/10/how-to-rock-a-systems-design-interview/) (Como tirar de letra um entrevista de design de sistemas)
- [ ] [Numbers Everyone Should Know](http://everythingisdata.wordpress.com/2009/10/17/numbers-everyone-should-know/) (Números Que Todos Devem Conhecer)
- [ ] [How long does it take to make a context switch?](http://blog.tsunanet.net/2010/11/how-long-does-it-take-to-make-context.html) (Quanto tempo leva para fazer uma troca de contexto?)
- [ ] [Transactions Across Datacenters (video)](https://www.youtube.com/watch?v=srOgpXECblk) (Transações Através de Datacenters - vídeo)
- [ ] [A plain English introduction to CAP Theorem](http://ksat.me/a-plain-english-introduction-to-cap-theorem/) (Uma introdução à Teorema CAP em Inglês simples)
- [ ] Algoritmo de Consenso de Paxos:
    - [vídeo curto](https://www.youtube.com/watch?v=s8JqcZtvnsM)
    - [vídeo mais extenso com exemplos de uso e multi-paxos](https://www.youtube.com/watch?v=JEpsBg0AO6o)
    - [artigo](http://research.microsoft.com/en-us/um/people/lamport/pubs/paxos-simple.pdf)
- [ ] [Consistent Hashing](http://www.tom-e-white.com/2007/11/consistent-hashing.html) (Hashing Consistente)
- [ ] [Padrões de NoSQL](http://horicky.blogspot.com/2009/11/nosql-patterns.html)
- [ ] Escalabilidade:
    - [ ] [Ótima visão geral (vídeo)](https://www.youtube.com/watch?v=-W9F__D3oY4)
    - [ ] Série curta:
        - [Clones](http://www.lecloud.net/post/7295452622/scalability-for-dummies-part-1-clones)
        - [Banco de Dados](http://www.lecloud.net/post/7994751381/scalability-for-dummies-part-2-database)
        - [Cache](http://www.lecloud.net/post/9246290032/scalability-for-dummies-part-3-cache)
        - [Assincronismo](http://www.lecloud.net/post/9699762917/scalability-for-dummies-part-4-asynchronism)
    - [ ] [Scalable Web Architecture and Distributed Systems](http://www.aosabook.org/en/distsys.html) (Sistemas Distribuídos e Arquitetura Web Escaláveis)
    - [ ] [Fallacies of Distributed Computing Explained](https://pages.cs.wisc.edu/~zuyu/files/fallacies.pdf) (Falácias de Computação Distribuída Explicadas)
    - [ ] [Pragmatic Programming Techniques](http://horicky.blogspot.com/2010/10/scalable-system-design-patterns.html) (Técnicas Pragmáticas de Programação)
        - [extra: Google Pregel Graph Processing](http://horicky.blogspot.com/2010/07/google-pregel-graph-processing.html) (extra: Processador de Grafos Pregel da Google)
    - [ ] [Jeff Dean - Building Software Systems At Google and Lessons Learned (video)](https://www.youtube.com/watch?v=modXC5IWTJI) (Jeff Dean - Construindo Sistemas de Software Na Google e Lições Aprendidas - vídeo)
    - [ ] [Introduction to Architecting Systems for Scale](http://lethain.com/introduction-to-architecting-systems-for-scale/) (Introdução à Arquitetando SIstemas para Escalar)
    - [ ] [Scaling mobile games to a global audience using App Engine and Cloud Datastore (video)](https://www.youtube.com/watch?v=9nWyWwY2Onc) (Escalando jogos mobile para uma audiência global usando App Engine e Armazenamento de Dados na Nuvem - vídeo)
    - [ ] [How Google Does Planet-Scale Engineering for Planet-Scale Infra (video)](https://www.youtube.com/watch?v=H4vMcD7zKM0) (Como a Google faz Engenharia de Escala-Global para Infraestrutura de Escala Global - vídeo)
    - [ ] [The Importance of Algorithms](https://www.topcoder.com/community/data-science/data-science-tutorials/the-importance-of-algorithms/) (A Importância de Algoritmos)
    - [ ] [Sharding](http://highscalability.com/blog/2009/8/6/an-unorthodox-approach-to-database-design-the-coming-of-the.html)
    - [ ] [Scale at Facebook (2009)](https://www.infoq.com/presentations/Scale-at-Facebook) (Escalabilidade no Facebook - 2009)
    - [ ] [Scale at Facebook (2012), "Building for a Billion Users" (video)](https://www.youtube.com/watch?v=oodS71YtkGU) (Escalabilidade no Facebook - 2012, "Construindo para Bilhões de Usuários" - vídeo)
    - [ ] [Engineering for the Long Game - Astrid Atkinson Keynote(video)](https://www.youtube.com/watch?v=p0jGmgIrf_M&list=PLRXxvay_m8gqVlExPC5DG3TGWJTaBgqSA&index=4) (Engenharia à longo prazo - Ideia Central de Astrid Atkinson - vídeo)
    - [ ] [7 Years Of YouTube Scalability Lessons In 30 Minutes](http://highscalability.com/blog/2012/3/26/7-years-of-youtube-scalability-lessons-in-30-minutes.html) (7 Anos de Lições de Escalabilidade do YouTube em 30 minutos)
        - [vídeo](https://www.youtube.com/watch?v=G-lGCC4KKok)
    - [ ] [How PayPal Scaled To Billions Of Transactions Daily Using Just 8VMs](http://highscalability.com/blog/2016/8/15/how-paypal-scaled-to-billions-of-transactions-daily-using-ju.html) (Como PayPal Escalou Para BIlhões De Transações Diárias Usando Apenas 8 Máquinas Virtuais)
    - [ ] [How to Remove Duplicates in Large Datasets](https://blog.clevertap.com/how-to-remove-duplicates-in-large-datasets/) (Como Remover Duplicatas em Grandes Conjuntos de Dados)
    - [ ] [A look inside Etsy's scale and engineering culture with Jon Cowie (video)](https://www.youtube.com/watch?v=3vV4YiqKm1o) (Uma olhada por dentro da cultura de engenharia e escala da Etsy com Jon Cowie - vídeo)
    - [ ] [What Led Amazon to its Own Microservices Architecture](http://thenewstack.io/led-amazon-microservices-architecture/) (O Que Levou a Amazon à ter a Própria Arquitetura de Microserviços)
    - [ ] [To Compress Or Not To Compress, That Was Uber's Question](https://eng.uber.com/trip-data-squeeze/) (Comprimir Ou Não Comprimir, Essa Era A Questão Para A Uber)
    - [ ] [Asyncio Tarantool Queue, Get In The Queue](http://highscalability.com/blog/2016/3/3/asyncio-tarantool-queue-get-in-the-queue.html) (Fila Asyncio Tarantool, Entre Na Fila)
    - [ ] [When Should Approximate Query Processing Be Used?](http://highscalability.com/blog/2016/2/25/when-should-approximate-query-processing-be-used.html) (Quando Processamento de Consultas Aproximado Deve Ser Usado?)
    - [ ] [Google's Transition From Single Datacenter, To Failover, To A Native Multihomed Architecture]( http://highscalability.com/blog/2016/2/23/googles-transition-from-single-datacenter-to-failover-to-a-n.html) (Transição da Google de um Único Datacenter, Para Um Failover (tolerância à falhas), Para Uma Arquitetura Nativa Multihomed (ou Multiconectada))
    - [ ] [Spanner](http://highscalability.com/blog/2012/9/24/google-spanners-most-surprising-revelation-nosql-is-out-and.html)
    - [ ] [Egnyte Architecture: Lessons Learned In Building And Scaling A Multi Petabyte Distributed System](http://highscalability.com/blog/2016/2/15/egnyte-architecture-lessons-learned-in-building-and-scaling.html) (Arquitetura Egnyte: Lições Aprendidas Ao Construir E Escalar Uma Sistema Distribuído de Múltiplos Petabytes)
    - [ ] [Machine Learning Driven Programming: A New Programming For A New World](http://highscalability.com/blog/2016/7/6/machine-learning-driven-programming-a-new-programming-for-a.html) (Programação Orientada por Aprendizado de Máquina: Uma Nova Programação Para Um Novo Mundo)
    - [ ] [The Image Optimization Technology That Serves Millions Of Requests Per Day](http://highscalability.com/blog/2016/6/15/the-image-optimization-technology-that-serves-millions-of-re.html) (A Tecnologia De Otimização De Imagem Que Atende Milhões de Solicitações Por Dia)
    - [ ] [A Patreon Architecture Short](http://highscalability.com/blog/2016/2/1/a-patreon-architecture-short.html) (Arquitetura Patreon Resumida)
    - [ ] [Tinder: How Does One Of The Largest Recommendation Engines Decide Who You'll See Next?](http://highscalability.com/blog/2016/1/27/tinder-how-does-one-of-the-largest-recommendation-engines-de.html) (Tinder: Como Um Dos Maiores Motores de Recomendação Decide A Próxima Pessoa Que Você Vai Ver?)
    - [ ] [Design Of A Modern Cache](http://highscalability.com/blog/2016/1/25/design-of-a-modern-cache.html) (Design De Um Cache Moderno)
    - [ ] [Live Video Streaming At Facebook Scale](http://highscalability.com/blog/2016/1/13/live-video-streaming-at-facebook-scale.html) (Stream Ao Vivo Ao Nível De Escala Do Facebook)
    - [ ] [A Beginner's Guide To Scaling To 11 Million+ Users On Amazon's AWS](http://highscalability.com/blog/2016/1/11/a-beginners-guide-to-scaling-to-11-million-users-on-amazons.html) (Uma Guia de Iniciante Para Escalar Para Mais De 11 Milhões De Usuários No AWS Da Amazon)
    - [ ] [How Does The Use Of Docker Effect Latency?](http://highscalability.com/blog/2015/12/16/how-does-the-use-of-docker-effect-latency.html) (Como O Uso de Docker Afeta Latência?)
    - [ ] [Does AMP Counter An Existential Threat To Google?](http://highscalability.com/blog/2015/12/14/does-amp-counter-an-existential-threat-to-google.html) (A AMP Contesta Uma Ameaça Existencial à Google?)
    - [ ] [A 360 Degree View Of The Entire Netflix Stack](http://highscalability.com/blog/2015/11/9/a-360-degree-view-of-the-entire-netflix-stack.html) (Uma Visão Em 360 Graus De Todo O Stack Da Netflix)
    - [ ] [Latency Is Everywhere And It Costs You Sales - How To Crush It](http://highscalability.com/latency-everywhere-and-it-costs-you-sales-how-crush-it) (Latência Está Em Todo Lugar E Ela Te Custa Vendas - Como Acabar Com Ela)
    - [ ] [Serverless (bem longo, precisa apenas da essência)](http://martinfowler.com/articles/serverless.html) (Sem Servidor)
    - [ ] [What Powers Instagram: Hundreds of Instances, Dozens of Technologies](http://instagram-engineering.tumblr.com/post/13649370142/what-powers-instagram-hundreds-of-instances) (O Que Alimenta O Instagram: Centenas de Instâncias, Dezenas de Tecnologias)
    - [ ] [Cinchcast Architecture - Producing 1,500 Hours Of Audio Every Day](http://highscalability.com/blog/2012/7/16/cinchcast-architecture-producing-1500-hours-of-audio-every-d.html) (Arquitetura Cinchcast - Produzindo 1.500 Horas De Áudio Todo Dia)
    - [ ] [Justin.Tv's Live Video Broadcasting Architecture](http://highscalability.com/blog/2010/3/16/justintvs-live-video-broadcasting-architecture.html) (Arquitetura de Transmissão de Vídeo Ao Vivo da Justin.TV)
    - [ ] [Playfish's Social Gaming Architecture - 50 Million Monthly Users And Growing](http://highscalability.com/blog/2010/9/21/playfishs-social-gaming-architecture-50-million-monthly-user.html) (Arquitetura de Gaming Social da Playfish - 50 Milhões De Usuários Mensais E Crescendo)
    - [ ] [TripAdvisor Architecture - 40M Visitors, 200M Dynamic Page Views, 30TB Data](http://highscalability.com/blog/2011/6/27/tripadvisor-architecture-40m-visitors-200m-dynamic-page-view.html) (Arquitetura do TripAdvisor - 40M visitantes, 200M Visualizações de Páginas Dinâmicas, 30TB de Dados)
    - [ ] [PlentyOfFish Architecture](http://highscalability.com/plentyoffish-architecture) (Arquitetura do PlentyOfFish)
    - [ ] [Salesforce Architecture - How They Handle 1.3 Billion Transactions A Day](http://highscalability.com/blog/2013/9/23/salesforce-architecture-how-they-handle-13-billion-transacti.html) (Arquitetura do Salesforce - Como Eles Lidam Com 1,3 Bilhões de Transações Por Dia)
    - [ ] [ESPN's Architecture At Scale - Operating At 100,000 Duh Nuh Nuhs Per Second](http://highscalability.com/blog/2013/11/4/espns-architecture-at-scale-operating-at-100000-duh-nuh-nuhs.html) (Arquitetura da ESPN em Escala - Operando a 100.000 Duh Nuh Nuhs Por Segundo)
    - [ ] Veja a seção "Envio de Mensagens, Serialização, e Sistemas de Enfileiramento" bem abaixo para informações sobre algumas das tecnologias que podem "colar" serviços juntos
    - [ ] Twitter:
        - [O'Reilly MySQL CE 2011: Jeremy Cole, "Big and Small Data at @Twitter" (video)](https://www.youtube.com/watch?v=5cKTP36HVgI) (O'Reilly MySQL CE 2011: Jeremy Cole, "Dados Grandes e Pequenos no @Twitter" - vídeo)
        - [Timelines at Scale](https://www.infoq.com/presentations/Twitter-Timeline-Scalability) (Linhas de Tempo em Escala)
    - Para ainda mais informações, veja a série de vídeos "Minerando Conjuntos de Dados Massivos" na seção de [Séries de Vídeos](#séries-de-vídeos).
- [ ] Praticando o processo de design de sistema: Aqui estão algumas ideias para tentar trabalhar no papel, cada uma com documentação sobre como ela foi tratada no mundo real:
    - revisão: [The System Design Primer](https://github.com/donnemartin/system-design-primer) (A Base de Design de Sistema)
    - [System Design from HiredInTech](http://www.hiredintech.com/system-design/) (Design de Sistema, por HiredInTech)
    - [cheat sheet](https://github.com/jwasham/coding-interview-university/blob/master/extras/cheat%20sheets/system-design.pdf) (folha de consultas)
    - fluxo:
        1. Compreenda o problema e seu escopo:
            - defina os casos de uso, com a ajuda do entrevistador
            - sugira funcionalidades adicionais
            - remova itens que o entrevistador considera fora de escopo
            - assuma que alta disponibilidade é requisitada, adicione como um caso de uso
        2. Pense sobre as restrições:
            - pergunte quantas solicitações por mês
            - pergunte quantas solicitações por segundo (eles podem se voluntariar para essa ou estimular você a fazer os cálculos)
            - estime a percentagem de leituras vs. escritas
            - tenha a regra 80/20 em mente quando estiver estimando
            - quantos dados escritos por segundo
            - armazenamento total necessário para 5 anos
            - quantos dados lidos por segundo
        3. Design abstrato:
            - camadas (serviço, dados, caching)
            - infraestrutura: balanço de carga, envio de mensagens
            - breve descrição de qualquer algoritmo chave que movimenta o serviço
            - considere possíveis gargalos (bottleneck) e determine soluções
    - Exercícios:
        - [Design a CDN network: old article](http://repository.cmu.edu/cgi/viewcontent.cgi?article=2112&context=compsci) (Projete uma rede CDN: artigo antigo)
        - [Design a random unique ID generation system](https://blog.twitter.com/2010/announcing-snowflake) (Projete um sistema de geração IDs únicos aleatórios)
        - [Design an online multiplayer card game](http://www.indieflashblog.com/how-to-create-an-asynchronous-multiplayer-game.html) (Projete um jogo de cartas de multijogadores online)
        - [Design a key-value database](http://www.slideshare.net/dvirsky/introduction-to-redis) (Projete um banco de dados de chave-valor)
        - [Design a picture sharing system](http://highscalability.com/blog/2011/12/6/instagram-architecture-14-million-users-terabytes-of-photos.html) (Projete um sistema de compartilhamento de fotos)
        - [Design a recommendation system](http://ijcai13.org/files/tutorial_slides/td3.pdf) (Projete um sistema de recomendação)
        - [Design a URL-shortener system: copied from above](http://www.hiredintech.com/system-design/the-system-design-process/) (Projete um sistema de encurtador de URL: copiado de cima)
        - [Design a cache system](https://www.adayinthelifeof.nl/2011/02/06/memcache-internals/) (Projete um sistema de cache)

---

## Revisão Final

    Essa seção terá vídeos mais curtos que você pode assistir rapidamente para revisar a maioria dos conceitos importantes.
    É legal se você quiser dar uma refrescada na memória.

- [ ] Séries de vídeos curtos (2 - 3 minutos) sobre o assunto (23 vídeos)
    - [Vídeos](https://www.youtube.com/watch?v=r4r1DZcx1cM&list=PLmVb1OknmNJuC5POdcDv5oCS7_OUkDgpj&index=22)
- [ ] Séries de vídeos curtos (2 - 5 minutos) sobre o assunto - Michael Sambol (18 vídeos):
    - [Vídeos](https://www.youtube.com/channel/UCzDJwLWoYCUQowF_nG3m5OQ)
- [ ] [Sedgewick Videos - Algorithms I](https://www.youtube.com/user/algorithmscourses/playlists?shelf_id=2&view=50&sort=dd) (Vídeos de Sedgewick - Algoritmos I)
    - [ ] [01. Union-Find](https://www.youtube.com/watch?v=8mYfZeHtdNc&list=PLe-ggMe31CTexoNYnMhbHaWhQ0dvcy43t)
    - [ ] [02. Analysis of Algorithms](https://www.youtube.com/watch?v=ZN-nFW0mEpg&list=PLe-ggMe31CTf0_bkOhh7sa5uqeppp3Sr0) (Análises de Algoritmos)
    - [ ] [03. Stacks and Queues](https://www.youtube.com/watch?v=TIC1gappbP8&list=PLe-ggMe31CTe-9jhnj3P_3mmrCh0A7iHh) (Memórias Estáticas e Filas)
    - [ ] [04. Elementary Sorts](https://www.youtube.com/watch?v=CD2AL6VO0ak&list=PLe-ggMe31CTe_5WhGV0F--7CK8MoRUqBd) (Ordenações Elementares)
    - [ ] [05. Mergesort](https://www.youtube.com/watch?v=4nKwesx_c8E&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9)
    - [ ] [06. Quicksort](https://www.youtube.com/watch?v=5M5A7qPWk84&list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1)
    - [ ] [07. Priority Queues](https://www.youtube.com/watch?v=G9TMe0KC0w0&list=PLe-ggMe31CTducy9LDiGVkdSv0NfiRwn5) (Filas Prioritárias)
    - [ ] [08. Elementary Symbol Tables](https://www.youtube.com/watch?v=up_nlilw3ac&list=PLe-ggMe31CTc3a8nKRDxFZZrWrBvkc9SG) (Tabelas de Símbolos Elementares)
    - [ ] [09. Balanced Search Trees](https://www.youtube.com/watch?v=qC1BLLPK_5w&list=PLe-ggMe31CTf7jHH_mFT50kayjCEA6Rhu) (Árvores de Busca Balanceadas)
    - [ ] [10. Geometric Applications of BST](https://www.youtube.com/watch?v=Wl30aGAp6TY&list=PLe-ggMe31CTdBsRIw0hXln0hilRs-DqAx) (Aplicações Geométricas de Árvores de Busca Balanceada)
    - [ ] [11. Hash Tables](https://www.youtube.com/watch?v=QA8fJGO-i9o&list=PLe-ggMe31CTcKxIRGqqThMts2eHtSrf11) (Tabelas Hash)
- [ ] [Sedgewick Videos - Algorithms II](https://www.youtube.com/user/algorithmscourses/playlists?flow=list&shelf_id=3&view=50) (Vídeos de Sedgewick - Algoritmos II)
    - [ ] [01. Undirected Graphs](https://www.youtube.com/watch?v=GmVhD-mmMBg&list=PLe-ggMe31CTc0zDzANxl4I2MhMoRVlbRM) (Grafos Não Direcionados)
    - [ ] [02. Directed Graphs](https://www.youtube.com/watch?v=_z-JsVaUS40&list=PLe-ggMe31CTcEwaU8a1P1Gd95A77HV85K) (Grafos Direcionados)
    - [ ] [03. Minimum Spanning Trees](https://www.youtube.com/watch?v=t8fNk9tfVYY&list=PLe-ggMe31CTceUZxDesGfHGLE7kcSafqj) (Árvores de Extensão Mínima)
    - [ ] [04. Shortest Paths](https://www.youtube.com/watch?v=HoGSiB7tSeI&list=PLe-ggMe31CTePpG3jbeOTsnGUGZDKxgZD) (Menores Caminhos)
    - [ ] [05. Maximum Flow](https://www.youtube.com/watch?v=rYIKlFstBqE&list=PLe-ggMe31CTduQ68XQ-sVj32wYJIspTma) (Fluxo Máximo)
    - [ ] [06. Radix Sorts](https://www.youtube.com/watch?v=HKPrVm5FWvg&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53) (Ordenações Radix)
    - [ ] [07. Tries](https://www.youtube.com/watch?v=00YaFPcC65g&list=PLe-ggMe31CTe9IyG9MB8vt5xUJeYgOYRQ) (Árvore de Prefixos)
    - [ ] [08. Substring Search](https://www.youtube.com/watch?v=QzI0p6zDjK4&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66) (Busca de Substring)
    - [ ] [09. Regular Expressions](https://www.youtube.com/watch?v=TQWNQsJSPnk&list=PLe-ggMe31CTetTlJWouM42fyttyKPgSDh) (Expressões Regulares)
    - [ ] [10. Data Compression](https://www.youtube.com/watch?v=at9tjpxcBh8&list=PLe-ggMe31CTciifRRo6yY0Yt0mzgIXXVZ) (Compressão de Dados)
    - [ ] [11. Reductions](https://www.youtube.com/watch?v=Ow5x-ooMGv8&list=PLe-ggMe31CTe_yliW5vc3yO-dj1LSSDyF) (Reduções)
    - [ ] [12. Linear Programming](https://www.youtube.com/watch?v=rWhcLyiLZLA&list=PLe-ggMe31CTdy6dKzMgkWFuTTN1H8B-E1) (Programação Linear)
    - [ ] [13. Intractability](https://www.youtube.com/watch?v=6qcaaDp4cdQ&list=PLe-ggMe31CTcZCjluBHw53e_ek2k9Kn-S) (Intratabilidade)

---

## Prática com Questões de Programação

Agora que você sabe todos os temas de Ciência da Computação acima, é hora de praticar respondendo problemas de programação.

**Prática com Questõs de Programação não é sobre memorizar respostas para problemas de programação.**

Por que você precisa praticar com problemas de programação:
- reconhecimento de problemas, e onde as devidas estruturas de dados e algoritmos se encaixam
- coleta de requerimentos para o problema
- pensar alto (falar enquanto resolve o problema) assim como você irá fazer em uma entrevista
- escrever código em um quadro branco ou papel, não no computador
- encontrar complexidade de espaço e tempo para suas soluções
- testar suas soluções

Tem uma introdução ótima para resolução de problema metódica e comunicativa em uma entrevista. Você vai adquirir isso dos livros de
entrevista de programação, também, mas eu acho isso aqui excelente:
[Algorithm design canvas](http://www.hiredintech.com/algorithm-design/) (Quadro de design de algoritmo)

Não tem quadro branco em casa? Faz sentido. Eu sou um estranho e tenho um grande quadro branco. Ao invés de um quadro branco, pegue um
grande caderno de desenho de uma loja de arte. Você pode sentar no sofá e praticar. Esse é o meu "sofá de quadro branco".
Eu adicionei a caneta na foto para comparação de dimensões. Se você usar uma caneta, você vai desejar que você pudesse apagar. Fica uma bagunça bem rápido.

 ![meu sofá de quadro branco](https://dng5l3qzreal6.cloudfront.net/2016/Oct/art_board_sm_2-1476233630368.jpg)

Suplementar:

- [Mathematics for Topcoders](https://www.topcoder.com/community/data-science/data-science-tutorials/mathematics-for-topcoders/) (Matemática para Topcoders)
- [Dynamic Programming – From Novice to Advanced](https://www.topcoder.com/community/data-science/data-science-tutorials/dynamic-programming-from-novice-to-advanced/) (Programação Dinâmica - De Novato a Avançado)
- [MIT Interview Materials](https://web.archive.org/web/20160906124824/http://courses.csail.mit.edu/iap/interview/materials.php) (Materiais de Entrevista do MIT)
- [Exercises for getting better at a given language](http://exercism.io/languages) (Exercícios para ficar melhor em uma determinada linguagem)

**Leia e Faça os Problemas de Programação (nessa ordem):**

- [ ] [Programming Interviews Exposed: Secrets to Landing Your Next Job, 2nd Edition](http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html) (Entrevistas de Programação Expostas: Segredos para Conseguir Seu Próximo Emprego, 2ª Edição)
    - respostas em C, C++ e Java
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/) (Decifrando a Entrevista de Programação, 6ª Edição)
    - respostas em Java

Veja a [Lista de Livros acima](#lista-de-livros)

## Exercícios/desafios de programação

Depois que você enche o cérebro com novos aprendizados, é hora de botar ele para trabalhar.
Faça desafios de programação todo dia, o máximo que você puder.

- [ ] [How to Find a Solution](https://www.topcoder.com/community/data-science/data-science-tutorials/how-to-find-a-solution/) (Como Encontrar Uma Solução)
- [ ] [How to Dissect a Topcoder Problem Statement](https://www.topcoder.com/community/data-science/data-science-tutorials/how-to-dissect-a-topcoder-problem-statement/) (Como Dissecar Uma Declaração em um Problema do TopCoder)

Vídeos de Questões de Entrevista de Programação:
- [IDeserve (88 vídeos)](https://www.youtube.com/watch?v=NBcqBddFbZw&list=PLamzFoFxwoNjPfxzaWqs7cZGsPYy0x_gI)
- [Tushar Roy (5 playlists)](https://www.youtube.com/user/tusharroy2525/playlists?shelf_id=2&view=50&sort=dd)

Websites de desafios:
- [LeetCode](https://leetcode.com/)
- [TopCoder](https://www.topcoder.com/)
- [Project Euler (focado em matemática)](https://projecteuler.net/index.php?section=problems)
- [Codewars](http://www.codewars.com)
- [HackerEarth](https://www.hackerearth.com/)
- [HackerRank](https://www.hackerrank.com/)
- [Codility](https://codility.com/programmers/)
- [InterviewCake](https://www.interviewcake.com/)
- [Geeks for Geeks](http://www.geeksforgeeks.org/)
- [InterviewBit](https://www.interviewbit.com/invite/icjf)
- [Sphere Online Judge (spoj)](http://www.spoj.com/)

Repositórios de desafios:
- [Interactive Coding Interview Challenges in Python](https://github.com/donnemartin/interactive-coding-challenges) (Desafios Interativos de Entrevista de Programação em Python)

Entrevistas Simuladas:
- [Gainlo.co: Entrevistas simuladas com entrevistadores de grandes empresas](http://www.gainlo.co/)
- [Pramp: Entrevistas simuladas com colegas](https://www.pramp.com/)
- [Refdash: Entrevistas simuladas](https://refdash.com/)

## Quando a entrevista estiver se aproximando

- [ ] Decifrando A Entrevista De Programação Série 2 (vídeos):
    - [Cracking The Code Interview](https://www.youtube.com/watch?v=4NIb9l3imAo) (Decifrando A Entrevista De Programação)
    - [Cracking the Coding Interview - Fullstack Speaker Series](https://www.youtube.com/watch?v=Eg5-tdAwclo) (Decifrando A Entrevista De Programação - Série Palestrantes Fullstack)

## Seu Currículo

- Veja itens sobre preparo de currículo em "Cracking The Coding Interview" (Decifrando A Entrevista De Programação) e atrás do livro "Programming Interviews Exposed" (Entrevistas de Programação Expostas)


## Esteja pensando à respeito para quando a entrevista chegar

Pense em 20 questões da entrevista que você vai ter, seguindo a linha de raciocínio dos itens abaixo. Tenha 2-3 respostas para cada.
Tenha uma história, não apenas dados, sobre algo que você realizou.

- Por que você quer esse trabalho?
- Qual um problema difícil que você tenha resolvido?
- Maiores desafios enfrentados?
- Melhores/piores designs que você já viu?
- Ideias para melhorar um produto existente.
- Como você trabalha melhor, como um indivíduo e como parte de uma equipe?
- Quais das suas habilidades ou experiências seriam recursos úteis na função e por quê?
- O que você mais gostou no [trabalho x / projeto y]?
- Qual foi o maior desafio que você enfrentou no [trabalho x / projeto y]?
- Qual foi o bug mais difícil que você enfrentou no [trabalho x / projeto y]?
- O que você aprendeu no [trabalho x / projeto y]?
- O que você teria feito melhor no [trabalho x / projeto y]?

## Tenha questões para o entrevistador

    Algumas das minhas (eu posso já saber a resposta, mas o quero a opinião deles ou a perspectiva da equipe):

- Quão grande é sua equipe?
- Como é o seu ciclo de desenvolvimento? Você trabalha com modelo em cascata (waterfall)/sprints/método ágil (agile)?
- Correrias por causa de prazos são comuns? Ou tem flexibilidade?
- Como as decisões são tomadas na sua equipe?
- Quantas reuniões você tem por semana?
- Você sente que o seu ambiente de trabalho te ajuda a se concentrar?
- No que você está trabalhando?
- O que você gosta a respeito desse trabalho?
- Como é o balanço vida-trabalho?

## Quando Você Conseguir O Trabalho

Parabéns!

Continue aprendendo.

O aprendizado nunca para.

---

    *****************************************************************************************************
    *****************************************************************************************************

    Tudo abaixo deste ponto é opcional.
    Ao estudar o que vem a seguir, você vai ter maior exposição a mais conceitos de Ciência da Computação, e está mais bem preparado para 
    qualquer trabalho de engenharia de software. Você será um engenheiro de software muito mais completo.

    *****************************************************************************************************
    *****************************************************************************************************

---

## Livros Adicionais

- [ ] [The Unix Programming Environment](http://product.half.ebay.com/The-UNIX-Programming-Environment-by-Brian-W-Kernighan-and-Rob-Pike-1983-Other/54385&tg=info) (O Ambiente De Programação Unix)
    - velho, mas ótimo
- [ ] [The Linux Command Line: A Complete Introduction](https://www.amazon.com/dp/1593273894/) (A Linha De Comando do Linux: Uma Introdução Completa)
    - uma opção moderna
- [ ] [TCP/IP Illustrated Series](https://en.wikipedia.org/wiki/TCP/IP_Illustrated) (Série TCP/IP Ilustrado)
- [ ] [Head First Design Patterns](https://www.amazon.com/gp/product/0596007124/) (Padrões de Design "Head First")
    - uma introdução gentil a padrões de design
- [ ] [Design Patterns: Elements of Reusable Object-Oriente​d Software](https://www.amazon.com/Design-Patterns-Elements-Reusable-Object-Oriented/dp/0201633612) (Padrões de Design: Elementos de Software Orientado a Objetos Reutilizável)
    - também conhecido como o livro "Gang Of Four" (ou GOF, em Português Gangue Dos Quatro)
    - o livro de padrões de design canônico
- [ ] [UNIX and Linux System Administration Handbook, 4th Edition](https://www.amazon.com/UNIX-Linux-System-Administration-Handbook/dp/0131480057/) (Manual de Administração de Sistema do UNIX e Linux, 4ª Edição)

## Aprendizagem Adicional

Esses tópicos provavelmente não aparecerão em uma entrevista, mas eu adicionei eles para ajudar você a se tornar um engenheiro de software mais completo, e para você ficar ciente de certas tecnologias e algoritmos, assim você terá mais ferramentas a disposição.

- ### Compiladores
    - [ ] [How a Compiler Works in ~1 minute (video)](https://www.youtube.com/watch?v=IhC7sdYe-Jg) (Como um Compilador Funciona em ~1 minuto - vídeo)
    - [ ] [Harvard CS50 - Compilers (video)](https://www.youtube.com/watch?v=CSZLNYF4Klo) (Harvard CS50 - Compiladores - vídeo)
    - [ ] [C++ (vídeo)](https://www.youtube.com/watch?v=twodd1KFfGk)
    - [ ] [Understanding Compiler Optimization (C++) (video)](https://www.youtube.com/watch?v=FnGCDLhaxKU) (Entendendo Otimização de Compilador (C++) - vídeo)

- ### Emacs e vi(m)
    - Se familiarize com um editor de código baseado em unix
    - vi(m):
        - [Editing With vim 01 - Installation, Setup, and The Modes (video)](https://www.youtube.com/watch?v=5givLEMcINQ&index=1&list=PL13bz4SHGmRxlZVmWQ9DvXo1fEg4UdGkr) (Editando Com vim 01 - Instalação, Setup, e Os Modos - vídeo)
        - [VIM Adventures](http://vim-adventures.com/) (Aventuras em VIM)
        - conjunto de 4 vídeos:
            - [The vi/vim editor - Lesson 1](https://www.youtube.com/watch?v=SI8TeVMX8pk) (O editor vi/vim - Lição 1)
            - [The vi/vim editor - Lesson 2](https://www.youtube.com/watch?v=F3OO7ZIOaJE) (O editor vi/vim - Lição 2)
            - [The vi/vim editor - Lesson 3](https://www.youtube.com/watch?v=ZYEccA_nMaI) (O editor vi/vim - Lição 3)
            - [The vi/vim editor - Lesson 4](https://www.youtube.com/watch?v=1lYD5gwgZIA) (O editor vi/vim - Lição 4)
        - [Using Vi Instead of Emacs](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Using_Vi_instead_of_Emacs) (Usando Vi Ao Invés de Emacs)
    - emacs:
        - [Basics Emacs Tutorial (video)](https://www.youtube.com/watch?v=hbmV1bnQ-i0) (Tutorial Básico de Emas - vídeo)
        - conjunto de 3 (vídeos):
            - [Emacs Tutorial (Beginners) -Part 1- File commands, cut/copy/paste, cursor commands](https://www.youtube.com/watch?v=ujODL7MD04Q) (Tutorial de Emacs (Iniciantes) - Parte 1 - Comandos de Arquivo, cortar/copiar/colar, comandos de cursor)
            - [Emacs Tutorial (Beginners) -Part 2- Buffer management, search, M-x grep and rgrep modes](https://www.youtube.com/watch?v=XWpsRupJ4II) (Tutorial de Emacs (Iniciantes) - Parte 2 - Gerenciamento de buffer, pesquisa, modos M-x grep e rgrep)
            - [Emacs Tutorial (Beginners) -Part 3- Expressions, Statements, ~/.emacs file and packages](https://www.youtube.com/watch?v=paSgzPso-yc) (Tutorial de Emacs (Iniciantes) - Parte 3 - Expressões, Declarações, arquivo ~/. emacs e pacotes)
        - [Evil Mode: Or, How I Learned to Stop Worrying and Love Emacs (video)](https://www.youtube.com/watch?v=JWD1Fpdd4Pc) (Modo Evil: Ou, Como Eu Aprendi A Parar De Me Preocupar E Amar O Emacs - vídeo)
        - [Writing C Programs With Emacs](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Writing_C_programs_with_Emacs) (Escrevendo Programas Em C Com Emacs)
        - [(maybe) Org Mode In Depth: Managing Structure (video)](https://www.youtube.com/watch?v=nsGYet02bEk) ((talvez) Análise Profunda do Modo Org: Gerenciando Estrutura - vídeo)

- ### Ferramentas de linha de comando do Unix
    - Eu preenchi a lista abaixo com boas ferramentas.
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

- ### Teoria da informação (vídeos)
    - [ ] [Khan Academy](https://www.khanacademy.org/computing/computer-science/informationtheory)
    - [ ] mais sobre os processos de Markov:
        - [ ] [Core Markov Text Generation](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/waxgx/core-markov-text-generation) (Fundamentos da Geração de Texto Markov)
        - [ ] [Core Implementing Markov Text Generation](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/gZhiC/core-implementing-markov-text-generation) (Fundamentos da Implementação de Geração de Texto Markov)
        - [ ] [Project = Markov Text Generation Walk Through](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/EUjrq/project-markov-text-generation-walk-through) (Projeto = Passo a Passo de Geração de Texto Markov)
    - Veja mais em MIT 6.050J Série: Informação e Entropia abaixo.

- ### Paridade e Código de Hamming (vídeos)
    - [ ] [Introdução](https://www.youtube.com/watch?v=q-3BctoUpHE)
    - [ ] [Paridade](https://www.youtube.com/watch?v=DdMcAUlxh1M)
    - [ ] Código de Hamming:
        - [Detecção de Erro](https://www.youtube.com/watch?v=1A_NcXxdoCc)
        - [Correção de Erro](https://www.youtube.com/watch?v=JAMLuxdHH8o)
    - [ ] [Verificação de Erro](https://www.youtube.com/watch?v=wbH2VxzmoZk)

- ### Entropia
    - veja também os vídeos abaixo
    - certifique-se de assistir os vídeos de teoria da informação primeiro
    - [ ] [Information Theory, Claude Shannon, Entropy, Redundancy, Data Compression & Bits (video)](https://youtu.be/JnJq3Py0dyM?t=176) (Teoria da Informação, Claude Shannon, Entropia, Redundância, Compressão de Dados e Bits - vídeo)

- ### Criptografia
    - veja também os vídeos abaixo
    - certifique-se de assistir os vídeos de teoria da informação primeiro
    - [ ] [Khan Academy Series](https://www.khanacademy.org/computing/computer-science/cryptography) (Série da Khan Academy)
    - [ ] [Cryptography: Hash Functions](https://www.youtube.com/watch?v=KqqOXndnvic&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=30) (Criptografia: Funções Hash)
    - [ ] [Cryptography: Encryption](https://www.youtube.com/watch?v=9TNI2wHmaeI&index=31&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp) (Criptografia: Encriptação)

- ### Compressão
    - certifique-se de assistir os vídeos de teoria da informação primeiro
    - [ ] Computerphile (vídeos):
        - [ ] [Compression](https://www.youtube.com/watch?v=Lto-ajuqW3w) (Compressão)
        - [ ] [Entropy in Compression](https://www.youtube.com/watch?v=M5c_RFKVkko) (Entropia em Compressão)
        - [ ] [Upside Down Trees (Huffman Trees)](https://www.youtube.com/watch?v=umTbivyJoiI) (Árvores de Cabeça para Baixo - Árvores Huffman)
        - [ ] [EXTRA BITS/TRITS - Huffman Trees](https://www.youtube.com/watch?v=DV8efuB3h2g) (BITS/TRITS - Árvores Huffman)
        - [ ] [Elegant Compression in Text (The LZ 77 Method)](https://www.youtube.com/watch?v=goOa3DGezUA) (Compressão Elegante em Texto - O Método LZ 77)
        - [ ] [Text Compression Meets Probabilities](https://www.youtube.com/watch?v=cCDCfoHTsaU) (Compressão de Texto e Probabilidades)
    - [ ] [Compressor Head videos](https://www.youtube.com/playlist?list=PLOU2XLYxmsIJGErt5rrCqaSGTMyyqNt2H) (Vídeos da Série Compressor Head)
    - [ ] [(opcional) Google Developers Live: GZIP is not enough!](https://www.youtube.com/watch?v=whGwm0Lky2s) (Google Developers Ao Vivo: GZIP não é suficiente)

- ### Segurança de Computador
    - [MIT (23 vídeos)](https://www.youtube.com/playlist?list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh)
        - [ ] [Introduction, Threat Models](https://www.youtube.com/watch?v=GqmQg-cszw4&index=1&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh) (Introdução, Modelos de Risco)
        - [ ] [Control Hijacking Attacks](https://www.youtube.com/watch?v=6bwzNg5qQ0o&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh&index=2) (Ataques que Conseguem Tomar Controle
        - [ ] [Buffer Overflow Exploits and Defenses](https://www.youtube.com/watch?v=drQyrzRoRiA&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh&index=3) (Defesas e Exploits de Buffer Overflow)
        - [ ] [Privilege Separation](https://www.youtube.com/watch?v=6SIJmoE9L9g&index=4&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh) (Separação de Privilégio)
        - [ ] [Capabilities](https://www.youtube.com/watch?v=8VqTSY-11F4&index=5&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh) (Capacidades)
        - [ ] [Sandboxing Native Code](https://www.youtube.com/watch?v=VEV74hwASeU&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh&index=6) (Isolando Código Nativo)
        - [ ] [Web Security Model](https://www.youtube.com/watch?v=chkFBigodIw&index=7&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh) (Modelo de Segurança Web)
        - [ ] [Securing Web Applications](https://www.youtube.com/watch?v=EBQIGy1ROLY&index=8&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh) (Protegendo Aplicações Web)
        - [ ] [Symbolic Execution](https://www.youtube.com/watch?v=yRVZPvHYHzw&index=9&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh) (Execução Simbólica)
        - [ ] [Network Security](https://www.youtube.com/watch?v=SIEVvk3NVuk&index=11&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh) (Segurança de Rede)
        - [ ] [Network Protocols](https://www.youtube.com/watch?v=QOtA76ga_fY&index=12&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh) (Protocolos de Rede)
        - [ ] [Side-Channel Attacks](https://www.youtube.com/watch?v=PuVMkSEcPiI&index=15&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh) (Ataques Side-Channel)

- ### Coleta de lixo
    - [ ] [Compilers (video)](https://www.youtube.com/playlist?list=PLO9y7hOkmmSGTy5z6HZ-W4k2y8WXF7Bff) (Compiladores - vídeo)
    - [ ] [GC in Python (video)](https://www.youtube.com/watch?v=iHVs_HkjdmI) (Coleta de lixo em Python - vídeo)
    - [ ] [Deep Dive Java: Garbage Collection is Good!](https://www.infoq.com/presentations/garbage-collection-benefits) (Mergulhando Fundo em Java: Coleta de Lixo é Bom)
    - [ ] [Deep Dive Python: Garbage Collection in CPython (video)](https://www.youtube.com/watch?v=P-8Z0-MhdQs&list=PLdzf4Clw0VbOEWOS_sLhT_9zaiQDrS5AR&index=3) (Mergulhando Fundo em Python: Coleta de Lixo em CPython - vídeo)

- ### Programação Paralela
    - [ ] [Coursera (Scala)](https://www.coursera.org/learn/parprog1/home/week/1)
    - [ ] [Efficient Python for High Performance Parallel Computing (video)](https://www.youtube.com/watch?v=uY85GkaYzBk) (Python Eficiente para Computação Paralela de Alto Desempenho - vídeo)

- ### Envio de Mensagens, Serialização, e Sistemas de Enfileiramento
    - [ ] [Thrift](https://thrift.apache.org/)
        - [Tutorial](http://thrift-tutorial.readthedocs.io/en/latest/intro.html)
    - [ ] [Protocol Buffers](https://developers.google.com/protocol-buffers/) (Buffers de Protocolo)
        - [Tutoriais](https://developers.google.com/protocol-buffers/docs/tutorials)
    - [ ] [gRPC](http://www.grpc.io/)
        - [gRPC 101 for Java Developers (video)](https://www.youtube.com/watch?v=5tmPvSe7xXQ&list=PLcTqM9n_dieN0k1nSeN36Z_ppKnvMJoly&index=1)
    - [ ] [Redis](http://redis.io/)
        - [Tutorial](http://try.redis.io/)
    - [ ] [Amazon SQS (fila)](https://aws.amazon.com/sqs/)
    - [ ] [Amazon SNS (pub-sub)](https://aws.amazon.com/sns/)
    - [ ] [RabbitMQ](https://www.rabbitmq.com/)
        - [Get Started](https://www.rabbitmq.com/getstarted.html) (Introdução)
    - [ ] [Celery](http://www.celeryproject.org/)
        - [First Steps With Celery](http://docs.celeryproject.org/en/latest/getting-started/first-steps-with-celery.html) (Primeiros Passos Com Celery)
    - [ ] [ZeroMQ](http://zeromq.org/)
        - [Intro - Read The Manual](http://zeromq.org/intro:read-the-manual) (Introdução - Leia O Manual)
    - [ ] [ActiveMQ](http://activemq.apache.org/)
    - [ ] [Kafka](http://kafka.apache.org/documentation.html#introduction)
    - [ ] [MessagePack](http://msgpack.org/index.html)
    - [ ] [Avro](https://avro.apache.org/)

- ### A*
    - [ ] [A Search Algorithm](https://en.wikipedia.org/wiki/A*_search_algorithm) (Um Algoritmo de Busca)
    - [ ] [A* Pathfinding Tutorial (video)](https://www.youtube.com/watch?v=KNXfSOx4eEE) (Tutorial de Busca de Caminho com A* - vídeo)
    - [ ] [A* Pathfinding (E01: algorithm explanation) (video)](https://www.youtube.com/watch?v=-L-WgKMFuhE) (Busca de Caminho com A* (E01 - explicação do algoritmo) - vídeo)

- ### Transformada de Fourier Rápida
    - [ ] [An Interactive Guide To The Fourier Transform](https://betterexplained.com/articles/an-interactive-guide-to-the-fourier-transform/) (Uma Guia Interativa Para A Transformada de Fourier)
    - [ ] [What is a Fourier transform? What is it used for?](http://www.askamathematician.com/2012/09/q-what-is-a-fourier-transform-what-is-it-used-for/) (O que é a Transformada de Fourier? Para o quê ela é usada?)
    - [ ] [What is the Fourier Transform? (video)](https://www.youtube.com/watch?v=Xxut2PN-V8Q) (O que é a Transformada de Fourier? - vídeo)
    - [ ] [Divide & Conquer: FFT (video)](https://www.youtube.com/watch?v=iTMn0Kt18tg&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=4) (Dividir e Conquistar: FFT (Transformada de Fourier Rápida) - vídeo)
    - [ ] [Understanding The FFT](http://jakevdp.github.io/blog/2013/08/28/understanding-the-fft/) (Entendendo a Transformada de Fourier Rápida)

- ### Filtro de Bloom
    - Dado um filtro de Bloom com m bits e k funções de hash, tanto inserção quanto teste de associação são O(k)
    - [Bloom Filters](https://www.youtube.com/watch?v=-SuTGoFYjZs) (Filtros de Bloom)
    - [Bloom Filters | Mining of Massive Datasets | Stanford University](https://www.youtube.com/watch?v=qBTdukbzc78) (Filtros de Bloom | Mineração de Conjuntos de Dados Massivos | Universidade de Stanford)
    - [Tutorial](http://billmill.org/bloomfilter-tutorial/)
    - [How To Write A Bloom Filter App](http://blog.michaelschmatz.com/2016/04/11/how-to-write-a-bloom-filter-cpp/) (Como Escrever Um Aplicativo De Filtro De Bloom)

- ### HyperLogLog
    - [How To Count A Billion Distinct Objects Using Only 1.5KB Of Memory](http://highscalability.com/blog/2012/4/5/big-data-counting-how-to-count-a-billion-distinct-objects-us.html) (Como Contar Um Bilhão De Objetos Distintos Usando Apenas 1,5KB De Memória)

- ### Locality-Sensitive Hashing
    - usado para determinar a similaridade de documentos
    - o oposto de MD5 ou SHA, os quais são usados para determinar se 2 documentos/strings são exatamente o mesmo.
    - [Simhashing (hopefully) made simple](http://ferd.ca/simhashing-hopefully-made-simple.html) (Simhashing (supostamente) simplificado)

- ### Árvores de van Emde Boas
    - [ ] [Divide & Conquer: van Emde Boas Trees (video)](https://www.youtube.com/watch?v=hmReJCupbNU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=6) (Dividir e Conquistar: Árvores van Emde Boas - vídeo)
    - [ ] [MIT Lecture Notes](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-046j-design-and-analysis-of-algorithms-spring-2012/lecture-notes/MIT6_046JS12_lec15.pdf) (Anotações de Aula do MIT)

- ### Estruturas de Dados Incrementadas
    - [ ] [CS 61B Lecture 39: Augmenting Data Structures](https://youtu.be/zksIj9O8_jc?list=PL4BBB74C7D2A1049C&t=950) (CS 61B Aula 39: Incrementando Estruturas de Dados)

- ### Árvores de busca balanceadas
    - Saiba pelo menos um tipo de árvore binária balanceada (e saiba como ela é implementada):
    - "Entre as Árvores de Busca Balanceadas, AVL e árvore 2/3 agora são passado, e árvores red-black (rubro-negras) parecem mais populares.
        Uma estrutura de dados auto-organizada particularmente interessante é a árvore splay, a qual usa rotações
        para mover qualquer chave acessada para a raiz."
    - Dessas, eu escolhi implementar a árvore splay. Com base no que eu li, você não vai implementar uma
        árvore de busca balanceada na sua entrevista. Mas eu queria uma certa exposição à programação de uma dessas árvoes
        e convenhamos, árvores splay são muito legais. Eu li muito código de árvores rubro-negras.
        - árvore splay: funções de inserir, buscar e deletar
        Se você acabar implementando uma árvore rubro-negra, tente apenas essas:
        - funções de busca e inserção, pulando a função de deletar
    - Eu quero aprender mais sobre a Árvore B, já que ela é amplamente usada com enormes conjuntos de dados.
    - [ ] [Self-balancing binary search tree](https://en.wikipedia.org/wiki/Self-balancing_binary_search_tree) (Árvore binária de busca auto-balanceada)

    - [ ] **Árvores AVL**
        - Ná prática:
            Pelo que eu vejo, essas não são muito usadas na prática, mas eu consigo ver onde elas seriam usadas:
            Á arvore AVL é outra estrutura que dá suporte a remoção, inserção e busca O(log n). Ela é mais rigidamente
            balanceada que as árvores rubro-negras, levando à inserções e remoções mais lentas, mas uma recuperação mais rápida. Isso faz dela
            um atrativo para estruturas de dados que podem ser construídas uma vez e carregadas sem reconstrução, assim como os dicionários de
            linguagem (ou dicionários de programas, como os opcodes de um montador (assembler) ou interpretador).
        - [ ] [MIT AVL Trees / AVL Sort (video)](https://www.youtube.com/watch?v=FNeL18KsWPc&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=6) (Árvores AVL / Ordenação AVL, pelo MIT - vídeo)
        - [ ] [AVL Trees (video)](https://www.coursera.org/learn/data-structures/lecture/Qq5E0/avl-trees) (Árvores AVl - vídeo)
        - [ ] [AVL Tree Implementation (video)](https://www.coursera.org/learn/data-structures/lecture/PKEBC/avl-tree-implementation) (Implementação de Árvores AVL - vídeo)
        - [ ] [Split And Merge](https://www.coursera.org/learn/data-structures/lecture/22BgE/split-and-merge) (Dividir e Fundir)

    - [ ] **Árvores Splay**
        - Ná prática:
            Árvores splay são normalmente usadas na implementação de caches, alocadores de memória, roteadores, coletores de lixo,
            compressão de dados, cordas (ou "ropes" no Inglês, que é uma estrutura de dados) (substituição de string usada para longas strings de texto), no Windows NT (em código de memória virtual,
            rede e sistema de arquivos) etc.
        - [ ] [CS 61B: Splay Trees (video)](https://www.youtube.com/watch?v=Najzh1rYQTo&index=23&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd) (CS 61B: Árvores Splay - vídeo)
        - [ ] Aula do MIT: Árvores Splay:
            - Fica bem intenso matematicamente, mas com certeza assista aos 10 últimos minutos.
            - [Vídeo](https://www.youtube.com/watch?v=QnPl_Y6EqMo)

    - [ ] **Árvores Rubro-Negras**
        - essas são uma tradução de uma árvore 2-3 (veja abaixo)
        - Ná prática:
            Árvores rubro-negras oferecem garantias de pior-caso para tempo de inserção, tempo de exclusão e tempo de busca.
            Isso não só faz elas serem úteis em aplicações que sejam sensíveis ao tempo como aplicações que funcionam em tempo real,
            mas isso faz elas serem úteis também em construir blocos para outras estruturas de dados, o que proporciona garantias de pior-caso;
            por exemplo, muitas estruturas de dados usadas em geometria computacional podem ser baseadas em árvores rubro-negras, e
            o Agendador Completamente Justo (Completely Fair Scheduler - CFS) usado em kernels de Linux atuais, usa as árvores rubro-negras.. Na versão 8 do Java,,
            a Coleção HashMap foi modificada para usar uma árvore rubro-negra ao invés de usar uma ListaLigada para
            armazenar elementos idênticos com hashcodes fracos.
        - [ ] [Aduni - Algorithms - Lecture 4 (o link pula para o ponto de início) (video)](https://youtu.be/1W3x0f_RmUo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3871) (Aduni - Algoritmos - Aula 4 - vídeo)
        - [ ] [Aduni - Algorithms - Lecture 5 (video)](https://www.youtube.com/watch?v=hm2GHwyKF1o&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=5) (Aduni - Algoritmos - Aula 5 - vídeo)
        - [ ] [Black Tree](https://en.wikipedia.org/wiki/Red%E2%80%93black_tree) (Árvore Rubro-Negra)
        - [ ] [An Introduction To Binary Search And Red Black Tree](https://www.topcoder.com/community/data-science/data-science-tutorials/an-introduction-to-binary-search-and-red-black-trees/) (Uma Introdução a Busca Binária E Árvore Rubro-Negra)

    - [ ] **Árvores de busca 2-3**
        - Ná prática:
            árvores 2-3 tem inserções mais rápidas ao custo de buscas mais lentas (já que a altura é mais comparado às árvores AVL).
        - Você raramente usaria árvore 2-3 porque a sua implementação envolve diferentes tipos de nós (nodes). Ao invés da árvore 2-3, as pessoas usam as árvores rubro-negras.
        - [ ] [23-Tree Intuition and Definition (video)](https://www.youtube.com/watch?v=C3SsdUqasD4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=2) (Definição e Intuição da Árvore 2-3 - vídeo)
        - [ ] [Binary View of 23-Tree](https://www.youtube.com/watch?v=iYvBtGKsqSg&index=3&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6) (Vista Binária da Árvore 2-3)
        - [ ] [2-3 Trees (student recitation) (video)](https://www.youtube.com/watch?v=TOb1tuEZ2X4&index=5&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp) (Árvores 2-3 (recitação de estudante) - vídeo)

    - [ ] **Árvores 2-3-4 (também conhecidas como árvores 2-4)**
        - Ná prática:
            Para cada árvores 2-4, existem árvores rubro-negras correspondentes com elementos de dados na mesma ordem. As operações de inserção e
            exclusão nas árvores 2-4 são também equivalentes ao color-flipping (numa tradução livre, troca-de-cor) e às rotações nas árvores rubro-negras.  Isso torna as árvores 2-4 uma
            ferramenta importante para compreender a lógica por trás das árvores rubro-negras, e é por isso que muitos textos de introdução a algoritmos introduzem
            árvores 2-4 logo antes das árvores rubro-negras, mesmo que as **árvores 2-4 não são usadas frequentemente na prática**.
        - [ ] [CS 61B Lecture 26: Balanced Search Trees (video)](https://www.youtube.com/watch?v=zqrqYXkth6Q&index=26&list=PL4BBB74C7D2A1049C) (CS 61B Aula 26: Árvores de Busca Balanceada) - vídeo
        - [ ] [Bottom Up 234-Trees (video)](https://www.youtube.com/watch?v=DQdMYevEyE4&index=4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6) (Árvores 2-3-4 Descendentes - vídeo)
        - [ ] [Top Down 234-Trees (video)](https://www.youtube.com/watch?v=2679VQ26Fp4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=5) (Árvores 2-3-4 Ascendentes) - vídeo

    - [ ] **Árvores N-ary (K-ary, M-ary)**
        - nota: o N ou K é o fator ramificador (máximo de ramificações)
        - árvores binárias são uma árvore 2-ary, com um fator de ramificação = 2
        - árvores 2-3 são 3-ary
        - [ ] [Árvore K-Ary](https://en.wikipedia.org/wiki/K-ary_tree)

    - [ ] **Árvores B**
        - curuiosidade: é um mistério, mas o B pode se referir a Boeing, Balanceado ou Bayber (co-inventor)
        - Ná prática:
            Árvores B são amplamente usadas em bancos de dados. A maioria dos sistemas de arquivos modernos usam árvores B (ou variantes). Além do
            seu uso em bancos de dados, ás arvores B são também usadas em sistemas de arquivos para permitir acesso aleatório rápido para um bloco
            arbitrário em um arquivo particular. O problema básico é tornar o endereço de bloco de arquivo em um endereço de bloco de disco
            (ou talvez em um cilindro-cabeça-setor, do Inglês Cylinder-Head-Sector - CHS).
        - [ ] [Árvore B](https://en.wikipedia.org/wiki/B-tree)
        - [ ] [Introduction to B-Trees (video)](https://www.youtube.com/watch?v=I22wEC1tTGo&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=6) (Introdução a Árvore B - vídeo)
        - [ ] [B-Tree Definition and Insertion (video)](https://www.youtube.com/watch?v=s3bCdZGrgpA&index=7&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6) (Definição e Inserção de Árvore B - vídeo)
        - [ ] [B-Tree Deletion (video)](https://www.youtube.com/watch?v=svfnVhJOfMc&index=8&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6) (Exclusão de Árvore B - vídeo)
        - [ ] [MIT 6.851 - Memory Hierarchy Models (video)](https://www.youtube.com/watch?v=V3omVLzI0WE&index=7&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf) (MIT 6.851 - Modelos de Hierarquia de Memória - vídeo)
                - cobre Árvores B de cache-alheio (do Inglês, cache-oblivious), estruturas de dados muito interessantes
                - os primeiros 37 minutos são bem técnicos, pode ser pulado (B é tamanho de bloco, tamanho de linha de cache)


- ### Árvores k-D
    - ótimo para encontrar número de pontos em um retângulo ou objeto de maior dimensão
    - um bom encaixe para vizinhos mais próximos de k
    - [ ] [Kd Trees (video)](https://www.youtube.com/watch?v=W94M9D_yXKk) (Árvores k-D - vídeo)
    - [ ] [kNN K-d tree algorithm (video)](https://www.youtube.com/watch?v=Y4ZgLlDfKDg) (Algoritmo de árvore kNN K-d - vídeo)

- ### Skiplists
    - "Essas são meio que estruturas de dados de um culto" - Skiena
    - [ ] [Randomization: Skip Lists (video)](https://www.youtube.com/watch?v=2g9OSRKJuzM&index=10&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp) (Randomização: Skiplists - vídeo)
    - [ ] [Para animações e um pouco mais de detalhes](https://en.wikipedia.org/wiki/Skip_list)

- ### Fluxos de Rede
    - [ ] [Ford-Fulkerson in 5 minutes — Step by step example (vídeo)](https://www.youtube.com/watch?v=Tl90tNtKvxs) (Ford-Fulkerson em 5 minutos - Exemplo com passo a passo - vídeo)
    - [ ] [Ford-Fulkerson Algorithm (video)](https://www.youtube.com/watch?v=v1VgJmkEJW0) (Algoritmo de Ford-Fulkerson)
    - [ ] [Network Flows (video)](https://www.youtube.com/watch?v=2vhN4Ice5jI) (Fluxos de Rede - vídeo)

- ### Conjuntos Disjuntos e Union-find
    - [ ] [UCB 61B - Disjoint Sets; Sorting & selection (video)](https://www.youtube.com/watch?v=MAEGXTwmUsI&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&index=21) (UCB 61B - Conjuntos Disjuntos; Ordenação e seleção - vídeo)
    - [ ] [Sedgewick Algorithms - Union-Find (6 videos)](https://www.youtube.com/watch?v=8mYfZeHtdNc&list=PLe-ggMe31CTexoNYnMhbHaWhQ0dvcy43t) (Algoritmos de Sedgewick - Union-find - 6 vídeos)

- ### Matemática para Processamento Rápido
    - [ ] [Integer Arithmetic, Karatsuba Multiplication (video)](https://www.youtube.com/watch?v=eCaXlAaN2uE&index=11&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb) (Aritmética de Números Inteiros, Multiplicação de Karatsuba - vídeo)
    - [ ] [The Chinese Remainder Theorem (used in cryptography) (video)](https://www.youtube.com/watch?v=ru7mWZJlRQg) (O Teorema Chinês do Resto)

- ### Treap
    - Combinação de árvore binária de busca e um heap (memória dinâmica)
    - [ ] [Treap](https://en.wikipedia.org/wiki/Treap)
    - [ ] [Data Structures: Treaps explained (video)](https://www.youtube.com/watch?v=6podLUYinH8) (Estruturas de Dados: Treaps explicadas - vídeo)
    - [ ] [Applications in set operations](https://www.cs.cmu.edu/~scandal/papers/treaps-spaa98.pdf) (Aplicações em Operações de Conjunto)

- ### Programação Linear (vídeos)
    - [ ] [Linear Programming](https://www.youtube.com/watch?v=M4K6HYLHREQ) (Programação Linear)
    - [ ] [Finding minimum cost](https://www.youtube.com/watch?v=2ACJ9ewUC6U) (Encontrando custo mínimo)
    - [ ] [Finding maximum value](https://www.youtube.com/watch?v=8AA_81xI3ik) (Encontrando valor máximo)
    - [ ] [Solve Linear Equations with Python - Simplex Algorithm](https://www.youtube.com/watch?v=44pAWI7v5Zk) (Resolva Equações Lineares com Python - Algoritmo Simplex)

- ### Geometria, Envoltória convexa (vídeos)
    - [ ] [Graph Alg. IV: Intro to geometric algorithms - Lecture 9](https://youtu.be/XIAQRlNkJAw?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3164) (Algoritmos de Gráfico IV: Introdução a algoritmos geométricos - Aula 9)
    - [ ] [Geometric Algorithms: Graham & Jarvis - Lecture 10](https://www.youtube.com/watch?v=J5aJEcOr6Eo&index=10&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm) (Algoritmos Geométricos: Graham e Jarvis - Aula 10)
    - [ ] [Divide & Conquer: Convex Hull, Median Finding](https://www.youtube.com/watch?v=EzeYI7p9MjU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=2) (Dividir e Conquistar: Envoltória Convexa, Busca de Ponto Médio)

- ### Matemática discreta
    - veja os vídeos abaixo

- ### Aprendizado de Máquina
    - [ ] Por que AM?
        - [ ] [How Google Is Remaking Itself As A Machine Learning First Company](https://backchannel.com/how-google-is-remaking-itself-as-a-machine-learning-first-company-ada63defcb70) (Como A Google Está Se Refazendo Como Uma Empresa Pioneira Em Aprendizado de Máquina)
        - [ ] [Large-Scale Deep Learning for Intelligent Computer Systems (video)](https://www.youtube.com/watch?v=QSaZGT4-6EY) (Aprendizagem Profunda de Grande Escala para Sistemas de Computador Inteligentes - vídeo)
        - [ ] [Deep Learning and Understandability versus Software Engineering and Verification by Peter Norvig](https://www.youtube.com/watch?v=X769cyzBNVw) (Aprendizagem Profunda e Compreensibilidade versus Engenharia de Software e Verificação, por Peter Norvig)
    - [ ] [Google's Cloud Machine learning tools (video)](https://www.youtube.com/watch?v=Ja2hxBAwG_0) (Ferramentas de aprendizado de máquina na nuvem da Google - vídeo)
    - [ ] [Google Developers' Machine Learning Recipes (Scikit Learn & Tensorflow) (video)](https://www.youtube.com/playlist?list=PLOU2XLYxmsIIuiBfYad6rFYQU_jL2ryal) (Receitas de Aprendizado de Máquina do Google Developers (Scikit Learn e Tensorflow) - vídeo)
    - [ ] [Tensorflow (vídeo)](https://www.youtube.com/watch?v=oZikw5k_2FM)
    - [ ] [Tensorflow Tutorials](https://www.tensorflow.org/versions/r0.11/tutorials/index.html) (Tutoriais de Tensorflow)
    - [ ] [Practical Guide to implementing Neural Networks in Python (using Theano)](http://www.analyticsvidhya.com/blog/2016/04/neural-networks-python-theano/) (Guia Prática para implementar Redeus Neurais em Python - usando Theano)
    - Cursos:
        - [Ótimo curso iniciante: Aprendizado de Máquina](https://www.coursera.org/learn/machine-learning) 
              - [somente vídeos](https://www.youtube.com/playlist?list=PLZ9qNFMHZ-A4rycgrgOYma6zxF4BZGGPW)
              - veja os vídeos 12-18 para uma revisão de algebra linear (14 e 15 são duplicados)
        - [Neural Networks for Machine Learning](https://www.coursera.org/learn/neural-networks) (Redes Neurais para Aprendizado de Máquina)
        - [Google's Deep Learning Nanodegree](https://www.udacity.com/course/deep-learning--ud730) (Nanodegree de Aprendizagem Profunda da Google)
        - [Google/Kaggle Machine Learning Engineer Nanodegree](https://www.udacity.com/course/machine-learning-engineer-nanodegree-by-google--nd009) (Nanodegree de Engenheiro de Aprendizado de Máquina da Google/Kaggle)
        - [Self-Driving Car Engineer Nanodegree](https://www.udacity.com/drive) (Nanodegree de Engenheiro de Carro Autônomo)
        - [Metis Online Course ($99 for 2 months)](http://www.thisismetis.com/explore-data-science) (Curso Online do Metis - US$99 por 2 meses)
    - Recursos:
        - Livros:
            - [Python Machine Learning](https://www.amazon.com/Python-Machine-Learning-Sebastian-Raschka/dp/1783555130/) (Aprendizado de Máquina em Python)
            - [Data Science from Scratch: First Principles with Python](https://www.amazon.com/Data-Science-Scratch-Principles-Python/dp/149190142X) (Ciência de Dados do Zero: Primeiros Princípios com Python)
            - [Introduction to Machine Learning with Python](https://www.amazon.com/Introduction-Machine-Learning-Python-Scientists/dp/1449369413/) (Introdução a Aprendizado de Máquina com Python)
        - [Machine Learning for Software Engineers](https://github.com/ZuzooVn/machine-learning-for-software-engineers) (Aprendizado de Máquina para Engenheiros de Software)
        - Data School: http://www.dataschool.io/

--

## Detalhes Adicionais Sobre Alguns Assuntos

    Eu adicionei esses detalhes para reforçar algumas ideias já apresentadas acima, mas não quis incluir elas
    acima porque aí é simplesmente demais. É fácil exagerar em um tema.
    Você quer ser contratado nesse século, certo?

- [ ] **Union-Find**
    - [ ] [Visão Geral](https://www.coursera.org/learn/data-structures/lecture/JssSY/overview)
    - [ ] [Naive Implementation](https://www.coursera.org/learn/data-structures/lecture/EM5D0/naive-implementations) (Implementação Ingênua)
    - [ ] [Trees](https://www.coursera.org/learn/data-structures/lecture/Mxu0w/trees) (Árvores)
    - [ ] [Union By Rank](https://www.coursera.org/learn/data-structures/lecture/qb4c2/union-by-rank)
    - [ ] [Path Compression](https://www.coursera.org/learn/data-structures/lecture/Q9CVI/path-compression) (Compressão de Caminho)
    - [ ] [Analysis Optional](https://www.coursera.org/learn/data-structures/lecture/GQQLN/analysis-optional) (Análise - Opcional)

- [ ] **Mais Programação Dinâmica** (vídeos)
    - [ ] [6.006: Dynamic Programming I: Fibonacci, Shortest Paths](https://www.youtube.com/watch?v=OQ5jsbhAv_M&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=19) (6.006: Programação Dinâmica I: Fibonacci, Menores Caminhos)
    - [ ] [6.006: Dynamic Programming II: Text Justification, Blackjack](https://www.youtube.com/watch?v=ENyox7kNKeY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=20) (6.006: Programação Dinâmica II: Justificação de Texto, Blackjack)
    - [ ] [6.006: DP III: Parenthesization, Edit Distance, Knapsack](https://www.youtube.com/watch?v=ocZMDMZwhCY&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=21) (6.006: PD III: Parêntesisação, Editar Distância, Mochila)
    - [ ] [6.006: DP IV: Guitar Fingering, Tetris, Super Mario Bros.](https://www.youtube.com/watch?v=tp4_UXaVyx8&index=22&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb) (6.006: PD IV: Dedilhado de Guitarra, Tetris, Super Mario Bros.)
    - [ ] [6.046: Dynamic Programming & Advanced DP](https://www.youtube.com/watch?v=Tw1k46ywN6E&index=14&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp) (6.046: Programação Dinâmica e PD Avançada)
    - [ ] [6.046: Dynamic Programming: All-Pairs Shortest Paths](https://www.youtube.com/watch?v=NzgFUwOaoIw&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=15) (6.046: Programação Dinâmica: Menores Caminhos Entre Todos Os Pares)
    - [ ] [6.046: Dynamic Programming (student recitation)](https://www.youtube.com/watch?v=krZI60lKPek&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=12) (6.046: Programação Dinâmica - recitação de estudante)

- [ ] **Processamento de Gráfos Avançado** (vídeos)
    - [ ] [Synchronous Distributed Algorithms: Symmetry-Breaking. Shortest-Paths Spanning Trees](https://www.youtube.com/watch?v=mUBmcbbJNf4&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=27) (Algoritmos Distribuídos Síncronos: Quebra de Simetria. Árvores de Extensão De Menores Caminhos)
    - [ ] [Asynchronous Distributed Algorithms: Shortest-Paths Spanning Trees](https://www.youtube.com/watch?v=kQ-UQAzcnzA&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=28) (Algoritmos Distribuídos Assíncronos: Árvores de Extensão De Menores Caminhos)

- [ ] MIT **Probabilidade** (bem matemático, e bem lento, o que é bom para coisas bem matemáticas) (vídeos):
    - [ ] [MIT 6.042J - Probability Introduction](https://www.youtube.com/watch?v=SmFwFdESMHI&index=18&list=PLB7540DEDD482705B) (MIT 6.042J - Introdução a Probabilidade)
    - [ ] [MIT 6.042J - Conditional Probability](https://www.youtube.com/watch?v=E6FbvM-FGZ8&index=19&list=PLB7540DEDD482705B) (MIT 6.042J - Probabilidade Condicional)
    - [ ] [MIT 6.042J - Independence](https://www.youtube.com/watch?v=l1BCv3qqW4A&index=20&list=PLB7540DEDD482705B) (MIT 6.042J - Independência)
    - [ ] [MIT 6.042J - Random Variables](https://www.youtube.com/watch?v=MOfhhFaQdjw&list=PLB7540DEDD482705B&index=21) (MIT 6.042J - Variáveis Aleatórias)
    - [ ] [MIT 6.042J - Expectation I](https://www.youtube.com/watch?v=gGlMSe7uEkA&index=22&list=PLB7540DEDD482705B) (MIT 6.042J - Expectativa I)
    - [ ] [MIT 6.042J - Expectation II](https://www.youtube.com/watch?v=oI9fMUqgfxY&index=23&list=PLB7540DEDD482705B) (MIT 6.042J - Expectativa II)
    - [ ] [MIT 6.042J - Large Deviations](https://www.youtube.com/watch?v=q4mwO2qS2z4&index=24&list=PLB7540DEDD482705B) (MIT 6.042J - Grades Desvios)
    - [ ] [MIT 6.042J - Random Walks](https://www.youtube.com/watch?v=56iFMY8QW2k&list=PLB7540DEDD482705B&index=25) (MIT 6.042J - Percursos Aleatórios)

- [ ] [Simonson: Approximation Algorithms (video)](https://www.youtube.com/watch?v=oDniZCmNmNw&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=19) (Simonson: Algoritmos de Aproximação - vídeo)

- [ ] **Correspondência de String**
    - [ ] Rabin-Karp (vídeos):
        - [Rabin Karps Algorithm](https://www.coursera.org/learn/data-structures/lecture/c0Qkw/rabin-karps-algorithm) (Algoritmos de Rabin Karps)
        - [Precomputing](https://www.coursera.org/learn/data-structures/lecture/nYrc8/optimization-precomputation) (Precomputação)
        - [Optimization: Implementation and Analysis](https://www.coursera.org/learn/data-structures/lecture/h4ZLc/optimization-implementation-and-analysis) (Otimização: Implementação e Análise)
        - [Table Doubling, Karp-Rabin](https://www.youtube.com/watch?v=BRO7mVIFt08&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=9) (Duplicação de Tabela, Karp-Rabin)
        - [Rolling Hashes, Amortized Analysis](https://www.youtube.com/watch?v=w6nuXg0BISo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=32) (Hashing Recursivo, Análise Amortizada)
    - [ ] Knuth-Morris-Pratt (KMP):
        - [The Knuth-Morris-Pratt (KMP) String Matching Algorithm](https://www.youtube.com/watch?v=5i7oKodCRJo) (O Algoritmo de Correspondência de String de Knuth-Morris-Pratt - KMP)
    - [ ] Algoritmo de busca de string de Boyer-Moore
        - [Boyer-Moore String Search Algorithm](https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_string_search_algorithm) (Algoritmo de Busca de String de Boyer-Moore)
        - [Advanced String Searching Boyer-Moore-Horspool Algorithms (video)](https://www.youtube.com/watch?v=QDZpzctPf10) (Algoritmos Avançados de Busca de String de Boyer-Moore-Horspool - vídeo)
    - [ ] [Coursera: Algorithms on Strings](https://www.coursera.org/learn/algorithms-on-strings/home/week/1) (Coursera: Algoritmos em Strings)
        - começa bem, mas depois que passa por KMP fica mais complicado do que precisa ser
        - boa explicação de tries
        - pode ser pulado

- [ ] **Ordenação**

    - [ ] Aulas de Stanford sobre ordenação:
        - [ ] [Lecture 15 | Programming Abstractions (video)](https://www.youtube.com/watch?v=ENp00xylP7c&index=15&list=PLFE6E58F856038C69) (Aula 15 | Abstrações de Programação - vídeo)
        - [ ] [Lecture 16 | Programming Abstractions (video)](https://www.youtube.com/watch?v=y4M9IVgrVKo&index=16&list=PLFE6E58F856038C69) (Aula 16 | Abstrações de Programação - vídeo)
    - [ ] Shai Simonson, [Aduni.org](http://www.aduni.org/):
        - [ ] [Algorithms - Sorting - Lecture 2 (video)](https://www.youtube.com/watch?v=odNJmw5TOEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=2) (Algoritmos - Ordenação - Aula 2 - vídeo)
        - [ ] [Algorithms - Sorting II - Lecture 3 (video)](https://www.youtube.com/watch?v=hj8YKFTFKEE&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=3) (Algoritmos - Ordenação II - Aula 3 - vídeo)
    - [ ] Aulas de Steven Skiena sobre ordenação:
        - [ ] [aula começa aos 26:46 (vídeo)](https://youtu.be/ute-pmMkyuk?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1600)
        - [ ] [aula começa aos 27:40 (vídeo)](https://www.youtube.com/watch?v=yLvp-pB8mak&index=8&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [ ] [aula começa aos 35:00 (vídeo)](https://www.youtube.com/watch?v=q7K9otnzlfE&index=9&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
        - [ ] [aula começa aos 23:50 (vídeo)](https://www.youtube.com/watch?v=TvqIGu9Iupw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=10)

## Séries de Vídeos

Sente-se e aproveite. "Netflix e habilidade" :P

- [ ] [Lista de problemas individuais de Programação Dinâmica (cada um é curto)](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)

- [ ] [Arquitetura x86, Assemply, Aplicativos (11 vídeos)](https://www.youtube.com/playlist?list=PL038BE01D3BAEFDB0)

- [ ] [MIT 18.06 Linear Algebra, Spring 2005 (35 videos)](https://www.youtube.com/playlist?list=PLE7DDD91010BC51F8) (MIT 18.06 Álgebra Linear, Primavera de 2005 - 35 vídeos)

- [ ] [Excelente - MIT Calculus Revisited: Single Variable Calculus](https://www.youtube.com/playlist?list=PL3B08AE665AB9002A) (Cálculo de MIT Revisto: Cálculo de Variável Única)

- [ ] [Computer Science 70, 001 - Spring 2015 - Discrete Mathematics and Probability Theory](https://www.youtube.com/playlist?list=PL-XXv-cvA_iD8wQm8U0gG_Z1uHjImKXFy) (Ciência da Computação 70, 001 - Primavera de 2005 - Matemática Discreta e Teoria de Probabilidade)

- [ ] [Discrete Mathematics by Shai Simonson (19 videos)](https://www.youtube.com/playlist?list=PL3o9D4Dl2FJ9q0_gtFXPh_H4POI5dK0yG) (Matemática Discreta por Shai Simonson - 19 vídeos)

- [ ] [Discrete Mathematics Part 1 by Sarada Herke (5 videos)](https://www.youtube.com/playlist?list=PLGxuz-nmYlQPOc4w1Kp2MZrdqOOm4Jxeo) (Matemática Discreta Parte 1 por Sarada Herke - 5 vídeos)

- [ ] CSE373 - Análise de Algoritmos (25 vídeos)
    - [Skiena lectures from Algorithm Design Manual](https://www.youtube.com/watch?v=ZFjhkohHdAA&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=1) (Aulas de Skiena do Manual de Design de Algoritmo)

- [ ] [UC Berkeley 61B (Spring 2014): Data Structures (25 videos)](https://www.youtube.com/watch?v=mFPmKGIrQs4&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd) (Universidade da Califórnia em Berkeley 61B (Primavera de 2014): Estrutura de Dados - 25 vídeos)

- [ ] [UC Berkeley 61B (Fall 2006): Data Structures (39 videos)](https://www.youtube.com/playlist?list=PL4BBB74C7D2A1049C) (Universidade da Califórnia em Berkeley 61B (Outono de 2006): Estrutura de Dados - 39 vídeos)

- [ ] [UC Berkeley 61C: Machine Structures (26 videos)](https://www.youtube.com/watch?v=gJJeUFyuvvg&list=PL-XXv-cvA_iCl2-D-FS5mk0jFF6cYSJs_) (Universidade da Califórnia em Berkeley 61C: Estruturas de Máquina - 26 vídeos)

- [ ] [OOSE: Software Dev Using UML and Java (21 videos)](https://www.youtube.com/playlist?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO) (OOSE (Engenharia de Software Orientada a Objetos): Desenvolvimento de Software Usando UML e Java - 21 vídeos)

- [ ] [UC Berkeley CS 152: Computer Architecture and Engineering (20 videos)](https://www.youtube.com/watch?v=UH0QYvtP7Rk&index=20&list=PLkFD6_40KJIwEiwQx1dACXwh-2Fuo32qr) (Universidade da Califórnia em Berkeley CS 152: Arquitetura e Engenharia de Computador - 20 vídeos)

- [ ] [MIT 6.004: Computation Structures (49 videos)](https://www.youtube.com/playlist?list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-) (MIT 6.004: Estruturas de Computação - 49 vídeos)

- [ ] [Carnegie Mellon - Computer Architecture Lectures (39 videos)](https://www.youtube.com/playlist?list=PL5PHm2jkkXmi5CxxI7b3JCL1TWybTDtKq) (Carnegie Mellon - Aulas de Arquitetura de Computador - 39 vídeos)

- [ ] [MIT 6.006: Intro to Algorithms (47 videos)](https://www.youtube.com/watch?v=HtSuA80QTyo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&nohtml5=False) (MIT 6.006: Introdução a Algoritmos - 47 vídeos)

- [ ] [MIT 6.033: Computer System Engineering (22 videos)](https://www.youtube.com/watch?v=zm2VP0kHl1M&list=PL6535748F59DCA484) (MIT 6.033: Engenharia de Sistema de Computador - 22 vídeos)

- [ ] [MIT 6.034 Artificial Intelligence, Fall 2010 (30 videos)](https://www.youtube.com/playlist?list=PLUl4u3cNGP63gFHB6xb-kVBiQHYe_4hSi) (MIT 6.034 Inteligência Artificial, Outono de 2010 - 30 vídeos)

- [ ] [MIT 6.042J: Mathematics for Computer Science, Fall 2010 (25 videos)](https://www.youtube.com/watch?v=L3LMbpZIKhQ&list=PLB7540DEDD482705B) (MIT 6.042J: Matemática para Ciência da Computação, Outono de 2010 - 25 vídeos)

- [ ] [MIT 6.046: Design and Analysis of Algorithms (34 videos)](https://www.youtube.com/watch?v=2P-yW7LQr08&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp) (MIT 6.046: Design e Análise de Algoritmos - 34 vídeos)

- [ ] [MIT 6.050J: Information and Entropy, Spring 2008 (19 videos)](https://www.youtube.com/watch?v=phxsQrZQupo&list=PL_2Bwul6T-A7OldmhGODImZL8KEVE38X7) (MIT 6.050J: Informação e Entropia, Primavera de 2008 - 19 vídeos)

- [ ] [MIT 6.851: Advanced Data Structures (22 videos)](https://www.youtube.com/watch?v=T0yzrZL1py0&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=1) (MIT 6.851: Estrutura de Dados Avançadas - 22 vídeos)

- [ ] [MIT 6.854: Advanced Algorithms, Spring 2016 (24 videos)](https://www.youtube.com/playlist?list=PL6ogFv-ieghdoGKGg2Bik3Gl1glBTEu8c) (MIT 6.854: Algoritmos Avançados, Primavera de 2016 - 24 vídeos)

- [ ] [Harvard COMPSCI 224: Advanced Algorithms (25 videos)](https://www.youtube.com/playlist?list=PL2SOU6wwxB0uP4rJgf5ayhHWgw7akUWSf) (Harvard COMPSCI 224: Algoritmos Avançados - 25 vídeos)

- [ ] [MIT 6.858 Computer Systems Security, Fall 2014](https://www.youtube.com/watch?v=GqmQg-cszw4&index=1&list=PLUl4u3cNGP62K2DjQLRxDNRi0z2IRWnNh) (MIT 6.858 Segurança de Sistemas de Computador, Outono de 2014)

- [ ] [Stanford: Programming Paradigms (27 videos)](https://www.youtube.com/view_play_list?p=9D558D49CA734A02) (Stanford: Paradigmas de Programação - 27 vídeos)

- [ ] [Introduction to Cryptography by Christof Paar](https://www.youtube.com/playlist?list=PL6N5qY2nvvJE8X75VkXglSrVhLv1tVcfy) (Introdução a Criptografia por Christof Paar)
    - [Website de Curso junto com Slides e Conjuntos de Problemas](http://www.crypto-textbook.com/)

- [ ] [Mining Massive Datasets - Stanford University (94 videos)](https://www.youtube.com/playlist?list=PLLssT5z_DsK9JDLcT8T62VtzwyW9LNepV) (Minerando Conjuntos de Dados Massivos - Universidade de Stanford - 94 vídeos)

- [ ] [Graph Theory by Sarada Herke (67 videos)](https://www.youtube.com/user/DrSaradaHerke/playlists?shelf_id=5&view=50&sort=dd) (Teoria de Grafos por Sarada Herke - 67 vídeos)

## Cursos de Ciência da Computação

- [Diretório de Cursos Online de Ciência da Computação](https://github.com/open-source-society/computer-science)
- [Diretório de Cursos Online de Ciência da Computação (muitos com aulas online)](https://github.com/prakhar1989/awesome-courses)
