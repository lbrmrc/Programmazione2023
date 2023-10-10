#include <stdio.h>

main() {
  int numero;
  printf("Inserisci un intero\n");
  scanf("%d", &numero);
  if (numero > 0)
    printf("Positivo\n");
}