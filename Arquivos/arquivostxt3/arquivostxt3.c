//Copiar Conteúdo de Arquivo txt em Outro

#include <stdio.h>

void copiarConteudo(FILE *arquivo1, FILE *arquivo2);

int
main()

{
    FILE *arquivo1 = fopen("arquivo1.txt", "r");

    if (arquivo1 == NULL)
    {
        printf("Arquivo nao pode ser aberto meeu\n");
        return 0;
    }

    FILE *arquivo2 = fopen("arquivo2.txt", "w");

    copiarConteudo(arquivo1, arquivo2);

    fclose(arquivo1);
    fclose(arquivo2);

    return 0;

}

void
copiarConteudo(FILE *arquivo1, FILE *arquivo2)

{
    char leitor[1000];

    while (fgets (leitor, 1000, arquivo1) != NULL)

    fputs(leitor, arquivo2);
}