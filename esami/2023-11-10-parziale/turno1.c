#include <stdio.h>

float va(float x) {
  if (x < 0)
    return -x;
  else
    return x;
}

float radice(float S) {
  float x, a, b;
  x = 1.0;
  while (va(x * x - S) / S > 0.00001) {
    a = (S - x * x) / (2 * x);
    b = x + a;
    x = b - a * a / (2 * b);
  }
  return x;
}

int main() {
  int m, n;
  int i;
  float s;
  printf("Inserisci due interi positivi\n");
  scanf("%d%d", &m, &n);
  s = 0;
  for (i = m; i <= n; i++)
    s += radice(i);
  printf("%f\n", s);
}