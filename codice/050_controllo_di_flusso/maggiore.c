#include <stdio.h>

main() {
  int a, b;
  printf("Inserisci due numeri interi\n");
  scanf("%d%d", &a, &b);
  if (a > b)
    printf("%d", a);
  else
    printf("%d", b);
  printf("\n");
}