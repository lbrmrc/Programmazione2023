#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE* pf;
  char nome[80];
  char c;
  printf("Inserisci il nome del file\n");
  scanf("%s", nome);
  pf = fopen(nome, "rt");
  if (pf == NULL) {
    printf("Errore apertura file %s\n", nome);
    exit(1);
  }

  while (fscanf(pf, "%c", &c) == 1)
    printf("%c", c);

  if (fclose(pf) != 0) {
    printf("Errore chiusura file %s\n", nome);
    exit(2);
  }
}