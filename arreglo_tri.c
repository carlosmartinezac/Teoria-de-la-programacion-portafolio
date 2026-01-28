#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int tridimensional[2][3][2];

    //Capa 1
    tridimensional[0][0][0] = 1;
    tridimensional[0][0][1] = 2;
    tridimensional[0][1][0] = 3;
    tridimensional[0][1][1] = 4;
    tridimensional[0][2][0] = 5;
    tridimensional[0][2][1] = 6;

    //Capa 2
    tridimensional[1][0][0] = 7;
    tridimensional[1][0][1] = 8;
    tridimensional[1][1][0] = 9;
    tridimensional[1][1][1] = 10;
    tridimensional[1][2][0] = 11;
    tridimensional[1][2][1] = 12;
    
    
    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {

            for (int k = 0; k < 2; k++) {

                printf("Capa %i, fila %i y columna %i es igual a: %i\n", i+1, j+1, k+1, tridimensional[i][j][k]);
            }
        }
    }

   
    return 0;

}
