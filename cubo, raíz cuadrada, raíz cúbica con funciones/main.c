#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calcularCuadrado(double numero) {
    return numero * numero;
}

double calcularCubo(double numero) {
    return numero * numero * numero;
}

double calcularRaizCuadrada(double numero) {
    return sqrt(numero);
}

double calcularRaizCubica(double numero) {
    return cbrt(numero);
}

int main() {
    double numero;

    printf("Ingrese un numero: ");
    scanf("%lf", &numero);

    double cuadrado = calcularCuadrado(numero);
    double cubo = calcularCubo(numero);
    double raiz_cuadrada = calcularRaizCuadrada(numero);
    double raiz_cubica = calcularRaizCubica(numero);

    printf("Cuadrado: %.2lf\n", cuadrado);
    printf("Cubo: %.2lf\n", cubo);
    printf("Raíz cuadrada: %.2lf\n", raiz_cuadrada);
    printf("Raíz cúbica: %.2lf\n", raiz_cubica);

    return 0;
}
