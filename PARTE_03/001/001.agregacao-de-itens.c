
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main()
{

    typedef struct
    {
        int a;
        char b;
        float c;
    } Pessoa;

   Pessoa r = { 10, 'c', 2.0 }; 

   Pessoa *p = &r;


   printf("\n%d -> Endereco decimal\n" , p);
   printf("\n%p -> Endereco hexadecimal\n" , p);
   printf("\np.c =  %.2f\n" , p->c);
    
    return 0;
}