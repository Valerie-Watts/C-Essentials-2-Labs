# Lab 1.2.24

-----

## Explicación del Ejercicio

Este ejercicio implementa una **lista enlazada simple** (singly linked list), una estructura de datos fundamental que permite el almacenamiento dinámico de elementos. La implementación se comporta como una pila **LIFO** (Last-In, First-Out), ya que las operaciones de inserción y extracción se realizan por el mismo extremo.

  * **Clase `Node`**:

      * Es el bloque de construcción básico de la lista. Cada `Node` contiene un valor entero (`value`) y un puntero (`next`) que apunta al siguiente nodo en la secuencia.

  * **Clase `List`**:

      * Administra la estructura de nodos. Mantiene un único puntero, `head`, que siempre apunta al primer nodo de la lista.
      * **`push_front(int value)`**: Crea un nuevo nodo con el valor dado y lo inserta al **principio** de la lista, convirtiéndolo en el nuevo `head`.
      * **`pop_front(int& value)`**: Elimina el nodo que se encuentra al **principio** de la lista. Devuelve el valor de ese nodo a través de un parámetro por referencia y libera la memoria. Si la lista está vacía, devuelve `false`.

El programa `main` crea una lista, inserta los números 1, 2, 3 y 4 (en ese orden) al frente, y luego los extrae e imprime uno por uno hasta que la lista queda vacía.

-----

## Ejemplo de Funcionamiento

El código no es interactivo. Dado que los elementos se insertan y extraen del frente (LIFO), el último número insertado (4) será el primero en salir. La salida en la consola será la siguiente:

```bash
4
3
2
1
```
