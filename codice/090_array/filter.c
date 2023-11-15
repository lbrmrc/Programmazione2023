#include <stdio.h>
#define DIM 10

main() {
  int a[DIM], b[DIM], i, dl;
  // ...
  dl = 0;
  for (i = 0; i < DIM; i++)
    if (/* proprieta` desiderata di a[i] */) {
      b[dl] = a[i];
      dl++;
    }
  // qui b ha dimensione logica j e contiene 
  // tutti gli elementi di a con la
  // proprieta` desiderata
}