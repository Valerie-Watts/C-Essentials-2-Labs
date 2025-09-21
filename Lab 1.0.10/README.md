# Lab 1.0.10

-----

## Explicación del Ejercicio

Este ejercicio introduce una clase llamada `ShopItemOrder` para modelar un pedido de un artículo específico en una tienda. El código demuestra principios básicos de la Programación Orientada a Objetos, como la **encapsulación** y la **validación de datos**.

  * **Clase `ShopItemOrder`**:

      * Encapsula como datos privados el **nombre** del artículo, su **precio** unitario y la **cantidad** de artículos solicitados (`itemsOrdered`).
      * El **constructor** de la clase incluye lógica de **validación** para asegurar que ni el precio ni la cantidad puedan ser negativos. Si se proporciona un valor inválido, se establece en 0 por defecto.

  * **Métodos**:

      * La clase proporciona métodos **getter** públicos (`getName`, `getPrice`, `getItemsOrdered`) para acceder a sus datos de forma controlada.
      * También incluye un método `totalPrice()` que calcula el costo total del pedido multiplicando el precio por la cantidad.

La función `main` crea una instancia de `ShopItemOrder` y utiliza sus métodos para imprimir en la consola un resumen detallado del pedido y su costo total.

-----

## Ejemplo de Funcionamiento

El código no es interactivo. Al compilar y ejecutar, la salida que producirá en la consola es la siguiente:

```bash
You have ordered: 5 Apples for $25.5 
Your total is: $127.5
```
