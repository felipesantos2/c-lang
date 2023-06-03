#include <stdio.h>
#include <stdlib.h>

void main() {

    int a;
    int b;
    int c;

    int *ptr = &a;

    a = 10;

    printf("%i\n", &a);
    printf("%i\n", &b);
    printf("%i\n", &c);
    printf("Endereco do ponteiro: %i\n", &ptr);
    // printf("%p\n", ptr);

    // recupera o endereço na memoria de qualquer variavel-> &
}