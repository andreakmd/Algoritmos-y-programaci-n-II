#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double numero;

    printf("Ingrese un número: ");
    scanf("%lf", &numero);

    double cuadrado = numero * numero;
    double cubo = numero * numero * numero;
    double raiz_cuadrada = sqrt(numero);
    double raiz_cubica = cbrt(numero);

    printf("Cuadrado: %.2lf\n", cuadrado);
    printf("Cubo: %.2lf\n", cubo);
    printf("Raíz cuadrada: %.2lf\n", raiz_cuadrada);
    printf("Raíz cúbica: %.2lf\n", raiz_cubica);

    return 0;
}
