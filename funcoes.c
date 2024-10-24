#include "funcoes.h"

void tela_cadastros()
{

    vaiparaxy(07, 05);
    printf("Codigo da conta...............:");
    vaiparaxy(07, 07);
    printf("(1)-Banco.....................:");
    vaiparaxy(07, 9);
    printf("(2)-Agencia...................:");
    vaiparaxy(07, 11);
    printf("(3)-Numero da Conta...........:");
    vaiparaxy(07, 13);
    printf("(4)-Tipo da Conta.............:");
    vaiparaxy(07, 15);
    printf("(5)-Saldo.....................:");
    vaiparaxy(07, 17);
    printf("(6)-Limite....................:");
    vaiparaxy(07, 19);
    printf("(7)-STATUS....................:");
}

tipoApontador_conta verifica_codigo_conta(tipolista_conta *l, int cod)
{
    tipoApontador_conta aux;
    aux = l->primeiro;
    while (aux != NULL)
    {
        
        if (aux->conteudo.codigo_conta == cod)  
        {
            return aux;  
        }
        aux = aux->proximo;  
    }
    return NULL;  
}

void cadastro_final_lista(tipolista_conta *l)
{
    tipoApontador_conta aux;
    reg_contas conta;

    tela();
    vaiparaxy(03, 03);
    printf("                                       ");
    vaiparaxy(03, 03);
    printf("TELA PARA CADASTRO NO FINAL DA LISTA");
    tela_cadastros();
    

    do
    {
        vaiparaxy(40, 05);
        scanf("%d", &conta.codigo_conta);
        aux = verifica_codigo_conta(l, conta.codigo_conta);

        if (aux != NULL)
        {
            vaiparaxy(07, 10);
            printf("                                                 ");
            vaiparaxy(07, 23);
            printf("Funcionario ja cadastrado");
            getch();
        }
    } while (aux != NULL && conta.codigo_conta != 0);

    /*if(conta.codigo_conta != 0){

    }*/
}

void menu_contas_bancarias(tipolista_conta *l)
{

    int opc;

    do
    {
        tela();
        vaiparaxy(04, 05);
        printf("1-Cadastrar conta no final da lista");
        vaiparaxy(04, 07);
        printf("2-Cadastrar conta no inicio da lista");
        vaiparaxy(04, 9);
        printf("3-Cadastrar conta em uma posicao da lista");
        vaiparaxy(04, 11);
        printf("4-Remover conta no final da lista");
        vaiparaxy(04, 13);
        printf("5-Remover conta no inicio da lista");
        vaiparaxy(04, 15);
        printf("6-Remover conta em uma posicao da lista");
        vaiparaxy(04, 17);
        printf("7-Alteracao do cadastro de conta");
        vaiparaxy(04, 19);
        printf("8-Consultar contas");
        vaiparaxy(04, 21);
        printf("9-Voltar");
        vaiparaxy(07, 23);
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            cadastro_final_lista(l);
            break;

        default:
            break;
        }
    } while (opc != 9);
}