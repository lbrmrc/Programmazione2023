#include <stdio.h>

// come diagramma di flusso nella diapositiva

main() {
  int anno;
  printf("Inserisci l'anno\n");
  scanf("%d", &anno);
  if (anno % 400 == 0)
    printf("Bisestile\n");
  else if (anno % 4 == 0)
    if (anno % 100 == 0)
      printf("Non bisestile\n");
    else
      printf("Bisestile\n");
  else
    printf("Non bisestile\n");
}