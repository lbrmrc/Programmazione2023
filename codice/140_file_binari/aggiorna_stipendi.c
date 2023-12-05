#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  char nome[20];
  float stipendio;
} Record;

int main()
{
  FILE *fp;
  Record r;
  fp = fopen("stipendi.dat", "r+b");
  if (fp == NULL)
  {
    printf("Errore apertura file\n");
    exit(1);
  }

  while (fread(&r, sizeof(Record), 1, fp) == 1)
  {
    if (r.stipendio < 1000.0)
    {
      r.stipendio = r.stipendio * 1.1;
      fseek(fp, -sizeof(Record), SEEK_CUR);
      fwrite(&r, sizeof(Record), 1, fp);
      fflush(fp);
    }
  }
  fclose(fp);
  return 0;
}
