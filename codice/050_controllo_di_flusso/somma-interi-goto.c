#include <stdio.h>

main() {
  int numero, somma = 0;
  while (1) {
    printf("Digita un intero (negativo termina):\n");
    scanf("%d", &numero);
    if (numero < 0)
      goto fine;
    somma += numero;
  }
fine:
  printf("La somma e` %d\n", somma);
}