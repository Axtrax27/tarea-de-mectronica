#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int I, NUM;
    long FAC;
    printf("\nINGRESE EL NUMERO: ");
    scanf("%d", &NUM);
    if (NUM >= 0)
    {
        FAC = 1;
        for (I=1; I <= NUM; I++)
            FAC *= I;
        printf("\nEL FACTORIAL DE %d ES: %ld", NUM, FAC);
    }
    else
        printf("\nERROR en el dato ingresado");
}
