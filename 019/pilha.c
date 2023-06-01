#include <stdio.h>
#include <stdlib.h>

#define tamanho 3

// declaração do tipo pilha
typedef struct tipo_pilha
{
    int dados[tamanho];
    int ini;
    int topo;
} tipo_pilha;

tipo_pilha pilha;

// funções utilitarias
// void empilhar() {

//     if( pilha.topo != tamanho ) {
//         printf("\nDigite um valor:\n");
//         scanf("%d", &pilha.dados[pilha.topo]);
//         pilha.topo++;
//     }

//     if( pilha.topo == tamanho ) {
//         printf("\nPilha cheia\n\n");
//         exit(0);
//     }

// }

void empilhar() {

    if ( pilha.topo == tamanho ) {
        printf("\nA pilha está cheia, volte outro dia!\n\n");
        system("pause");
    } else {
        printf("\nDigite o valor a ser inserido: ");
        scanf("%d", &pilha.dados[pilha.topo]);
        pilha.topo++;
    }
}

void desempilhar()
{

    if (pilha.ini == pilha.topo)
    {
        printf("\nPilha vazia\n\n");
    }

    if (pilha.ini != pilha.topo)
    {
        pilha.dados[pilha.topo - 1] = 0;
        pilha.topo++;
    }
}

void menus()
{
    printf("\n ESCOLHA");
    printf("\n 1 - empilhar");
    printf("\n 2 - desempilhar\n\n ");
}

void mostrar_vetor_pilha()
{
    printf("\nValores da pilha\n");
    int i;
    printf("[ ");

    for (i = 0; i < tamanho; i++)
    {
        printf("%d ", pilha.dados[i]);
    };

    printf("]\n\n\n");
}

// função principal
int main(void)
{

    int op = 1;
    pilha.ini = 0;
    pilha.topo = 0;

    while (op == 1)
    {
        mostrar_vetor_pilha();
        //   chamando os menus
        menus();
        // pegando o  indice do menu
        scanf("%d", &op);

        if (op == 1)
        {
            empilhar();
        }

        if (op == 2)
        {
            desempilhar();
        }

        if (op == 0)
        {
            exit(0);
        }
    }
}