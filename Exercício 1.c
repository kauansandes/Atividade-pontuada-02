#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int gc;

    printf("Quantos graus Celsius est� fazendo in game ?\n");
    scanf("%d", &gc);

    if (gc > 25)
    {
        printf("O clima est� ensolarado");
    }
    if (gc < 15)
        
    {
        printf("O clima est� chuvoso");
    }
    if (gc > 15 && gc < 25)
        
    {
        printf("O clima est� nublado");
    }

    return 0;
}
