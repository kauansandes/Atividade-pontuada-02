#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int codigo;

    do
    {
        printf("Digite o codigo:");
        scanf("%d", &codigo);

    } while (codigo != 3242);

    printf("Acesso Permitido Pode Entrar");

    return 0;
}
