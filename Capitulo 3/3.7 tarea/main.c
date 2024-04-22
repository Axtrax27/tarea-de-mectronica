#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int I, N;
    float LAN, SLA = 0;

    do
    {
        printf("\nINGRESE EL NUMERO DE LANZAMIENTOS:\t ");
        scanf("%d", &N);
    }
    while (N < 1 || N > 11);

    for (I = 1; I <= N; I++)
    {
        printf("\nINGRESE EL LANZAMIENTO %d: ", I);
        scanf("%f", &LAN);
        SLA = SLA + LAN;
    }
    SLA = SLA / N;
    printf("\nEL PROMEDIO DE LANZAMIENTO ES: %.2f", SLA);
}
