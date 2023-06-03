#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // ponteiros

    int valor = 27;

    int *ptr;  //recebe endereço


    ptr = &valor; // passando endereço


    printf("%p\n -> endereco na memoria\n", ptr );
    printf("%d -> valor da variavel", *ptr ); 
}