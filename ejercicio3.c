#include <stdio.h>
#include <math.h>

int main() {
    
    double x1, x2, y1, y2, distancia;

    printf("Escriba el valor de x1\n");
    scanf("%lf", &x1);

    printf("Escriba el valor de y1\n");
    scanf("%lf", &y1);

    printf("Escriba el valor de x2\n");
    scanf("%lf", &x2);

    printf("Escriba el valor de y2\n");
    scanf("%lf", &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("La distancia entre estos 2 puntos es: %lf\n", distancia);

    return 0;
}

