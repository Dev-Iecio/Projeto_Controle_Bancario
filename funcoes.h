#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <string.h>

#ifndef FUNCOES_H
#define FUNCOES_H

typedef struct 
{
int codigo_conta;
char banco[50];
char agencia [10];
char numero_conta[50];
char tipo_conta [10];
float v1_saldo;
float v1_limite;
int status;
}reg_contas;

typedef struct tipoitem *tipoApontador_conta;

typedef struct tipoitem_conta
{
    reg_contas conteudo;
    tipoApontador_conta proximo;

}tipoitem_conta;



typedef struct
{
tipoApontador_conta primeiro;
tipoApontador_conta ultimo;
}tipolista_conta;

typedef struct {
    int sequencial;
    int codigo_conta;
    char dt_movimento[10];
    char tp_movimento[10];
    float v1_movimento;
    float v1_saldo;
}reg_movimentos;

void vaiparaxy(int x,int y);

void tela();

void menu_consulta_cotas(tipolista_conta *l);

void menu_contas_bancarias(tipolista_conta *l);

#endif