#include <stdio.h>
#include <stdlib.h>

//Recibir 24 temperaturas, cada hora recibe una.
//Calcular el promedio de temperatura, la temperatura maxima y la minima junto con la hora de registro.

void Acutem (float); //prototipos de funciones
void Maxima (float, int);
void Minima (float, int);

//Variables globales
float ACT = 0.0; //acumular temperaturas, por eso inicia en 0
float MAX = -50.0; // calcular la temp. maxima. inicia en -50 para que se vea un cambio del primer valor cuando se ingrese.
float MIN = 60.0; // calcular temp. minima
int HMAX; // almacenar horario de altura max
int HMIN; // almacenar horario de altura min

void main(void)
{
    float TEM;
    int I;
    for (I = 1; I <= 24; I++)
    {
        printf ("Ingresa la temperatura de la hora %d: ", I);
        scanf ("%f", &TEM);
        Acutem (TEM);
        Maxima (TEM, I);
        Minima (TEM, I);
    }
    printf ("\nPromedio del dia: %5.2f", (ACT / 24));
    printf ("\nMaxima del dia: %5.2f \tHora: %d", MAX, HMAX);
    printf ("\nMinima del dia: %5.2f \tHora: %d", MIN, HMIN);
}

void Acutem (float T) //acumular las temp. en la variable global ACT
{
    ACT += T;
}

void Maxima (float T, int H) //acumula la temp. maxima y la hora
{
    if (MAX < T)
    {
        MAX = T;
        HMAX = H;
    }
}
void Minima (float T, int H) //acumular temp minima y hora.
{
    if (MIN > T)
    {
        MIN = T;
        HMIN = H;
    }
}
