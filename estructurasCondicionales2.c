#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {

    int a, b, r;
    char o;

    printf("Ingrese el valor de A\n");
    scanf("%i", &a);
    getchar();

    printf("Ingrese el valor de B\n");
    scanf("%i", &b);
    getchar();

    printf("Ingrese el operador aritmetico (+ - * /)\n");
    scanf("%c", &o);
    getchar();


    if (o == '+'){
        r = a + b;
        printf("El resultado de A + B es: %i", r); 
    } else if (o == '-'){
        r = a - b;
        printf("El resultado de A - B es: %i", r); 
    } else if (o == '*'){
        r = a * b;
        printf("El resultado de A * B es: %i", r); 
    } else if (o == '/'){
        r = a / b;
        printf("El resultado de A / B es: %i", r);
    } else {
        printf("El operador no es valido");
    } 
         
    return 0;
}
