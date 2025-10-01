// Los decimales se guardan con float
// El tipo double tiene doble precisión

#include <stdio.h>

int main(){

    float gpa = 2.5;
    float precio = 19.99;
    float temperatura = -10.1;
    double pi = 3.14159265358979;
    double e = 2.71828182844590;

    printf("Mi gpa es %f.\n", gpa);
    printf("Con dos decimales %.2f.\n", gpa);
    printf("El precio es de %f dólares.\n", precio);
    printf("La temperatura es %fº grados centígrados.\n", temperatura);
    printf("El valor de pi con 15 decimales es %.15lf.\n", pi);
    printf("Y el número de Euler es %.13lf.\n", e);
    
    return 0;
}