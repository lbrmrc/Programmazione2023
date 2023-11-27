#include <stdio.h>
#define DIM 8

int main() {
  int m[DIM][DIM];
  int i, j;

  for (i = 0; i < DIM; i++)
    for (j = 0; j < DIM; j++)
      if (j == i)
        m[i][j] = 1;
      else
        m[i][j] = 0;

  for (i = 0; i < DIM; i++) {
    for (j = 0; j < DIM; j++)
      printf("%d ", m[i][j]);
    printf("\n");
  }
}