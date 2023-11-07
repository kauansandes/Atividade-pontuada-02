#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portugese");
float nota;

    printf ("Digite a nota do aluno:");
    scanf ("%f",&nota);

    if (nota < 5)
    {
        printf ("Sua nota foi: %.2f foi INSUFICIENTE !",nota);
    }
    if (nota > 7 && nota < 8.9)
    {
        printf ("Sua nota foi: %.2f Bom Resultado",nota);
    }
    if (nota > 5 && nota < 6.9)
    {
        printf ("Sua nota foi: %.2f Rasoavel ! Se esforçe mais !",nota);
    }
    if (nota >= 9)
    {
        printf ("Sua nota foi: %.2f Excelente ! Parabéns",nota);
    }

    
    

    return 0;
}
