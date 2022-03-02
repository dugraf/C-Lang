//Funções fputc e putc

#include <stdio.h>

int
main()

{
    char x[] = "coxinha";

    FILE *arquivo = fopen("notes.txt", "w");    

    int i = 0;

    while (x[i] != '\0')
    {
        fputc(x[i], arquivo);
        ++i;
    }

    return 0;
}