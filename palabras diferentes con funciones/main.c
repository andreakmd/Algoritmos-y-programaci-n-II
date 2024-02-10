#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compararPalabras(char palabra1[], char palabra2[]) {
    if (strcmp(palabra1, palabra2) == 0) {
        return 1; // Las palabras son iguales
    } else {
        return 0; // Las palabras son diferentes
    }
}

int main() {
    char palabra1[100];
    char palabra2[100];

    printf("Ingrese la primera palabra: ");
    scanf("%s", palabra1);

    printf("Ingrese la segunda palabra: ");
    scanf("%s", palabra2);

    if (compararPalabras(palabra1, palabra2)) {
        printf("Las palabras son iguales.\n");
    } else {
        printf("Las palabras son diferentes.\n");
    }

    return 0;
}
