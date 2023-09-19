#include <stdio.h>
#include "lista.h"

int main() {
    Pila * nuevaPila = newPila();
    Pila * resultado = newPila();

    apilar(nuevaPila, newNodo(1));
    apilar(nuevaPila, newNodo(2));
    apilar(nuevaPila, newNodo(3));
    apilar(nuevaPila, newNodo(4));

    imprimir(nuevaPila);

    printf("\n");

    while (nuevaPila->arriba!=NULL){
        Nodo * nodoSaliente = desapilar(nuevaPila);
        apilar(resultado,nodoSaliente);
    }
    imprimir(resultado);

    return 0;
}
