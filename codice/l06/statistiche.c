#include <stdio.h>
#define DIM 100

int main() {
  int a[DIM];
  int numero;
  int i;
  int dl; // dimensione logica dell'array

  // input in un array di max DIM interi non negativi (negativo termina)
  dl = 0;
  for (i = 0; i < DIM; i++) {
    scanf("%d", &numero);
    if (numero >= 0) {
      a[i] = numero;
      dl++;
    } else
      break;
  }

  // stampa minimo

  // stampa massimo

  // stampa media aritmetica

  // stampa dei numeri più frequenti (mode)
}