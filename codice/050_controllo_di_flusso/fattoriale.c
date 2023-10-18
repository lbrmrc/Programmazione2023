#include <stdio.h>

main() {
  int n, f, i;
  printf("Inserisci un intero n\n");
  scanf("%d", &n);
  // n! = reduce(*,1,[1..n])
  f = 1; // assegno all'accumulatore il valore iniziale
  for (i = 1; i <= n; i++) {
    // Si = [1,2,3,...,n-1,n]
    f = f * i;
  }

  printf("n!=%d\n", f);
}