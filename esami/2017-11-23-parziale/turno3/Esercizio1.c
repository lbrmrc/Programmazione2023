#include <stdio.h>

int primo(int n) {
  int i, potenzialmente_primo;
  potenzialmente_primo = n % 2 || n == 2;
  i = 3;
  while (potenzialmente_primo && i * i <= n) {
    if (n % i == 0)
      potenzialmente_primo = 0;
    i += 2;
  }
  return potenzialmente_primo;
}

int f(int a) {
  while (!primo(a))
    a--;
  return a;
}

int main(void) {
  int a, i, primi = 0;
  scanf("%d", &a);
  for (i = 2; i <= a; i++) {
    if (primo(i))
      primi++;
    printf("%d\t%d\t%d\n", i, f(i), primi);
  }
  return 0;
}