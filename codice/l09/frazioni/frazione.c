#include <stdio.h>
#include <stdlib.h>

#include "aritmetica.h"
#include "frazione.h"



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

