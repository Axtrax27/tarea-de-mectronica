#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int Y;
    float X;
    printf("\nInsertar valor de Y: ");
    scanf ("%d", &Y);

    if (Y < 0 || Y > 50)
        X = 0;

    else
        if (Y <= 10)
            X = 4 / Y - Y;
        else
            if (Y <= 25)
            X = pow (Y,3) - 12;
            else
                X = pow (Y,2) + pow(Y,3)-18;

   printf("\nEl valor de Y = %d \nEl valor de X = %8.2f", Y, X);
}
