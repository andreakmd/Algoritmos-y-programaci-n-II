#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char palabra1[100];
    char palabra2[100];

    printf("Ingrese la primera palabra: ");
    scanf("%s", palabra1);

    printf("Ingrese la segunda palabra: ");
    scanf("%s", palabra2);

    if (strcmp(palabra1, palabra2) == 0)
    {
        printf("Las palabras son iguales.\n");
    } else {
        printf("Las palabras son diferentes.\n");
    }

    return 0;
}
