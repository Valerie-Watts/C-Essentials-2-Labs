# Lab 1.2.31

-----

## Explicación del Ejercicio

Este ejercicio evoluciona la estructura de datos a una **lista doblemente enlazada** (*doubly linked list*). Esta es una mejora significativa sobre la lista simplemente enlazada de laboratorios anteriores.

  * **Estructura del Nodo**:

      * La clase `Node` ahora contiene un puntero adicional, `Node* previous`. Esto permite que cada nodo conozca tanto al elemento **siguiente** como al **anterior** en la secuencia, facilitando la navegación en ambas direcciones.

  * **Principal Ventaja de Rendimiento**:

      * Gracias al puntero `previous`, la operación de eliminar el último elemento, **`pop_back()`**, ahora se ejecuta en **tiempo constante (O(1))**. Esto se debe a que ya no es necesario recorrer toda la lista desde el principio para encontrar el penúltimo nodo; el último nodo (`tail`) ya sabe cuál es su predecesor.

  * **Métodos Actualizados**:

      * Todas las funciones que modifican la lista (`push_front`, `push_back`, `pop_front`, `pop_back`, `insert_at`, `remove_at`) han sido reescritas para gestionar correctamente ambos punteros (`next` y `previous`), asegurando la integridad de la estructura.

La función `main` es la misma que la del laboratorio anterior, sirviendo como una prueba para verificar que la nueva implementación de la lista doblemente enlazada, incluyendo el constructor de copia, funciona correctamente.

-----

## Ejemplo de Funcionamiento

El código no es interactivo. La salida demuestra que el constructor de copia funciona correctamente con la nueva estructura y que las dos listas son independientes, ya que los cambios en una no afectan a la otra. La salida es la siguiente:

```bash
list1
list[0] == 1
list[1] == 2
list[2] == 3
list[3] == 4

list2 (copy of list1)
list[0] == 1
list[1] == 2
list[2] == 3
list[3] == 4

list1 (after insertion)
list[0] == 1
list[1] == 6
list[2] == 2
list[3] == 3
list[4] == 4

list2 (after removal)
list[0] == 1
list[1] == 2
list[2] == 4

```
