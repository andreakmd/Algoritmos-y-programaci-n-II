#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double angulo;
    double radianes;

    printf("Ingrese un angulo en grados: ");
    scanf("%lf", &angulo);

    // Convertir el ángulo de grados a radianes
    radianes = angulo * 3,14 / 180.0;

    // Calcular y mostrar los valores del seno, coseno y tangente
    printf("Seno: %.4lf\n", sin(radianes));
    printf("Coseno: %.4lf\n", cos(radianes));
    printf("Tangente: %.4lf\n", tan(radianes));

    return 0;
}
