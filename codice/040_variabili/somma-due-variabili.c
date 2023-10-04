#include <stdio.h>

main() {
  int a;  // variabile di input es. 5, 4, 6
  int somma;  // somma dei numeri inseriti finora; ACCUMULATORE
  somma = 0;
  printf("inserisci un numero\n");
  scanf("%d", &a);
  somma = somma + a; // 5
  printf("inserisci un numero\n");
  scanf("%d", &a);
  somma = somma + a; // 9
  printf("inserisci un numero\n");
  scanf("%d", &a);
  somma = somma + a; // 15
  printf("Somma: %d\n", somma);
}