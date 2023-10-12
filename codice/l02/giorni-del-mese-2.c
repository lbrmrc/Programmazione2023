#include <stdio.h>
main() {
  int a, m;
  printf("Inserisci mese e anno\n");
  scanf("%d%d", &m, &a);
  if (a % 400 == 0 || a % 4 == 0 && a % 100 != 0) {
    // anno bisestile
    if (m == 1)
      printf("31\n");
    if (m == 2)
      printf("29\n");
    if (m == 3)
      printf("31\n");
    if (m == 4)
      printf("30\n");
    if (m == 5)
      printf("31\n");
    if (m == 6)
      printf("30\n");
    if (m == 7)
      printf("31\n");
    if (m == 8)
      printf("31\n");
    if (m == 9)
      printf("30\n");
    if (m == 10)
      printf("31\n");
    if (m == 11)
      printf("30\n");
    if (m == 12)
      printf("31\n");
  } else {
    // anno non bisestile
    if (m == 1)
      printf("31\n");
    if (m == 2)
      printf("28\n");
    if (m == 3)
      printf("31\n");
    if (m == 4)
      printf("30\n");
    if (m == 5)
      printf("31\n");
    if (m == 6)
      printf("30\n");
    if (m == 7)
      printf("31\n");
    if (m == 8)
      printf("31\n");
    if (m == 9)
      printf("30\n");
    if (m == 10)
      printf("31\n");
    if (m == 11)
      printf("30\n");
    if (m == 12)
      printf("31\n");
  }
}