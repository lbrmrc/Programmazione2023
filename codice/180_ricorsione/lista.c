#include <stdio.h>
#include <stdlib.h>

typedef int Dato;

typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;

typedef Nodo* Lista;

void stampa(Lista l) {
  if (l == NULL)             // se la lista è vuota
    printf("\n");            // andiamo a capo
  else {                     // altrimenti
    printf("%d ", l->dato);  // stampiamo la testa della lista
    stampa(l->next);         // stampiamo la coda (caso ricorsivo)
  }
}

void insCoda(Lista* pl, Dato d) {
  if (*pl == NULL)
    insTesta(pl, d);
  else
    insCoda(&(*pl)->next, d);
}

Lista insCoda1(Lista l, Dato d) {
  if (l == NULL) {
    Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
    aux->dato = d;
    aux->next = NULL;
    return aux;
  } else {
    l->next = insCoda1(l->next, d);
    return l;
  };
}