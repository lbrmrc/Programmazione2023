#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  FILE* pf;
  char parola[30];
  pf = fopen("prova.txt", "wt");
  if (pf == NULL) {
    printf("Errore apertura file prova.txt\n");
    exit(1);
  }

  do {
    scanf("%s", parola);
    if (strcmp(parola, "FINE") == 0)
      break;
    fprintf(pf, "%s\n", parola);
  } while (1);

  if (fclose(pf) != 0) {
    printf("Errore chiusura file\n");
    exit(2);
  }
  return 0;
}