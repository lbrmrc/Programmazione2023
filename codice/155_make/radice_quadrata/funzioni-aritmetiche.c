#include <math.h>

#include "funzioni-aritmetiche.h"

float media(float y, float z) {
  return (y + z) / 2;
}

float media_geometrica(float y, float z) {
  return sqrt(y * z);
}

float quadrato(float y) {
  return y * y;
}

float piu1(float x) { // non esposta
  return x + 1;
}

float cubo(float x) {
  return x * quadrato(x);
}

Frazione rf(Frazione f) {
  Frazione f1 = {1, 1};
  return f1;
}