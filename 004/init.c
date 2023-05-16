#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    printf("Digite seu nome, por favor.\n");

    char c = 'A';

    int idade = 20;

    int *idade_address = &idade;

    printf("\n%d\n", c);

    printf("%c\n", c);

    printf("\n \n");

    printf("%d", &idade);

    printf("\n \n");

    printf("%p", &idade);

    printf("\n \n");

    printf("O valor do da variavel idade é: %u", *idade_address);

    printf("\n%u", *idade_address);
    
}