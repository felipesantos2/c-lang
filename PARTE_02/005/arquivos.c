
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
    // criando a pasta -> c
    createFolder();

    // criando e abrindo o arquivo
    file = fopen("C:\\Users\\Felipe\\Downloads\\Database\\0406\\database.sql", "w+");

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
    char caractere;
    printf("\nDigite um caractere\n? ");
    scanf("%c", &caractere);

    while (caractere != 'f')
    {

        fputc(caractere, file);
        erroCode = ferror(file);

        if (erroCode != 0)
            printf("\nOcorreu algum problema com nosso arquivo\n");

        if (erroCode == 0)
            printf("\nCaractere gravado com sucesso!");

        printf("\nDigite outro caractere\n? ");

        scanf("%c", &caractere);
    }
}