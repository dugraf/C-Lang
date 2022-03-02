//Função malloc() | Alocação Dinâmica

#include <stdio.h>
#include <stdlib.h>

int
main()

{
    int *p = (int *) malloc(sizeof(int)); //memory allocation

    if (p == NULL)
    {
        printf("malloc nao funcionou\n");
    }

    *p = 1000;

    printf("%i", *p);
    free(p);

    return 0;
}