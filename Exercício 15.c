#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int valor;
    int unidade;
    float conversao;


    printf("Valor de medida:\n");
    scanf("%d", &valor);
    printf("[01] Km / Milha || [02] Celsius para Fahrenheit\n");
    printf("Unidade escolhida:");
    scanf("%d",&unidade);

    switch (unidade)
    {
    case 1:
        conversao = valor / 0.62;
        printf("Quilometros para milhas:%.2f", conversao);
        break;
    case 2:
        conversao = valor * 33.8;
        printf("Celsius para Fahrenheit: %.2f", conversao);
        break;

    default:
        printf("Opção invalida");
        break;
    }

    return 0;
}
