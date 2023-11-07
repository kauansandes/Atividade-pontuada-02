#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int gc;

    printf("Quantos graus Celsius está fazendo in game ?\n");
    scanf("%d", &gc);

    if (gc > 25)
    {
        printf("O clima está ensolarado");
    }
    if (gc < 15)
        
    {
        printf("O clima está chuvoso");
    }
    if (gc > 15 && gc < 25)
        
    {
        printf("O clima está nublado");
    }

    return 0;
}
