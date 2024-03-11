#include <stdio.h>

int main() {
    float quetzales, dolares, euros;
    int opcion;

    printf("Bienvenido al Conversor de Monedas\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Dólares a Quetzales\n");
    printf("3. Quetzales a Euros\n");
    printf("4. Euros a Quetzales\n");
    printf("5. Dólares a Euros\n");
    printf("6. Euros a Dólares\n");
    printf("Ingrese el número de la opción que desea: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingrese la cantidad de quetzales: ");
            scanf("%f", &quetzales);
            dolares = quetzales / 7.75; // Tipo de cambio aproximado
            printf("%.2f quetzales equivale a %.2f dólares\n", quetzales, dolares);
            break;
        case 2:
            printf("Ingrese la cantidad de dólares: ");
            scanf("%f", &dolares);
            quetzales = dolares * 7.75; // Tipo de cambio aproximado
            printf("%.2f dólares equivale a %.2f quetzales\n", dolares, quetzales);
            break;
        case 3:
            printf("Ingrese la cantidad de quetzales: ");
            scanf("%f", &quetzales);
            euros = quetzales / 9.05; // Tipo de cambio aproximado
            printf("%.2f quetzales equivale a %.2f euros\n", quetzales, euros);
            break;
        case 4:
            printf("Ingrese la cantidad de euros: ");
            scanf("%f", &euros);
            quetzales = euros * 9.05; // Tipo de cambio aproximado
            printf("%.2f euros equivale a %.2f quetzales\n", euros, quetzales);
            break;
        case 5:
            printf("Ingrese la cantidad de dólares: ");
            scanf("%f", &dolares);
            euros = dolares * 0.87; // Tipo de cambio aproximado
            printf("%.2f dólares equivale a %.2f euros\n", dolares, euros);
            break;
        case 6:
            printf("Ingrese la cantidad de euros: ");
            scanf("%f", &euros);
            dolares = euros / 0.87; // Tipo de cambio aproximado
            printf("%.2f euros equivale a %.2f dólares\n", euros, dolares);
            break;
        default:
            printf("Opción no válida\n");
            break;
    }

    return 0;
}