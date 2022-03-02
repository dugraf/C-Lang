#include <stdio.h>
#include <cc50.h>

int
main()
{
	int x; // EU PRECISO DE ESPACO PRA ARMAZENAR 1 INTEIRO = 4BITS
	x = 10;

	int *ponteiro; //ACESSANDO O VALOR DA MEMORIA
	ponteiro = &x; //ACESSANDO O ENDECO DA MEMORIA

	printf("%d", *ponteiro);

}