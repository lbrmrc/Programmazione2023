#include <stdio.h>
#include <stdlib.h>

typedef int Dato;
typedef struct nodo {
  Dato dato;
  struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void stampa(Lista l) {
  while (l) {
    printf("%d\n", l->dato);
    l = l->next;
  }
}

void insTesta(Lista *pl, Dato d) {
  Nodo *aux;
  aux = (Nodo *)malloc(sizeof(Nodo));
  if (aux == NULL)
    exit(1);
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

void nuovaLista(Lista *pl) { *pl = NULL; }

void insOrd(Lista *pl, Dato d) {
  while (*pl) {
    if ((*pl)->dato < d)
      pl = &(*pl)->next;
    else
      break;
  }
  insTesta(pl, d);
}

int main() {
  Lista l;
  nuovaLista(&l);
  insOrd(&l, 5);
  insOrd(&l, 2);
  insOrd(&l, 3);
  stampa(l);
  return 0;
}