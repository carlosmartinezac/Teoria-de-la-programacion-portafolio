#include <stdio.h>

int main (){

    int numero, doble, triple;

    printf ("Escriba el numero entero \n");
    scanf ("%i", &numero);
    doble = 2 * numero;
    triple = 3 * numero;
    printf ("El doble de su numero es: %i y el triple de su numero es: %i",doble, triple);

    return 0;

}