[🡐 Atrás](Unidad1.md)

<div align="center">

<h2>📚 Contenido de la unidad — Unidad 1</h2>
<h4>📘 Teoría de la Programación</h4>

</div>

### 🧩 **1. Algoritmos, pseudocódigo y diagramas de flujo**

Los algoritmos son conjuntos ordenados de pasos que permiten resolver un problema o realizar una tarea específica.
Cada instrucción debe ser clara y lógica, de modo que el proceso pueda ejecutarse sin confusión.
Son la base de la programación, ya que permiten transformar ideas en procedimientos que una computadora puede interpretar.

🔹 Pseudocódigo

El pseudocódigo es una forma escrita y estructurada de expresar un algoritmo, utilizando un lenguaje similar al natural pero con una lógica propia de la programación.
Permite representar las acciones de manera ordenada antes de convertirlas en código real.
Es una herramienta intermedia que ayuda a planificar y comprender el funcionamiento del programa.

🔹 Diagrama de flujo

El diagrama de flujo representa gráficamente los pasos de un algoritmo mediante símbolos y flechas que indican el orden del proceso.
Facilita la visualización de la lógica, la detección de errores y la comunicación de la estructura del programa.
Es muy utilizado como paso previo a la codificación, ya que muestra de forma visual cómo fluye la información.

> El ejemplo 1 permite calcular el cambio que una persona recibe después de realizar una compra. Solicita la cantidad de dinero disponible y el costo del producto, realiza la resta entre ambas cantidades y muestra el valor del cambio que corresponde devolver.

[Ejemplo 1 en pseudocódigo](seis.psc) · [Ejemplo 1 en diagrama de flujo](seis.png) · [Ejemplo 1, prueba de escritorio](tabla1.md)

> El ejemplo 2 calcula el volumen de un prisma rectangular. Pide al usuario que ingrese las medidas de sus tres lados (A, B y C), multiplica esos valores para obtener el volumen y finalmente muestra el resultado en pantalla.

[Ejemplo 2 en pseudocódigo](cinco.psc) · [Ejemplo 2 en diagrama de flujo](cinco.png) · [Ejemplo 2, prueba de escritorio](tabla2.md)

---

### 🧱 **2. Programación por bloques**

La programación por bloques es una forma visual de crear programas mediante el uso de bloques gráficos que representan instrucciones o acciones.
Cada bloque tiene una función específica —como leer datos, realizar operaciones o mostrar resultados— y se conecta con otros como si fueran piezas de un rompecabezas.
Este método facilita el aprendizaje de la lógica de programación, ya que no requiere escribir código, sino comprender cómo se relacionan las instrucciones.

Se utiliza principalmente en entornos educativos y plataformas como Scratch o Blockly, que permiten construir programas de manera intuitiva y dinámica.
Gracias a su diseño visual, los estudiantes pueden entender el flujo del algoritmo, identificar errores con facilidad y desarrollar el pensamiento lógico de forma práctica.

> En el ejemplo 3 hace que un personaje se mueva en dos fases: primero avanza en línea recta de forma continua, y luego realiza un movimiento en zig-zag avanzando, girando, avanzando y corrigiendo la dirección.

[Ejemplo 1 de programacion por bloques](df1.png)

> En el ejemplo 2 hace que el personaje avance 2 veces y luego gire a la izquierda. Luego repite el mismo moovimiento de avanzar hasta llegar a la meta.

[Ejemplo 3 de programacion por bloques](df2.png)

> En el ejemplo 3 hace que el personaje avance y gire repetidamente hasta que haya un camino a la izquierda. Cuando detecta un camino libre a la izquierda, gira y corre hacia ese lado, luego avanza.

[Ejemplo 3 de programacion por bloques](df3.png)

---

### ⚙️ **3.Algoritmos con estructuras lineales o secuenciales**

Los algoritmos secuenciales (también llamados lineales) son aquellos en los que las instrucciones se ejecutan una después de otra, siguiendo un orden fijo y sin saltos o decisiones.
Cada paso depende del anterior, y el proceso termina cuando todas las acciones han sido realizadas.
Este tipo de estructura es la más básica en la programación y se utiliza cuando no existen condiciones (if) ni repeticiones (bucles).

