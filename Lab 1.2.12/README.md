# Lab 1.2.12

-----

## Explicación del Ejercicio

Este código define una clase `FlightBooking` para modelar y reportar el estado de las reservaciones de un vuelo. La clase encapsula como datos **privados** un identificador (`id`), la capacidad total (`capacity`) y el número de asientos reservados (`reserved`).

Un **constructor** se encarga de inicializar el objeto con los valores correspondientes. El método `printStatus()` calcula el porcentaje de ocupación y muestra en pantalla un resumen claro del estado del vuelo.

La característica principal de este programa es su **interactividad**: la función `main` solicita al usuario que ingrese la capacidad y el número de reservaciones por teclado antes de crear el objeto `FlightBooking` y mostrar su estado.

-----

## Ejemplo de Funcionamiento

Dado que el programa solicita datos al usuario, la interacción en la consola se vería así (el texto después de los dos puntos es un ejemplo de lo que el usuario escribiría):

```bash
Provide flight capacity: 400
Provide number of reserved seats: 120
Flight 1: 120/400 (30%) seats reserved
```
