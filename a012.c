#include <stdio.h>
#include <string.h>

int main(){

    char item[50];
    float precio = 0.0f;
    int cantidad = 0;
    float total = 0.0f;

    printf("Que artículo quieres comprar: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("Precio del artículo: " );
    scanf("%f", &precio);

    printf("Cuántos quieres: ");
    scanf("%d", &cantidad);
    
    total = precio * cantidad;
    printf("El precio total es: %.2f euros.\n", total);
    printf("Has comprado %d %s.\n", cantidad, item);

    return 0;
}