#include <stdio.h>

main() {
  int n;
  int i;  // Si = [1,2,...,n]
  int l;  // l = reduce(++,0,Sd)
  printf("Inserisci un numero intero positivo\n");
  scanf("%d", &n);
  l = 0;  // inizializzazione accumulatore
  for (i = 2; i * i <= n && l == 0; i++) {
    // Si = [1,2,...,n]
    if (n % i == 0) {
      // So = [divisori di n] = filter(i divide n,Si)
      l++;
    }
  }
  if (l == 0)
    printf("%d è primo\n", n);
  else
    printf("%d non è primo\n", n);
}