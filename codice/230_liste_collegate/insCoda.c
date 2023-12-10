#include "insTesta.h"
#include "tipi.h"

Lista* ricerca(Lista* pl, int d) {
  while (*pl)
    pl = &(*pl)->next;
  return pl;
}

void insCoda(Lista* pl, int d) {
  pl = ricerca(pl, d);
  insTesta(pl, d);
}