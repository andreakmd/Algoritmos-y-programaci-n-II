#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double numero;

    printf("Ingrese un n�mero: ");
    scanf("%lf", &numero);

    double cuadrado = numero * numero;
    double cubo = numero * numero * numero;
    double raiz_cuadrada = sqrt(numero);
    double raiz_cubica = cbrt(numero);

    printf("Cuadrado: %.2lf\n", cuadrado);
    printf("Cubo: %.2lf\n", cubo);
    printf("Ra�z cuadrada: %.2lf\n", raiz_cuadrada);
    printf("Ra�z c�bica: %.2lf\n", raiz_cubica);

    return 0;
}
