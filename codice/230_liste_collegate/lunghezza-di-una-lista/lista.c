#include <stdlib.h>
#include <stdio.h>

#include "lista.h"

int lunghezza(Lista l) {
  int contatore = 0;  // accumulatore
  Nodo* p = l;
  while (p != NULL) {
    contatore++;  // aggiorno l'accumulatore
    p = p->next;
  }
  return contatore;
}

int massimo(Lista l) {
  int m;  // accumulatore;
  Nodo* p;
  if (l == NULL) {
    printf("Il massimo di una lista vuota non è definito\n");
    return 0;
  }
  m = l->dato;
  p = l->next;
  while (p != NULL) {
    if (p->dato > m)
      m = p->dato;
    p = p->next;
  }
  return m;
}

// fa puntare pl a una lista non ordinata di n elementi (n <= 10)
void listaNonOrdinata(Lista* pl, int n) {
  // gli elementi da inserire nella lista
  int a[] = {6, 2, 3, 2, 4, 7, 0, 2, 5, 1};
  int i;
  // per i che va da 0 a n - 1
  for (i = 0; i < n; i++) {
    // *pl punta a un nuovo nodo
    (*pl) = (Nodo*)malloc(sizeof(Nodo));
    // il cui dato è a[i]
    (*pl)->dato = a[i];
    // e il cui campo next è NULL (cioè *pl ha un solo elemento; eventualmente
    // ne saranno aggiunti altri nelle iterazioni successive)
    (*pl)->next = NULL;
    // assegna a pl l'indirizzo della sua coda
    pl = &(*pl)->next;
  }
}
