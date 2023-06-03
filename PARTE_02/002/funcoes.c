#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void soma()
{
    int a, b, s, total;
    printf("Digite o primeiro numero\n? ");
    scanf("%d", &a);

    printf("Digite o segundo numero\n? ");
    scanf("%d", &b);

    printf("Digite o terceiro numero\n? ");
    scanf("%d", &s);

    printf("\nOS valores digitados foram: [ %d, %d, %d ]\n ", a, b, s);

    // valor total da operação
    total = a + b + s;

    printf("\nO VALOR TOTAL E: %d", total);
}

void media(int numero1, int numero2)
{
    float media;
    media = (numero1 + numero2) / 2;
    printf("A MEDIA E\n? %2.2f", media);
}

int multiplicacao()
{
    int multiplicando, multiplicador, produto;
    printf("Digite o valor do multiplicando\n? ");
    scanf("%d", &multiplicando);
    printf("Digite o valor do multiplicador\n? ");
    scanf("%d", &multiplicador);
    return produto = multiplicando * multiplicador;  
}

double divisao( int dividendo, int divisor );


void main()
{
    // soma();

    // int n1, n2;
    // printf("Digite o primeiro numero\n? ");
    // scanf("%d", &n1);

    // printf("Digite o segundo numero\n? ");
    // scanf("%d", &n2);
    // media(n1, n2);

    // int retorno =  multiplicacao();
    // printf( "A funcao retorna ->  %d", retorno );

    // double resultado_divisao = divisao(12, 2);
    // printf("\n%.2f", resultado_divisao);

    double resultado_divisao = divisao(12, 2);
    printf( "%.2f", resultado_divisao );


}

double divisao( int dividendo, int divisor )
{
    double q;
    q =  dividendo /  divisor;
    return q;
}

