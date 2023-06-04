
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

FILE *file;

int erroCode;

void createFolder()
{
    mkdir("C:\\Users\\Felipe\\Downloads\\Database\\0406");
}

void writeFile();

void main()
{
    char caractere;
    // criando a pasta -> c
    createFolder();

    // criando e abrindo o arquivo
    file = fopen("C:\\Users\\Felipe\\Downloads\\Database\\0406\\database.sql", "r");

    // pequenas validações
    if (file == NULL)
        printf("Erro!\n\n");

    if (file != NULL)
        printf("\narquivo criado com sucesso!\n");

    // lendo um caractere
    caractere = fgetc(file);

    erroCode = ferror(file);
    if (erroCode != 0)
        printf("\nOcorreu algum erro na leitura\n");
    else
        printf("\nA Leitura ocorreu com sucesso!\n");

    printf("O caractere lido foi: \n%c\n", caractere);

    // fechando o arquivo
    int result = fclose(file);

    if (result == 0)
        printf("\nArquivo fechado com sucesso!\n");
}
