#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // int ano = 2023;

    // char bissexto;

    // int nascimento = 2003;

    // char nome[] = "Felipe";

    int anoAtual;

    // printf(" -> o Ano de %i nao e bissexto\n ", ano );

    // printf(" -> %s Nasceu em %i ", nome, nascimento );

    printf("Seu ano atual e bissexto\n Digite seu ano Atual: ");

    scanf("%i", &anoAtual);

    printf(" -> %i", anoAtual);

    if (anoAtual > 2000) {
        printf("\n Voce nasceu nos anos 2000");
    }
}