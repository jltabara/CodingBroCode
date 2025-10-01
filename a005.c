// En C no hay cadenas. Tenemos arrays

#include <stdio.h>

int main(){

    char nombre[] = "José Luis Tábara";
    char comida[] = "Brócoli";
    char correo[] = "anacreonte@gmail.com";

    printf("Mi nombre es %s\n", nombre);
    printf("Mi comida favorita es %s\n", comida);
    printf("Tu correo es %s\n", correo);
    return 0;
}