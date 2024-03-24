# Ejercicio 2 - Última piedra

## Descripción

Se te da un arreglo de enteros `piedras`, donde `piedras[i]` es el peso de la i-ésima piedra.

Estamos jugando un juego con las piedras. En cada turno, elegimos las dos piedras más pesadas y las chocamos entre sí. Supongamos que las dos piedras más pesadas tienen pesos `x` e `y` con `x <= y`. El resultado de este choque es:

- Si `x == y`, ambas piedras se destruyen, y
- Si `x != y`, la piedra de peso `x` se destruye, y la piedra de peso `y` tiene un nuevo peso `y - x`.

Al final del juego, queda a lo sumo una piedra.

Devuelve el peso de la última piedra restante. Si no quedan piedras, devuelve `0`.

## Entrada

- La primera línea contiene un entero `N`, la cantidad de piedras.
- Las siguientes `N` líneas contienen los enteros `piedras[i]`, uno por línea, representando el peso de cada piedra.

## Salida

- El peso de la última piedra restante. Si no quedan piedras, devuelve `0`.

## Restricciones

- `1 <= piedras.length <= 10^6`
- `1 <= piedras[i] <= 100`
- El algoritmo debe tener una complejidad de tiempo $O(N \log N)$ siendo $N$ la cantidad de piedras inicialmente.

## Ejemplo

### Ejemplo 1

#### Entrada

```
6
2
7
4
1
8
1
```

#### Salida

```
1
```

#### Explicación

Combinamos 7 y 8 para obtener 1, así que el arreglo se convierte en [2,4,1,1,1], luego,<br>
combinamos 2 y 4 para obtener 2, así que el arreglo se convierte en [2,1,1,1], luego,<br>
combinamos 2 y 1 para obtener 1, así que el arreglo se convierte en [1,1,1], luego,<br>
combinamos 1 y 1 para obtener 0, así que el arreglo se convierte en [1], ese es el peso de la última piedra.

### Ejemplo 2

#### Entrada

```
2
5
3
```

#### Salida

```
2
```

