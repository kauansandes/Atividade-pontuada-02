#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1;
    int n2;
    char operacao;
    int soma;
    int subtracao;
    printf("Digite o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &n2);
    printf("Digite a opera��o desejada sendo (1) Para Ad��o [+] e (2) Para Subtra��o [-]\n");
    scanf("%s", &operacao);

    switch (operacao)
    {
    case 1:
        soma = n1 + n2;
        printf("Resultado:%d", soma);
        break;

    case 2:
        subtracao = n1 - n2;
        printf("Resultado:%d", subtracao);
        break;

    default:
        printf("opera��o invalida");
        break;
    }

    return 0;
}
