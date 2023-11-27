#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char nome[10];
  float stipendio;
} Impiegato;

int main() {
  FILE* pfb;
  Impiegato im;
  pfb = fopen("stipendi.dat", "rb");
  if (pfb == NULL) {
    printf("Errore apertura\n");
    exit(1);
  }
  while (fread(&im, sizeof(Impiegato), 1, pfb) == 1) {
    printf("%s %.2f\n", im.nome, im.stipendio);
  }
  fclose(pfb);
  return 0;
}