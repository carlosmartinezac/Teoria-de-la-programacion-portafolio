#include <stdio.h>

int main(){

    double yardas, pies, pulgadas, centimetros, metros;

    printf ("Escribir su medida en pies \n");
    scanf ("%lf", &pies);

    yardas = pies / 3;
    pulgadas = pies * 12;
    centimetros = pulgadas * 2.54;
    metros = centimetros / 100;

    printf ("Su medida en yardas es: %lf, en pulgadas es: %lf, en centimetros es: %lf y en metros es: %lf", yardas, pulgadas, centimetros, metros);


    return 0;

}