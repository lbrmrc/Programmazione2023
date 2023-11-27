#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char s[80];
  FILE* pf;
  pf = fopen("prova.txt", "wt");
  if (pf == NULL) {
    printf("Errore apertura file\n");
    exit(1);
  }

  do {
    fscanf(stdin,"%s", s); // uguale a scanf("%s", s);
    fprintf(pf, "%s\n", s);
  } while (strcmp(s, "FINE") != 0);

  if (fclose(pf) != 0) {
    printf("Errore chiusura file\n");
    exit(2);
  }
  return 0;
}