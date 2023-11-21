#include <stdio.h>

int main() {
  struct orario {
    int ore;
    int minuti;
  } primo, secondo;

  struct orario differenza;

  printf("Inserisci i due orari\n");
  scanf("%d%d", &primo.ore, &primo.minuti);
  scanf("%d%d", &secondo.ore, &secondo.minuti);

  differenza.ore = secondo.ore - primo.ore;
  differenza.minuti = secondo.minuti - primo.minuti;

  if (differenza.minuti < 0) {
    differenza.ore--;
    differenza.minuti += 60;
  }

  printf("Differenza: %d ore, %d minuti\n", differenza.ore, differenza.minuti);

  return 0;
}