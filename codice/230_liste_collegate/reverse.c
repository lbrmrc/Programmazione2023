#include <stdio.h>
#include <stdlib.h>

typedef int Dato;
typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;
typedef Nodo* Lista;

void nuovaLista(Lista* pl) {
  *pl = NULL;
}

void insTesta(Lista* pl, int d) {
  Nodo* aux;
  aux = (Nodo*)malloc(sizeof(Nodo));
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

void listaCasuale(Lista* pl, int numeroElementi) {
  int i;
  nuovaLista(pl);
  for (i = 0; i < numeroElementi; i++)
    insTesta(pl, 1 + rand() % 9);
}

void reverse(Lista l1, Lista* pl2) {
  nuovaLista(pl2);

  while (l1 != NULL) {
    insTesta(pl2, l1->dato);
    l1 = l1->next;
  }
}

int main() {
  Lista l1;
  Lista l2;
  listaCasuale(&l1, 5);
  reverse(l1, &l2);
  return 0;
}