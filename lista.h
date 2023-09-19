//
// Created by Usuario on 18/9/2023.
//

#ifndef INVERTIRLISTASIMPLE_LISTA_H
#define INVERTIRLISTASIMPLE_LISTA_H

typedef struct nodo{

    int dato;
    struct nodo * sig;

}Nodo;

typedef struct pila{

    Nodo * arriba;

}Pila;

Nodo * newNodo ( int dato );
Pila * newPila ();

void apilar (Pila * pila, Nodo * nodo);
void imprimir (Pila * pila);
Nodo * desapilar (Pila * pila);


#endif //INVERTIRLISTASIMPLE_LISTA_H
