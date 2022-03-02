//Funções freopen e fgets / stdin

#include <stdio.h>

int
main()

{
    char x[100];

    fgets(x, 100, stdin); //LE O VALOR DE 99 CARACTERES

    printf("%s", x); 

    freopen("teste.txt", "r", stdin);
    fgets(x, 100, stdin);
    printf("%s", x);

    return 0;
}