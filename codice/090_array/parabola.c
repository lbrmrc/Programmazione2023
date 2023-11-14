#include <stdio.h>

int main() {
  float ordinate[21], ascisse[21];
  float a, b, c;
  int i;
  printf("Inserisci i tre parametri\n");
  scanf("%f%f%f", &a, &b, &c);

  // ascisse = map (i -> -1.0+i*0.1, [0..20]);
  for (i = 0; i < 21; i++)
    ascisse[i] = -1.0 + i * 0.1;

  // ordinate = map (x -> a * x * x + b * x + c, ascisse)
  for (i = 0; i < 21; i++)
    ordinate[i] = a * ascisse[i] * ascisse[i] + b * ascisse[i] + c;

  for (i = 0; i < 21; i++)
    printf("< %.3f, %.3f >\n", ascisse[i], ordinate[i]);

  return 0;
}