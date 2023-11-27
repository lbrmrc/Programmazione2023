#include <stdio.h>
#include <stdlib.h>
#define NPERSONE 100

typedef struct {
  char cognome[31];
  char nome[31];
  char sesso;
  int anno;
} Persona;

int main() {
  int dl;
  Persona persone[NPERSONE];
  FILE* pf;
  FILE* pfb;
  char s[2];
  pf = fopen("people.txt", "rt");
  if (pf == NULL) {
    printf("Errore apertura file\n");
    exit(1);
  }
  dl = 0;
  while (dl < NPERSONE && fscanf(pf, "%s%s%s%d", persone[dl].cognome,
                                 persone[dl].nome, s, &persone[dl].anno) == 4) {
    persone[dl].sesso = s[0];
    dl++;
  }
  fclose(pf);
  pfb = fopen("people.dat", "wb");
  fwrite(persone, sizeof(Persona), dl, pfb);
  fclose(pfb);

  return 0;
}