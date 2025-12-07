#include <stdio.h>

int main() {
    
    double n;
    double suma=0;

    for (n = 2; n<= 50; n++) {
        suma = suma + 1/n;
    }
    printf("La suma es: %lf", suma);
    
    return 0;

}
