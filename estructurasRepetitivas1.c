#include <stdio.h>

int main() {
    int contador=0;
    int num;

 
    do {
        printf("Ingrese el numero\n");
        scanf("%d", &num);
        if (num>0) {
            contador=contador+1;
        }
    } while (num>0);
        
    printf("La cantidad de numeros positivos ingresados es: %d", contador);
    return 0;
    
    
}
