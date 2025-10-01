#include <stdio.h>
#include <math.h>

int main(){

    double principal = 0.0;
    double interes = 0.0;
    int anos = 0;
    double total = 0.0;

    printf("Calculadora de interés compuesto.\n");
    printf("Ingresa el capital: ");
    scanf("%lf", &principal);
    printf("Ingresa el interés: ");
    scanf("%lf", &interes);
    printf("Y el número de años: ");
    scanf("%d", &anos);
    total = principal * pow(1 + interes / 100.0, anos);

    printf("Tras %d años tienes %lf\n",anos, total);


    return 0;
}