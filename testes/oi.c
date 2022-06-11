#include <stdio.h>

int
main()

{
	int tamanhoString(char string[]);

	char stringUsuario[20];

	printf("Digite uma string:\n");
	scanf("%s", stringUsuario);

	int a = tamanhoString(stringUsuario);

	printf("A string %s possui %d caracteres e %d letras", stringUsuario, a, a - 1);

	return 0;
}

int
tamanhoString(char string[])

{
	int numCaracteres = 0;

	while (string[numCaracteres] != '\0')
	{
		++numCaracteres;
	}

	++numCaracteres;

	return numCaracteres;
}