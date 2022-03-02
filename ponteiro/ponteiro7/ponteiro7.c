#include <stdio.h>

void testeVariavel(int x);
void testePonteiro(int *pX);

int
main()

{
    int teste = 1;
    int *pTeste = &teste;


    //testeVariavel(teste); //DARA O NUMERO 1 AINDA, PASSA UMA COPIA
    testePonteiro(pTeste);  // NAO PASSA UMA COPIA, MAS SIM, O ENDERECO DE MEMORIA DA VARIAVEL

    printf("%d\n", teste);
    printf("%d", sizeof(long int));
}

void
testeVariavel(int x)

{
    ++x;
}

void testePonteiro(int *pX) //RECEBE UM ENDERECO DE MEMORIA

{
    ++*pX;
}