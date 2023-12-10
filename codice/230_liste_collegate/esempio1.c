#include <stdlib.h>

typedef int *PuntatoreAIntero;

int main() {
  int* p1;
  int* p2;
  int* p3;
PuntatoreAIntero indirizzi[mk;


  indirizzi[0] = (int*)malloc(sizeof(int));
  *(indirizzi[0]) = 2;
  p2 = (int*)malloc(sizeof(int));
  *p2 = 3;
  p3 = (int*)malloc(sizeof(int));
  *p3 = 5;
  free(p2);
}