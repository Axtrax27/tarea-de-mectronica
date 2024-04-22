#include <stdio.h>
#include <stdlib.h>
// El programa lee bloques de un archivo de acceso directo
typedef struct
{
    int matricula;
    char nombre [20];
    int carrera;
    float promedio;
} alumno;

void lee (FILE *);

void main(void)
{
    FILE *ar;
    if ((ar = fopen ("ad1.dat", "r")) != NULL)
        lee(ar);
    else
        printf("\nEl archivo no se puede abrir");
    fclose(ar);
}

void lee (FILE *ap) //leer bloques de un archivo de acceso directo
{
    alumno alu;

    fread(&alu, sizeof (alumno), 1, ap); //fread es leer

    while (!feof (ap))
    {
        printf("\nMatrícula: %d", alu.matricula);
        printf("\tCarrera: %d", alu.carrera);
        printf("\tPromedio: %f\t", alu.promedio);
        puts (alu.nombre);

        fread(&alu, sizeof (alumno), 1, ap);
    }
}
