# Lab 1.2.14

-----

## Explicación del Ejercicio

Este ejercicio evoluciona el programa anterior de una aplicación que gestiona un solo vuelo a un sistema de gestión de múltiples vuelos.

Los cambios fundamentales son:

  * **Gestión de Múltiples Vuelos**: El programa ahora utiliza un **arreglo** de `FlightBooking` (`booking[10]`) para almacenar y operar hasta 10 vuelos de forma simultánea.
  * **Constructor por Defecto**: Se introduce un nuevo constructor `FlightBooking()` que inicializa un objeto en un estado "vacío" o "inactivo", marcado con un `id = -1`. Esto permite al sistema identificar qué espacios del arreglo están disponibles.
  * **Funcionalidad del Sistema Ampliada**: La función `main` ahora opera como un menú principal para un sistema de reservas completo, con comandos que gestionan el ciclo de vida de los vuelos:
      * **`create`**: Busca un espacio libre en el arreglo y crea un nuevo vuelo con el ID y la capacidad especificados por el usuario.
      * **`add` / `cancel`**: Modificados para solicitar primero el ID del vuelo sobre el cual se desea realizar la operación, permitiendo así modificar un vuelo específico dentro del arreglo.
      * **`delete`**: Busca un vuelo por su ID y lo elimina, restableciendo ese espacio en el arreglo a su estado "vacío" para que pueda ser reutilizado.

-----

## Ejemplo de Funcionamiento

A continuación se muestra una sesión de ejemplo que ilustra la creación, modificación y eliminación de múltiples vuelos.

```bash
Welcome to the Flight Booking System


There are no flights registered

What would you like to do?: (quit, add, cancel, create, delete) 

create
Insert flight number: 
101
Insert flight capacity: 
200
Flight 101 has been created
Flight 101: 0/200(0%) seats reserved

What would you like to do?: (quit, add, cancel, create, delete) 

create
Insert flight number: 
202
Insert flight capacity: 
150
Flight 202 has been created
Flight 202: 0/150(0%) seats reserved

What would you like to do?: (quit, add, cancel, create, delete) 

add
What flight would like to add seats?
101
How many reservations would you like to add?
50


Flight 101: 50/200(25%) seats reserved

What would you like to do?: (quit, add, cancel, create, delete) 

delete
What flight would you like to remove? 
202
Flight 202 has been removed

What would you like to do?: (quit, add, cancel, create, delete) 

quit
```
