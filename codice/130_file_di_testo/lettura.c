#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE* pf;
  char parola[20];
  pf = fopen("esempio.txt", "rt");
  if (pf == NULL) {
    printf("Errore apertura file\n");
    exit(1);
  }
  if (fscanf(pf, "%s", parola) == 1)
    printf("%s\n", parola);
  if (fclose(pf) != 0) {
    printf("Errore chiusura file\n");
    exit(2);
  }
  return 0;
}