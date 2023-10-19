#include <stdio.h>

main() {
  int n;
  int i;  // Si = [1,2,...,n]
  printf("Inserisci un numero intero positivo\n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    // Si = [1,2,...,n]
    if (n % i == 0) {
      // So = [divisori di n] = filter(i divide n,Si)
      printf("%d\n", i);
    }
  }
}