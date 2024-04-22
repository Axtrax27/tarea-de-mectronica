#include <iostream>
#include <stdio.h>
#include <string.h>

int main(void)
{
char *cad0 = "Hola Republica Dominicana";
char cad1[20], cad2[20], cad3[20] = "buenos dias!!!";
strcpy(cad1, cad0);
printf("\nPrueba de la funcion strcpy. Se copia la cadena cad0 a cad1: %s\n", cad1);
strcpy(cad1, cad3);
printf("\nPrueba de la funcion strcpy. Se copia la cadena cad3 a cad1: %s\n", cad1);
strcpy(cad1, "como estan?");
printf("\nPrueba de la funcion strcpy. Se copia la cadena como estan? a cad1: %s\n", cad1);
strncpy(cad2, cad0, 4);
cad2[4] = '\0';
printf("\nPrueba de la funcion strncpy. Se copian 4 caracteres de cad0 a cad2: %s\n",cad2);
strncpy(cad2, cad3, 3);
cad2[3] = '\0';
printf("\nPrueba de la funcion strncpy. Se copian 3 caracteres de cad3 a cad2: %s\n",cad2);
strcat(cad0, cad3);
printf("\nPrueba de la funcion strcat. Se incorpora la cadena cad3 a cad0: %s\n", cad0);
strcat(cad1, "YY");
printf("\nPrueba de la funcion strcat. Se incorpora la cadena YY a cad1: %s\n", cad1);
strncat(cad2, cad0, 4);
printf("\nPrueba de la funcion strncat. Se incorporan 4 caracteres de cad0a cad2: %s\n", cad2);
cad0 = strstr(cad0, "México");
printf("\nPrueba de la funcion strstr. Se trata de localizar la cadena México dentro de cad0: %s\n", cad0);
cad0 = strstr(cad0, "Guatemala");
printf("\nPrueba de la funcion strstr. Se trata de localizar la cadena Guatemala dentro de cad0: %s\n", cad0);
}
