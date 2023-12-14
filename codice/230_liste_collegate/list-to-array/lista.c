#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

void stampa(Lista l)
{
  // ForEach(printf, l)
  while (l != NULL)
  {
    printf("%d ", l->dato);
    l = l->next;
  }
  printf("\n");
}

int lunghezza(Lista l)
{
  // reduce (++, 0, l)

  int s; // accumulatore;
  s = 0; // valore iniziale
  while (l != NULL)
  {
    s++;
    l = l->next;
  }
  // s contiene il valore dell'operazione
  return s;
}

int *listToArray(Lista l)
{
  int n_elementi = lunghezza(l);
  int *a;
  int i;
  a = (int *)malloc(n_elementi * sizeof(int));

  i = 0;
  while (l != NULL)
  {
    a[i] = l->dato;
    l = l->next;
    i++;
  }
  return a;
}

int testa(Lista l)
{ // oppure head oppure car
  return l->dato;
}
Lista coda(Lista l)
{ // oppure tail oppure cdr
  return l->next;
}

// fa puntare pl a una lista non ordinata di n elementi (n <= 10)
void listaNonOrdinata(Lista *pl, int n)
{
  // gli elementi da inserire nella lista
  int a[] = {6, 2, 3, 2, 4, 7, 0, 2, 5, 1};
  int i;
  // per i che va da 0 a n - 1
  for (i = 0; i < n; i++)
  {
    // *pl punta a un nuovo nodo
    (*pl) = (Nodo *)malloc(sizeof(Nodo));
    // il cui dato è a[i]
    (*pl)->dato =
        a[i]; // fa puntare pl a una lista non ordinata di n elementi (n <= 10)
    void listaNonOrdinata(Lista * pl, int n)
    {
      // gli elementi da inserire nella lista
      int a[] = {6, 2, 3, 2, 4, 7, 0, 2, 5, 1};
      int i;
      // per i che va da 0 a n - 1
      for (i = 0; i < n; i++)
      {
        // *pl punta a un nuovo nodo
        (*pl) = (Nodo *)malloc(sizeof(Nodo));
        // il cui dato è a[i]
        (*pl)->dato = a[i];
        // e il cui campo next è NULL (cioè *pl ha un solo elemento;
        // eventualmente ne saranno aggiunti altri nelle iterazioni successive)
        (*pl)->next = NULL;
        // assegna a pl l'indirizzo della sua coda
        pl = &(*pl)->next;
      }
    }
    // e il cui campo next è NULL (cioè *pl ha un solo elemento; eventualmente
    // ne saranno aggiunti altri nelle iterazioni successive)
    (*pl)->next = NULL;
    // assegna a pl l'indirizzo della sua coda
    pl = &(*pl)->next;
  }
}