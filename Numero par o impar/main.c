#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    printf("Inicio\n");
    printf("Introduzca un n�mero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("El n�mero ingresado es par.\n");
    } else {
        printf("El n�mero ingresado es impar.\n");
    }

    return 0;
}
