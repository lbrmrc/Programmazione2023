// richiede all'utente la dimensione di un array

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int dimensione; // sia fisica che logica
  int *p;
  int i;
  printf("Quanti elementi?\n");
  scanf("%d", &dimensione);

  p = (int *)malloc(dimensione * sizeof(int));
  if (p == NULL)
  {
    printf("errore allocazione memoria\n");
    exit(1);
  }
  for (i = 0; i < dimensione; i++)
    p[i] = i;

  for (i = 0; i < dimensione; i++)
    printf("%d ", *(p + i));
  printf("\n");

  free(p);

  printf("%d\n", p[5]);
  return 0;
}