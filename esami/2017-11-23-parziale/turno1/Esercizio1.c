#include <stdio.h>

float valoreAssoluto(float x) {
  return x < 0 ? -x : x;
}

float radice(float a) {
  float x = 1.0;
  while (valoreAssoluto(x * x - a) > 1e-5)
    x = (x + a / x) / 2.0;
  return x;
}

float f(int n) {
  return radice((n - 1.0) / (n + 1.0));
}

main() {
  int i, M, N;
  scanf("%d%d", &M, &N);
  for (i = M; i <= N; i++)
    if (i % 2)
      printf("%d\n", i);
    else
      printf("%f\n", f(i));
  printf("\n");
  return 0;
}
