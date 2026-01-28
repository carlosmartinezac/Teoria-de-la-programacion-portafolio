# 🧠 Unidad 3 — Modularidad y Arreglos

[🡐 Atrás](index.md)

<div align="center">
  
<h2>🧠 Unidad 3</h2>  
<h4>🔧 Modularidad y Arreglos</h4>

---

</div>



## ◆ Modularidad (teoría)

La modularidad es una técnica de programación que consiste en dividir un programa en partes más pequeñas llamadas módulos, funciones o procedimientos. Cada módulo se encarga de realizar una tarea específica dentro del programa.

Trabajar con modularidad permite que los programas sean más fáciles de entender, mantener y reutilizar. Además, ayuda a reducir errores, ya que cada parte del código puede revisarse y probarse de manera independiente.

Gracias a la modularidad, los programas grandes pueden organizarse de forma clara, evitando que todo el código esté en un solo bloque difícil de leer.

### ● Pase por valor  
El pase por valor ocurre cuando una función recibe una copia de una variable. Esto significa que cualquier cambio que se haga dentro de la función no afecta a la variable original fuera de ella.

Este tipo de paso de parámetros es útil cuando solo se necesita usar el dato para cálculos, pero no modificar el valor real.

🔗 Ejemplo en pseudocódigo: `modularidad_valor.psc`  
🔗 Ejemplo en diagrama de flujo: `modularidad_valor.png`  
🔗 Ejemplo en programa: `modularidad_valor.c`

---

### ● Pase por referencia  
El pase por referencia permite que una función trabaje directamente con la variable original. En este caso, los cambios realizados dentro de la función sí modifican el valor fuera de ella.

Este tipo de paso se utiliza cuando se necesita alterar el contenido de una variable desde una función o cuando se trabaja con grandes cantidades de datos y se desea evitar copias innecesarias.

> El programa define una función que intercambia los valores de dos variables usando pase por referencia. En el programa principal se asignan valores iniciales a dos números,  se envían sus direcciones de memoria a la función y allí se intercambian los valores. Al finalizar, se muestran los nuevos valores ya cambiados.


[🔗 Ejemplo](modularidad_referencia.c)

[🔗 Ejecución](modularidad_referencia.c)

---

## ◆ Arreglos (teoría)

Un arreglo es una estructura de datos que permite almacenar varios valores del mismo tipo bajo un mismo nombre de variable. Cada valor se guarda en una posición identificada por un índice.

Los arreglos facilitan el manejo de grandes cantidades de información, ya que permiten acceder a los datos de manera ordenada y mediante ciclos repetitivos.

Se utilizan cuando se necesita guardar listas de números, calificaciones, temperaturas, edades, entre muchos otros conjuntos de datos.

---

### ● Arreglo unidimensional (vector)

Un arreglo unidimensional, también llamado vector, almacena datos en una sola fila. Cada elemento se identifica por una única posición o índice.

Este tipo de arreglo se usa para trabajar con listas simples de datos, como notas de estudiantes, edades o precios.

🔗 Ejemplo en pseudocódigo: `arreglo_vector.psc`  
🔗 Ejemplo en diagrama de flujo: `arreglo_vector.png`  
🔗 Ejemplo en programa: `arreglo_vector.c`

---

### ● Arreglo bidimensional (matriz)

Un arreglo bidimensional, conocido como matriz, organiza los datos en filas y columnas. Cada elemento se identifica por dos índices: uno para la fila y otro para la columna.

Las matrices se utilizan cuando la información tiene forma de tabla, como calificaciones de varios estudiantes en varias materias o datos organizados por filas y columnas.

🔗 Ejemplo en pseudocódigo: `arreglo_matriz.psc`  
🔗 Ejemplo en diagrama de flujo: `arreglo_matriz.png`  
🔗 Ejemplo en programa: `arreglo_matriz.c`

---

### ● Arreglo tridimensional (cubo)

Un arreglo tridimensional es una estructura de datos que organiza la información en tres dimensiones.  
Se puede imaginar como un conjunto de matrices apiladas, donde cada dato se identifica por tres índices: fila, columna y profundidad.

Este tipo de arreglo se utiliza cuando se necesita representar información más compleja, como datos de temperaturas registradas en distintos días, horas y ciudades, o información almacenada en capas.

🔗 Ejemplo en pseudocódigo: `arreglo_cubo.psc`  
🔗 Ejemplo en diagrama de flujo: `arreglo_cubo.png`  
🔗 Ejemplo en programa: `arreglo_cubo.c`

---

## ◆ Principales dificultades en la aplicación de los contenidos

Durante el desarrollo de esta unidad, una de las principales dificultades fue comprender la diferencia entre funciones y procedimientos, así como entender cuándo utilizar cada uno. También resultó complejo asimilar el concepto de pase por referencia, ya que implica que los cambios hechos dentro de una función afectan directamente a la variable original.

En el tema de arreglos, fue un reto manejar correctamente los índices y evitar errores al recorrer vectores y matrices, especialmente al trabajar con ciclos anidados.

---

## ◆ Reflexión crítica de los aprendizajes de la unidad

En esta unidad comprendí la importancia de organizar mejor los programas mediante el uso de módulos. Aprendí que dividir un problema en partes más pequeñas facilita la programación y mejora la claridad del código.

También entendí cómo funcionan los arreglos y cómo permiten trabajar con múltiples datos de forma ordenada. Practicar con vectores y matrices me ayudó a mejorar mi lógica para recorrer datos y realizar operaciones repetitivas de manera más eficiente.

---

## ◆ Tareas entregadas

### APE 1: [Ver evidencia en google drive](https://drive.google.com/file/d/1W_UHMy2Ucb_LVnHMkeGe236uKB_r1OPc/view?usp=drive_link)

### AA 1: [Ver evidencia en google drive](https://drive.google.com/file/d/1xqDinok909-A7jyW8hWi06ZUHwvhIIPR/view?usp=drive_link)

---



