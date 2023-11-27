#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char nome[10];
  float stipendio;
} Impiegato;

int main() {
  FILE* pfb;
  Impiegato impiegati[5] = {{"Rossi", 2450},
                            {"Bianchi", 1820},
                            {"Verdi", 800},
                            {"Esposito", 3000},
                            {"Greco", 1250}};
  pfb = fopen("stipendi.dat", "wb");
  if (pfb == NULL) {
    printf("Errore in apertura\n");
    exit(1);
  }
  fwrite(impiegati, sizeof(Impiegato), 5, pfb);
  fclose(pfb);
}