#include <stdio.h>

float radice_quadrata(float z) {
  float x;

  x = 1.0;
  // ciclo
  while (!((x * x - z) / z > -1e-5 && (x * x - z) / z < 1e-5)) {
    x = (x + z / x) / 2.0;
  }
  return x;
}

main() {
  float a, y;

  printf("Inserisci un numero reale\n");
  scanf("%f", &a);
  y = radice_quadrata(a);
  printf("%f\n", y);

  // radice quarta di a
  printf("%f\n", radice_quadrata(radice_quadrata(a)));
}