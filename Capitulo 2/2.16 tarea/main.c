#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int CLA, CAT, ANT, RES;

    printf("\nIngrese la clave del trabajador: ");
    scanf ("%d", &CLA);
    printf("\nIngrese la categoria del trabajador: ");
    scanf ("%d", &CAT);
    printf("\nIngrese la antiguedad del trabajador: ");
    scanf ("%d", &ANT);

    switch (CAT)
    {
    case 3:
    case 4:
        if (ANT >= 5)
            RES = 1;
        else
            RES = 0;
        break;
    case 2:
        if (ANT >= 7)
            RES = 1;
        else
            RES = 0;
                  break;
    default:
        RES = 0;
        break;

    }
    if (RES)
        printf("\n\nEl trabajador con la calve %d REUNE las condiciones para el puesto.", CLA);
    else
        printf("\n\nEl trabajador con la clave %d NO REUNE las condiciones para el puesto.", CLA);
}
