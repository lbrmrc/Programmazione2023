#include <stdio.h>

int main() {
  char stringa[11];
  int cont, i;
  scanf("%s", stringa);
  cont = 0;
  while (stringa[cont] != '\0') {
    cont++;
  }
  printf("%d\n", cont);
}