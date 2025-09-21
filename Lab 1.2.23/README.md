# Lab 1.2.23

-----

## Explicación del Ejercicio 💧

Este ejercicio demuestra el uso de **clases abstractas** y **funciones virtuales puras**, conceptos avanzados de la herencia y el polimorfismo en C++.

  * **Clase Base Abstracta**:

      * La clase `FarmAnimal` ahora es una **clase abstracta**. Esto se debe a que contiene una función virtual pura: `virtual double getWaterConsumption() const = 0;`.
      * La sintaxis `= 0` significa que la clase base no define cómo se ejecuta esta función, sino que obliga a las clases que hereden de ella a proporcionar su propia implementación.
      * Debido a esto, no es posible crear un objeto directamente de la clase `FarmAnimal`; solo puede usarse como una "plantilla" para clases más específicas.

  * **Clases Derivadas Concretas**:

      * Las clases `cow`, `sheep`, y `horse` heredan de `FarmAnimal`.
      * Cada una de estas clases está **obligada a implementar** el método `getWaterConsumption()` (marcado con `override`), proporcionando una fórmula única y específica para calcular el consumo de agua en función del peso del animal.

  * **Calculadora Interactiva**:

      * La función `main` actúa como una calculadora que acumula el consumo total de agua.
      * Mediante un bucle `while`, el programa solicita al usuario que ingrese la especie y el peso de varios animales. El total se actualiza con cada animal añadido.
      * El bucle finaliza cuando el usuario ingresa el comando `quit`, momento en el cual se muestra el total acumulado.

-----

## Ejemplo de Funcionamiento 🖥️

A continuación se muestra una sesión de ejemplo donde un usuario registra varios animales antes de salir.

```bash
Enter the animal species (cow, sheep, horse, or quit): 
cow
Enter animal weight: 
500
The total water consumption is: 43
Enter the animal species (cow, sheep, horse, or quit): 
sheep
Enter animal weight: 
80
The total water consumption is: 51.8
Enter the animal species (cow, sheep, horse, or quit): 
horse
Enter animal weight: 
450
The total water consumption is: 82.4
Enter the animal species (cow, sheep, horse, or quit): 
quit

The total water consumption is: 82.4
```
