#include <stdio.h>

int main()
{

    int edad = 0;

    printf("Dime tu edad: ");
    scanf("%d", &edad);

    if (edad >= 18)
    {
        printf("Eres mayor de edad.\n");
    }
    else if (edad < 0)
    {
        printf("No has nacido.\n");
    }
    else if (edad == 0)
    {
        printf("Acabas de nacer.\n");
    }
    else
    {
        printf("Eres pequeño.\n");
    }
    return 0;
}