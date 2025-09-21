# Lab 1.2.30

-----

## Explicación del Ejercicio

Este ejercicio introduce un concepto fundamental en la programación orientada a objetos con C++: el **constructor de copia** (*copy constructor*).

  * **Nuevo Constructor de Copia**:

      * Se ha añadido un constructor a la clase `List` con la firma `List(List& other)`.
      * El propósito de este constructor es permitir la creación de un nuevo objeto `List` que sea una **copia profunda (deep copy)** de una lista ya existente.

  * **Funcionamiento de la Copia Profunda**:

      * El constructor de copia funciona recorriendo la lista original (`other`) nodo por nodo.
      * Por cada nodo que encuentra, crea un **nuevo nodo** completamente separado en la nueva lista, copiando únicamente el valor.
      * Este enfoque garantiza que la lista nueva y la original sean **totalmente independientes**. Cada una gestiona su propia memoria, por lo que modificar una de las listas no tendrá ningún efecto sobre la otra.

La función `main` demuestra este principio de independencia de manera explícita: crea una lista `list1`, la usa para inicializar una `list2` mediante el constructor de copia, y luego modifica ambas. Al final, imprime las dos listas para verificar que los cambios en una no afectaron a la otra.

-----

## Ejemplo de Funcionamiento

El código no es interactivo. La salida en la consola muestra el estado de las dos listas en diferentes momentos: `list1` en su estado inicial, `list2` como una copia idéntica, y finalmente ambas listas después de haber sido modificadas de forma independiente.

```bash
list1
list[0] == 1
list[1] == 2
list[2] == 3
list[3] == 4

list2
list[0] == 1
list[1] == 2
list[2] == 3
list[3] == 4

list1
list[0] == 1
list[1] == 6
list[2] == 2
list[3] == 3
list[4] == 4

list2
list[0] == 1
list[1] == 2
list[2] == 4

```
