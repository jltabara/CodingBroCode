// Operaciones

#include <stdio.h>

int main(){

    int x = 10;
    int y = 3;
    int z = 0;

    z = x + y;
    printf("La suma es %d.\n", z);
    z = x - y;
    printf("La resta es %d.\n", z);
    z = x * y;
    printf("La multiplicación es %d.\n", z);
    z = x / y;
    printf("La división (entera) es %d.\n", z);
    z = x % y;
    printf("El resto es %d\n", z);
    x++;
    printf("Incremento la variable: %d\n", x);
    z += 50;
    printf("Utilizando un operador de reasignación %d\n", z);

    float x2 = 2;
    float y2 = 3;
    float z2;

    z2 = x2 + y2;
    printf("La suma es %f.\n", z2);
    z2 = x2 - y2;
    printf("La resta es %f.\n", z2);
    z2 = x2 * y2;
    printf("La multiplicación es %f.\n", z2);
    z2 = x2 / y2;
    printf("La división (entera) es %f.\n", z2);

    return 0;
}