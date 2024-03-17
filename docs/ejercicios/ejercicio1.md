# Ejercicio 1 - Seguimiento de pedidos

## Descripción

Estás desarrollando un sistema para un servicio de entrega de comida que permite a los usuarios seguir el estado de sus pedidos en tiempo real. Cada pedido tiene un ID único (un entero) y contiene varios elementos del menú, cada uno con un nombre único (una cadena de texto). El sistema debe permitir:

1. **Agregar un nuevo pedido**, asociando un ID de pedido con los elementos del menú que incluye.
2. **Actualizar el estado de un pedido**, marcando un pedido existente como "Entregado" basado en su ID.
3. **Consultar los elementos de un pedido específico** usando su ID, mostrando todos los elementos que contiene.

Este enfoque asegura que el ID del pedido sea crucial para las operaciones de actualización y consulta, agregando complejidad y relevancia al uso de las tablas hash para almacenar y gestionar los pedidos.

## Entrada

La primera línea contiene un entero `N`, la cantidad de operaciones a realizar. Las siguientes `N` líneas contienen las operaciones, que pueden ser de tres tipos:

- `A <ID del pedido> <elemento1> <elemento2> ... <elementoN>` para agregar un nuevo pedido con múltiples elementos del menú.
- `E <ID del pedido>` para actualizar el estado de un pedido a "Entregado".
- `Q <ID del pedido>` para consultar los elementos de un pedido específico.

## Salida

Para cada operación de consulta `Q`, imprimir en una sola línea los elementos del pedido separados por espacios. Si el pedido ha sido marcado como "Entregado" o no existe, imprimir "Entregado" o "Pedido no encontrado", respectivamente.

## Restricciones

- `1 <= ID del pedido <= 10^8`
- Cada pedido puede contener de `1` a `10` elementos del menú.
- El orden temporal y espacial de las operaciones (entrada y salida) es $O(N)_{cp}$, donde $N$ es el número total de operaciones realizadas (A | E | Q).

## Ejemplo

### Input

```
7
A 1 Hamburguesa Papas Refresco
A 2 Pizza Refresco
E 1
Q 1
Q 2
A 3 Sushi
Q 3
```

### Output

```
Entregado
Pizza Refresco
Sushi
```

### Explicación

- Se agrega el pedido 1 con los elementos Hamburguesa, Papas, y Refresco.
- Se agrega el pedido 2 con Pizza y Refresco.
- El pedido 1 se actualiza a "Entregado".
- Al consultar el pedido 1, se muestra "Entregado" porque el estado fue actualizado.
- La consulta del pedido 2 muestra sus elementos, ya que aún no ha sido marcado como entregado.
- Se agrega un tercer pedido, el 3, con Sushi.
- La consulta del pedido 3 muestra Sushi.