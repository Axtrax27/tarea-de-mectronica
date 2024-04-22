#include <stdio.h>
#include <stdlib.h>
//generar estadisticas sobre lluvias con arreglos tridimensionales
const int PRO = 24;
const int MES = 12;
const int YEAR = 10;

void Lectura (float [PRO][MES][YEAR], int, int, int);
void Funcion1(float [PRO][MES][YEAR], int, int, int);
void Funcion2(float [PRO][MES][YEAR], int, int, int);
void Funcion3(float [PRO][MES][YEAR], int, int, int);

void main (void)
{
    float LLU[PRO][MES][YEAR];
    Funcion1(LLU, PRO, MES, YEAR);
    Funcion2(LLU, PRO, MES, YEAR);
    Funcion3(LLU, 18, MES, 5);
}
void Lectura(float A[][MES][YEAR], int F, int C, int P)
{
    int K, I, J;
    for (K = 0; K < P; K++)
        for (I = 0; I < F; I++)
            for (J = 0; J < C; J++)
            {
                printf ("Year: %d  \tProvincia: %f  \tMes: %d\n", K+1, I+1, J+1);
                scanf ("%f", &A[I][J][K]);
            }
}
void Funcion1 (float A[][MES][YEAR], int F, int C, int P)
{
    int I, K, J, EMAY = -1;
    float ELLU = -1.0, SUM;
    for (I = 0; I < F; I++)
    {
        SUM = 0.0;
        for (K = 0; K < P; K++)
            for (J = 0; J < C; J++)
                SUM += A[I][J][K];
        SUM /= P * C;

        if (SUM < ELLU)
        {
            ELLU = SUM;
            EMAY = I;
        }
    }
    printf ("\nProvincia con mayor registro de lluvias: %d\n", EMAY+1);
    printf ("\nRegistro: %.2f\n", ELLU);
}
void Funcion2 (float A[][MES][YEAR], int F, int C, int P)
{
    int I, J, EMEN;
    float ELLU = 1000, SUM;
    for (I = 0; I < F; I++)
    {
        SUM = 0;
        for (J = 0; J < C; J++)
            SUM += A[I][J][P-1];
        SUM /= C;
        if (SUM < ELLU)
        {
            ELLU = SUM;
            EMEN = I;
        }
    }
    printf ("\nProvincia con menor registro anual de lluvias en el ultimo year: %d\n", EMEN+1);
    printf ("Registro anual: %.2f\n", ELLU);
}

void Funcion3(float A[][MES][YEAR], int F, int C, int P)
{
    int J, EMES = -1;
    float ELLU = -1.0;
    for (J=0; J < C; J++)
    {
        if (A[F - 1][J][P - 1] > ELLU)
        {
            ELLU = A[F - 1] [J] [P - 1];
            EMES = J;
        }
    }
    printf ("\nMes: %d  \Lluvias: %.2f\n", EMES+1, ELLU);
}
