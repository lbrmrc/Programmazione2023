#include <stdio.h>
#include <stdlib.h>

int va(int n) {
  if (n < 0)
    return -n;
  else
    return n;
}

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
  if (d == 0) {
    printf("Errore: denominatore nullo\n");
    exit(1);
  }

  int m = mcd(va(n), va(d));
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

Frazione opposto(Frazione f) {
  return frazione(-num(f), den(f));
}

Frazione inverso(Frazione f) {
  return frazione(den(f), num(f));
}

Frazione somma(Frazione f1, Frazione f2) {
  return frazione(num(f1) * den(f2) + den(f1) * num(f2), den(f1) * den(f2));
}

Frazione differenza(Frazione f1, Frazione f2) {
  return somma(f1, opposto(f2));
}

Frazione prodotto(Frazione f1, Frazione f2) {
  return frazione(num(f1) * num(f2), den(f1) * den(f2));
}

Frazione quoziente(Frazione f1, Frazione f2) {
  return prodotto(f1, inverso(f2));
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
  char operazione;
  printf("Operazione?\n");
  scanf("%c", &operazione);
  printf("Numeratore e denominatore della prima frazione?\n");
  f1 = leggiFrazione();
  printf("Numeratore e denominatore della prima frazione?\n");
  f2 = leggiFrazione();
  switch (operazione) {
    case '+':
      stampaFrazionaria(somma(f1, f2));
      break;
    case '-':
      stampaFrazionaria(differenza(f1, f2));
      break;
    case '*':
      stampaFrazionaria(prodotto(f1, f2));
      break;
    case '/':
      stampaFrazionaria(quoziente(f1, f2));
      break;
    default:
      break;
  }
  printf("\n");

  return 0;
}