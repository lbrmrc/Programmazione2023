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

Lista* ricerca(Lista* pl)  // restituisce l'indirizzo della lista in testa a cui
// fare l'inserimento
{
  while (*pl != NULL)
    // assegno a pl l'indirizzo della coda di *pl
    pl = &(*pl)->next;
  return pl;
}

void inserimentoCoda(Lista* pl, int d) {
  // ricerca della lista in testa a cui inserire d
  pl = ricerca(pl);
  // inserimento di d in testa alla lista di indirizzo pl
  insTesta(pl, d);
}

int main() {
  Lista l;
  Lista* pl;
  listaCasuale(&l, 3);

  inserimentoCoda(&l, 5);
  return 0;
}