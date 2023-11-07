#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int n1;
    int n2;

    printf ("Digite o primeiro numero:\n");
    scanf ("%d",&n1);
    printf ("Digite o segundo numero:\n");
    scanf ("%d",&n2);

    if (n1 > n2)
    {
        printf("O numero primeiro numero é maior que o segundo");
    }else
    {
        printf ("O numero segundo numero é maior que o primeiro");
    }
    
    

        return 0;
}
