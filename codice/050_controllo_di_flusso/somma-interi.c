#include <stdio.h>

main() {
  int i, n, somma;
  somma = 0;
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    // i assume i valori interi compresi fra 1 e n
    somma = somma + i; // somma contiene la somma di tutti i valori assunti finora da i
  }
  // somma contiene la somma di tutti i valori fra 1 e n
  printf("%d\n", somma);
}