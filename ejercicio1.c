#include <stdio.h>

int main (){

    //Variables
    int numero, doble, triple;

    //Datos de entrada
    printf ("Escriba el numero entero \n");
    scanf ("%i", &numero);

    //Proceso
    doble = 2 * numero;
    triple = 3 * numero;

    //Datos de salida
    printf ("El doble de su numero es: %i y el triple de su numero es: %i",doble, triple);

    return 0;


}
