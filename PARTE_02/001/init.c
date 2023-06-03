#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void main()
{

    float x, y, z;
    char sexo;
    char nome[40];

    y = 2.5;
    x = 4;
    x += y;
    
    sexo = "M";

    if (sexo == "M")
    {
        printf("\nMasculino\n");
    }
    else
    {
        printf("\nFeminino\n");
    }

    printf("\nO valor de X -> %d", x);

    printf("\nSeu nome\n? ");

    gets(nome);

    printf("%s", nome);


}