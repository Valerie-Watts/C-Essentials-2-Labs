# Lab 1.0.9

-----

## Explicación del Ejercicio

Este ejercicio compara dos enfoques de diseño para una misma clase mediante la implementación de dos versiones de un cuadrado: `AdHocSquare` y `lazySquare`. El objetivo es ilustrar diferentes estrategias para el cálculo y almacenamiento de atributos derivados.

  * **`AdHocSquare`**: Esta clase solo almacena el lado (`side`). El área se calcula "al momento" (ad-hoc) cada vez que se invoca al método `get_area()`. Este enfoque es simple pero puede ser menos eficiente si el área se solicita repetidamente sin que el lado cambie.

  * **`lazySquare`**: Esta clase implementa una estrategia de "evaluación perezosa" (lazy evaluation). Almacena tanto el lado como el área, junto con un indicador booleano (`changeSide`). El área solo se recalcula cuando es necesario, es decir, si el lado ha sido modificado desde la última vez que se calculó el área. Este método es más eficiente si el área se consulta con frecuencia pero el lado cambia raramente.

La función `main` crea un objeto de cada clase para demostrar su inicialización y la obtención de su área.

-----

## Ejemplo de Funcionamiento

Al compilar y ejecutar el código, la salida que se mostrará en la consola será la siguiente:

```bash
Square area is: 25
Square area is: 36
```
