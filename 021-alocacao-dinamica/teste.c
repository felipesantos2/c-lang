#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *numeros;
    int n, i;

    printf("Digite a quantidade de numeros\n\n");
    scanf("%i", n);

    numeros = ( int * ) malloc(n * sizeof(int));

    if( numeros == NULL ) {
        printf("Erro de Alocação de mémoria!\n");
        exit(1);
    }

    for (i = 0; i < n; i++)
    {
        printf("Numero: %d ", i);
        scanf("%d", &numeros[i]);
    }

    freen(numeros);

    return 0;
}