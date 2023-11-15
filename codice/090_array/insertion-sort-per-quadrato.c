#include <stdio.h>
#define DIM 10

int main() {
  int a[DIM];
  int numero, dl = 0, dlo, i;
  // input
  printf("inserisci al massimo 10 numeri non nulli (0 termina)\n");
  for (dl = 0; dl < DIM; dl++) {
    scanf("%d", &numero);
    if (numero == 0)
      break;
    a[dl] = numero;
  }
  // ordinamento
  for (dlo = 0; dlo < dl; dlo++) {
    int j = dlo, m = a[dlo];
    while (j > 0 && m * m < a[j - 1] * a[j - 1]) {
      a[j] = a[j - 1];
      j--;
    }
    a[j] = m;
  }

  // stampa
  for (i = 0; i < dl; i++)
    printf("%d ", a[i]);
  printf("\n");

  return 0;
}