#include <stdio.h>
#include <string.h>

//defino las constantes para la cantidad maxima de contactos y la cantidad de elementos que debe almacenar cada uno
#define MAX_CONTACTOS 100
#define MAX_NOMBRE_LENGTH 50
#define MAX_APELLIDO_LENGTH 50
#define MAX_TELEFONO_LENGTH 20
#define MAX_CORREO_LENGTH 50
#define MAX_DIRECCION_LENGTH 50
#define MAX_NUMERO_DE_TARJETA_LENGTH 50
#define MAX_FECHA_DE_EXPIRACION_LENGTH 50
#define MAX_CODIGO_DE_SEGURIDAD_LENGTH 20

//utilizo el struct para definir un nuevo tipo de dato ´contacto´ el cual contiene el nombre, telefono, correo, etc.
//typedef permite declarar la variable "contacto" y todo lo que esta contiene
typedef struct {
    char nombre[MAX_NOMBRE_LENGTH];
    char apellido[MAX_APELLIDO_LENGTH];
    char telefono[MAX_TELEFONO_LENGTH];
    char correo[MAX_CORREO_LENGTH];
    char direccion [MAX_DIRECCION_LENGTH];
    char numtarjeta [MAX_NUMERO_DE_TARJETA_LENGTH];
    char fechaexp [MAX_FECHA_DE_EXPIRACION_LENGTH];
    char codetarjeta [MAX_CODIGO_DE_SEGURIDAD_LENGTH];

} Contacto;

//declaro la matriz llamada contactos de tipo contacto
Contacto contactos[MAX_CONTACTOS];

//declaro la variable numcontactos  para saber cuantos contactos están almacenados en la variable ´contacto´
int numContactos = 0;

//establezco la funcion agregarcontacto verificando si es menor a la constante definida
void agregarcontacto() {

    //else en caso de alcanzar el numero maximo de contactos muestra que se ha alcanzado el limite
    if (numContactos < MAX_CONTACTOS) {
        printf("ingresa el nombre: ");
        scanf("%s", contactos[numContactos].nombre);

        printf("ingresa el apellido: ");
        scanf("%s", contactos[numContactos].apellido);

        printf("ingresa el numero de telefono: ");
        scanf("%s", contactos[numContactos].telefono);

        printf("ingresa el correo: ");
        scanf("%s", contactos[numContactos].correo);

        printf("ingresa la direccion: ");
        scanf("%s", contactos[numContactos].direccion);

        printf("ingresa el numero de tarjeta: ");
        scanf("%s", contactos[numContactos].numtarjeta);

        printf("ingresa la fecha de expiracion: ");
        scanf("%s", contactos[numContactos].fechaexp);

        printf("ingresa el codigo de seguridad: ");
        scanf("%s", contactos[numContactos].codetarjeta);

        numContactos++;
        printf("el contacto ha sido agregado con exito!\n");
    } else {
        printf("Se ha alcanzado el numero máximo de contactos\n");
    }
}
//la funcion muestra la lista de contactos que hay hasta ahora, corriendo el arreglo ´´contacto´´
void mostrarContactos() {
    printf("Lista de contactos:\n");

    //utilizo el for para incrementar la cantidad de contactos
    for (int i = 0; i < numContactos; i++) {
        printf("nombre: %s\n", contactos[i].nombre);
        printf("apellido: %s\n", contactos[i].apellido);
        printf("telefono: %s\n", contactos[i].telefono);
        printf("correo: %s\n", contactos[i].correo);
        printf("direccion: %s\n", contactos[i].direccion);
        printf("numero de tarjeta: %s\n", contactos[i].numtarjeta);
        printf("fecha de expiracion : %s\n", contactos[i].fechaexp);
        printf("codigo de seguridad: %s\n", contactos[i].codetarjeta);
        printf("\n");
    }
}

int main() {
// declaro la variable eleccion para almacenar la opcion que escogió el usuario
    int eleccion;
// utlilizo el bucle para mostar un menu de opciones y realizar acciones
    do {
        printf("1. agregar contacto\n");
        printf("2. mostrar contactos\n");
        printf("3. salir\n");
        printf("ingresa tu eleccion: ");
        scanf("%d", &eleccion);

//switch llama a la opcion seleccionada llamando a la variable 'eleccion'
        switch (eleccion) {
            case 1:
                agregarcontacto();
                break;
            case 2:
                mostrarContactos();
                break;
            case 3:
                printf("salir del programa\n");
                break;
            default:
                printf("eleccion invalida\n");
                break;
        }
    } while (eleccion != 3);
//se usa el while para que el programa deje de ejecutarse hasta que el usurio desee salir
    return 0;
}
