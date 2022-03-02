#include <stdio.h>

int
main()
{
	int x = 10;
	int *ponteiro;
	ponteiro = &x; //VAI APONTAR PARA O ENDERECO DA MEMORIA X

	int y = 20;
	*ponteiro = y; //AGORA O VALOR DA MEMORIA DE X VAI VALER Y

	printf("%d %d\n", x, y);
}