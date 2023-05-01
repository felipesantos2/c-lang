#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  HETEROGÊNEA
//  TIPADA ESTATICAMENTE

int main(void)
{
    int numbers[3];
    char city[5];
    char city2[] = "Novo Cruzeiro";

    // DEFINIÇÃO
    struct person
    {
        int idade, peso;
        int phone_number;
        char nome;
        char cpf;
        char sexo;
        char letra;
    };

    // VARIAVEL DO TIPO STRUCT
    struct person pessoa;

    pessoa.sexo = 'M';
    pessoa.idade = 20;
    pessoa.cpf = 12150269;

    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;

    city[0] = 'n';
    city[1] = 'o';
    city[2] = 'v';
    city[3] = 'o';

    printf("%d\n", numbers[0]);
    printf("%d\n", numbers[1]);
    printf("%d\n", numbers[2]);

    printf("moro em: %s\n", city);
    printf("moro em: %s\n", city2);
}