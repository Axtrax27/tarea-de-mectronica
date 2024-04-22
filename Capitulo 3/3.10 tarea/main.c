#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;
    printf("\nINGRESE EL NUMERO DE DATOS QUE SE VAN A PROCESAR: ");
    scanf("%d", &N);

    if (N > 0)
    {
        for (I=1; I <= N; I++)
        {
            printf ("\nINGRESE EL NUMERO %d: ", I);
            scanf ("%d", &NUM);
            if (NUM)
                if (pow(-1, NUM) > 0)
                    SPA = SPA + NUM;
                else
                {
                    SIM = SIM + NUM;
                }
        }
        printf("\nLA SUMA DE LOS NUMEROS PARES ES: %d", SPA);
        printf("\nEL PROMEDIO DE NUMEROS IMPARES ES: %5.2f", (float)(SIM / CIM));
    }
    else
        printf("\nEl valor de N es incorrecto");
}
