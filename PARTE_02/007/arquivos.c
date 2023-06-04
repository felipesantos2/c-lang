
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
    char caractere = "Felipe Pinheiro";
    // criando a pasta -> c
    createFolder();
    

    // criando e abrindo o arquivo
    file = fopen("C:\\Users\\Felipe\\Downloads\\Database\\0406\\database.txt", "w+");


    // pequenas validações
    if (file == NULL)
        printf("Erro!\n\n");

    if (file != NULL)
        printf("\narquivo criado com sucesso!\n");


    //printf("Digite o texto a ser salvo\n? ");

    fputs(caractere, file);

    erroCode = ferror(file);
    if( erroCode != 0 ) {
        printf("\nocorreu um erro com a escrita no arquivo\n");
    }



    // fechando o arquivo
    int result = fclose(file);

    if (result == 0)
        printf("\nArquivo fechado com sucesso!\n");
}
