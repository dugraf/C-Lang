//Função gets (Aprenda como utilizar e porque não utilizar)

#include <stdio.h>

int
main()

{
    char x[10];
    char y[10];

    gets(x);

    printf("%s", x);

    return 0;
}