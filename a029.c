#include <stdio.h>

void cumple(char nombre[], int edad){
    printf("Cumpleaños feliz.\n");
    printf("Cumpleaños feliz.\n");
    printf("Cumpleaños feliz %s.\n", nombre);
     printf("Cumpleaños feliz %d.\n", edad);
}

int main(){

    char nombre[] = "Jose Luis";
    int edad = 55;

    cumple(nombre, edad);
    cumple("Antonio", 67);
 
    return 0;
}


