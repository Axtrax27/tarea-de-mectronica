#include <stdio.h>
#include <stdlib.h>

//El programa lee los datos de alumnos almacenados en un archivo y escribe la matrícula y el promedio de cada alumno
void main(void)
{
    int i, j, n, mat;
    float cal, pro;
    FILE *ar;

    if ((ar = fopen("arc9.txt", "r")) != NULL)
    {
        fscanf(ar, "%d", &n); //se lee el valor de n

        for (i = 0; i < n; i++)
        {
            fscanf(ar, "%d", &mat); // Se lee la matrícula de cada alumno.
            printf("%d\t", mat);
                pro = 0;
            for (j=0; j<5; j++)
            {
                fscanf(ar, "%f", &cal); //Se leen las cinco calificaciones del alumno
            pro += cal;
            }

            printf("\t%.2f", pro / 5); //Se escribe el promedio de cada alumno
            printf("\n");
        }
        fclose(ar);
    }
    else
        printf ("\nNo se pudo abrir el archivo. \n\n");
}
