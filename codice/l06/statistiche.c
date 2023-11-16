#include <stdio.h>
#define DIM 100

int main() {
  int a[DIM];
  int numeri[DIM];
  int frequenze[DIM];
  int dlnf;
  int numero;
  int i, j;
  int min, max;
  int dl;  // dimensione logica dell'array
  int somma;
  int frequenza_massima;

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
  for (i = 0; i < dl; i++) {
    for (j = 0; j < dlnf; j++) {
      if (a[i] == numeri[j]) {
        frequenze[j]++;
        break;
      }
    }
    if (j == dlnf) {
      numeri[j] = a[i];
      frequenze[j] = 1;
      dlnf++;
    }
  }
  frequenza_massima = frequenze[0];
  for (j = 1; j < dlnf - 1; j++)
    if (frequenze[j] > frequenza_massima)
      frequenza_massima = frequenze[j];

  printf("Mode: ");
  for (j = 0; j < dlnf - 1; j++)
    if (frequenze[j] == frequenza_massima)
      printf("%d ", numeri[j]);
  printf("(%d occorrenze) \n", frequenza_massima);
}