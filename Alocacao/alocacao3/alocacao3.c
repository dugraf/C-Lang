//Função calloc() | Alocação Dinâmica

#include <stdio.h>
#include <stdlib.h>

int
main()

{
    int *p = (int *) calloc(5, sizeof(int)); //malloc(5 * sizeof(int)); com sujeira no buffer.

    for(int i = 0; i < 5; ++i)
    {
        printf("Endereco de p%d = %p | Valor de p%d = %d\n", i, (p + i), i, *(p + i));
                                                                //&p[i]
    }

    return 0;
}