#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int I, MAT, MAMAT, MEMAT;
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0;
    printf("\nIngrese la matricula del primer alumno: ");
    scanf("%d", MAT);

    while (MAT)
    {
        SUM = 0;
        for (I = 1; I <= 5; I++)
        {
            printf("\t INGRESE LA CALIFICACION DEL ALUMNO: ", I);
            scanf ("%f", &CAL);
            SUM += CAL;
        }
        PRO = SUM / 5;
        printf("\nMatricula: %d \t Promedio: %5.2f", MAT, PRO);

        if (PRO > MEPRO)
        {
            MAPRO = PRO;
            MAMAT = MAT;
        }
        if (PRO < MEPRO)
        {
            MEPRO = PRO;
            MEMAT = MAT;
        }
        printf("\nIngrese la matricula del siguiente alumno: ");
        scanf("%d", &MAT);
    }
    printf("\nALumno con mejor promedio: %d \t%5.2f", MAMAT, MAPRO);
    printf("\nALumno con peor promedio: %d \t%5.2f", MEMAT, MEPRO);
}
