#include <stdio.h>
#include <stdlib.h>

//Este programa calcula el cubo de los 10 primeros numeros naturales.
//Se usa una variable global

int cubo(void);
int I; // variable global
void main(void)
{
    int cub;
    for (I=1; I<=10; I++)
    {
        cub = cubo (); // se llama la función
        printf ("\nEl cubo de %d es --> %d \n", I, cub);
    }
}

int cubo (void) //se declara la funcion para calcular el cubo de la variable global I.
   {
       return (I*I*I);
   }
