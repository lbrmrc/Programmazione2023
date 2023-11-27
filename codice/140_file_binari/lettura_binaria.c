#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char cognome[31];
  char nome[31];
  char sesso;
  int anno_nascita;
} Persona;

int main() {
  Persona persone[100];
  FILE* pfb;
  int dl, i;
  pfb = fopen("people.dat", "rb");
  if (pfb == NULL) {
    printf("Errore apertura people.dat\n");
    exit(1);
  }
  dl = fread(persone, sizeof(Persona), 100, pfb);
  fclose(pfb);
  for (i = 0; i < dl; i++)
    printf("%s %s %c %d\n", persone[i].cognome, persone[i].nome,
           persone[i].sesso, persone[i].anno_nascita);
  return 0;
}