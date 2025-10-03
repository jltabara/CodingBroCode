#include <stdio.h>

int main(){

    int eleccion = 0;
    double libras = 0.0;
    double kilos = 0.0;

    printf("Calculadora conversión peso.\n");
    printf("1. Kilos a libras.\n");
    printf("2. Libras a kilos.\n");

    printf("Escribe tu elección: ");
    scanf("%d", &eleccion);

    if (eleccion == 1){
        printf("Introduce el peso en kilos: ");
        scanf("%lf", &kilos);
        libras = kilos * 2.20462;
        printf("%.2lf kilos = %.2lf libras\n", kilos, libras);

    }else if (eleccion == 2) {
        printf("Introduce el peso en libras: ");
        scanf("%lf", &libras);
        kilos = libras / 2.020462;
        printf("%.2lf libras = %.2lf kilos\n", libras, kilos);

    } else{
        printf("Elección incorrecta.\n");
    }

    return 0;
}