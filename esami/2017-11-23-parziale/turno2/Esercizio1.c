#include <stdio.h>

int mcd(int a, int b) {
  while (a != b)
    if (a < b)
      b -= a;
    else
      a -= b;
  return a;
}

int main(void) {
  int i, j, MAX;
  scanf("%d", &MAX);
  for (i = 1; i <= MAX; i++) {
    for (j = 1; j <= MAX; j++)
      printf("%.3f ", 1/(float)mcd(i, j));
    printf("\n");
  }
  return 0;
}