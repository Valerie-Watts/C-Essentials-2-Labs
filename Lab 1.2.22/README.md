# Lab 1.2.22

-----

## Explicación del Ejercicio 🧬

Este ejercicio es una demostración de dos conceptos fundamentales en la Programación Orientada a Objetos: la **herencia** y el **polimorfismo**.

  * **Estructura de Herencia**:

      * Se establece una clase base llamada `FarmAnimal`, que define características comunes como el consumo de agua (`water_consumption`).
      * Se crean dos clases derivadas, `dog` y `elephant`, que **heredan** de `FarmAnimal`. Cada una de estas clases especializa la clase base, estableciendo su propio nombre y consumo de agua en sus respectivos constructores.

  * **Polimorfismo en Acción**:

      * La función clave es `printConsumption(FarmAnimal& animal)`. Esta función está diseñada para aceptar una **referencia a la clase base** (`FarmAnimal&`), lo que le permite trabajar con objetos de cualquier clase que herede de ella (como `dog` o `elephant`).
      * Gracias a que el método `getName()` en la clase base está declarado como **`virtual`**, cuando `printConsumption` lo invoca, se ejecuta la versión correspondiente al tipo real del objeto. Esto permite que se muestre el nombre correcto ("dog" o "elephant") en lugar del nombre genérico de la clase base.

El programa `main` crea un objeto de cada clase y utiliza la función polimórfica `printConsumption` para mostrar cómo objetos de diferentes tipos pueden ser tratados de una manera uniforme.

-----

## Ejemplo de Funcionamiento 🖥️

El código no es interactivo. Al compilar y ejecutar, la salida que producirá en la consola es la siguiente:

```bash
cat consumes 5 liters of water.
What about the others?
The dog consumes 10 liters of water
The elephant consumes 21 liters of water
```
