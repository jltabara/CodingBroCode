#include <stdio.h>
#include <stdbool.h>

int main(){

    double precio = 10.0;
    bool isEstudiante = true;
    bool isMayor = false; // 20% de descuento

    if (isEstudiante){
        if (isMayor){
        printf("Tienes un 30\n");
        precio = precio * 0.7;
        } else{
            printf("Tienes un 10\n");
            precio = precio * 0.9;
        }
    } else {
        if (isMayor){
            printf("Tienes un 20\n");
            precio = precio * 0.8;
        }
    }
    
    printf("Tu precio es: %.2lf\n", precio);

    return 0;
}