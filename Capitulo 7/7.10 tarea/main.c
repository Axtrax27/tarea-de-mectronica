#include <stdio.h>
#include <stdlib.h>

//recibe caracteres reales, los suma y obtiene el promedio

void main(void)
{
    char c, cad[10];
    int i = 0;
    float sum = 0.0;

    printf("\n ¿Desea ingresar una cadena de caracteres (S/N)? ");
    c = getchar();

    while (c != 'S')
    {
        printf("\nIngrese la cadena de caracteres: \n");
        fflush(stdin);
        gets(cad);
        i++;
        sum += atof(cad);

        printf("\n ¿Desea ingresar otra cadena de caracteres (S/N)? ");
        c = getchar();
    }
    printf("\nSuma: %.2f", sum);
    printf("\nPromedio: %.2f", sum / i);
}
