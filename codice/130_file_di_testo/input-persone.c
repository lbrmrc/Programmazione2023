#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char cognome[50];
  char nome[50];
  char sesso;
  int nascita;
} Persona;

int main() {
  FILE* pf;
  Persona persone[100];
  char carattere[2];
  int dl;

  pf = fopen("people.txt", "rt");
  if (pf == NULL) {
    printf("Errore apertura\n");
    exit(1);
  }

  dl = 0;
  while (fscanf(pf, "%s%s%s%d", persone[dl].cognome, persone[dl].nome,
                carattere, &persone[dl].nascita) == 4) {
    persone[dl].sesso = carattere[0];
    dl++;
  }

  fclose(pf);
  return 0;
}