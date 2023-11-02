#include <stdio.h>

int MCD(int a, int b) {
  int t, m, i;
  if (a > b) {
    t = b;
    b = a;
    a = t;
  }
  m = 1;
  for (i = 2; i <= a; i++) {
    if (a % i == 0)
      if (b % i == 0)
        m = i;
  }
  return m;
}

int main() {
  int M;
  int i;
  printf("Inserisci un numero intero\n");
  scanf("%d", &M);
  for (i = 1; i <= 10; i++) {
    printf("MCD(%d,%d)=%d\n", M, i, MCD(M, i));
  }
  return 0;
}