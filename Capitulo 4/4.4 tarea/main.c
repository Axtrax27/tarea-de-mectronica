#include <stdio.h>
#include <stdlib.h>

//Uso de variables locales, globales y estáticas.
int f1 (void);
int f2 (void);
int f3 (void);
int f4 (void);

int K = 3;

void main(void)
{
    int I;
    for(I = 1; I <= 3; I++)
    {
        printf ("\nEl resultado de la funcion f1 es --> %d", f1());
        printf ("\nEl resultado de la funcion f1 es --> %d", f2());
        printf ("\nEl resultado de la funcion f1 es --> %d", f3());
        printf ("\nEl resultado de la funcion f1 es --> %d", f4());
    }
}

int f1 (void) //uso de variable global
{
    K += K;
    return (K);
}

int f2 (void) //uso de variable local
{
    int K = 1; //Variable local
    K++;
    return (K);
}

int f3 (void) //uso variable estatica
{
    static int K = 8;
    K += 2;
    return (K);
}
int f4 (void) // usa variable local y global
{
    int K = 5;
    K = K + ::K;
    return (K);
}

