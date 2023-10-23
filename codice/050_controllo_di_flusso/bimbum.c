#include <stdio.h>

main() {
  int i;

  for (i = 1; i <= 100; i++) {
    // Si = [1,2,...,99,100]

    if (i % 3 == 0 && i % 5 == 0)
      printf("bimbum ");
    else if (i % 3 == 0)
      printf("bim ");
    else if (i % 5 == 0)
      printf("bum ");
    else
      printf("%d ", i);
  }
}