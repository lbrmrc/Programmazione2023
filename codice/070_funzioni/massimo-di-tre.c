#include <stdio.h>

int massimo(int m, int n) {
  if (m >= n)
    return m;
  else
    return n;
}

int massimo_di_tre(int a, int b, int c) {
  return massimo(massimo(a, b), c);
}

int main() {
  printf("%d\n", massimo_di_tre(5, 2, 3));
  printf("%d\n", massimo_di_tre(3, 5, 2));
  printf("%d\n", massimo_di_tre(2, 3, 5));
}