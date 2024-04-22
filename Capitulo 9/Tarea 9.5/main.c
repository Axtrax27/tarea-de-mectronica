#include <stdio.h>
#include <stdlib.h>

//El programa almacena datos de un grupo de alumnos en un archivo.
void main(void)
{
    int i, j, n, mat;
    float cal;
    FILE *ar;
    printf("\n\nIngrese el número de alumnos: ");
    scanf("%d", &n);
    // Se asume que el valor que ingresa el usuario está comprendido entre 1 y 35.

    if ((ar = fopen("arc8.txt", "w")) != NULL)
    {
        fprintf(ar, "%d ", n);

        for (i = 0; i < n; i++)
        {
            printf("\nIngrese la matricula del alumno %d: ", i+1);
            scanf("%d", &mat);

            fprintf(ar, "\n%d ", mat); //se escribe la matrícula en el archivo.

            for (j=0; j<5; j++)
            {
                printf("\nCalificacion %d: ", j+1);
                scanf("%f", &cal);
                fprintf(ar, "%.2f", cal);
            }
        }
        fclose(ar);
    }
    else
        printf("No se puede abrir el archivo");
}
