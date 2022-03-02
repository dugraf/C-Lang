#include <stdio.h>

int
main()

{

    struct horario
    {
        int horas;
        int minutos;
        int segundos;
    };

    struct horario agora, *depois;
    depois = &agora;

        depois -> horas = 20;
        depois -> minutos = 45;
        depois -> segundos = 10;

    int soma = 100;

    struct horario antes;

        antes.horas = soma + depois -> segundos;
        antes.minutos = agora.horas + depois -> minutos;
        antes.segundos = depois -> minutos + soma - depois -> segundos;

    printf("%d:%d:%d", antes.horas, antes.minutos, antes.segundos);
}
