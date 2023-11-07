#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int idioma;

    printf("Language:\n (1) - Inglês\n (2) - Espanhol\n (3) - Francês\n");
    printf("Select:");
    scanf ("%d",&idioma);

    switch (idioma)
    {
    case 1:
        printf("Welcome !");

        break;
    case 2:
        printf("Bienvenido !");

        break;
    case 3:
        printf("Accueillir !");
        break;

    default:
        break;
    }

    return 0;
}
