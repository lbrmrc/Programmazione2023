#include <stdio.h>
#include <stdlib.h>

#define NRIGHE 4
#define NCOLONNE 6
#define PROBMINA 0.2

typedef char Campo[NRIGHE][NCOLONNE];

double rnd_dbl(double a, double b) {
  return a + (double)rand() / RAND_MAX * (b - a);
}

void inizializza(Campo c) {
  int i, j;
  for (i = 0; i < NRIGHE; i++)
    for (j = 0; j < NCOLONNE; j++)
      if (rnd_dbl(0.0, 1.0) <= PROBMINA) {
        // avviene con probabilità PROBMINA
        c[i][j] = '*';
      } else {
        // avviene con probabilità 1 - PROBMINA
        c[i][j] = ' ';
      }
}

void stampa(Campo c) {
  int i, j;
  for (i = 0; i < NRIGHE; i++) {
    for (j = 0; j < NCOLONNE; j++)
      printf("%c", c[i][j]);
    printf("\n");
  }
}

int main() {
  Campo c;
  inizializza(c);
  stampa(c);
  return 0;
}