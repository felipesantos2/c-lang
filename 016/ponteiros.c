#include <stdio.h>
#include <stdlib.h>

int main()
{
    // * 
    // &

    // int *;

    // float *;
    int a = 10;  

    int *p1 = NULL;

    int *p2;

    p1 = &a;

    printf("%d", *p1);
 
    p2 = p1;

    printf("\n%d", *p2);

    *p2 = 4;

    printf("\n%d", *p2);



    return 0;
}