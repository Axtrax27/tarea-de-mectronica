#include <stdio.h>
#include <stdlib.h>

// actualiza el archivo si sus ventas son superiores al millón de pesos anuales

typedef struct
{
    int clave;
    int departamento;
    float salario;
    float ventas [12];
} empleado;

void incrementa (FILE *);

void main(void)
{
    FILE *ar;
    if ((ar = fopen("ad5.dat", "r+")) != NULL)
        incrementa (ar);

    else
        printf("\nEl archivo no se puede abrir...\n\n");
    rewind (ar) ; //se usa para posicionar al inicio del archivo cuando se necesite.

    fclose(ar);
}
void incrementa (FILE *ap)

{
    int i, j, t;
    float sum;
    empleado emple;

    t = sizeof(empleado); //sizeof para conocer el tamano de la estructura empleado

    fread(&emple, sizeof(empleado), 1, ap); //leer primer registro del archivo

    while (!feof (ap))
    {
        i = ftell (ap) / t; //ftell para saber la posicion del apuntador

        sum = 0;
        for (j=0; j<12; j++)
            sum += emple.ventas[j];

        if (sum > 1000000)
        {
            emple.salario = emple.salario * 1.10;
            fseek(ap, (i-1) *sizeof (empleado), 0);
            fwrite(&emple, sizeof (empleado), 1, ap);
            fseek(ap, i*sizeof(empleado), 0);
        }
        fread(&emple, sizeof (empleado), 1, ap);
    }
}
