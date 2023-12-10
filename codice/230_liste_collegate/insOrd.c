#include "tipi.h"
#include "insTesta.h"

Lista* ricerca(Lista* pl, int d) {
  while (*pl) {
    if ((*pl)->dato > d)
      break;
    pl = &(*pl)->next;
  }
  return pl;
}

void insOrd(Lista* pl, int d) {
  pl = ricerca(pl, d);
  insTesta(pl, d);
}