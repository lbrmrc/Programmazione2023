#include <stdio.h>

int divisibile(int a, int b) {
  int j;
  while (a > 0) {
    j = 0;
    while (a > 1 && j < b - 1) {
      a = a - 1;
      j = j + 1;
    }
    a = a - 1;
  }
  if (a == 0 && j == b - 1)
    return 1;
  else
    return 0;
}

int main() {
  int N, i;
  printf("Inserisci un intero positivo\n");
  scanf("%d", &N);
  for (i = 1; i <= N; i++)
    if (divisibile(N, i))
      printf("%d ", i);
  printf("\n");
  return 0;
}