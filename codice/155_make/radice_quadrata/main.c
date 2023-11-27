#include <stdio.h>
#include <math.h> 

#include "funzioni-aritmetiche.h"
#include "radice-quadrata.h"

int main(void) {
  Frazione f;
  float a;
  printf("Digita un numero\n");
  scanf("%f", &a);
  if (a <= 0) {
    printf("%f e` negativo o nullo\n", a);
    return -1;
  }
  printf("La radice quadrata di %.2f e` circa %f\n", a, radq(a));
  printf("La media geometrica di %.2f e 5.0 e` circa %f\n", a, media_geometrica(a, 5.0));
  a= cubo(a);

  return 0;
}