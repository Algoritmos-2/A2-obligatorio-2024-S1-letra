# Ejercicio 5 - Prófugos

## Descripción

En Montevideo, un astuto fugitivo ha logrado evadir a las autoridades tomando rutas inesperadas de ómnibus por toda la ciudad. La policía, en un esfuerzo por atraparlo, ha iniciado una operación para determinar su ubicación actual y predecir sus próximos movimientos.

El fugitivo, conocido por su habilidad para mezclarse con la multitud y cambiar rápidamente de ruta, ha estado utilizando la red de ómnibus urbanos de Montevideo. Se sabe que prefiere los puntos de transferencia importantes para cambiar de línea rápidamente y mantenerse un paso adelante de la ley.

La red de ómnibus de Montevideo consiste en varias líneas que conectan diferentes partes de la ciudad. Cada línea tiene una serie de paradas, y –como es lógico– algunas de las paradas son compartidas por varias líneas –las llamamos paradas importantes–, mientras que otras solamente son utilizadas por una línea –paradas secundarias–.

Se sabe que el fugitivo se encuentra en una de estas paradas importantes, ya que desde allí puede viajar más rápido a cualquier otra parte de la ciudad. En particular, intenta minimizar el tiempo promedio mínimo desde su parada hasta el resto de las paradas. Puedes asumir que no hay pérdida de tiempo al cambiar de una línea a otra en una parada y que el tiempo de desplazamiento entre cualquier par de paradas consecutivas es el mismo sin importar la línea.

Tu tarea es descubrir en qué parada se encuentra el fugitivo.

## Entrada

La primera línea contiene dos enteros: `P` y `L`. `P` es el número total de paradas existentes, y `L` es el número de líneas de ómnibus. Las paradas están numeradas del `1` al `P`; dónde `1 <= P <= 10^3`; y `1 <= L <= 1000`. A continuación, tenemos `L` líneas, una para cada línea de ómnibus. Estas líneas consisten en una lista de paradas, separadas por espacios en blanco, terminando con un `0`. El `0` no es una parada válida.

Se puede considerar que:
- siempre habrá paradas importantes;
- existe un camino entre cualquier par de paradas; y,
- las líneas tienen a lo sumo el 30% de las paradas totales

## Salida

Se debe imprimir el número de la parada resultante, en el siguiente formato:

`El fugitivo está en: X`


Para cualquier salida `X` será el número de la parada. Si hay más de una parada importante con la distancia mínima, entonces debes indicar la que tenga el número más pequeño.

## Restricciones

Ejecutar en `O(C((A+V)*LogV))`, donde `C` es la cantidad de paradas importantes.

## Entrada de Muestra 1

13 3  
1 2 3 4 5 6 7 0  
8 9 4 10 13 0  
11 2 12 9 6 7 0  


## Salida de Muestra 1
El fugitivo está en: 4
