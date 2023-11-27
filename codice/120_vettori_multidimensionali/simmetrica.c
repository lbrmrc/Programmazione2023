#include <stdio.h>
#define DIM 3

void lettura(int m[][DIM]) {
  int i, j;
  for (i = 0; i < DIM; i++)
    for (j = 0; j < DIM; j++)
      scanf("%d", &m[i][j]);
}

int simmetrica(int m[][DIM]) {
  int i, j;
  for (i = 0; i < DIM; i++)
    for (j = i + 1; j < DIM; j++)
      if (m[i][j] != m[j][i])
        return 0;
  return 1;
}

int main() {
  int matrice[DIM][DIM];
  lettura(matrice);
  if (simmetrica(matrice))
    printf("Simmetrica\n");
  else
    printf("Non simmetrica\n");
}