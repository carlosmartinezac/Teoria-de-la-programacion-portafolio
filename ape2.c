#include <stdio.h>

void calcularValorCliente(float *recaudado);
void calcularValorRecaudado(int clientes);

int main() {
  int clientes;
  do {
    printf("Ingrese el numero de clientes: ");
    scanf("%i", &clientes);
    if (clientes < 0) {
      printf("Numero invalido");
    }
  } while (clientes < 0);

  calcularValorRecaudado(clientes);
  return 0;
}

void calcularValorRecaudado(int clientes) {

  float recaudado = 0;
  
  for (int i = 0; i < clientes; i++) {
    printf("\nCliente %i\n", i + 1);
    calcularValorCliente(&recaudado);
  }

  printf("\nValor total recaudado: $%.2f\n", recaudado);
}

void calcularValorCliente(float *recaudado) {
  int clientes, horas, consola, i;
  double play = 2.50, xbox = 2.00, nintendo = 1.50, total = 0;
  double precio = 0, valor;

  do {
    printf("Ingrese el numero segun el tipo de consola (PlayStation = 1, Xbox = 2, Nintendo = 3): ");
    scanf("%i", &consola);
    if (consola < 1 || consola > 3) {
      printf("Numero invalido");
    }
  } while (consola < 1 || consola > 3);

  if (consola == 1) {
    precio = play;
  } else if (consola == 2) {
    precio = xbox;
  } else if (consola == 3) {
    precio = nintendo;
  }

  do {
    printf("Ingrese las horas de uso: ");
    scanf("%i", &horas);
    if (horas < 0) {
      printf("Numero invalido");
    }
  } while (horas < 0);

  valor = precio * horas;
  printf("Valor a pagar: $%.2f\n", valor);
  *recaudado = *recaudado + valor;

}
