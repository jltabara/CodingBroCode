// Justificando números enteros

#include <stdio.h>

int main(){

    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    printf("%4d\n", num1);
    printf("%4d\n", num2);
    printf("%4d\n", num3);
    printf("\n");

    printf("%04d\n", num1);
    printf("%04d\n", num2);
    printf("%04d\n", num3);
    printf("\n");

    printf("%+4d\n", num1);
    printf("%+4d\n", num2);
    printf("%+4d\n", num3);


    return 0;
}