#include <stdio.h>

main() {
  int n_input, i, p;
  // prodotto = reduce(*, 1, Sinput)
  p = 1;
  printf("Inserisci 5 numeri interi\n");
  for (i = 1; i <= 5; i++) {
    scanf("%d", &n_input);  // n_input assume i valori di Sinput
    p = p * n_input; // Sp è la sequenza dei prodotti di tutti i numeri inseriti ad ogni iterazione
  }
  printf("%d\n", p);
}