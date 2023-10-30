#include <stdio.h>

void riga(int quanti, char carattere) {
  int j;
  for (j = 0; j < quanti; j++)
    printf("%c", carattere);
}

void logo(char carattere) {
  riga(15, carattere);
  printf("%c   Rubrica   %c\n", carattere, carattere);
  riga(15, carattere);
}

int main() {
  int scelta;

  logo('*');
  printf("1. Tizio 335-1234567\n");
  printf("2. Caio 347-1234567\n");
  printf("Scegliere un contatto\n");
  scanf("%d", &scelta);

  logo('#');
  printf("Chiamata del contatto %d in corso\n", scelta);

  printf("Fine\n");
  return 0;
}