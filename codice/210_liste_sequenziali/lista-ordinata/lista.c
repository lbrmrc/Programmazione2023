// implementazione ADT lista
#include <stdlib.h>
#include <stdio.h>

#include "lista.h"

void nuova(Lista* pl) {
  pl->n_elementi = 0;
}

int piena(Lista* pl) {
  return pl->n_elementi == DIMENSIONE;
}

void ins_ord(Lista* pl, int n) {
  int i;
  if (piena(pl)) {
    printf("Errore: lista piena\n");
    exit(1);
  }
  for (i = pl->n_elementi; pl->dati[i - 1] > n && i >= 1; i--)
    pl->dati[i] = pl->dati[i - 1];
  pl->dati[i] = n;
  pl->n_elementi++;
}

void stampa(Lista l) {
  int i;
  for (i = 0; i < l.n_elementi; i++)
    printf("%d ", l.dati[i]);
  printf("\n");
}
