// Veamos que pasa con los booleanos
// Necesitamos un nuevo archivo de encabezado
// Para imprimir se utiliza %d

#include <stdio.h>
#include <stdbool.h>

int main(){

    bool casado = true;
    bool enlinea = 0;
    bool eresestudiante = false;

    printf("¿Estás casado? %d\n", casado);
    printf("¿Estás en línea? %d\n", enlinea);

    if (enlinea){
        printf("Estás en línea.\n");
    }
    else{
        printf("Estás desconectado.\n");
    }

    printf("¿Eres estudiante? %d\n", eresestudiante);

    return 0;
}