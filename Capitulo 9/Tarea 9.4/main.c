#include <stdio.h>
#include <stdlib.h>

//El programa lee cadenas de caracteres de un archivo
void main(void)
{
    char cad[50];
    FILE *ap;
    if ((ap = fopen("arc.txt", "r")) != NULL) //se abre tipo lectura

    {
        while (!feof (ap)) //Mientras no se detecte el fin de archivo se sigue leyendo
        {
            fgets(cad, 50, ap); //se necesita tres argumentos para leer cadenas con este comando
            puts (cad); //desplegar en la pantalla la cadena
        }
        fclose (ap);
    }
    else
    printf("\nNo se pudo abrir el archivo. \n\n");
}
