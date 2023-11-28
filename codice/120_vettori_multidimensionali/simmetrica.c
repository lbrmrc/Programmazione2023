#include <stdio.h>
#define DIM 10

void lettura(int a[DIM][DIM], int dl) {
  int i, j;
  for (i = 0; i < dl; i++)
    for (j = 0; j < dl; j++)
      scanf("%d", &a[i][j]);
}

int simmetrica(int a[DIM][DIM], int dl) {
  int i, j;

  for (i = 0; i < dl; i++)
    for (j = i + 1; j < dl; j++)
      if (a[i][j] != a[j][i])
        return 0;

  return 1;
}

int main() {
  int M[DIM][DIM];
  int N;
  printf("Numero di righe e colonne?");
  scanf("%d", &N);
  printf("Inserisci %d elementi\n", N * N);
  lettura(M, N);

  if (simmetrica(M, N))
    printf("Simmetrica\n");
  else
    printf("Non simmetrica\n");
  return 0;
}