#include <stdio.h>
#include <stdlib.h>
//convertir una mayuscula a una minuscula y viceversa.
//1. Ingresar la letra
//2. leer si es mayuscula o minuscula
//3. .convertir

void main(void)
{
    char a;

    printf ("Ingrese un caracter: ");
    a = getchar ();

    if(a>=65 && a<= 90)
    {
        printf ("%c ----> %c", a, a + 32);
    }
    else if(a > 96 && a < 123)
    {
         printf ("%c ----> %c", a, a - 32);
    }

    else
    {
        printf ("No es valido.");
    }


}
