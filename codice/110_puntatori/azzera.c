#include <stdio.h>

void azzera(int* indirizzo_area_da_azzerare) {
  *indirizzo_area_da_azzerare = 0;
}

int main() {
  int a = 3;
  int *indirizzo_di_a;

  indirizzo_di_a = &a;

  azzera(indirizzo_di_a);

  printf("%d\n", a);  // stampa 0
}