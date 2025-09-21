# Lab 1.2.16

-----

## Explicación del Ejercicio

Este ejercicio introduce una clase `Fraction` diseñada para representar y operar con fracciones matemáticas. La clase encapsula un **numerador** y un **denominador** como miembros privados.

Las características principales de la clase son:

  * **Constructor Seguro**: El constructor que inicializa la fracción incluye una validación para prevenir la división por cero. Si se proporciona un denominador de 0, se establece automáticamente en 1.
  * **Múltiples Representaciones**: La clase ofrece dos métodos para mostrar la fracción de diferentes maneras:
      * `toString()`: Convierte la fracción a un formato de texto como un **número mixto** (por ejemplo, "1 3/4"), manejando correctamente los signos, los enteros y la parte fraccionaria.
      * `toDouble()`: Convierte la fracción a su equivalente numérico en formato **decimal** (por ejemplo, 1.75).

La función `main` es interactiva y solicita al usuario que ingrese un numerador y un denominador para luego mostrar la fracción en ambos formatos.

-----

## Ejemplo de Funcionamiento

A continuación se muestra una sesión de ejemplo de cómo interactúa el usuario con el programa y el resultado que se produce.

```bash

Insert the numerator: 
7

Insert the denominator: 
2

3 1/2 is 3.5 in decimal

```
