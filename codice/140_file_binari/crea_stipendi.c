#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  char nome[20];
  float stipendio;
} Record;

int main()
{

  Record dipendenti[3] = {{"Rossi", 800.0}, {"Bianchi", 1100.0}, {"Verdi", 900.0}};

  FILE *pf;
  pf = fopen("stipendi.dat", "wb");
  if (pf == NULL)
  {
    printf("Errore apertura file\n");
    exit(1);
  }
  fwrite(dipendenti, sizeof(Record), 3, pf);
  fclose(pf);
  return 0;
}