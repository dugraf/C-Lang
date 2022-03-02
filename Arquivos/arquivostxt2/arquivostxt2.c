//Manipulação de Arquivos txt em C / Incluir Dados

#include <stdio.h>

int
main()

{
    FILE *arquivo;
    arquivo = fopen("string.txt", "a"); //append

    if (arquivo == NULL)
    {
        printf("Arquivo nao pode ser aberto meeu\n");
        return 0;
    }

    fprintf(arquivo, "UEEEEE\n");

    char frase[] = "Qual vai ser?\n";
    fputs(frase, arquivo);

    char caractere = '3';
    fputc(caractere, arquivo);
    
    fprintf(arquivo, "\n");

    fclose(arquivo);
}