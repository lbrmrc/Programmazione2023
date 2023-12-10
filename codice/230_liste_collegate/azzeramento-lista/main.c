#include "lista.h"

int main() {
  Lista l;
  listaNonOrdinata(&l, 6);

  azzera(l);
  stampa(l);
  return 0;
}