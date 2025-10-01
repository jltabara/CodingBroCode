// Especificadores de formato

#include <stdio.h>

int main(){

    int edad = 55;
    float precio = 13.98;
    double pi = 3.1415926535;
    char moneda = '$';
    char nombre[] = "José Luis Tábara";

    printf("Enteros: %d.\n", edad);
    printf("Flotantes: %f\n", precio);
    printf("Doble precisión: %lf.\n", pi);
    printf("Símbolo: %c\n", moneda);
    printf("Cadena: %s.\n", nombre);


    return 0;
}