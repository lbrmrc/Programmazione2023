#include <stdio.h>
#include <stdlib.h>

typedef int Dato;
typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;
typedef Nodo* Lista;

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

int lunghezza(Lista l) {
  int cont = 0;
  while (l != NULL) {
    cont++;
    l = l->next;
  }
  return cont;
}

int* list_to_array(Lista l) {
  int dimensione;
  int* p;
  int i;
  dimensione = lunghezza(l);
  p = (int*)malloc(dimensione * sizeof(int));
  if (p == NULL){ 
    printf("Errore allocazione memoria\n");
    exit(1);
  }
  i = 0;
  while (l != NULL) {
    p[i] = l->dato; // oppure *(p+i) = l->dato;
    i++;
    l = l->next;
  }
  return p;
}

int main() {
  Lista l;
  int* a;
  int i;
  int dimensione = lunghezza(l);
  listaNonOrdinata(&l, 6);

  a = list_to_array(l);
  for (i = 0; i < dimensione; i++)
    printf("%d ", a[i]);
  printf("\n");
  return 0;
}