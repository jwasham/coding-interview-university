# Coding Interview University

- Versión original: [Inglés](README.md)

> Originalmente creé esto como una lista corta de tópicos a estudiar para volverse un Ingeniero de Software, pero creció hasta ser la gran lista puede apreciar actualmente. Después de pasar por este plan de estudios ¡[fui contratado como Ingeniero de Desarrollo de Software en Amazon!(Art. Inglés)](https://startupnextdoor.com/ive-been-acquired-by-amazon/?src=ciu)


> Posiblemente no tenga que estudiar mucho como yo. De cualquier forma todo lo que necesita esta aquí.
>
> Los elementos listados aquí le prepararan bien para una entrevista en cualquier compañía de software, incluyendo a los gigantes: Amazon, Facebook, Google o Microsoft.
>
> *¡La mejor de las suertes!*

Traducciones:
- [中文版本](translations/README-cn.md)
- [Tiếng Việt - Vietnamese](translations/README-vi.md)
- translations in progress:
    - [Español](https://github.com/jwasham/coding-interview-university/issues/80)
    - [हिन्दी](https://github.com/jwasham/coding-interview-university/issues/81)
    - [עברית](https://github.com/jwasham/coding-interview-university/issues/82)
    - [Bahasa Indonesia](https://github.com/jwasham/coding-interview-university/issues/101)
    - [Arabic](https://github.com/jwasham/coding-interview-university/issues/98)
    - [Turkish](https://github.com/jwasham/coding-interview-university/issues/90)
    - [French](https://github.com/jwasham/coding-interview-university/issues/89)
    - [Russian](https://github.com/jwasham/coding-interview-university/issues/87)
    - [Ukrainian](https://github.com/jwasham/coding-interview-university/issues/106)
    - [Brazilian Portuguese](https://github.com/jwasham/coding-interview-university/issues/113)
    - [Korean](https://github.com/jwasham/coding-interview-university/issues/118)
    - [Telugu](https://github.com/jwasham/coding-interview-university/issues/117)
    - [Polish](https://github.com/jwasham/coding-interview-university/issues/122)
    - [German](https://github.com/jwasham/coding-interview-university/issues/135)
    - [Urdu](https://github.com/jwasham/coding-interview-university/issues/140)
    - [Thai](https://github.com/jwasham/coding-interview-university/issues/156)
    - [Greek](https://github.com/jwasham/coding-interview-university/issues/166)
    - [Italian](https://github.com/jwasham/coding-interview-university/issues/170)

## ¿Qué es esto?

Este es mi plan de estudios de varios meses para pasar de ser un Desarrollador Web (Autodidacta, sin título) a un Ingeniero de Software para una gran compañía.

![Coding at the whiteboard - from HBO's Silicon Valley](https://d3j2pkmjtin6ou.cloudfront.net/coding-at-the-whiteboard-silicon-valley.png)

Esto es para los **nuevos Ingenieros de Software** o aquellos que quieren cambiar del Desarrollo de Software/Web a Ingeniero de Software (Donde el conocimiento de las Ciencias de Computación es requerido). Si tiene varios años de experiencia y clama tenerlos como Ingeniero de Software, espere una entrevista más ardua.

Si tiene varios años de experiencia en desarrollo de software/web note que las grandes compañías como Google, Amazon, Facebook y Microsoft ven la Ingeniería de Software diferente al Desarrollo de Software/Web, requiriendo del conocimiento de las Ciencias de Computación.

Si desea ser un Ingeniero de Escalabilidad/Seguridad o un Ingeniero de Sistemas, estudie más de la lista opcional (Redes, Seguridad).


---

## Tabla de contenido

- [¿Qué es esto?](#qué-es-esto)
- [¿Por qué usarlo?](#por-qué-usarlo)
- [Como usarlo](#como-usarlo)
- [No sienta no es lo suficientemente listo](#no-sienta-no-es-lo-suficientemente-listo)
- [Acerca de los recursos de vídeo](#acerca-de-los-recursos-de-vídeo)
- [Prepárese para la entrevista](#prepárese-para-la-entrevista)
- [Escoja un lenguaje para la entrevista](#escoja-un-lenguaje-para-la-entrevista)
- [Lista de libros](#lista-de-libros)
- [Antes de iniciar](#antes-de-iniciar)
- [Lo que no verá cubierto](#lo-que-no-verá-cubierto)
- [El plan diario](#el-plan-diario)
- [Conocimientos Previos](#conocimientos-previos)
- [Complejidad algorítmica / Big-O / Análisis asintótico](#complejidad-algorítmica-big-o-análisis-asintótico)
- [Estructuras de datos](#estructuras-de-datos)
    - [Arreglos](#arreglos)
    - [Listas Enlazadas](#listas-enlazadas)
    - [Pila](#pila)
    - [Cola o fila](#cola-o-fila)
    - [Matriz asociativa](#matriz-asociativa)
- [Información adicional](#información-adicional)
    - [Búsqueda binaria](#búsqueda-binaria)
    - [Operaciones bit a bit](#operaciones-bit-bit)
- [Árboles](#árboles)
    - [Árboles - Notas & Antecedentes](#árboles---notas--antecedentes)
    - [Árboles de búsqueda binaria: BSTs](#árboles-de-búsqueda-binaria-bsts)
    - [Montículo / Colas de Prioridad / Montículo binario](#montículo--colas-de-prioridad--montículo-binario)
    - Árboles de búsqueda balanceables (Concepto General, sin detallar)
    - Recorridos: preorder, inorder, postorder, BFS, DFS
- [Ordenamientos](#ordenamientos)
    - Selección
    - Inserción
    - Por montículos (heapsort)
    - Rápido (quicksort)
    - Por mezcla (merge sort)
- [Grafos](#grafos)
    - Dirigidos
    - No dirigidos
    - Matriz de adyacencia
    - Lista de adyacencia
    - Recorridos: BFS, DFS
- [Más información adicional](#más-información-adicional)
    - [Recursión](#recursión)
    - [Programación Dinámica](#programación-dinámica)
    - [Programación Orientada a Objetos](#programación-orientada-a-objetos)
    - [Patrones de diseño](#patrones-de-diseño)
    - [Combinatorias (n elije k) & Probabilidad](combinatorias-n-elije-k--probabilidad)
    - [NP, NP-Completo y Algoritmos de aproximación](#np-np-completo-y-algoritmos-de-aproximación)
    - [Memoria cache](#memoria-cache)
    - [Procesos e hilos](#procesos-e-hilos)
    - [Documentos](#documentos)
    - [Pruebas](#pruebas)
    - [Planificador](#planificador)
    - [Implementar rutinas del sistema](#implementar-rutinas-del-sistema)
    - [Búsqueda de cadenas y manipulaciones](#búsqueda-de-cadenas-y-manipulaciones)
    - [Tries](#tries)
    - [Números de punto flotante](#números-de-punto-flotante)
    - [Unicode](#unicode)
    - [Extremidad (Endianness)](#extremidad-endianness)
- [Redes](#redes)
- [Diseño del Sistema, Escalabilidad, Manejo de Datos](#diseño-del-sistema-escalabilidad-manejo-de-datos) (Si tiene más de 4 años de experiencia)
- [Revisión final](#revisión-final)
- [Practica de preguntas de codificación](#practica-de-preguntas-de-codificación)
- [Ejercicios de codificación/Desafíos](#ejercicios-de-codificación-desafíos)
- [Una vez cerca de la entrevista](#una-vez-cerca-de-la-entrevista)
- [Su CV](#su-cv)
- [Pensando en cuando llegue la entrevista](#pensando-en-cuando-llegue-la-entrevista)
- [Preguntas para el entrevistador](#preguntas-para-el-entrevistador)
- [Una vez obtenido el empleo](#una-vez-obtenido-el-empleo)

---------------- Todo debajo de esta marca es opcional ----------------

- [Libros adicionales](#libros-adicionales)
- [Aprendizaje adicional](#aprendizaje-adicional)
    - [Compiladores](#compiladores)
    - [Emacs y Vi(m)](#emacs-y-vim)
    - [Unix: Herramientas para la línea de comandos](#unix-herramientas-para-la-línea-de-comandos)
    - [Teoría de la información](#teoría-de-la-información)
    - [Código de paridad y Hamming](#código-de-paridad-y-hamming)
    - [Entropía](#entropía)
    - [Criptografía](#criptografía)
    - [Compresión](#compresión)
    - [Seguridad informática](#seguridad-informática)
    - [Recolección de basura](#recolección-de-basura)
    - [Programación en paralelo](#programacion-en-paralelo)
    - [Sistemas de mensajería, serialización y colas](#sistemas-de-mensajería-serialización-y-cola)
    - [A*](#a)
    - [Transformada rápida de Fourier](#transformada-rápida-de-fourier)
    - [Filtro de Bloom](#filtro-de-bloom)
    - [HyperLogLog](#hyperloglog)
    - [Hashing sensible a la localidad](#hashing-sensible-a-la-localidad)
    - [Árboles van Emde Boa](#árboles-van-emde-boas)
    - [Estructuras de datos aumentadas](#estructuras-de-datos-aumentadas)
    - [Árboles N-avo (K-avo, M-avo)](#árboles-n-avo-k-avo-m-avo)
    - [Árboles de búsqueda equilibrada](#árboles-de-búsqueda-equilibrada)
        - Árboles AVL
        - Árboles biselados
        - Árboles rojos/negros
        - Árboles de búsqueda 2-3
        - Árboles 2-3-4 (aka Árboles 2-4)
        - Árboles N-avo (K-avo, M-avo)
        - Árboles-B
    - [Árboles k-D](#árboles-k-d)
    - [Lista por saltos](#listas-por-saltos)
    - [Flujos de red](#flujos-de-red)
    - [Conjuntos disjuntos & Encontrar unión](#conjuntos-disjuntos-encontrar-unión)
    - [Matemáticas para procesamiento rápido](#matemáticas-para-procesamiento-rápido)
    - [Treap](#treap)
    - [Programación Lineal](#programación-lineal)
    - [Geometría, casco convexo](#geometría-casco-convexo)
    - [Matemáticas discretas](#matemáticas-discretas)
    - [Aprendizaje automático](#aprendizaje-automático)
- [Detalles adicionales de ciertos temas](#detalles-adicionales-de–ciertos-temas)
- [Series de videos](#series-de-videos)
- [Cursos de Informática](#cursos-de-informática)

---

## ¿Por qué usarlo?

Cuando comencé este proyecto, no sabía la diferencia entre un stack y un heap, no conocía la notación Big-O, nada acerca de árboles, ni cómo sacar la transversal de una gráfica. Si tenía que programar un algoritmo de clasificación, puedo decir que no hubiera sido muy bueno. Cada estructura de datos que había utilizado estaba incorporada al lenguaje, y yo no sabía cómo funcionaban realmente. Yo nunca tuve que manejar la memoria a menos que un proceso que yo estaba corriendo diera un error de “out of memory”, y tenía que encontrar una alternativa. He usado pocos arreglos de varias dimensiones en mi vida y miles de arreglos asociativos, pero nunca he creado estructuras de datos desde cero.

Pero después de pasar por todo este plan de estudios tengo mucha confianza de que seré contratado. Me toará meses. Si mucho de esto te resulta familiar entonces te tomará mucho menos tiempo.

Es un plan largo, puede tome unos meses; pero si le resulta familiar mucho de esto le tomara mucho menos tiempo.

## Como usarlo

Todo lo que aparece abajo es un plan, y debería abordar los elementos en orden de arriba a abajo.

Estoy usando el tema especial de markdown de Github, incluyendo listas de tareas para comprobar el progreso.

**Cree una nueva rama para que pueda validar elementos como este, solo ponga una x en los corchetes: [x]**


    Haga fork a una rama y siga los comandos siguientes

`git checkout -b progress`

`git remote add jwasham https://github.com/jwasham/coding-interview-university`

`git fetch --all`

    Marque todas las cajas con una x después de que completa los cambios

`git add . `

`git commit -m "Marked x" `

`git rebase jwasham/master `

`git push --force `

[Más acerca de los temas de Github para markdown](https://guides.github.com/features/mastering-markdown/#GitHub-flavored-markdown)

## No sienta que no es lo suficientemente listo
- Los ingenieros de software exitosos son inteligentes pero muchos tienen la inseguridad de no ser lo suficientemente listos.
- [The myth of the Genius Programmer](https://www.youtube.com/watch?v=0SARbwvhupQ)
- [It's Dangerous to Go Alone: Battling the Invisible Monsters in Tech](https://www.youtube.com/watch?v=1i8ylq4j_EY)

## Acerca de los recursos de vídeo
    Algunos videos solo están disponibles inscribiéndose a una clase de Coursera, EdX, o Lynda.com. Estos son llamados MOOCs.
    En ocasiones las clases no están en sesión por lo que tendrá que esperar un par de meses, por lo que no tiene acceso. Los cursos de Lynda.com no son gratuitos.

    Apreciaría su ayuda añadiendo fuentes siempre disponibles, publicas y gratuitas como videos de Youtube para acompañar a los videos del curso en línea.

    Me gustan recursos provenientes de universidades.


## Prepárese para la entrevista
- [ ] [ABC: Always Be Coding](https://medium.com/always-be-coding/abc-always-be-coding-d5f8051afce2#.4heg8zvm4)
- [ ] [Whiteboarding](https://medium.com/@dpup/whiteboarding-4df873dbba2e#.hf6jn45g1)
- [ ] [Effective Whiteboarding during Programming Interviews](http://www.coderust.com/blog/2014/04/10/effective-whiteboarding-during-programming-interviews/)
- [ ] [Demystifying Tech Recruiting](https://www.youtube.com/watch?v=N233T0epWTs)
- [ ] Cracking The Coding Interview Set 1:
    - [ ] [Gayle L McDowell - Cracking The Coding Interview (video)](https://www.youtube.com/watch?v=rEJzOhC5ZtQ)
    - [ ] [Cracking the Coding Interview with Author Gayle Laakmann McDowell (video)](https://www.youtube.com/watch?v=aClxtDcdpsQ)
- [ ] How to Get a Job at the Big 4:
    - [ ] [How to Get a Job at the Big 4 - Amazon, Facebook, Google & Microsoft (video)](https://www.youtube.com/watch?v=YJZCUhxNCv8)

- [ ] Prep Course:
    - [ ] [Software Engineer Interview Unleashed (paid course)](https://www.udemy.com/software-engineer-interview-unleashed):
        - Aprenda como alistarse para una entrevista de Ingeniería de Software con un entrevistador de Google.
    - [ ] [Python for Data Structures, Algorithms, and Interviews! (paid course)](https://www.udemy.com/python-for-data-structures-algorithms-and-interviews/):
        - Un curso enfocado a una entrevista centrada en Python; que cubre estructuras de datos, algoritmos, plantillas de entrevistas y mucho más.

## Escoja un lenguaje para la entrevista

Puede usar un lenguaje con el que este cómodo para hacer la parte de código para la entrevista, pero para las grandes compañías, estas son buenas elecciones:

- C++
- Java
- Python

También podrías usar éstos, pero busca información primero. Puede haber advertencias:

- JavaScript
- Ruby

Debes sentirte muy cómodo con el lenguaje y ser experto.

Lee más acerca de opciones:
- http://www.byte-by-byte.com/choose-the-right-language-for-your-coding-interview/
- http://blog.codingforinterviews.com/best-programming-language-jobs/

[Ve recursos de programas aquí](programming-language-resources.md)

Verás algunos materiales de aprendizaje de C, C++ y Python abajo, porque estoy aprendiendo. Hay algunos libros involucrados, ve al final.

## Lista de libros

Ésta es una lista más corta que la que yo usé. Está abreviada para ahorrarle tiempo.

### Preparación para la entrevista
- [ ] [Programming Interviews Exposed: Secrets to Landing Your Next Job, 2nd Edition](http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html)
    - Respuestas en C++ y Java
    - Este es un buen calentamiento para Cracking the Coding Interview
    - No muy difícil, muchos problemas pueden ser más sencillos de los que verá en la entrevista (Por lo que he leído)
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - Respuestas en Java

Si tiene mucho tiempo extra:

- [ ] [Elements of Programming Interviews (C++ version)](https://www.amazon.com/Elements-Programming-Interviews-Insiders-Guide/dp/1479274836)
- [ ] Elements of Programming Interviews (Java version)
    - [book](https://www.amazon.com/Elements-Programming-Interviews-Java-Insiders/dp/1517435803/)
    - [Companion Project - Method Stub and Test Cases for Every Problem in the Book](https://github.com/gardncl/elements-of-programming-interviews)

### Arquitectura de Computadores

Si esta corto de tiempo:

- [ ] [Write Great Code: Volume 1: Understanding the Machine](https://www.amazon.com/Write-Great-Code-Understanding-Machine/dp/1593270038)
    - El libro fue publicado en 2004, y es algo anticuado pero es un recurso fantástico para la comprensión de una computadora en breve.
    - El autor inventó HLA, por lo que tiene muchas menciones y ejemplos en HLA. No es ampliamente utilizado, pero los ejemplos son decentes para ver cómo es un lenguaje ensamblador.
    - Estos capítulos valen la pena ser leídos para brindarle una buena base:
        - Chapter 2 - Numeric Representation
        - Chapter 3 - Binary Arithmetic and Bit Operations
        - Chapter 4 - Floating-Point Representation
        - Chapter 5 - Character Representation
        - Chapter 6 - Memory Organization and Access
        - Chapter 7 - Composite Data Types and Memory Objects
        - Chapter 9 - CPU Architecture
        - Chapter 10 - Instruction Set Architecture
        - Chapter 11 - Memory Architecture and Organization

Si tiene más tiempo (Yo quiero este libro):

- [ ] [Computer Architecture, Fifth Edition: A Quantitative Approach](https://www.amazon.com/dp/012383872X/)
    - Para un tratamiento más rico y actualizado (2011), pero un trato más largo.

### Específicos del lenguaje

**Necesita escoger un lenguaje para la entrevista (mire arriba).** Aquí están mis recomendaciones por lenguaje. No tengo recursos para todos los lenguajes. Son bienvenidas adiciones.

Si ha leído alguno de estos, probablemente tenga todos los conocimientos de estructuras de datos y algoritmos que necesitara para hacer problemas de codificación.
**Puede saltarse todas las video-lecturas en este proyecto**, a menos que quiera una crítica.

[Recursos adicionales específicos del lenguaje aquí.](programming-language-resources.md)

### C++

No he leído estos dos, pero están altamente calificados y escritos por Sedgewick. Él es asombroso.

- [ ] [Algorithms in C++, Parts 1-4: Fundamentals, Data Structure, Sorting, Searching](https://www.amazon.com/Algorithms-Parts-1-4-Fundamentals-Structure/dp/0201350882/)
- [ ] [Algorithms in C++ Part 5: Graph Algorithms](https://www.amazon.com/Algorithms-Part-Graph-3rd-Pt-5/dp/0201361183/)

Si tiene una mejor recomendación para C++ por favor hágamelo saber. Busco fuentes comprensivas.

### Java

- [ ] [Algorithms (Sedgewick and Wayne)](https://www.amazon.com/Algorithms-4th-Robert-Sedgewick/dp/032157351X/)
    - videos with book content (and Sedgewick!):
        - [Algorithms I](https://www.youtube.com/user/algorithmscourses/playlists?view=50&sort=dd&shelf_id=2)
        - [Algorithms II](https://www.youtube.com/user/algorithmscourses/playlists?shelf_id=3&view=50&sort=dd)

O:

- [ ] [Data Structures and Algorithms in Java](https://www.amazon.com/Data-Structures-Algorithms-Michael-Goodrich/dp/1118771338/)
    - Por Goodrich, Tamassia, Goldwasser
    - Usado como texto opcional en el curso de Informática impartido en UC Berkeley
    - Vea mi reporte de la versión de Python debajo. Este libro abarca los mismos tópicos.

### Python

- [ ] [Data Structures and Algorithms in Python](https://www.amazon.com/Structures-Algorithms-Python-Michael-Goodrich/dp/1118290275/)
    - Por Goodrich, Tamassia, Goldwasser
    - Ame este libro. Cubre todo y más.
    - Código Pythonioco
    - Mi brillante reporte del libro : https://startupnextdoor.com/book-report-data-structures-and-algorithms-in-python/


### Libros Opcionales

**Algunas personas recomiendan estos pero creo exageran, a menos que tenga muchos años de experiencia en Ingeniería de Software y espere una entrevista mucho más difícil:**

- [ ] [Algorithm Design Manual](http://www.amazon.com/Algorithm-Design-Manual-Steven-Skiena/dp/1849967202) (Skiena)
    - Como un resumen y un reconocimiento de problemas
    - La porción del catálogo de algoritmos está más allá del alcance de la dificultad que obtendrá en una entrevista.
    - Este libro consta de dos partes:
        - Libro de clase sobre estrcutura de datos y algoritmos
            - Pros:
                - Es un buen resumen como cualquier libro de algoritmos debe ser
                - Buenas historias de sus experiencias resolviendo problemas en la industria y en la academia
                - Ejemplos codificados en C
            - Cons:
                - Puede ser así de denso o impenetrable como los CLRS, en algunos casos, los CLRS pueden proveer una mejor alternativa para algunos temas
                - Capítulos 7, 8, 9 pueden ser un martirio intentar darles seguimiento, ya que no están bien explicados o requieren más cerebro del que tengo
                - No me malentiendan: Me gusta Skiena, su estilo de enseñanza y manierismos, pero no puedo ser material de Stony Brook.
        - Catálogo de algoritmos:
            - Es la verdadera razón para comprar el libro.
            - Actualizare esto, una vez haya pasado por este.
    - Se puede rentar en Kindle
    - Half.com es  un gran recurso para libros de textos a buen precio.
    - Respuestas:
        - [Solutions](http://www.algorithm.cs.sunysb.edu/algowiki/index.php/The_Algorithms_Design_Manual_(Second_Edition))
        - [Solutions](http://blog.panictank.net/category/algorithmndesignmanualsolutions/page/2/)
    - [Errata](http://www3.cs.stonybrook.edu/~skiena/algorist/book/errata)

- [ ] [Introduction to Algorithms](https://www.amazon.com/Introduction-Algorithms-3rd-MIT-Press/dp/0262033844)
    - **Importante:** Leer este libro tendrá un valor limitado. Este libro es un buen resumen de algoritmos y estructuras de datos, pero no le enseñará como escribir un buen código. Necesita ser capaz de codificar una solución decente eficientemente.
    - Half.com es un buen recurso para libros a buenos precios.
    - Aka CLR, a veces CLRS, porque Stein llego tarde al juego

- [ ] [Programming Pearls](http://www.amazon.com/Programming-Pearls-2nd-Jon-Bentley/dp/0201657880)
    - El primer par de capítulos presentan soluciones inteligentes a problemas de programación (algunos muy antiguos con cinta de datos) pero solo es una introducción. Esta es una guía sobre el diseño y la arquitectura del programa, como Code Complete, pero mucho más corto.
- ~~"Algorithms and Programming: Problems and Solutions" by Shen~~
    - Un buen libro, pero después de trabajar con algunos problemas me fruste con Pascal, ciclos do while, 1-arreglos indexados y resultados poco claros de satisfacción post-condición.
    - Prefiero pasar tiempo en problemas de codificación de otro libro o problemas de codificación en línea.


## Antes de iniciar

Esta lista creció a lo largo de varios meses, y sí, está un poco fuera de las manos.

Aquí algunos de mis errores para que pueda tener una mejor experiencia.

### 1. No recordará todo

Vi horas de video y tomé notas exactas de ellos, meses después había mucho que no recordaba. Pase tres días entre mis notas y haciendo tarjetas para poder repasar.
.

Lea por favor para que no cometa mis errores:

[Retaining Computer Science Knowledge](https://startupnextdoor.com/retaining-computer-science-knowledge/)

### 2. Use tarjetas para recordar

Para solucionar el problema construí un pequeño sitio de tarjetas para recordar donde podía añadir tarjetas de dos tipos: general y código.
Cada tarjeta tiene distinto formato.

Hice un sitio adaptado a moviles para revisarlo en mi celular y en mi Tablet, donde quiera estuviera.

Haga el suyo gratis:

- [Flashcards site repo](https://github.com/jwasham/computer-science-flash-cards)
- [My flash cards database (old - 1200 cards)](https://github.com/jwasham/computer-science-flash-cards/blob/master/cards-jwasham.db):
- [My flash cards database (new - 1800 cards)](https://github.com/jwasham/computer-science-flash-cards/blob/master/cards-jwasham-extreme.db):

Tenga en cuenta que empecé desde abajo y hay tarjetas que cubren todo, desde el lenguaje ensamblador y la trivia Python al Machine Learning y estadísticas. Es demasiado para lo que se requiere.

**Nota en las tarjetas:** La primera vez reconozca sabe la respuesta, no marque como conocido; necesita contestar muchas veces correctamente antes de que en realidad lo sepa. La repetición pondrá ese conocimiento de forma más profunda en su cerebro.

Una alternativa a usar mi sitio de tarjetas es [Anki](http://ankisrs.net/), que me ha sido recomendado muchas veces. Usa un sistema de repetición para ayudarle a recordar. Es amigable con el usuario y disponible para todas las plataformas y tiene un sistema de sincronización en la nube. Cuesta $25 en iOS pero es gratuito en las otras plataformas.

Mis tarjetas en el formato de Anki: https://ankiweb.net/shared/info/25173560 (Gracias[@xiewenya](https://github.com/xiewenya))

### 3. Revise, revise, revise

Mantuve una serie de hojas clave en ASCII, OSI stack, notación Big-O y más. Las estudie cuando tenía tiempo libre.

Tome un descanso de los problemas de programación por media hora y repase sus tarjetas.

### 4. Enfóquese

Hay muchas distracciones le pueden quitar tiempo valioso. Enfocarse y concentrarse es difícil.

## Lo que no verá cubierto

Estas son tecnologías predominantes, pero no están cubiertas por este plan de estudios:

- SQL
- Javascript
- HTML, CSS, y otras tecnologías front-end

## El plan diario

Algunos temas tomarán un día y otros tomarán varios. Algunos son solo para aprender sin nada que implementar.

Cada día yo tomé un tema de los siguientes, vi videos sobre el tema y escribía una implementación:

- C - usando estructuras y funciones que toman una estructura * y otra cosa como argumentos.
- C++ - sin utilizar tipos incorporados
- C++ - usando tipos incorporados, como std::list de STL para una lista enlazada
- Python - usando tipos incorporados (para seguir practicando Python)
- y escribir pruebas para asegurarme de que lo estoy haciendo bien, a veces simplemente usando simples declaraciones assert()
- Puede hacer Java o algo más, esto es solo lo mío.

No necesita todo esto. Solo necesita [un lenguaje para la entrevista](#escoja-un-lenguaje-para-la-entrevista).

¿Por qué codificar en todo esto?
- Práctica, práctica, práctica… hasta que me canse de ello y pueda hacerlo sin ningún problema (algunos usan técnicas y marcadores para recordar)
- Trabajar dentro de las restricciones primarias (asignar / liberar memoria sin ayuda del garbage collection (excepto Python))
- Hacer uso de los tipos incorporados para que tenga experiencia usando las herramientas de tipos incorporados para su uso en el mundo real (no escribiré mi propia implementación de listas enlazadas en producción)

Puede que no tenga tiempo de hacer todo esto para cada tema, pero lo intentare.

Puede ver mi código aquí:
 - [C](https://github.com/jwasham/practice-c)
 - [C++](https://github.com/jwasham/practice-cpp)
 - [Python](https://github.com/jwasham/practice-python)

No es necesario recordar las entrañas de cada algoritmo.

Escriba código en un pizarrón o en papel no en la computadora. Pruebe con alguna entrada de prueba. Después pruébelos en la computadora.

## Conocimientos Previos

- [ ] **Aprenda C**
    - C esta en todos lados. Verá ejemplos en libros, lecturas, videos, *en todo lugar* mientras esté estudiando.
    - [ ] [C Programming Language, Vol 2](https://www.amazon.com/Programming-Language-Brian-W-Kernighan/dp/0131103628)
        - Este es un libro corto, pero le dará un gran manejo en el lenguaje C y si lo practica un poco, rápidamente conseguirá ser experto. Comprender C le ayuda a entender cómo funcionan los programas y la memoria.
        - [answers to questions](https://github.com/lekkas/c-algorithms)

- [ ] **Como las computadoras procesan un programa:**
    - [ ] [How does CPU execute program (video)](https://www.youtube.com/watch?v=42KTvGYQYnA)
    - [ ] [Machine Code Instructions (video)](https://www.youtube.com/watch?v=Mv2XQgpbTNE)

## Complejidad algorítmica / Big-O / Análisis asintótico
- Nada a implementar
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
- [ ] TopCoder (incluye relaciones de recurrencia y teorema maestro):
    - [Computational Complexity: Section 1](https://www.topcoder.com/community/data-science/data-science-tutorials/computational-complexity-section-1/)
    - [Computational Complexity: Section 2](https://www.topcoder.com/community/data-science/data-science-tutorials/computational-complexity-section-2/)
- [ ] [Cheat sheet](http://bigocheatsheet.com/)


    Si algunas de las lecturas son muy matemáticas puede saltar a la parte inferior y ver las matemáticas discretas para tener el conocimiento base.

## Estructuras de datos

- ### Arreglos
    - Implemente un vector automáticamente redimensionable.
    - [ ] Descripción:
        - [Arrays (video)](https://www.coursera.org/learn/data-structures/lecture/OsBSF/arrays)
        - [UCBerkley CS61B - Linear and Multi-Dim Arrays (video)](https://youtu.be/Wp8oiO_CZZE?t=15m32s)
        - [Basic Arrays (video)](https://archive.org/details/0102WhatYouShouldKnow/02_04-basicArrays.mp4)
        - [Multi-dim (video)](https://archive.org/details/0102WhatYouShouldKnow/02_05-multidimensionalArrays.mp4)
        - [Dynamic Arrays (video)](https://www.coursera.org/learn/data-structures/lecture/EwbnV/dynamic-arrays)
        - [Jagged Arrays (video)](https://www.youtube.com/watch?v=1jtrQqYpt7g)
        - [Jagged Arrays (video)](https://archive.org/details/0102WhatYouShouldKnow/02_06-jaggedArrays.mp4)
        - [Resizing arrays (video)](https://archive.org/details/0102WhatYouShouldKnow/03_01-resizableArrays.mp4)
    - [ ] Implemente un vector (Arreglo mutable con redimensionamiento automático):
        - [ ] Practique codificar usando arreglos y apuntadores, y un apuntador matemático para saltar a un índice en lugar de utilizar la indexación.
        - [ ] Nueva arreglo de información primaria con memoria asignada
            - Puede asignar un arreglo entero, simplemente no use sus características
            - Empiece con 16, o si el número inicial es mayor, use potencias del 2 - 16, 32, 64, 128
        - [ ] size() – Número de elementos
        - [ ] capacity() – Número de elementos soportados
        - [ ] is_empty()
        - [ ] at(index) – Regresa el elemento al índice dado, falla si el índice esta fuera de sus limites
        - [ ] push(item)
        - [ ] insert(index, item) – Inserta el elemento en el índice, intercambia el valor del índice y desplaza los elementos a la derecha
        - [ ] prepend(item) – Puede usar para insertar encima del índice 0
        - [ ] pop() – Elimina del final, regresa el valor
        - [ ] delete(index) – Elimina el elemento en el índice, intercambia todos desplazándolos a la izquierda
        - [ ] remove(item) – Busca el valor y elimina el índice lo contiene(aunque este en varios lugares)
        - [ ] find(item) – Busca el valor y regresa el primer índice con ese valor, -1  si no encuentra
        - [ ] resize(Nueva capacidad) // Función privada
            - Cuando alcance el límite, redimensiona al doble el tamaño
            - Cuando se haga “pop” a un elemento, si el tamaño es 1/4 de la capacidad, redimensiona a la mitad
    - [ ] Tiempo
        - O(1) Para añadir/eliminar al final (Amortizado para asignaciones por más espacio), índice o actualización
        - O(n) Para insertar/eliminar donde sea
    - [ ] Espacio
        - Contiguo en la memoria, por lo que la proximidad ayuda al rendimiento
        - Espacio necesario = (capacidad de matriz, que es> = n) * tamaño del elemento, pero incluso si 2n, todavía O (n))

- ### Listas Enlazadas
    - [ ] Descripción:
        - [ ] [Singly Linked Lists (video)](https://www.coursera.org/learn/data-structures/lecture/kHhgK/singly-linked-lists)
        - [ ] [CS 61B - Linked Lists (video)](https://www.youtube.com/watch?v=sJtJOtXCW_M&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&index=5)
    - [ ] [C Code (video)](https://www.youtube.com/watch?v=QN6FPiD0Gzo)
            - No todo el video, solo porciones acerca de la estructura de nodos y la asignación de memoria.
    - [ ] Listas enlazadas vs Arreglos:
        - [Core Linked Lists Vs Arrays (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/rjBs9/core-linked-lists-vs-arrays)
        - [In The Real World Linked Lists Vs Arrays (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/QUaUd/in-the-real-world-lists-vs-arrays)
    - [ ] [why you should avoid linked lists (video)](https://www.youtube.com/watch?v=YQs6IC-vgmo)
    - [ ] Gotcha: Necesita tener conocimiento del apuntador a apuntador:
        (Cuando se pasa un apuntador a una función este puede cambiar la dirección a la que el apuntador apunta)
        Esta página es sólo para tener una idea sobre un apuntador a un apuntador. No recomiendo esta lista de estilo transversal. La legibilidad y sostenibilidad sufren debido a la astucia.
        - [Pointers to Pointers](https://www.eskimo.com/~scs/cclass/int/sx8.html)
    - [ ] Implemente (Lo hice con y sin un puntero de cola):
        - [ ] size() – Regresa el número de elementos en la lista
        - [ ] empty() – Un bool que regresa verdadero si está vacío
        - [ ] value_at(index) – Regresa el valor  del el n-avo elemento (iniciando con el  0 como primero)
        - [ ] push_front(value) – Añade un elemento al frente de la lista
        - [ ] pop_front() – Elimina el elemento frontal y regresa su valor
        - [ ] push_back(value) – Añade un elemento al final
        - [ ] pop_back() – Elimina el último elemento y devuelve su valor
        - [ ] front() – Obtiene el valor del elemento frontal
        - [ ] back() – Obtiene el valor del último elemento
        - [ ] insert(index, value) – Inserta valor en el índice, por lo que el valor actual en ese índice es apuntado al nuevo elemento en el índice
        - [ ] erase(index) – Borra el nodo del índice dado
        - [ ] value_n_from_end(n) – Regresa el valor del nodo en la n-ava posición a partir del final de la lista
        - [ ] reverse() – Pone al revés toda la lista
        - [ ] remove_value(value) – Borra el primer elemento en la lista con ese valor
    - [ ] Doble lista enlazada
        - [Description (video)](https://www.coursera.org/learn/data-structures/lecture/jpGKD/doubly-linked-lists)
        - No es necesario
- ### Pila
    - [ ] [Stacks (video)](https://www.coursera.org/learn/data-structures/lecture/UdKzQ/stacks)
    - [ ] [Using Stacks Last-In First-Out (video)](https://archive.org/details/0102WhatYouShouldKnow/05_01-usingStacksForLast-inFirst-out.mp4)
    - [ ] No implementaré. Implementando con arreglos es trivial.

- ### Cola o fila
    - [ ] [Using Queues First-In First-Out(video)](https://archive.org/details/0102WhatYouShouldKnow/05_03-usingQueuesForFirst-inFirst-out.mp4)
    - [ ] [Queue (video)](https://www.coursera.org/learn/data-structures/lecture/EShpq/queue)
    - [ ] [Circular buffer/FIFO](https://en.wikipedia.org/wiki/Circular_buffer)
    - [ ] [Priority Queues (video)](https://archive.org/details/0102WhatYouShouldKnow/05_04-priorityQueuesAndDeques.mp4)
    - [ ] Implementar usando listas enlazadas, con el puntero de la cola:
        - enqueue(value) – Añade el valor en la posición de la cola
        - dequeue() – Regresa el valor y elimina el valor más recientemente añadido(frontal)
        - empty()
    - [ ] Implementar usando arreglos de tamaño fijo:
        - enqueue(value) – Añade elemento al final del almacenamiento disponible
        - dequeue() – Regresa el valor y elimina el elemento más recientemente añadido
        - empty()
        - full()
    - [ ] Costo:
        - Una mala implementación usando lista enlazada donde se enqueue en la cabeza y dequeue en la cola sería O (n)
             Porque usted necesitaría el siguiente al último elemento, causando un recorrido completo cada dequeue
        - enqueue: O(1) (amortizado, Lista enlazada y arreglo [sondaje])
        - dequeue: O(1) (Lista enlazada y arreglo)
        - empty: O(1) (Lista enlazada y arreglo)

- ### Matriz asociativa
    - [ ] Videos:
        - [ ] [Hashing with Chaining (video)](https://www.youtube.com/watch?v=0M_kIqhwbFo&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=8)
        - [ ] [Table Doubling, Karp-Rabin (video)](https://www.youtube.com/watch?v=BRO7mVIFt08&index=9&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [ ] [Open Addressing, Cryptographic Hashing (video)](https://www.youtube.com/watch?v=rvdJDijO2Ro&index=10&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
        - [ ] [PyCon 2010: The Mighty Dictionary (video)](https://www.youtube.com/watch?v=C4Kc8xzcA68)
        - [ ] [(Advanced) Randomization: Universal & Perfect Hashing (video)](https://www.youtube.com/watch?v=z0lJ2k0sl1g&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=11)
        - [ ] [(Advanced) Perfect hashing (video)](https://www.youtube.com/watch?v=N0COwN14gt0&list=PL2B4EEwhKD-NbwZ4ezj7gyc_3yNrojKM9&index=4)

    - [ ] Cursos en línea:
        - [ ] [Understanding Hash Functions (video)](https://archive.org/details/0102WhatYouShouldKnow/06_02-understandingHashFunctions.mp4)
        - [ ] [Using Hash Tables (video)](https://archive.org/details/0102WhatYouShouldKnow/06_03-usingHashTables.mp4)
        - [ ] [Supporting Hashing (video)](https://archive.org/details/0102WhatYouShouldKnow/06_04-supportingHashing.mp4)
        - [ ] [Language Support Hash Tables (video)](https://archive.org/details/0102WhatYouShouldKnow/06_05-languageSupportForHashTables.mp4)
        - [ ] [Core Hash Tables (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/m7UuP/core-hash-tables)
        - [ ] [Data Structures (video)](https://www.coursera.org/learn/data-structures/home/week/3)
        - [ ] [Phone Book Problem (video)](https://www.coursera.org/learn/data-structures/lecture/NYZZP/phone-book-problem)
        - [ ] Matriz asociativas distribuidas:
            - [Instant Uploads And Storage Optimization In Dropbox (video)](https://www.coursera.org/learn/data-structures/lecture/DvaIb/instant-uploads-and-storage-optimization-in-dropbox)
            - [Distributed Hash Tables (video)](https://www.coursera.org/learn/data-structures/lecture/tvH8H/distributed-hash-tables)

    - [ ] Implementar con arreglo usando sondaje lineal
        - hash(k, m) - m es el tamaño de la matriz asociativa
        - add(key, value) – Si la llave ya existe , actualiza el valor
        - exists(key)
        - get(key)
        - remove(key)

## Información adicional
- ### Búsqueda binaria
    - [ ] [Binary Search (video)](https://www.youtube.com/watch?v=D5SrAga1pno)
    - [ ] [Binary Search (video)](https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search)
    - [ ] [detail](https://www.topcoder.com/community/data-science/data-science-tutorials/binary-search/)
    - [ ] Implementar:
        - Búsqueda binaria (en un arreglo ordenado de enteros)
        - Búsqueda binaria usando recursión

- ### Operaciones bit a bit
    - [ ] [Bits cheat sheet](https://github.com/jwasham/coding-interview-university/blob/master/extras/cheat%20sheets/bits-cheat-sheet.pdf) - Debería conocer varias de las potencias de 2 a partir de (2^1 to 2^16 and 2^32)
    - [ ] Obtenga un buen entendimiento de la manipulación de bits con: &, |, ^, ~, >>, <<
        - [ ] [words](https://en.wikipedia.org/wiki/Word_(computer_architecture))
        - [ ] Buena introducción:
            [Bit Manipulation (video)](https://www.youtube.com/watch?v=7jkIUgLC29I)
        - [ ] [C Programming Tutorial 2-10: Bitwise Operators (video)](https://www.youtube.com/watch?v=d0AwjSpNXR0)
        - [ ] [Bit Manipulation](https://en.wikipedia.org/wiki/Bit_manipulation)
        - [ ] [Bitwise Operation](https://en.wikipedia.org/wiki/Bitwise_operation)
        - [ ] [Bithacks](https://graphics.stanford.edu/~seander/bithacks.html)
        - [ ] [The Bit Twiddler](http://bits.stephan-brumme.com/)
        - [ ] [The Bit Twiddler Interactive](http://bits.stephan-brumme.com/interactive.html)
    - [ ] Complemento a uno y dos
        - [Binary: Plusses & Minuses (Why We Use Two's Complement) (video)](https://www.youtube.com/watch?v=lKTsv6iVxV4)
        - [1s Complement](https://en.wikipedia.org/wiki/Ones%27_complement)
        - [2s Complement](https://en.wikipedia.org/wiki/Two%27s_complement)
    - [ ] Contar bits puestos
        - [4 ways to count bits in a byte (video)](https://youtu.be/Hzuzo9NJrlc)
        - [Count Bits](https://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetKernighan)
        - [How To Count The Number Of Set Bits In a 32 Bit Integer](http://stackoverflow.com/questions/109023/how-to-count-the-number-of-set-bits-in-a-32-bit-integer)
    - [ ] Redondeo a la próxima potencia de 2:
        - [Round Up To Next Power Of Two](http://bits.stephan-brumme.com/roundUpToNextPowerOfTwo.html)
    - [ ] Valor de intercambio:
        - [Swap](http://bits.stephan-brumme.com/swap.html)
    - [ ] Valores absolutos:
        - [Absolute Integer](http://bits.stephan-brumme.com/absInteger.html)

## Árboles
- ### Árboles - Notas & Antecedentes
    - [ ] [Series: Core Trees (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/ovovP/core-trees)
    - [ ] [Series: Trees (video)](https://www.coursera.org/learn/data-structures/lecture/95qda/trees)
    - Construcción básica de árboles
    - Recorrido
    - Algoritmos de manipulación
    - BFS (búsqueda en amplitud)
        - [MIT (video)](https://www.youtube.com/watch?v=s-CYnVz-uh4&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=13)
        - Orden de nivel (BFS, usando colas)
            Tiempo de complejidad: O(n)
            Espacio de complejidad: Mejor: O(1), Peor: O(n/2)=O(n)
    - DFS (búsqueda en profundidad)
        - [MIT (video)](https://www.youtube.com/watch?v=AfSk24UTFS8&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=14)
        - Notas:
            Tiempo de complejidad: O(n)
            Espacio de complejidad:
                Mejor: O(log n) – Promedio de la altura del árbol
                Peor: O(n)
        - inorder (DFS: left, self, right)
        - postorder (DFS: left, right, self)
        - preorder (DFS: self, left, right)

- ### Árboles de búsqueda binaria: BSTs
    - [ ] [Binary Search Tree Review (video)](https://www.youtube.com/watch?v=x6At0nzX92o&index=1&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
    - [ ] [Series (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/p82sw/core-introduction-to-binary-search-trees)
        - Comienza con la tabla de símbolos y pasa por las aplicaciones BST
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
    - [ ] Implementar:
        - [ ] insert    // Inserta valores en el árbol
        - [ ] get_node_count // Obtener la cuenta de los valores almacenados
        - [ ] print_values // Imprime los valores en el árbol, del min al max
        - [ ] delete_tree
        - [ ] is_in_tree // Devuelve verdadero si el valor dado existe en el árbol
        - [ ] get_height // Regresa la altura en los nodos (La altura de cada nodo es 1)
        - [ ] get_min   // Regresa el valor mínimo almacenado en el árbol
        - [ ] get_max   // Regresa el valor máximo almacenado en el árbol
        - [ ] is_binary_search_tree
        - [ ] delete_value
        - [ ] get_successor // Regresa el siguiente valor más alto en el árbol después del valor dado,-1 si ninguno

- ### Montículo / Colas de Prioridad / Montículo binario
    - Visto como un árbol, pero usualmente es lineal en el almacenamiento (arreglo, lista enlazada)
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
    - [ ] [CS 61B Lecture 24: Priority Queues (video)](https://www.youtube.com/watch?v=yIUFT6AKBGE&index=24&list=PL4BBB74C7D2A1049C)
    - [ ] [Linear Time BuildHeap (max-heap)](https://www.youtube.com/watch?v=MiyLo8adrWw)
    - [ ] Implementar una  cola máxima:
        - [ ] insert
        - [ ] sift_up – Necesario para el insert
        - [ ] get_max – Regresa el máximo elemento, sin eliminarlo
        - [ ] get_size() – Regresa el número de elementos almacenados
        - [ ] is_empty() – Devuelve verdadero si la cola está vacía
        - [ ] extract_max – Regresa el máximo elemento, eliminándolo
        - [ ] sift_down – Necesario para extract_max
        - [ ] remove(i) – Elimina el elemento en el índice x
        - [ ] heapify – Crea una cola de un arreglo de elementos, necesario para heap_sort
        - [ ] heap_sort() – Toma un arreglo no ordenado y lo convierte en un arreglo ordenando en su lugar usando una cola máxima
            - Nota: Usar una cola mínima reduciría operaciones, pero duplicaría el espacio necesario (No se puede hacer en lugar).

## Ordenamientos
- [ ] Notas:
    - Implementar ordenamientos y conocer el mejor/peor de los casos y el promedio de complejidad de cada uno:
        - No ordenamiento de burbuja - Es terrible - O(n^2), excepto cuando n <= 16
    - [ ] Estabilidad en algoritmos de ordenamiento("¿Es Quicksort estable?")
        - [Sorting Algorithm Stability](https://en.wikipedia.org/wiki/Sorting_algorithm#Stability)
        - [Stability In Sorting Algorithms](http://stackoverflow.com/questions/1517793/stability-in-sorting-algorithms)
        - [Stability In Sorting Algorithms](http://www.geeksforgeeks.org/stability-in-sorting-algorithms/)
        - [Sorting Algorithms - Stability](http://homepages.math.uic.edu/~leon/cs-mcs401-s08/handouts/stability.pdf)
    - [ ] ¿Cuáles algoritmos pueden ser usados en listas enlazadas? ¿Cuáles en arreglos? ¿Cuál en ambos?
        - No recomendaría ordenar una lista enlazada, pero el ordenamiento por mezcla es realizable.
        - [Merge Sort For Linked List](http://www.geeksforgeeks.org/merge-sort-for-linked-list/)

- Para ordenamientos por montículos, vea la estructura de datos de Colas o filas arriba. El ordenamiento por montículos es estupendo, pero inestable.

- [ ] [Sedgewick - Mergesort (5 videos)](https://www.youtube.com/watch?v=4nKwesx_c8E&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9)
    - [ ] [1. Mergesort](https://www.youtube.com/watch?v=4nKwesx_c8E&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9&index=1)
    - [ ] [2. Bottom up Mergesort](https://www.youtube.com/watch?v=HGOIGUYjeyk&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9&index=2)
    - [ ] [3. Sorting Complexity](https://www.youtube.com/watch?v=WvU_mIWo0Ac&index=3&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9)
    - [ ] [4. Comparators](https://www.youtube.com/watch?v=7MvC1kmBza0&index=4&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9)
    - [ ] [5. Stability](https://www.youtube.com/watch?v=XD_5iINB5GI&index=5&list=PLe-ggMe31CTeunC6GZHFBmQx7EKtjbGf9)

- [ ] [Sedgewick - Quicksort (4 videos)](https://www.youtube.com/playlist?list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1)
    - [ ] [1. Quicksort](https://www.youtube.com/watch?v=5M5A7qPWk84&index=1&list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1)
    - [ ] [2. Selection](https://www.youtube.com/watch?v=CgVYfSyct_M&index=2&list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1)
    - [ ] [3. Duplicate Keys](https://www.youtube.com/watch?v=WBFzOYJ5ybM&index=3&list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1)
    - [ ] [4. System Sorts](https://www.youtube.com/watch?v=rejpZ2htBjE&index=4&list=PLe-ggMe31CTeE3x2-nF1-toca1QpuXwE1)

- [ ] UC Berkeley:
    - [ ] [CS 61B Lecture 29: Sorting I (video)](https://www.youtube.com/watch?v=EiUvYS2DT6I&list=PL4BBB74C7D2A1049C&index=29)
    - [ ] [CS 61B Lecture 30: Sorting II (video)](https://www.youtube.com/watch?v=2hTY3t80Qsk&list=PL4BBB74C7D2A1049C&index=30)
    - [ ] [CS 61B Lecture 32: Sorting III (video)](https://www.youtube.com/watch?v=Y6LOLpxg6Dc&index=32&list=PL4BBB74C7D2A1049C)
    - [ ] [CS 61B Lecture 33: Sorting V (video)](https://www.youtube.com/watch?v=qNMQ4ly43p4&index=33&list=PL4BBB74C7D2A1049C)

- [ ] [Bubble Sort (video)](https://www.youtube.com/watch?v=P00xJgWzz2c&index=1&list=PL89B61F78B552C1AB)
- [ ] [Analyzing Bubble Sort (video)](https://www.youtube.com/watch?v=ni_zk257Nqo&index=7&list=PL89B61F78B552C1AB)
- [ ] [Insertion Sort, Merge Sort (video)](https://www.youtube.com/watch?v=Kg4bqzAqRBM&index=3&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
- [ ] [Insertion Sort (video)](https://www.youtube.com/watch?v=c4BRHC7kTaQ&index=2&list=PL89B61F78B552C1AB)
- [ ] [Merge Sort (video)](https://www.youtube.com/watch?v=GCae1WNvnZM&index=3&list=PL89B61F78B552C1AB)
- [ ] [Quicksort (video)](https://www.youtube.com/watch?v=y_G9BkAm6B8&index=4&list=PL89B61F78B552C1AB)
- [ ] [Selection Sort (video)](https://www.youtube.com/watch?v=6nDMgr0-Yyo&index=8&list=PL89B61F78B552C1AB)

- [ ] Codificando Merge sort:
    - [ ] [Using output array (C)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/sorting/mergesort.c)
    - [ ] [Using output array (Python)](https://github.com/jwasham/practice-python/blob/master/merge_sort/merge_sort.py)
    - [ ] [In-place (C++)](https://github.com/jwasham/practice-cpp/blob/master/merge_sort/merge_sort.cc)
- [ ] Codificando Quick sort:
    - [ ] [Implementation (C)](http://www.cs.yale.edu/homes/aspnes/classes/223/examples/randomization/quick.c)
    - [ ] [Implementation (C)](https://github.com/jwasham/practice-c/blob/master/quick_sort/quick_sort.c)
    - [ ] [Implementation (Python)](https://github.com/jwasham/practice-python/blob/master/quick_sort/quick_sort.py)

- [ ] Implemente:
    - [ ] Mergesort: O(n log n) Promedio y peor caso
    - [ ] Quicksort O(n log n) Caso promedio
    - El ordenamiento por selección y el de inserción ambos son O(n^2) Promedio y peor caso
    - Para ordenamientos por montículos, vea la estructura de datos de Colas o filas arriba.

- [ ] No requeridos, pero los recomendaría:
    - [ ] [Sedgewick - Radix Sorts (6 videos)](https://www.youtube.com/playlist?list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53)
        - [ ] [1. Strings in Java](https://www.youtube.com/watch?v=zRzU-FWsjNU&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53&index=6)
        - [ ] [2. Key Indexed Counting](https://www.youtube.com/watch?v=CtgKYmXs62w&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53&index=5)
        - [ ] [3. Least Significant Digit First String Radix Sort](https://www.youtube.com/watch?v=2pGVq_BwPKs&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53&index=4)
        - [ ] [4. Most Significant Digit First String Radix Sort](https://www.youtube.com/watch?v=M3cYNY90R6c&index=3&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53)
        - [ ] [5. 3 Way Radix Quicksort](https://www.youtube.com/watch?v=YVl58kfE6i8&index=2&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53)
        - [ ] [6. Suffix Arrays](https://www.youtube.com/watch?v=HKPrVm5FWvg&list=PLe-ggMe31CTcNvUX9E3tQeM6ntrdR8e53&index=1)
    - [ ] [Radix Sort](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#radixSort)
    - [ ] [Radix Sort (video)](https://www.youtube.com/watch?v=xhr26ia4k38)
    - [ ] [Radix Sort, Counting Sort (linear time given constraints) (video)](https://www.youtube.com/watch?v=Nz1KZXbghj8&index=7&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [Randomization: Matrix Multiply, Quicksort, Freivalds' algorithm (video)](https://www.youtube.com/watch?v=cNB2lADK3_s&index=8&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [Sorting in Linear Time (video)](https://www.youtube.com/watch?v=pOKy3RZbSws&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf&index=14)

Como resumen aquí esta una representación visual de [15 algoritmos de ordenamiento](https://www.youtube.com/watch?v=kPRA0W1kECg).
Si necesita más detalle de este tema vea “Ordenamientos” en [Detalles adicionales de ciertos temas](#detalles-adicionales-de-ciertos-temas)

## Grafos

Los grafos pueden ser usados para representar muchos problemas en las Ciencias de la Computación, así que es una sección larga, como lo son los árboles y ordenamientos.

- Notas:
    - Hay cuatro formas básicas de representar un grafo en memoria:
        - Objetos y apuntadores
        - Matriz adyacente
        - Lista adyacente
        - Mapa adyacente
    - Familiarícese con cada representación y sus pros y contras
    - BFS and DFS – Conozca su complejidad computacional, sus compromisos y cómo implementarlos en código real
    - Cuando se le haga una pregunta busqué una solución basada en grafos, si no encuentra continúe.

- [ ] Lecturas de Skiena – Gran introducción):
    - [ ] [CSE373 2012 - Lecture 11 - Graph Data Structures (video)](https://www.youtube.com/watch?v=OiXxhDrFruw&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=11)
    - [ ] [CSE373 2012 - Lecture 12 - Breadth-First Search (video)](https://www.youtube.com/watch?v=g5vF8jscteo&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=12)
    - [ ] [CSE373 2012 - Lecture 13 - Graph Algorithms (video)](https://www.youtube.com/watch?v=S23W6eTcqdY&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=13)
    - [ ] [CSE373 2012 - Lecture 14 - Graph Algorithms (con't) (video)](https://www.youtube.com/watch?v=WitPBKGV0HY&index=14&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [CSE373 2012 - Lecture 15 - Graph Algorithms (con't 2) (video)](https://www.youtube.com/watch?v=ia1L30l7OIg&index=15&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)
    - [ ] [CSE373 2012 - Lecture 16 - Graph Algorithms (con't 3) (video)](https://www.youtube.com/watch?v=jgDOQq6iWy8&index=16&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b)

- [ ] Grafos (revisión y más):

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

- Curso Completo de Coursera:
    - [ ] [Algorithms on Graphs (video)](https://www.coursera.org/learn/algorithms-on-graphs/home/welcome)

- Implementaré:
    - [ ] DFS con lista de adyacencia (recursión)
    - [ ] DFS con la lista de adyacencia (iterativa con la pila)
    - [ ] DFS con matriz de adyacencia (recursión)
    - [ ] DFS con matriz de adyacencia (iterativa con pila)
    - [ ] BFS con lista de adyacencia
    - [ ] BFS con matriz de adyacencia
    - [ ] Ruta de acceso de una sola fuente más corta (Dijkstra)
    - [ ] Árbol de expansión mínimo
    - Algoritmos basados en DFS (ver videos de Aduni arriba):
        - [ ] Comprobar el ciclo (necesario para el tipo topológico, ya que vamos a comprobar el ciclo antes de comenzar)
        - [ ] Clasificación topológica
        - [ ] Cuenta los componentes conectados en un grafo
        - [ ] Lista de componentes fuertemente conectados
        - [ ] Verificación de grafo bipartito


Obtendrá más práctica de grafos en el libro de Skiena (vea Sección de libros debajo) y en los libros de entrevistas

## Más información adicional
- ### Recursión
    - [ ] Conferencias de Stanford sobre la recursividad y retroceso:
        - [ ] [Lecture 8 | Programming Abstractions (video)](https://www.youtube.com/watch?v=gl3emqCuueQ&list=PLFE6E58F856038C69&index=8)
        - [ ] [Lecture 9 | Programming Abstractions (video)](https://www.youtube.com/watch?v=uFJhEPrbycQ&list=PLFE6E58F856038C69&index=9)
        - [ ] [Lecture 10 | Programming Abstractions (video)](https://www.youtube.com/watch?v=NdF1QDTRkck&index=10&list=PLFE6E58F856038C69)
        - [ ] [Lecture 11 | Programming Abstractions (video)](https://www.youtube.com/watch?v=p-gpaIGRCQI&list=PLFE6E58F856038C69&index=11)
    - Cuando es apropiado usarlo
    - ¿Cómo es la recursión de cola mejor que no?
        - [ ] [What Is Tail Recursion Why Is It So Bad?](https://www.quora.com/What-is-tail-recursion-Why-is-it-so-bad)
        - [ ] [Tail Recursion (video)](https://www.youtube.com/watch?v=L1jjXGfxozc)

- ### Programación Dinámica
    - Este tema puede ser bastante difícil, ya que cada problema soluble PD debe definirse como una relación de recursión, y llegar a ella puede ser complicado.
     - Sugiero que busque muchos ejemplos de problemas de PD hasta que tenga una comprensión sólida del patrón involucrado.
    - [ ] Videos:
        - Los videos de Skiena pueden ser duros de seguir ya que a veces usa el pizarrón que es demasiado pequeño para ver
        - [ ] [Skiena: CSE373 2012 - Lecture 19 - Introduction to Dynamic Programming (video)](https://youtu.be/Qc2ieXRgR0k?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=1718)
        - [ ] [Skiena: CSE373 2012 - Lecture 20 - Edit Distance (video)](https://youtu.be/IsmMhMdyeGY?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=2749)
        - [ ] [Skiena: CSE373 2012 - Lecture 21 - Dynamic Programming Examples (video)](https://youtu.be/o0V9eYF4UI8?list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&t=406)
        - [ ] [Skiena: CSE373 2012 - Lecture 22 - Applications of Dynamic Programming (video)](https://www.youtube.com/watch?v=dRbMC1Ltl3A&list=PLOtl7M3yp-DV69F32zdK7YJcNXpTunF2b&index=22)
        - [ ] [Simonson: Dynamic Programming 0 (starts at 59:18) (video)](https://youtu.be/J5aJEcOr6Eo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3558)
        - [ ] [Simonson: Dynamic Programming I - Lecture 11 (video)](https://www.youtube.com/watch?v=0EzHjQ_SOeU&index=11&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
        - [ ] [Simonson: Dynamic programming II - Lecture 12 (video)](https://www.youtube.com/watch?v=v1qiRwuJU7g&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=12)
        - [ ] Lista de problemas individuales de PD (cada uno es corto):
            [Dynamic Programming (video)](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)
    - [ ] Notas de la clase de Yale:
        - [ ] [Dynamic Programming](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#dynamicProgramming)
    - [ ] Coursera:
        - [ ] [The RNA secondary structure problem (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/80RrW/the-rna-secondary-structure-problem)
        - [ ] [A dynamic programming algorithm (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/PSonq/a-dynamic-programming-algorithm)
        - [ ] [Illustrating the DP algorithm (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/oUEK2/illustrating-the-dp-algorithm)
        - [ ] [Running time of the DP algorithm (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/nfK2r/running-time-of-the-dp-algorithm)
        - [ ] [DP vs. recursive implementation (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/M999a/dp-vs-recursive-implementation)
        - [ ] [Global pairwise sequence alignment (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/UZ7o6/global-pairwise-sequence-alignment)
        - [ ] [Local pairwise sequence alignment (video)](https://www.coursera.org/learn/algorithmic-thinking-2/lecture/WnNau/local-pairwise-sequence-alignment)

- ### Programación Orientada a Objetos
    - [ ] [Optional: UML 2.0 Series (video)](https://www.youtube.com/watch?v=OkC7HKtiZC0&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc)
    - [ ] Object-Oriented Software Engineering: Software Dev Using UML and Java (21 videos):
        - Puede omitir esto si tiene una gran comprensión de OO y OO prácticas de diseño.
        - [OOSE: Software Dev Using UML and Java](https://www.youtube.com/playlist?list=PLJ9pm_Rc9HesnkwKlal_buSIHA-jTZMpO)
    - [ ] Principios SOLID OOP:
        - [ ] [Bob Martin SOLID Principles of Object Oriented and Agile Design (video)](https://www.youtube.com/watch?v=TMuno5RZNeE)
        - [ ] [SOLID Principles (video)](https://www.youtube.com/playlist?list=PL4CE9F710017EA77A)
        - [ ] S - [Single Responsibility Principle](http://www.oodesign.com/single-responsibility-principle.html) | [Single responsibility to each Object](http://www.javacodegeeks.com/2011/11/solid-single-responsibility-principle.html)
            - [more flavor](https://docs.google.com/open?id=0ByOwmqah_nuGNHEtcU5OekdDMkk)
        - [ ] O - [Open/Closed Principal](http://www.oodesign.com/open-close-principle.html)  | [On production level Objects are ready for extension but not for modification](https://en.wikipedia.org/wiki/Open/closed_principle)
            - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgN2M5MTkwM2EtNWFkZC00ZTI3LWFjZTUtNTFhZGZiYmUzODc1&hl=en)
        - [ ] L - [Liskov Substitution Principal](http://www.oodesign.com/liskov-s-substitution-principle.html) | [Base Class and Derived class follow ‘IS A’ principal](http://stackoverflow.com/questions/56860/what-is-the-liskov-substitution-principle)
            - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgNzAzZjA5ZmItNjU3NS00MzQ5LTkwYjMtMDJhNDU5ZTM0MTlh&hl=en)
        - [ ] I - [Interface segregation principle](http://www.oodesign.com/interface-segregation-principle.html) | Los clientes no deberían ser forzados a implementar interfaces no usarán
            - [Interface Segregation Principle in 5 minutes (video)](https://www.youtube.com/watch?v=3CtAfl7aXAQ)
            - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgOTViYjJhYzMtMzYxMC00MzFjLWJjMzYtOGJiMDc5N2JkYmJi&hl=en)
        - [ ] D -[Dependency Inversion principle](http://www.oodesign.com/dependency-inversion-principle.html) | Reducir la dependencia en la composición de los objetos.
            - [Why Is The Dependency Inversion Principle And Why Is It Important](http://stackoverflow.com/questions/62539/what-is-the-dependency-inversion-principle-and-why-is-it-important)
            - [more flavor](http://docs.google.com/a/cleancoder.com/viewer?a=v&pid=explorer&chrome=true&srcid=0BwhCYaYDn8EgMjdlMWIzNGUtZTQ0NC00ZjQ5LTkwYzQtZjRhMDRlNTQ3ZGMz&hl=en)

- ### Patrones de diseño
    - [ ] [Quick UML review (video)](https://www.youtube.com/watch?v=3cmzqZzwNDM&list=PLGLfVvz_LVvQ5G-LdJ8RLqe-ndo7QITYc&index=3)
    - [ ] Aprenda estos patrones:
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
        - Sé que el libro canónico es "Design Patterns: Elements of Reusable Object-Oriented Software", pero Head First es ideal para principiantes a OO.
    - [ ] [Handy reference: 101 Design Patterns & Tips for Developers](https://sourcemaking.com/design-patterns-and-tips)
    - [ ] [Design patterns for humans](https://github.com/kamranahmedse/design-patterns-for-humans#structural-design-patterns)


- ### Combinatorias (n elije k) & Probabilidad
    - [ ] [Math Skills: How to find Factorial, Permutation and Combination (Choose) (video)](https://www.youtube.com/watch?v=8RRo6Ti9d0U)
    - [ ] [Make School: Probability (video)](https://www.youtube.com/watch?v=sZkAAk9Wwa4)
    - [ ] [Make School: More Probability and Markov Chains (video)](https://www.youtube.com/watch?v=dNaJg-mLobQ)
    - [ ] Khan Academy:
        - Diseño del curso:
            - [ ] [Basic Theoretical Probability](https://www.khanacademy.org/math/probability/probability-and-combinatorics-topic)
        - Solo los videos - 41 (cada uno simple y corto):
            - [ ] [Probability Explained (video)](https://www.youtube.com/watch?v=uzkc-qNVoOk&list=PLC58778F28211FA19)

- ### NP, NP-Completo y Algoritmos de aproximación
    - Conozca acerca de las clases más famosas de problemas de NP-completo, tales como el vendedor ambulante y el problema de la mochila y sea capaz de reconocerlos cuando un entrevistador se los pide disfrazados.
    - Conozca que significa NP-completo.
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
    - Peter Norvig discute soluciones casi óptimas para el problema del vendedor ambulante:
        - [Jupyter Notebook](http://nbviewer.jupyter.org/url/norvig.com/ipython/TSP.ipynb)
    - Paginas 1048 - 1140 en CLRS si lo tiene.

- ### Memoria cache
    - [ ] LRU cache:
        - [ ] [The Magic of LRU Cache (100 Days of Google Dev) (video)](https://www.youtube.com/watch?v=R5ON3iwx78M)
        - [ ] [Implementing LRU (video)](https://www.youtube.com/watch?v=bq6N7Ym81iI)
        - [ ] [LeetCode - 146 LRU Cache (C++) (video)](https://www.youtube.com/watch?v=8-FZRAjR7qU)
    - [ ] CPU cache:
        - [ ] [MIT 6.004 L15: The Memory Hierarchy (video)](https://www.youtube.com/watch?v=vjYF_fAZI5E&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-&index=24)
        - [ ] [MIT 6.004 L16: Cache Issues (video)](https://www.youtube.com/watch?v=ajgC3-pyGlk&index=25&list=PLrRW1w6CGAcXbMtDFj205vALOGmiRc82-)

- ### Procesos e hilos
    - [ ] Computer Science 162 - Operating Systems (25 videos):
        - Para los procesos e hilos vea los videos 1-11
        - [Operating Systems and System Programming (video)](https://www.youtube.com/playlist?list=PL-XXv-cvA_iBDyz-ba4yDskqMDY6A1w_c)
    - [What Is The Difference Between A Process And A Thread?](https://www.quora.com/What-is-the-difference-between-a-process-and-a-thread)
    - Cubre:
        - Procesos, Hilos, Temas de Concurrencia
             - Diferencia entre procesos e hilos
             - Procesos
             - Hilos
             - Cerraduras
             - Mutexes
             - Semáforos
             - Monitores
             - Cómo trabajan ellos
             - Bloqueo
             - Livelock
        - Actividad de CPU, interrupciones, conmutación de contexto
        - Moderna concurrencia construida con procesadores multinúcleo
        - [Paging, segmentation and virtual memory (video)](https://www.youtube.com/watch?v=LKe7xK0bF7o&list=PLCiOXwirraUCBE9i_ukL8_Kfg6XNv7Se8&index=2)
        - [Interrupts (video)](https://www.youtube.com/watch?v=uFKi2-J-6II&list=PLCiOXwirraUCBE9i_ukL8_Kfg6XNv7Se8&index=3)
        - [Scheduling (video)](https://www.youtube.com/watch?v=-Gu5mYdKbu4&index=4&list=PLCiOXwirraUCBE9i_ukL8_Kfg6XNv7Se8)
        - Necesidades de recursos de proceso (memoria: código, almacenamiento estático, pila, monticulo y también descriptores de archivo, i /o)
        - Necesidades de recursos de hilos (partes anteriores (menos pila) con otros hilos en el mismo proceso, pero cada uno tiene su propio PC, contador de pila, registros y pila)
        - Bifurcación es realmente copia en escritura (sólo lectura) hasta que el nuevo proceso escribe en memoria, entonces hace una copia completa.
        - Cambio de contexto
            - Cómo se inicia el cambio de contexto por el sistema operativo y el hardware subyacente
    - [ ] [threads in C++ (series - 10 videos)](https://www.youtube.com/playlist?list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M)
    - [ ] concurrency in Python (videos):
        - [ ] [Short series on threads](https://www.youtube.com/playlist?list=PL1H1sBF1VAKVMONJWJkmUh6_p8g4F2oy1)
        - [ ] [Python Threads](https://www.youtube.com/watch?v=Bs7vPNbB9JM)
        - [ ] [Understanding the Python GIL (2010)](https://www.youtube.com/watch?v=Obt-vMVdM8s)
            - [reference](http://www.dabeaz.com/GIL)
        - [ ] [David Beazley - Python Concurrency From the Ground Up: LIVE! - PyCon 2015](https://www.youtube.com/watch?v=MCs5OvhV9S4)
        - [ ] [Keynote David Beazley - Topics of Interest (Python Asyncio)](https://www.youtube.com/watch?v=ZzfHjytDceU)
        - [ ] [Mutex in Python](https://www.youtube.com/watch?v=0zaPs8OtyKY)

- ### Documentos
    - La lectura de todos de extremo a extremo con la comprensión completa probablemente tomará más tiempo del que tiene. Recomiendo ser selectivo en los documentos y sus secciones.
    - [Love classic papers?](https://www.cs.cmu.edu/~crary/819-f09/)
    - [ ] [1978: Communicating Sequential Processes](http://spinroot.com/courses/summer/Papers/hoare_1978.pdf)
        - [implemented in Go](https://godoc.org/github.com/thomas11/csp)
    - [ ] [2003: The Google File System](http://static.googleusercontent.com/media/research.google.com/en//archive/gfs-sosp2003.pdf)
        - Remplazado por Colossus en 2012
    - [ ] [2004: MapReduce: Simplified Data Processing on Large Clusters]( http://static.googleusercontent.com/media/research.google.com/en//archive/mapreduce-osdi04.pdf)
        - ¿Casi totalmente remplazado por Cloud Dataflow?
    - [ ] [2006: Bigtable: A Distributed Storage System for Structured Data](https://static.googleusercontent.com/media/research.google.com/en//archive/bigtable-osdi06.pdf)
        - [An Inside Look at Google BigQuery](https://cloud.google.com/files/BigQueryTechnicalWP.pdf)
    - [ ] [2006: The Chubby Lock Service for Loosely-Coupled Distributed Systems](https://research.google.com/archive/chubby-osdi06.pdf)
    - [ ] [2007: Dynamo: Amazon’s Highly Available Key-value Store](https://www.akkadia.org/drepper/cpumemory.pdf)
        - The Dynamo paper kicked off the NoSQL revolution
    - [ ] [2007: What Every Programmer Should Know About Memory (very long, and the author encourages skipping of some sections)](https://www.akkadia.org/drepper/cpumemory.pdf)
    - [ ] [2010: Dapper, a Large-Scale Distributed Systems Tracing Infrastructure](https://research.google.com/pubs/archive/36356.pdf)
    - [ ] [2010: Dremel: Interactive Analysis of Web-Scale Datasets](https://static.googleusercontent.com/media/research.google.com/en//pubs/archive/36632.pdf)
    - [ ] [2012: Google's Colossus](https://www.wired.com/2012/07/google-colossus/)
        - Documento no disponible
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

- ### Pruebas
    - A cubrir:
        - Cómo funciona la prueba unitaria
        - ¿Qué son objetos simulados?
        - ¿Qué es la prueba de integración?
        - ¿Qué es la inyección de dependencia?
    - [ ] [Agile Software Testing with James Bach (video)](https://www.youtube.com/watch?v=SAhJf36_u5U)
    - [ ] [Open Lecture by James Bach on Software Testing (video)](https://www.youtube.com/watch?v=ILkT_HV9DVU)
    - [ ] [Steve Freeman - Test-Driven Development (that’s not what we meant) (video)](https://vimeo.com/83960706)
        - [slides](http://gotocon.com/dl/goto-berlin-2013/slides/SteveFreeman_TestDrivenDevelopmentThatsNotWhatWeMeant.pdf)
    - [ ] [TDD is dead. Long live testing.](http://david.heinemeierhansson.com/2014/tdd-is-dead-long-live-testing.html)
    - [ ] [Is TDD dead? (video)](https://www.youtube.com/watch?v=z9quxZsLcfo)
    - [ ] [Video series (152 videos) - not all are needed (video)](https://www.youtube.com/watch?v=nzJapzxH_rE&list=PLAwxTw4SYaPkWVHeC_8aSIbSxE_NXI76g)
    - [ ] [Test-Driven Web Development with Python](http://www.obeythetestinggoat.com/pages/book.html#toc)
    - [ ] Inyección de dependencia:
        - [ ] [video](https://www.youtube.com/watch?v=IKD2-MAkXyQ)
        - [ ] [Tao Of Testing](http://jasonpolites.github.io/tao-of-testing/ch3-1.1.html)
    - [ ] [How to write tests](http://jasonpolites.github.io/tao-of-testing/ch4-1.1.html)

- ### Planificador
    - En un SO, Como funciona
    - Se pueden obtener de los videos del sistema operativo

- ### Implementar rutinas del sistema
    - Entienda lo que hay debajo de las API de programación que usa
    - ¿Puede implementarlas?

- ### Búsqueda de cadenas y manipulaciones
    - [ ] [Sedgewick - Suffix Arrays (video)](https://www.youtube.com/watch?v=HKPrVm5FWvg)
    - [ ] [Sedgewick - Substring Search (videos)](https://www.youtube.com/watch?v=2LvvVFCEIv8&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66&index=5)
        - [ ] [1. Introduction to Substring Search](https://www.youtube.com/watch?v=2LvvVFCEIv8&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66&index=5)
        - [ ] [2. Brute-Force Substring Search](https://www.youtube.com/watch?v=CcDXwIGEXYU&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66&index=4)
        - [ ] [3. Knuth-Morris Pratt](https://www.youtube.com/watch?v=n-7n-FDEWzc&index=3&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66)
        - [ ] [4. Boyer-Moore](https://www.youtube.com/watch?v=fI7Ch6pZXfM&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66&index=2)
        - [ ] [5. Rabin-Karp](https://www.youtube.com/watch?v=QzI0p6zDjK4&index=1&list=PLe-ggMe31CTdAdjXB3lIuf2maubzo9t66)
    - [ ] [Search pattern in text (video)](https://www.coursera.org/learn/data-structures/lecture/tAfHI/search-pattern-in-text)

    Si necesita más detalle de este tema, vea "String Matching" en [Detalles adicionales de ciertos temas](#detalles-adicionales-de-ciertos-temas)

- ### Tries
    - Note que existen diferentes tipos de tries. Algunos tienen prefijos, otros no, y algunos usan cadenas en lugar de bits para seguir el camino.
    - Leo a través del código, pero no implementaría.
    - [ ] [Sedgewick - Tries (3 videos)](https://www.youtube.com/playlist?list=PLe-ggMe31CTe9IyG9MB8vt5xUJeYgOYRQ)
        - [ ] [1. R Way Tries](https://www.youtube.com/watch?v=buq2bn8x3Vo&index=3&list=PLe-ggMe31CTe9IyG9MB8vt5xUJeYgOYRQ)
        - [ ] [2. Ternary Search Tries](https://www.youtube.com/watch?v=LelV-kkYMIg&index=2&list=PLe-ggMe31CTe9IyG9MB8vt5xUJeYgOYRQ)
        - [ ] [3. Character Based Operations](https://www.youtube.com/watch?v=00YaFPcC65g&list=PLe-ggMe31CTe9IyG9MB8vt5xUJeYgOYRQ&index=1)
    - [ ] [Notes on Data Structures and Programming Techniques](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Tries)
    - [ ] Videos de cursos cortos:
        - [ ] [Introduction To Tries (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/08Xyf/core-introduction-to-tries)
        - [ ] [Performance Of Tries (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/PvlZW/core-performance-of-tries)
        - [ ] [Implementing A Trie (video)](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/DFvd3/core-implementing-a-trie)
    - [ ] [The Trie: A Neglected Data Structure](https://www.toptal.com/java/the-trie-a-neglected-data-structure)
    - [ ] [TopCoder - Using Tries](https://www.topcoder.com/community/data-science/data-science-tutorials/using-tries/)
    - [ ] [Stanford Lecture (real world use case) (video)](https://www.youtube.com/watch?v=TJ8SkcUSdbU)
    - [ ] [MIT, Advanced Data Structures, Strings (can get pretty obscure about halfway through)](https://www.youtube.com/watch?v=NinWEPPrkDQ&index=16&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf)

- ### Números de punto flotante
    - [ ] simple 8-bit: [Representation of Floating Point Numbers - 1 (video - there is an error in calculations - see video description)](https://www.youtube.com/watch?v=ji3SfClm8TU)
    - [ ] 32 bit: [IEEE754 32-bit floating point binary (video)](https://www.youtube.com/watch?v=50ZYcZebIec)

- ### Unicode
    - [ ] [The Absolute Minimum Every Software Developer Absolutely, Positively Must Know About Unicode and Character Sets]( http://www.joelonsoftware.com/articles/Unicode.html)
    - [ ] [What Every Programmer Absolutely, Positively Needs To Know About Encodings And Character Sets To Work With Text](http://kunststube.net/encoding/)

- ### Extremidad (Endianness)
    - [ ] [Big And Little Endian](https://www.cs.umd.edu/class/sum2003/cmsc311/Notes/Data/endian.html)
    - [ ] [Big Endian Vs Little Endian (video)](https://www.youtube.com/watch?v=JrNF0KRAlyo)
    - [ ] [Big And Little Endian Inside/Out (video)](https://www.youtube.com/watch?v=oBSuXP-1Tc0)
        - Charlas muy técnicas para desarrolladores del kernel. No se preocupe si la mayoría se ve complicado.
        - La primera mitad es suficiente.

- ### Redes
    - **Si tiene experiencia en redes o quiere ser un Ingeniero en Sistemas espere preguntas**
    - De cualquier forma, esto es bueno saberlo
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
    - [ ] Sockets:
        - [ ] [Java - Sockets - Introduction (video)](https://www.youtube.com/watch?v=6G_W54zuadg&t=6s)
        - [ ] [Socket Programming (video)](https://www.youtube.com/watch?v=G75vN2mnJeQ)

## Diseño del Sistema, Escalabilidad, Manejo de Datos
- **Puede esperar preguntas sobre el diseño del sistema si tiene más de 4 años de experiencia.**
- La escalabilidad y el diseño del sistema son temas muy extensos con muchos temas y recursos, ya que hay mucho que considerar al diseñar un sistema de software / hardware que puede escalar. Espere dedicarle un buen tiempo a esto.
- Consideraciones:
    - Escalabilidad
        - Destilar conjuntos de datos grandes a valores únicos
        - Transformar un conjunto de datos en otro
        - Manejo de cantidades de datos obscenamente grandes
    - Diseño de sistemas
        - Conjuntos de características
        - Interfaces
        - Jerarquías de clases
        - Diseñar un sistema bajo ciertas restricciones
        - Simplicidad y robustez
        - Compromisos
        - Análisis y optimización del rendimiento
- [ ] **EMPIECE AQUI**: [The System Design Primer](https://github.com/donnemartin/system-design-primer)
- [ ] [System Design from HiredInTech](http://www.hiredintech.com/system-design/)
- [ ] [How Do I Prepare To Answer Design Questions In A Technical Inverview?](https://www.quora.com/How-do-I-prepare-to-answer-design-questions-in-a-technical-interview?redirected_qid=1500023)
- [ ] [8 Things You Need to Know Before a System Design Interview](http://blog.gainlo.co/index.php/2015/10/22/8-things-you-need-to-know-before-system-design-interviews/)
- [ ] [Algorithm design](http://www.hiredintech.com/algorithm-design/)
- [ ] [Database Normalization - 1NF, 2NF, 3NF and 4NF (video)](https://www.youtube.com/watch?v=UrYLYV7WSHM)
- [ ] [System Design Interview](https://github.com/checkcheckzz/system-design-interview) - Hay muchos recursos en este. Mire los articulos y sus ejemplos. Pondré Algunos debajo.
- [ ] [How to ace a systems design interview](http://www.palantir.com/2011/10/how-to-rock-a-systems-design-interview/)
- [ ] [Numbers Everyone Should Know](http://everythingisdata.wordpress.com/2009/10/17/numbers-everyone-should-know/)
- [ ] [How long does it take to make a context switch?](http://blog.tsunanet.net/2010/11/how-long-does-it-take-to-make-context.html)
- [ ] [Transactions Across Datacenters (video)](https://www.youtube.com/watch?v=srOgpXECblk)
- [ ] [A plain English introduction to CAP Theorem](http://ksat.me/a-plain-english-introduction-to-cap-theorem/)
- [ ] Algoritmo de consenso de Paxos:
    - [short video](https://www.youtube.com/watch?v=s8JqcZtvnsM)
    - [extended video with use case and multi-paxos](https://www.youtube.com/watch?v=JEpsBg0AO6o)
    - [paper](http://research.microsoft.com/en-us/um/people/lamport/pubs/paxos-simple.pdf)
- [ ] [Consistent Hashing](http://www.tom-e-white.com/2007/11/consistent-hashing.html)
- [ ] [NoSQL Patterns](http://horicky.blogspot.com/2009/11/nosql-patterns.html)
- [ ] Escalabilidad:
    - [ ] [Great overview (video)](https://www.youtube.com/watch?v=-W9F__D3oY4)
    - [ ] Series Cortas:
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
    - [ ] Vea la forma en "Messaging, Serialization, and Queueing Systems" debajo para la información sobre algunas de las tecnologías que pueden pegar servicios juntos
    - [ ] Twitter:
        - [O'Reilly MySQL CE 2011: Jeremy Cole, "Big and Small Data at @Twitter" (video)](https://www.youtube.com/watch?v=5cKTP36HVgI)
        - [Timelines at Scale](https://www.infoq.com/presentations/Twitter-Timeline-Scalability)
    - Para aún más, vea la serie de videos "Mining Massive Datasets" en la sección de [Series de video](#series-de-videos).
- [ ] Practicando el proceso de diseño del sistema: Aquí hay algunas ideas para tratar de trabajar en papel, cada una con cierta documentación sobre cómo se manejó en el mundo real:
    - Revisión: [The System Design Primer](https://github.com/donnemartin/system-design-primer)
    - [System Design from HiredInTech](http://www.hiredintech.com/system-design/)
    - [cheat sheet](https://github.com/jwasham/coding-interview-university/blob/master/extras/cheat%20sheets/system-design.pdf)
    - Flujo:
        1. Comprender el problema y el alcance:
            - Definir los casos de uso, con ayuda del entrevistador
            - Sugerir características adicionales
            - Eliminar elementos que el entrevistador considera fuera de alcance
            - Asumir alta disponibilidad es necesario, añadir como un caso de uso
        2. Piense en las limitaciones:
            - Preguntar cuántas solicitudes por mes
            - Preguntar cuántas solicitudes por segundo (que pueden ser voluntario o hacer que usted haga las matemáticas)
            - Lectura de estimación vs. Escribir porcentajes
            - Tenga en cuenta la regla 80/20 al estimar
            - La cantidad de datos escritos por segundo
            - Almacenamiento total requerido durante 5 años
            - La cantidad de datos leídos por segundo
        3. Diseño abstracto:
            - Capas (servicio, datos, almacenamiento en caché)
            - Infraestructura: balanceo de carga, mensajería
            - Descripción aproximada de cualquier algoritmo clave que impulsa el servicio
            - Considerar los cuellos de botella y determinar las soluciones
    - Ejercicios:
        - [Design a CDN network: old article](http://repository.cmu.edu/cgi/viewcontent.cgi?article=2112&context=compsci)
        - [Design a random unique ID generation system](https://blog.twitter.com/2010/announcing-snowflake)
        - [Design an online multiplayer card game](http://www.indieflashblog.com/how-to-create-an-asynchronous-multiplayer-game.html)
        - [Design a key-value database](http://www.slideshare.net/dvirsky/introduction-to-redis)
        - [Design a picture sharing system](http://highscalability.com/blog/2011/12/6/instagram-architecture-14-million-users-terabytes-of-photos.html)
        - [Design a recommendation system](http://ijcai13.org/files/tutorial_slides/td3.pdf)
        - [Design a URL-shortener system: copied from above](http://www.hiredintech.com/system-design/the-system-design-process/)
        - [Design a cache system](https://www.adayinthelifeof.nl/2011/02/06/memcache-internals/)

---

## Revisión final

    Esta sección tendrá videos cortos que puede visualizar rápidamente para revisar algunos de los conceptos importantes.
    Es bueno si quieres repasar a menudo.

- [ ] Series de videos cortos sobre temas de 2-3 minutos (23 videos)
    - [Videos](https://www.youtube.com/watch?v=r4r1DZcx1cM&list=PLmVb1OknmNJuC5POdcDv5oCS7_OUkDgpj&index=22)
- [ ] Series de videos cortos sobre temas de 2-5 minutos - Michael Sambol (18 videos):
    - [Videos](https://www.youtube.com/channel/UCzDJwLWoYCUQowF_nG3m5OQ)
- [ ] [Sedgewick Videos - Algorithms I](https://www.youtube.com/user/algorithmscourses/playlists?shelf_id=2&view=50&sort=dd)
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
- [ ] [Sedgewick Videos - Algorithms II](https://www.youtube.com/user/algorithmscourses/playlists?flow=list&shelf_id=3&view=50)
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

## Practica de preguntas de codificación

Ahora que conoce todos los tópicos de las Ciencias de la Computación mencionados anteriormente, es tiempo de practicar respondiendo algunos problemas de codificación.

**La practica de preguntas de codificación no es sobre memorizar respuestas a problemas de programación.**

Porque necesita practicar haciendo problemas de programación:
- El reconocimiento de problemas, y donde las estructuras de datos y algoritmos adecuados encajan
- Reunir los requisitos para el problema
- Hablar sobre su camino a través del problema como lo hará en la entrevista
- Codificar en una pizarra o papel, no en un ordenador
- Llegar con la complejidad del tiempo y espacio para sus soluciones
- Probar sus soluciones
Hay una gran introducción para la solución de problemas metódicos y comunicativos en una entrevista. Conseguirá esto de los libros para la entrevista de programación también, pero encontré esto excepcional:
[Algorithm design canvas](http://www.hiredintech.com/algorithm-design/)

¿No tiene pizarrón en casa? Hace sentido. Soy un bicho raro y tengo una pizarra grande. En vez de una pizarra blanca, recoja un gran cuadernillo de dibujo de una tienda de arte. Puede sentarse en el sofá y practicar. Esta es mi "pizarra de sofá". He añadido la pluma en la foto para la escala. Si usa un bolígrafo, deseará poder borrarlo. Se ensucia rápido.

![my sofa whiteboard](https://dng5l3qzreal6.cloudfront.net/2016/Oct/art_board_sm_2-1476233630368.jpg)

Complementarios:

- [Mathematics for Topcoders](https://www.topcoder.com/community/data-science/data-science-tutorials/mathematics-for-topcoders/)
- [Dynamic Programming – From Novice to Advanced](https://www.topcoder.com/community/data-science/data-science-tutorials/dynamic-programming-from-novice-to-advanced/)
- [MIT Interview Materials](https://web.archive.org/web/20160906124824/http://courses.csail.mit.edu/iap/interview/materials.php)
- [Exercises for getting better at a given language](http://exercism.io/languages)

**Lea y haga problemas de programación (en ese orden):**

- [ ] [Programming Interviews Exposed: Secrets to Landing Your Next Job, 2nd Edition](http://www.wiley.com/WileyCDA/WileyTitle/productCd-047012167X.html)
    - Respuestas en C, C++ y Java
- [ ] [Cracking the Coding Interview, 6th Edition](http://www.amazon.com/Cracking-Coding-Interview-6th-Programming/dp/0984782850/)
    - Respuestas en Java

Vea [Lista de libros](#lista-de-libros)

## Ejercicios de codificación/Desafíos
Una vez haya aprendido, ponga ese cerebro a trabajar.
Tome desafíos de codificación todos los días y tantos como pueda.

- [ ] [How to Find a Solution](https://www.topcoder.com/community/data-science/data-science-tutorials/how-to-find-a-solution/)
- [ ] [How to Dissect a Topcoder Problem Statement](https://www.topcoder.com/community/data-science/data-science-tutorials/how-to-dissect-a-topcoder-problem-statement/)

Videos de preguntas de entrevistas de código:
- [IDeserve (88 videos)](https://www.youtube.com/watch?v=NBcqBddFbZw&list=PLamzFoFxwoNjPfxzaWqs7cZGsPYy0x_gI)
- [Tushar Roy (5 playlists)](https://www.youtube.com/user/tusharroy2525/playlists?shelf_id=2&view=50&sort=dd)

Sitios de desafíos:
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

Repos de desafíos:
- [Interactive Coding Interview Challenges in Python](https://github.com/donnemartin/interactive-coding-challenges)

Bosquejos de entrevista:
- [Gainlo.co: Mock interviewers from big companies](http://www.gainlo.co/)
- [Pramp: Mock interviews from/with peers](https://www.pramp.com/)
- [Refdash: Mock interviews](https://refdash.com/)

## Una vez cerca de la entrevista
- [ ] Cracking The Coding Interview Set 2 (videos):
    - [Cracking The Code Interview](https://www.youtube.com/watch?v=4NIb9l3imAo)
    - [Cracking the Coding Interview - Fullstack Speaker Series](https://www.youtube.com/watch?v=Eg5-tdAwclo)

## Su CV

- Vea los elementos de preparación en **Cracking The Coding Interview and back of Programming Interviews Exposed**


## Pensando en cuando llegue la entrevista

Piense en aproximadamente veinte preguntas de la entrevista que usted conseguirá, junto con las líneas de abajo. Tenga 2-3 respuestas para cada una.
Tener una historia, no sólo datos, sobre algo que logro.

- ¿Por qué quiere este trabajo?
- ¿Cuál es un problema difícil que ha resuelto?
- ¿Cuáles han sido los mayores desafíos enfrentados?
- ¿Cuáles han sido los mejores / peores diseños vistos?
- Ideas para mejorar un producto existente.
- ¿Cómo trabaja mejor, individualmente y como parte de un equipo?
- ¿Cuáles de sus habilidades o experiencias serían claves en el rol y por qué?
- ¿Qué es lo que más disfruto en [ x trabajo / y proyecto]?
- ¿Cuál fue el mayor reto al que se enfrentó en [x trabajo / y proyecto]?
- ¿Cuál fue el error más difícil que enfrentó en [x trabajo / y proyecto]?
- ¿Qué aprendió en [x trabajo / y proyecto]?
- ¿Qué habría hecho mejor en [x trabajo / y proyecto]?

## Preguntas para el entrevistador

    Algunos de las mías (ya sé u respuesta, pero quiero su opinión o la perspectiva del equipo):

- ¿Qué tan grande es su equipo?
- ¿Cómo es su ciclo de desarrollo? ¿Haces waterfall / sprints / agile?
- ¿Son corrientes las fechas límite comunes? ¿O hay flexibilidad?
- ¿Cómo se toman las decisiones en su equipo?
- ¿Cuántas reuniones tienes por semana?
- ¿Siente que su ambiente de trabajo le ayuda a concentrarse?
- ¿En que estas trabajando?
- ¿Qué te gusta de ello?
- ¿Cómo es la vida laboral?

¡Felicitaciones!

Manténgase aprendiendo.

Nunca está de verdad realizado.

---

    *****************************************************************************************************
    *****************************************************************************************************
    Todo lo que está debajo de este punto es opcional.
    Mediante el estudio de estos, obtendrá una mayor exposición a más conceptos de la Ciencia de
    la Computación, y estará mejor preparado para cualquier trabajo de Ingeniería de Software.
    Usted será un Ingeniero de Software mucho más completo.
    *****************************************************************************************************
    *****************************************************************************************************

---

## Libros adicionales
- [ ] [The Unix Programming Environment](http://product.half.ebay.com/The-UNIX-Programming-Environment-by-Brian-W-Kernighan-and-Rob-Pike-1983-Other/54385&tg=info)
    - Viejo pero bueno
- [ ] [The Linux Command Line: A Complete Introduction](https://www.amazon.com/dp/1593273894/)
    - Una opción moderna
- [ ] [TCP/IP Illustrated Series](https://en.wikipedia.org/wiki/TCP/IP_Illustrated)
- [ ] [Head First Design Patterns](https://www.amazon.com/gp/product/0596007124/)
    - Una gentil introducción al diseño de patrones
- [ ] [Design Patterns: Elements of Reusable Object-Oriente​d Software](https://www.amazon.com/Design-Patterns-Elements-Reusable-Object-Oriented/dp/0201633612)
    - aka el libro "Gang Of Four" , o GOF
    - El libro canonico de diseño de patrones
- [ ] [UNIX and Linux System Administration Handbook, 4th Edition](https://www.amazon.com/UNIX-Linux-System-Administration-Handbook/dp/0131480057/)

## Aprendizaje adicional

Es probable que estos temas no aparezcan en una entrevista, pero los añadí para ayudarle a convertirse en un Ingeniero de Software más completo, y ser consciente en ciertas tecnologías y algoritmos, para que tenga una caja de herramientas más grande.

- ### Compiladores
    - [ ] [How a Compiler Works in ~1 minute (video)](https://www.youtube.com/watch?v=IhC7sdYe-Jg)
    - [ ] [Harvard CS50 - Compilers (video)](https://www.youtube.com/watch?v=CSZLNYF4Klo)
    - [ ] [C++ (video)](https://www.youtube.com/watch?v=twodd1KFfGk)
    - [ ] [Understanding Compiler Optimization (C++) (video)](https://www.youtube.com/watch?v=FnGCDLhaxKU)

- ### Emacs y Vi(m)
    - Familiarícese con un editor de código basado en Unix
    - Vi(m):
        - [Editing With vim 01 - Installation, Setup, and The Modes (video)](https://www.youtube.com/watch?v=5givLEMcINQ&index=1&list=PL13bz4SHGmRxlZVmWQ9DvXo1fEg4UdGkr)
        - [VIM Adventures](http://vim-adventures.com/)
        - Conjunto de 4 videos:
            - [The vi/vim editor - Lesson 1](https://www.youtube.com/watch?v=SI8TeVMX8pk)
            - [The vi/vim editor - Lesson 2](https://www.youtube.com/watch?v=F3OO7ZIOaJE)
            - [The vi/vim editor - Lesson 3](https://www.youtube.com/watch?v=ZYEccA_nMaI)
            - [The vi/vim editor - Lesson 4](https://www.youtube.com/watch?v=1lYD5gwgZIA)
        - [Using Vi Instead of Emacs](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Using_Vi_instead_of_Emacs)
    - Emacs:
        - [Basics Emacs Tutorial (video)](https://www.youtube.com/watch?v=hbmV1bnQ-i0)
        - Conjunto de 3 videos:
            - [Emacs Tutorial (Beginners) -Part 1- File commands, cut/copy/paste, cursor commands](https://www.youtube.com/watch?v=ujODL7MD04Q)
            - [Emacs Tutorial (Beginners) -Part 2- Buffer management, search, M-x grep and rgrep modes](https://www.youtube.com/watch?v=XWpsRupJ4II)
            - [Emacs Tutorial (Beginners) -Part 3- Expressions, Statements, ~/.emacs file and packages](https://www.youtube.com/watch?v=paSgzPso-yc)
        - [Evil Mode: Or, How I Learned to Stop Worrying and Love Emacs (video)](https://www.youtube.com/watch?v=JWD1Fpdd4Pc)
        - [Writing C Programs With Emacs](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html#Writing_C_programs_with_Emacs)
        - [(maybe) Org Mode In Depth: Managing Structure (video)](https://www.youtube.com/watch?v=nsGYet02bEk)

- ### Unix: Herramientas para la línea de comandos
    - Llene la lista inferior con buenas herramientas.
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

- ### Teoría de la información (videos)
    - [ ] [Khan Academy](https://www.khanacademy.org/computing/computer-science/informationtheory)
    - [ ] Más acerca de los procesos de Markov:
        - [ ] [Core Markov Text Generation](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/waxgx/core-markov-text-generation)
        - [ ] [Core Implementing Markov Text Generation](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/gZhiC/core-implementing-markov-text-generation)
        - [ ] [Project = Markov Text Generation Walk Through](https://www.coursera.org/learn/data-structures-optimizing-performance/lecture/EUjrq/project-markov-text-generation-walk-through)
    - Vea más en la serie MIT 6.050J Information and Entropy.

- ### Código de paridad y Hamming (videos)
    - [ ] [Intro](https://www.youtube.com/watch?v=q-3BctoUpHE)
    - [ ] [Parity](https://www.youtube.com/watch?v=DdMcAUlxh1M)
    - [ ] Hamming Code:
        - [Error detection](https://www.youtube.com/watch?v=1A_NcXxdoCc)
        - [Error correction](https://www.youtube.com/watch?v=JAMLuxdHH8o)
    - [ ] [Error Checking](https://www.youtube.com/watch?v=wbH2VxzmoZk)

- ### Entropía
    - También vea los videos de abajo
    - Asegúrese de ver los videos de la teoría de la información primero
    - [ ] [Information Theory, Claude Shannon, Entropy, Redundancy, Data Compression & Bits (video)](https://youtu.be/JnJq3Py0dyM?t=176)

- ### Criptografía
    - También ve los videos de abajo
    - Asegúrese de ver los videos de la teoría de la información primero
    - [ ] [Khan Academy Series](https://www.khanacademy.org/computing/computer-science/cryptography)
    - [ ] [Cryptography: Hash Functions](https://www.youtube.com/watch?v=KqqOXndnvic&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=30)
    - [ ] [Cryptography: Encryption](https://www.youtube.com/watch?v=9TNI2wHmaeI&index=31&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

- ### Compresión
    - Asegúrese de ver los videos de la teoría de la información primero
    - [ ] Computerphile (videos):
        - [ ] [Compression](https://www.youtube.com/watch?v=Lto-ajuqW3w)
        - [ ] [Entropy in Compression](https://www.youtube.com/watch?v=M5c_RFKVkko)
        - [ ] [Upside Down Trees (Huffman Trees)](https://www.youtube.com/watch?v=umTbivyJoiI)
        - [ ] [EXTRA BITS/TRITS - Huffman Trees](https://www.youtube.com/watch?v=DV8efuB3h2g)
        - [ ] [Elegant Compression in Text (The LZ 77 Method)](https://www.youtube.com/watch?v=goOa3DGezUA)
        - [ ] [Text Compression Meets Probabilities](https://www.youtube.com/watch?v=cCDCfoHTsaU)
    - [ ] [Compressor Head videos](https://www.youtube.com/playlist?list=PLOU2XLYxmsIJGErt5rrCqaSGTMyyqNt2H)
    - [ ] [(optional) Google Developers Live: GZIP is not enough!](https://www.youtube.com/watch?v=whGwm0Lky2s)

- ### Seguridad informática
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

- ### Recolección de basura
    - [ ] [Compilers (video)](https://www.youtube.com/playlist?list=PLO9y7hOkmmSGTy5z6HZ-W4k2y8WXF7Bff)
    - [ ] [GC in Python (video)](https://www.youtube.com/watch?v=iHVs_HkjdmI)
    - [ ] [Deep Dive Java: Garbage Collection is Good!](https://www.infoq.com/presentations/garbage-collection-benefits)
    - [ ] [Deep Dive Python: Garbage Collection in CPython (video)](https://www.youtube.com/watch?v=P-8Z0-MhdQs&list=PLdzf4Clw0VbOEWOS_sLhT_9zaiQDrS5AR&index=3)

- ### Programación en paralelo
    - [ ] [Coursera (Scala)](https://www.coursera.org/learn/parprog1/home/week/1)
    - [ ] [Efficient Python for High Performance Parallel Computing (video)](https://www.youtube.com/watch?v=uY85GkaYzBk)

- ### Sistemas de mensajería, serialización y colas
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

- ### Transformada rápida de Fourier
    - [ ] [An Interactive Guide To The Fourier Transform](https://betterexplained.com/articles/an-interactive-guide-to-the-fourier-transform/)
    - [ ] [What is a Fourier transform? What is it used for?](http://www.askamathematician.com/2012/09/q-what-is-a-fourier-transform-what-is-it-used-for/)
    - [ ] [What is the Fourier Transform? (video)](https://www.youtube.com/watch?v=Xxut2PN-V8Q)
    - [ ] [Divide & Conquer: FFT (video)](https://www.youtube.com/watch?v=iTMn0Kt18tg&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=4)
    - [ ] [Understanding The FFT](http://jakevdp.github.io/blog/2013/08/28/understanding-the-fft/)

- ### Filtro de Bloom
    - Dado un filtro de Bloom con m bits y k funciones de hashing, tanto las pruebas de inserción como de pertenencia son O(k)
    - [Bloom Filters](https://www.youtube.com/watch?v=-SuTGoFYjZs)
    - [Bloom Filters | Mining of Massive Datasets | Stanford University](https://www.youtube.com/watch?v=qBTdukbzc78)
    - [Tutorial](http://billmill.org/bloomfilter-tutorial/)
    - [How To Write A Bloom Filter App](http://blog.michaelschmatz.com/2016/04/11/how-to-write-a-bloom-filter-cpp/)

- ### HyperLogLog
    - [How To Count A Billion Distinct Objects Using Only 1.5KB Of Memory](http://highscalability.com/blog/2012/4/5/big-data-counting-how-to-count-a-billion-distinct-objects-us.html)

- ### Hashing sensible a la localidad
    - Usado para determiner la similitude de documentos
    - Lo opuesto de MD5 o SHA que son usados para determinar si dos documentos/cadenas son exactamente iguales.
    - [Simhashing (hopefully) made simple](http://ferd.ca/simhashing-hopefully-made-simple.html)

- ### Árboles van Emde Boa
    - [ ] [Divide & Conquer: van Emde Boas Trees (video)](https://www.youtube.com/watch?v=hmReJCupbNU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=6)
    - [ ] [MIT Lecture Notes](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-046j-design-and-analysis-of-algorithms-spring-2012/lecture-notes/MIT6_046JS12_lec15.pdf)

- ### Estructuras de datos aumentadas
    - [ ] [CS 61B Lecture 39: Augmenting Data Structures](https://youtu.be/zksIj9O8_jc?list=PL4BBB74C7D2A1049C&t=950)

- ### Árboles de búsqueda equilibrada
    - Conocer por lo menos un tipo de árbol binario equilibrado (y saber cómo se implementa):
    - " Entre los árboles de búsqueda equilibrada, los árboles AVL y 2/3 están ahora pasados de moda, y los árboles rojo-negro parecen ser más populares.
    Una estructura de datos auto-organizable particularmente interesante es el árbol biselados, que utilizan rotaciones para mover cualquier clave accedida a la raíz.." - Skiena
    - De estos, opté por implementar un árbol biselado. Por lo que he leído, no implementarás un árbol de búsqueda equilibrado en tu entrevista. Pero yo quería exponer la codificación de uno y bueno, los árboles son las rodillas de la abeja. He leído un montón de código de árbol rojo-negro.
        - Árboles biselados: Funciones insert, search, delete
        Si terminas implementando un árbol rojo / negro, intenta lo siguiente:
        - Funciones de búsqueda e inserción, saltándose eliminar
    - Quiero aprender más acerca de los Árboles-B ya que se utiliza tan ampliamente con conjuntos de datos muy grandes.
    - [ ] [Self-balancing binary search tree](https://en.wikipedia.org/wiki/Self-balancing_binary_search_tree)

    - [ ] **Árboles AVL**
        - En práctica:
            Por lo que puedo decir, estos no se usan mucho en la práctica, pero pude ver dónde estarían:
             El árbol AVL es otra estructura que soporta la búsqueda, inserción y eliminación de O (log n). Es más rígidamente equilibrado que los árboles rojo-negro, lo que lleva a una inserción y eliminación más lenta, pero más rápido la recuperación. Esto lo hace atractivo para las estructuras de datos que se pueden construir una vez y se cargan sin reconstrucción, como diccionarios de idiomas (o diccionarios de programas, como los opcodes de un ensamblador o intérprete).
        - [ ] [MIT AVL Trees / AVL Sort (video)](https://www.youtube.com/watch?v=FNeL18KsWPc&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb&index=6)
        - [ ] [AVL Trees (video)](https://www.coursera.org/learn/data-structures/lecture/Qq5E0/avl-trees)
        - [ ] [AVL Tree Implementation (video)](https://www.coursera.org/learn/data-structures/lecture/PKEBC/avl-tree-implementation)
        - [ ] [Split And Merge](https://www.coursera.org/learn/data-structures/lecture/22BgE/split-and-merge)

    - [ ] **Árboles biselados**
        - En práctica:
            Los árboles biselados son típicamente usados en la implementación de la memoria cache, ssignadores de memoria, enrutadores, recolectores de basura, compresión de datos, cuerdas (reemplazo de la cadena utilizada para cadenas de texto largas), en Windows NT (en la memoria virtual, en red y en el código del sistema de archivos) etc.
        - [ ] [CS 61B: Splay Trees (video)](https://www.youtube.com/watch?v=Najzh1rYQTo&index=23&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd)
        - [ ] MIT Lecture: Splay Trees:
            - Se vuelve muy matemático, pero vea los 10 últimos minutos.
            - [Video](https://www.youtube.com/watch?v=QnPl_Y6EqMo)

    - [ ] **Árboles rojos/negros**
        - Éstos son una traducción de un árbol 2-3 (véase abajo)
         - En la práctica:
             Los árboles rojo-negro ofrecen las peores garantías de tiempo de inserción, tiempo de borrado y tiempo de búsqueda.
             Esto no solo los hace valiosos en aplicaciones sensibles al tiempo como las aplicaciones en tiempo real, sino que las convierte en elementos valiosos en otras estructuras de datos que proporcionan las garantías más desfavorables; por ejemplo, muchas estructuras de datos utilizadas en la geometría computacional pueden basarse en árboles rojos y negros, y el Completely Fair Scheduler utilizado en los kernels Linux actuales usa árboles de color rojo-negro. En la versión 8 de Java, la Colección HashMap se ha modificado de manera que en lugar de usar una lista enlazada para almacenar elementos idénticos con códigos de hash pobres, se utiliza un árbol Rojo-Negro.
        - [ ] [Aduni - Algorithms - Lecture 4 (link jumps to starting point) (video)](https://youtu.be/1W3x0f_RmUo?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3871)
        - [ ] [Aduni - Algorithms - Lecture 5 (video)](https://www.youtube.com/watch?v=hm2GHwyKF1o&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&index=5)
        - [ ] [Black Tree](https://en.wikipedia.org/wiki/Red%E2%80%93black_tree)
        - [ ] [An Introduction To Binary Search And Red Black Tree](https://www.topcoder.com/community/data-science/data-science-tutorials/an-introduction-to-binary-search-and-red-black-trees/)

    - [ ] **Árboles de búsqueda 2-3**
        - En práctica:
            Los árboles 2-3 tienen inserciones más rápidas a expensas de búsquedas más lentas (ya que la altura es más comparada con árboles AVL).
        - Usará árboles 2-3 muy raramente porque su implementación implica diferentes tipos de nodos. En su lugar, las personas utilizan árboles de color rojo negro.
        - [ ] [23-Tree Intuition and Definition (video)](https://www.youtube.com/watch?v=C3SsdUqasD4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=2)
        - [ ] [Binary View of 23-Tree](https://www.youtube.com/watch?v=iYvBtGKsqSg&index=3&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [ ] [2-3 Trees (student recitation) (video)](https://www.youtube.com/watch?v=TOb1tuEZ2X4&index=5&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)

    - [ ] **Árboles 2-3-4 (aka Árboles 2-4)**
        - En práctica:
            Para cada árbol 2-4, hay árboles rojo-negro correspondientes con elementos de datos en el mismo orden. Las operaciones de inserción y supresión en árboles 2-4 también son equivalentes a la rotación de color en rojos y negros árboles. Esto hace que árboles 2-4 sean una herramienta importante para entender la lógica detrás de los árboles rojo-negros, y es por eso que muchos textos de algoritmo introductorios introducen árboles 2-4 justo antes de los árboles rojo-negro, aunque **Los árboles 2-4 no son a menudo utilizados en la práctica**.
        - [ ] [CS 61B Lecture 26: Balanced Search Trees (video)](https://www.youtube.com/watch?v=zqrqYXkth6Q&index=26&list=PL4BBB74C7D2A1049C)
        - [ ] [Bottom Up 234-Trees (video)](https://www.youtube.com/watch?v=DQdMYevEyE4&index=4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [ ] [Top Down 234-Trees (video)](https://www.youtube.com/watch?v=2679VQ26Fp4&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=5)

    - [ ] **Árboles N-avo (K-avo, M-avo)**
        - Nota: La N o K es el factor de ramificación (ramas máximas)
        - Los árboles binarios son un árbol de 2 aros, con factor de ramificación = 2
        - Los árboles 2-3 son 3-avos
        - [ ] [K-Ary Tree](https://en.wikipedia.org/wiki/K-ary_tree)

    - [ ] **Árboles-B**
        - Dato curioso: Es un misterio, pero la B puede ser por Boeing, Balanceado, o Bayer (co-inventor)
        - En práctica:
            Árboles-B son ampliamente utilizados en bases de datos. La mayoría de los sistemas de archivos modernos utilizan árboles B (o variantes). Además de su uso en bases de datos, el árbol B también se utiliza en sistemas de archivos para permitir el acceso rápido y aleatorio a un bloque arbitrario en un archivo en particular. El problema básico es convertir la dirección de bloque de archivos i en una dirección de bloque de disco (o tal vez a una dirección de cilindro-cabezal).
        - [ ] [B-Tree](https://en.wikipedia.org/wiki/B-tree)
        - [ ] [Introduction to B-Trees (video)](https://www.youtube.com/watch?v=I22wEC1tTGo&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6&index=6)
        - [ ] [B-Tree Definition and Insertion (video)](https://www.youtube.com/watch?v=s3bCdZGrgpA&index=7&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [ ] [B-Tree Deletion (video)](https://www.youtube.com/watch?v=svfnVhJOfMc&index=8&list=PLA5Lqm4uh9Bbq-E0ZnqTIa8LRaL77ica6)
        - [ ] [MIT 6.851 - Memory Hierarchy Models (video)](https://www.youtube.com/watch?v=V3omVLzI0WE&index=7&list=PLUl4u3cNGP61hsJNdULdudlRL493b-XZf)
                - Cubre árboles-B de cache inconsistente, estructuras de datos muy interesantes
                - Los primeros 37 minutos son muy técnicos, puede saltarlos (B es tamaño de bloque, tamaño de línea de caché)


- ### Árboles k-D
    - Ideal para encontrar el número de puntos en un rectángulo o un objeto de dimensión superior
    - Un buen ajuste para k-vecinos más cercanos
    - [ ] [Kd Trees (video)](https://www.youtube.com/watch?v=W94M9D_yXKk)
    - [ ] [kNN K-d tree algorithm (video)](https://www.youtube.com/watch?v=Y4ZgLlDfKDg)

- ### Lista por saltos
    - " Éste es algo de una culta estructura de datos" - Skiena
    - [ ] [Randomization: Skip Lists (video)](https://www.youtube.com/watch?v=2g9OSRKJuzM&index=10&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp)
    - [ ] [For animations and a little more detail](https://en.wikipedia.org/wiki/Skip_list)

- ### Flujos de red
    - [ ] [Ford-Fulkerson in 5 minutes (video)](https://www.youtube.com/watch?v=v1VgJmkEJW0)
    - [ ] [Ford-Fulkerson Algorithm (video)](https://www.youtube.com/watch?v=v1VgJmkEJW0)
    - [ ] [Network Flows (video)](https://www.youtube.com/watch?v=2vhN4Ice5jI)

- ### Conjuntos disjuntos & Encontrar unión
    - [ ] [UCB 61B - Disjoint Sets; Sorting & selection (video)](https://www.youtube.com/watch?v=MAEGXTwmUsI&list=PL-XXv-cvA_iAlnI-BQr9hjqADPBtujFJd&index=21)
    - [ ] [Sedgewick Algorithms - Union-Find (6 videos)](https://www.youtube.com/watch?v=8mYfZeHtdNc&list=PLe-ggMe31CTexoNYnMhbHaWhQ0dvcy43t)

- ### Matemáticas para procesamiento rápido
    - [ ] [Integer Arithmetic, Karatsuba Multiplication (video)](https://www.youtube.com/watch?v=eCaXlAaN2uE&index=11&list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb)
    - [ ] [The Chinese Remainder Theorem (used in cryptography) (video)](https://www.youtube.com/watch?v=ru7mWZJlRQg)

- ### Treap
    - Combinación de un árbol de búsqueda binaria y un montículo
    - [ ] [Treap](https://en.wikipedia.org/wiki/Treap)
    - [ ] [Data Structures: Treaps explained (video)](https://www.youtube.com/watch?v=6podLUYinH8)
    - [ ] [Applications in set operations](https://www.cs.cmu.edu/~scandal/papers/treaps-spaa98.pdf)

- ### Programación Lineal (videos)
    - [ ] [Linear Programming](https://www.youtube.com/watch?v=M4K6HYLHREQ)
    - [ ] [Finding minimum cost](https://www.youtube.com/watch?v=2ACJ9ewUC6U)
    - [ ] [Finding maximum value](https://www.youtube.com/watch?v=8AA_81xI3ik)
    - [ ] [Solve Linear Equations with Python - Simplex Algorithm](https://www.youtube.com/watch?v=44pAWI7v5Zk)

- ### Geometría, casco convexo (videos)
    - [ ] [Graph Alg. IV: Intro to geometric algorithms - Lecture 9](https://youtu.be/XIAQRlNkJAw?list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm&t=3164)
    - [ ] [Geometric Algorithms: Graham & Jarvis - Lecture 10](https://www.youtube.com/watch?v=J5aJEcOr6Eo&index=10&list=PLFDnELG9dpVxQCxuD-9BSy2E7BWY3t5Sm)
    - [ ] [Divide & Conquer: Convex Hull, Median Finding](https://www.youtube.com/watch?v=EzeYI7p9MjU&list=PLUl4u3cNGP6317WaSNfmCvGym2ucw3oGp&index=2)

- ### Matemáticas discretas
    - Vea videos debajo

- ### Aprendizaje automático
    - [ ] ¿Por qué el aprendizaje automático?
        - [ ] [How Google Is Remaking Itself As A Machine Learning First Company](https://backchannel.com/how-google-is-remaking-itself-as-a-machine-learning-first-company-ada63defcb70)
        - [ ] [Large-Scale Deep Learning for Intelligent Computer Systems (video)](https://www.youtube.com/watch?v=QSaZGT4-6EY)
        - [ ] [Deep Learning and Understandability versus Software Engineering and Verification by Peter Norvig](https://www.youtube.com/watch?v=X769cyzBNVw)
    - [ ] [Google's Cloud Machine learning tools (video)](https://www.youtube.com/watch?v=Ja2hxBAwG_0)
    - [ ] [Google Developers' Machine Learning Recipes (Scikit Learn & Tensorflow) (video)](https://www.youtube.com/playlist?list=PLOU2XLYxmsIIuiBfYad6rFYQU_jL2ryal)
    - [ ] [Tensorflow (video)](https://www.youtube.com/watch?v=oZikw5k_2FM)
    - [ ] [Tensorflow Tutorials](https://www.tensorflow.org/versions/r0.11/tutorials/index.html)
    - [ ] [Practical Guide to implementing Neural Networks in Python (using Theano)](http://www.analyticsvidhya.com/blog/2016/04/neural-networks-python-theano/)
    - Cursos:
        - [Great starter course: Machine Learning](https://www.coursera.org/learn/machine-learning)
              - [videos only](https://www.youtube.com/playlist?list=PLZ9qNFMHZ-A4rycgrgOYma6zxF4BZGGPW)
              - Vea los videos 12-18 para un resumen de algebra lineal (14 y 15 son duplicados)
        - [Neural Networks for Machine Learning](https://www.coursera.org/learn/neural-networks)
        - [Google's Deep Learning Nanodegree](https://www.udacity.com/course/deep-learning--ud730)
        - [Google/Kaggle Machine Learning Engineer Nanodegree](https://www.udacity.com/course/machine-learning-engineer-nanodegree-by-google--nd009)
        - [Self-Driving Car Engineer Nanodegree](https://www.udacity.com/drive)
        - [Metis Online Course ($99 for 2 months)](http://www.thisismetis.com/explore-data-science)
    - Recursos:
        - Libros:
            - [Python Machine Learning](https://www.amazon.com/Python-Machine-Learning-Sebastian-Raschka/dp/1783555130/)
            - [Data Science from Scratch: First Principles with Python](https://www.amazon.com/Data-Science-Scratch-Principles-Python/dp/149190142X)
            - [Introduction to Machine Learning with Python](https://www.amazon.com/Introduction-Machine-Learning-Python-Scientists/dp/1449369413/)
        - [Machine Learning for Software Engineers](https://github.com/ZuzooVn/machine-learning-for-software-engineers)
        - Data School: http://www.dataschool.io/

--

## Detalles adicionales de ciertos temas

    Agregué estos para reforzar algunas ideas ya presentadas anteriormente, pero no quería incluirlas arriba porque es demasiado. Es fácil exagerar en un tema.
     ¿Quieres ser contratado en este siglo, verdad?

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

- [ ] MIT **Probability** (Matemático y va lento,  que es bueno para las cosas matemáticas) (videos):
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
        - Inicia bien, pero en el momento en que pasa KMP se vuelve más complicado de lo que necesita ser
        - Buena explicación de los tries
        - Puede saltarse

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

## Series de videos

Siéntese y disfrute. "Netflix and skill" :P

- [ ] [List of individual Dynamic Programming problems (each is short)](https://www.youtube.com/playlist?list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)

- [ ] [x86 Architecture, Assembly, Applications (11 videos)](https://www.youtube.com/playlist?list=PL038BE01D3BAEFDB0)

- [ ] [MIT 18.06 Linear Algebra, Spring 2005 (35 videos)](https://www.youtube.com/playlist?list=PLE7DDD91010BC51F8)

- [ ] [Excellent - MIT Calculus Revisited: Single Variable Calculus](https://www.youtube.com/playlist?list=PL3B08AE665AB9002A)

- [ ] [Computer Science 70, 001 - Spring 2015 - Discrete Mathematics and Probability Theory](https://www.youtube.com/playlist?list=PL-XXv-cvA_iD8wQm8U0gG_Z1uHjImKXFy)

- [ ] [Discrete Mathematics by Shai Simonson (19 videos)](https://www.youtube.com/playlist?list=PL3o9D4Dl2FJ9q0_gtFXPh_H4POI5dK0yG)

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

- [ ] [Stanford: Programming Paradigms (27 videos)](https://www.youtube.com/view_play_list?p=9D558D49CA734A02)

- [ ] [Introduction to Cryptography by Christof Paar](https://www.youtube.com/playlist?list=PL6N5qY2nvvJE8X75VkXglSrVhLv1tVcfy)
    - [Course Website along with Slides and Problem Sets](http://www.crypto-textbook.com/)

- [ ] [Mining Massive Datasets - Stanford University (94 videos)](https://www.youtube.com/playlist?list=PLLssT5z_DsK9JDLcT8T62VtzwyW9LNepV)

- [ ] [Graph Theory by Sarada Herke (67 videos)](https://www.youtube.com/user/DrSaradaHerke/playlists?shelf_id=5&view=50&sort=dd)

## Cursos de Informática

- [Directory of Online CS Courses](https://github.com/open-source-society/computer-science)
- [Directory of CS Courses (many with online lectures)](https://github.com/prakhar1989/awesome-courses)
