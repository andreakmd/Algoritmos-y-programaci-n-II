#include <stdio.h>
#include <stdlib.h>

void determinar_par_o_no_par(int numero) {
    if (numero % 2 == 0) {
        printf("El n�mero ingresado es par.\n");
    } else {
        printf("El n�mero ingresado es impar.\n");
    }
}

int obtenerNumero() {
    int numero;
    printf("Introduzca un n�mero: ");
    scanf("%d", &numero);
    return numero;
}

int main() {
    int numero;

    printf("Inicio\n");

    numero = obtenerNumero();

    determinar_par_o_no_par(numero);

    return 0;
}
