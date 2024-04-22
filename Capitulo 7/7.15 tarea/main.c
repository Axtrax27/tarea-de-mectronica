#include <stdio.h>
#include <stdlib.h>
//decodifica una cadena hecha por numeros y letras
void interpreta(char *);

void main(void)
{
    char cad[50];

    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);

    interpreta(cad);
}

void interpreta(char *cad)
{
    int i = 0, j, k;

    while (cad[i] != '\0')
    {
        if (isalpha(cad[i]))
        {
            // Se utiliza isalpha para observar si el caracter es una letra
            k = cad[i] - 48;
            // En la variable entera k se almacena el ascii del número convertido en caracter, que nos interesa, menos 48 que corresponde al ascii del digito 0
            for (j = 0; j < k; j++)
                putchar(cad[i]);
        }
        i++;
    }
}
