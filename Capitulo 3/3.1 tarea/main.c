#include <stdio.h>
#include <stdlib.h>

//* Nomina. Se recibe 15 salarios y se obtiene la nomina.
// I:

void main(void)
{
    int I;
    float SAL, NOM;
    NOM = 0;
    for (I=1; I<=15; I++)
    {
        printf ("\INGRESE EL SALRIO DEL PROFESOR %d: \t", I);
        scanf("%f", &SAL);
        NOM = NOM + SAL;
    }
    printf("\nEl total de la nomina es: %.2f", NOM);
}
