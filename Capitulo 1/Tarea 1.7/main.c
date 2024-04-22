#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    float pie, lb, metro, kil;
    printf ("Ingrese los datos del objeto: ");
    scanf ("%f %f", &pie, &lb);
    metro = pie * 0.09290;
    kil = lb * 0.45359;
    printf("\nDatos del objeto: \t Logintud: %5.2f \t Peso: %5.2f", metro, kil);
}
