#include <stdio.h>

#define MAIOR(x, y) x > y ? x : y   //X EH MAIOR QUE Y? CASO SIM, RETORNE X, CASO NAO, RETORNE Y
#define E_MINUSCULO(char) char >= 97 && char <= 122     //CASO SIM, RETORNARA O VALOR VERDADEIRO
#define E_MAIUSCULO(char) char >= 65 && char <= 90

int
main()

{
    char x;

    printf("Aperte uma tecla...\n");
        scanf("%c", &x);

    if(E_MINUSCULO(x))
    {
        printf("Eh uma letra minuscula\n");
    }

    else if(E_MAIUSCULO(x))
    {
        printf("Eh uma letra maiusculo\n");
    }

    else
    {
        printf("Nao eh uma letra\n");
    }

    printf("%d", MAIOR(10, 50));
}