#include <stdio.h>
#include <stdlib.h>

/*Calcular el ingreso total semestral y promedio mensual cuando el empleado ingrese su clave y los seis primeros sueldos del año.
Imprimir: clave, ingreso total y promedio.
Significados de palabras - Cla: clave - Su: sueldo - Ing: ingresos - Pro: promedio. */


void main(void)
{
    int Cla;
    float Su1, Su2, Su3, Su4, Su5, Su6, Ing, Pro;

    printf("Ingrese la clave del empleado y sus 6 sueldos: \n");
    scanf ("%d %f %f %f %f %f %f", &Cla, &Su1, &Su2, &Su3, &Su4, &Su5, &Su6);
    Ing = (Su1 + Su2 + Su3 + Su4 + Su5 + Su6);
    Pro = Ing / 6;
    printf ("\n%d \t%5.2f \t%5.2f", Cla, Ing, Pro);
}
