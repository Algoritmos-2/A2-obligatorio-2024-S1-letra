# Ejercicio 7 - Antivirus

## Descripción

Dada una potencia inicial `potencia`, que representa la potencia original de un sistema de defensa contra virus informáticos, y un arreglo de enteros `virus`, donde `virus[i]` representa la potencia del i-ésimo virus.

Puedes programar al sistema de defensa para enfrentarse a los virus en cualquier orden arbitrario. Si la potencia del sistema de defensa es mayor o igual a la potencia del virus, el virus es destruido y el sistema de defensa incrementa su potencia sumando la potencia del virus. De lo contrario, el sistema de defensa es sobrepasado.

Devuelve `true` si todos los virus pueden ser destruidos. De lo contrario, devuelve `false`.

## Entrada

La entrada debe leerse desde un archivo `.txt` con el siguiente formato:

- La primera línea contiene un entero `potencia`, la potencia inicial del sistema de defensa.
- La segunda línea contiene un entero `N`, el número de virus.
- Las siguientes `N` líneas contienen los enteros `virus[i]`, uno por línea, representando la potencia de cada virus.

## Salida

La salida debe ser `true` o `false`, dependiendo de si es posible destruir todos los virus o no.

## Restricciones

- `1 <= potencia <= 10^5`
- `1 <= N <= 10^5`
- `1 <= virus[i] <= 10^5`
- El algoritmo debe tener una complejidad de tiempo $O(N \log N)$.

## Ejemplo

### Input

```
10
5
3
9
19
5
21
```

### Output

```
true
```
