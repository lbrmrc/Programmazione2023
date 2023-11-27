#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char cognome[31];
  char nome[31];
  char sesso; // probabilmente qui c'è 1 byte di padding
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
  dl = 2;
  fread(persone[0].cognome, 31 * sizeof(char), 1, pfb);
  fread(persone[0].nome, 31 * sizeof(char), 1, pfb);
  fread(&persone[0].sesso, sizeof(char), 1, pfb);
  fread(&persone[0].anno_nascita, sizeof(int), 1, pfb);
  fclose(pfb);
  for (i = 0; i < dl; i++)
    printf("%s %s %c %d\n", persone[i].cognome, persone[i].nome,
           persone[i].sesso, persone[i].anno_nascita);
  return 0;
}