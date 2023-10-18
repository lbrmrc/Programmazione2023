#include <stdio.h>

main() {
  int i;
  for (i = 10; i >= 5; i--) {
    // i assume la sequenza di valori [10, 9, 8, 7, 6, 5]
    printf("%d\n", i);
  }
}