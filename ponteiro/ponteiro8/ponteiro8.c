//Ponteiros e Vetores

#include <stdio.h>

int
main()

{
    int vetor[3] = {1, 2, 3};
    int *ponteiro = vetor; // NAO NECESSITA DO "&"
    int *ponteiro1 = &vetor[2]; // PARA DETERMINAR O NUMERO DO VETOR, NECESSITA-SE COLOCAR "&"
    
    printf("%d\n", *ponteiro);
    printf("%d\n", *ponteiro1);
}