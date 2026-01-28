#include <stdio.h>

void duplicarNumero(int x);

int main() {
    int n = 4;

    duplicarNumero(n);
    printf("El valor de n fuera de la funcion es: %i\n", n);

    return 0;
}

void duplicarNumero(int x) {
    x = x * 2;
    printf("El valor dentro de la funcion es: %i\n", x);
}
