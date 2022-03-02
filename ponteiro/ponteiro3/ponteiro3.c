#include <stdio.h>

int
main()

{
    int x = 10;
    double y = 20.50;
    char z = 'a';

    //int *px;  DECLAROU
    //px = &x;  INFORMOU O VALOR

    int *px = &x; //DECLAROU E INFORMOU O VALOR EM UMA LINHA
    double *py = &y;
    char *pz = &z;

    double soma = *px + *py;
    
    int *resultado;
    resultado = 6422004;

    printf("Endereco x = %d ------- Valor x = %d\n\n", px, *px); // *px = 10 && px = &x = 6422036
    printf("Endereco y = %d ------- Valor y = %f\n\n", py, *py); // *py = 20.50 && py = &y = 6422008
    printf("Endereco z = %d ------- Valor z = %c\n\n", pz, *pz); // *pz = a && pz = &z = 6422007
    printf("Soma %.2f\n\n", soma);
    printf("Resultado %d", *resultado);
}