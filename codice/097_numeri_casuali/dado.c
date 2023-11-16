#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i;
  for (i = 0; i < 10; i++)
    printf("%d ", 1 + rand() % 6);
  printf("\n");
  return 0;
}