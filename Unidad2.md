[🡐 Atrás](index.md)

<div align="center">

<h2>⚙️ Unidad 2</h2>

<h4>🧱 Estructuras Condicionales y Repetitivas</h4>

---

</div>

## ◆ Estructuras condicionales (tipos y ejercicios en diagrama de flujo y en C)

Las estructuras condicionales son construcciones de un programa que permiten tomar decisiones según si una condición es verdadera o falsa.  
Su propósito es que el algoritmo ejecute distintos caminos de acuerdo con las condiciones evaluadas.

## Tipos de estructuras condicionales

### 1. Condicional simple (IF)
Se ejecuta un bloque de instrucciones solo si la condición es verdadera.

> Este programa pide un número entero y verifica si es impar.  
> Si el residuo de dividirlo para 2 es 1, muestra un mensaje indicando que el número es impar.

[Ejemplo en C](estructurasCondicionales.c) · [Diagrama de flujo](estructurasCondicionales.png) · [Prueba de escritorio](estructurasCondicionales.md)

---

### 2. Condicional doble (IF–ELSE)
Permite ejecutar un bloque si la condición es verdadera y otro si es falsa.

> El programa solicita un número entero y verifica si es múltiplo de 3.  
> Para esto utiliza el operador módulo (%), que obtiene el residuo de dividir el número para 3.  
> Si el residuo es 0, el número es múltiplo de 3; de lo contrario, no lo es.

[Ejemplo en C](estructurasCondicionales1.c) · [Diagrama de flujo](estructurasCondicionales1.png) · [Prueba de escritorio](estructurasCondicionales1.md)

---

### 3. Condicional múltiple (IF – ELSE IF)
Permite evaluar varias condiciones una tras otra hasta encontrar la que se cumple.

> El programa solicita dos números enteros y un operador aritmético (+, -, *, /).  
> Según el operador ingresado, realiza la operación correspondiente entre A y B y muestra el resultado.  
> Si el operador no es válido, informa al usuario.

[Ejemplo en C](estructurasCondicionales2.c) · [Diagrama de flujo](estructurasCondicionales2.png) · [Prueba de escritorio](estructurasCondicionales2.md)

---

### 4. Condicional múltiple (SWITCH)
Permite elegir entre varias opciones según el valor de una variable.

> El programa solicita dos números y un operador aritmético (+, –, *, /). Luego realiza la operación indicada y muestra el resultado.  
> Si el operador no es válido, muestra un mensaje de error.

[Ejemplo en C](estructurasCondicionales3.c) · [Diagrama de flujo](estructurasCondicionales3.png) · [Prueba de escritorio](estructurasCondicionales3.md)

---

### 5. Anidamiento de condicionales
El anidamiento consiste en colocar una instrucción IF dentro de otra para evaluar casos más específicos.  
No es un tipo de estructura condicional, sino una forma de organizar varias decisiones dentro de otra.

> El programa pide dos números y primero verifica si el primero es mayor que el segundo; si esto ocurre, dentro del mismo bloque comprueba si ese número es par o impar.  
> Si el primer número no es mayor, muestra que el segundo número es mayor o igual.

[Ejemplo en C](estructurasCondicionales4.c) · [Diagrama de flujo](estructurasCondicionales4.png) · [Prueba de escritorio](estructurasCondicionales4.md)

---

## ◆ Estructuras repetitivas (tipos y ejercicios en diagrama de flujo y en C)

Las estructuras repetitivas permiten ejecutar un conjunto de instrucciones varias veces mientras se cumpla una condición.

## Tipos de estructuras repetitivas

### 1. Repetición mientras se cumpla una condición (WHILE)
La estructura while ejecuta un bloque de instrucciones *mientras* una condición lógica sea verdadera.  
Se usa cuando no se conoce cuántas repeticiones serán necesarias, ya que depende de una condición que puede cambiar durante la ejecución.

> El programa suma los números desde 0 hasta 5 usando un ciclo while, acumulándolos uno por uno en una variable hasta obtener el total de la suma.

[Ejemplo en C](estructurasRepetitivas.c) · [Diagrama de flujo](estructurasRepetitivas.png) · [Prueba de escritorio](estructurasRepetitivas.md)

---

### 2. Repetición que se ejecuta al menos una vez (DO–WHILE)
La estructura do–while es similar al *while*, pero con una diferencia importante:  
el bloque de código se ejecuta al menos una vez, porque la condición se evalúa al final.

> El programa utiliza un ciclo do–while para pedir números al usuario y cuenta cuántos de ellos son positivos.  
> El ciclo continúa hasta que se ingresa un número negativo o cero.

[Ejemplo en C](estructurasRepetitivas1.c) · [Diagrama de flujo](estructurasRepetitivas1.png) · [Prueba de escritorio](estructurasRepetitivas1.md)

---

### 3. Repetición controlada por contador (FOR)
La estructura for ejecuta un bloque un número específico de veces.  
Es ideal cuando se conoce cuántas iteraciones deben realizarse.

> El programa utiliza un ciclo for para sumar las fracciones 1/n desde n = 2 hasta n = 50, acumulando el resultado en la variable suma.

[Ejemplo en C](estructurasRepetitivas2.c) · [Diagrama de flujo](estructurasRepetitivas2.png) · [Prueba de escritorio](estructurasRepetitivas2.md)

---

## ◆ Ejercicio combinando estructura condicional y repetitiva (Java o Python)

### Descripción del problema
El programa pide números al usuario uno por uno. Mientras el número sea mayor o igual a 0, sigue pidiendo más.  
Cada vez que el usuario ingresa un número par, se suma 1 al contador.  
Cuando el usuario ingresa un número negativo, el ciclo termina y se muestra cuántos números pares ingresó.

### Diagrama de flujo simplificado: [Ver](programa.png)

### Programa: [Ver](ejercicio.py)

### Verificación: [Ver](programa.md)

---

## ◆ Principales dificultades en la aplicación de los contenidos

Al aplicar los contenidos de la unidad, lo más complicado para mí fue pasar de la teoría a la práctica. Entender los conceptos era relativamente sencillo, pero al momento de escribir el código me costaba identificar qué tipo de estructura usar y cómo organizar bien los pasos. También tuve problemas con algunos errores lógicos, sobre todo cuando anidaba las estructuras repetitivas, porque a veces el programa no hacía lo que yo esperaba. Poco a poco, revisando la lógica y haciendo pruebas, fui entendiendo mejor cómo funcionan estas estructuras.

---

## ◆ Reflexión crítica de los aprendizajes de la unidad

Esta unidad me ayudó a comprender que programar no es solo escribir instrucciones, sino pensar de manera ordenada y anticipar todos los casos posibles. Aprendí a analizar mejor los problemas antes de resolverlos y a ser más paciente cuando algo no sale a la primera. También entendí la importancia de las estructuras repetitivas y condicionales, ya que prácticamente cualquier programa real depende de ellas. En general, siento que ahora tengo una base más sólida y me siento más seguro para enfrentar ejercicios más complejos.

---

## ◆ Tareas entregadas

### ACD 1: [Ver](ejercicio.py)

### ACD 2: [Ver](ejercicio.py)

### APE 1: [Ver](ejercicio.py)

### APE 2: [Ver](ejercicio.py)

### AA 1: [Ver](ejercicio.py)

### AA 2: [Ver](ejercicio.py)



