
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

FILE *file;

int erroCode;

void createFolder()
{
    mkdir("C:\\Users\\Felipe\\Downloads\\Database\\02");
}




void writeFile();

void main()
{
    // criando a pasta -> c
    createFolder();

    // criando e abrindo o arquivo
    file = fopen("C:\\Users\\Felipe\\Downloads\\Database\\02\\index.txt", "w+");

    // pequenas validações
    if (file == NULL)
        printf("Erro!\n\n");

    if (file != NULL)
        printf("\narquivo criado com sucesso!\n");

    // escrevendo no arquivo
    writeFile();

    int result = fclose(file);

    if (result == 0)
        printf("\nArquivo fechado com sucesso!\n");
}


void writeFile()
{
    
    fputc('F', file);
    erroCode = ferror(file);
    if (erroCode != 0)
        printf("\nOcorreu algum problema com nosso arquivo\n");

    fputc('e', file);
    erroCode = ferror(file);
    if (erroCode != 0)
        printf("\nOcorreu algum problema com nosso arquivo\n");

    fputc('l', file);
    erroCode = ferror(file);
    if (erroCode != 0)
        printf("\nOcorreu algum problema com nosso arquivo\n");

    fputc('i', file);
    erroCode = ferror(file);
    if (erroCode != 0)
        printf("\nOcorreu algum problema com nosso arquivo\n");

    fputc('p', file);
    erroCode = ferror(file);
    if (erroCode != 0)
        printf("\nOcorreu algum problema com nosso arquivo\n");

    fputc('e', file);
    erroCode = ferror(file);
    if (erroCode != 0)
        printf("\nOcorreu algum problema com nosso arquivo\n");

    fputc('\t', file);
    erroCode = ferror(file);
    if (erroCode != 0)
        printf("\nOcorreu algum problema com nosso arquivo\n");

    fputc('P', file);
    erroCode = ferror(file);
    if (erroCode != 0)
        printf("\nOcorreu algum problema com nosso arquivo\n");
}