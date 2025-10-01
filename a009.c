#include <stdio.h>

int main()
{

    float precio1 = 19.99;
    float precio2 = 1.50;
    float precio3 = -100.00;

    printf("%f\n", precio1);
    printf("%f\n", precio2);
    printf("%f\n", precio3);

    printf("\n");

    printf("%.2f\n", precio1);
    printf("%.2f\n", precio2);
    printf("%.2f\n", precio3);

    printf("\n");

    printf("%10.2f\n", precio1);
    printf("%10.2f\n", precio2);
    printf("%10.2f\n", precio3);

    printf("\n");

    printf("%+10.2f\n", precio1);
    printf("%+10.2f\n", precio2);
    printf("%+10.2f\n", precio3);

    return 0;
}