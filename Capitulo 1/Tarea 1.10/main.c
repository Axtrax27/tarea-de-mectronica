#include <stdio.h>
#include <stdlib.h>

//Calcular el área de un triángulo al recibir los datos de sus tres lados.
//Los valores-variables son reales.
// sqrt obtiene la raiz cuadrada

void main(void)
{
    float L1, L2, L3, AR, AUX;
    printf ("Ingrese los tres lados del triangulo: ");
    scanf ("%f %f %", &L1, &L2, &L3);
    AUX = (L1 + L2 + L3 / 2);
    AR = sqrt (AUX * (AUX - L1) * (AUX - L2) * (AUX - L3));
    printf("\nEl area del triangulo es: %6.2f \n", AR);
}
