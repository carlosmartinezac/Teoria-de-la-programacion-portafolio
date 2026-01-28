[🡐 Atrás](index.md)

<div align="center">

<h2>🧠 Unidad 3</h2>
<h4>🔧 Modularidad y Arreglos</h4>

---

</div>

## ■ Modularidad (teoría y ejemplos)

**Definición (corta)**  
La modularidad consiste en dividir un programa en partes más pequeñas (módulos, funciones o procedimientos) que realizan tareas concretas. Esto facilita la comprensión, reutilización y el mantenimiento del código.

### ● Pase por valor (concepto y ejemplo)
En el pase por valor, la función recibe **una copia** del dato; cambiar esa copia no modifica la variable original.

**PSeInt (pseudocódigo, simplificado para diagrama)**

```pseint
Proceso ejemploPorValor
    Definir x Como Entero
    Escribir "Ingrese un numero:"
    Leer x
    Escribir "Antes:", x
    Escribir "Llamando funcion que no modifica el original..."
    resultado <- duplicar(x)  // la función devuelve el doble, pero no cambia x
    Escribir "Resultado devuelto:", resultado
    Escribir "Despues (x sigue igual):", x
FinProceso

Funcion duplicar(n)
    Retornar n * 2
FinFuncion

