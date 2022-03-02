#include <stdio.h>

int
main()

{
    FILE *arquivo;
    arquivo = fopen("teste.txt", "w");

    fprintf(arquivo, "Ola gente!\n");
    fclose(arquivo);

    return 0;
}