#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float valor;
    float valortotal;
    float desconto;
    int dia;

    printf("Qual o valor das compras ?\n");
    scanf("%f", &valor);

    if (valor >= 100)
    {
        printf("Se for dia útil digite (1)\nSe for final de semana digite (2)");
        scanf("%d",&dia);

        switch (dia)
        {
        case 1:
            desconto = valor * 0.1;
            valortotal = valor - desconto;
            printf("Desconto de dia útil: 10 Porcento \n");
            printf("Valor do desconto %.2f\n",desconto);
            printf("Valor da compra total foi:%.2f\n", valor);
            printf("Valor com desconto: %.2f\n", valortotal);
            break;
            case 2:
             desconto = valor * 0.15;
             valortotal = valor - desconto;
            printf("Desconto Final De Semana: 15 Porcento \n");
            printf("Valor do desconto %.2f\n",desconto);
            printf("Valor da compra total foi:%.2f\n", valor);
            printf("Valor com desconto: %.2f\n", valortotal);

            break;
       

        default:
        printf ("Codigo Invalido");
            break;
        }
    }else{
    printf ("Valor da Compra: %.2f",valor);
    }
    return 0;
}
