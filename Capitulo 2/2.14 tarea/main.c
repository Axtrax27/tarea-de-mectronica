#include <stdio.h>
#include <stdlib.h>

//Costo de llamada por cada 60 segundos
//Considerar zona y duracion de llamada
//ZG: zona geografica, tipo entero && TIE: segundos de llamada, tipo entero.

void main(void)
{
    int ZG, TIE;
    float C; //C: costo
    printf("\nIntroduzca su clave (zona geografica): ");
    scanf ("%d", &ZG);
    printf("\nIntroduzca el tiempo: ");
    scanf ("%d", &TIE);

    switch (ZG)
    {
    case 1:
        C = TIE * 0.13/60;
        break;
    case 2:
        C = TIE * 0.11/60;
        break;
    case 5:
        C = TIE * 0.22/60;
        break;
    case 6:
        C = TIE * 0.19/60;
        break;
    case 7:
    case 9:
        C = TIE * 0.17/60;
        break;
    case 10:
        C = TIE * 0.20/60;
        break;
    case 15:
        C = TIE * 0.39/60;
        break;
    case 20:
        C = TIE * 0.28/60;
        break;

    default:
        C = -1;
        break;
    }
    if (C != -1)
        printf("\nClave: %d \tTiempo: %d \tCosto: %7.2f", ZG, TIE, C);
    else
        printf("\nError en la clave");
}
