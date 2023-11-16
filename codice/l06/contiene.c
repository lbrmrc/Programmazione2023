#include <stdio.h>
#define DIM 21

int main() {
  char s1[DIM], s2[DIM];
  int c1, c2;
  int trovato;
  printf("Inserisci due parole\n");
  scanf("%s%s", s1, s2);

  trovato = 0;
  c2 = 0;
  while (s2[c2] != '\0') {
    c1 = 0;
    while (s2[c2 + c1] != '\0' && s1[c1] != '\0') {
      if (s1[c1] != s2[c2 + c1])
        break;
      c1++;
    }
    if (s1[c1] == '\0') {
      trovato = 1;
      break;
    } else
      c2++;
  }
  if (trovato)
    printf("%s contiene %s\n", s2, s1);
  else
    printf("%s non contiene %s\n", s2, s1);

  return 0;
}