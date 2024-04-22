#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void lee(FILE *);

int main(void) // Cambio a int
{
    FILE *ar;
    if ((ar = fopen("ad1.dat", "r")) != NULL)
    {
        lee(ar); // Cambio a lee
        fclose(ar); // Mover fclose dentro del if
    }
    else
    {
        printf("\nEl archivo no se puede abrir");
    }
    return 0; // Retorno de main
}

void lee(FILE *ap) // Leer bloques de un archivo de acceso directo
{
    alumno alu;
    // Cambio en la condición de fread
    while (fread(&alu, sizeof(alumno), 1, ap) == 1)
    {
        printf("\nMatrícula: %d", alu.matricula);
        printf("\tCarrera: %d", alu.carrera);
        printf("\tPromedio: %f\t", alu.promedio);
        puts(alu.nombre);
    }
}
