# Ejercicio 4 - ¿Llegará el pedido?

## Descripcion 

La misma empresa de entrega de comida del ejercicio 1 le pide actualizar el sistema. Despues de los inundamientos que hubo por las fuertes lluvias, hay calles que quedaron inhabilitadas. Entonces quieren actualizar el sistema de forma que el sistema les indique si es posible hacer la entrega del pedido.

Para simplificar el problema, el sistema ya maneja un identificador numérico para cada esquina en el mapa.

## Entrada

1. Un número `V`, tal que $\forall v, 1 >= v >= V$
1. Un número `E` que indica la cantida de aristas que contiene el mapa
   1. Seguido de `E` lineas, que contienen vertices `<v> <w>` representando una arista sin costo
1. Un numero `D`, que indica a cuantos destinos se desea llegar
   1. Seguido de `D` lineas con `<destino>`

El punto de donde salen los pedidos es el identificado con el número 1.

```text
V
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

Orden temporal debe ser `O(D * (V + E))`

## Ejemplo

### Entrada ejemplo

```text
5
6
1 2
2 3
2 5
3 1
3 5
4 3
3
2
5
4
```

### Salida ejemplo

```text
2 si
5 si
4 no
```

### Explicacion
Existe un camino desde el local (vertice `1`) hasta el vertice `2` y `5`, pero no hay ningun camino que llegue al `4`
