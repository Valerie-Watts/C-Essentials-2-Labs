# Lab 1.2.20

-----

## Explicación del Ejercicio

Este ejercicio expande el programa anterior al introducir una nueva clase, `Line2D`, que modela una línea recta en un plano 2D. Esta nueva clase utiliza la clase `Point2D` existente como un componente fundamental para su definición.

Las características principales son:

  * **Clase `Line2D`**:
      * Se construye a partir de **dos objetos `Point2D`**.
      * El constructor calcula automáticamente la **pendiente (`slope`)** y la **intersección con el eje Y (`y-intercept`)** basándose en los dos puntos proporcionados.
      * Incluye un manejo especial para **líneas verticales** (cuando las coordenadas X de ambos puntos son iguales), donde la pendiente es indefinida.
  * **Representación Algebraica**:
      * El método `toString()` genera una cadena de texto con la **ecuación de la línea** en su formato algebraico estándar (`y = mx + b` o `x = k` para líneas verticales).
  * **Funcionalidad en `main`**:
      * El programa principal solicita al usuario las coordenadas de dos puntos. Luego, no solo calcula la distancia entre ellos, sino que también crea una línea y muestra su ecuación correspondiente.

-----

## Ejemplo de Funcionamiento

A continuación se muestra una sesión de ejemplo donde el usuario introduce dos puntos y el programa calcula tanto la distancia como la ecuación de la línea.

```bash
Enter the x coordinate: 
1
Enter the y coordinate: 
3
Enter the x coordinate: 
3
Enter the y coordinate: 
7

The distance is: 4.47214
The line equation is: y = 2.000000x + 1.000000
```
