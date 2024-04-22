#include <stdio.h>
#include <stdlib.h>

//el programa calcula la productoria de los numeros naturales.

int Productoria(int);

void main (void)
{
    int NUM;
    //do-while para verificar que el numero sea correcto.

    do
    {
        printf ("Por favor, ingresar el numero del cual quieres calcular la productoria: ");
        scanf ("%d", &NUM);
    }
    while (NUM > 100 || NUM < 1);
    printf ("\nLa productoria de %d es: %d\n", NUM, Productoria (NUM));
}

int Productoria (int N)
{
    int I, PRO = 1;
    for (I = 1; I <= N; I++)
        PRO *= I;
    return (PRO);
}
