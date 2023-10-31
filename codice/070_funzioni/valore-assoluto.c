#include <stdio.h>

int valoreAssoluto(int n) {
  if (n >= 0)
    return n;
  else
    return -n;
}

int main() {
  int a;
  a = valoreAssoluto(-10);
  printf("%d\n", a);
  return 0;
}