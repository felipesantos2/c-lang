#include <stdio.h>
#include <stdlib.h>

int *p;
int x;

int main(void) {

    x = 10;
    
    p = &x;

    x = 20;

    *p = 30;

    printf( "%p", p );

}