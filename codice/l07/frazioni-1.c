#include <stdio.h>

typedef struct {
  int numeratore;
  int denominatore;
} Frazione;

Frazione frazione(int n, int d) {
  Frazione fr;
  fr.numeratore = n;
  fr.denominatore = d;
  return fr;
}

int numeratore(Frazione fr){
    return fr.numeratore;
}

int denominatore(Frazione fr){
    return fr.denominatore;
}

void stampaFrazionaria(Frazione fr){
    printf("%d/%d", numeratore(fr), denominatore(fr));
}

void stampaDecimale(Frazione fr){
    printf("%f", (float)numeratore(fr)/denominatore(fr));
}

Frazione leggiFrazione(void) {
    Frazione fr;
    int n, d;
    scanf("%d%d", &n, &d);
    fr = frazione(n,d);
    return fr;
}

int main() {
  Frazione f1;
  Frazione f2;
  f2 = frazione(3, 4);
  f1 = leggiFrazione();
  stampaFrazionaria(f1);
  printf("\n");
  stampaDecimale(f2);
  printf("\n");
}