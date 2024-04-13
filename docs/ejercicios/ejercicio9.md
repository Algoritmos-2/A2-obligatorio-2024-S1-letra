# Ejercicio 9 - La rayuela de Eratóstenes:
 
## Descripción

Eratóstenes, a los 79 años y aburrido de jugar a la rayuela normal, decidió dibujar una matriz en el piso con dimensiones X * Y.
El problema que tenía Eratóstenes es que no le gustaban los números que no son primos, por lo que, comenzando de la posición (0, 0), solamente saltaría P casillas hacia adelante o hacia la derecha si P es primo.

Después de mucho saltar, se puso a pensar:
Dada una matriz X * Y, donde comienzo desde la casilla (0, 0), y quiero llegar a la (X-1, Y-1), solamente pudiendo hacer saltos en las direcciones X o Y con la restricción de que salto P casillas solo si P es primo, ¿cuántas formas tengo de llegar a la casilla de destino?

Eratóstenes quedó ciego y fallecería un año después, aunque Luciano de Samosata asegura haberlo visto saltando hasta los 82 años. Aún así, nunca pudo resolver el problema, por lo que lo cedió a los alumnos de Estructuras de Datos y Algoritmos 2 de este semestre.
 
## Entrada
Se recibe una sola linea con el largo de la matriz en X, seguido por su largo en Y.
 
## Salida
Deberá retornar solamente el número de posibles formas de llegar a la casilla de destino.

## Restricciones 

- $1 \leq X, Y \leq 10^2$
- Orden temporal: $O(N \log(\log(N)) +  P \cdot X \cdot Y), \text{ siendo } N = \max(X, Y) \text{ y } P \text{ la cantidad de primos menores a } N$ 
- Orden espacial: $O(X \cdot Y)$


## Notas
- Un número primo es aquel que solamente es divisible por 1 y por sí mismo.
- Se recomienda utilizar la [Criba de Eratóstenes](https://es.wikipedia.org/wiki/Criba_de_Erat%C3%B3stenes) para calcular los números primos.

## Ejemplo
 
### Input 1
```
1 1
```
 
### Output 1
```
1
```
 
### Input 2
```
3 8
```

### Output 2
```
20
```

### Input 3
```
1 2
```

### Output 3
```
0
```