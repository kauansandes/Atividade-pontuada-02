#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int inteiros;
    int par = 0;
    int impar = 0;
    float mediapar;
    float mediaimpar;
    int somapar = 0;
    int somaimpar = 0;

    do
    {
        printf("Digite apenas numeros inteiros: ");
        scanf("%d", &inteiros);

        if (inteiros > 0)
        {

            if (inteiros % 2 == 0)
            {
                par++;
                somapar += inteiros;
            }
            else
            {
                impar++;
                somaimpar += inteiros;
            }
        }

    } while (inteiros > 0);

    mediapar = somapar / par;
    mediaimpar = somaimpar / impar;

    printf("Numeros pares: %d\n", par);
    printf("Media dos pares: %.2f\n", mediapar);
    printf("Numeros impares: %d\n", impar);
    printf("Media do impar: %.2f\n", mediaimpar);

    return 0;
}
