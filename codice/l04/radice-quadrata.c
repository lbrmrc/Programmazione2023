#include <stdio.h>

main() {
  float a;
  float x;
  printf("Inserisci un numero reale\n");
  scanf("%f", &a);

  x = 1.0;
  // ciclo
  while (!((x * x - a)/a > -1e-5 && (x * x - a)/a < 1e-5)) {
    x = (x + a / x) / 2.0;
  }

  printf("%f\n", x);
}