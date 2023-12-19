#include <stdio.h>

int fattoriale(int n) {
  // definizione iterativa
  int p = 1; // accumulatore
  int i;
  for (i = 1; i <= n; i++)
    p = p * i;
  return p;
}

int fatt(int n) {
  // definizione ricorsiva
  if (n == 0)
    return 1;
  else
    return n * fatt(n - 1);
}

int main() {
  printf("%d\n", fatt(5));
  return 0;
}