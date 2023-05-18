#include <stdio.h>
#include <stdlib.h>

void main() {

    int i = 0;  // 4 bytes 
    
    float valor  = 9.9;

    int *p;

    int *n;

    char nome = "FELIPE";

    char *nome_end; // ponteiro

    nome_end = &nome; // atribuindo o endereço em memória da variavel nome;

    // ponteiros - tipo de variável que armazena endereços de memória. 
    // operadores => & - *

    printf("%p", nome_end );


}