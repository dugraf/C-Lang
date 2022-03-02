//Operador sizeof() | Alocação Dinâmica

#include <stdio.h>
#include <stdlib.h>

struct x
{
    int a; //4
    int b;  //4
    int c;  //4
};

int
main()

{
    struct x estrutura;

    int vetor[10]; //4 * 10

    printf("%li\n", sizeof(estrutura));
    printf("%li\n", sizeof(vetor));
    printf("%li\n", sizeof(double));
    printf("%li\n", sizeof(char));
    printf("%li\n", sizeof(long));
    printf("%li\n", sizeof(float));

    return 0;
}