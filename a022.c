// Se necesitan break en todos los casos
// El caso por defecto es 'default'
// Funciona también con caracteres

#include <stdio.h>

int main(){

    char diaSemana = '\0';
    printf("Dime un día de la semana (L M X J V S D) ");
    scanf("%c", &diaSemana);

    switch (diaSemana)
    {
    case 'L':
        printf("Lunes\n");
        break;
     case 'M':
        printf("Martes\n");
        break;
    case 'X':
        printf("Miércoles\n");
        break;
    case 'J':
        printf("Jueves\n");
        break;
     case 'V':
        printf("Viernes\n");
        break;
     case 'S':
        printf("Sábado\n");
        break;
     case 'D':
        printf("Domingo\n");
        break;
    
    default:
        printf("Letra incorrecta\n");
        break;
    }

    return 0;
}