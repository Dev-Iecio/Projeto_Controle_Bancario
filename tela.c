#include <windows.h>
#include "funcoes.h"

void tela(){
    int lin;

    system("cls");
    system("color 0a");

    for (lin = 1; lin < 25; lin++)
    {
        vaiparaxy(01, lin);
        printf("|");
        vaiparaxy(79, lin);
        printf("|");
    }
    vaiparaxy(01, 01);
    printf("+----------------------------------------------------------------------------+");
    vaiparaxy(01, 04);
    printf("+----------------------------------------------------------------------------+");
    vaiparaxy(01, 22);
    printf("+----------------------------------------------------------------------------+");
    vaiparaxy(01, 24);
    printf("+----------------------------------------------------------------------------+");

    vaiparaxy(03, 02);
    printf("GABRIEL DALECIO.RA10002691||GABRIEL RIBEIRO");
    vaiparaxy(03, 03);
    printf("SISTEMA DE CONTROLE BANCARIO");
    vaiparaxy(02, 23);
    printf("MSG: ");
}