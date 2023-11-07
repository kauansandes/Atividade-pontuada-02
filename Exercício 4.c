#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
int idade;

printf ("Qual sua idade ?\n");
scanf ("%d",&idade);

if (idade >= 18)
{
    printf ("Acesso permitido, sejá bem vindo.");
}else
{
    printf ("Acesso Negado");
}


 





    return 0;
}
