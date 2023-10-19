#include <stdio.h>

main() {
  int n;
  int d;  // Sd = [1,2,...,n]
  int l;  // contatore divisori di d
  int i;  // potenziali divisori di d
  int q;  // quoziente nella fattorizzazione
  int esponente;
  printf("Inserisci un numero intero positivo\n");
  scanf("%d", &n);
  q = n;
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
        // d è un divisore primo di n
        esponente = 0;
        while (q % d == 0) {
          q = q / d;
          esponente++;
        }
        printf("%d", d);
        if (esponente > 1)
          printf("^%d", esponente);
        if (q > 1)
          printf(" x ");
      }
    }
  }
  printf("\n");
}