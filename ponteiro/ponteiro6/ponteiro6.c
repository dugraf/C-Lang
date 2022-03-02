#include <stdio.h>

//MEMBROS DA ESTRUTURA, CONTENDO PONTEIROS
int
main()

{
    struct horario
    {
        int *pHoras;
        int *pMinutos;
        int *pSegundos;
    };

    struct horario hoje;

    int horas = 200;
    int minutos = 300;
    int segundos = 400;

    hoje.pHoras = &horas;
    hoje.pMinutos = &minutos;
    hoje.pSegundos = &segundos;

    printf("Horas: %d\n", *hoje.pHoras);
    printf("Minutos: %d\n", *hoje.pMinutos);
    printf("Segundos: %d\n", *hoje.pSegundos);

    *hoje.pSegundos = 1000;
    
    printf("Segundos: %d\n", *hoje.pSegundos);

}