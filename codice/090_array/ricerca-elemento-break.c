#include <stdio.h>
int main() {
  int a[] = {4, 3, 8, 5, 1};
  int i, elemento;

  scanf("%d", &elemento);
  for (i = 0; i < 5; i++)
    if (a[i] == elemento)
      break;

  if (i < 5)
    printf("Elemento trovato all'indice %d\n", i);
}