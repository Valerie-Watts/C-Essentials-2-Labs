# Lab 1.2.28

-----

## Explicación del Ejercicio

Este ejercicio utiliza la misma clase de lista enlazada con punteros `head` y `tail` para demostrar un comportamiento de **cola FIFO (First-In, First-Out)**, donde el primer elemento que entra es el primero que sale.

  * **Estructura de la Lista**: La clase `List` no ha cambiado y sigue permitiendo operaciones eficientes en ambos extremos de la lista.

  * **Lógica de la Cola**: El comportamiento de cola se logra en la función `main` mediante una combinación específica de operaciones:

      * **`push_front()`**: Los elementos se insertan al **inicio** de la lista.
      * **`pop_back()`**: Los elementos se extraen desde el **final** de la lista.

Este patrón de "insertar por el frente y extraer por el fondo" asegura que el primer elemento que fue añadido a la lista (el número 1, que queda al final) sea el primero en ser retirado.

-----

## Ejemplo de Funcionamiento

El código no es interactivo. El programa inserta los números 4, 3, 2 y 1 al frente de la lista (resultando en el orden `[4, 3, 2, 1]`) y luego los extrae desde el final. La salida en la consola es la siguiente:

```bash
1
2
3
4
```
