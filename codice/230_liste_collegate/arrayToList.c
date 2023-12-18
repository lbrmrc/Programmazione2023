#include <stdio.h>
#include <stdlib.h>

typedef int Dato;
typedef struct nodo {
  Dato dato;
  struct nodo *next;
} Nodo;
typedef Nodo *Lista;

void stampa(Lista l) {
  while (l != NULL) {
    printf("%d\n", l->dato); // stampa della testa
    l = l->next;             // aggiorno l con il valore della sua coda}
  }
}

void insTesta(Lista *pl, Dato d) {
  Nodo *aux = (Nodo *)malloc(sizeof(Nodo));
  if (aux == NULL) {
    printf("Errore allocazione\n");
    exit(1);
  }
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

Lista arrayToList(int a[], int dl) {
  int i;
  Lista l = NULL;
  for (i = dl - 1; i >= 0; i--) // dall'ultimo indice valido al primo
    insTesta(&l, a[i]);
  return l;
}

int main() {
  int a[3] = {6, 2, 3};
  Lista l = arrayToList(a, 3);
  stampa(l);
  return 0;
}