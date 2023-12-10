#include <stdio.h>
#include <stdlib.h>

int main() {
  double* pd;
  pd = (double*)malloc(sizeof(double));
  scanf("%lf", pd);
  printf("%lf\n", *pd);
  free(pd);
  return 0;
}