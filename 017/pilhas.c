#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO 5

// estrutura de uma pilha
struct tpilha {
    int dados[TAMANHO];
    int ini;
    int fim;
};
struct tpilha pilha;
int op;

void pilha_entrar();
void pilha_sair();
void pilha_mostrar();
void menu_mostrar();
    

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int op = 1;

    pilha.ini = 0;
    pilha.fim = 0;


    while( op != 0 ) {

        system("cls");
        
        // mostrando a pilha inicialmente
        pilha_mostrar();

        menu_mostrar();

        // passando mo valor para a variavel op
        scanf("%d", &op);

        if( op == 1 ) {
            pilha_entrar();
        }

        if( op == 0 ) {
            pilha_sair();
        }


    }

    return (0) ;
}



void pilha_mostrar() {
    int i;
    for( i = 0; i < TAMANHO; i++ ) {
        printf("Posicao: %d\n", pilha.dados[i]);
    }
}

void pilha_entrar() {
    if( pilha.fim == TAMANHO ) {
        printf("\nA pilha está cheia");
        system("Pause");
    } else {
        printf("\n Digite um elemento para o array que irá ser empilhado;");
        scanf("%i", &pilha.dados[pilha.fim]);
        pilha.fim++; 
    }
}

void pilha_sair() {
    if( pilha.ini == pilha.fim ) {
        printf("\nnenhum valor pode ser removido, a pilha já está vazia\n");
        system("pause");
    } else {
        pilha.dados[pilha.fim - 1] = 0;  
        pilha.fim--;
    }
}

void menu_mostrar() {
    printf("\n Escolha uma opção:\n");
    printf("\n 1 - para empilhar\n");
    printf("\n 2 - desempilhar\n");
    printf("\n 0 - sair\n\n");
}