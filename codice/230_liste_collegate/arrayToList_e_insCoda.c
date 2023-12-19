#include <stdio.h>
#include <stdlib.h>

typedef int Dato;
typedef struct nodo {
  Dato dato;
  struct nodo *next;
} Nodo;
typedef Nodo *Lista;

void stampa_ricorsiva(Lista l) {
  if (l == NULL) { // caso base

  } else { // caso ricorsivo
    printf("%d\n", l->dato); // stampa della testa
    stampa_ricorsiva(l->next); // stampa della coda
  }
}

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

void insCoda(Lista *pl, Dato d) {
  while (*pl != NULL)
    pl = &(*pl)->next;
  insTesta(pl, d);
}

Dato ennesimo(Lista l, int posizione) {
  // l'elemento posizion-esimo di l è l'elemento (posizione-1)-esimo della coda
  // di l
  while (posizione != 0 && l != NULL) {
    l = l->next;
    posizione--;
  }
  if (posizione == 0)
    return l->dato;
  else {
    printf("Errore: lista troppo corta\n");
    exit(10);
  }
}

Lista arrayToList(int a[], int dl) {
  int i;
  Lista l = NULL;
  for (i = 0; i < dl; i++) // dall'ultimo indice valido al primo
    insCoda(&l, a[i]);
  return l;
}

int main() {
  int a[5] = {6, 4, 2, 5, 0};
  Lista l = arrayToList(a, 5);
  stampa_ricorsiva(l);
  printf("quarto elemento: %d\n", ennesimo(l, 3));
  printf("decimo elemento: %d\n", ennesimo(l, 9));
  return 0;
}