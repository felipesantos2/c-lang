
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{

    // int *integer = malloc(sizeof(int));
    // float *flutuante = malloc(sizeof(float));

    int *p = (int *) malloc(4);

    if (p == NULL)
    {
        printf("ERROO");
    }
    else
    {
        *p = 10;
        printf("valor-> %d endereco -> %p", *p, p);
    }

    free(p);
    return 0;
}