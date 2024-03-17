#include <stdio.h>
#include <iostream>
using namespace std;

// Incluimos la especificación del TAD que se encuentra en otro directorio
#include "tads/avl.h" 
// Si tuvieramos el archivo en el mismo nivel de directorio sería de la siguiente
//#include "avl.h"

// Lo correcto sería no tener este include y asignar la implementación en la compilación
// Pero lo incluimos poder debuggear y compilar de manera más simple
#include "tads/avl.cpp" 

#include "funciones/enteros.cpp"

int main()
{
    int n;
    cin >> n;

    AVL a = crearAVL();

    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        x = hacerPositivo(x);
        agregar(a, x);
    }

    return 0;
}