#include <stdio.h>
#define DIM 10

int main() {
  int a[DIM];
  int n;
  int i;
  printf("Inserisci un numero intero\n");
  scanf("%d", &n);
  for (i = 0; i < DIM; i++) // ForEach(assegna indice + n + 1, a)
    a[i] = i + n + 1;

  for (i = 0; i < DIM; i++) // ForEach(stampa, a)
    printf("%d\n", a[i]);
}