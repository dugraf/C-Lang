//Funções fgetc e getc

#include <stdio.h>

int
main()

{
    char x[100];

    int i = 0;

    while ((x[i] = fgetc(stdin)) != '\n') //OBTERA DADOS DA ENTRADA PADRAO
    {
        ++i;
    }

    x[i] = '\0'; //x[++i] = '\0';

    printf("%s", x);

    return 0;
}