#include <stdio.h>

typedef int Riga[4];
typedef Riga Matrice[3];

int main() {
  int i, j;
  Riga r = {2, 4, 1, 6};
  Matrice m = {{2, 4, 1, 6}, {1, 3, 2, 0}, {4, 1, 3, 2}};
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++)
      printf("%d ", m[i][j]);  // non m[i,j]
    printf("\n");
  }
  return 0;
}