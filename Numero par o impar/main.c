#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    printf("Inicio\n");
    printf("Introduzca un número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("El número ingresado es par.\n");
    } else {
        printf("El número ingresado es impar.\n");
    }

    return 0;
}
