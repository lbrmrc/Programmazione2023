#include "contatore.h"

int valore(Contatore c) {
  return c.valore;
}

void reset(Contatore *pc){
    pc->valore = 0;
}

void incrementa(Contatore *pc){
    pc->valore++;
}