#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// stampa -1

int rnd_int(int min, int max) {
  return min + rand() % (max - min + 1);
}

int main() {
  int i;
  // stampa 30 numeri casuali compresi fra 0 e 99
  srand(time(NULL));
  for (i = 0; i < 30; i++)
    printf("%d\n", rnd_int(0, 99));
  printf("-1\n");
  return 0;
}