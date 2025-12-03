#include <stdio.h>

int main() {

    int n;

    printf("Ingrese un numero\n");
    scanf("%i", &n);

    if (n % 2 ==1) {
        printf("Su numero %i es impar", n);
    }
    return 0;
}