#include <stdio.h>
#include <string.h>

int main(){

    char nombre[50] = "";
    printf("Dime tu nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strlen(nombre) - 1] = '\0';

    if (strlen(nombre) == 0){
        printf("No has escrito nada.\n");
    }
    else{
        printf("Hola %s\n", nombre);
    }

    return 0;
}