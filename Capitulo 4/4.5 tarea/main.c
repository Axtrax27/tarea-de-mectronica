#include <stdio.h>
#include <stdlib.h>

int cubo(int); //tiene un parametro de tipo entero

void main (void)
{
    int I;
    for (I = 1; I <= 10; I++)
    printf ("\nEl cubo de I es: %d", cubo (I)); // se llama la funcion cubo.
}

int cubo (int K) //K es el parametro tipo entero.
{
   return (K*K*K);
}
