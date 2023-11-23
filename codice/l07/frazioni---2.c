#include <stdio.h>
#include <stdlib.h>

int mcd(int a, int b) {
  while (a != b) {
    if (a > b)
      a = a - b;
    else
      b = b - a;
  }
  return a;
}

typedef struct {
  int numeratore;
  int denominatore;
} Frazione;

Frazione frazione(int n, int d) {
  Frazione fr;
  if (d == 0){
    printf("Errore: denominatore nullo\n");
    exit(1);
  }

  int m = mcd(n, d);
  fr.numeratore = n / m;
  fr.denominatore = d / m;
  return fr;
}

int num(Frazione fr) {
  return fr.numeratore;
}

int den(Frazione fr) {
  return fr.denominatore;
}

void stampaFrazionaria(Frazione fr) {
  printf("%d/%d", num(fr), den(fr));
}

void stampaDecimale(Frazione fr) {
  printf("%f", (float)num(fr) / den(fr));
}

Frazione leggiFrazione(void) {
  Frazione fr;
  int n, d;
  scanf("%d%d", &n, &d);
  fr = frazione(n, d);
  return fr;
}

int main() {
  Frazione f1;
  Frazione f2;
  f2 = frazione(10, 15);
  f1 = leggiFrazione();
  stampaFrazionaria(f1);
  printf("\n");
  stampaFrazionaria(f2);
  stampaDecimale(f1);
  printf("\n");
  return 0;
}