#include <stdio.h>
#include <math.h>

int main(){

    double x = 19.67;
    double raiz = sqrt(x);
    double potencia = pow(x, 2);

    printf("El número es: %lf\n", x);
    printf("La raíz es %lf\n", raiz);
    printf("El cuadrado es %lf\n", potencia);
    printf("Redondeado: %.0lf\n", round(x));
    printf("Hacia arriba %.0lf\n", ceil(x));
    printf("Hacia abajo %.0lf\n", floor(x));
    printf("Logaritmo %lf\n", log(x));
    printf("El seno es:  %lf\n", sin(x));
    printf("El coseno es:  %lf\n", cos(x));
    printf("La tangente es:  %lf\n", tan(x));

    return 0;
}