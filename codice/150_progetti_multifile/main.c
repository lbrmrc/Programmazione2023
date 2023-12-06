#include <stdio.h>

#include "radq.h"

int main() {
  float a;
  printf("Inserisci un numero reale\n");
  scanf("%f", &a);
  printf("%f\n", radq(a));
}