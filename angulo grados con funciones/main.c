#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Función para convertir grados a radianes
double convertirARadianes(double angulo) {
    return angulo * 3.14159 / 180.0;
}

// Función para calcular el seno, coseno y tangente
void calcularTrigonometricas(double radianes) {
    printf("Seno: %.4lf\n", sin(radianes));
    printf("Coseno: %.4lf\n", cos(radianes));
    printf("Tangente: %.4lf\n", tan(radianes));
}

int main() {
    double angulo;
    double radianes;

    printf("Ingrese un angulo en grados: ");
    scanf("%lf", &angulo);

    radianes = convertirARadianes(angulo);

    calcularTrigonometricas(radianes);

    return 0;
}
