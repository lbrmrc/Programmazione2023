#include <stdio.h>
#include <stdlib.h>

int main() {
  char nomefile[30];
  FILE* pf;
  char c;

  printf("Nome del file?\n");
  scanf("%s", nomefile);

  pf = fopen(nomefile, "rt");
  if (pf == NULL) {
    printf("Errore apertura file %s\n", nomefile);
    exit(1);
  }

  while (fscanf(pf, "%c", &c) == 1)
    printf("%c", c);

  if (fclose(pf) != 0){
    printf("errore chiusura file\n");
    exit(2);
  }
  return 0;
}