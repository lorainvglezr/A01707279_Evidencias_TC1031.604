# Faro del Saber
¡Bi͏enve͏nido a la biblioteca virtual "El Faro del Saber"! E͏ste innovador proyecto cambia la manera ͏en que ͏ves y manejas t͏us li͏bros preferidos. Dicho esto, te invito a imaginar un mu͏ndo en ͏donde puedas buscar una gran colección ͏de libros y textos, pone͏rla en el orden que más te acomode y comprar tus títu͏los favoritos con tan solo unos clics.
Con una interfaz amigable y un͏ menú interactivo,͏ "El Faro del Saber" te permite aventurarte y sumergirte en un increible mundo de libros que cuentan con diversos autores, géneros y precios, todo esto mientras disfrutas de la libertad de organizar la informa͏ción como quieras. Ya se que ͏busques el li͏b͏ro más vie͏jo, el que tiene la mejor puntuación͏ o el más barato, aca lo puedes encontrar, ya que todo está a tu alc͏ance. 
Pero ͏eso n͏o es ͏todo͏ ya que esta propuesta de proyecto también se i͏nt͏eresa ͏en saber͏ un poco más de t͏i. Regístrate de una manera muy sencilla y rápida con el fin de llevar una serie ló͏gica de tus͏ compras͏, asegurando que cada libro que obtiene͏s sea único, irrepetible y especial. La gesti͏ón de usuarios es ͏su͏ave y s͏egur͏o͏ ͏permitiendo inicia͏r sesión y gozar͏ ͏de una experien͏cia muy p͏ersonal.
Ven y prueba este proyecto "El Faro del Saber" y descubre un universo literario donde cada página cuenta. ¡Tu próxima aventura literaria te espera!
*Este proyecto realizado por mi persona, Lorain González, ha sido basado en la idea de generar una plataforma amigable como la de Goodreads y Amazon Kindle.*  

## Descripción del Proyecto
El programa "El Faro del Saber" es una biblioteca virtual diseñada para facilitar la gestión y adquisición de libros por parte de los usuarios. A continuación se detalla su funcionamiento y las características principales que fueron implementadas para su fácil comprensión y uso:

### Funcionalidades Principales y Flujo de Trabajo del Programa
1. **Registro e Inicio de Sesión:** Los usuarios pueden registrarse creando una cuenta que incluye su nombre, apellido, edad, nombre de usuario y contraseña. Esta información se almacena en un archivo de texto, lo que nos hace implementar mecanismos de escritura de archivos de texto. Además, los usuarios pueden iniciar sesión utilizando el nombre de usuario y contraseña que establecieron anteriormente, esto con el fin de acceder a las funcionalidades del sistema.
2. **Carga de Libros:** El programa carga una colección de libros desde un archivo de texto, lo que ocasiona que se cumpla con la implementacion de mecanismos de lectura de archivos de texto. Hay que mencionar que cada libro contiene información relevante acerca del mismo, datos tales como título, autor, año de publicación, editorial, número de páginas que contiene el libro, calificación general del libro, género literario y precio en el mercado.
3. **Interfaz de Usuario Interactiva:** Una vez que el usuario ha iniciado sesión, se presenta un menú interactivo que permite navegar por varias opciones. Las opciones incluyen mostrar todos los libros en el orden inicial en el que se encuentran en el archivo de texto, ordenarlos basándonos en diferentes criterios (año de publicación, número de páginas, calificación y precio), comprar libros y ver la lista de libros que han sido adquiridos sin repetición.
4. **Ordenamiento de Libros:** Los libros pueden ser ordenados utilizando un algoritmo de ordenamiento llamado Merge Sort, el orden en el que aparecerán los libros está basado en diferentes criterios seleccionados por el usuario, criterios mencionados anteriormente. Esto permite a los usuarios encontrar fácilmente libros que se ajusten a sus preferencias.
5. **Compra de Libros:** Los usuarios pueden "comprar" libros ingresando el índice del libro que desean adquirir, tomando en cuenta el último orden en el que se encuentran los libros; si los libros nunca fueron ordenados, se tomarán los índices de acuerdo al orden inicial de la lista de libros. El sistema verifica que el libro no haya sido comprado previamente y, si es válido, lo agrega a una lista de libros comprados, esto se hace con el fin asegurar que cada libro solo pueda ser adquirido una vez.
6. **Visualización de Libros Comprados:** Los usuarios pueden ver una lista de los libros que han adquirido, mostrando información detallada sobre cada uno, lo que les permite llevar un registro de sus compras.
7. **Manejo de Errores:** El programa incluye validaciones para asegurar que los usuarios ingresen opciones válidas en el menú y que los índices de los libros sean correctos, mejorando así la experiencia del usuario.
En resumen, "El Faro del Saber" es un sistema integral que combina la gestión de usuarios y libros en un entorno virtual, facilitando la exploración, compra y organización de libros de manera eficiente y accesible, mientras ofrece una experiencia interactiva y amigable para el usuario.

