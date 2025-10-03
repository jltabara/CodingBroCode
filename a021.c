// Se necesitan break en todos los casos
// El caso por defecto es 'default'
// Funciona también con caracteres

#include <stdio.h>

int main(){

    int diaSemana = 0;
    printf("Dime un día de la semana: ");
    scanf("%d", &diaSemana);

    switch (diaSemana)
    {
    case 1:
        printf("Lunes\n");
        break;
     case 2:
        printf("Martes\n");
        break;
    case 3:
        printf("Miércoles\n");
        break;
    case 4:
        printf("Jueves\n");
        break;
     case 5:
        printf("Viernes\n");
        break;
     case 6:
        printf("Sábado\n");
        break;
     case 7:
        printf("Domingo\n");
        break;
    
    default:
        printf("Número incorrecto\n");
        break;
    }

    return 0;
}