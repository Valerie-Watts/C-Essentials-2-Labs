# Lab 1.2.27

-----

## Explicación del Ejercicio

Este código implementa una lista enlazada simple que funciona como una **cola** con comportamiento **FIFO (First-In, First-Out)**. Esto significa que el primer elemento en entrar es el primero en salir.

  * **Estructura de la Lista**:

      * La clase `List` utiliza punteros `head` (cabeza) y `tail` (cola) para gestionar de manera eficiente el inicio y el final de la lista.
      * El uso combinado de inserciones por el final y extracciones por el inicio le confiere su comportamiento de cola.

  * **Operaciones Clave**:

      * **`push_back(int value)`**: Añade un elemento al **final** de la lista (operación de encolar).
      * **`pop_front(int& value)`**: Elimina un elemento del **inicio** de la lista (operación de desencolar).

La función `main` demuestra claramente este funcionamiento: primero, añade los números del 1 al 4 en la parte trasera de la lista. Luego, los extrae desde el frente, imprimiéndolos en el mismo orden en que fueron insertados.

-----

## Ejemplo de Funcionamiento

El código no es interactivo. El programa encola los números 1, 2, 3 y 4, y luego los desencola e imprime. La salida en la consola es la siguiente:

```bash
1
2
3
4
```
