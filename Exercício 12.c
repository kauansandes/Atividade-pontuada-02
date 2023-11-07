#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float nota;
    float media;
    float soma;
    int i = 0;

    for (i = 0; i < 3; i++)
    {

        printf("Digite a %d° nota:\n",i+1);
        scanf("%f", &nota);
        soma += nota;
    }
    media = soma / 3;

    printf("Sua Média é:%.2f ", media);

    return 0;
}
