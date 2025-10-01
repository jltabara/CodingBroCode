#include <stdio.h>
#include <math.h>

int main(){

    double radio = 0.0;
    double area = 0.0;
    const double pi = acos(-1.0);
    double areaEsfera = 0.0;
    double volumen = 0.0;

    printf("Dime el radio: ");
    scanf("%lf", &radio);

    area = pi * pow(radio, 2);
    areaEsfera = 4 * pi * pow(radio, 2);
    volumen = 4 * pi *pow(radio, 3) / 3.0;

    printf("El área es: %lf unidades cuadradas.\n", area);
    printf("El área de la superficie es %lf unidades cuadradas.\n", areaEsfera);
    printf("El volumen es %lf unidades cúbicas.\n", volumen);

    return 0;
}