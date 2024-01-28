#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LONGITUD_FRASE 100

int main() {
    char frase[MAX_LONGITUD_FRASE];
    char copia[MAX_LONGITUD_FRASE];

    printf("Ingrese una frase: ");
    fgets(frase, sizeof(frase), stdin);

    if (frase[strlen(frase) - 1] == '\n') {
        frase[strlen(frase) - 1] = '\0';
    }

    // por fin la copia segura de la frase
    if (strcpy_s(copia, sizeof(copia), frase) == 0) {
        printf("La copia segura de la frase es: %s\n", copia);
    } else {
        printf("No se pudo elaborar la copia segura de la frase.\n");
    }

    return 0;
}
