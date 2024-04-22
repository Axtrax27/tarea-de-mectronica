#include <stdio.h>
#include <stdlib.h>

//Priorizar variable global sobre local

void f1 (void);
int K = 5; //Variable global

void main (void)
{
    int I;
    for (I=1; I <= 3; I++)
        f1 ();

}

void f1 (void) //se usa la variable local y global
{
    int K = 2;
    K += K;
    printf ("\nEl valor de la variable local es --> %d", K);
    ::K = ::K + K;
    //Los dos puntos es para dar prioridad a la variable global
    printf ("\nEl valor de la variable global es --> %d", ::K);
}
