#include<stdio.h>

int massimo(int m, int n) {
  if (m >= n)
    return m;
  else
    return n;
}

int main() {
  printf("%d\n", massimo(2, 3));
  printf("%d\n", massimo(3, 2));
  printf("%d\n", massimo(3, 3));
}