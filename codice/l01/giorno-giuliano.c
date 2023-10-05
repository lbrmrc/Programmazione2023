#include <stdio.h>

main() {
  // definizione delle variabili G, M, A
  int G, M, A;

  // definizione della variabile JD
  int JD;

  // definizione delle variabili N0, N1, N2, N3
  int N0, N1, N2, N3;

  // lettura da input di G, M, A

  printf("Inserisci giorno, mese e anno\n");
  scanf("%d", &G);
  scanf("%d", &M);
  scanf("%d", &A);

  // calcolo di N0, N1, N2, N3

  N0 = (M - 14) / 12;
  N1 = 1461 * (A + 4800 + N0) / 4;
  N2 = (367 * (M - 2 + 12 * N0)) / 12;
  N3 = 3 * (A + 4900 + N0) / 400;

  // calcolo di JD
  JD = N1 + N2 - N3 + G - 32075;

  // stampa di JD
  printf("Giorno giuliano: %d\n", JD);
}