#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char cognome[31];
  char nome[31];
  char sesso;  // probabilmente qui c'è 1 byte di padding
  int anno_nascita;
} Persona;

int main() {
  Persona persone[100];
  FILE* pf;
  pf = fopen("people.dat", "rt");
  fscanf(pf, "%s%s%c%d", persone[0].cognome, persone[0].nome, &persone[0].sesso,
         &persone[0].anno_nascita);
  fscanf(pf, "%s%s%c%d", persone[0].cognome, persone[0].nome, &persone[0].sesso,
         &persone[0].anno_nascita);
  fclose(pf);
  return 0;
}