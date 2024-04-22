#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int NUM;
    printf("INGRESA EL NUMERO PARA CALCULAR LA SERIE: ");
    scanf("%d", &NUM);
    if (NUM > 0)
    {
        printf ("\nSerie de ULAM\n ");
        printf ("%d \t", NUM);

        while (NUM != 1)
        {
            if (pow(-1, NUM) > 0)
                NUM = NUM / 2;
            else
                NUM = NUM * 3 + 1;
            printf ("%d \t", NUM);
        }
    }
    else
        printf ("\n NUM debe ser positivo");
}
