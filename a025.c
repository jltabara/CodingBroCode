#include <stdio.h>

int main(){

    char operacion = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double resultado = 0.0;

    printf("Escribe el primer número: ");
    scanf("%lf", &num1);
    printf("Escribe la operación (+ - * /): ");
    scanf(" %c", &operacion);  // Atención al espacio en blanco
    printf("Escribe el segundo número: ");
    scanf("%lf", &num2);

    switch (operacion)
    {
    case '+':
        resultado = num1 + num2;
        break;
    case '-':
        resultado = num1 - num2;
        break;
    case '*':
        resultado = num1 * num2;
        break;
    case '/':
        if (num2 == 0){
            printf("No se puede dividir por 0.\n");
        }else{
        resultado = num1 / num2;
        }
        break;
    default:
        printf("Operador no válido\n");
    }

    printf("Resultado: %lf\n", resultado);

    return 0;
}