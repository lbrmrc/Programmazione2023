#include <math.h>
#include <stdio.h>

float media(float x, float y) {
  return (x + y) / 2.0;
}

float radq(float a) {
  float x;
  x = 1.0;
  while (fabsf(x * x - a) > 1e-5)
    x = media(x, a / x);  // media di x e a/x:   media(x, a/x)
  return x;
}

int main(void) {
  float a;
  printf("Digita un numero\n");
  scanf("%f", &a);
  if (a < 0) {
    printf("%f e` negativo\n", a);
    return -1;
  }
  printf("La radice quadrata di %.2f e` circa %f\n", a, radq(a));
  return 0;
}