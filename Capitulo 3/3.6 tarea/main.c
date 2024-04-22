#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int I = 0;
    float SAL, PRO, NOM = 0;
    printf ("INGRESE EL SALARIO DEL PROFESOR: \t");
    scanf("%f", &SAL);

    do
    {
        NOM = NOM + SAL;
        I = I + 1;
        printf("INGRESE EL SALARIO DEL PROFESOR *introduzca 0 para terminar*:\t ");
        scanf("%f", &SAL);
    }
    while (SAL);
    PRO = NOM / I;
    printf ("\nNOMINA: %.2f \t PROMEDIO DE SALARIOS: %.2f", NOM, PRO);
}
