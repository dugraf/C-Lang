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

    struct horario agora, *depois; //PONTEIRO PARA UMA ESTRUTURA DO TIPO HORARIO
    depois = &agora;

    //(*depois).horas = 20; //O PARENTESES SURGE PELA ORDEM DE COMPILACAO. O "." COMPILA PRIMEIRO DO QUE O "*", ENTAO, COLOCA-SE "( )".
    //(*depois).minutos = 20;
    //(*depois).segundos = 20;

    //OU

    depois -> horas = 20;
    depois -> minutos = 20;
    depois -> segundos = 20;

    printf("%d:%d:%d", agora.horas, agora.minutos, agora.segundos);
}
