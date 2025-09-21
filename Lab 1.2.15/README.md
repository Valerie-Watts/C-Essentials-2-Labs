# Lab 1.2.15

-----

## Explicación del Ejercicio

Este ejercicio reutiliza la estructura del sistema de gestión anterior para aplicarla a un dominio diferente: un sistema de membresías de gimnasio. El programa gestiona una colección de hasta 10 miembros utilizando un arreglo y una interfaz de consola interactiva.

La lógica principal se centra en la clase `Memberships`, que almacena un **ID**, un **nombre** y los **meses de validez** de la suscripción de un miembro.

Las funcionalidades clave son:

  * **Gestión de Múltiples Miembros**: Utiliza un **arreglo** de `Memberships` para almacenar los registros. Los espacios vacíos en el arreglo se identifican con un `id` de `-1`.
  * **Operaciones CRUD**: La función `main` permite al usuario realizar operaciones básicas sobre los miembros a través de comandos de texto:
      * **`create`**: Añade un nuevo miembro al sistema.
      * **`delete`**: Elimina un miembro existente por su ID.
      * **`extend`**: Aumenta los meses de validez de la suscripción de un miembro.
      * **`cancel`**: Revoca la membresía de un miembro, estableciendo sus meses de validez a cero.

-----

## Ejemplo de Funcionamiento

A continuación, se muestra una sesión de ejemplo que ilustra el flujo de creación, modificación y eliminación de membresías.

```bash
Welcome to the Gym Membership Managing System


There are no flights registered

What would you like to do?: (quit, extend, cancel, create, delete) 

create
Insert member id number: 
45
Insert member name: 
Ana
Memeber 45 has been created
Member 45: Ana, subscription is valid for 0 months

What would you like to do?: (quit, extend, cancel, create, delete) 

extend
What member would you like to extend the membership to?
45
How many months would you like to extend?
12


Member 45: Ana, subscription is valid for 12 months

What would you like to do?: (quit, extend, cancel, create, delete) 

cancel
What member would you liek to cancel membershio from?
45
How many months do you want to remove?
6


Member 45: Ana, subscription is valid for 0 months

What would you like to do?: (quit, extend, cancel, create, delete) 

delete
What member would you like to remove? 
45
Member 45 has been removed

What would you like to do?: (quit, extend, cancel, create, delete) 

quit
```
