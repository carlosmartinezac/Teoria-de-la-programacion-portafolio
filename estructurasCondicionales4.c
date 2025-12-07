#include <stdio.h>

int main() {

    int a, b;

    printf("Ingrese el primer numero\n");
    scanf("%i", &a);

    printf("Ingrese el segundo numero\n");
    scanf("%i", &b);

    if (a > b) {
        printf("El primer numero es mayor\n");

        if (a % 2 == 0) {
            printf("Además, el primer numero es par");
        } else {
            printf("Además, el primer numero es impar");
        }

    } else {
        printf("El segundo numero es mayor o igual");
    }

    return 0;
}