## Ejecución 
El proyecto "El Faro del Saber" está diseñado para ejecutarse exclusivamente en el lenguaje C++, por lo que pueden surgir errores si se intenta utilizar otro lenguaje de programación. Para compilar el proyecto correctamente, se recomienda utilizar el siguiente comando en la terminal: _´g++ -std=c++11 main.cpp´. _
Posterior a esto, luego de obtener el ejecutable, poner en la terminal el siguiente comando: _´./a.out` _
Este proyecto incluye varios archivos, como main.cpp, Usuario.h y Biblioteca.h, entre otros. La utilización de "El Faro del Saber" sin alguno de estos archivos puede provocar que el programa no funcione como se espera.
Asegúrate de tener todos los archivos necesarios en el mismo directorio antes de compilar para garantizar el correcto funcionamiento del sistema.

# Evidencia 1: Proyecto
# Desarrollo de Competencias
## SICT0301: Evalúa los componentes
### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa
**Merge Sort** es un algoritmo de ordenamiento que se utiliza en el proyecto del "El Faro del Saber" al momento de ordenar una lista de libros. A continuación se presenta un análisis de su complejidad en diferentes casos:
- _División:_ En cada paso, el algoritmo divide la lista en dos mitades. Este proceso se realiza logarítmicamente, ya que cada división reduce el tamaño de la lista a la mitad. Por lo tanto, el número de divisiones necesarias para llegar a listas de un solo elemento es O(log n), donde n es el número de elementos en la lista.
- _Ordenamiento y Fusión:_ Después de dividir la lista, Merge Sort ordena y fusiona las sublistas o listas derivadas. La fusión de dos listas ordenadas requiere recorrer todos los elementos de ambas listas, lo que tiene una complejidad de O(n).
  
  **Complejidad en Diferentes Casos:**
  
- _Mejor Caso:_ Se tiene una complejidad de O(n log n) y esto ocurre porque, cuando la lista ya está ordenada, el algoritmo aún debe dividir y fusionar las listas.
- _Caso Promedio:_ Se tiene una complejidad de O(n log n). En la mayoría de los escenarios, el algoritmo de ordenamiento sigue dividiendo y fusionando, manteniendo esta complejidad.
- _Peor Caso:_ Tiene una complejidad de O(n log n). Esto también ocurre cuando la lista está en el orden inverso, ya que el algoritmo sigue dividiendo y fusionando.

**Conclusión:** 

Merge Sort es un algoritmo eficiente con una complejidad de O(n log n), lo que lo hace adecuado para manejar listas de libros que pueden ser grandes. Esto es especialmente relevante si el programa se utiliza con una base de datos de libros extensa. Por otro lado, es un algoritmo estable, lo que significa que mantiene el orden relativo de los elementos con valores iguales. Esto es beneficioso en el contexto de los libros, ya que si dos libros tienen la misma calificación o año de publicación, su orden relativo en la lista se conservará después de la ordenación.
  
### Hace un análisis de complejidad correcto y completo de todas las estructuras de datos y cada uno de sus usos en el programa
La estructura de datos **Stack** se utiliza en el programa para gestionar los libros comprados. A continuación se presenta un análisis de su complejidad:

**Operaciones en la Pila:**

- _Push (Agregar un libro):_ Esta operación tiene una complejidad de O(1), ya que simplemente se agrega un elemento al final de la lista que representa la pila.
- _Pop (Eliminar un libro):_ Similar a la operación de push, pop también tiene una complejidad de O(1), ya que implica eliminar el último elemento de la lista.
- _Top (Obtener el libro en la cima):_ Esta operación también cuenta con complejidad de O(1), ya que solo se necesita acceder al último elemento de la lista.
- _Mostrar libros (Recorrer la pila):_ Para mostrar todos los libros en la pila, se requiere recorrer todos los elementos, lo que tiene una complejidad de O(n), donde n es el número de libros en la pila.
  
  **Complejidad en Diferentes Casos:**
 
- _Mejor Caso:_ Se tiene una complejidad de O(1), esto si se toman en cuenta las operaciones de push, pop y top.
- _Caso Promedio:_ Se tiene una complejidad de O(1), dado que las operaciones siguen siendo O(1) en promedio.
- _Peor Caso:_ Se tiene una complejidad de O(n) porque solo se aplica a la operación de mostrar libros, que requiere recorrer todos los elementos en la pila.

**_Conclusión:_** Las operaciones de inserción y eliminación en la pila son muy eficientes, con una complejidad de O(1). Sin embargo, mostrar todos los libros tiene una complejidad de O(n), por lo tanto la complejidad final de la estructura de datos es de O(n).
  
### Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa

Además de **Merge Sort** y **Stack**, el programa incluye otras operaciones y componentes que también deben ser analizados:
- _Lectura de Libros desde Archivo:_ La función "leerLibrosDesdeArchivo" lee los libros de un archivo y los almacena en un vector. La complejidad de esta operación depende del número de libros, por lo que se puede considerar O(n), donde n es el número de libros en el archivo.
- _Mostrar Libros:_ La función "mostrarLibros" tiene una complejidad de O(n) al recorrer todos los libros en el vector para mostrarlos al usuario.
- _Menú y Selección de Opciones:_ La complejidad de las operaciones dentro del menú principal depende de la opción seleccionada. Por ejemplo, las operaciones de ordenar libros, aquellas que utilizan el algoritmo de ordenamiento de Merge Sort, tienen una complejidad de O(n log n), mientras que las operaciones de mostrar libros tienen una complejidad de O(n).

**Complejidad Final del Programa:**

Para determinar la complejidad final del programa, es importante considerar las operaciones más complejas, en resumen acá tenemos las complejidades más relevantes de todo el programa:
1. _**Lectura de Libros desde Archivo**_
- **Complejidad:** O(n)
  - _Mejor Caso:_ O(n) - En este caso, el archivo contiene n libros y todos son leídos correctamente. La función recorrerá cada línea del archivo una vez, lo que resulta en un tiempo de ejecución lineal. No hay interrupciones ni errores en la lectura, lo que permite que todos los libros sean leídos y almacenados en el vector.
  - _Caso Promedio:_ O(n) - En promedio, se espera que la función lea todos los libros. La operación seguirá siendo lineal porque, independientemente de la disposición de los libros en el archivo, la función debe recorrer cada línea para extraer la información de cada libro. Por lo tanto, el tiempo de ejecución es proporcional al número de libros.
  - _Peor Caso:_ O(n) - En el peor de los casos, aunque haya problemas de lectura (como un archivo corrupto o un formato inesperado), la función seguirá intentando leer cada línea. Si se encuentra un error, la lectura puede interrumpirse, pero esto no afecta la complejidad en términos de n, ya que el tiempo de lectura sigue siendo lineal en función del número de libros.
2. _**Mostrar Libros**_
- **Complejidad:** O(n)
  - _Mejor Caso:_ O(n) - En el mejor caso, todos los libros están disponibles y se muestran al usuario. La función recorrerá el vector de libros una vez, imprimiendo la información de cada libro, lo que resulta en un tiempo de ejecución lineal.
  - _Caso Promedio:_ O(n) - En promedio, se espera que la función muestre todos los libros en el vector. Esto significa que, sin importar el contenido del vector, la función recorrerá cada libro para mostrar su información. Por lo tanto, el tiempo de ejecución se mantiene lineal.
  - _Peor Caso:_ O(n) - Similar al caso promedio y al mejor caso, ya que la función siempre recorrerá todos los libros en el vector. No hay variación en la complejidad, ya que la operación implica acceder a cada libro y mostrar su información, lo que resulta en un tiempo de ejecución lineal.
3.  _**Ordenamiento de Libros (Merge Sort)**_
- **Complejidad:** O(n log n)
  - _Mejor Caso:_ O(n log n) - En el mejor de los casos, Merge Sort sigue dividiendo y fusionando la lista de libros, independientemente de su disposición inicial. La complejidad se mantiene en O(n log n) porque el algoritmo siempre requiere dividir la lista en mitades y luego fusionarlas, lo que implica un número logarítmico de divisiones y un recorrido lineal para fusionar.
  - _Caso Promedio:_ O(n log n) - En promedio, la complejidad sigue siendo O(n log n) porque el algoritmo realiza las mismas operaciones de división y fusión. No importa cómo estén dispuestos los libros, el número de divisiones y fusiones necesarias para ordenar la lista se mantiene consistente.
  - _Peor Caso:_ O(n log n) - Al igual que en los otros casos, la complejidad se mantiene en O(n log n) en el peor de los casos. Aunque la lista de libros esté en orden inverso, Merge Sort seguirá dividiendo y fusionando, lo que resulta en un tiempo de ejecución que se comporta de manera predecible.
4. _**Operaciones en la Pila (Stack)**_
- **Complejidad de Push y Pop:** O(1)
  - _Mejor Caso:_ O(1) - La operación de agregar (push) o eliminar (pop) un libro de la pila se realiza en tiempo constante. No importa cuántos libros haya en la pila; la operación siempre tomará el mismo tiempo.
  - _Caso Promedio:_ O(1) - En promedio, la complejidad sigue siendo constante, ya que cada operación de push y pop no depende del tamaño de la pila.
  - _Peor Caso:_ O(1) - Similar a los otros casos, la complejidad es constante. No hay variaciones en el tiempo de ejecución para estas operaciones, ya que siempre se ejecutan en tiempo constante.
- **Complejidad de Mostrar Libros en la Pila:** O(n)
  - _Mejor Caso:_ O(n) - En el mejor caso, se muestran todos los libros en la pila. La función recorrerá cada libro en la pila una vez, imprimiendo su información.
  - _Caso Promedio:_ O(n) - En promedio, se espera que se muestren todos los libros en la pila. La función seguirá recorriendo cada libro, lo que resulta en un tiempo de ejecución lineal.
  - _Peor Caso:_ O(n) - Al igual que en los otros casos, la función siempre recorrerá todos los libros en la pila. No hay variación en la complejidad, ya que la operación implica acceder a cada libro y mostrar su información, resultando en un tiempo de ejecución lineal.

**_Conclusión general:_** La operación más costosa del programa es el ordenamiento de libros utilizando Merge Sort, que tiene una complejidad de O(n log n). Las operaciones de lectura y mostrar libros son lineales, con una complejidad de O(n). Dado que O(n log n) es el término dominante en el análisis, la complejidad final del programa "El Faro del Saber" es O(n log n). Esto indica que el programa es eficiente y escalable para manejar una lista considerablemente grande de libros, permitiendo a los usuarios interactuar con la biblioteca virtual de manera efectiva.

## SICT0302: Toma decisiones
### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente
Para el proyecto "El Faro del Saber", se ha seleccionado el algoritmo de ordenamiento llamado Merge Sort debido a su eficiencia y estabilidad, a lo que me refiero con estabilidad es que la principal ventaja de este algoritmo de ordenamiento se basa en que es constante, por lo que su ejecución se da en un tiempo constante, lo que quiere decir que no tiene mejor o peor caso, siempre su numero de operaciónnes será la misma. Merge Sort opera con una complejidad de O(n log n) en todos los casos, lo que lo convierte en una opción robusta para manejar listas grandes de libros como la que tenemos en la biblioteca, asegurando un rendimiento consistente sin importar la disposición inicial de los datos. Esta característica es especialmente valiosa en un entorno donde se pueden tener grandes volúmenes de información. Además, la estabilidad del algoritmo de ordenamiento garantiza que el orden relativo de los elementos iguales se mantenga, lo cual es crucial cuando se trabaja con libros que pueden compartir títulos, editoriales o autores. El enfoque de "dividir y conquistar" de Merge Sort no solo facilita su implementación, sino que también permite que el algoritmo sea fácilmente paralelizable, lo que ocasiona que sea mucho más sencilla la optimización del uso de recursos en sistemas con múltiples núcleos de procesamiento. En resumen, Merge Sort se adapta perfectamente a las necesidades del proyecto, ofreciendo un método eficiente y confiable para el ordenamiento de datos.

_**Comparación de Merge Sort con otros algoritmos de ordenamiento:**_
A continuación, se presenta la comparación de Merge Sort con otros algoritmos de ordenamiento, incluyendo justificaciones para las complejidades en los mejores, peores y casos promedio, así como un pequeño enunciado que describe lo que implicaría cada complejidad en el contexto del proyecto "El Faro del Saber":
1. _**Merge Sort**_
**Complejidad:**
- _Mejor Caso:_ O(n log n) Merge Sort siempre divide la lista en mitades y fusiona las sublistas, independientemente de la disposición inicial de los datos. Por lo tanto, el número de divisiones es logarítmico en relación con el número de elementos (log n), y cada fusión requiere un recorrido lineal (n). Si hablamos de la implementación de este algoritmo de ordenamiento en el proyecto, este nos garantiza que incluso en el mejor de los casos, el sistema será eficiente al manejar listas de libros, lo que permite una respuesta rápida para los usuarios.
- _Caso Promedio:_ O(n log n) Al igual que en el mejor caso, Merge Sort sigue dividiendo y fusionando la lista de manera consistente, lo que resulta en una complejidad de O(n log n) en promedio. Esto significa que en el proyecto, en situaciones típicas, los usuarios experimentarán un rendimiento confiable y eficiente al buscar y ordenar libros en la biblioteca.
- _Peor Caso:_ O(n log n) En el peor caso, Merge Sort sigue realizando el mismo número de divisiones y fusiones que en los otros casos, por lo que su complejidad se mantiene en O(n log n). Esto asegura en el proyecto que, incluso en escenarios desfavorables, el sistema mantendrá un rendimiento aceptable, evitando tiempos de espera excesivos para los usuarios.
2. _**Quick Sort**_
**Complejidad:**
- _Mejor Caso:_ O(n log n) En el mejor caso, Quick Sort elige un pivote que divide la lista en partes iguales, lo que resulta en log n divisiones y un recorrido lineal para cada división, dando como resultado O(n log n). En el aspecto necesario para el proyecto, este algoritmo de ordenamiento permitiría que el sistema funcione de manera eficiente en situaciones ideales, proporcionando una experiencia de usuario fluida solo en estas ocasiones.
- _Caso Promedio:_ O(n log n) En promedio, Quick Sort también logra un buen rendimiento al elegir pivotes que dividen la lista de manera razonable, manteniendo la complejidad en O(n log n). Si se hubiese implementado este algoritmo de ordenamiento en el proyecto, los usuarios se beneficiarían de un rendimiento eficiente en la mayoría de las situaciones, lo que es fundamental para mantener la satisfacción del mismo.
- _Peor Caso:_ O(n²) En el peor caso, si el pivote elegido es el menor o el mayor elemento de la lista, Quick Sort no divide la lista de manera efectiva, lo que lleva a O(n) divisiones en cada nivel, resultando en tener una complejidad final de O(n²). En cuestiones de la contemplación de la implementación de Quick Sort en el proyecto, esto hubiese implicado tener tiempos de espera inaceptables en ciertas circunstancias, lo que podría frustrar a los usuarios y afectar la percepción del sistema.
3. _**Insertion Sort**_
**Complejidad:**
- _Mejor Caso:_ O(n) El mejor caso ocurre cuando la lista ya está ordenada. En este caso, cada elemento solo necesita ser comparado una vez, lo que resulta en un tiempo lineal. Esto en el proyecto hubiese sido beneficioso para listas que ya están casi ordenadas, permitiendo que el sistema responda rápidamente a las solicitudes de los usuarios.
- _Caso Promedio:_ O(n²) En promedio, Insertion Sort debe comparar cada elemento con todos los elementos anteriores en la lista, lo que resulta en una complejidad cuadrática. Si se hubiese implementado este alogritmo de ordenamiento en el proyecto, esto podría haber provocado un rendimiento deficiente al manejar listas grandes, lo que podría afectar negativamente la experiencia del usuario.
- Peor Caso: O(n²) El peor caso ocurre cuando la lista está en orden inverso, lo que obliga a Insertion Sort a realizar el máximo número de comparaciones y desplazamientos, resultando en O(n²). Si se hubiese elegido este algoritmo de ordenamiento, iba a resultar en la obtención de tiempos de espera inaceptables, lo que podría frustrar a los usuarios y disminuir la efectividad del sistema.
4. _**Selection Sort**_
**Complejidad:**
- _Mejor Caso:_ O(n²) Selection Sort siempre realiza el mismo número de comparaciones, independientemente del estado de la lista, lo que resulta en una complejidad cuadrática. Esto significa que si se hubiera implementado este método en el proyecto, incluso en el mejor de los casos, el rendimiento será ineficiente, lo que podría llevar a tiempos de respuesta lentos y afectar la satisfacción del usuario.
- _Caso Promedio:_ O(n²) Al igual que el mejor caso, el número de comparaciones realizadas es constante y no depende de la disposición de los datos, manteniendo la complejidad en O(n²). En el actual proyecto implicaría que el sistema no sería capaz de manejar eficientemente listas de libros más grandes, lo que podría resultar en una experiencia de usuario deficiente.
- _Peor Caso:_ O(n²) En el peor caso, Selection Sort también realiza el mismo número de comparaciones, lo que resulta en O(n²). En el proyecto, esto podría llevar a un rendimiento inaceptable en situaciones donde se requiere ordenar grandes volúmenes de datos, lo que podría frustrar a los usuarios y disminuir la efectividad del sistema.

_**Complejidad general**_
- _Merge Sort:_ O(n log n) en todos los casos (mejor, promedio y peor), lo que garantiza un rendimiento consistente y eficiente en el manejo de listas de libros.
- _Quick Sort:_ O(n log n) en el mejor y caso promedio, O(n²) en el peor caso, lo que puede ser problemático en situaciones desfavorables.
- _Insertion Sort:_ O(n) en el mejor caso, O(n²) en el promedio y peor caso, lo que limita su eficacia en listas grandes.
- _Selection Sort:_ O(n²) en todos los casos, lo que lo hace ineficiente para el proyecto y poco recomendable para listas grandes.

_**Conclusión de la comparación de algoritmos de ordenamiento:**_ Merge Sort se destaca como la opción más adecuada para mi proyecto de "El Faro del Saber", ya que ofrece un rendimiento robusto y consistente, capaz de manejar grandes volúmenes de datos de manera efectiva y confiable. Por otra parte, Quick Sort, aunque eficiente en la práctica, presenta riesgos en su peor caso. En última instancia, Insertion y Selection Sort son menos eficientes y no se recomiendan para listas grandes, lo que podría afectar negativamente la experiencia del usuario.
- _Implementación de Merge Sort:_ (líneas 41 a 70 en el archivo "Biblioteca.h")
- _Funciones de comparación para Merge Sort:_ (líneas 72 a 80 en el archivo "Biblioteca.h")
### Selecciona una estructura de datos adecuada al problema y la usa correctamente
En cuanto a la estructura de datos, opté por utilizar una Stack (pila), que se alinea perfectamente con la naturaleza de las operaciones requeridas en el sistema de gestión de libros comprados. La pila, con su comportamiento LIFO (Last In, First Out), permite un acceso eficiente a los libros más recientemente comprados, lo que es esencial para un sistema donde la rapidez de respuesta es fundamental. Las operaciones de inserción y eliminación en una pila son extremadamente eficientes, con una complejidad de O(1) en todos los casos, lo que permite que el sistema maneje las compras de manera ágil. Además, la implementación de una pila es sencilla y proporciona un control claro sobre el estado de los libros comprados, facilitando funcionalidades como el historial de compras. Esta estructura no solo mejora la eficiencia operativa del sistema, sino que también enriquece la experiencia del usuario al permitir un acceso rápido y directo a la información más relevante. En conjunto, la elección de la pila como estructura de datos complementa de manera ideal el uso de Merge Sort, creando un sistema robusto y eficiente para el presente proyecto llamado "El Faro del Saber".
- _Definición de la clase Stack:_ (líneas 10 a 30 en el archivo "Biblioteca.h")
- _Métodos de la clase Stack (push, pop, top, isEmpty):_ (líneas 12 a 29 en el archivo "Biblioteca.h")

## SICT0303: Implementa acciones científicas
### Implementa mecanismos para consultar información de las estructras correctos
El proyecto utiliza un enfoque estructurado para permitir a los usuarios consultar información sobre los libros de manera eficiente. A diferencia de otros programas que pueden utilizar algoritmos y estructuras de datos menos óptimas, "El Faro del Saber" implementa Merge Sort para ordenar la lista de libros según diferentes criterios, como año de publicación, número de páginas, calificación y precio. Esta organización permite que los usuarios accedan a la información de manera intuitiva y rápida.
Además, el uso de una estructura de pila (Stack) para gestionar los libros comprados asegura que los usuarios puedan visualizar fácilmente los libros que han adquirido. La función "mostrar()" en la clase _Stack_ proporciona una forma clara de presentar la información de los libros comprados, lo que mejora la experiencia del usuario al interactuar con el sistema.
- _Merge Sort y ordenamiento de libros:_ (líneas 53 a 70 en el archivo "Biblioteca.h")
- _Mostrar libros comprados:_ (líneas 30 a 42 en el archivo "Biblioteca.h")
### Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta
El proyecto también destaca por su capacidad para cargar datos a las estructuras de manera eficiente. La función "leerLibrosDesdeArchivo", ubicada en el archivo "Biblioteca.h", se encarga de leer los libros desde un archivo de texto. Esta función es fundamental para la funcionalidad del programa, ya que permite la carga inicial de datos en el vector de libros.
El uso de este mecanismo de lectura asegura que los datos se carguen correctamente en la estructura de datos adecuada, permitiendo que el sistema funcione sin problemas desde el inicio. La implementación de la lectura de archivos garantiza que la información sobre los libros esté siempre actualizada y disponible para el usuario.
- _Lectura de libros desde un archivo:_ (líneas 14 a 25 en el archivo "Biblioteca.h")
### Implementa mecanismos de escritura de archivos para guardar los datos  de las estructuras de manera correcta
Además de la lectura, "El Faro del Saber" también incorpora mecanismos efectivos para guardar datos de las estructuras. La función "registrarUsuario", que se encuentra en el archivo "Usuario.h", permite almacenar la información del usuario en un archivo de texto. Asimismo, la clase _Stack_ proporciona métodos para gestionar y almacenar los libros comprados, asegurando que la información se mantenga persistente entre sesiones. La implementación de estas funciones de escritura no solo garantiza que los datos se guarden correctamente, sino que también permite que el sistema se recupere de manera eficiente en futuras ejecuciones. Esto es esencial para la experiencia del usuario, ya que asegura que la información sobre los libros y los usuarios no se pierda.
- _Registrar usuario:_ (líneas 7 a 27 en el archivo "Usuario.h")

# Evidencia 2: Problemas
### Enlaces a vídeo explicativos:
- _Evidencia - Video 1 (Algoritmos de ordenamiento):_ https://drive.google.com/file/d/1LdskBApe4ZVgVWTRWENQvZ5D1C6um5eh/view?usp=share_link
- _Evidencia - Video 2 (Estructuras Lineales):_ https://drive.google.com/file/d/14CAWrjE0U2VGOH7rYLl8zb8YQP2Va2ey/view?usp=share_link
- _Evidencia - Video 3 (Estructuras No Lineales):_ https://drive.google.com/file/d/1uyPftmWDKVlrH5vr4SEAwlvNSxYyqcRY/view?usp=sharing
