#include <stdio.h>

main() {
  int i, q;
  for (i = 1; i <= 20; i++) {
    // i assume i valori di Si = [1,2,3,...19,20]

    // filtro numeri pari
    if (i % 2 == 0) {
      // i  i valori pari di Si, cioè Sp = [2,4,6,...,18,20] = filter(pari, Si)
      q = i * i;  // q prende i valori Sq = map(quadrato,filter(pari,Si))
      printf("%d\n", q);
    }
  }
}