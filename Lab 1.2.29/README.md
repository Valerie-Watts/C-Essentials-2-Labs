# Lab 1.2.29

-----

## Explicación del Ejercicio

Este ejercicio amplía la funcionalidad de la clase de lista enlazada para incluir **operaciones de acceso por índice**, permitiendo manipular elementos en posiciones específicas, de manera similar a un arreglo.

  * **Nuevas Operaciones por Índice**: Se han añadido tres métodos clave que operan sobre un índice específico en la lista:

      * **`at(int index)`**: Devuelve el valor del nodo en la posición indicada.
      * **`insert_at(int index, int value)`**: Inserta un nuevo nodo con un valor dado en una posición específica.
      * **`remove_at(int index)`**: Elimina el nodo que se encuentra en el índice especificado.

  * **Consideraciones de Rendimiento**: A diferencia de un arreglo, el acceso por índice en una lista enlazada es una operación de **tiempo lineal (O(n))**. Esto se debe a que para llegar a un índice, es necesario recorrer la lista desde el principio (`head`) hasta alcanzar la posición deseada.

La función `main` demuestra el uso de estas nuevas capacidades: construye una lista, la imprime, elimina un elemento de una posición intermedia, la vuelve a imprimir, inserta un nuevo elemento y muestra el estado final de la lista.

-----

## Ejemplo de Funcionamiento

El código no es interactivo. La salida en consola muestra el estado de la lista en tres momentos clave: inicial, después de eliminar un elemento y después de insertar otro.

```bash
list[0] == 1
list[1] == 2
list[2] == 3
list[3] == 4

list[0] == 1
list[1] == 2
list[2] == 4

list[0] == 1
list[1] == 6
list[2] == 2
list[3] == 4
```
