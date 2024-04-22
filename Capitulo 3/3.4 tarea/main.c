#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int NUM;
    long CUA, SUC = 0;
    printf ("\nINGRESE UN NUMERO ENTERO *0 PARA TERMINAR*:\t ");
    scanf("%d", &NUM);

    while (NUM)
    {
        CUA = pow (NUM, 2);
        printf("%d al cubo es %ld", NUM, CUA);
        SUC = SUC + CUA;
        printf("\nINGRESE EL NUMERO ENTERO *0 PARA TERMINAR*:\t");
        scanf ("%d", &NUM);
    }
    printf("\nLa suma de los cuadrados es %ld", SUC);
}
