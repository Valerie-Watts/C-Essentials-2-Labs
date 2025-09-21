# Lab 1.2.18

-----

## Explicación del Ejercicio

Esta versión finaliza la clase `Fraction` añadiendo la capacidad de realizar **comparaciones lógicas**, además de las operaciones aritméticas ya implementadas.

Las mejoras clave de esta versión son:

  * **Métodos de Comparación**: Se han incorporado tres nuevos métodos que devuelven un valor booleano (`true` o `false`) para comparar la fracción actual con otra:
      * `isGreater()`: Determina si la fracción es **mayor que** otra.
      * `isLess()`: Determina si la fracción es **menor que** otra.
      * `isEqual()`: Determina si la fracción es **igual a** otra.
        Internamente, estos métodos realizan la comparación convirtiendo ambas fracciones a su valor decimal (`double`).
  * **Mejora en la Encapsulación**: El método `reduce()` se ha cambiado de `public` a `private`. Este es un refinamiento importante del diseño, ya que la simplificación de fracciones es ahora un proceso interno, manejado automáticamente por los métodos aritméticos, en lugar de ser una acción que el usuario de la clase deba invocar manualmente.

La función `main` ahora no solo realiza y muestra las operaciones aritméticas, sino que también utiliza los nuevos métodos de comparación para imprimir la relación (mayor, menor o igual) entre las dos fracciones ingresadas por el usuario.

-----

## Ejemplo de Funcionamiento

A continuación se muestra una sesión de ejemplo que incluye tanto los cálculos aritméticos como el resultado de la nueva funcionalidad de comparación.

```bash

Insert the numerator: 
3

Insert the denominator: 
4


Insert the numerator: 
1

Insert the denominator: 
2
Addition: 3/4 + 1/2 = 1 1/4
Subtraction: 3/4 - 1/2 = 1/4
Multiplication: 3/4 * 1/2 = 3/8
Division: 3/4 / 1/2 = 1 1/2
Comparison: 3/4 > 1/2
 
```
