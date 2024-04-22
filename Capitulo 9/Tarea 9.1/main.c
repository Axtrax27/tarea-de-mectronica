#include <stdio.h>
#include <stdlib.h>

// Con el programa se puede escribir caracteres en un archivo
void main(void)
{
    char p1;
    FILE *ar;
    ar = fopen("arc.txt", "w"); //el primero "nombre_archivo" y el segundo "tipo_archivo". En esta linea se escribe en ese archivo
    if (ar != NULL)
    {
        while ((p1=getchar()) != '\n') // Se escribe en el archivo mientras no se detecte el caracter que indique el fin de la línea
            fputc(p1, ar);
        fclose(ar); //cierre
    }
        else
            printf("No se puede abrir el archivo");
    }
