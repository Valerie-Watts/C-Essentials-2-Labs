# Lab 1.2.25

-----

## Explicación del Ejercicio 🧠

Este ejercicio se centra en la **gestión de memoria** y el ciclo de vida de los objetos en una lista enlazada, introduciendo el concepto de **destructores** para prevenir fugas de memoria (*memory leaks*).

  * **Constructores y Destructores con Trazas**:

      * Tanto el constructor como el destructor de la clase `Node` ahora imprimen un mensaje en la consola (`"+Node"` y `"-Node"`). Esto sirve como una traza visual para observar en tiempo real cuándo se asigna memoria para un nuevo nodo y cuándo se libera.

  * **Destructor de la Lista (`~List`)**:

      * La adición más importante es el destructor de la clase `List`. Su responsabilidad es recorrer la lista completa y **eliminar cada uno de los nodos** que fueron creados dinámicamente.
      * Este destructor se invoca automáticamente cuando el objeto `list` sale del ámbito (en este caso, al final de la función `main`), garantizando que toda la memoria utilizada por la lista sea devuelta correctamente al sistema.

El programa `main` solo inserta cuatro elementos en la lista. La acción principal ocurre de forma implícita al final: la destrucción automática del objeto `list` desencadena la limpieza de todos sus nodos.

-----

## Ejemplo de Funcionamiento 🖥️

El código no es interactivo. La salida muestra la creación de los cuatro nodos seguida de su destrucción, que es iniciada por el destructor de la lista cuando el programa termina.

```bash
+Node
+Node
+Node
+Node
-Node
-Node
-Node
-Node
```
