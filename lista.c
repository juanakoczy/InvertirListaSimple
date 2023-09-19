//
// Created by Usuario on 18/9/2023.
//

#include "lista.h"
#include "malloc.h"
#include "stdio.h"

Nodo * newNodo ( int dato ){

    Nodo * aux = NULL;
    aux = malloc(sizeof (Nodo));

    if(aux == NULL){
        printf("No hay espacio de memoria suficiente.");
        exit(-1);
    }
    else{
        aux->dato = dato;
        aux->sig = NULL;
    }
    return aux;
}
Pila * newPila (){

    Pila * aux = NULL;
    aux = malloc(sizeof (Pila));

    if(aux == NULL){
        printf("No hay espacio de memoria suficiente.");
        exit(-1);
    }
    else{

        aux->arriba = NULL;
    }
    return aux;
}

void apilar (Pila * pila, Nodo * nodo){

    if (pila->arriba == NULL){//la pila esta vacia
        pila->arriba = nodo; //inserto el primer nodo
    }
    else{
        nodo->sig = pila->arriba;//arriba persiste en el campo sig del nodo
        pila->arriba = nodo; //el nodo esta arriba en la pila

    }
}
void imprimir (Pila * pila){

    Nodo * aux = pila->arriba;

    if (aux == NULL){
        printf("pila vacia.");
        exit(-1);
    }
    for(; aux!=NULL ; aux = aux->sig){
        printf("\t%d\n",aux->dato);
    }
}

Nodo * desapilar (Pila * pila){

    if (pila->arriba == NULL){
        printf("pila vacia, no se puede desapilar");
        exit(-1);
    }

        Nodo * nodoSaliente = pila->arriba;//sale el primer nodo de la pila
        pila->arriba = pila->arriba->sig;//el sig pasa a ser arriba
        nodoSaliente->sig = NULL;//el campo sig del nodo esta vacio

        return nodoSaliente;
}