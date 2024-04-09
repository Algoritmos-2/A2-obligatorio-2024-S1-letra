# Ejercicio 8 - Encontrar el número que aparece menos veces          

## Descripción
Se tiene un array de números donde cada número está repetido tres veces de manera consecutiva, excepto uno que aparece solo o de a dos. El objetivo es encontrar ese número.

## Entrada
La primera línea contiene un entero N, que representa la cantidad de números en el array. Las siguientes N líneas contienen los elementos del array.

## Salida
Se debe imprimir una única línea con el número que no se encuentra repetido tres veces.

## Restricciones
- O(log N) temporal, donde N es el tamaño del array.
- La solución debe implementarse utilizando la estrategia de dividir y conquistar.

## Ejemplo

### Input
```
14
4
4
4
11
11
11
2
2
2
1
1
8
8
8
```

### Output
```
1
```