#include <stdio.h>

int main() {
    int acumulador = 0;
    int contador = 0;

    while(contador <= 5){
        acumulador = acumulador + contador;
        contador = contador + 1;
    }
    printf("La suma es %i", acumulador);
    return 0;
}