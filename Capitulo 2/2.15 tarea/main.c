#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int TRA, EDA, DIA;
    float COS;
    printf ("\nIndique el tratamiento a realizar: ");
    scanf ("%d", &TRA);
    printf ("\nIndique su edad: ");
    scanf("%d", &EDA);
    printf ("\nIndique los dias de duracion: ");
    scanf("%d", &DIA);

    switch (TRA)
    {
    case 1:
        COS = DIA * 2000;
        break;
    case 2:
        COS = DIA * 1950;
        break;
    case 3:
        COS = DIA * 2500;
        break;
    case 4:
        COS = DIA * 1150;
        break;
    default:
        COS = -1;
        break;
    }
    if (COS != -1)
    {
        if (EDA >= 60)
            COS = COS * 0.75;
        else
            if (EDA <= 25)
            COS = COS * 0.85;
            printf ("\nSu clave de tratamiento es: %d \nSu duracion es: %d \nEl costo total es: %8.2f \n", TRA, DIA, COS);
    }
else
    printf("\nLa clave es incorrecta.\n");
}
