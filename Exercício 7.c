#include<stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int codjg;

    printf ("[01] - Novo Jogo\n[02] - Carregar jogo\n[03] - Configura��es\n");
    printf("Selecione a op��o:");
    scanf ("%d",&codjg);
    switch (codjg)
    {
    case 1:
        printf ("Carregando novo jogo ...\n");
        break;
    case 2:
        printf ("Carregando dados de jogo salvo...\n");
        break;
    case 3:
        printf ("Abrindo Configura��es...\n");
        break;
    
    default:
    printf ("OP��O INVALIDA !!!");
        break;
    }
    return 0;
}
