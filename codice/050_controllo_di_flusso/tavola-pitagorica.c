#include <stdio.h>

main() {
  int i;
  int j;
  for (i = 1; i <= 10; i++) {
    for (j = 1; j <= 10; j++)
      printf("%d ", i * j);
    printf("\n");
  }
}