#include <stdio.h>
#include <string.h>

int main(){

    int edad = 0;
    float gpa = 0.0;
    char simbolo = '\0';
    char nombre[30] = "";

    printf("Escribe tu edad: ");
    scanf("%d", &edad);
    printf("Tu edad es %d\n", edad);
    printf("Indica tu gpa: ");
    scanf("%f", &gpa);
    printf("Tu gpa es %.2f\n", gpa);
    printf("Introduce el símbolo: ");
    scanf(" %c", &simbolo);
    printf("El caracter es %c\n", simbolo);
    printf("Escribe tu nombre: ");
    scanf("%s", nombre);
    printf("Tu nombre es %s\n", nombre);
    printf("Escribe tu nombre completo: ");
    getchar();
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strlen(nombre) - 1] = '\0';
    printf("Tu nombre completo es: %s", nombre);

    return 0;

}