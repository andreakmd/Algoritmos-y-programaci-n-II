#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double numero;
    int redondeo;

    printf("Ingrese un número decimal: ");
    scanf("%lf", &numero);

    redondeo = (int)(numero + 0.5); // Redondeo hacia arriba o hacia abajo

    printf("El valor redondeado es: %d\n", redondeo);

    return 0;
}
