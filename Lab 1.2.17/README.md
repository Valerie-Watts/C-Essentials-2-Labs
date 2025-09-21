# Lab 1.2.17

-----

## Explicación del Ejercicio

Este ejercicio amplía la clase `Fraction` anterior para incluir un conjunto completo de operaciones aritméticas, convirtiéndola en una herramienta más robusta para la manipulación de fracciones.

Las mejoras clave son:

  * **Simplificación de Fracciones**: Se ha añadido un método `reduce()` que simplifica automáticamente una fracción a su mínima expresión. Para lograrlo, calcula el **Máximo Común Divisor (MCD)** del numerador y el denominador utilizando el algoritmo de Euclides y luego divide ambos por este valor.
  * **Métodos Aritméticos**: La clase ahora incluye métodos para las cuatro operaciones aritméticas básicas. Cada método devuelve un nuevo objeto `Fraction` que representa el resultado, el cual es simplificado automáticamente:
      * `plus()`: Suma dos fracciones.
      * `minus()`: Resta una fracción de otra.
      * `times()`: Multiplica dos fracciones.
      * `by()`: Divide una fracción por otra.
  * **Entrada de Usuario Modular**: La lógica para leer una fracción del usuario se ha encapsulado en una función `read()`, lo que hace que el código en `main` sea más limpio y legible.

La función `main` ahora pide al usuario que ingrese dos fracciones y luego muestra los resultados de aplicar todas las operaciones entre ellas.

-----

## Ejemplo de Funcionamiento

A continuación se muestra una sesión de ejemplo completa, incluyendo la entrada de dos fracciones y los resultados calculados.

```bash

Insert the numerator: 
1

Insert the denominator: 
2


Insert the numerator: 
3

Insert the denominator: 
4
Addition: 1/2 + 3/4 = 1 1/4
Subtraction: 1/2 - 3/4 = -1/4
Multiplication: 1/2 * 3/4 = 3/8
Division: 1/2 / 3/4 = 2/3
```
