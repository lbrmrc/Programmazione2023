#include <stdio.h>
#include <stdlib.h>

#include "listaEsami.h"

void nuovaLista(Lista *pl) { *pl = NULL; }

void insTesta(Lista *pl, Dato d) {
  Nodo *aux = (Nodo *)malloc(sizeof(Nodo));
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

int precede(Dato d1, Dato d2) {
  // 1 se d1 precede d2, 0 altrimenti
  int p1, p2;
  p1 = d1.voto_pratico + d1.voto_teorico;
  p2 = d2.voto_pratico + d2.voto_teorico;
  if (d1.voto_pratico < 12 || d1.voto_teorico < 6)
    p1 = -1;
  if (d2.voto_pratico < 12 || d2.voto_teorico < 6)
    p2 = -1;

  if (p1 > p2)
    return 1;
  else if (p2 > p1)
    return 0;
  else
    return d1.matricola > d2.matricola;
}

void insOrd(Lista *pl, Dato d) {
  while (*pl != NULL && precede((*pl)->dato, d))
    pl = &(*pl)->next;
  insTesta(pl, d);
}

void ordina(Lista *pl) {
  Lista l2;
  Lista l1 = *pl;
  nuovaLista(&l2);
  while (l1 != NULL) {
    insOrd(&l2, l1->dato);
    l1 = l1->next;
    // elimina testa di *pl
  }
  *pl = l2;
}

void aggiorna(Lista *pl, Record r) {
  while (*pl != NULL && (*pl)->dato.matricola != r.matricola)
    pl = &(*pl)->next;

  if (*pl == NULL) {
    Dato d;
    d.matricola = r.matricola;
    d.voto_pratico = -1;
    d.voto_teorico = -1;
    insTesta(pl, d);
  }

  if (r.tipo == 'P') {
    (*pl)->dato.voto_pratico = r.punteggio;
  } else {
    (*pl)->dato.voto_teorico = r.punteggio;
  }
}

void stampa(Lista l) {

  while (l != NULL) {
    printf("%d ", l->dato.matricola);
    if (l->dato.voto_pratico < 12 || l->dato.voto_teorico < 6)
      printf("Non superato");
    else {
      int voto_finale = l->dato.voto_pratico + l->dato.voto_teorico;
      if (voto_finale > 30)
        printf("30 e lode");
      else
        printf("%d", voto_finale);
    }
    printf("\n");
    l = l->next;
  }
}