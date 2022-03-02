#include <stdio.h>
#include <stdlib.h>
#include <cc50.h>
#include <unistd.h>
#include <windows.h>

#define DIM_MIN 3
#define DIM_MAX 9

int board[DIM_MAX][DIM_MAX];

int d;

void clear();   //
void greet();   //
void init();
void draw();
bool move(int tile);
bool won();


void
clear()

{
    system("cls");
}

void
greet()

{
    clear();
    printf("Bem-vindo ao JOGO DOS QUINZE!\n");
    usleep(2000000);
}

void
main()
{
    greet();
    clear();
}