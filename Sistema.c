#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <string.h>

#include "funcoes.h"

void vaiparaxy(int x, int y)
{
    COORD cord;
    cord.X = (short)x;
    cord.Y = (short)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cord);
}

int main(void)
{
    tela();
    getch();
    
}