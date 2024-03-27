# Mejora de calles IMM

## Descripción
La IMM (Intendencia Municipal de Montevideo) se propuso mejorar el estado de las calles que unen los distintos barrios de la ciudad con el fin de mejorar la conectividad y reducir los tiempos de viaje. El proyecto consiste en desarrollar una red vial eficiente que conecte todos los barrios, minimizando la cantidad de caminos a mejorar y su distancia. A su vez, si dos caminos tienen la misma distancia se preferirá reparar aquel que tenga mejor estado y, si además, se produjera que el estado también es el mismo se priorizará aquella calle que admita un mayor flujo de tránsito vehicular. 

## Entrada 
La entrada consistirá en:
1. Un número entero `B` que representa el número de barrios en Montevideo
2. Un número entero `L` que representa las siguientes líneas.
3. `L` líneas cada una conteniendo 5 valores separados por un espacio: `barrio1` `barrio2` `distancia` `flujo` `estado`

   - `barrio1` y `barrio2` serán enteros que simbolizan los barrios
   - `distancia`, representa la distancia entre los barrios en km 
   - `flujo`, valor numérico que representa la cantidad de vehículos que admite la calle por hora
   - `estado`, calificación del 1 al 10 donde 1 es mejor estado 

## Salida
Se deben imprimir todos los detalles de las calles a reparar con el siguiente formato
`barrio1` `barrio2` `distancia` `flujo` `estado`

Además se debe imprimir las siguientes líneas

`Distancia total a reparar: X`  
`Estado promedio de las calles reparadas: Y`

Donde `X` e `Y` son los valores correspondientes al cálculo realizado.

## Restricciones
- `1 <= B <= 10e6`
- `B-1 <= L <= (B * (B - 1)) / 2`
- Resolver en `O(L * log B)`
- `1 <= distancia <= 30`
-  `1 <= flujo <= 1000`
- `1 <= estado <= 10`
- La selección de calles debe priorizar la menor distancia, luego el mejor estado y finalmente el mayor flujo vehicular.

## Ejemplo

### Input
6  
6  
1 2 100 3000 8  
1 3 150 2000 7  
2 4 200 2500 9  
3 5 120 1800 8  
4 6 140 1000 6  
5 6 130 1500 7  

### Output
1 2 100 3000 8  
3 5 120 1800 8  
5 6 130 1500 7  
4 6 140 1000 6  
1 3 150 2000 7  
Distancia total a reparar: 640  
Estado promedio de las calles reparadas: 7
