//Limpeza de buffer | Limpar o buffer | O que é o buffer

#include <stdio.h>

int
main()

{
    void limparBuffer();
    char a, b, c;

    a = getchar();
    limparBuffer();
    b = getchar();
    limparBuffer();
    c = getchar();
    limparBuffer();
    
    printf("%c", a);
    printf("%c", b);
    printf("%c", c);

    return 0;
}

void
limparBuffer()

{
    char c;

    while ((c = getchar()) != '\n' && c != EOF);
}