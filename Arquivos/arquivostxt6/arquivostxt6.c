//Funções fgetc e getc

#include <stdio.h>

int
main()

{
    char x[100];

    FILE *arquivo = fopen("teste.txt", "r");

    int i = 0;

    while ((x[i] = fgetc(arquivo)) != EOF) //EOF = end of file
    {
        ++i;
    }

    x[i] = '\0'; //x[++i] = '\0';

    printf("%s", x);

    return 0;
}