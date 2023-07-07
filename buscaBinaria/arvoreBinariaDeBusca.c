#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int arvoreBinariaDeBusca()
{
    int vec[10] = {1, 2, 3, 4, 9, 12, 24, 25, 30, 32};
    int arg = 25;
    int achou = -1;
    int fim = 0;
    int no = 0;

    while ((achou == -1) && (fim <= 10))
    {
        if(arg == vec[no])
            achou = no;

        if(arg < vec[no])
            no = (2 * no) + 1;

        if(arg > vec[no])
            no = (2 * no) + 2;
        
        fim++;
    }
    
    printf("%d", achou);
}


int main()
{

    arvoreBinariaDeBusca();

    return 0;
}