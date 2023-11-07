#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int codproduto;

    printf ("Digite o codigo do produto:\n (01) Camisa\n (02) Calça\n (03) Sapatos\n");
    printf ("Codigo do produto:");
    scanf ("%d",&codproduto);
    switch (codproduto)
    {
    case 1:
        printf ("Camisa || Valor: R$20,00");
        break;
    
    case 2:
        printf ("Calça || Valor: R$80,00");
        break;
    
    case 3:
        printf ("Sapatos || Valor: R$120,00");
        break;
    
    default:
    printf ("Codigo Invalido !");
        break;
    }




    
    return 0;
}
