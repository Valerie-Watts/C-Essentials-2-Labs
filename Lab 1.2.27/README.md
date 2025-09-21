# Lab 1.2.27

-----

## Explicación del Ejercicio

Este ejercicio mejora la lista enlazada para convertirla en una estructura más flexible, capaz de realizar operaciones tanto al principio como al final. Esto se logra mediante la introducción de un puntero a la cola de la lista.

  * **Puntero `tail`**:

      * La modificación principal es la adición de un puntero `Node* tail` a la clase `List`. Este puntero siempre apunta al **último nodo** de la lista.
      * La ventaja de tener este puntero es que permite añadir nuevos nodos al final de la lista de forma extremadamente eficiente (una operación de tiempo constante, O(1)).

  * **Nuevas Operaciones**:

      * **`push_back(int value)`**: Inserta un nuevo elemento al **final** de la lista utilizando el puntero `tail` para un rendimiento óptimo.
      * **`pop_back(int& value)`**: Elimina el elemento del **final** de la lista. Es importante notar que, en una lista enlazada simple, esta operación es menos eficiente (tiempo lineal, O(n)), ya que requiere recorrer la lista desde el `head` para encontrar el nodo anterior al final.

  * **Métodos Actualizados**:

      * Las funciones `push_front` y `pop_front` existentes han sido actualizadas para asegurar que el puntero `tail` se mantenga consistente, especialmente en casos donde la lista está vacía o se queda con un solo elemento.

La función `main` demuestra esta nueva capacidad: inserta varios elementos por el frente y luego los extrae por la parte trasera, exhibiendo un comportamiento de cola **FIFO** (First-In, First-Out).

-----

## Ejemplo de Funcionamiento

El código no es interactivo. El programa inserta los números 4, 3, 2 y 1 al frente de la lista (resultando en el orden `[4, 3, 2, 1]`) y luego los extrae desde el final. La salida en la consola es la siguiente:

```bash
1
2
3
4
```
