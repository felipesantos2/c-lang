#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    unsigned int *p;

    p = ( unsigned int * ) malloc(1);

    if( p == NULL ) {
        printf("Erro!\n\n");
    } 

    if( p != NULL ) {
        *p == 300;
        printf( "p: %d\n", p );
        free(p);
    }

    return 0;

}