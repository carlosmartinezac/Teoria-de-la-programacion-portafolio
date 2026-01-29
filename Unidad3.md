# 🧠 Unidad 3 — Modularidad y Arreglos

[🡐 Atrás](index.md)

<div align="center">
  
<h2>🧠 Unidad 3</h2>  
<h4>🔧 Modularidad y Arreglos</h4>

---

</div>



## ◆ Modularidad

La modularidad es una técnica de programación que consiste en dividir un programa en partes más pequeñas llamadas módulos, funciones o procedimientos. Cada módulo se encarga de realizar una tarea específica dentro del programa.

Trabajar con modularidad permite que los programas sean más fáciles de entender, mantener y reutilizar. Además, ayuda a reducir errores, ya que cada parte del código puede revisarse y probarse de manera independiente.

Gracias a la modularidad, los programas grandes pueden organizarse de forma clara, evitando que todo el código esté en un solo bloque difícil de leer.

### ● Pase por valor  
El pase por valor ocurre cuando una función recibe una copia de una variable. Esto significa que cualquier cambio que se haga dentro de la función no afecta a la variable original fuera de ella.

Este tipo de paso de parámetros es útil cuando solo se necesita usar el dato para cálculos, pero no modificar el valor real.

> El programa utiliza una función que recibe un número por valor y lo duplica dentro de la función. Sin embargo, como el parámetro se pasa como copia, el valor original no se modifica fuera de la función. Al final se muestra que el número dentro de la función cambia, pero fuera de ella permanece igual.

[🔗 Ejemplo](modularidad_valor.c)

[🔗 Ejecución](modularidad_valor.png)

---

### ● Pase por referencia  
El pase por referencia permite que una función trabaje directamente con la variable original. En este caso, los cambios realizados dentro de la función sí modifican el valor fuera de ella.

Este tipo de paso se utiliza cuando se necesita alterar el contenido de una variable desde una función o cuando se trabaja con grandes cantidades de datos y se desea evitar copias innecesarias.

> El programa define una función que intercambia los valores de dos variables usando pase por referencia. En el programa principal se asignan valores iniciales a dos números,  se envían sus direcciones de memoria a la función y allí se intercambian los valores. Al finalizar, se muestran los nuevos valores ya cambiados.


[🔗 Ejemplo](modularidad_referencia.c)

[🔗 Ejecución](modularidad_referencia.png)

---

## ◆ Arreglos

Un arreglo es una estructura de datos que permite almacenar varios valores del mismo tipo bajo un mismo nombre de variable. Cada valor se guarda en una posición identificada por un índice.

Los arreglos facilitan el manejo de grandes cantidades de información, ya que permiten acceder a los datos de manera ordenada y mediante ciclos repetitivos.

Se utilizan cuando se necesita guardar listas de números, calificaciones, temperaturas, edades, entre muchos otros conjuntos de datos.

---

### ● Arreglo unidimensional (vector)

Un arreglo unidimensional, también llamado vector, almacena datos en una sola fila. Cada elemento se identifica por una única posición o índice.

Este tipo de arreglo se usa para trabajar con listas simples de datos, como notas de estudiantes, edades o precios.

> El programa utiliza un arreglo unidimensional para almacenar cinco números enteros. Luego emplea un ciclo for para recorrer cada posición del arreglo y mostrar en pantalla el índice y el valor guardado en esa posición.


[🔗 Ejemplo](arreglo_uni.c)

[🔗 Ejecución](arreglo_uni.png)

---

### ● Arreglo bidimensional (matriz)

Un arreglo bidimensional, conocido como matriz, organiza los datos en filas y columnas. Cada elemento se identifica por dos índices: uno para la fila y otro para la columna.

Las matrices se utilizan cuando la información tiene forma de tabla, como calificaciones de varios estudiantes en varias materias o datos organizados por filas y columnas.

> El programa utiliza un arreglo bidimensional (matriz) de 3 filas y 4 columnas para almacenar números enteros. Luego emplea dos ciclos for anidados para recorrer la matriz por filas y columnas, mostrando en pantalla la posición (fila y columna) y el valor almacenado en cada índice.

[🔗 Ejemplo](arreglo_bi.c)

[🔗 Ejecución](arreglo_bi.png)

---

### ● Arreglo tridimensional

Un arreglo tridimensional es una estructura de datos que organiza la información en tres dimensiones.  
Se puede imaginar como un conjunto de matrices apiladas, donde cada dato se identifica por tres índices: fila, columna y profundidad.

Este tipo de arreglo se utiliza cuando se necesita representar información más compleja, como datos de temperaturas registradas en distintos días, horas y ciudades, o información almacenada en capas.

> El programa utiliza un arreglo tridimensional para almacenar números enteros organizados en 2 capas, cada una con 3 filas y 2 columnas. Luego emplea tres ciclos for anidados para recorrer todas las posiciones del arreglo, mostrando en pantalla la capa, la fila, la columna y el valor almacenado en cada índice.

[🔗 Ejemplo](arreglo_tri.c)

[🔗 Ejecución](arreglo_tri.png)


---

## ◆ Principales dificultades en la aplicación de los contenidos

Durante el desarrollo de esta unidad, una de las principales dificultades fue encontrar la lógica adecuada para decidir cuándo usar funciones y cómo aplicar correctamente el pase de parámetros según el problema planteado. Entender qué datos debían enviarse y cómo se modificaban dentro de las funciones requirió bastante análisis.

En el tema de arreglos, también resultó un poco difícil comprender la organización de las ubicaciones, especialmente en los arreglos tridimensionales, ya que trabajar con varias dimensiones y posiciones al mismo tiempo hizo más complejo el manejo de los datos.

---

## ◆ Reflexión crítica de los aprendizajes de la unidad

En esta unidad comprendí la importancia de organizar mejor los programas mediante el uso de módulos. Aprendí que dividir un problema en partes más pequeñas facilita la programación y mejora la claridad del código.

También entendí cómo funcionan los arreglos y cómo permiten trabajar con múltiples datos de forma ordenada. Practicar con vectores y matrices me ayudó a mejorar mi lógica para recorrer datos y realizar operaciones repetitivas de manera más eficiente.

---

## ◆ Tareas entregadas

### APE 1: [Ver evidencia en google drive](https://drive.google.com/file/d/1W_UHMy2Ucb_LVnHMkeGe236uKB_r1OPc/view?usp=drive_link)

### AA 1: [Ver evidencia en google drive](https://drive.google.com/file/d/1xqDinok909-A7jyW8hWi06ZUHwvhIIPR/view?usp=drive_link)

---



