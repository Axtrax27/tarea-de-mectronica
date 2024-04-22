#include <stdio.h>
#include <stdlib.h>

//calcular el mayor divisor, al recibir un numero entero positivo.
int mad(int);

void main (void)
{
    int NUM, RES;
    printf ("\nIngresa el numero: ");
    scanf ("%d", &NUM);
    RES = mad (NUM);
    printf("\nEl mayor divisor de %d es: %d", NUM, RES);
}
int mad (int N1) //calcular el mayor divisor de N1.
{
    int I = (N1/2); //inicializa I con el mayor el valor que se pueda tener divisor.

    while (N1 % I)
        I--;
    return I;
}
