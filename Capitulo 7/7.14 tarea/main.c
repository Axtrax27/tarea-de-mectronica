#include <stdio.h>
#include <stdlib.h>

//calacula la longitud sin usar strlen
int cuenta(char *);

void main(void)
{
    int i;
    char cad[50];

    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);

    i = cuenta(cad);
    printf("\nLongitud de la cadena: %d", i);
}

int cuenta(char *cadena)
{
    if (cadena[0] == '\0') //hasta que no se llegue al ultimo caracter, se incrementa en uno.
        return 0;
    else
        return (1 + cuenta(&cadena[1]));
}
