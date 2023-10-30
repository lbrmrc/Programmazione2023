#include <stdio.h>

riga(int quanti){
    int j;
    for (j = 0; j< quanti;j++)
        printf("*");
    printf("\n");
}

main() {
  int i;
  int colonne, righe;
  printf("Inserisci il numero di righe e colonne");
  scanf("%d%d", &righe, &colonne);

  for (i = 0; i < righe; i++)
    riga(colonne);
}