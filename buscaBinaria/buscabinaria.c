#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// int arvoreBinariaDeBusca()
// {
//     int vec[10] = {1, 2, 3, 4, 9, 12, 24, 25, 30, 32};
//     int arg = 25;
//     int achou = -1;
//     int fim = 0;
//     int no = 0;

//     while ((achou == -1) && (fim <= 10))
//     {
//         if(arg == vec[no])
//             achou = no;

//         if(arg < vec[no])
//             no = (2 * no) + 1;

//         if(arg > vec[no])
//             no = (2 * no) + 2;

//         fim++;
//     }

//     printf("%d", achou);
// }

int buscaBinaria(int vec[], int arg, int tam)
{
    int menor, maior, meio;
    menor = 0;
    maior = tam - 1;
    while (menor <= maior)
    {
        meio = (menor + maior) / 2;
        if (arg == vec[meio])
        {
            return (meio);
        }
        if (arg < vec[meio])
        {
            maior = meio - 1;
        }
        else
        {
            menor = meio + 1;
        }
    }
    return (-1);
}

int buscaBinaria2(int arranjo[], int i, int f, int chave)
{
    if (f >= i)
    {
        int meio = i + (f - i) / 2;

        if (arranjo[meio] == chave)
            return meio;
        if (arranjo[meio] > chave)
            return buscaBinaria2(arranjo, i, meio - 1, chave);
        return buscaBinaria2(arranjo, meio + 1, f, chave);
    }
    return -1;
}

int main()
{
    int vec[10] = {1, 2, 3, 4, 9, 12, 15, 25, 30, 32};

    int value = buscaBinaria(vec, 35, 10);


    
    printf("%d\n", value);
    
    // int value2 = buscaBinaria2(vec, 0, 10, 10);



    int search = buscaBinaria2( vec, 0, 10, 15 );

    


    printf("%d", search);




    // buscaBinaria( vec, 0, 10, 15 )




    return 0;
}