#include <stdio.h>
#include <stdbool.h>

#define PRECIO_GALON 293.00
#define LITROS_POR_GALON 5
#define CAMBIO_NEUMATICOS 20000
#define ANOS_UTILIZACION 5
#define PORCENTAJE_CARRETERA 0.05
#define PORCENTAJE_CIUDAD 0.02

// Función para calcular el coste de un vehículo por kilómetro
float calcularCostePorKilometro(float coste_total, float distancia_total) {
    return coste_total / distancia_total;
}

int main() {
    // Variables para almacenar los datos del vehículo
    float coste_inicial, precio_reventa, distancia_anual, consumo_combustible, precio_combustible_litro, seguro_anual, costo_neumaticos, mantenimiento_mensual;

    // Variables para controlar la continuación del programa
    char opcion, continuar;
    int tipo_viaje;

    printf("¡Bienvenido!\n");

    do {
        // Preguntar al usuario si desea utilizar los datos guardados
        printf("\n¿Desea utilizar los datos guardados? (S/N): ");
        scanf(" %c", &opcion);

        // Abrir el archivo de datos
        FILE *archivo;
        archivo = fopen("datos_vehiculo.txt", "r");

        if (opcion == 'S' || opcion == 's') {
            // Leer los datos del archivo
            fscanf(archivo, "%f %f %f %f %f %f %f %f", &coste_inicial, &precio_reventa, &distancia_anual, &consumo_combustible, &precio_combustible_litro, &seguro_anual, &costo_neumaticos, &mantenimiento_mensual);
        } else {
            // Solicitar al usuario que ingrese los datos
            printf("Ingrese el coste inicial del vehiculo: ");
            scanf("%f", &coste_inicial);
            printf("Ingrese el precio de reventa estimado del vehiculo: ");
            scanf("%f", &precio_reventa);
            printf("Ingrese la distancia recorrida anualmente (en km): ");
            scanf("%f", &distancia_anual);
            printf("Ingrese el consumo de combustible (en litros cada 100 km): ");
            scanf("%f", &consumo_combustible);
            printf("Ingrese el precio del combustible (por litro): ");
            scanf("%f", &precio_combustible_litro);
            printf("Ingrese el costo del seguro: ");
            scanf("%f", &seguro_anual);
            printf("Ingrese el costo de un par de neumaticos montados: ");
            scanf("%f", &costo_neumaticos);
            printf("Ingrese la frecuencia de cambio de neumaticos (cada cuantos km): ");
            scanf("%f", &mantenimiento_mensual);

            // Guardar los datos en el archivo
            archivo = fopen("datos_vehiculo.txt", "w");
            fprintf(archivo, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f", coste_inicial, precio_reventa, distancia_anual, consumo_combustible, precio_combustible_litro, seguro_anual, costo_neumaticos, mantenimiento_mensual);
        }

        // Calculando la distancia total en 5 años
        float distancia_total = distancia_anual * ANOS_UTILIZACION;

        // Calculando el coste total de propiedad del vehículo
        float coste_combustible = (distancia_total / 100) * consumo_combustible * precio_combustible_litro;
        float coste_neumaticos_total = (distancia_total / CAMBIO_NEUMATICOS) * costo_neumaticos;
        float coste_mantenimiento_total = mantenimiento_mensual * 12 * ANOS_UTILIZACION;
        float coste_seguro_total = seguro_anual * ANOS_UTILIZACION;
        float coste_total = coste_inicial - precio_reventa + coste_combustible + coste_neumaticos_total + coste_mantenimiento_total + coste_seguro_total;

        // Calculando el desvalor del vehículo
        float desvalor_vehiculo = coste_inicial - precio_reventa;

        // Mostrando el resultado
        printf("\n=== Resumen de Costes ===\n");
        printf("Coste inicial del vehículo: $%.2f\n", coste_inicial);
        printf("Precio de reventa estimado: $%.2f\n", precio_reventa);
        printf("Desvalor del vehículo: $%.2f\n", desvalor_vehiculo);
        printf("Distancia recorrida anualmente: %.2f km\n", distancia_anual);
        printf("Consumo de combustible: %.2f L/100km\n", consumo_combustible);
        printf("Precio del combustible por litro: $%.2f\n", precio_combustible_litro);
        printf("Costo del seguro anual: $%.2f\n", seguro_anual);
        printf("Costo de un par de neumáticos montados: $%.2f\n", costo_neumaticos);
        printf("Frecuencia de cambio de neumáticos: cada %.2f km\n", CAMBIO_NEUMATICOS);
        printf("Coste total de propiedad del vehículo en 5 años: $%.2f\n", coste_total);

        // Preguntar al usuario si desea calcular para carretera o ciudad
        printf("\n¿El cálculo se hará para carretera o ciudad? (1: Carretera, 2: Ciudad): ");
        scanf("%d", &tipo_viaje);

        // Ajustando los costos según el tipo de viaje
        if (tipo_viaje == 1) {
            coste_combustible *= (1 + PORCENTAJE_CARRETERA);
            coste_mantenimiento_total *= (1 + PORCENTAJE_CARRETERA);
        } else if (tipo_viaje == 2) {
            coste_combustible *= (1 + PORCENTAJE_CIUDAD);
            coste_mantenimiento_total *= (1 + PORCENTAJE_CIUDAD);
        }

        // Calculando el coste por kilómetro
        float coste_por_kilometro = calcularCostePorKilometro(coste_total, distancia_total);
        printf("Coste por kilómetro del vehículo: $%.2f\n", coste_por_kilometro);

        // Mostrando la tabla de costes por consumo de combustible
        printf("\n=== Tabla de Costes por Consumo de Combustible ===\n");
        printf("Consumo\tCosto KM\tKM x Galon\tCosto Viaje total\n");
        for (int i = 8; i <= 16; i++) {
            float consumo = i;
            float costo_km = (distancia_total / 100) * consumo * precio_combustible_litro;
            float km_por_galon = LITROS_POR_GALON / consumo * 100;
            float costo_viaje_total = costo_km + coste_neumaticos_total + coste_mantenimiento_total + coste_seguro_total;
            printf("%d L/100\t%.2f\t\t%.2f\t\t%.2f\n", i, costo_km, km_por_galon, costo_viaje_total);
        }

        // Preguntar al usuario si desea continuar utilizando el programa
        printf("\n¿Desea continuar utilizando el programa? (c para continuar, cualquier otra tecla para salir): ");
        scanf(" %c", &continuar);
    } while (continuar == 'c' || continuar == 'C');

    printf("\n¡Gracias por utilizar el programa!\n");

    return 0;
}
