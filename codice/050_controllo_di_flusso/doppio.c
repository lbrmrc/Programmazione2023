#include <stdio.h>

main() {
  int n;

richiesta:
  scanf("%d", &n);
  if (n >= 0) {
    printf("%d\n", n * 2);
    goto richiesta;
  } else
    printf("Fine\n");
