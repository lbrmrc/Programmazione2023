#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  do {
    if (n % 2)
      n--;
    else
      n /= 2;
  } while (n > 0);
  return 0;
}