//Lista Concatenada e Função que retorna Ponteiro

#include <stdio.h>

struct lista
{
    int valor;
    struct lista *proximo;
};

struct lista *procurarValor(struct lista *pLista, int x);

int
main()

{
    struct lista m1, m2, m3;
    struct lista *resultado, *gancho = &m1;
    int valorDoUsuario;

    m1.valor = 5;
    m2.valor = 10;
    m3.valor = 15;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = 0;

    printf("Digite valor da pesquisa: ");
    scanf("%d", &valorDoUsuario);

    resultado = procurarValor(gancho, valorDoUsuario);

    if (resultado == (struct lista*)0)
    {
        printf("Valor nao encontrado!\n");
    }

    else
    {
        printf("Valor %d encontrado!\n", resultado -> valor);
    }
}

struct lista *procurarValor(struct lista *pLista, int x)
{
    while (pLista != 0) // 0 = final da lista, nulo
    {
        if (pLista -> valor == x) // x = valor do usuario
        {
            return(pLista);
        }

        else
        {
            pLista = pLista -> proximo;
        }

    }
        return (struct lista*)0;
}