# Lab 1.0.8

-----

## Explicación del Ejercicio 

Este ejercicio avanza en los conceptos de Programación Orientada a Objetos. El código define una clase `Square` que representa un cuadrado, demostrando el principio de **encapsulación** al mantener sus atributos (`side` y `area`) como **privados**.

El acceso y la modificación de estos atributos se controlan a través de métodos públicos:

  * Un **constructor** `Square(double side)` que inicializa el objeto.
  * Un método **setter** `set_side()` que no solo cambia el lado, sino que también recalcula el área y valida que el nuevo valor sea mayor o igual a 1.
  * Métodos **getters** `get_side()` y `get_area()` para obtener los valores.

La función `main` crea un objeto `Square`, lo imprime, modifica su lado dos veces y vuelve a imprimir su estado después de cada cambio para mostrar cómo el objeto se actualiza.

-----

## Ejemplo de Funcionamiento

Al compilar y ejecutar el código, la salida que se mostrará en la consola será la siguiente:

```bash
Square: side=4 area=16
Square: side=2 area=4
Square: side=33 area=1089
```
