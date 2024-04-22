#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char p1;
    FILE *ar;

    if ((ar = fopen ("arc.txt", "r")) != NULL)
    {
        while (!feof(ar)) //leer mientras no llegue al final
        {
            p1 = fgetc (ar); //leer caracter
            putchar (p1); //sacar los caracteres a la pantalla.
        }
        fclose(ar);
    }
    else
        printf ("\nNo se pudo abrir el archivo.\n");
}
