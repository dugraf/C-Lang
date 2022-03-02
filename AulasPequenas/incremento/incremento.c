#include <stdio.h>

int
main()

{
    int x = 1;
    int y = 0;

    //y = ++x; // VARIAVEL X INCREMENTADA COM 1, VALOR DELA COLOCADA NO VALOR DE Y; y = 1 + 1. x = x + 1; y = x.

    y = x++; // Y TERA O VALOR DE X, E DEPOIS, O VALOR DE X SERA INCREMENTADA COM O VALOR DE 1; y = x; x = x + 1;

    printf("Valor de x = %d\n\n", x);
    printf("Valor de y = %d\n\n", y);
}