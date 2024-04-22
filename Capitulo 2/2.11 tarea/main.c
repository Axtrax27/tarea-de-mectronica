#include <stdio.h>
#include <stdlib.h>

//calcular ida y vuelta teniendo pendiente: distancia y tiempo.
//precio por km es 0.19
//dia > 10 && distancia > 500km, reducir 20%

void main(void)
{
    int DIS, T;
    float Billete;
    printf("\n Introduce la distancia: ");
    scanf ("\n %d", &DIS);
    printf("\n Introduce el tiempo: ");
    scanf ("%d", &T);

    if ((DIS*2 > 500) && (T > 10))
        Billete = DIS * 2 * 0.19 * 0.8;
    else
        Billete = DIS * 2 * 0.19;
    printf ("\n El costo del billete es: %7.2f \n", Billete);
}
