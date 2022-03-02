//Ponteiros e Vetores

#include <stdio.h>

int
main()

{
    int vetor[3] = {1, 2, 3};

    int *ponteiro = vetor;

    *(ponteiro + 1) = 10;

    printf("%d\n", vetor[1]);

    printf("%d,", vetor[0]);
    printf("%d,", vetor[1]);
    printf("%d,", vetor[2]);

}