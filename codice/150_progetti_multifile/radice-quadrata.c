#include <math.h> 

float media(float y, float z);

float radq(float a) {
  float x;  // accumulatore
  x = 1.0;
  while (fabsf(x * x - a) / a > 1e-5)
    x = media(x, a / x);  // media
  return x;
}

