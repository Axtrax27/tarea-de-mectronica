#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int T, P, N;
    printf ("\n Ingrese los valores de T, P y N: ");
    scanf ("%d %d %d", &T, &P, &N);

    if (P != 0)
    {
        if ( pow(T / P, N) == pow (T,N) / pow (P,N))
            printf ("\n Se comprueba la igualdad.");

        else
            printf ("\n No se comprueba la igualdad.");
    }
    else
        printf ("\n P tiene que ser diferente de cero.");

}
