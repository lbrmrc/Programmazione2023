#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char nome[10];
  float stipendio;
} Impiegato;

int main() {
  FILE* pfb;
  Impiegato im;
  pfb = fopen("stipendi.dat", "r+b");
  if (pfb == NULL) {
    printf("Errore apertura\n");
    exit(1);
  }
  while (fread(&im, sizeof(Impiegato), 1, pfb) == 1)
    if (im.stipendio < 1500) {
      im.stipendio = im.stipendio * 1.1;
      fseek(pfb, -sizeof(Impiegato), SEEK_CUR);
      fwrite(&im, sizeof(Impiegato), 1, pfb);
      fflush(pfb);
    }
  fclose(pfb);
}