#include <stdio.h>

#include "frazione.h"

int main() {
  Frazione f1;
  Frazione f2;
  Frazione risultato;
  char operazione;
  printf("Operazione?\n");
  scanf("%c", &operazione);
  printf("Numeratore e denominatore della prima frazione?\n");
  leggiFrazione(&f1);
  printf("Numeratore e denominatore della prima frazione?\n");
  leggiFrazione(&f2);
  switch (operazione) {
    case '+':
      somma(&f1, &f2, &risultato);
      break;
    case '-':
      differenza(&f1, &f2, &risultato);
      break;
    case '*':
      prodotto(&f1, &f2, &risultato);
      break;
    case '/':
      quoziente(&f1, &f2, &risultato);
      break;
    default:
      break;
  }
  stampaFrazionaria(risultato);
  printf("\n");

  return 0;
}