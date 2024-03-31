# Ejercicio 4 - ¿Llegará el pedido?

## Descripcion 

La misma empresa de entrega de comida del ejercicio 1 le pide actualizar el sistema. Despues de los inundamientos que hubo por las fuertes lluvias, hay calles que quedaron inhabilitadas. Entonces quieren actualizar el sistema de forma que el sistema les indique si es posible hacer la entrega del pedido.

Para simplificar el problema, el sistema ya maneja un identificador numérico para cada esquina en el mapa.

## Entrada

1. Un número `K`, tal que $\forall v, 1 >= v >= K$
1. Un número `E` que indica la cantida de aristas que contiene el mapa
   1. Seguido de `E` lineas, que contienen vertices `<v> <w>` representando una arista sin costo
1. Un numero `D`, que indica a cuantos destinos se desea llegar
   1. Seguido de `D` lineas con `<destino>`

El punto de donde salen los pedidos es el identificado con el número 1.

```text
K
E
<E pares v w>
D
<D destinos deseados>
```

## Salida

Se espera `D` lineas que contengan `<destino> si` en casi de que se pueda alcanzar o `<destino> no` en caso contrario.

```text
<D lineas con la salida esperada>
```

## Restricciones

Orden temporal debe ser `O(D * (K + E))`

## Ejemplo 1

### Entrada ejemplo 1

### Salida ejemplo 1

## Ejemplo 2

### Entrada ejemplo 2

### Salida ejemplo 2