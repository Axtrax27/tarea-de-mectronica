#include <stdio.h>
#include <stdlib.h>

// El programa agrega caracteres al archivo
void main(void)
{
    char p1;
    FILE *ar;
    ar = fopen("libro.txt", "a"); //abrir el archivo

    if (ar != NULL)
    {
        while ((p1 = getchar()) != '\n')
            fputc(p1, ar);
        fclose(ar);
    }
    else
        printf("\nNo se puede abrir el archivo...\n\n");
}