#### 🖥️ **Cómo se ejecutan los programas en C**

Para ejecutar un programa en C se deben seguir dos pasos principales:

*1. Compilar el programa:*
Esto convierte el código fuente (.c) en un archivo ejecutable.
En la terminal se usa el comando: gcc nombre_del_programa.c -o nombre_del_programa


*2. Ejecutar el programa:*
Una vez compilado, se ejecuta con el siguiente comando: ./nombre_del_programa

Estos son algunos ejemplos comunes de algoritmos secuenciales:

> En el ejemplo 1 pide al usuario que ingrese un número entero y luego calcula su doble y su triple. Primero guarda el número ingresado en la variable numero, después multiplica por 2 y por 3 para obtener doble y triple. Finalmente, muestra en pantalla ambos resultados.

[Ejemplo 1 en C](ejercicio1.c) · [Ejemplo 1 en Pseudocódigo](ejercicio1.psc) · [Ejemplo 1, prueba de escritorio](tabla3.md)

> En el ejemplo 2 convierte una medida dada en pies a otras unidades de longitud. El usuario ingresa un valor en pies, y el programa calcula su equivalente en yardas, pulgadas, centímetros y metros mediante las fórmulas de conversión. Finalmente, muestra todos los resultados en pantalla.

[Ejemplo 2 en C](ejercicio2.c) · [Ejemplo 2 en Pseudocódigo](ejercicio2.psc) · [Ejemplo 2, prueba de escritorio](tabla4.md)

> En el ejemplo 3 calcula la distancia entre dos puntos en un plano cartesiano. Solicita al usuario las coordenadas x1, y1, x2, y2, luego aplica la fórmula de la distancia usando funciones matemáticas (pow y sqrt) para obtener el resultado. Finalmente, muestra la distancia calculada en pantalla.

[Ejemplo 3 en C](ejercicio3.c) · [Ejemplo 3 en Pseudocódigo](ejercicio3.psc) · [Ejemplo 3, prueba de escritorio](tabla5.md)

---

### ⚠️ **4. Principales dificultades en la aplicación de los contenidos**

Durante el aprendizaje de los fundamentos de la programación, una de las principales dificultades fue memorizar y aplicar correctamente los comandos y tipos de datos del lenguaje C.
Al comenzar a escribir los primeros programas, resultó confuso recordar qué tipo de dato utilizar en cada caso, por ejemplo:
int para números enteros, float para valores decimales, char para caracteres individuales o double para datos de mayor precisión.

También generó dudas el uso de los especificadores de formato en las funciones de entrada y salida, como %d para enteros, %f para decimales o %lf para valores tipo double.
Estos detalles son fundamentales para que el programa funcione correctamente, pero requieren práctica constante y atención a la sintaxis para evitar errores de ejecución.

A pesar de estas dificultades iniciales, con la práctica se logró una mejor comprensión de la estructura del lenguaje y del modo en que se relacionan los tipos de datos con las instrucciones de los algoritmos.

---

### 💭 **5.Reflexión crítica de los aprendizajes de la unidad**

La Unidad 1 permitió desarrollar una comprensión más profunda del pensamiento lógico y del proceso que sigue un programa desde su diseño hasta su ejecución.
A través del estudio de los algoritmos, pseudocódigos y diagramas de flujo, se fortalecieron las habilidades para analizar problemas y transformarlos en pasos ordenados, aplicando estructuras secuenciales que reflejan la lógica del proceso computacional.

El trabajo con el lenguaje C ayudó a relacionar la teoría con la práctica, comprendiendo cómo los algoritmos se traducen en instrucciones que la computadora puede ejecutar.
Aunque al inicio hubo dificultades con la sintaxis y los tipos de datos, la práctica permitió mejorar la precisión, la atención al detalle y la capacidad de razonamiento lógico.

En conjunto, esta unidad contribuyó al desarrollo de una base sólida para continuar aprendiendo programación, valorando la importancia de planificar, estructurar y entender la lógica antes de escribir código.

