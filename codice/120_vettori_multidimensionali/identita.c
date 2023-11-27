#include <stdio.h>
#define DIM 3

typedef int Riga[DIM];
typedef Riga Matrice[DIM];

int main() {
  Matrice m;
  int i, j;

  for (i = 0; i < DIM; i++)
    for (j = 0; j < DIM; j++)
      if (j == i)
        m[i][j] = 1;
      else
        m[i][j] = 0;
  //   oppure m[i][j] = i == j ? 1 : 0;
  //   oppure m[i][j] = i == j;

  for (i = 0; i < DIM; i++) {
    for (j = 0; j < DIM; j++)
      printf("%d ", m[i][j]);
    printf("\n");
  }
  return 0;
}