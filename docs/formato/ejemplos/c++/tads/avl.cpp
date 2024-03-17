#include <stdio.h>
#include <iostream>
using namespace std;

#include "avl.h"

struct NodoAVL
{
    // Incompleto
    int dato;
    NodoAVL* izq;
    NodoAVL* der;
};

struct RepresentacionAVL
{
    NodoAVL* raiz;
};

//PRE: -
//POS: Crea un AVL vacío y lo devuelve
AVL crearAVL()
{
    AVL a = new RepresentacionAVL;
    a->raiz = NULL;

    return a;
}

//PRE: -
//POS: Agrega el elemento x al AVL
void agregar(AVL a, int x)
{
    cout << "Invocación a 'agregar(" << x <<")' del archivo avl.cpp que debe ser implementada!" << endl;
}