#include <stdio.h>
#define DIM 100

int main() {
  int a[DIM];
  int numero;
  int i;
  int min, max;
  int dl;  // dimensione logica dell'array
  int somma;

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
  min = 0;
  for (i = 1; i < dl; i++)
    if (a[i] < a[min])
      min = i;
  printf("Minimo: %d\n", a[min]);

  // stampa massimo
  max = 0;
  for (i = 1; i < dl; i++)
    if (a[i] > a[max])
      max = i;
  printf("Massimo: %d\n", a[max]);

  // stampa media aritmetica
  somma = 0;
  for (i = 0; i < dl; i++)
    somma += a[i];
  printf("Media aritmetica: %f\n", (float)somma / dl);

  // stampa dei numeri più frequenti (mode)
}