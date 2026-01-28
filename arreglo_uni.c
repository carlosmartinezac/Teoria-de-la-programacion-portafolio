#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int lista[5];

    //lista = {8, 10, 7, 5, 3};

    lista[0] = 8;
    lista[1] = 10;
    lista[2] = 7;
    lista[3] = 5;
    lista[4] = 3;

    for (int i = 0; i < 5; i++) {
        printf("Elemento en la posicion %i: %i\n", i, lista[i]);
    }
        

   
    return 0;

}
