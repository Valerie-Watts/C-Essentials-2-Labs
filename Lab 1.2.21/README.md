# Lab 1.2.21

-----

## Explicación del Ejercicio

Este ejercicio amplía las clases `Point2D` y `Line2D` para introducir el concepto de **colinealidad**, es decir, la capacidad de determinar si tres puntos se encuentran sobre la misma línea recta.

Las mejoras clave son:

  * **Nuevo Método `contains()`**: Se ha añadido a la clase `Line2D` un método booleano `contains(Point2D point)`. Esta función es el núcleo de la nueva funcionalidad y comprueba si un punto dado satisface la ecuación de la línea (`y = mx + b`).
  * **Comparación de Flotantes**: Para manejar la imprecisión inherente a los números de punto flotante (`double`), la comprobación de si un punto está en la línea no usa una igualdad directa. En su lugar, verifica si la diferencia entre el valor `y` del punto y el valor `y` esperado en la línea es despreciablemente pequeña.
  * **Funcionalidad en `main`**: El programa principal ahora solicita al usuario las coordenadas de **tres puntos**. Utiliza los dos primeros para definir una línea y luego invoca al método `contains()` para determinar si el tercer punto se encuentra en esa línea, informando finalmente si los tres puntos son colineales o no.

-----

## Ejemplo de Funcionamiento

A continuación, se muestra una sesión de ejemplo donde los tres puntos introducidos son colineales.

```bash
Enter the x coordinate: 
1
Enter the y coordinate: 
1
Enter the x coordinate: 
3
Enter the y coordinate: 
3
Enter the x coordinate: 
5
Enter the y coordinate: 
5

The distance between point 1 and 2 is: 2.82843
The line equation between point 1 and 2 is: y = 1.000000x
Between 3 points: 
collinear
```
