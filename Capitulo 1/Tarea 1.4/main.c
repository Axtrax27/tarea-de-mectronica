#include <stdio.h>
#include <stdlib.h>

/* Ingresar la base y altura para calcular la superficie de un triángulo */

void main(void)
{
    float B, A, S;
    printf("Ingrese la base y altura del triangulo ");
    scanf ("%f %f", &B, &A);
    S = B*A / 2;
    printf ("La superficie de su triangulo es: %5.2f", S);

}
