#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// LISTA -> FILA PILHA

#define tamanho 3

void empilha( int elemento)
{
    if(pilha.topo == tamanho) {
        printf("pilha cheia");
    }

}

int main()
{

    typedef struct 
    {
        int dados[tamanho];
        int topo;
        int inicio;
    } pilha;

    empilha(10);
    return 0;
}