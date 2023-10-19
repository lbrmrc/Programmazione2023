#include <stdio.h>

main() {
  int n;
  int d;  // Sd = [1,2,...,n]
  int l;  // contatore divisori di d
  int i;  // potenziali divisori di d
  printf("Inserisci un numero intero positivo\n");
  scanf("%d", &n);
  for (d = 2; d <= n; d++) {
    // S1 = [1,2,...,n]
    if (n % d == 0) {
      // Sd = [divisori di n] = filter(d divide n,Sd)
      l = 0;
      for (i = 2; i * i <= d && l == 0; i++)
        if (d % i == 0) {
          l++;
        }
      if (l == 0) {
        // Sp = filter(primo,[Sd])
        printf("%d\n", d);
      }
    }
  }
}