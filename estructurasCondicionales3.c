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

    switch (o){

            case '+': 
                r = a + b;
                printf("El resultado de A + B es: %i", r);
                break;
            
            case '-': 
                r = a - b;
                printf("El resultado de A - B es: %i", r);
                break;

            case '*': 
                r = a * b;
                printf("El resultado de A * B es: %i", r);
                break;

            case '/': 
                r = a / b;
                printf("El resultado de A / B es: %i", r);
                break;

            default:
                printf("Operador no valido");
                break;
        }
  
    return 0;
}
