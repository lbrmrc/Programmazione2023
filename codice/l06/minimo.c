#include <stdio.h>
#define DIM 5

float va(float x) {
  if (x < 0)
    return -x;
  else
    return x;
}

int main() {
  float a[DIM];
  int i;
  int m;  // indice dell'elemento di valore assoluto minimo

  printf("Inserisci %d numeri reali\n", DIM);
  for (i = 0; i < DIM; i++)
    scanf("%f", &a[i]);

  m = 0;
  for (i = 1; i < DIM; i++)
    if (va(a[i]) < va(a[m]))
      m = i;

  printf("%f\n", a[m]);

  return 0;
}