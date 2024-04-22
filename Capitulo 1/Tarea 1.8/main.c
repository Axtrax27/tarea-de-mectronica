#include <stdio.h>
#include <stdlib.h>

// calcular área y volumen al ingresar los datos del radio y altura.
// M_PI en programación es el valor de PI y para tener disponible esa funcion hay que tener la biblioteca math.h
// pow significa OPERANDO NUMERO BASE a OPERANDO BASE, se usa para potencias o elevaciones.

void main(void)
{
    float R, AL, V, AR;
    printf ("Ingresar el radio y la altura del cilindro: ");
    scanf ("%f %f", &R, &AL);
    V = M_PI * pow (R, 2) * AL;
    AR = 2 * M_PI * R * AL;
    printf("\nEl volumen es: %6.2f \nEl área es: %6.2f \n", V, AR);
}
