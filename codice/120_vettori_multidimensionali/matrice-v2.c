#include <stdio.h>

int main() {
  int i, j;
  int m[3][4] = {{2, 4, 1, 6}, {1, 3, 2, 0}, {4, 1, 3, 2}};
  int n[4][2];
  n[0][1] = 5;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++)
      printf("%d ", m[i][j]);  // non m[i,j]
    printf("\n");
  }
  return 0;
}