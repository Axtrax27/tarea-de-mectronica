#include <stdio.h>
#include <stdlib.h>

// Calcular el perímetro al ingresar los datos de las coordenadas de los vértices del triángulo.

void main(void)
{
    float x1, y1, x2, y2, x3, y3, la1, la2, la3, perim;
    printf("\n Inserte la coordenada de su punto p1: ");
    scanf ("%f %f", &x1, &y1);
    printf("\n Inserte la coordenada de su punto p2: ");
    scanf ("%f %f", &x2, &y2);
    printf("\n Inserte la coordenada de su punto p3: ");
    scanf ("%f %f", &x3, &y3);

    la1 = sqrt (pow (x1 - x2, 2) + pow (y1 - y2, 2));
    la2 = sqrt (pow (x2 - x3, 2) + pow (y2 - y3, 2));
    la3 = sqrt (pow (x3 - x1, 2) + pow (y3 - y1, 2));

    perim = la1 + la2 + la3;

    printf ("\n El perimetro del triangulo es: %6.2f", perim);
}
