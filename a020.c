#include <stdio.h>

int main(){

    char eleccion = '\0';
    double fah = 0.0;
    double cel = 0.0;

    printf("Conversión de temperaturas.\n");
    printf("Elige.\n");
    printf("C. Celsius a Fahrenheit.\n");
    printf("F. Fahrenheit a Celsius.\n");

    scanf("%c", &eleccion);

    if (eleccion == 'C'){
        printf("Dame los Celsius: ");
        scanf("%lf", &cel);
        fah = (9.0 / 5.0) * cel + 32;
        printf("%.2lf celsius = %.2lf fahrenheit\n", cel, fah);

    }else if (eleccion == 'F'){
         printf("Dame los Fahrentheit: ");
         scanf("%lf", &fah);
         cel = (fah - 32.0) * (5.0 / 9.0);
        printf("%.2lf fahrenheit = %.2lf celsius\n", fah, cel);
    }else{
        printf("Elección incorrecta.\n");
    }

    return 0;
}