//Comando #define / Pré Processamento

#include <stdio.h>

#define PI 3.14
#define NULO 0

double areaCirculo (double raio);

int
main()

{
    double r;
    int i = 3;

    while (i != NULO)
    {
        printf("Digite o raio do circulo:");
        scanf("%lf", &r);

        printf("A area do circulo eh %.2lf\n", areaCirculo(r));
        
        --i;
    }
}

double
areaCirculo (double raio)

{
    return raio * raio * PI;
}