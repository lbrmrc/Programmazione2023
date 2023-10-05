#include <stdio.h>

main() {
  int G, M, A;
 int JD1, JD2;
  int N0, N1, N2, N3;

  printf("Inserisci giorno, mese e anno\n");
  scanf("%d", &G);
  scanf("%d", &M);
  scanf("%d", &A);

  N0 = (M - 14) / 12;
  N1 = 1461 * (A + 4800 + N0) / 4;
  N2 = (367 * (M - 2 - 12 * N0)) / 12;
  N3 = 3 * (A + 4900 + N0) / 400;

  JD1 = N1 + N2 - N3 + G - 32075;

  printf("Inserisci giorno, mese e anno\n");
  scanf("%d", &G);
  scanf("%d", &M);
  scanf("%d", &A);

  N0 = (M - 14) / 12;
  N1 = 1461 * (A + 4800 + N0) / 4;
  N2 = (367 * (M - 2 + 12 * N0)) / 12;
  N3 = 3 * (A + 4900 + N0) / 400;

  JD2 = N1 + N2 - N3 + G - 32075;


  printf("Differenza fra date: %d\n", JD2 - JD1);
}