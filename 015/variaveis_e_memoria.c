#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 10;
    int b, c;

    printf("\n\n\nOs valores das Variaveis\n");
    printf("Os enderecos em memoria\n\n");
    printf("&a = %p, valor = %i\n", &a, a);
    printf("&b = %p, valor = %i\n", &b, b);
    printf("&c = %p, valor = %i\n", &c, c);
    printf("\n\n\n");

    b = 20;
    c = a + b;

    printf("&a = %p, valor = %i\n", &a, a);
    printf("&b = %p, valor = %i\n", &b, b);
    printf("&c = %p, valor = %i\n", &c, c);

    // 6487580
    // 6487576
    // 6487572
    
    return 0;
}