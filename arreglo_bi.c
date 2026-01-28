#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int matriz[3][4];

    /* matriz = { 
            {1, 5, 8, 3},
            {2, 3, 6, 8},
            {5, 7, 9, 4} }; */
    
    matriz[0][0] = 1;
    matriz[0][1] = 5;
    matriz[0][2] = 8;
    matriz[0][3] = 3;

    matriz[1][0] = 2;
    matriz[1][1] = 3;
    matriz[1][2] = 6;
    matriz[1][3] = 8;

    matriz[2][0] = 5;
    matriz[2][1] = 7;
    matriz[2][2] = 9;
    matriz[2][3] = 4;

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 4; j++) {

            printf("Fila %i y columna %i es igual a: %i\n", i+1, j+1, matriz[i][j]);
        }
    }

    
    return 0;

}

