#include <stdio.h>

void intercambiarNumeros (int *x, int *y);

int main() {
    int a, b;
    a = 3;
    b = 5;

    intercambiarNumeros(&a, &b);
    printf("El valor de a es: %i\n", a);
    printf("El valor de b es: %i\n", b);
    return 0;
}

void intercambiarNumeros (int *x, int *y) {
    int w;

    w = *x;
    *x = *y;
    *y = w;

    printf("El valor de x es: %i\n", *x);
    printf("El valor de y es: %i\n", *y);
    
}
