#include <stdio.h>
#include <stdlib.h>

//Aqui se calcula el cubo de los primeros 10 numeros pero con una variable local
int cubo (void);
int I;

void main(void)
{
    int CUB;
    for (I=1; I<=10; I++)
    {
        CUB = cubo ();
        printf("\n El cubo de %d es --> %d", I, CUB);
    }
}
int cubo (void)
{
    int I=2; //variable local
    return (I*I*I);
    //El resultado es 8 en todos los cubos porque la variable local tiene prioridad sobre la global.
}

