#include <stdio.h>
#include <stdlib.h>

#define tamanho 5

// declaração do tipo fila
typedef struct tipo_fila {
    int dados[tamanho];
    int ini;
    int fim;
} tipo_fila;

// variavel global
tipo_fila fila;


void entrar_fila() {

    if(fila.fim == tamanho) {
        printf("A fila esta cheia.");
        exit(0);
    }
    
    if( fila.fim != tamanho ) {
        printf("\n\nDigite um valor para a fila: \n\n");
        scanf("%d", &fila.dados[fila.fim]);
        fila.fim++;
    }

}

void sair_fila() {
    
    if( fila.ini == fila.fim ) 
        printf("A fila esta vazia.");
        exit(0);
    
    if( fila.ini != fila.fim ) {

        int i;
        for( i =  0; i < tamanho; i ++ ) {
            fila.dados[i] = fila.dados[i + 1];
        }

        fila.dados[fila.fim] = 0;
        fila.fim--;
    }
 
}

// função principal
void main() {
    int op  = 1;
    fila.ini =0;
    fila.fim = 0;

}