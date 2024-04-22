#include <stdio.h>

int main() {
    // Declaramos una matriz 5x5 y la inicializamos con valores.
    int matrix[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    // Declaramos dos variables para almacenar las sumas de las diagonales.
    int sum_main_diagonal = 0;
    int sum_secondary_diagonal = 0;

    // Recorremos la matriz.
    for(int i = 0; i < 5; i++) {
        // Sumamos el valor en la posición [i][i] (diagonal principal) a sum_main_diagonal.
        sum_main_diagonal += matrix[i][i];

        // Sumamos el valor en la posición [i][4 - i] (diagonal secundaria) a sum_secondary_diagonal.
        sum_secondary_diagonal += matrix[i][4 - i];
    }

    // Imprimimos las sumas de las diagonales.
    printf("La suma de la diagonal principal es: %d\n", sum_main_diagonal);
    printf("La suma de la diagonal secundaria es: %d\n", sum_secondary_diagonal);

    // Imprimimos los valores de la matriz.
    printf("\nValores de la matriz:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Devolvemos 0 para indicar que el programa ha terminado correctamente.
    return 0;
}
