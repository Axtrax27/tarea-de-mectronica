#include <stdio.h>
#include <stdlib.h>

// 1 acre es 4047 m2.
// Recibe el dato de la superficie de la estancia en medida ACRES y la convierte a hectáreas.
// ECA es una variable real.

void main(void)
{
    float eca;
    printf("\n Ingrese la extensión de la estancia: ");
    scanf ("%f", &eca);
    printf("\n La extensión de la estancia en hectárea es: %f \n", eca );
}
