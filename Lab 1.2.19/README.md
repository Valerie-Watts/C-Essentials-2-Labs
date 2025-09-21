# Lab 1.2.19

-----

## Explicación del Ejercicio

Este ejercicio introduce una clase `Point2D` para representar un punto en un plano cartesiano de dos dimensiones. La clase almacena las coordenadas **x** e **y** como miembros privados.

La funcionalidad principal reside en el método `distanceTo()`, el cual calcula la **distancia euclidiana** entre dos puntos. Para ello, implementa la fórmula de la distancia derivada del teorema de Pitágoras: `sqrt((x2 - x1)² + (y2 - y1)²)`.

El programa es interactivo: la función `main` solicita al usuario que ingrese las coordenadas para dos puntos (`p1` y `p2`) y, a continuación, calcula y muestra la distancia que los separa.

-----

## Ejemplo de Funcionamiento

A continuación se muestra una sesión de ejemplo donde el usuario introduce las coordenadas de dos puntos y el programa calcula el resultado.

```bash
Enter the x coordinate: 
0
Enter the y coordinate: 
0
Enter the x coordinate: 
3
Enter the y coordinate: 
4

The distance is: 5
```
