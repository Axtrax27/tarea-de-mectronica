#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    float PAG, SPA;
    SPA = 0;
    printf("INGRESE EL PRIMER PAGO:\t");
    scanf("%f", &PAG);

    while (PAG) //la condicion se cumple mientras el pago es distinta de 0.
    {
        SPA = SPA + PAG;
        printf ("INGRESE EL SIGUIENTE PAGO:\t");
        scanf ("%f", &PAG);
    }
    printf("\nEl total de pagos del mes es: %.2f", SPA);
}
