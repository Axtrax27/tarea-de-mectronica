#include <stdio.h>
#include <stdlib.h>

//al recibir caracteres y una posicion, verifica si el caracter de esa posicion es minuscula o mayuscula
void main(void)
{
    char p, cad[50];
    int n;

    printf("\nIngrese la cadena de caracteres (maximo 50): ");
    gets(cad);

    printf("\nIngrese la posición en la cadena que desea verificar: ");
    scanf("%d", &n);

    if ((n >= 0) && (n < 50))
    {
        p = cad[n - 1];

        if (islower(p))
            printf("\n -%c- es una letra minuscula", p);
        else
            printf("\n -%c- no es una letra minuscula", p);
    }
    else
        printf("\nEl valor ingresado de n es incorrecto");
}
