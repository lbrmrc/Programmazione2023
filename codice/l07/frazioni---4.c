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

void frazione(int n, int d, Frazione* pf) {
  if (d == 0) {
    printf("Errore: denominatore nullo\n");
    exit(1);
  }

  int m = mcd(va(n), va(d));
  pf->numeratore = n / m;
  // equivale a (*pf).numeratore = n / m;
  pf->denominatore = d / m;
}

int num(Frazione fr) {
  return fr.numeratore;
}

int den(Frazione fr) {
  return fr.denominatore;
}

void opposto(Frazione* pf, Frazione* pfo) {
  frazione(-num(*pf), den(*pf), pfo);
}

void inverso(Frazione* pf, Frazione* pfi) {
  frazione(den(*pf), num(*pf), pfi);
}

Frazione somma(Frazione* pf1, Frazione* pf2, Frazione* pfs) {
  frazione(num(*pf1) * den(*pf2) + den(*pf1) * num(*pf2), den(*pf1) * den(*pf2),
           pfs);
}

Frazione differenza(Frazione* pf1, Frazione* pf2, Frazione* pfd) {
  Frazione fr;
  opposto(pf2, &fr);
  somma(pf1, &fr, pfd);
}

Frazione prodotto(Frazione* pf1, Frazione* pf2, Frazione* pfp) {
  frazione(num(*pf1) * num(*pf2), den(*pf1) * den(*pf2), pfp);
}

Frazione quoziente(Frazione* pf1, Frazione* pf2, Frazione* pfq) {
  Frazione fr;
  inverso(pf2, &fr);
  prodotto(pf1, &fr, pfq);
}

void stampaFrazionaria(Frazione fr) {
  printf("%d/%d", num(fr), den(fr));
}

void stampaDecimale(Frazione fr) {
  printf("%f", (float)num(fr) / den(fr));
}

Frazione leggiFrazione(Frazione* pfr) {
  int n, d;
  scanf("%d%d", &n, &d);
  frazione(n, d, pfr);
}

int main() {
  Frazione f1;
  Frazione f2;
  Frazione risultato;
  char operazione;
  printf("Operazione?\n");
  scanf("%c", &operazione);
  printf("Numeratore e denominatore della prima frazione?\n");
  leggiFrazione(&f1);
  printf("Numeratore e denominatore della prima frazione?\n");
  leggiFrazione(&f2);
  switch (operazione) {
    case '+':
      somma(&f1, &f2, &risultato);
      break;
    case '-':
      differenza(&f1, &f2, &risultato);
      break;
    case '*':
      prodotto(&f1, &f2, &risultato);
      break;
    case '/':
      quoziente(&f1, &f2, &risultato);
      break;
    default:
      break;
  }
  stampaFrazionaria(risultato);
  printf("\n");

  return 0;
}