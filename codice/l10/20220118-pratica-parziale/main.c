#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaParole.h"

void toLowerCase(char *s){
    int i;
    for( i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 'a' - 'A';
}

int main(int argc, char *argv[]) {
  FILE *pf;
  char parola[LUNGHEZZA];
  Lista l;

  if (argc < 2) {
    printf("Uso: %s file_testo\n", argv[0]);
    exit(1);
  }

  nuovaLista(&l);

  pf = fopen(argv[1], "rt");
  if (pf == NULL) {
    printf("Errore apertura file %s\n", argv[1]);
    exit(2);
  }

  while (fscanf(pf, "%s", parola) == 1) {
    toLowerCase(parola);

    int trovata = 0;
    int i;
    for (i = 2; i < argc; i++)
      if (strcmp(argv[i], parola) == 0) {
        trovata = 1;
        break;
      }
    if (!trovata)
      aggiornaLista(&l, parola);
  }

  stampa(l);

  fclose(pf);
  return 0;
}