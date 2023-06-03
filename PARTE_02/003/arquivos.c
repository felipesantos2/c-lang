
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void main()
{
    FILE *file;

    mkdir("C:\\Users\\Felipe\\Downloads\\Database\\c");
    
    file = fopen("C:\\Users\\Felipe\\Downloads\\Database\\c\\index.txt", "w+");

    if (file == NULL)
        printf("Erro!\n\n");

    if (file != NULL)
        printf("\narquivo criado com sucesso!\n");

    int result = fclose(file);

    if (result == 0)
        printf("\nArquivo fechado com sucesso!\n");
}