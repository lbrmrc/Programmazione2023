#include <stdio.h>

main() {
  int anno;
  printf("Inserisci l'anno\n");
  scanf("%d", &anno);
  if (anno % 400 == 0 || (anno % 4 == 0 && anno % 100 != 0))
    printf("Bisestile\n");
  else
    printf("Non bisestile\n");
}