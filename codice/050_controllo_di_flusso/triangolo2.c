#include <stdio.h>

main() {
  int a, b, c;
  printf("inserisci i lati del triangolo\n");
  scanf("%d%d%d", &a, &b, &c);
  if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
    if (a == b && a == c)
      printf("Equilatero\n");
    else if (a == b || b == c || a == c)
      printf("Isoscele\n");
    else
      printf("Scaleno\n");
  else
    printf("Non è un triangolo\n");
}