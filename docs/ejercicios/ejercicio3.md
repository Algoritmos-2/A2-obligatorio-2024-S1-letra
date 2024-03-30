# Ejercicio 3 - ¿Suman K?

## Descripción

Contamos con dos listas de numeros, una de tamaño `N` y otra de tamaño `M`. Dado un número `K`, queremos saber de cuantas formas podemos sumar un número `n` de la primer lista con un número de `m` la segunda de tal forma que el resultado `n + m = K`

## Entrada

1. La primer línea contiene un número `N`, seguido de N lineas que representan la primer lista de números
1. Una línea con un número `M`, seguido de M lineas que representan la segunda lista de numeros
1. El numero `K` que estamos buscando

```
M
<M números>
N
<N números>
K
```

## Salida

La cantidad de pares de numeros que suman K, seguido por un salto de línea

```
<Resultado>

```

## Restricciones

- Orden temporal debe ser `O(N * log M)` en el peor caso
- Orden espacial debe ser `O(N + M)` en el peor caso

## Ejemplo

### Ejemplo 1

#### Entrada

```
3
5
27
10
5
37
66
15
9
11
42
```

#### Salida

```
2

```

#### Explicación

1. Leemos la primer lista, que tiene 3 elementos `[5,27,10]`
1. Leemos la segunda lista, que tiene 5 elementos `[37,66,15,9,11]`
1. Buscamos las combinaciones que sumen `42`, que son:
   - `37 + 5`
   - `27 + 15`
1. Imprimimos la cantidad de pares que encontramos, `2`
### Ejemplo 2

#### Entrada

```
10
36
60
71
67
76
1
48
60
42
95
10
49
91
68
83
39
100
3
97
14
80
39
```

#### Salida

```
1

```
