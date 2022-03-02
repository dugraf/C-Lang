//Ponteiros / Vetores / Funções

#include <stdio.h>

int somarVetor(int vetor[], const int n);

#define A 22
#define B 12
#define C 43
#define D 12
#define E 67
#define F 13
#define G 22
#define H 64
#define I 34
#define J 12

int
main()

{
    int vetor [10] = {A, B, C, D, E, F, G, H, I, J};

    printf("A soma dos membros do vetor = %d", somarVetor(vetor, 10));
}

int
somarVetor(int vetor[], const int n)

{
    int soma = 0;
    int *ponteiro;
    const int *finalVetor = vetor + n;

    for (ponteiro = vetor; ponteiro < finalVetor; ++ponteiro) // enquanto ponteiro for mentor que o valor do ultimo ponteiro, adiciona-se 1 ao proximo, ou seja, chamara o proximo endereco
    {
        soma += *ponteiro; //adicionar o valor da memoria (vetor[]) a soma, ou seja, ira somar 5 + 5 + 5...
    }

    return soma;
}