#include <stdio.h>

main() {
  unsigned char c;
  for (c = 0; c <= 127; c++) {
    printf("%c %d\n", c, c);
  }
}