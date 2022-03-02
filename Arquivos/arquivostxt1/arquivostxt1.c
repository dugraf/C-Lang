#include <stdio.h>

int
main()

{
    FILE *arquivo;
    arquivo = fopen("string.txt", "r");

    if (arquivo == NULL)
    {
        printf("Arquivo nao pode ser aberto meeu\n");
        return 0;
    }

    char frase[100];

    while(fgets(frase, 100, arquivo) != NULL)
    {
        printf("%s", frase);
    }

    fclose(arquivo);
}