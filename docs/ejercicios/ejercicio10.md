# Ejercicio 10 - Tour del Caballo

## Descripción

El "Tour del Caballo" es un problema clásico de la teoría de grafos y los juegos de tablero. Dado un tablero de ajedrez de tamaño `N x N` y una posición inicial para el caballo, el desafío consiste en determinar si el caballo puede visitar cada casilla del tablero exactamente una vez, moviéndose de acuerdo con las reglas del ajedrez para el movimiento de los caballos. Este ejercicio te pide verificar la existencia de al menos un tour completo posible desde una posición inicial dada.

## Entrada

- La primera línea contiene un entero `N`, el tamaño del tablero de ajedrez.
- La segunda línea contiene dos enteros, `r` y `c`, que representan la fila y la columna de la posición inicial del caballo en el tablero (indexación basada en cero).

## Salida

- Una única palabra: `SI` si existe al menos un tour completo del caballo que comience en la posición inicial dada, `NO` en caso contrario.

## Restricciones

- `3 <= N <= 5`
- `0 <= r < N`
- `0 <= c < N`
- Usar un enfoque de backtracking para resolver el problema.

## Ejemplo

### Entrada

```
5
0 0
```

### Salida

```
SI
```

### Entrada

```
3
0 0
```

### Salida

```
NO
```

### Explicación

En el primer caso, dado un tablero de 5x5 y una posición inicial en la esquina (0,0), existe al menos un camino que permite al caballo visitar todas las casillas una vez. Sin embargo, en un tablero de 3x3, es imposible para el caballo completar un tour debido a las limitaciones de su movimiento y el tamaño del tablero.