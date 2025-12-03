#include <stdio.h>

int main() {

    int n;

    printf("Ingrese el numero\n");
    scanf("%i", &n);

    if (n % 3 ==0){
        printf("El numero %i si es multiplo de 3", n);
    } else {
        printf("El numero %i no es multiplo de 3", n);
    }
    
    return 0;
}
