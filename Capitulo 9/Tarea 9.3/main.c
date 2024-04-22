#include <stdio.h>
#include <stdlib.h>

// Escribir caracteres en un archivo
void main(void)
{
    char cad [50];
    int res;
    FILE *ar;
    if ((ar = fopen("arc.txt", "w")) != NULL) //escribir en el archivo si se cumple la condicion
    {
        printf("\n¿Desea ingresar una cadena de caracteres? 1-Si 0-No:  ");
        scanf("%d", &res);
        while (res)
        {
            fflush(stdin);
            printf("Ingrese la cadena: ");
            gets (cad);
            fputs (cad, ar); // Forma de escribir la cadena en el archivo

            printf("\n¿Desea ingresar otra cadena de caracteres? 1-SI 0-NO:  ");
            scanf("%d", &res);
            if (res)
                fputs ("\n", ar); //para separar las lineas de las cadenas
        }
        fclose (ar);
    }
    else
        printf ("No se pudo abrir el archivo. ");
}
