#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//calcular longitud de la cadena sin uso de la funcion STRLEN

int cuenta(char *);
int main(void)

{
    int i;
    char cad[50];

    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);

    i = cuenta(cad);
    printf("\nLongitud de la cadena: %d", i);
}

int cuenta(char *cadena) //CALCULA la longitud de la cadena.
{
    int c = 0;
    while (cadena[c] != '\0')
        c++;
    return (c);
}
