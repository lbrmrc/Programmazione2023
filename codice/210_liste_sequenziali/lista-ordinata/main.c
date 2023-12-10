#include <stdio.h>

#include "lista.h"

int main() {
  Lista l;
  int numero;
  nuova(&l);

  while (!piena(&l)) {
    printf("Inserisci un intero\n");
    scanf("%d", &numero);
    if (numero <= 0)
      break;
    ins_ord(&l, numero);
  }

  stampa(l);

  return 0;
}