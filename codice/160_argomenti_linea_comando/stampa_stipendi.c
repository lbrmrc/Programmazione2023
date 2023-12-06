#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char cognome[20];
  float paga;
} Dipendente;

int main(int argc, char* argv[]) {
  Dipendente d;
  FILE* pf;
  if (argc != 2){
    printf("Sintassi: %s nome_file_binario\n", argv[0]);
    exit(2);
  }
  pf = fopen(argv[1], "rb");
  if (pf == NULL) {
    printf("Errore apertura\n");
    exit(1);
  }
  while (fread(&d, sizeof(Dipendente), 1, pf) == 1)
    printf("%s %f\n", d.cognome, d.paga);
  fclose(pf);
  return 0;
}