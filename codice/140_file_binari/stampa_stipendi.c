#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  char cognome[20];
  float paga;
} Dipendente;

int main()
{
  Dipendente d;
  FILE *pf;
  pf = fopen("stipendi.dat", "rb");
  if (pf == NULL)
  {
    printf("Errore apertura\n");
    exit(1);
  }
  while (fread(&d, sizeof(Dipendente), 1, pf) == 1)
    printf("%s %f\n", d.cognome, d.paga);
  fclose(pf);
  return 0;
}