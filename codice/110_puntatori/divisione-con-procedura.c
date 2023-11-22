#include <stdio.h>

void divisione(int dividendo, int divisore, int* p_quoziente, int* p_resto) {
  *p_quoziente = dividendo / divisore;
  *p_resto = dividendo % divisore;
}

int main(void) {
  int dividendo, divisore, quoziente, resto;
  printf("Inserisci dividendo e divisore\n");
  scanf("%d%d", &dividendo, &divisore);
  divisione(dividendo, divisore, &quoziente, &resto);
  printf("Quoziente: %d\nResto:%d\n", quoziente, resto);
  return 0;
}