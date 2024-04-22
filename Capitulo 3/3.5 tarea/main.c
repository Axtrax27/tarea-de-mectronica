#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    float PAG, SPA = 0;
    printf("\nINGRESE EL PRIMER PAGO:\t ");
    scanf("%f", &PAG);

    do
    {
        SPA = SPA + PAG;
        printf ("INGRESE EL SIGUIENTE PAGO *0 para terminar*:\t ");
        scanf("%f", &PAG);
    }
    while (PAG);
        printf("\nEL TOTAL DE PAGOS DEL MES ES: %.2f", SPA);
}
