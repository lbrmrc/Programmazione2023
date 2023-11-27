#include <stdio.h>
#include <math.h> 

float radq(float a);

int main(void) {
  float a;
  printf("Digita un numero\n");
  scanf("%f", &a);
  if (a <= 0) {
    printf("%f e` negativo o nullo\n", a);
    return -1;
  }
  printf("La radice quadrata di %.2f e` circa %f\n", a, radq(a));
  return 0;
}