#include <stdio.h>

int main(){

    int temp = 100;

    if (temp <= 0 || temp >= 30){
        printf("Mal tiempo.\n");
    }else{
        printf("Buena temperatura.\n");
    }

    return 0;
}