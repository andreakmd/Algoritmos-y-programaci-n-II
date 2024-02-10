#include <stdio.h>
#include <stdlib.h>

float calcularPrecioTotal(int cantidad_zapatos) {
    float precio_unitario = 80.0;
    float precio_total;

    if (cantidad_zapatos > 30) {
        precio_total = cantidad_zapatos * precio_unitario * 0.6; // 40% de descuento
    } else if (cantidad_zapatos > 20) {
        precio_total = cantidad_zapatos * precio_unitario * 0.8; // 20% de descuento
    } else if (cantidad_zapatos > 10) {
        precio_total = cantidad_zapatos * precio_unitario * 0.9; // 10% de descuento
    } else {
        precio_total = cantidad_zapatos * precio_unitario; // Sin descuento
    }

    return precio_total;
}

int main()
{
    int cantidad_zapatos;

    printf("Ingrese la cantidad de zapatos que desea comprar: ");
    scanf("%d", &cantidad_zapatos);

    float precio_total = calcularPrecioTotal(cantidad_zapatos);

    printf("El precio total de la compra es: $%.2f\n", precio_total);

    return 0;
}
