#include <math.h> 

#include "funzioni-aritmetiche.h"

float radq(float a) {
  float x;  // accumulatore
  x = 1.0;
  while (fabsf(quadrato(x) - a) / a > 1e-5)
    x = media(x, a / x);  // media
  return x;
}

