# Lab 1.2.13

-----

## Explicación del Ejercicio

Este laboratorio amplía la clase `FlightBooking` anterior para crear una aplicación de consola interactiva y más robusta, con reglas de negocio más complejas.

Las mejoras clave incluyen:

  * **Validación en el Constructor**: El constructor ahora valida los datos de entrada, asegurando que ni la capacidad ni las reservaciones iniciales sean negativas. Además, implementa una regla de **sobreventa (overbooking)**, limitando las reservaciones a un máximo del 105% de la capacidad total del vuelo.
  * **Métodos de Modificación**: Se añaden los métodos `reserveSeats()` y `canceReservations()` que permiten modificar el estado del objeto después de su creación. Ambos métodos retornan un valor booleano (`true` o `false`) para indicar si la operación fue exitosa, validando que las operaciones se mantengan dentro de los límites permitidos (por ejemplo, no exceder el 105% y no tener reservaciones negativas).
  * **Interfaz Interactiva**: La función `main` ahora contiene un bucle `while` que permite al usuario ejecutar múltiples comandos (`add`, `cancel`) para interactuar con el objeto del vuelo. El programa continúa ejecutándose hasta que el usuario introduce el comando `quit`.

-----

## Ejemplo de Funcionamiento

La siguiente es una sesión de ejemplo que muestra cómo el usuario interactúa con el programa y cómo se aplican las reglas de negocio.

```bash
Provide flight capacity: 100
Provide number of reserved seats: 100
Flight 1: 100/100(100%) seats reserved

What would you like to do?: (quit, add, cancel) 

add
How many seats would you like to add?
10


Cannot perform this operation
Flight 1: 100/100(100%) seats reserved

What would you like to do?: (quit, add, cancel) 

add
How many seats would you like to add?
5


Flight 1: 105/100(105%) seats reserved

What would you like to do?: (quit, add, cancel) 

cancel
How many seats would you like to remove?
10


Flight 1: 95/100(95%) seats reserved

What would you like to do?: (quit, add, cancel) 

quit
```
