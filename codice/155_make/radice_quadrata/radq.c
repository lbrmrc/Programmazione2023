#include "radq.h"

// definizione
float radq(float a) {
  float x = 1.0;
  // ciclo
  while (!((x * x - a) / a > -1e-5 && (x * x - a) / a < 1e-5)) {
    x = (x + a / x) / 2.0;
  }
  return x;
}