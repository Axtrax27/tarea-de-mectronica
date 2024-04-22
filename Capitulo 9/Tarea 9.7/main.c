#include <stdio.h>
#include <stdlib.h>

//El programa lee información de los alumnos, usa una función para leer, pero el archivo se abre y cierra desde el programa principal.

void promedio (FILE *); //Se pasa un archivo como parametro

void main(void)
{
    FILE *ar;
    if ((ar = fopen("arc9.txt", "r")) != NULL)
    {
        promedio (ar);

        fclose (ar);
    }
    else
        printf("\nNo se puede abrir el archivo.\n\n");
}
void promedio (FILE *ar1) // la forma como se recibe un archivo
{
    int i, j, n, mat;
    float pro, cal;
    fscanf(ar1, "%d", &n);

    for (i = 0; i < n; i++)

    {
        fscanf(ar1, "%d", &mat);
        printf("%d\t", mat);
        pro = 0;

        for(j=0; j < 5; j++)
        {
            fscanf(ar1, "%f", &cal);
            pro += cal;
        }
        printf("\t%.2f", pro / 5);
        printf("\n");

    }
}
