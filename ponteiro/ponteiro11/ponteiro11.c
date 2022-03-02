//Copiar uma String utilizando Ponteiros

#include <stdio.h>

void copiarString (char *copiar, char *colar);

int
main()

{
    char string1[] = "Pao com mortadela";
    char string2[20];

    copiarString(string1, string2);

    printf("%s\n", string2);
}

void
copiarString (char *copiar, char *colar)

{
    while(*copiar != '\0')
    {
        *colar = *copiar;
        ++copiar; //PULANDO PARA A PROXIMA MEMORIA
        ++colar; //PULANDO PARA A PROXIMA MEMORIA
    }

    *colar = '\0';
}