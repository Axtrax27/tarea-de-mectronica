#include <stdio.h>
#include <stdlib.h>

// El programa almacena estructuras alumno en un archivo.

typedef struct
{
    int matricula;
    char nombre [20];
    int carrera;
    float promedio;
} alumno;

void escribe (FILE *);

void main(void)
{
    FILE *ar;
    if ((ar = fopen ("ad1.dat", "w")) != NULL)
        escribe(ar);
    else

        printf("\nEl archivo no se pudo abrir. ");
    fclose(ar);
}

void escribe (FILE *ap) //leer datos de la estructura
{
    alumno alu;
    int i = 0, r;
    printf("\nDesea ingresar informacion sobre alumnos? (1 - SI 0 - NO): ");
    scanf("%d", &r);

    while (r)
    {
        i++;
        printf("Matricula del alumno %d: ", i);
        scanf("%d", &alu.matricula);

        printf("Nombre del alumno %d: ", i);
        fflush(stdin);
        gets (alu.nombre);

        printf("Carrera del alumno %d: ", i);
        scanf("%d", &alu.carrera);

        printf("Promedio del alumno %d: ", i);
        scanf("%f",&alu.promedio);

        fwrite(&alu, sizeof(alumno), 1, ap); //funcion con 4 argumentos. el 1ro indica la variable estructura, el 2do el tamano, el 3ro el numero de variables para leer y el 4to el apuntador de FILE.
        printf("\n\n\nDesea ingresar informacion sobre más alumnos? (1- S 0- No): ");
        scanf("%d", &r);
    }
}
